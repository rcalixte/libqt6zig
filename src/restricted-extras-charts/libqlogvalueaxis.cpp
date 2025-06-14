#include <QAbstractAxis>
#include <QChildEvent>
#include <QEvent>
#include <QLogValueAxis>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qlogvalueaxis.h>
#include "libqlogvalueaxis.h"
#include "libqlogvalueaxis.hxx"

QLogValueAxis* QLogValueAxis_new() {
    return new VirtualQLogValueAxis();
}

QLogValueAxis* QLogValueAxis_new2(QObject* parent) {
    return new VirtualQLogValueAxis(parent);
}

QMetaObject* QLogValueAxis_MetaObject(const QLogValueAxis* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLogValueAxis_Metacast(QLogValueAxis* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLogValueAxis_Metacall(QLogValueAxis* self, int param1, int param2, void** param3) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQLogValueAxis*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QLogValueAxis_OnMetacall(QLogValueAxis* self, intptr_t slot) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_Metacall_Callback(reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QLogValueAxis_QBaseMetacall(QLogValueAxis* self, int param1, int param2, void** param3) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_Metacall_IsBase(true);
        return vqlogvalueaxis->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQLogValueAxis*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QLogValueAxis_Tr(const char* s) {
    QString _ret = QLogValueAxis::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QLogValueAxis_SetMin(QLogValueAxis* self, double min) {
    self->setMin(static_cast<qreal>(min));
}

double QLogValueAxis_Min(const QLogValueAxis* self) {
    return static_cast<double>(self->min());
}

void QLogValueAxis_SetMax(QLogValueAxis* self, double max) {
    self->setMax(static_cast<qreal>(max));
}

double QLogValueAxis_Max(const QLogValueAxis* self) {
    return static_cast<double>(self->max());
}

void QLogValueAxis_SetRange(QLogValueAxis* self, double min, double max) {
    self->setRange(static_cast<qreal>(min), static_cast<qreal>(max));
}

void QLogValueAxis_SetLabelFormat(QLogValueAxis* self, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->setLabelFormat(format_QString);
}

libqt_string QLogValueAxis_LabelFormat(const QLogValueAxis* self) {
    QString _ret = self->labelFormat();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QLogValueAxis_SetBase(QLogValueAxis* self, double base) {
    self->setBase(static_cast<qreal>(base));
}

double QLogValueAxis_Base(const QLogValueAxis* self) {
    return static_cast<double>(self->base());
}

int QLogValueAxis_TickCount(const QLogValueAxis* self) {
    return self->tickCount();
}

void QLogValueAxis_SetMinorTickCount(QLogValueAxis* self, int minorTickCount) {
    self->setMinorTickCount(static_cast<int>(minorTickCount));
}

int QLogValueAxis_MinorTickCount(const QLogValueAxis* self) {
    return self->minorTickCount();
}

void QLogValueAxis_MinChanged(QLogValueAxis* self, double min) {
    self->minChanged(static_cast<qreal>(min));
}

void QLogValueAxis_Connect_MinChanged(QLogValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QLogValueAxis*, double) = reinterpret_cast<void (*)(QLogValueAxis*, double)>(slot);
    QLogValueAxis::connect(self, &QLogValueAxis::minChanged, [self, slotFunc](qreal min) {
        double sigval1 = static_cast<double>(min);
        slotFunc(self, sigval1);
    });
}

void QLogValueAxis_MaxChanged(QLogValueAxis* self, double max) {
    self->maxChanged(static_cast<qreal>(max));
}

void QLogValueAxis_Connect_MaxChanged(QLogValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QLogValueAxis*, double) = reinterpret_cast<void (*)(QLogValueAxis*, double)>(slot);
    QLogValueAxis::connect(self, &QLogValueAxis::maxChanged, [self, slotFunc](qreal max) {
        double sigval1 = static_cast<double>(max);
        slotFunc(self, sigval1);
    });
}

void QLogValueAxis_RangeChanged(QLogValueAxis* self, double min, double max) {
    self->rangeChanged(static_cast<qreal>(min), static_cast<qreal>(max));
}

void QLogValueAxis_Connect_RangeChanged(QLogValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QLogValueAxis*, double, double) = reinterpret_cast<void (*)(QLogValueAxis*, double, double)>(slot);
    QLogValueAxis::connect(self, &QLogValueAxis::rangeChanged, [self, slotFunc](qreal min, qreal max) {
        double sigval1 = static_cast<double>(min);
        double sigval2 = static_cast<double>(max);
        slotFunc(self, sigval1, sigval2);
    });
}

void QLogValueAxis_LabelFormatChanged(QLogValueAxis* self, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->labelFormatChanged(format_QString);
}

void QLogValueAxis_Connect_LabelFormatChanged(QLogValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QLogValueAxis*, libqt_string) = reinterpret_cast<void (*)(QLogValueAxis*, libqt_string)>(slot);
    QLogValueAxis::connect(self, &QLogValueAxis::labelFormatChanged, [self, slotFunc](const QString& format) {
        const QString format_ret = format;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray format_b = format_ret.toUtf8();
        libqt_string format_str;
        format_str.len = format_b.length();
        format_str.data = static_cast<const char*>(malloc((format_str.len + 1) * sizeof(char)));
        memcpy((void*)format_str.data, format_b.data(), format_str.len);
        ((char*)format_str.data)[format_str.len] = '\0';
        libqt_string sigval1 = format_str;
        slotFunc(self, sigval1);
    });
}

void QLogValueAxis_BaseChanged(QLogValueAxis* self, double base) {
    self->baseChanged(static_cast<qreal>(base));
}

void QLogValueAxis_Connect_BaseChanged(QLogValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QLogValueAxis*, double) = reinterpret_cast<void (*)(QLogValueAxis*, double)>(slot);
    QLogValueAxis::connect(self, &QLogValueAxis::baseChanged, [self, slotFunc](qreal base) {
        double sigval1 = static_cast<double>(base);
        slotFunc(self, sigval1);
    });
}

