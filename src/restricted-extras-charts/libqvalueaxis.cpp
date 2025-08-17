#include <QAbstractAxis>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QValueAxis>
#include <qvalueaxis.h>
#include "libqvalueaxis.h"
#include "libqvalueaxis.hxx"

QValueAxis* QValueAxis_new() {
    return new VirtualQValueAxis();
}

QValueAxis* QValueAxis_new2(QObject* parent) {
    return new VirtualQValueAxis(parent);
}

QMetaObject* QValueAxis_MetaObject(const QValueAxis* self) {
    return (QMetaObject*)self->metaObject();
}

void* QValueAxis_Metacast(QValueAxis* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QValueAxis_Metacall(QValueAxis* self, int param1, int param2, void** param3) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQValueAxis*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QValueAxis_OnMetacall(QValueAxis* self, intptr_t slot) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_Metacall_Callback(reinterpret_cast<VirtualQValueAxis::QValueAxis_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QValueAxis_QBaseMetacall(QValueAxis* self, int param1, int param2, void** param3) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_Metacall_IsBase(true);
        return vqvalueaxis->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQValueAxis*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QValueAxis_Tr(const char* s) {
    QString _ret = QValueAxis::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QValueAxis_SetMin(QValueAxis* self, double min) {
    self->setMin(static_cast<qreal>(min));
}

double QValueAxis_Min(const QValueAxis* self) {
    return static_cast<double>(self->min());
}

void QValueAxis_SetMax(QValueAxis* self, double max) {
    self->setMax(static_cast<qreal>(max));
}

double QValueAxis_Max(const QValueAxis* self) {
    return static_cast<double>(self->max());
}

void QValueAxis_SetRange(QValueAxis* self, double min, double max) {
    self->setRange(static_cast<qreal>(min), static_cast<qreal>(max));
}

void QValueAxis_SetTickCount(QValueAxis* self, int count) {
    self->setTickCount(static_cast<int>(count));
}

int QValueAxis_TickCount(const QValueAxis* self) {
    return self->tickCount();
}

void QValueAxis_SetMinorTickCount(QValueAxis* self, int count) {
    self->setMinorTickCount(static_cast<int>(count));
}

int QValueAxis_MinorTickCount(const QValueAxis* self) {
    return self->minorTickCount();
}

void QValueAxis_SetTickAnchor(QValueAxis* self, double anchor) {
    self->setTickAnchor(static_cast<qreal>(anchor));
}

double QValueAxis_TickAnchor(const QValueAxis* self) {
    return static_cast<double>(self->tickAnchor());
}

void QValueAxis_SetTickInterval(QValueAxis* self, double insterval) {
    self->setTickInterval(static_cast<qreal>(insterval));
}

double QValueAxis_TickInterval(const QValueAxis* self) {
    return static_cast<double>(self->tickInterval());
}

void QValueAxis_SetTickType(QValueAxis* self, int typeVal) {
    self->setTickType(static_cast<QValueAxis::TickType>(typeVal));
}

int QValueAxis_TickType(const QValueAxis* self) {
    return static_cast<int>(self->tickType());
}

void QValueAxis_SetLabelFormat(QValueAxis* self, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->setLabelFormat(format_QString);
}

libqt_string QValueAxis_LabelFormat(const QValueAxis* self) {
    QString _ret = self->labelFormat();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QValueAxis_ApplyNiceNumbers(QValueAxis* self) {
    self->applyNiceNumbers();
}

void QValueAxis_MinChanged(QValueAxis* self, double min) {
    self->minChanged(static_cast<qreal>(min));
}

void QValueAxis_Connect_MinChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, double) = reinterpret_cast<void (*)(QValueAxis*, double)>(slot);
    QValueAxis::connect(self, &QValueAxis::minChanged, [self, slotFunc](qreal min) {
        double sigval1 = static_cast<double>(min);
        slotFunc(self, sigval1);
    });
}

void QValueAxis_MaxChanged(QValueAxis* self, double max) {
    self->maxChanged(static_cast<qreal>(max));
}

void QValueAxis_Connect_MaxChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, double) = reinterpret_cast<void (*)(QValueAxis*, double)>(slot);
    QValueAxis::connect(self, &QValueAxis::maxChanged, [self, slotFunc](qreal max) {
        double sigval1 = static_cast<double>(max);
        slotFunc(self, sigval1);
    });
}

