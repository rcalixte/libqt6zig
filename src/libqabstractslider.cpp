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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractSlider_Tr(const char* s) {
    auto _ret = QAbstractSlider::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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
    QAbstractSlider::connect(self,
                             static_cast<void (QAbstractSlider::*)(int)>(&QAbstractSlider::valueChanged),
                             [self, slotFunc](int value) {
                                 int sigval1 = value;
                                 slotFunc(self, sigval1);
                             });
}

void QAbstractSlider_SliderPressed(QAbstractSlider* self) {
    self->sliderPressed();
}

void QAbstractSlider_Connect_SliderPressed(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*) = reinterpret_cast<void (*)(QAbstractSlider*)>(slot);
    QAbstractSlider::connect(self,
                             static_cast<void (QAbstractSlider::*)()>(&QAbstractSlider::sliderPressed),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QAbstractSlider_SliderMoved(QAbstractSlider* self, int position) {
    self->sliderMoved(static_cast<int>(position));
}

void QAbstractSlider_Connect_SliderMoved(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*, int) = reinterpret_cast<void (*)(QAbstractSlider*, int)>(slot);
    QAbstractSlider::connect(self,
                             static_cast<void (QAbstractSlider::*)(int)>(&QAbstractSlider::sliderMoved),
                             [self, slotFunc](int position) {
                                 int sigval1 = position;
                                 slotFunc(self, sigval1);
                             });
}

void QAbstractSlider_SliderReleased(QAbstractSlider* self) {
    self->sliderReleased();
}

void QAbstractSlider_Connect_SliderReleased(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*) = reinterpret_cast<void (*)(QAbstractSlider*)>(slot);
    QAbstractSlider::connect(self,
                             static_cast<void (QAbstractSlider::*)()>(&QAbstractSlider::sliderReleased),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QAbstractSlider_RangeChanged(QAbstractSlider* self, int min, int max) {
    self->rangeChanged(static_cast<int>(min), static_cast<int>(max));
}

void QAbstractSlider_Connect_RangeChanged(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*, int, int) = reinterpret_cast<void (*)(QAbstractSlider*, int, int)>(slot);
    QAbstractSlider::connect(self,
                             static_cast<void (QAbstractSlider::*)(int, int)>(&QAbstractSlider::rangeChanged),
                             [self, slotFunc](int min, int max) {
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
    QAbstractSlider::connect(self,
                             static_cast<void (QAbstractSlider::*)(int)>(&QAbstractSlider::actionTriggered),
                             [self, slotFunc](int action) {
                                 int sigval1 = action;
                                 slotFunc(self, sigval1);
                             });
}

bool QAbstractSlider_Event(QAbstractSlider* self, QEvent* e) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        return vqabstractslider->event(e);
    }
    qFatal("Error: Protected method QAbstractSlider::event called without a directly constructed type");
}

void QAbstractSlider_SliderChange(QAbstractSlider* self, int change) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->sliderChange(static_cast<VirtualQAbstractSlider::SliderChange>(change));
    }
}

void QAbstractSlider_KeyPressEvent(QAbstractSlider* self, QKeyEvent* ev) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->keyPressEvent(ev);
    }
}

void QAbstractSlider_TimerEvent(QAbstractSlider* self, QTimerEvent* param1) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->timerEvent(param1);
    }
}

void QAbstractSlider_WheelEvent(QAbstractSlider* self, QWheelEvent* e) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->wheelEvent(e);
    }
}

void QAbstractSlider_ChangeEvent(QAbstractSlider* self, QEvent* e) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->changeEvent(e);
    }
}

