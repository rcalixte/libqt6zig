#include <QAbstractAxis>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QColor>
#include <QColorAxis>
#include <QEvent>
#include <QFont>
#include <QLinearGradient>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qcoloraxis.h>
#include "libqcoloraxis.h"
#include "libqcoloraxis.hxx"

QColorAxis* QColorAxis_new() {
    return new VirtualQColorAxis();
}

QColorAxis* QColorAxis_new2(QObject* parent) {
    return new VirtualQColorAxis(parent);
}

QMetaObject* QColorAxis_MetaObject(const QColorAxis* self) {
    return (QMetaObject*)self->metaObject();
}

void* QColorAxis_Metacast(QColorAxis* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QColorAxis_Metacall(QColorAxis* self, int param1, int param2, void** param3) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColorAxis_OnMetacall(QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->setQColorAxis_Metacall_Callback(reinterpret_cast<VirtualQColorAxis::QColorAxis_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QColorAxis_QBaseMetacall(QColorAxis* self, int param1, int param2, void** param3) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->setQColorAxis_Metacall_IsBase(true);
        return vqcoloraxis->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QColorAxis_Tr(const char* s) {
    QString _ret = QColorAxis::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QColorAxis_SetMin(QColorAxis* self, double min) {
    self->setMin(static_cast<qreal>(min));
}

double QColorAxis_Min(const QColorAxis* self) {
    return static_cast<double>(self->min());
}

void QColorAxis_SetMax(QColorAxis* self, double max) {
    self->setMax(static_cast<qreal>(max));
}

double QColorAxis_Max(const QColorAxis* self) {
    return static_cast<double>(self->max());
}

void QColorAxis_SetRange(QColorAxis* self, double min, double max) {
    self->setRange(static_cast<qreal>(min), static_cast<qreal>(max));
}

void QColorAxis_SetTickCount(QColorAxis* self, int count) {
    self->setTickCount(static_cast<int>(count));
}

int QColorAxis_TickCount(const QColorAxis* self) {
    return self->tickCount();
}

void QColorAxis_SetSize(QColorAxis* self, const double size) {
    self->setSize(static_cast<const qreal>(size));
}

double QColorAxis_Size(const QColorAxis* self) {
    return static_cast<double>(self->size());
}

void QColorAxis_SetGradient(QColorAxis* self, QLinearGradient* gradient) {
    self->setGradient(*gradient);
}

QLinearGradient* QColorAxis_Gradient(const QColorAxis* self) {
    return new QLinearGradient(self->gradient());
}

void QColorAxis_SetAutoRange(QColorAxis* self, bool autoRange) {
    self->setAutoRange(autoRange);
}

bool QColorAxis_AutoRange(const QColorAxis* self) {
    return self->autoRange();
}

void QColorAxis_MinChanged(QColorAxis* self, double min) {
    self->minChanged(static_cast<qreal>(min));
}

void QColorAxis_Connect_MinChanged(QColorAxis* self, intptr_t slot) {
    void (*slotFunc)(QColorAxis*, double) = reinterpret_cast<void (*)(QColorAxis*, double)>(slot);
    QColorAxis::connect(self, &QColorAxis::minChanged, [self, slotFunc](qreal min) {
        double sigval1 = static_cast<double>(min);
        slotFunc(self, sigval1);
    });
}

void QColorAxis_MaxChanged(QColorAxis* self, double max) {
    self->maxChanged(static_cast<qreal>(max));
}

void QColorAxis_Connect_MaxChanged(QColorAxis* self, intptr_t slot) {
    void (*slotFunc)(QColorAxis*, double) = reinterpret_cast<void (*)(QColorAxis*, double)>(slot);
    QColorAxis::connect(self, &QColorAxis::maxChanged, [self, slotFunc](qreal max) {
        double sigval1 = static_cast<double>(max);
        slotFunc(self, sigval1);
    });
}

void QColorAxis_RangeChanged(QColorAxis* self, double min, double max) {
    self->rangeChanged(static_cast<qreal>(min), static_cast<qreal>(max));
}

void QColorAxis_Connect_RangeChanged(QColorAxis* self, intptr_t slot) {
    void (*slotFunc)(QColorAxis*, double, double) = reinterpret_cast<void (*)(QColorAxis*, double, double)>(slot);
    QColorAxis::connect(self, &QColorAxis::rangeChanged, [self, slotFunc](qreal min, qreal max) {
        double sigval1 = static_cast<double>(min);
        double sigval2 = static_cast<double>(max);
        slotFunc(self, sigval1, sigval2);
    });
}

void QColorAxis_TickCountChanged(QColorAxis* self, int tickCount) {
    self->tickCountChanged(static_cast<int>(tickCount));
}

void QColorAxis_Connect_TickCountChanged(QColorAxis* self, intptr_t slot) {
    void (*slotFunc)(QColorAxis*, int) = reinterpret_cast<void (*)(QColorAxis*, int)>(slot);
    QColorAxis::connect(self, &QColorAxis::tickCountChanged, [self, slotFunc](int tickCount) {
        int sigval1 = tickCount;
        slotFunc(self, sigval1);
    });
}

void QColorAxis_GradientChanged(QColorAxis* self, QLinearGradient* gradient) {
    self->gradientChanged(*gradient);
}

void QColorAxis_Connect_GradientChanged(QColorAxis* self, intptr_t slot) {
    void (*slotFunc)(QColorAxis*, QLinearGradient*) = reinterpret_cast<void (*)(QColorAxis*, QLinearGradient*)>(slot);
    QColorAxis::connect(self, &QColorAxis::gradientChanged, [self, slotFunc](const QLinearGradient& gradient) {
        const QLinearGradient& gradient_ret = gradient;
        // Cast returned reference into pointer
        QLinearGradient* sigval1 = const_cast<QLinearGradient*>(&gradient_ret);
        slotFunc(self, sigval1);
    });
}

void QColorAxis_SizeChanged(QColorAxis* self, const double size) {
    self->sizeChanged(static_cast<const qreal>(size));
}

void QColorAxis_Connect_SizeChanged(QColorAxis* self, intptr_t slot) {
    void (*slotFunc)(QColorAxis*, const double) = reinterpret_cast<void (*)(QColorAxis*, const double)>(slot);
    QColorAxis::connect(self, &QColorAxis::sizeChanged, [self, slotFunc](const qreal size) {
        const double sigval1 = static_cast<const double>(size);
        slotFunc(self, sigval1);
    });
}

void QColorAxis_AutoRangeChanged(QColorAxis* self, bool autoRange) {
    self->autoRangeChanged(autoRange);
}

void QColorAxis_Connect_AutoRangeChanged(QColorAxis* self, intptr_t slot) {
    void (*slotFunc)(QColorAxis*, bool) = reinterpret_cast<void (*)(QColorAxis*, bool)>(slot);
    QColorAxis::connect(self, &QColorAxis::autoRangeChanged, [self, slotFunc](bool autoRange) {
        bool sigval1 = autoRange;
        slotFunc(self, sigval1);
    });
}

libqt_string QColorAxis_Tr2(const char* s, const char* c) {
    QString _ret = QColorAxis::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QColorAxis_Tr3(const char* s, const char* c, int n) {
    QString _ret = QColorAxis::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QColorAxis_Type(const QColorAxis* self) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self))) {
        return static_cast<int>(vqcoloraxis->type());
    } else {
        return static_cast<int>(vqcoloraxis->type());
    }
}

// Base class handler implementation
int QColorAxis_QBaseType(const QColorAxis* self) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self))) {
        vqcoloraxis->setQColorAxis_Type_IsBase(true);
        return static_cast<int>(vqcoloraxis->type());
    } else {
        return static_cast<int>(vqcoloraxis->type());
    }
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnType(const QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self))) {
        vqcoloraxis->setQColorAxis_Type_Callback(reinterpret_cast<VirtualQColorAxis::QColorAxis_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColorAxis_Event(QColorAxis* self, QEvent* event) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        return vqcoloraxis->event(event);
    } else {
        return vqcoloraxis->event(event);
    }
}

