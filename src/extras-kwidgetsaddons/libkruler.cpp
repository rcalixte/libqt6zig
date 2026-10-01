#include <KRuler>
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
#include <kruler.h>
#include "libkruler.h"
#include "libkruler.hxx"

KRuler* KRuler_new(QWidget* parent) {
    return new VirtualKRuler(parent);
}

KRuler* KRuler_new2() {
    return new VirtualKRuler();
}

KRuler* KRuler_new3(int orient) {
    return new VirtualKRuler(static_cast<Qt::Orientation>(orient));
}

KRuler* KRuler_new4(int orient, int widgetWidth) {
    return new VirtualKRuler(static_cast<Qt::Orientation>(orient), static_cast<int>(widgetWidth));
}

KRuler* KRuler_new5(int orient, QWidget* parent) {
    return new VirtualKRuler(static_cast<Qt::Orientation>(orient), parent);
}

KRuler* KRuler_new6(int orient, QWidget* parent, int f) {
    return new VirtualKRuler(static_cast<Qt::Orientation>(orient), parent, static_cast<Qt::WindowFlags>(f));
}

KRuler* KRuler_new7(int orient, int widgetWidth, QWidget* parent) {
    return new VirtualKRuler(static_cast<Qt::Orientation>(orient), static_cast<int>(widgetWidth), parent);
}