void QValueAxis_RangeChanged(QValueAxis* self, double min, double max) {
    self->rangeChanged(static_cast<qreal>(min), static_cast<qreal>(max));
}

void QValueAxis_Connect_RangeChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, double, double) = reinterpret_cast<void (*)(QValueAxis*, double, double)>(slot);
    QValueAxis::connect(self, &QValueAxis::rangeChanged, [self, slotFunc](qreal min, qreal max) {
        double sigval1 = static_cast<double>(min);
        double sigval2 = static_cast<double>(max);
        slotFunc(self, sigval1, sigval2);
    });
}

void QValueAxis_TickCountChanged(QValueAxis* self, int tickCount) {
    self->tickCountChanged(static_cast<int>(tickCount));
}

void QValueAxis_Connect_TickCountChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, int) = reinterpret_cast<void (*)(QValueAxis*, int)>(slot);
    QValueAxis::connect(self, &QValueAxis::tickCountChanged, [self, slotFunc](int tickCount) {
        int sigval1 = tickCount;
        slotFunc(self, sigval1);
    });
}

void QValueAxis_MinorTickCountChanged(QValueAxis* self, int tickCount) {
    self->minorTickCountChanged(static_cast<int>(tickCount));
}

void QValueAxis_Connect_MinorTickCountChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, int) = reinterpret_cast<void (*)(QValueAxis*, int)>(slot);
    QValueAxis::connect(self, &QValueAxis::minorTickCountChanged, [self, slotFunc](int tickCount) {
        int sigval1 = tickCount;
        slotFunc(self, sigval1);
    });
}

void QValueAxis_LabelFormatChanged(QValueAxis* self, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->labelFormatChanged(format_QString);
}

void QValueAxis_Connect_LabelFormatChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, libqt_string) = reinterpret_cast<void (*)(QValueAxis*, libqt_string)>(slot);
    QValueAxis::connect(self, &QValueAxis::labelFormatChanged, [self, slotFunc](const QString& format) {
        const QString format_ret = format;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray format_b = format_ret.toUtf8();
        libqt_string format_str;
        format_str.len = format_b.length();
        format_str.data = static_cast<const char*>(malloc(format_str.len + 1));
        memcpy((void*)format_str.data, format_b.data(), format_str.len);
        ((char*)format_str.data)[format_str.len] = '\0';
        libqt_string sigval1 = format_str;
        slotFunc(self, sigval1);
    });
}

void QValueAxis_TickIntervalChanged(QValueAxis* self, double interval) {
    self->tickIntervalChanged(static_cast<qreal>(interval));
}

void QValueAxis_Connect_TickIntervalChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, double) = reinterpret_cast<void (*)(QValueAxis*, double)>(slot);
    QValueAxis::connect(self, &QValueAxis::tickIntervalChanged, [self, slotFunc](qreal interval) {
        double sigval1 = static_cast<double>(interval);
        slotFunc(self, sigval1);
    });
}

void QValueAxis_TickAnchorChanged(QValueAxis* self, double anchor) {
    self->tickAnchorChanged(static_cast<qreal>(anchor));
}

void QValueAxis_Connect_TickAnchorChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, double) = reinterpret_cast<void (*)(QValueAxis*, double)>(slot);
    QValueAxis::connect(self, &QValueAxis::tickAnchorChanged, [self, slotFunc](qreal anchor) {
        double sigval1 = static_cast<double>(anchor);
        slotFunc(self, sigval1);
    });
}

void QValueAxis_TickTypeChanged(QValueAxis* self, int typeVal) {
    self->tickTypeChanged(static_cast<QValueAxis::TickType>(typeVal));
}