libqt_string QAbstractSlider_Tr2(const char* s, const char* c) {
    auto _ret = QAbstractSlider::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractSlider_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAbstractSlider::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAbstractSlider_SuperMetaObject(const QAbstractSlider* self) {
    return (QMetaObject*)self->QAbstractSlider::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMetaObject(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self)))
        vqabstractslider->qabstractslider_metaobject_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAbstractSlider_SuperMetacast(QAbstractSlider* self, const char* param1) {
    return self->QAbstractSlider::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMetacast(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_metacast_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAbstractSlider_SuperMetacall(QAbstractSlider* self, int param1, int param2, void** param3) {
    return self->QAbstractSlider::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMetacall(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_metacall_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QAbstractSlider_SuperEvent(QAbstractSlider* self, QEvent* e) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        return vqabstractslider->QAbstractSlider::event(e);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_event_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Event_Callback>(slot);
}

// Base class handler implementation
void QAbstractSlider_SuperSliderChange(QAbstractSlider* self, int change) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::sliderChange(static_cast<VirtualQAbstractSlider::SliderChange>(change));
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::sliderChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSliderChange(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_sliderchange_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SliderChange_Callback>(slot);
}

// Base class handler implementation
void QAbstractSlider_SuperKeyPressEvent(QAbstractSlider* self, QKeyEvent* ev) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::keyPressEvent(ev);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnKeyPressEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_keypressevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractSlider_SuperTimerEvent(QAbstractSlider* self, QTimerEvent* param1) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnTimerEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_timerevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_TimerEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractSlider_SuperWheelEvent(QAbstractSlider* self, QWheelEvent* e) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnWheelEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_wheelevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_WheelEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractSlider_SuperChangeEvent(QAbstractSlider* self, QEvent* e) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnChangeEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_changeevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QAbstractSlider_DevType(const QAbstractSlider* self) {
    return self->devType();
}

// Base class handler implementation
int QAbstractSlider_SuperDevType(const QAbstractSlider* self) {
    return self->QAbstractSlider::devType();
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDevType(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self)))
        vqabstractslider->qabstractslider_devtype_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_DevType_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_SetVisible(QAbstractSlider* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QAbstractSlider_SuperSetVisible(QAbstractSlider* self, bool visible) {
    self->QAbstractSlider::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSetVisible(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_setvisible_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QAbstractSlider_SizeHint(const QAbstractSlider* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QAbstractSlider_SuperSizeHint(const QAbstractSlider* self) {
    return new QSize(self->QAbstractSlider::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSizeHint(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self)))
        vqabstractslider->qabstractslider_sizehint_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QAbstractSlider_MinimumSizeHint(const QAbstractSlider* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QAbstractSlider_SuperMinimumSizeHint(const QAbstractSlider* self) {
    return new QSize(self->QAbstractSlider::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMinimumSizeHint(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self)))
        vqabstractslider->qabstractslider_minimumsizehint_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QAbstractSlider_HeightForWidth(const QAbstractSlider* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QAbstractSlider_SuperHeightForWidth(const QAbstractSlider* self, int param1) {
    return self->QAbstractSlider::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnHeightForWidth(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self)))
        vqabstractslider->qabstractslider_heightforwidth_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractSlider_HasHeightForWidth(const QAbstractSlider* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QAbstractSlider_SuperHasHeightForWidth(const QAbstractSlider* self) {
    return self->QAbstractSlider::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnHasHeightForWidth(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self)))
        vqabstractslider->qabstractslider_hasheightforwidth_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QAbstractSlider_PaintEngine(const QAbstractSlider* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QAbstractSlider_SuperPaintEngine(const QAbstractSlider* self) {
    return self->QAbstractSlider::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnPaintEngine(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self)))
        vqabstractslider->qabstractslider_paintengine_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_MousePressEvent(QAbstractSlider* self, QMouseEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperMousePressEvent(QAbstractSlider* self, QMouseEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMousePressEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_mousepressevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_MouseReleaseEvent(QAbstractSlider* self, QMouseEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperMouseReleaseEvent(QAbstractSlider* self, QMouseEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMouseReleaseEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_mousereleaseevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_MouseDoubleClickEvent(QAbstractSlider* self, QMouseEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperMouseDoubleClickEvent(QAbstractSlider* self, QMouseEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMouseDoubleClickEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_mousedoubleclickevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_MouseMoveEvent(QAbstractSlider* self, QMouseEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperMouseMoveEvent(QAbstractSlider* self, QMouseEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMouseMoveEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_mousemoveevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_KeyReleaseEvent(QAbstractSlider* self, QKeyEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperKeyReleaseEvent(QAbstractSlider* self, QKeyEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnKeyReleaseEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_keyreleaseevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_FocusInEvent(QAbstractSlider* self, QFocusEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperFocusInEvent(QAbstractSlider* self, QFocusEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnFocusInEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_focusinevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_FocusOutEvent(QAbstractSlider* self, QFocusEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperFocusOutEvent(QAbstractSlider* self, QFocusEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnFocusOutEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_focusoutevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_EnterEvent(QAbstractSlider* self, QEnterEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperEnterEvent(QAbstractSlider* self, QEnterEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnEnterEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_enterevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_LeaveEvent(QAbstractSlider* self, QEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperLeaveEvent(QAbstractSlider* self, QEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnLeaveEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_leaveevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_PaintEvent(QAbstractSlider* self, QPaintEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperPaintEvent(QAbstractSlider* self, QPaintEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnPaintEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_paintevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_MoveEvent(QAbstractSlider* self, QMoveEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperMoveEvent(QAbstractSlider* self, QMoveEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMoveEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_moveevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_ResizeEvent(QAbstractSlider* self, QResizeEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperResizeEvent(QAbstractSlider* self, QResizeEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnResizeEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_resizeevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_CloseEvent(QAbstractSlider* self, QCloseEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperCloseEvent(QAbstractSlider* self, QCloseEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnCloseEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_closeevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_ContextMenuEvent(QAbstractSlider* self, QContextMenuEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperContextMenuEvent(QAbstractSlider* self, QContextMenuEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnContextMenuEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_contextmenuevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_TabletEvent(QAbstractSlider* self, QTabletEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperTabletEvent(QAbstractSlider* self, QTabletEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnTabletEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_tabletevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_ActionEvent(QAbstractSlider* self, QActionEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperActionEvent(QAbstractSlider* self, QActionEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnActionEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_actionevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_DragEnterEvent(QAbstractSlider* self, QDragEnterEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperDragEnterEvent(QAbstractSlider* self, QDragEnterEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDragEnterEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_dragenterevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_DragMoveEvent(QAbstractSlider* self, QDragMoveEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperDragMoveEvent(QAbstractSlider* self, QDragMoveEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDragMoveEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_dragmoveevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_DragLeaveEvent(QAbstractSlider* self, QDragLeaveEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperDragLeaveEvent(QAbstractSlider* self, QDragLeaveEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDragLeaveEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_dragleaveevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_DropEvent(QAbstractSlider* self, QDropEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperDropEvent(QAbstractSlider* self, QDropEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDropEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_dropevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_ShowEvent(QAbstractSlider* self, QShowEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperShowEvent(QAbstractSlider* self, QShowEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnShowEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_showevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_HideEvent(QAbstractSlider* self, QHideEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperHideEvent(QAbstractSlider* self, QHideEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnHideEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_hideevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractSlider_NativeEvent(QAbstractSlider* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        return vqabstractslider->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QAbstractSlider_SuperNativeEvent(QAbstractSlider* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        return vqabstractslider->QAbstractSlider::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnNativeEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_nativeevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QAbstractSlider_Metric(const QAbstractSlider* self, int param1) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider) {
        return vqabstractslider->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QAbstractSlider_SuperMetric(const QAbstractSlider* self, int param1) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return vqabstractslider->QAbstractSlider::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMetric(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self)))
        vqabstractslider->qabstractslider_metric_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Metric_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_InitPainter(const QAbstractSlider* self, QPainter* painter) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider) {
        vqabstractslider->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperInitPainter(const QAbstractSlider* self, QPainter* painter) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->QAbstractSlider::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnInitPainter(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self)))
        vqabstractslider->qabstractslider_initpainter_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QAbstractSlider_Redirected(const QAbstractSlider* self, QPoint* offset) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider) {
        return vqabstractslider->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QAbstractSlider_SuperRedirected(const QAbstractSlider* self, QPoint* offset) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return vqabstractslider->QAbstractSlider::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnRedirected(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self)))
        vqabstractslider->qabstractslider_redirected_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QAbstractSlider_SharedPainter(const QAbstractSlider* self) {
    auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self));
    if (vqabstractslider) {
        return vqabstractslider->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QAbstractSlider_SuperSharedPainter(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return vqabstractslider->QAbstractSlider::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSharedPainter(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self)))
        vqabstractslider->qabstractslider_sharedpainter_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_InputMethodEvent(QAbstractSlider* self, QInputMethodEvent* param1) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperInputMethodEvent(QAbstractSlider* self, QInputMethodEvent* param1) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnInputMethodEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_inputmethodevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QAbstractSlider_InputMethodQuery(const QAbstractSlider* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QAbstractSlider_SuperInputMethodQuery(const QAbstractSlider* self, int param1) {
    return new QVariant(self->QAbstractSlider::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnInputMethodQuery(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self)))
        vqabstractslider->qabstractslider_inputmethodquery_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractSlider_FocusNextPrevChild(QAbstractSlider* self, bool next) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        return vqabstractslider->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QAbstractSlider_SuperFocusNextPrevChild(QAbstractSlider* self, bool next) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        return vqabstractslider->QAbstractSlider::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnFocusNextPrevChild(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_focusnextprevchild_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractSlider_EventFilter(QAbstractSlider* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAbstractSlider_SuperEventFilter(QAbstractSlider* self, QObject* watched, QEvent* event) {
    return self->QAbstractSlider::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnEventFilter(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_eventfilter_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_ChildEvent(QAbstractSlider* self, QChildEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperChildEvent(QAbstractSlider* self, QChildEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnChildEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_childevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_CustomEvent(QAbstractSlider* self, QEvent* event) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperCustomEvent(QAbstractSlider* self, QEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnCustomEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_customevent_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_ConnectNotify(QAbstractSlider* self, const QMetaMethod* signal) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperConnectNotify(QAbstractSlider* self, const QMetaMethod* signal) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnConnectNotify(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_connectnotify_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAbstractSlider_DisconnectNotify(QAbstractSlider* self, const QMetaMethod* signal) {
    auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self);
    if (vqabstractslider) {
        vqabstractslider->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractSlider::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractSlider_SuperDisconnectNotify(QAbstractSlider* self, const QMetaMethod* signal) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->QAbstractSlider::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractSlider::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDisconnectNotify(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self))
        vqabstractslider->qabstractslider_disconnectnotify_callback = reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QAbstractSlider_SetRepeatAction(QAbstractSlider* self, int action) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->VirtualQAbstractSlider::setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else
        qFatal("Error: Protected method QAbstractSlider::setRepeatAction called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractSlider_RepeatAction(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return static_cast<int>(vqabstractslider->VirtualQAbstractSlider::repeatAction());
    } else
        qFatal("Error: Protected method QAbstractSlider::repeatAction called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractSlider_SetRepeatAction2(QAbstractSlider* self, int action, int thresholdTime) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->VirtualQAbstractSlider::setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime));
    } else
        qFatal("Error: Protected method QAbstractSlider::setRepeatAction2 called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractSlider_SetRepeatAction3(QAbstractSlider* self, int action, int thresholdTime, int repeatTime) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->VirtualQAbstractSlider::setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime), static_cast<int>(repeatTime));
    } else
        qFatal("Error: Protected method QAbstractSlider::setRepeatAction3 called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractSlider_UpdateMicroFocus(QAbstractSlider* self) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->VirtualQAbstractSlider::updateMicroFocus();
    } else
        qFatal("Error: Protected method QAbstractSlider::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractSlider_Create(QAbstractSlider* self) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->VirtualQAbstractSlider::create();
    } else
        qFatal("Error: Protected method QAbstractSlider::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractSlider_Destroy(QAbstractSlider* self) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->VirtualQAbstractSlider::destroy();
    } else
        qFatal("Error: Protected method QAbstractSlider::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractSlider_FocusNextChild(QAbstractSlider* self) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        return vqabstractslider->VirtualQAbstractSlider::focusNextChild();
    } else
        qFatal("Error: Protected method QAbstractSlider::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractSlider_FocusPreviousChild(QAbstractSlider* self) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        return vqabstractslider->VirtualQAbstractSlider::focusPreviousChild();
    } else
        qFatal("Error: Protected method QAbstractSlider::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QAbstractSlider_Sender(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return vqabstractslider->VirtualQAbstractSlider::sender();
    } else
        qFatal("Error: Protected method QAbstractSlider::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractSlider_SenderSignalIndex(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return vqabstractslider->VirtualQAbstractSlider::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAbstractSlider::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractSlider_Receivers(const QAbstractSlider* self, const char* signal) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return vqabstractslider->VirtualQAbstractSlider::receivers(signal);
    } else
        qFatal("Error: Protected method QAbstractSlider::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractSlider_IsSignalConnected(const QAbstractSlider* self, const QMetaMethod* signal) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return vqabstractslider->VirtualQAbstractSlider::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAbstractSlider::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QAbstractSlider_GetDecodedMetricF(const QAbstractSlider* self, int metricA, int metricB) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return vqabstractslider->VirtualQAbstractSlider::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QAbstractSlider::getDecodedMetricF called without a directly constructed type");
}

void QAbstractSlider_Delete(QAbstractSlider* self) {
    delete self;
}