KRuler* KRuler_new8(int orient, int widgetWidth, QWidget* parent, int f) {
    return new VirtualKRuler(static_cast<Qt::Orientation>(orient), static_cast<int>(widgetWidth), parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* KRuler_MetaObject(const KRuler* self) {
    return (QMetaObject*)self->metaObject();
}

void* KRuler_Metacast(KRuler* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KRuler_Metacall(KRuler* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KRuler_Tr(const char* s) {
    auto _ret = KRuler::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KRuler_SetTinyMarkDistance(KRuler* self, int tinyMarkDistance) {
    self->setTinyMarkDistance(static_cast<int>(tinyMarkDistance));
}

int KRuler_TinyMarkDistance(const KRuler* self) {
    return self->tinyMarkDistance();
}

void KRuler_SetLittleMarkDistance(KRuler* self, int littleMarkDistance) {
    self->setLittleMarkDistance(static_cast<int>(littleMarkDistance));
}

int KRuler_LittleMarkDistance(const KRuler* self) {
    return self->littleMarkDistance();
}

void KRuler_SetMediumMarkDistance(KRuler* self, int mediumMarkDistance) {
    self->setMediumMarkDistance(static_cast<int>(mediumMarkDistance));
}

int KRuler_MediumMarkDistance(const KRuler* self) {
    return self->mediumMarkDistance();
}

void KRuler_SetBigMarkDistance(KRuler* self, int bigMarkDistance) {
    self->setBigMarkDistance(static_cast<int>(bigMarkDistance));
}

int KRuler_BigMarkDistance(const KRuler* self) {
    return self->bigMarkDistance();
}

void KRuler_SetShowTinyMarks(KRuler* self, bool showTinyMarks) {
    self->setShowTinyMarks(showTinyMarks);
}

bool KRuler_ShowTinyMarks(const KRuler* self) {
    return self->showTinyMarks();
}

void KRuler_SetShowLittleMarks(KRuler* self, bool showLittleMarks) {
    self->setShowLittleMarks(showLittleMarks);
}

bool KRuler_ShowLittleMarks(const KRuler* self) {
    return self->showLittleMarks();
}

void KRuler_SetShowMediumMarks(KRuler* self, bool showMediumMarks) {
    self->setShowMediumMarks(showMediumMarks);
}

bool KRuler_ShowMediumMarks(const KRuler* self) {
    return self->showMediumMarks();
}

void KRuler_SetShowBigMarks(KRuler* self, bool showBigMarks) {
    self->setShowBigMarks(showBigMarks);
}

bool KRuler_ShowBigMarks(const KRuler* self) {
    return self->showBigMarks();
}

void KRuler_SetShowEndMarks(KRuler* self, bool showEndMarks) {
    self->setShowEndMarks(showEndMarks);
}

bool KRuler_ShowEndMarks(const KRuler* self) {
    return self->showEndMarks();
}

void KRuler_SetShowPointer(KRuler* self, bool showPointer) {
    self->setShowPointer(showPointer);
}

bool KRuler_ShowPointer(const KRuler* self) {
    return self->showPointer();
}

void KRuler_SetShowEndLabel(KRuler* self, bool showEndLabel) {
    self->setShowEndLabel(showEndLabel);
}

bool KRuler_ShowEndLabel(const KRuler* self) {
    return self->showEndLabel();
}

void KRuler_SetEndLabel(KRuler* self, const libqt_string endLabel) {
    QString endLabel_QString = QString::fromUtf8(endLabel.data, endLabel.len);
    self->setEndLabel(endLabel_QString);
}

libqt_string KRuler_EndLabel(const KRuler* self) {
    auto _ret = self->endLabel();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KRuler_SetRulerMetricStyle(KRuler* self, int rulerMetricStyle) {
    self->setRulerMetricStyle(static_cast<KRuler::MetricStyle>(rulerMetricStyle));
}

void KRuler_SetPixelPerMark(KRuler* self, double rate) {
    self->setPixelPerMark(static_cast<double>(rate));
}

double KRuler_PixelPerMark(const KRuler* self) {
    return self->pixelPerMark();
}

void KRuler_SetLength(KRuler* self, int length) {
    self->setLength(static_cast<int>(length));
}

int KRuler_Length(const KRuler* self) {
    return self->length();
}

void KRuler_SetLengthFixed(KRuler* self, bool fix) {
    self->setLengthFixed(fix);
}

bool KRuler_LengthFixed(const KRuler* self) {
    return self->lengthFixed();
}

void KRuler_SlideUp(KRuler* self) {
    self->slideUp();
}

void KRuler_SlideDown(KRuler* self) {
    self->slideDown();
}

void KRuler_SetOffset(KRuler* self, int offset) {
    self->setOffset(static_cast<int>(offset));
}

int KRuler_Offset(const KRuler* self) {
    return self->offset();
}

int KRuler_EndOffset(const KRuler* self) {
    return self->endOffset();
}

void KRuler_SlotNewValue(KRuler* self, int param1) {
    self->slotNewValue(static_cast<int>(param1));
}

void KRuler_SlotNewOffset(KRuler* self, int param1) {
    self->slotNewOffset(static_cast<int>(param1));
}

void KRuler_SlotEndOffset(KRuler* self, int param1) {
    self->slotEndOffset(static_cast<int>(param1));
}

void KRuler_PaintEvent(KRuler* self, QPaintEvent* param1) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->paintEvent(param1);
    }
}

libqt_string KRuler_Tr2(const char* s, const char* c) {
    auto _ret = KRuler::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KRuler_Tr3(const char* s, const char* c, int n) {
    auto _ret = KRuler::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KRuler_SlideUp1(KRuler* self, int count) {
    self->slideUp(static_cast<int>(count));
}

void KRuler_SlideDown1(KRuler* self, int count) {
    self->slideDown(static_cast<int>(count));
}

// Base class handler implementation
QMetaObject* KRuler_SuperMetaObject(const KRuler* self) {
    return (QMetaObject*)self->KRuler::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnMetaObject(KRuler* self, intptr_t slot) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self)))
        vkruler->kruler_metaobject_callback = reinterpret_cast<VirtualKRuler::KRuler_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KRuler_SuperMetacast(KRuler* self, const char* param1) {
    return self->KRuler::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnMetacast(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_metacast_callback = reinterpret_cast<VirtualKRuler::KRuler_Metacast_Callback>(slot);
}

// Base class handler implementation
int KRuler_SuperMetacall(KRuler* self, int param1, int param2, void** param3) {
    return self->KRuler::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnMetacall(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_metacall_callback = reinterpret_cast<VirtualKRuler::KRuler_Metacall_Callback>(slot);
}

// Base class handler implementation
void KRuler_SuperPaintEvent(KRuler* self, QPaintEvent* param1) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRuler::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnPaintEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_paintevent_callback = reinterpret_cast<VirtualKRuler::KRuler_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
bool KRuler_Event(KRuler* self, QEvent* e) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        return vkruler->event(e);
    } else {
        qFatal("Error: Protected virtual method KRuler::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRuler_SuperEvent(KRuler* self, QEvent* e) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        return vkruler->KRuler::event(e);
    } else
        qFatal("Error: Protected virtual method KRuler::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_event_callback = reinterpret_cast<VirtualKRuler::KRuler_Event_Callback>(slot);
}

// Derived class handler implementation
void KRuler_SliderChange(KRuler* self, int change) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->sliderChange(static_cast<VirtualKRuler::SliderChange>(change));
    } else {
        qFatal("Error: Protected virtual method KRuler::sliderChange called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperSliderChange(KRuler* self, int change) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::sliderChange(static_cast<VirtualKRuler::SliderChange>(change));
    } else
        qFatal("Error: Protected virtual method KRuler::sliderChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnSliderChange(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_sliderchange_callback = reinterpret_cast<VirtualKRuler::KRuler_SliderChange_Callback>(slot);
}

// Derived class handler implementation
void KRuler_KeyPressEvent(KRuler* self, QKeyEvent* ev) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->keyPressEvent(ev);
    } else {
        qFatal("Error: Protected virtual method KRuler::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperKeyPressEvent(KRuler* self, QKeyEvent* ev) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::keyPressEvent(ev);
    } else
        qFatal("Error: Protected virtual method KRuler::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnKeyPressEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_keypressevent_callback = reinterpret_cast<VirtualKRuler::KRuler_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_TimerEvent(KRuler* self, QTimerEvent* param1) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->timerEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRuler::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperTimerEvent(KRuler* self, QTimerEvent* param1) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRuler::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnTimerEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_timerevent_callback = reinterpret_cast<VirtualKRuler::KRuler_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_WheelEvent(KRuler* self, QWheelEvent* e) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRuler::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperWheelEvent(KRuler* self, QWheelEvent* e) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method KRuler::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnWheelEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_wheelevent_callback = reinterpret_cast<VirtualKRuler::KRuler_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_ChangeEvent(KRuler* self, QEvent* e) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRuler::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperChangeEvent(KRuler* self, QEvent* e) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method KRuler::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnChangeEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_changeevent_callback = reinterpret_cast<VirtualKRuler::KRuler_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KRuler_DevType(const KRuler* self) {
    return self->devType();
}

// Base class handler implementation
int KRuler_SuperDevType(const KRuler* self) {
    return self->KRuler::devType();
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnDevType(KRuler* self, intptr_t slot) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self)))
        vkruler->kruler_devtype_callback = reinterpret_cast<VirtualKRuler::KRuler_DevType_Callback>(slot);
}

// Derived class handler implementation
void KRuler_SetVisible(KRuler* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KRuler_SuperSetVisible(KRuler* self, bool visible) {
    self->KRuler::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnSetVisible(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_setvisible_callback = reinterpret_cast<VirtualKRuler::KRuler_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KRuler_SizeHint(const KRuler* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KRuler_SuperSizeHint(const KRuler* self) {
    return new QSize(self->KRuler::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnSizeHint(KRuler* self, intptr_t slot) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self)))
        vkruler->kruler_sizehint_callback = reinterpret_cast<VirtualKRuler::KRuler_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KRuler_MinimumSizeHint(const KRuler* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KRuler_SuperMinimumSizeHint(const KRuler* self) {
    return new QSize(self->KRuler::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnMinimumSizeHint(KRuler* self, intptr_t slot) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self)))
        vkruler->kruler_minimumsizehint_callback = reinterpret_cast<VirtualKRuler::KRuler_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KRuler_HeightForWidth(const KRuler* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KRuler_SuperHeightForWidth(const KRuler* self, int param1) {
    return self->KRuler::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnHeightForWidth(KRuler* self, intptr_t slot) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self)))
        vkruler->kruler_heightforwidth_callback = reinterpret_cast<VirtualKRuler::KRuler_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KRuler_HasHeightForWidth(const KRuler* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KRuler_SuperHasHeightForWidth(const KRuler* self) {
    return self->KRuler::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnHasHeightForWidth(KRuler* self, intptr_t slot) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self)))
        vkruler->kruler_hasheightforwidth_callback = reinterpret_cast<VirtualKRuler::KRuler_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KRuler_PaintEngine(const KRuler* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KRuler_SuperPaintEngine(const KRuler* self) {
    return self->KRuler::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnPaintEngine(KRuler* self, intptr_t slot) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self)))
        vkruler->kruler_paintengine_callback = reinterpret_cast<VirtualKRuler::KRuler_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KRuler_MousePressEvent(KRuler* self, QMouseEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperMousePressEvent(KRuler* self, QMouseEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnMousePressEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_mousepressevent_callback = reinterpret_cast<VirtualKRuler::KRuler_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_MouseReleaseEvent(KRuler* self, QMouseEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperMouseReleaseEvent(KRuler* self, QMouseEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnMouseReleaseEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_mousereleaseevent_callback = reinterpret_cast<VirtualKRuler::KRuler_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_MouseDoubleClickEvent(KRuler* self, QMouseEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperMouseDoubleClickEvent(KRuler* self, QMouseEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnMouseDoubleClickEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_mousedoubleclickevent_callback = reinterpret_cast<VirtualKRuler::KRuler_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_MouseMoveEvent(KRuler* self, QMouseEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperMouseMoveEvent(KRuler* self, QMouseEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnMouseMoveEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_mousemoveevent_callback = reinterpret_cast<VirtualKRuler::KRuler_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_KeyReleaseEvent(KRuler* self, QKeyEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperKeyReleaseEvent(KRuler* self, QKeyEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnKeyReleaseEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_keyreleaseevent_callback = reinterpret_cast<VirtualKRuler::KRuler_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_FocusInEvent(KRuler* self, QFocusEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperFocusInEvent(KRuler* self, QFocusEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnFocusInEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_focusinevent_callback = reinterpret_cast<VirtualKRuler::KRuler_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_FocusOutEvent(KRuler* self, QFocusEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperFocusOutEvent(KRuler* self, QFocusEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnFocusOutEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_focusoutevent_callback = reinterpret_cast<VirtualKRuler::KRuler_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_EnterEvent(KRuler* self, QEnterEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperEnterEvent(KRuler* self, QEnterEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnEnterEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_enterevent_callback = reinterpret_cast<VirtualKRuler::KRuler_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_LeaveEvent(KRuler* self, QEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperLeaveEvent(KRuler* self, QEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnLeaveEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_leaveevent_callback = reinterpret_cast<VirtualKRuler::KRuler_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_MoveEvent(KRuler* self, QMoveEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperMoveEvent(KRuler* self, QMoveEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnMoveEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_moveevent_callback = reinterpret_cast<VirtualKRuler::KRuler_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_ResizeEvent(KRuler* self, QResizeEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperResizeEvent(KRuler* self, QResizeEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnResizeEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_resizeevent_callback = reinterpret_cast<VirtualKRuler::KRuler_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_CloseEvent(KRuler* self, QCloseEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperCloseEvent(KRuler* self, QCloseEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnCloseEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_closeevent_callback = reinterpret_cast<VirtualKRuler::KRuler_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_ContextMenuEvent(KRuler* self, QContextMenuEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperContextMenuEvent(KRuler* self, QContextMenuEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnContextMenuEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_contextmenuevent_callback = reinterpret_cast<VirtualKRuler::KRuler_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_TabletEvent(KRuler* self, QTabletEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperTabletEvent(KRuler* self, QTabletEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnTabletEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_tabletevent_callback = reinterpret_cast<VirtualKRuler::KRuler_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_ActionEvent(KRuler* self, QActionEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperActionEvent(KRuler* self, QActionEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnActionEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_actionevent_callback = reinterpret_cast<VirtualKRuler::KRuler_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_DragEnterEvent(KRuler* self, QDragEnterEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperDragEnterEvent(KRuler* self, QDragEnterEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnDragEnterEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_dragenterevent_callback = reinterpret_cast<VirtualKRuler::KRuler_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_DragMoveEvent(KRuler* self, QDragMoveEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperDragMoveEvent(KRuler* self, QDragMoveEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnDragMoveEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_dragmoveevent_callback = reinterpret_cast<VirtualKRuler::KRuler_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_DragLeaveEvent(KRuler* self, QDragLeaveEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperDragLeaveEvent(KRuler* self, QDragLeaveEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnDragLeaveEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_dragleaveevent_callback = reinterpret_cast<VirtualKRuler::KRuler_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_DropEvent(KRuler* self, QDropEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperDropEvent(KRuler* self, QDropEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnDropEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_dropevent_callback = reinterpret_cast<VirtualKRuler::KRuler_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_ShowEvent(KRuler* self, QShowEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperShowEvent(KRuler* self, QShowEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnShowEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_showevent_callback = reinterpret_cast<VirtualKRuler::KRuler_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_HideEvent(KRuler* self, QHideEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperHideEvent(KRuler* self, QHideEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnHideEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_hideevent_callback = reinterpret_cast<VirtualKRuler::KRuler_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KRuler_NativeEvent(KRuler* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        return vkruler->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KRuler::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRuler_SuperNativeEvent(KRuler* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        return vkruler->KRuler::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KRuler::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnNativeEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_nativeevent_callback = reinterpret_cast<VirtualKRuler::KRuler_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KRuler_Metric(const KRuler* self, int param1) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler) {
        return vkruler->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KRuler::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KRuler_SuperMetric(const KRuler* self, int param1) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self))) {
        return vkruler->KRuler::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KRuler::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnMetric(KRuler* self, intptr_t slot) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self)))
        vkruler->kruler_metric_callback = reinterpret_cast<VirtualKRuler::KRuler_Metric_Callback>(slot);
}

// Derived class handler implementation
void KRuler_InitPainter(const KRuler* self, QPainter* painter) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler) {
        vkruler->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KRuler::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperInitPainter(const KRuler* self, QPainter* painter) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self))) {
        vkruler->KRuler::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KRuler::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnInitPainter(KRuler* self, intptr_t slot) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self)))
        vkruler->kruler_initpainter_callback = reinterpret_cast<VirtualKRuler::KRuler_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KRuler_Redirected(const KRuler* self, QPoint* offset) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler) {
        return vkruler->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KRuler::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KRuler_SuperRedirected(const KRuler* self, QPoint* offset) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self))) {
        return vkruler->KRuler::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KRuler::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnRedirected(KRuler* self, intptr_t slot) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self)))
        vkruler->kruler_redirected_callback = reinterpret_cast<VirtualKRuler::KRuler_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KRuler_SharedPainter(const KRuler* self) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler) {
        return vkruler->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KRuler::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KRuler_SuperSharedPainter(const KRuler* self) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self))) {
        return vkruler->KRuler::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KRuler::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnSharedPainter(KRuler* self, intptr_t slot) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self)))
        vkruler->kruler_sharedpainter_callback = reinterpret_cast<VirtualKRuler::KRuler_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KRuler_InputMethodEvent(KRuler* self, QInputMethodEvent* param1) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRuler::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperInputMethodEvent(KRuler* self, QInputMethodEvent* param1) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRuler::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnInputMethodEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_inputmethodevent_callback = reinterpret_cast<VirtualKRuler::KRuler_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KRuler_InputMethodQuery(const KRuler* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KRuler_SuperInputMethodQuery(const KRuler* self, int param1) {
    return new QVariant(self->KRuler::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnInputMethodQuery(KRuler* self, intptr_t slot) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self)))
        vkruler->kruler_inputmethodquery_callback = reinterpret_cast<VirtualKRuler::KRuler_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KRuler_FocusNextPrevChild(KRuler* self, bool next) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        return vkruler->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KRuler::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRuler_SuperFocusNextPrevChild(KRuler* self, bool next) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        return vkruler->KRuler::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KRuler::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnFocusNextPrevChild(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_focusnextprevchild_callback = reinterpret_cast<VirtualKRuler::KRuler_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KRuler_EventFilter(KRuler* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KRuler_SuperEventFilter(KRuler* self, QObject* watched, QEvent* event) {
    return self->KRuler::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnEventFilter(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_eventfilter_callback = reinterpret_cast<VirtualKRuler::KRuler_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KRuler_ChildEvent(KRuler* self, QChildEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperChildEvent(KRuler* self, QChildEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnChildEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_childevent_callback = reinterpret_cast<VirtualKRuler::KRuler_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_CustomEvent(KRuler* self, QEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRuler::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperCustomEvent(KRuler* self, QEvent* event) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KRuler::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnCustomEvent(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_customevent_callback = reinterpret_cast<VirtualKRuler::KRuler_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KRuler_ConnectNotify(KRuler* self, const QMetaMethod* signal) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KRuler::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperConnectNotify(KRuler* self, const QMetaMethod* signal) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KRuler::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnConnectNotify(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_connectnotify_callback = reinterpret_cast<VirtualKRuler::KRuler_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KRuler_DisconnectNotify(KRuler* self, const QMetaMethod* signal) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler) {
        vkruler->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KRuler::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KRuler_SuperDisconnectNotify(KRuler* self, const QMetaMethod* signal) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->KRuler::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KRuler::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnDisconnectNotify(KRuler* self, intptr_t slot) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self))
        vkruler->kruler_disconnectnotify_callback = reinterpret_cast<VirtualKRuler::KRuler_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KRuler_SetRepeatAction(KRuler* self, int action) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->VirtualKRuler::setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else
        qFatal("Error: Protected method KRuler::setRepeatAction called without a directly constructed type");
}

// Derived class protected handler implementation
int KRuler_RepeatAction(const KRuler* self) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self))) {
        return static_cast<int>(vkruler->VirtualKRuler::repeatAction());
    } else
        qFatal("Error: Protected method KRuler::repeatAction called without a directly constructed type");
}

// Derived class protected handler implementation
void KRuler_UpdateMicroFocus(KRuler* self) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->VirtualKRuler::updateMicroFocus();
    } else
        qFatal("Error: Protected method KRuler::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KRuler_Create(KRuler* self) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->VirtualKRuler::create();
    } else
        qFatal("Error: Protected method KRuler::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KRuler_Destroy(KRuler* self) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        vkruler->VirtualKRuler::destroy();
    } else
        qFatal("Error: Protected method KRuler::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRuler_FocusNextChild(KRuler* self) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        return vkruler->VirtualKRuler::focusNextChild();
    } else
        qFatal("Error: Protected method KRuler::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRuler_FocusPreviousChild(KRuler* self) {
    if (auto* vkruler = dynamic_cast<VirtualKRuler*>(self)) {
        return vkruler->VirtualKRuler::focusPreviousChild();
    } else
        qFatal("Error: Protected method KRuler::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KRuler_Sender(const KRuler* self) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self))) {
        return vkruler->VirtualKRuler::sender();
    } else
        qFatal("Error: Protected method KRuler::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KRuler_SenderSignalIndex(const KRuler* self) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self))) {
        return vkruler->VirtualKRuler::senderSignalIndex();
    } else
        qFatal("Error: Protected method KRuler::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KRuler_Receivers(const KRuler* self, const char* signal) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self))) {
        return vkruler->VirtualKRuler::receivers(signal);
    } else
        qFatal("Error: Protected method KRuler::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRuler_IsSignalConnected(const KRuler* self, const QMetaMethod* signal) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self))) {
        return vkruler->VirtualKRuler::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KRuler::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KRuler_GetDecodedMetricF(const KRuler* self, int metricA, int metricB) {
    if (auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self))) {
        return vkruler->VirtualKRuler::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KRuler::getDecodedMetricF called without a directly constructed type");
}

void KRuler_Delete(KRuler* self) {
    delete self;
}