void QLogValueAxis_TickCountChanged(QLogValueAxis* self, int tickCount) {
    self->tickCountChanged(static_cast<int>(tickCount));
}

void QLogValueAxis_Connect_TickCountChanged(QLogValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QLogValueAxis*, int) = reinterpret_cast<void (*)(QLogValueAxis*, int)>(slot);
    QLogValueAxis::connect(self, &QLogValueAxis::tickCountChanged, [self, slotFunc](int tickCount) {
        int sigval1 = tickCount;
        slotFunc(self, sigval1);
    });
}

void QLogValueAxis_MinorTickCountChanged(QLogValueAxis* self, int minorTickCount) {
    self->minorTickCountChanged(static_cast<int>(minorTickCount));
}

void QLogValueAxis_Connect_MinorTickCountChanged(QLogValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QLogValueAxis*, int) = reinterpret_cast<void (*)(QLogValueAxis*, int)>(slot);
    QLogValueAxis::connect(self, &QLogValueAxis::minorTickCountChanged, [self, slotFunc](int minorTickCount) {
        int sigval1 = minorTickCount;
        slotFunc(self, sigval1);
    });
}

libqt_string QLogValueAxis_Tr2(const char* s, const char* c) {
    QString _ret = QLogValueAxis::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QLogValueAxis_Tr3(const char* s, const char* c, int n) {
    QString _ret = QLogValueAxis::tr(s, c, static_cast<int>(n));
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
int QLogValueAxis_Type(const QLogValueAxis* self) {
    auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self));
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        return static_cast<int>(vqlogvalueaxis->type());
    } else {
        return static_cast<int>(self->QLogValueAxis::type());
    }
}

// Base class handler implementation
int QLogValueAxis_QBaseType(const QLogValueAxis* self) {
    auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self));
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_Type_IsBase(true);
        return static_cast<int>(vqlogvalueaxis->type());
    } else {
        return static_cast<int>(self->QLogValueAxis::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnType(const QLogValueAxis* self, intptr_t slot) {
    auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self));
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_Type_Callback(reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLogValueAxis_Event(QLogValueAxis* self, QEvent* event) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        return vqlogvalueaxis->event(event);
    } else {
        return self->QLogValueAxis::event(event);
    }
}

