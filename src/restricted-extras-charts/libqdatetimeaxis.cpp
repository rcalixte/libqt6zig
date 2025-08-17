#include <QAbstractAxis>
#include <QChildEvent>
#include <QDateTime>
#include <QDateTimeAxis>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qdatetimeaxis.h>
#include "libqdatetimeaxis.h"
#include "libqdatetimeaxis.hxx"

QDateTimeAxis* QDateTimeAxis_new() {
    return new VirtualQDateTimeAxis();
}

QDateTimeAxis* QDateTimeAxis_new2(QObject* parent) {
    return new VirtualQDateTimeAxis(parent);
}

QMetaObject* QDateTimeAxis_MetaObject(const QDateTimeAxis* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDateTimeAxis_Metacast(QDateTimeAxis* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDateTimeAxis_Metacall(QDateTimeAxis* self, int param1, int param2, void** param3) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDateTimeAxis*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDateTimeAxis_OnMetacall(QDateTimeAxis* self, intptr_t slot) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_Metacall_Callback(reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDateTimeAxis_QBaseMetacall(QDateTimeAxis* self, int param1, int param2, void** param3) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_Metacall_IsBase(true);
        return vqdatetimeaxis->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDateTimeAxis*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDateTimeAxis_Tr(const char* s) {
    QString _ret = QDateTimeAxis::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDateTimeAxis_SetMin(QDateTimeAxis* self, QDateTime* min) {
    self->setMin(*min);
}

QDateTime* QDateTimeAxis_Min(const QDateTimeAxis* self) {
    return new QDateTime(self->min());
}

void QDateTimeAxis_SetMax(QDateTimeAxis* self, QDateTime* max) {
    self->setMax(*max);
}

QDateTime* QDateTimeAxis_Max(const QDateTimeAxis* self) {
    return new QDateTime(self->max());
}

void QDateTimeAxis_SetRange(QDateTimeAxis* self, QDateTime* min, QDateTime* max) {
    self->setRange(*min, *max);
}

void QDateTimeAxis_SetFormat(QDateTimeAxis* self, libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->setFormat(format_QString);
}

libqt_string QDateTimeAxis_Format(const QDateTimeAxis* self) {
    QString _ret = self->format();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDateTimeAxis_SetTickCount(QDateTimeAxis* self, int count) {
    self->setTickCount(static_cast<int>(count));
}

int QDateTimeAxis_TickCount(const QDateTimeAxis* self) {
    return self->tickCount();
}

void QDateTimeAxis_MinChanged(QDateTimeAxis* self, QDateTime* min) {
    self->minChanged(*min);
}

void QDateTimeAxis_Connect_MinChanged(QDateTimeAxis* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeAxis*, QDateTime*) = reinterpret_cast<void (*)(QDateTimeAxis*, QDateTime*)>(slot);
    QDateTimeAxis::connect(self, &QDateTimeAxis::minChanged, [self, slotFunc](QDateTime min) {
        QDateTime* sigval1 = new QDateTime(min);
        slotFunc(self, sigval1);
    });
}

void QDateTimeAxis_MaxChanged(QDateTimeAxis* self, QDateTime* max) {
    self->maxChanged(*max);
}

void QDateTimeAxis_Connect_MaxChanged(QDateTimeAxis* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeAxis*, QDateTime*) = reinterpret_cast<void (*)(QDateTimeAxis*, QDateTime*)>(slot);
    QDateTimeAxis::connect(self, &QDateTimeAxis::maxChanged, [self, slotFunc](QDateTime max) {
        QDateTime* sigval1 = new QDateTime(max);
        slotFunc(self, sigval1);
    });
}

void QDateTimeAxis_RangeChanged(QDateTimeAxis* self, QDateTime* min, QDateTime* max) {
    self->rangeChanged(*min, *max);
}

void QDateTimeAxis_Connect_RangeChanged(QDateTimeAxis* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeAxis*, QDateTime*, QDateTime*) = reinterpret_cast<void (*)(QDateTimeAxis*, QDateTime*, QDateTime*)>(slot);
    QDateTimeAxis::connect(self, &QDateTimeAxis::rangeChanged, [self, slotFunc](QDateTime min, QDateTime max) {
        QDateTime* sigval1 = new QDateTime(min);
        QDateTime* sigval2 = new QDateTime(max);
        slotFunc(self, sigval1, sigval2);
    });
}

void QDateTimeAxis_FormatChanged(QDateTimeAxis* self, libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->formatChanged(format_QString);
}

void QDateTimeAxis_Connect_FormatChanged(QDateTimeAxis* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeAxis*, libqt_string) = reinterpret_cast<void (*)(QDateTimeAxis*, libqt_string)>(slot);
    QDateTimeAxis::connect(self, &QDateTimeAxis::formatChanged, [self, slotFunc](QString format) {
        QString format_ret = format;
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

void QDateTimeAxis_TickCountChanged(QDateTimeAxis* self, int tick) {
    self->tickCountChanged(static_cast<int>(tick));
}

void QDateTimeAxis_Connect_TickCountChanged(QDateTimeAxis* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeAxis*, int) = reinterpret_cast<void (*)(QDateTimeAxis*, int)>(slot);
    QDateTimeAxis::connect(self, &QDateTimeAxis::tickCountChanged, [self, slotFunc](int tick) {
        int sigval1 = tick;
        slotFunc(self, sigval1);
    });
}

libqt_string QDateTimeAxis_Tr2(const char* s, const char* c) {
    QString _ret = QDateTimeAxis::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDateTimeAxis_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDateTimeAxis::tr(s, c, static_cast<int>(n));
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
int QDateTimeAxis_Type(const QDateTimeAxis* self) {
    auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self));
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        return static_cast<int>(vqdatetimeaxis->type());
    } else {
        return static_cast<int>(self->QDateTimeAxis::type());
    }
}

// Base class handler implementation
int QDateTimeAxis_QBaseType(const QDateTimeAxis* self) {
    auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self));
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_Type_IsBase(true);
        return static_cast<int>(vqdatetimeaxis->type());
    } else {
        return static_cast<int>(self->QDateTimeAxis::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnType(const QDateTimeAxis* self, intptr_t slot) {
    auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self));
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_Type_Callback(reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateTimeAxis_Event(QDateTimeAxis* self, QEvent* event) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        return vqdatetimeaxis->event(event);
    } else {
        return self->QDateTimeAxis::event(event);
    }
}