void QValueAxis_Connect_TickTypeChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, int) = reinterpret_cast<void (*)(QValueAxis*, int)>(slot);
    QValueAxis::connect(self, &QValueAxis::tickTypeChanged, [self, slotFunc](QValueAxis::TickType typeVal) {
        int sigval1 = static_cast<int>(typeVal);
        slotFunc(self, sigval1);
    });
}

libqt_string QValueAxis_Tr2(const char* s, const char* c) {
    QString _ret = QValueAxis::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QValueAxis_Tr3(const char* s, const char* c, int n) {
    QString _ret = QValueAxis::tr(s, c, static_cast<int>(n));
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
int QValueAxis_Type(const QValueAxis* self) {
    auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self));
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        return static_cast<int>(vqvalueaxis->type());
    } else {
        return static_cast<int>(self->QValueAxis::type());
    }
}

// Base class handler implementation
int QValueAxis_QBaseType(const QValueAxis* self) {
    auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self));
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_Type_IsBase(true);
        return static_cast<int>(vqvalueaxis->type());
    } else {
        return static_cast<int>(self->QValueAxis::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnType(const QValueAxis* self, intptr_t slot) {
    auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self));
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_Type_Callback(reinterpret_cast<VirtualQValueAxis::QValueAxis_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QValueAxis_Event(QValueAxis* self, QEvent* event) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        return vqvalueaxis->event(event);
    } else {
        return self->QValueAxis::event(event);
    }
}