// Base class handler implementation
bool QColorAxis_QBaseEvent(QColorAxis* self, QEvent* event) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->setQColorAxis_Event_IsBase(true);
        return vqcoloraxis->event(event);
    } else {
        return vqcoloraxis->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnEvent(QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->setQColorAxis_Event_Callback(reinterpret_cast<VirtualQColorAxis::QColorAxis_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColorAxis_EventFilter(QColorAxis* self, QObject* watched, QEvent* event) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        return vqcoloraxis->eventFilter(watched, event);
    } else {
        return vqcoloraxis->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QColorAxis_QBaseEventFilter(QColorAxis* self, QObject* watched, QEvent* event) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->setQColorAxis_EventFilter_IsBase(true);
        return vqcoloraxis->eventFilter(watched, event);
    } else {
        return vqcoloraxis->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnEventFilter(QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->setQColorAxis_EventFilter_Callback(reinterpret_cast<VirtualQColorAxis::QColorAxis_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorAxis_TimerEvent(QColorAxis* self, QTimerEvent* event) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->timerEvent(event);
    } else {
        vqcoloraxis->timerEvent(event);
    }
}

// Base class handler implementation
void QColorAxis_QBaseTimerEvent(QColorAxis* self, QTimerEvent* event) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->setQColorAxis_TimerEvent_IsBase(true);
        vqcoloraxis->timerEvent(event);
    } else {
        vqcoloraxis->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnTimerEvent(QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->setQColorAxis_TimerEvent_Callback(reinterpret_cast<VirtualQColorAxis::QColorAxis_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorAxis_ChildEvent(QColorAxis* self, QChildEvent* event) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->childEvent(event);
    } else {
        vqcoloraxis->childEvent(event);
    }
}

// Base class handler implementation
void QColorAxis_QBaseChildEvent(QColorAxis* self, QChildEvent* event) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->setQColorAxis_ChildEvent_IsBase(true);
        vqcoloraxis->childEvent(event);
    } else {
        vqcoloraxis->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnChildEvent(QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->setQColorAxis_ChildEvent_Callback(reinterpret_cast<VirtualQColorAxis::QColorAxis_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorAxis_CustomEvent(QColorAxis* self, QEvent* event) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->customEvent(event);
    } else {
        vqcoloraxis->customEvent(event);
    }
}

// Base class handler implementation
void QColorAxis_QBaseCustomEvent(QColorAxis* self, QEvent* event) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->setQColorAxis_CustomEvent_IsBase(true);
        vqcoloraxis->customEvent(event);
    } else {
        vqcoloraxis->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnCustomEvent(QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->setQColorAxis_CustomEvent_Callback(reinterpret_cast<VirtualQColorAxis::QColorAxis_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorAxis_ConnectNotify(QColorAxis* self, QMetaMethod* signal) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->connectNotify(*signal);
    } else {
        vqcoloraxis->connectNotify(*signal);
    }
}

// Base class handler implementation
void QColorAxis_QBaseConnectNotify(QColorAxis* self, QMetaMethod* signal) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->setQColorAxis_ConnectNotify_IsBase(true);
        vqcoloraxis->connectNotify(*signal);
    } else {
        vqcoloraxis->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnConnectNotify(QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->setQColorAxis_ConnectNotify_Callback(reinterpret_cast<VirtualQColorAxis::QColorAxis_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QColorAxis_DisconnectNotify(QColorAxis* self, QMetaMethod* signal) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->disconnectNotify(*signal);
    } else {
        vqcoloraxis->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QColorAxis_QBaseDisconnectNotify(QColorAxis* self, QMetaMethod* signal) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->setQColorAxis_DisconnectNotify_IsBase(true);
        vqcoloraxis->disconnectNotify(*signal);
    } else {
        vqcoloraxis->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnDisconnectNotify(QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->setQColorAxis_DisconnectNotify_Callback(reinterpret_cast<VirtualQColorAxis::QColorAxis_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QColorAxis_Sender(const QColorAxis* self) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self))) {
        return vqcoloraxis->sender();
    } else {
        return vqcoloraxis->sender();
    }
}

// Base class handler implementation
QObject* QColorAxis_QBaseSender(const QColorAxis* self) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self))) {
        vqcoloraxis->setQColorAxis_Sender_IsBase(true);
        return vqcoloraxis->sender();
    } else {
        return vqcoloraxis->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnSender(const QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self))) {
        vqcoloraxis->setQColorAxis_Sender_Callback(reinterpret_cast<VirtualQColorAxis::QColorAxis_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QColorAxis_SenderSignalIndex(const QColorAxis* self) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self))) {
        return vqcoloraxis->senderSignalIndex();
    } else {
        return vqcoloraxis->senderSignalIndex();
    }
}