// Base class handler implementation
bool QDateTimeAxis_QBaseEvent(QDateTimeAxis* self, QEvent* event) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_Event_IsBase(true);
        return vqdatetimeaxis->event(event);
    } else {
        return self->QDateTimeAxis::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnEvent(QDateTimeAxis* self, intptr_t slot) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_Event_Callback(reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateTimeAxis_EventFilter(QDateTimeAxis* self, QObject* watched, QEvent* event) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        return vqdatetimeaxis->eventFilter(watched, event);
    } else {
        return self->QDateTimeAxis::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDateTimeAxis_QBaseEventFilter(QDateTimeAxis* self, QObject* watched, QEvent* event) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_EventFilter_IsBase(true);
        return vqdatetimeaxis->eventFilter(watched, event);
    } else {
        return self->QDateTimeAxis::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnEventFilter(QDateTimeAxis* self, intptr_t slot) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_EventFilter_Callback(reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeAxis_TimerEvent(QDateTimeAxis* self, QTimerEvent* event) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->timerEvent(event);
    } else {
        ((VirtualQDateTimeAxis*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDateTimeAxis_QBaseTimerEvent(QDateTimeAxis* self, QTimerEvent* event) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_TimerEvent_IsBase(true);
        vqdatetimeaxis->timerEvent(event);
    } else {
        ((VirtualQDateTimeAxis*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnTimerEvent(QDateTimeAxis* self, intptr_t slot) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_TimerEvent_Callback(reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeAxis_ChildEvent(QDateTimeAxis* self, QChildEvent* event) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->childEvent(event);
    } else {
        ((VirtualQDateTimeAxis*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDateTimeAxis_QBaseChildEvent(QDateTimeAxis* self, QChildEvent* event) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_ChildEvent_IsBase(true);
        vqdatetimeaxis->childEvent(event);
    } else {
        ((VirtualQDateTimeAxis*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnChildEvent(QDateTimeAxis* self, intptr_t slot) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_ChildEvent_Callback(reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeAxis_CustomEvent(QDateTimeAxis* self, QEvent* event) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->customEvent(event);
    } else {
        ((VirtualQDateTimeAxis*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDateTimeAxis_QBaseCustomEvent(QDateTimeAxis* self, QEvent* event) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_CustomEvent_IsBase(true);
        vqdatetimeaxis->customEvent(event);
    } else {
        ((VirtualQDateTimeAxis*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnCustomEvent(QDateTimeAxis* self, intptr_t slot) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_CustomEvent_Callback(reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeAxis_ConnectNotify(QDateTimeAxis* self, const QMetaMethod* signal) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->connectNotify(*signal);
    } else {
        ((VirtualQDateTimeAxis*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDateTimeAxis_QBaseConnectNotify(QDateTimeAxis* self, const QMetaMethod* signal) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_ConnectNotify_IsBase(true);
        vqdatetimeaxis->connectNotify(*signal);
    } else {
        ((VirtualQDateTimeAxis*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnConnectNotify(QDateTimeAxis* self, intptr_t slot) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_ConnectNotify_Callback(reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDateTimeAxis_DisconnectNotify(QDateTimeAxis* self, const QMetaMethod* signal) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->disconnectNotify(*signal);
    } else {
        ((VirtualQDateTimeAxis*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDateTimeAxis_QBaseDisconnectNotify(QDateTimeAxis* self, const QMetaMethod* signal) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_DisconnectNotify_IsBase(true);
        vqdatetimeaxis->disconnectNotify(*signal);
    } else {
        ((VirtualQDateTimeAxis*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnDisconnectNotify(QDateTimeAxis* self, intptr_t slot) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_DisconnectNotify_Callback(reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDateTimeAxis_Sender(const QDateTimeAxis* self) {
    auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self));
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        return vqdatetimeaxis->sender();
    } else {
        return ((VirtualQDateTimeAxis*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDateTimeAxis_QBaseSender(const QDateTimeAxis* self) {
    auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self));
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_Sender_IsBase(true);
        return vqdatetimeaxis->sender();
    } else {
        return ((VirtualQDateTimeAxis*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnSender(const QDateTimeAxis* self, intptr_t slot) {
    auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self));
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_Sender_Callback(reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateTimeAxis_SenderSignalIndex(const QDateTimeAxis* self) {
    auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self));
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        return vqdatetimeaxis->senderSignalIndex();
    } else {
        return ((VirtualQDateTimeAxis*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDateTimeAxis_QBaseSenderSignalIndex(const QDateTimeAxis* self) {
    auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self));
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_SenderSignalIndex_IsBase(true);
        return vqdatetimeaxis->senderSignalIndex();
    } else {
        return ((VirtualQDateTimeAxis*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnSenderSignalIndex(const QDateTimeAxis* self, intptr_t slot) {
    auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self));
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDateTimeAxis_Receivers(const QDateTimeAxis* self, const char* signal) {
    auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self));
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        return vqdatetimeaxis->receivers(signal);
    } else {
        return ((VirtualQDateTimeAxis*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDateTimeAxis_QBaseReceivers(const QDateTimeAxis* self, const char* signal) {
    auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self));
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_Receivers_IsBase(true);
        return vqdatetimeaxis->receivers(signal);
    } else {
        return ((VirtualQDateTimeAxis*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnReceivers(const QDateTimeAxis* self, intptr_t slot) {
    auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self));
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_Receivers_Callback(reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDateTimeAxis_IsSignalConnected(const QDateTimeAxis* self, const QMetaMethod* signal) {
    auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self));
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        return vqdatetimeaxis->isSignalConnected(*signal);
    } else {
        return ((VirtualQDateTimeAxis*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDateTimeAxis_QBaseIsSignalConnected(const QDateTimeAxis* self, const QMetaMethod* signal) {
    auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self));
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_IsSignalConnected_IsBase(true);
        return vqdatetimeaxis->isSignalConnected(*signal);
    } else {
        return ((VirtualQDateTimeAxis*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnIsSignalConnected(const QDateTimeAxis* self, intptr_t slot) {
    auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self));
    if (vqdatetimeaxis && vqdatetimeaxis->isVirtualQDateTimeAxis) {
        vqdatetimeaxis->setQDateTimeAxis_IsSignalConnected_Callback(reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_IsSignalConnected_Callback>(slot));
    }
}

void QDateTimeAxis_Delete(QDateTimeAxis* self) {
    delete self;
}