// Base class handler implementation
bool QValueAxis_QBaseEvent(QValueAxis* self, QEvent* event) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_Event_IsBase(true);
        return vqvalueaxis->event(event);
    } else {
        return self->QValueAxis::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnEvent(QValueAxis* self, intptr_t slot) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_Event_Callback(reinterpret_cast<VirtualQValueAxis::QValueAxis_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QValueAxis_EventFilter(QValueAxis* self, QObject* watched, QEvent* event) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        return vqvalueaxis->eventFilter(watched, event);
    } else {
        return self->QValueAxis::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QValueAxis_QBaseEventFilter(QValueAxis* self, QObject* watched, QEvent* event) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_EventFilter_IsBase(true);
        return vqvalueaxis->eventFilter(watched, event);
    } else {
        return self->QValueAxis::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnEventFilter(QValueAxis* self, intptr_t slot) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_EventFilter_Callback(reinterpret_cast<VirtualQValueAxis::QValueAxis_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QValueAxis_TimerEvent(QValueAxis* self, QTimerEvent* event) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->timerEvent(event);
    } else {
        ((VirtualQValueAxis*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QValueAxis_QBaseTimerEvent(QValueAxis* self, QTimerEvent* event) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_TimerEvent_IsBase(true);
        vqvalueaxis->timerEvent(event);
    } else {
        ((VirtualQValueAxis*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnTimerEvent(QValueAxis* self, intptr_t slot) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_TimerEvent_Callback(reinterpret_cast<VirtualQValueAxis::QValueAxis_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QValueAxis_ChildEvent(QValueAxis* self, QChildEvent* event) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->childEvent(event);
    } else {
        ((VirtualQValueAxis*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QValueAxis_QBaseChildEvent(QValueAxis* self, QChildEvent* event) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_ChildEvent_IsBase(true);
        vqvalueaxis->childEvent(event);
    } else {
        ((VirtualQValueAxis*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnChildEvent(QValueAxis* self, intptr_t slot) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_ChildEvent_Callback(reinterpret_cast<VirtualQValueAxis::QValueAxis_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QValueAxis_CustomEvent(QValueAxis* self, QEvent* event) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->customEvent(event);
    } else {
        ((VirtualQValueAxis*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QValueAxis_QBaseCustomEvent(QValueAxis* self, QEvent* event) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_CustomEvent_IsBase(true);
        vqvalueaxis->customEvent(event);
    } else {
        ((VirtualQValueAxis*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnCustomEvent(QValueAxis* self, intptr_t slot) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_CustomEvent_Callback(reinterpret_cast<VirtualQValueAxis::QValueAxis_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QValueAxis_ConnectNotify(QValueAxis* self, const QMetaMethod* signal) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->connectNotify(*signal);
    } else {
        ((VirtualQValueAxis*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QValueAxis_QBaseConnectNotify(QValueAxis* self, const QMetaMethod* signal) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_ConnectNotify_IsBase(true);
        vqvalueaxis->connectNotify(*signal);
    } else {
        ((VirtualQValueAxis*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnConnectNotify(QValueAxis* self, intptr_t slot) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_ConnectNotify_Callback(reinterpret_cast<VirtualQValueAxis::QValueAxis_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QValueAxis_DisconnectNotify(QValueAxis* self, const QMetaMethod* signal) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->disconnectNotify(*signal);
    } else {
        ((VirtualQValueAxis*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QValueAxis_QBaseDisconnectNotify(QValueAxis* self, const QMetaMethod* signal) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_DisconnectNotify_IsBase(true);
        vqvalueaxis->disconnectNotify(*signal);
    } else {
        ((VirtualQValueAxis*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnDisconnectNotify(QValueAxis* self, intptr_t slot) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_DisconnectNotify_Callback(reinterpret_cast<VirtualQValueAxis::QValueAxis_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QValueAxis_Sender(const QValueAxis* self) {
    auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self));
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        return vqvalueaxis->sender();
    } else {
        return ((VirtualQValueAxis*)self)->sender();
    }
}

// Base class handler implementation
QObject* QValueAxis_QBaseSender(const QValueAxis* self) {
    auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self));
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_Sender_IsBase(true);
        return vqvalueaxis->sender();
    } else {
        return ((VirtualQValueAxis*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnSender(const QValueAxis* self, intptr_t slot) {
    auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self));
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_Sender_Callback(reinterpret_cast<VirtualQValueAxis::QValueAxis_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QValueAxis_SenderSignalIndex(const QValueAxis* self) {
    auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self));
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        return vqvalueaxis->senderSignalIndex();
    } else {
        return ((VirtualQValueAxis*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QValueAxis_QBaseSenderSignalIndex(const QValueAxis* self) {
    auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self));
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_SenderSignalIndex_IsBase(true);
        return vqvalueaxis->senderSignalIndex();
    } else {
        return ((VirtualQValueAxis*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnSenderSignalIndex(const QValueAxis* self, intptr_t slot) {
    auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self));
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_SenderSignalIndex_Callback(reinterpret_cast<VirtualQValueAxis::QValueAxis_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QValueAxis_Receivers(const QValueAxis* self, const char* signal) {
    auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self));
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        return vqvalueaxis->receivers(signal);
    } else {
        return ((VirtualQValueAxis*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QValueAxis_QBaseReceivers(const QValueAxis* self, const char* signal) {
    auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self));
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_Receivers_IsBase(true);
        return vqvalueaxis->receivers(signal);
    } else {
        return ((VirtualQValueAxis*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnReceivers(const QValueAxis* self, intptr_t slot) {
    auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self));
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_Receivers_Callback(reinterpret_cast<VirtualQValueAxis::QValueAxis_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QValueAxis_IsSignalConnected(const QValueAxis* self, const QMetaMethod* signal) {
    auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self));
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        return vqvalueaxis->isSignalConnected(*signal);
    } else {
        return ((VirtualQValueAxis*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QValueAxis_QBaseIsSignalConnected(const QValueAxis* self, const QMetaMethod* signal) {
    auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self));
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_IsSignalConnected_IsBase(true);
        return vqvalueaxis->isSignalConnected(*signal);
    } else {
        return ((VirtualQValueAxis*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnIsSignalConnected(const QValueAxis* self, intptr_t slot) {
    auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self));
    if (vqvalueaxis && vqvalueaxis->isVirtualQValueAxis) {
        vqvalueaxis->setQValueAxis_IsSignalConnected_Callback(reinterpret_cast<VirtualQValueAxis::QValueAxis_IsSignalConnected_Callback>(slot));
    }
}

void QValueAxis_Delete(QValueAxis* self) {
    delete self;
}