// Base class handler implementation
int QColorAxis_QBaseSenderSignalIndex(const QColorAxis* self) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self))) {
        vqcoloraxis->setQColorAxis_SenderSignalIndex_IsBase(true);
        return vqcoloraxis->senderSignalIndex();
    } else {
        return vqcoloraxis->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnSenderSignalIndex(const QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self))) {
        vqcoloraxis->setQColorAxis_SenderSignalIndex_Callback(reinterpret_cast<VirtualQColorAxis::QColorAxis_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QColorAxis_Receivers(const QColorAxis* self, const char* signal) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self))) {
        return vqcoloraxis->receivers(signal);
    } else {
        return vqcoloraxis->receivers(signal);
    }
}

// Base class handler implementation
int QColorAxis_QBaseReceivers(const QColorAxis* self, const char* signal) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self))) {
        vqcoloraxis->setQColorAxis_Receivers_IsBase(true);
        return vqcoloraxis->receivers(signal);
    } else {
        return vqcoloraxis->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnReceivers(const QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self))) {
        vqcoloraxis->setQColorAxis_Receivers_Callback(reinterpret_cast<VirtualQColorAxis::QColorAxis_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColorAxis_IsSignalConnected(const QColorAxis* self, QMetaMethod* signal) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self))) {
        return vqcoloraxis->isSignalConnected(*signal);
    } else {
        return vqcoloraxis->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QColorAxis_QBaseIsSignalConnected(const QColorAxis* self, QMetaMethod* signal) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self))) {
        vqcoloraxis->setQColorAxis_IsSignalConnected_IsBase(true);
        return vqcoloraxis->isSignalConnected(*signal);
    } else {
        return vqcoloraxis->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnIsSignalConnected(const QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self))) {
        vqcoloraxis->setQColorAxis_IsSignalConnected_Callback(reinterpret_cast<VirtualQColorAxis::QColorAxis_IsSignalConnected_Callback>(slot));
    }
}

void QColorAxis_Delete(QColorAxis* self) {
    delete self;
}