// Base class handler implementation
bool QLogValueAxis_QBaseEvent(QLogValueAxis* self, QEvent* event) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_Event_IsBase(true);
        return vqlogvalueaxis->event(event);
    } else {
        return self->QLogValueAxis::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnEvent(QLogValueAxis* self, intptr_t slot) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_Event_Callback(reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLogValueAxis_EventFilter(QLogValueAxis* self, QObject* watched, QEvent* event) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        return vqlogvalueaxis->eventFilter(watched, event);
    } else {
        return self->QLogValueAxis::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QLogValueAxis_QBaseEventFilter(QLogValueAxis* self, QObject* watched, QEvent* event) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_EventFilter_IsBase(true);
        return vqlogvalueaxis->eventFilter(watched, event);
    } else {
        return self->QLogValueAxis::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnEventFilter(QLogValueAxis* self, intptr_t slot) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_EventFilter_Callback(reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QLogValueAxis_TimerEvent(QLogValueAxis* self, QTimerEvent* event) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->timerEvent(event);
    } else {
        ((VirtualQLogValueAxis*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QLogValueAxis_QBaseTimerEvent(QLogValueAxis* self, QTimerEvent* event) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_TimerEvent_IsBase(true);
        vqlogvalueaxis->timerEvent(event);
    } else {
        ((VirtualQLogValueAxis*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnTimerEvent(QLogValueAxis* self, intptr_t slot) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_TimerEvent_Callback(reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLogValueAxis_ChildEvent(QLogValueAxis* self, QChildEvent* event) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->childEvent(event);
    } else {
        ((VirtualQLogValueAxis*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QLogValueAxis_QBaseChildEvent(QLogValueAxis* self, QChildEvent* event) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_ChildEvent_IsBase(true);
        vqlogvalueaxis->childEvent(event);
    } else {
        ((VirtualQLogValueAxis*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnChildEvent(QLogValueAxis* self, intptr_t slot) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_ChildEvent_Callback(reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLogValueAxis_CustomEvent(QLogValueAxis* self, QEvent* event) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->customEvent(event);
    } else {
        ((VirtualQLogValueAxis*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QLogValueAxis_QBaseCustomEvent(QLogValueAxis* self, QEvent* event) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_CustomEvent_IsBase(true);
        vqlogvalueaxis->customEvent(event);
    } else {
        ((VirtualQLogValueAxis*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnCustomEvent(QLogValueAxis* self, intptr_t slot) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_CustomEvent_Callback(reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLogValueAxis_ConnectNotify(QLogValueAxis* self, const QMetaMethod* signal) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->connectNotify(*signal);
    } else {
        ((VirtualQLogValueAxis*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QLogValueAxis_QBaseConnectNotify(QLogValueAxis* self, const QMetaMethod* signal) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_ConnectNotify_IsBase(true);
        vqlogvalueaxis->connectNotify(*signal);
    } else {
        ((VirtualQLogValueAxis*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnConnectNotify(QLogValueAxis* self, intptr_t slot) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_ConnectNotify_Callback(reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QLogValueAxis_DisconnectNotify(QLogValueAxis* self, const QMetaMethod* signal) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->disconnectNotify(*signal);
    } else {
        ((VirtualQLogValueAxis*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QLogValueAxis_QBaseDisconnectNotify(QLogValueAxis* self, const QMetaMethod* signal) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_DisconnectNotify_IsBase(true);
        vqlogvalueaxis->disconnectNotify(*signal);
    } else {
        ((VirtualQLogValueAxis*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnDisconnectNotify(QLogValueAxis* self, intptr_t slot) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_DisconnectNotify_Callback(reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QLogValueAxis_Sender(const QLogValueAxis* self) {
    auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self));
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        return vqlogvalueaxis->sender();
    } else {
        return ((VirtualQLogValueAxis*)self)->sender();
    }
}

// Base class handler implementation
QObject* QLogValueAxis_QBaseSender(const QLogValueAxis* self) {
    auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self));
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_Sender_IsBase(true);
        return vqlogvalueaxis->sender();
    } else {
        return ((VirtualQLogValueAxis*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnSender(const QLogValueAxis* self, intptr_t slot) {
    auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self));
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_Sender_Callback(reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QLogValueAxis_SenderSignalIndex(const QLogValueAxis* self) {
    auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self));
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        return vqlogvalueaxis->senderSignalIndex();
    } else {
        return ((VirtualQLogValueAxis*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QLogValueAxis_QBaseSenderSignalIndex(const QLogValueAxis* self) {
    auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self));
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_SenderSignalIndex_IsBase(true);
        return vqlogvalueaxis->senderSignalIndex();
    } else {
        return ((VirtualQLogValueAxis*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnSenderSignalIndex(const QLogValueAxis* self, intptr_t slot) {
    auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self));
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_SenderSignalIndex_Callback(reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QLogValueAxis_Receivers(const QLogValueAxis* self, const char* signal) {
    auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self));
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        return vqlogvalueaxis->receivers(signal);
    } else {
        return ((VirtualQLogValueAxis*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QLogValueAxis_QBaseReceivers(const QLogValueAxis* self, const char* signal) {
    auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self));
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_Receivers_IsBase(true);
        return vqlogvalueaxis->receivers(signal);
    } else {
        return ((VirtualQLogValueAxis*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnReceivers(const QLogValueAxis* self, intptr_t slot) {
    auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self));
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_Receivers_Callback(reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLogValueAxis_IsSignalConnected(const QLogValueAxis* self, const QMetaMethod* signal) {
    auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self));
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        return vqlogvalueaxis->isSignalConnected(*signal);
    } else {
        return ((VirtualQLogValueAxis*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QLogValueAxis_QBaseIsSignalConnected(const QLogValueAxis* self, const QMetaMethod* signal) {
    auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self));
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_IsSignalConnected_IsBase(true);
        return vqlogvalueaxis->isSignalConnected(*signal);
    } else {
        return ((VirtualQLogValueAxis*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnIsSignalConnected(const QLogValueAxis* self, intptr_t slot) {
    auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self));
    if (vqlogvalueaxis && vqlogvalueaxis->isVirtualQLogValueAxis) {
        vqlogvalueaxis->setQLogValueAxis_IsSignalConnected_Callback(reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_IsSignalConnected_Callback>(slot));
    }
}

void QLogValueAxis_Delete(QLogValueAxis* self) {
    delete self;
}
