#include <QBrush>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QPieSeries>
#include <QPieSlice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qpieslice.h>
#include "libqpieslice.h"
#include "libqpieslice.hxx"

QPieSlice* QPieSlice_new() {
    return new VirtualQPieSlice();
}

QPieSlice* QPieSlice_new2(libqt_string label, double value) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return new VirtualQPieSlice(label_QString, static_cast<qreal>(value));
}

QPieSlice* QPieSlice_new3(QObject* parent) {
    return new VirtualQPieSlice(parent);
}

QPieSlice* QPieSlice_new4(libqt_string label, double value, QObject* parent) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return new VirtualQPieSlice(label_QString, static_cast<qreal>(value), parent);
}

QMetaObject* QPieSlice_MetaObject(const QPieSlice* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPieSlice_Metacast(QPieSlice* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPieSlice_Metacall(QPieSlice* self, int param1, int param2, void** param3) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPieSlice*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPieSlice_OnMetacall(QPieSlice* self, intptr_t slot) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_Metacall_Callback(reinterpret_cast<VirtualQPieSlice::QPieSlice_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPieSlice_QBaseMetacall(QPieSlice* self, int param1, int param2, void** param3) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_Metacall_IsBase(true);
        return vqpieslice->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPieSlice*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPieSlice_Tr(const char* s) {
    QString _ret = QPieSlice::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPieSlice_SetLabel(QPieSlice* self, libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->setLabel(label_QString);
}

libqt_string QPieSlice_Label(const QPieSlice* self) {
    QString _ret = self->label();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPieSlice_SetValue(QPieSlice* self, double value) {
    self->setValue(static_cast<qreal>(value));
}

double QPieSlice_Value(const QPieSlice* self) {
    return static_cast<double>(self->value());
}

void QPieSlice_SetLabelVisible(QPieSlice* self) {
    self->setLabelVisible();
}

bool QPieSlice_IsLabelVisible(const QPieSlice* self) {
    return self->isLabelVisible();
}

int QPieSlice_LabelPosition(QPieSlice* self) {
    return static_cast<int>(self->labelPosition());
}

void QPieSlice_SetLabelPosition(QPieSlice* self, int position) {
    self->setLabelPosition(static_cast<QPieSlice::LabelPosition>(position));
}

void QPieSlice_SetExploded(QPieSlice* self) {
    self->setExploded();
}

bool QPieSlice_IsExploded(const QPieSlice* self) {
    return self->isExploded();
}

void QPieSlice_SetPen(QPieSlice* self, const QPen* pen) {
    self->setPen(*pen);
}

QPen* QPieSlice_Pen(const QPieSlice* self) {
    return new QPen(self->pen());
}

QColor* QPieSlice_BorderColor(QPieSlice* self) {
    return new QColor(self->borderColor());
}

void QPieSlice_SetBorderColor(QPieSlice* self, QColor* color) {
    self->setBorderColor(*color);
}

int QPieSlice_BorderWidth(QPieSlice* self) {
    return self->borderWidth();
}

void QPieSlice_SetBorderWidth(QPieSlice* self, int width) {
    self->setBorderWidth(static_cast<int>(width));
}

void QPieSlice_SetBrush(QPieSlice* self, const QBrush* brush) {
    self->setBrush(*brush);
}

QBrush* QPieSlice_Brush(const QPieSlice* self) {
    return new QBrush(self->brush());
}

QColor* QPieSlice_Color(QPieSlice* self) {
    return new QColor(self->color());
}

void QPieSlice_SetColor(QPieSlice* self, QColor* color) {
    self->setColor(*color);
}

void QPieSlice_SetLabelBrush(QPieSlice* self, const QBrush* brush) {
    self->setLabelBrush(*brush);
}

QBrush* QPieSlice_LabelBrush(const QPieSlice* self) {
    return new QBrush(self->labelBrush());
}

QColor* QPieSlice_LabelColor(QPieSlice* self) {
    return new QColor(self->labelColor());
}

void QPieSlice_SetLabelColor(QPieSlice* self, QColor* color) {
    self->setLabelColor(*color);
}

void QPieSlice_SetLabelFont(QPieSlice* self, const QFont* font) {
    self->setLabelFont(*font);
}

QFont* QPieSlice_LabelFont(const QPieSlice* self) {
    return new QFont(self->labelFont());
}

void QPieSlice_SetLabelArmLengthFactor(QPieSlice* self, double factor) {
    self->setLabelArmLengthFactor(static_cast<qreal>(factor));
}

double QPieSlice_LabelArmLengthFactor(const QPieSlice* self) {
    return static_cast<double>(self->labelArmLengthFactor());
}

void QPieSlice_SetExplodeDistanceFactor(QPieSlice* self, double factor) {
    self->setExplodeDistanceFactor(static_cast<qreal>(factor));
}

double QPieSlice_ExplodeDistanceFactor(const QPieSlice* self) {
    return static_cast<double>(self->explodeDistanceFactor());
}

double QPieSlice_Percentage(const QPieSlice* self) {
    return static_cast<double>(self->percentage());
}

double QPieSlice_StartAngle(const QPieSlice* self) {
    return static_cast<double>(self->startAngle());
}

double QPieSlice_AngleSpan(const QPieSlice* self) {
    return static_cast<double>(self->angleSpan());
}

QPieSeries* QPieSlice_Series(const QPieSlice* self) {
    return self->series();
}

void QPieSlice_Clicked(QPieSlice* self) {
    self->clicked();
}

void QPieSlice_Connect_Clicked(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::clicked, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPieSlice_Hovered(QPieSlice* self, bool state) {
    self->hovered(state);
}

void QPieSlice_Connect_Hovered(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*, bool) = reinterpret_cast<void (*)(QPieSlice*, bool)>(slot);
    QPieSlice::connect(self, &QPieSlice::hovered, [self, slotFunc](bool state) {
        bool sigval1 = state;
        slotFunc(self, sigval1);
    });
}

void QPieSlice_Pressed(QPieSlice* self) {
    self->pressed();
}

void QPieSlice_Connect_Pressed(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::pressed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPieSlice_Released(QPieSlice* self) {
    self->released();
}

void QPieSlice_Connect_Released(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::released, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPieSlice_DoubleClicked(QPieSlice* self) {
    self->doubleClicked();
}

void QPieSlice_Connect_DoubleClicked(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::doubleClicked, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPieSlice_LabelChanged(QPieSlice* self) {
    self->labelChanged();
}

void QPieSlice_Connect_LabelChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::labelChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPieSlice_ValueChanged(QPieSlice* self) {
    self->valueChanged();
}

void QPieSlice_Connect_ValueChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::valueChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPieSlice_LabelVisibleChanged(QPieSlice* self) {
    self->labelVisibleChanged();
}

void QPieSlice_Connect_LabelVisibleChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::labelVisibleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPieSlice_PenChanged(QPieSlice* self) {
    self->penChanged();
}

void QPieSlice_Connect_PenChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::penChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPieSlice_BrushChanged(QPieSlice* self) {
    self->brushChanged();
}

void QPieSlice_Connect_BrushChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::brushChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPieSlice_LabelBrushChanged(QPieSlice* self) {
    self->labelBrushChanged();
}

void QPieSlice_Connect_LabelBrushChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::labelBrushChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPieSlice_LabelFontChanged(QPieSlice* self) {
    self->labelFontChanged();
}

void QPieSlice_Connect_LabelFontChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::labelFontChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPieSlice_PercentageChanged(QPieSlice* self) {
    self->percentageChanged();
}

void QPieSlice_Connect_PercentageChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::percentageChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPieSlice_StartAngleChanged(QPieSlice* self) {
    self->startAngleChanged();
}

void QPieSlice_Connect_StartAngleChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::startAngleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPieSlice_AngleSpanChanged(QPieSlice* self) {
    self->angleSpanChanged();
}

void QPieSlice_Connect_AngleSpanChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::angleSpanChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPieSlice_ColorChanged(QPieSlice* self) {
    self->colorChanged();
}

void QPieSlice_Connect_ColorChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::colorChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPieSlice_BorderColorChanged(QPieSlice* self) {
    self->borderColorChanged();
}

void QPieSlice_Connect_BorderColorChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::borderColorChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPieSlice_BorderWidthChanged(QPieSlice* self) {
    self->borderWidthChanged();
}

void QPieSlice_Connect_BorderWidthChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::borderWidthChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPieSlice_LabelColorChanged(QPieSlice* self) {
    self->labelColorChanged();
}

void QPieSlice_Connect_LabelColorChanged(QPieSlice* self, intptr_t slot) {
    void (*slotFunc)(QPieSlice*) = reinterpret_cast<void (*)(QPieSlice*)>(slot);
    QPieSlice::connect(self, &QPieSlice::labelColorChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QPieSlice_Tr2(const char* s, const char* c) {
    QString _ret = QPieSlice::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPieSlice_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPieSlice::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPieSlice_SetLabelVisible1(QPieSlice* self, bool visible) {
    self->setLabelVisible(visible);
}

void QPieSlice_SetExploded1(QPieSlice* self, bool exploded) {
    self->setExploded(exploded);
}

// Derived class handler implementation
bool QPieSlice_Event(QPieSlice* self, QEvent* event) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        return vqpieslice->event(event);
    } else {
        return self->QPieSlice::event(event);
    }
}

// Base class handler implementation
bool QPieSlice_QBaseEvent(QPieSlice* self, QEvent* event) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_Event_IsBase(true);
        return vqpieslice->event(event);
    } else {
        return self->QPieSlice::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSlice_OnEvent(QPieSlice* self, intptr_t slot) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_Event_Callback(reinterpret_cast<VirtualQPieSlice::QPieSlice_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPieSlice_EventFilter(QPieSlice* self, QObject* watched, QEvent* event) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        return vqpieslice->eventFilter(watched, event);
    } else {
        return self->QPieSlice::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPieSlice_QBaseEventFilter(QPieSlice* self, QObject* watched, QEvent* event) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_EventFilter_IsBase(true);
        return vqpieslice->eventFilter(watched, event);
    } else {
        return self->QPieSlice::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSlice_OnEventFilter(QPieSlice* self, intptr_t slot) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_EventFilter_Callback(reinterpret_cast<VirtualQPieSlice::QPieSlice_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieSlice_TimerEvent(QPieSlice* self, QTimerEvent* event) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->timerEvent(event);
    } else {
        ((VirtualQPieSlice*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPieSlice_QBaseTimerEvent(QPieSlice* self, QTimerEvent* event) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_TimerEvent_IsBase(true);
        vqpieslice->timerEvent(event);
    } else {
        ((VirtualQPieSlice*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSlice_OnTimerEvent(QPieSlice* self, intptr_t slot) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_TimerEvent_Callback(reinterpret_cast<VirtualQPieSlice::QPieSlice_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieSlice_ChildEvent(QPieSlice* self, QChildEvent* event) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->childEvent(event);
    } else {
        ((VirtualQPieSlice*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPieSlice_QBaseChildEvent(QPieSlice* self, QChildEvent* event) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_ChildEvent_IsBase(true);
        vqpieslice->childEvent(event);
    } else {
        ((VirtualQPieSlice*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSlice_OnChildEvent(QPieSlice* self, intptr_t slot) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_ChildEvent_Callback(reinterpret_cast<VirtualQPieSlice::QPieSlice_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieSlice_CustomEvent(QPieSlice* self, QEvent* event) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->customEvent(event);
    } else {
        ((VirtualQPieSlice*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPieSlice_QBaseCustomEvent(QPieSlice* self, QEvent* event) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_CustomEvent_IsBase(true);
        vqpieslice->customEvent(event);
    } else {
        ((VirtualQPieSlice*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSlice_OnCustomEvent(QPieSlice* self, intptr_t slot) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_CustomEvent_Callback(reinterpret_cast<VirtualQPieSlice::QPieSlice_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieSlice_ConnectNotify(QPieSlice* self, const QMetaMethod* signal) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->connectNotify(*signal);
    } else {
        ((VirtualQPieSlice*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPieSlice_QBaseConnectNotify(QPieSlice* self, const QMetaMethod* signal) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_ConnectNotify_IsBase(true);
        vqpieslice->connectNotify(*signal);
    } else {
        ((VirtualQPieSlice*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSlice_OnConnectNotify(QPieSlice* self, intptr_t slot) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_ConnectNotify_Callback(reinterpret_cast<VirtualQPieSlice::QPieSlice_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPieSlice_DisconnectNotify(QPieSlice* self, const QMetaMethod* signal) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->disconnectNotify(*signal);
    } else {
        ((VirtualQPieSlice*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPieSlice_QBaseDisconnectNotify(QPieSlice* self, const QMetaMethod* signal) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_DisconnectNotify_IsBase(true);
        vqpieslice->disconnectNotify(*signal);
    } else {
        ((VirtualQPieSlice*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSlice_OnDisconnectNotify(QPieSlice* self, intptr_t slot) {
    auto* vqpieslice = dynamic_cast<VirtualQPieSlice*>(self);
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_DisconnectNotify_Callback(reinterpret_cast<VirtualQPieSlice::QPieSlice_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPieSlice_Sender(const QPieSlice* self) {
    auto* vqpieslice = const_cast<VirtualQPieSlice*>(dynamic_cast<const VirtualQPieSlice*>(self));
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        return vqpieslice->sender();
    } else {
        return ((VirtualQPieSlice*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPieSlice_QBaseSender(const QPieSlice* self) {
    auto* vqpieslice = const_cast<VirtualQPieSlice*>(dynamic_cast<const VirtualQPieSlice*>(self));
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_Sender_IsBase(true);
        return vqpieslice->sender();
    } else {
        return ((VirtualQPieSlice*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSlice_OnSender(const QPieSlice* self, intptr_t slot) {
    auto* vqpieslice = const_cast<VirtualQPieSlice*>(dynamic_cast<const VirtualQPieSlice*>(self));
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_Sender_Callback(reinterpret_cast<VirtualQPieSlice::QPieSlice_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPieSlice_SenderSignalIndex(const QPieSlice* self) {
    auto* vqpieslice = const_cast<VirtualQPieSlice*>(dynamic_cast<const VirtualQPieSlice*>(self));
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        return vqpieslice->senderSignalIndex();
    } else {
        return ((VirtualQPieSlice*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPieSlice_QBaseSenderSignalIndex(const QPieSlice* self) {
    auto* vqpieslice = const_cast<VirtualQPieSlice*>(dynamic_cast<const VirtualQPieSlice*>(self));
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_SenderSignalIndex_IsBase(true);
        return vqpieslice->senderSignalIndex();
    } else {
        return ((VirtualQPieSlice*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSlice_OnSenderSignalIndex(const QPieSlice* self, intptr_t slot) {
    auto* vqpieslice = const_cast<VirtualQPieSlice*>(dynamic_cast<const VirtualQPieSlice*>(self));
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPieSlice::QPieSlice_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPieSlice_Receivers(const QPieSlice* self, const char* signal) {
    auto* vqpieslice = const_cast<VirtualQPieSlice*>(dynamic_cast<const VirtualQPieSlice*>(self));
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        return vqpieslice->receivers(signal);
    } else {
        return ((VirtualQPieSlice*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPieSlice_QBaseReceivers(const QPieSlice* self, const char* signal) {
    auto* vqpieslice = const_cast<VirtualQPieSlice*>(dynamic_cast<const VirtualQPieSlice*>(self));
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_Receivers_IsBase(true);
        return vqpieslice->receivers(signal);
    } else {
        return ((VirtualQPieSlice*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSlice_OnReceivers(const QPieSlice* self, intptr_t slot) {
    auto* vqpieslice = const_cast<VirtualQPieSlice*>(dynamic_cast<const VirtualQPieSlice*>(self));
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_Receivers_Callback(reinterpret_cast<VirtualQPieSlice::QPieSlice_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPieSlice_IsSignalConnected(const QPieSlice* self, const QMetaMethod* signal) {
    auto* vqpieslice = const_cast<VirtualQPieSlice*>(dynamic_cast<const VirtualQPieSlice*>(self));
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        return vqpieslice->isSignalConnected(*signal);
    } else {
        return ((VirtualQPieSlice*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPieSlice_QBaseIsSignalConnected(const QPieSlice* self, const QMetaMethod* signal) {
    auto* vqpieslice = const_cast<VirtualQPieSlice*>(dynamic_cast<const VirtualQPieSlice*>(self));
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_IsSignalConnected_IsBase(true);
        return vqpieslice->isSignalConnected(*signal);
    } else {
        return ((VirtualQPieSlice*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPieSlice_OnIsSignalConnected(const QPieSlice* self, intptr_t slot) {
    auto* vqpieslice = const_cast<VirtualQPieSlice*>(dynamic_cast<const VirtualQPieSlice*>(self));
    if (vqpieslice && vqpieslice->isVirtualQPieSlice) {
        vqpieslice->setQPieSlice_IsSignalConnected_Callback(reinterpret_cast<VirtualQPieSlice::QPieSlice_IsSignalConnected_Callback>(slot));
    }
}

void QPieSlice_Delete(QPieSlice* self) {
    delete self;
}
