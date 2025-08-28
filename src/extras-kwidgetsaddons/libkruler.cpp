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
#include <QByteArray>
#include <cstring>
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
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKRuler*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KRuler_Tr(const char* s) {
    QString _ret = KRuler::tr(s);
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
    QString _ret = self->endLabel();
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
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->paintEvent(param1);
    }
}

libqt_string KRuler_Tr2(const char* s, const char* c) {
    QString _ret = KRuler::tr(s, c);
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
    QString _ret = KRuler::tr(s, c, static_cast<int>(n));
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
int KRuler_QBaseMetacall(KRuler* self, int param1, int param2, void** param3) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_Metacall_IsBase(true);
        return vkruler->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KRuler::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnMetacall(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_Metacall_Callback(reinterpret_cast<VirtualKRuler::KRuler_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KRuler_QBasePaintEvent(KRuler* self, QPaintEvent* param1) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_PaintEvent_IsBase(true);
        vkruler->paintEvent(param1);
    } else {
        ((VirtualKRuler*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnPaintEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_PaintEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRuler_Event(KRuler* self, QEvent* e) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        return vkruler->event(e);
    } else {
        return ((VirtualKRuler*)self)->event(e);
    }
}

// Base class handler implementation
bool KRuler_QBaseEvent(KRuler* self, QEvent* e) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_Event_IsBase(true);
        return vkruler->event(e);
    } else {
        return ((VirtualKRuler*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_Event_Callback(reinterpret_cast<VirtualKRuler::KRuler_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_SliderChange(KRuler* self, int change) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->sliderChange(static_cast<VirtualKRuler::SliderChange>(change));
    } else {
        ((VirtualKRuler*)self)->sliderChange(static_cast<VirtualKRuler::SliderChange>(change));
    }
}

// Base class handler implementation
void KRuler_QBaseSliderChange(KRuler* self, int change) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_SliderChange_IsBase(true);
        vkruler->sliderChange(static_cast<VirtualKRuler::SliderChange>(change));
    } else {
        ((VirtualKRuler*)self)->sliderChange(static_cast<VirtualKRuler::SliderChange>(change));
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnSliderChange(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_SliderChange_Callback(reinterpret_cast<VirtualKRuler::KRuler_SliderChange_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_KeyPressEvent(KRuler* self, QKeyEvent* ev) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->keyPressEvent(ev);
    } else {
        ((VirtualKRuler*)self)->keyPressEvent(ev);
    }
}

// Base class handler implementation
void KRuler_QBaseKeyPressEvent(KRuler* self, QKeyEvent* ev) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_KeyPressEvent_IsBase(true);
        vkruler->keyPressEvent(ev);
    } else {
        ((VirtualKRuler*)self)->keyPressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnKeyPressEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_KeyPressEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_TimerEvent(KRuler* self, QTimerEvent* param1) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->timerEvent(param1);
    } else {
        ((VirtualKRuler*)self)->timerEvent(param1);
    }
}

// Base class handler implementation
void KRuler_QBaseTimerEvent(KRuler* self, QTimerEvent* param1) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_TimerEvent_IsBase(true);
        vkruler->timerEvent(param1);
    } else {
        ((VirtualKRuler*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnTimerEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_TimerEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_WheelEvent(KRuler* self, QWheelEvent* e) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->wheelEvent(e);
    } else {
        ((VirtualKRuler*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void KRuler_QBaseWheelEvent(KRuler* self, QWheelEvent* e) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_WheelEvent_IsBase(true);
        vkruler->wheelEvent(e);
    } else {
        ((VirtualKRuler*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnWheelEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_WheelEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_ChangeEvent(KRuler* self, QEvent* e) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->changeEvent(e);
    } else {
        ((VirtualKRuler*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void KRuler_QBaseChangeEvent(KRuler* self, QEvent* e) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_ChangeEvent_IsBase(true);
        vkruler->changeEvent(e);
    } else {
        ((VirtualKRuler*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnChangeEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_ChangeEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KRuler_DevType(const KRuler* self) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        return vkruler->devType();
    } else {
        return self->KRuler::devType();
    }
}

// Base class handler implementation
int KRuler_QBaseDevType(const KRuler* self) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_DevType_IsBase(true);
        return vkruler->devType();
    } else {
        return self->KRuler::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnDevType(const KRuler* self, intptr_t slot) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_DevType_Callback(reinterpret_cast<VirtualKRuler::KRuler_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_SetVisible(KRuler* self, bool visible) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setVisible(visible);
    } else {
        self->KRuler::setVisible(visible);
    }
}

// Base class handler implementation
void KRuler_QBaseSetVisible(KRuler* self, bool visible) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_SetVisible_IsBase(true);
        vkruler->setVisible(visible);
    } else {
        self->KRuler::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnSetVisible(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_SetVisible_Callback(reinterpret_cast<VirtualKRuler::KRuler_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KRuler_SizeHint(const KRuler* self) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        return new QSize(vkruler->sizeHint());
    } else {
        return new QSize(((VirtualKRuler*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KRuler_QBaseSizeHint(const KRuler* self) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_SizeHint_IsBase(true);
        return new QSize(vkruler->sizeHint());
    } else {
        return new QSize(((VirtualKRuler*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnSizeHint(const KRuler* self, intptr_t slot) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_SizeHint_Callback(reinterpret_cast<VirtualKRuler::KRuler_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KRuler_MinimumSizeHint(const KRuler* self) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        return new QSize(vkruler->minimumSizeHint());
    } else {
        return new QSize(((VirtualKRuler*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KRuler_QBaseMinimumSizeHint(const KRuler* self) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_MinimumSizeHint_IsBase(true);
        return new QSize(vkruler->minimumSizeHint());
    } else {
        return new QSize(((VirtualKRuler*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnMinimumSizeHint(const KRuler* self, intptr_t slot) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_MinimumSizeHint_Callback(reinterpret_cast<VirtualKRuler::KRuler_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KRuler_HeightForWidth(const KRuler* self, int param1) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        return vkruler->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KRuler::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KRuler_QBaseHeightForWidth(const KRuler* self, int param1) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_HeightForWidth_IsBase(true);
        return vkruler->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KRuler::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnHeightForWidth(const KRuler* self, intptr_t slot) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_HeightForWidth_Callback(reinterpret_cast<VirtualKRuler::KRuler_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRuler_HasHeightForWidth(const KRuler* self) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        return vkruler->hasHeightForWidth();
    } else {
        return self->KRuler::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KRuler_QBaseHasHeightForWidth(const KRuler* self) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_HasHeightForWidth_IsBase(true);
        return vkruler->hasHeightForWidth();
    } else {
        return self->KRuler::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnHasHeightForWidth(const KRuler* self, intptr_t slot) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_HasHeightForWidth_Callback(reinterpret_cast<VirtualKRuler::KRuler_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KRuler_PaintEngine(const KRuler* self) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        return vkruler->paintEngine();
    } else {
        return self->KRuler::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KRuler_QBasePaintEngine(const KRuler* self) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_PaintEngine_IsBase(true);
        return vkruler->paintEngine();
    } else {
        return self->KRuler::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnPaintEngine(const KRuler* self, intptr_t slot) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_PaintEngine_Callback(reinterpret_cast<VirtualKRuler::KRuler_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_MousePressEvent(KRuler* self, QMouseEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->mousePressEvent(event);
    } else {
        ((VirtualKRuler*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseMousePressEvent(KRuler* self, QMouseEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_MousePressEvent_IsBase(true);
        vkruler->mousePressEvent(event);
    } else {
        ((VirtualKRuler*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnMousePressEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_MousePressEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_MouseReleaseEvent(KRuler* self, QMouseEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->mouseReleaseEvent(event);
    } else {
        ((VirtualKRuler*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseMouseReleaseEvent(KRuler* self, QMouseEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_MouseReleaseEvent_IsBase(true);
        vkruler->mouseReleaseEvent(event);
    } else {
        ((VirtualKRuler*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnMouseReleaseEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_MouseDoubleClickEvent(KRuler* self, QMouseEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKRuler*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseMouseDoubleClickEvent(KRuler* self, QMouseEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_MouseDoubleClickEvent_IsBase(true);
        vkruler->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKRuler*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnMouseDoubleClickEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_MouseMoveEvent(KRuler* self, QMouseEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->mouseMoveEvent(event);
    } else {
        ((VirtualKRuler*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseMouseMoveEvent(KRuler* self, QMouseEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_MouseMoveEvent_IsBase(true);
        vkruler->mouseMoveEvent(event);
    } else {
        ((VirtualKRuler*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnMouseMoveEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_MouseMoveEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_KeyReleaseEvent(KRuler* self, QKeyEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->keyReleaseEvent(event);
    } else {
        ((VirtualKRuler*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseKeyReleaseEvent(KRuler* self, QKeyEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_KeyReleaseEvent_IsBase(true);
        vkruler->keyReleaseEvent(event);
    } else {
        ((VirtualKRuler*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnKeyReleaseEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_FocusInEvent(KRuler* self, QFocusEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->focusInEvent(event);
    } else {
        ((VirtualKRuler*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseFocusInEvent(KRuler* self, QFocusEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_FocusInEvent_IsBase(true);
        vkruler->focusInEvent(event);
    } else {
        ((VirtualKRuler*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnFocusInEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_FocusInEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_FocusOutEvent(KRuler* self, QFocusEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->focusOutEvent(event);
    } else {
        ((VirtualKRuler*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseFocusOutEvent(KRuler* self, QFocusEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_FocusOutEvent_IsBase(true);
        vkruler->focusOutEvent(event);
    } else {
        ((VirtualKRuler*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnFocusOutEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_FocusOutEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_EnterEvent(KRuler* self, QEnterEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->enterEvent(event);
    } else {
        ((VirtualKRuler*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseEnterEvent(KRuler* self, QEnterEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_EnterEvent_IsBase(true);
        vkruler->enterEvent(event);
    } else {
        ((VirtualKRuler*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnEnterEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_EnterEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_LeaveEvent(KRuler* self, QEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->leaveEvent(event);
    } else {
        ((VirtualKRuler*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseLeaveEvent(KRuler* self, QEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_LeaveEvent_IsBase(true);
        vkruler->leaveEvent(event);
    } else {
        ((VirtualKRuler*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnLeaveEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_LeaveEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_MoveEvent(KRuler* self, QMoveEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->moveEvent(event);
    } else {
        ((VirtualKRuler*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseMoveEvent(KRuler* self, QMoveEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_MoveEvent_IsBase(true);
        vkruler->moveEvent(event);
    } else {
        ((VirtualKRuler*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnMoveEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_MoveEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_ResizeEvent(KRuler* self, QResizeEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->resizeEvent(event);
    } else {
        ((VirtualKRuler*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseResizeEvent(KRuler* self, QResizeEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_ResizeEvent_IsBase(true);
        vkruler->resizeEvent(event);
    } else {
        ((VirtualKRuler*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnResizeEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_ResizeEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_CloseEvent(KRuler* self, QCloseEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->closeEvent(event);
    } else {
        ((VirtualKRuler*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseCloseEvent(KRuler* self, QCloseEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_CloseEvent_IsBase(true);
        vkruler->closeEvent(event);
    } else {
        ((VirtualKRuler*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnCloseEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_CloseEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_ContextMenuEvent(KRuler* self, QContextMenuEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->contextMenuEvent(event);
    } else {
        ((VirtualKRuler*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseContextMenuEvent(KRuler* self, QContextMenuEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_ContextMenuEvent_IsBase(true);
        vkruler->contextMenuEvent(event);
    } else {
        ((VirtualKRuler*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnContextMenuEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_ContextMenuEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_TabletEvent(KRuler* self, QTabletEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->tabletEvent(event);
    } else {
        ((VirtualKRuler*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseTabletEvent(KRuler* self, QTabletEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_TabletEvent_IsBase(true);
        vkruler->tabletEvent(event);
    } else {
        ((VirtualKRuler*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnTabletEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_TabletEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_ActionEvent(KRuler* self, QActionEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->actionEvent(event);
    } else {
        ((VirtualKRuler*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseActionEvent(KRuler* self, QActionEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_ActionEvent_IsBase(true);
        vkruler->actionEvent(event);
    } else {
        ((VirtualKRuler*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnActionEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_ActionEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_DragEnterEvent(KRuler* self, QDragEnterEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->dragEnterEvent(event);
    } else {
        ((VirtualKRuler*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseDragEnterEvent(KRuler* self, QDragEnterEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_DragEnterEvent_IsBase(true);
        vkruler->dragEnterEvent(event);
    } else {
        ((VirtualKRuler*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnDragEnterEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_DragEnterEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_DragMoveEvent(KRuler* self, QDragMoveEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->dragMoveEvent(event);
    } else {
        ((VirtualKRuler*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseDragMoveEvent(KRuler* self, QDragMoveEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_DragMoveEvent_IsBase(true);
        vkruler->dragMoveEvent(event);
    } else {
        ((VirtualKRuler*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnDragMoveEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_DragMoveEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_DragLeaveEvent(KRuler* self, QDragLeaveEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->dragLeaveEvent(event);
    } else {
        ((VirtualKRuler*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseDragLeaveEvent(KRuler* self, QDragLeaveEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_DragLeaveEvent_IsBase(true);
        vkruler->dragLeaveEvent(event);
    } else {
        ((VirtualKRuler*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnDragLeaveEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_DragLeaveEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_DropEvent(KRuler* self, QDropEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->dropEvent(event);
    } else {
        ((VirtualKRuler*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseDropEvent(KRuler* self, QDropEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_DropEvent_IsBase(true);
        vkruler->dropEvent(event);
    } else {
        ((VirtualKRuler*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnDropEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_DropEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_ShowEvent(KRuler* self, QShowEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->showEvent(event);
    } else {
        ((VirtualKRuler*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseShowEvent(KRuler* self, QShowEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_ShowEvent_IsBase(true);
        vkruler->showEvent(event);
    } else {
        ((VirtualKRuler*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnShowEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_ShowEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_HideEvent(KRuler* self, QHideEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->hideEvent(event);
    } else {
        ((VirtualKRuler*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseHideEvent(KRuler* self, QHideEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_HideEvent_IsBase(true);
        vkruler->hideEvent(event);
    } else {
        ((VirtualKRuler*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnHideEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_HideEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRuler_NativeEvent(KRuler* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkruler && vkruler->isVirtualKRuler) {
        return vkruler->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKRuler*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KRuler_QBaseNativeEvent(KRuler* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_NativeEvent_IsBase(true);
        return vkruler->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKRuler*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnNativeEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_NativeEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KRuler_Metric(const KRuler* self, int param1) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        return vkruler->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKRuler*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KRuler_QBaseMetric(const KRuler* self, int param1) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_Metric_IsBase(true);
        return vkruler->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKRuler*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnMetric(const KRuler* self, intptr_t slot) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_Metric_Callback(reinterpret_cast<VirtualKRuler::KRuler_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_InitPainter(const KRuler* self, QPainter* painter) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->initPainter(painter);
    } else {
        ((VirtualKRuler*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KRuler_QBaseInitPainter(const KRuler* self, QPainter* painter) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_InitPainter_IsBase(true);
        vkruler->initPainter(painter);
    } else {
        ((VirtualKRuler*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnInitPainter(const KRuler* self, intptr_t slot) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_InitPainter_Callback(reinterpret_cast<VirtualKRuler::KRuler_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KRuler_Redirected(const KRuler* self, QPoint* offset) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        return vkruler->redirected(offset);
    } else {
        return ((VirtualKRuler*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KRuler_QBaseRedirected(const KRuler* self, QPoint* offset) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_Redirected_IsBase(true);
        return vkruler->redirected(offset);
    } else {
        return ((VirtualKRuler*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnRedirected(const KRuler* self, intptr_t slot) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_Redirected_Callback(reinterpret_cast<VirtualKRuler::KRuler_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KRuler_SharedPainter(const KRuler* self) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        return vkruler->sharedPainter();
    } else {
        return ((VirtualKRuler*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KRuler_QBaseSharedPainter(const KRuler* self) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_SharedPainter_IsBase(true);
        return vkruler->sharedPainter();
    } else {
        return ((VirtualKRuler*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnSharedPainter(const KRuler* self, intptr_t slot) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_SharedPainter_Callback(reinterpret_cast<VirtualKRuler::KRuler_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_InputMethodEvent(KRuler* self, QInputMethodEvent* param1) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->inputMethodEvent(param1);
    } else {
        ((VirtualKRuler*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KRuler_QBaseInputMethodEvent(KRuler* self, QInputMethodEvent* param1) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_InputMethodEvent_IsBase(true);
        vkruler->inputMethodEvent(param1);
    } else {
        ((VirtualKRuler*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnInputMethodEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_InputMethodEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KRuler_InputMethodQuery(const KRuler* self, int param1) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        return new QVariant(vkruler->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKRuler*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KRuler_QBaseInputMethodQuery(const KRuler* self, int param1) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_InputMethodQuery_IsBase(true);
        return new QVariant(vkruler->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKRuler*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnInputMethodQuery(const KRuler* self, intptr_t slot) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_InputMethodQuery_Callback(reinterpret_cast<VirtualKRuler::KRuler_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRuler_FocusNextPrevChild(KRuler* self, bool next) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        return vkruler->focusNextPrevChild(next);
    } else {
        return ((VirtualKRuler*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KRuler_QBaseFocusNextPrevChild(KRuler* self, bool next) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_FocusNextPrevChild_IsBase(true);
        return vkruler->focusNextPrevChild(next);
    } else {
        return ((VirtualKRuler*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnFocusNextPrevChild(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKRuler::KRuler_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRuler_EventFilter(KRuler* self, QObject* watched, QEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        return vkruler->eventFilter(watched, event);
    } else {
        return self->KRuler::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KRuler_QBaseEventFilter(KRuler* self, QObject* watched, QEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_EventFilter_IsBase(true);
        return vkruler->eventFilter(watched, event);
    } else {
        return self->KRuler::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnEventFilter(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_EventFilter_Callback(reinterpret_cast<VirtualKRuler::KRuler_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_ChildEvent(KRuler* self, QChildEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->childEvent(event);
    } else {
        ((VirtualKRuler*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseChildEvent(KRuler* self, QChildEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_ChildEvent_IsBase(true);
        vkruler->childEvent(event);
    } else {
        ((VirtualKRuler*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnChildEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_ChildEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_CustomEvent(KRuler* self, QEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->customEvent(event);
    } else {
        ((VirtualKRuler*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KRuler_QBaseCustomEvent(KRuler* self, QEvent* event) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_CustomEvent_IsBase(true);
        vkruler->customEvent(event);
    } else {
        ((VirtualKRuler*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnCustomEvent(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_CustomEvent_Callback(reinterpret_cast<VirtualKRuler::KRuler_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_ConnectNotify(KRuler* self, const QMetaMethod* signal) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->connectNotify(*signal);
    } else {
        ((VirtualKRuler*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KRuler_QBaseConnectNotify(KRuler* self, const QMetaMethod* signal) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_ConnectNotify_IsBase(true);
        vkruler->connectNotify(*signal);
    } else {
        ((VirtualKRuler*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnConnectNotify(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_ConnectNotify_Callback(reinterpret_cast<VirtualKRuler::KRuler_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_DisconnectNotify(KRuler* self, const QMetaMethod* signal) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->disconnectNotify(*signal);
    } else {
        ((VirtualKRuler*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KRuler_QBaseDisconnectNotify(KRuler* self, const QMetaMethod* signal) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_DisconnectNotify_IsBase(true);
        vkruler->disconnectNotify(*signal);
    } else {
        ((VirtualKRuler*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnDisconnectNotify(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_DisconnectNotify_Callback(reinterpret_cast<VirtualKRuler::KRuler_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_SetRepeatAction(KRuler* self, int action) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        ((VirtualKRuler*)self)->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Base class handler implementation
void KRuler_QBaseSetRepeatAction(KRuler* self, int action) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_SetRepeatAction_IsBase(true);
        vkruler->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        ((VirtualKRuler*)self)->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnSetRepeatAction(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_SetRepeatAction_Callback(reinterpret_cast<VirtualKRuler::KRuler_SetRepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
int KRuler_RepeatAction(const KRuler* self) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        return static_cast<int>(vkruler->repeatAction());
    } else {
        return static_cast<int>(((VirtualKRuler*)self)->repeatAction());
    }
}

// Base class handler implementation
int KRuler_QBaseRepeatAction(const KRuler* self) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_RepeatAction_IsBase(true);
        return static_cast<int>(vkruler->repeatAction());
    } else {
        return static_cast<int>(((VirtualKRuler*)self)->repeatAction());
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnRepeatAction(const KRuler* self, intptr_t slot) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_RepeatAction_Callback(reinterpret_cast<VirtualKRuler::KRuler_RepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_UpdateMicroFocus(KRuler* self) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->updateMicroFocus();
    } else {
        ((VirtualKRuler*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KRuler_QBaseUpdateMicroFocus(KRuler* self) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_UpdateMicroFocus_IsBase(true);
        vkruler->updateMicroFocus();
    } else {
        ((VirtualKRuler*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnUpdateMicroFocus(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKRuler::KRuler_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_Create(KRuler* self) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->create();
    } else {
        ((VirtualKRuler*)self)->create();
    }
}

// Base class handler implementation
void KRuler_QBaseCreate(KRuler* self) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_Create_IsBase(true);
        vkruler->create();
    } else {
        ((VirtualKRuler*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnCreate(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_Create_Callback(reinterpret_cast<VirtualKRuler::KRuler_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KRuler_Destroy(KRuler* self) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->destroy();
    } else {
        ((VirtualKRuler*)self)->destroy();
    }
}

// Base class handler implementation
void KRuler_QBaseDestroy(KRuler* self) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_Destroy_IsBase(true);
        vkruler->destroy();
    } else {
        ((VirtualKRuler*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnDestroy(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_Destroy_Callback(reinterpret_cast<VirtualKRuler::KRuler_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRuler_FocusNextChild(KRuler* self) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        return vkruler->focusNextChild();
    } else {
        return ((VirtualKRuler*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KRuler_QBaseFocusNextChild(KRuler* self) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_FocusNextChild_IsBase(true);
        return vkruler->focusNextChild();
    } else {
        return ((VirtualKRuler*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnFocusNextChild(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_FocusNextChild_Callback(reinterpret_cast<VirtualKRuler::KRuler_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRuler_FocusPreviousChild(KRuler* self) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        return vkruler->focusPreviousChild();
    } else {
        return ((VirtualKRuler*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KRuler_QBaseFocusPreviousChild(KRuler* self) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_FocusPreviousChild_IsBase(true);
        return vkruler->focusPreviousChild();
    } else {
        return ((VirtualKRuler*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnFocusPreviousChild(KRuler* self, intptr_t slot) {
    auto* vkruler = dynamic_cast<VirtualKRuler*>(self);
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_FocusPreviousChild_Callback(reinterpret_cast<VirtualKRuler::KRuler_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KRuler_Sender(const KRuler* self) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        return vkruler->sender();
    } else {
        return ((VirtualKRuler*)self)->sender();
    }
}

// Base class handler implementation
QObject* KRuler_QBaseSender(const KRuler* self) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_Sender_IsBase(true);
        return vkruler->sender();
    } else {
        return ((VirtualKRuler*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnSender(const KRuler* self, intptr_t slot) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_Sender_Callback(reinterpret_cast<VirtualKRuler::KRuler_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KRuler_SenderSignalIndex(const KRuler* self) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        return vkruler->senderSignalIndex();
    } else {
        return ((VirtualKRuler*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KRuler_QBaseSenderSignalIndex(const KRuler* self) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_SenderSignalIndex_IsBase(true);
        return vkruler->senderSignalIndex();
    } else {
        return ((VirtualKRuler*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnSenderSignalIndex(const KRuler* self, intptr_t slot) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_SenderSignalIndex_Callback(reinterpret_cast<VirtualKRuler::KRuler_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KRuler_Receivers(const KRuler* self, const char* signal) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        return vkruler->receivers(signal);
    } else {
        return ((VirtualKRuler*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KRuler_QBaseReceivers(const KRuler* self, const char* signal) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_Receivers_IsBase(true);
        return vkruler->receivers(signal);
    } else {
        return ((VirtualKRuler*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnReceivers(const KRuler* self, intptr_t slot) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_Receivers_Callback(reinterpret_cast<VirtualKRuler::KRuler_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRuler_IsSignalConnected(const KRuler* self, const QMetaMethod* signal) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        return vkruler->isSignalConnected(*signal);
    } else {
        return ((VirtualKRuler*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KRuler_QBaseIsSignalConnected(const KRuler* self, const QMetaMethod* signal) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_IsSignalConnected_IsBase(true);
        return vkruler->isSignalConnected(*signal);
    } else {
        return ((VirtualKRuler*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnIsSignalConnected(const KRuler* self, intptr_t slot) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_IsSignalConnected_Callback(reinterpret_cast<VirtualKRuler::KRuler_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KRuler_GetDecodedMetricF(const KRuler* self, int metricA, int metricB) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        return vkruler->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKRuler*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KRuler_QBaseGetDecodedMetricF(const KRuler* self, int metricA, int metricB) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_GetDecodedMetricF_IsBase(true);
        return vkruler->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKRuler*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KRuler_OnGetDecodedMetricF(const KRuler* self, intptr_t slot) {
    auto* vkruler = const_cast<VirtualKRuler*>(dynamic_cast<const VirtualKRuler*>(self));
    if (vkruler && vkruler->isVirtualKRuler) {
        vkruler->setKRuler_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKRuler::KRuler_GetDecodedMetricF_Callback>(slot));
    }
}

void KRuler_Delete(KRuler* self) {
    delete self;
}
