#include <QAbstractAxis>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QValueAxis_Tr(const char* s) {
    auto _ret = QValueAxis::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QValueAxis_Type(const QValueAxis* self) {
    return static_cast<int>(self->type());
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
    auto _ret = self->labelFormat();
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
    QValueAxis::connect(self,
                        static_cast<void (QValueAxis::*)(qreal)>(&QValueAxis::minChanged),
                        [self, slotFunc](qreal min) {
                            double sigval1 = static_cast<double>(min);
                            slotFunc(self, sigval1);
                        });
}

void QValueAxis_MaxChanged(QValueAxis* self, double max) {
    self->maxChanged(static_cast<qreal>(max));
}

void QValueAxis_Connect_MaxChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, double) = reinterpret_cast<void (*)(QValueAxis*, double)>(slot);
    QValueAxis::connect(self,
                        static_cast<void (QValueAxis::*)(qreal)>(&QValueAxis::maxChanged),
                        [self, slotFunc](qreal max) {
                            double sigval1 = static_cast<double>(max);
                            slotFunc(self, sigval1);
                        });
}

void QValueAxis_RangeChanged(QValueAxis* self, double min, double max) {
    self->rangeChanged(static_cast<qreal>(min), static_cast<qreal>(max));
}

void QValueAxis_Connect_RangeChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, double, double) = reinterpret_cast<void (*)(QValueAxis*, double, double)>(slot);
    QValueAxis::connect(self,
                        static_cast<void (QValueAxis::*)(qreal, qreal)>(&QValueAxis::rangeChanged),
                        [self, slotFunc](qreal min, qreal max) {
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
    QValueAxis::connect(self,
                        static_cast<void (QValueAxis::*)(int)>(&QValueAxis::tickCountChanged),
                        [self, slotFunc](int tickCount) {
                            int sigval1 = tickCount;
                            slotFunc(self, sigval1);
                        });
}

void QValueAxis_MinorTickCountChanged(QValueAxis* self, int tickCount) {
    self->minorTickCountChanged(static_cast<int>(tickCount));
}

void QValueAxis_Connect_MinorTickCountChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, int) = reinterpret_cast<void (*)(QValueAxis*, int)>(slot);
    QValueAxis::connect(self,
                        static_cast<void (QValueAxis::*)(int)>(&QValueAxis::minorTickCountChanged),
                        [self, slotFunc](int tickCount) {
                            int sigval1 = tickCount;
                            slotFunc(self, sigval1);
                        });
}

void QValueAxis_LabelFormatChanged(QValueAxis* self, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->labelFormatChanged(format_QString);
}

void QValueAxis_Connect_LabelFormatChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, const char*) = reinterpret_cast<void (*)(QValueAxis*, const char*)>(slot);
    QValueAxis::connect(self,
                        static_cast<void (QValueAxis::*)(const QString&)>(&QValueAxis::labelFormatChanged),
                        [self, slotFunc](const QString& format) {
                            const auto format_ret = format;
                            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                            QByteArray format_b = format_ret.toUtf8();
                            auto format_str_len = format_b.length();
                            const char* format_str = static_cast<const char*>(malloc(format_str_len + 1));
                            memcpy((void*)format_str, format_b.data(), format_str_len);
                            ((char*)format_str)[format_str_len] = '\0';
                            const char* sigval1 = format_str;
                            slotFunc(self, sigval1);
                            libqt_free(format_str);
                        });
}

void QValueAxis_TickIntervalChanged(QValueAxis* self, double interval) {
    self->tickIntervalChanged(static_cast<qreal>(interval));
}

void QValueAxis_Connect_TickIntervalChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, double) = reinterpret_cast<void (*)(QValueAxis*, double)>(slot);
    QValueAxis::connect(self,
                        static_cast<void (QValueAxis::*)(qreal)>(&QValueAxis::tickIntervalChanged),
                        [self, slotFunc](qreal interval) {
                            double sigval1 = static_cast<double>(interval);
                            slotFunc(self, sigval1);
                        });
}

void QValueAxis_TickAnchorChanged(QValueAxis* self, double anchor) {
    self->tickAnchorChanged(static_cast<qreal>(anchor));
}

void QValueAxis_Connect_TickAnchorChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, double) = reinterpret_cast<void (*)(QValueAxis*, double)>(slot);
    QValueAxis::connect(self,
                        static_cast<void (QValueAxis::*)(qreal)>(&QValueAxis::tickAnchorChanged),
                        [self, slotFunc](qreal anchor) {
                            double sigval1 = static_cast<double>(anchor);
                            slotFunc(self, sigval1);
                        });
}

void QValueAxis_TickTypeChanged(QValueAxis* self, int typeVal) {
    self->tickTypeChanged(static_cast<QValueAxis::TickType>(typeVal));
}

void QValueAxis_Connect_TickTypeChanged(QValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QValueAxis*, int) = reinterpret_cast<void (*)(QValueAxis*, int)>(slot);
    QValueAxis::connect(self,
                        static_cast<void (QValueAxis::*)(QValueAxis::TickType)>(&QValueAxis::tickTypeChanged),
                        [self, slotFunc](QValueAxis::TickType typeVal) {
                            int sigval1 = static_cast<int>(typeVal);
                            slotFunc(self, sigval1);
                        });
}

libqt_string QValueAxis_Tr2(const char* s, const char* c) {
    auto _ret = QValueAxis::tr(s, c);
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
    auto _ret = QValueAxis::tr(s, c, static_cast<int>(n));
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
QMetaObject* QValueAxis_SuperMetaObject(const QValueAxis* self) {
    return (QMetaObject*)self->QValueAxis::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnMetaObject(QValueAxis* self, intptr_t slot) {
    if (auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self)))
        vqvalueaxis->qvalueaxis_metaobject_callback = reinterpret_cast<VirtualQValueAxis::QValueAxis_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QValueAxis_SuperMetacast(QValueAxis* self, const char* param1) {
    return self->QValueAxis::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnMetacast(QValueAxis* self, intptr_t slot) {
    if (auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self))
        vqvalueaxis->qvalueaxis_metacast_callback = reinterpret_cast<VirtualQValueAxis::QValueAxis_Metacast_Callback>(slot);
}

// Base class handler implementation
int QValueAxis_SuperMetacall(QValueAxis* self, int param1, int param2, void** param3) {
    return self->QValueAxis::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnMetacall(QValueAxis* self, intptr_t slot) {
    if (auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self))
        vqvalueaxis->qvalueaxis_metacall_callback = reinterpret_cast<VirtualQValueAxis::QValueAxis_Metacall_Callback>(slot);
}

// Base class handler implementation
int QValueAxis_SuperType(const QValueAxis* self) {
    return static_cast<int>(self->QValueAxis::type());
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnType(QValueAxis* self, intptr_t slot) {
    if (auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self)))
        vqvalueaxis->qvalueaxis_type_callback = reinterpret_cast<VirtualQValueAxis::QValueAxis_Type_Callback>(slot);
}

// Derived class handler implementation
bool QValueAxis_Event(QValueAxis* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QValueAxis_SuperEvent(QValueAxis* self, QEvent* event) {
    return self->QValueAxis::event(event);
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnEvent(QValueAxis* self, intptr_t slot) {
    if (auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self))
        vqvalueaxis->qvalueaxis_event_callback = reinterpret_cast<VirtualQValueAxis::QValueAxis_Event_Callback>(slot);
}

// Derived class handler implementation
bool QValueAxis_EventFilter(QValueAxis* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QValueAxis_SuperEventFilter(QValueAxis* self, QObject* watched, QEvent* event) {
    return self->QValueAxis::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnEventFilter(QValueAxis* self, intptr_t slot) {
    if (auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self))
        vqvalueaxis->qvalueaxis_eventfilter_callback = reinterpret_cast<VirtualQValueAxis::QValueAxis_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QValueAxis_TimerEvent(QValueAxis* self, QTimerEvent* event) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis) {
        vqvalueaxis->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QValueAxis::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QValueAxis_SuperTimerEvent(QValueAxis* self, QTimerEvent* event) {
    if (auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self)) {
        vqvalueaxis->QValueAxis::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QValueAxis::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnTimerEvent(QValueAxis* self, intptr_t slot) {
    if (auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self))
        vqvalueaxis->qvalueaxis_timerevent_callback = reinterpret_cast<VirtualQValueAxis::QValueAxis_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QValueAxis_ChildEvent(QValueAxis* self, QChildEvent* event) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis) {
        vqvalueaxis->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QValueAxis::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QValueAxis_SuperChildEvent(QValueAxis* self, QChildEvent* event) {
    if (auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self)) {
        vqvalueaxis->QValueAxis::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QValueAxis::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnChildEvent(QValueAxis* self, intptr_t slot) {
    if (auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self))
        vqvalueaxis->qvalueaxis_childevent_callback = reinterpret_cast<VirtualQValueAxis::QValueAxis_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QValueAxis_CustomEvent(QValueAxis* self, QEvent* event) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis) {
        vqvalueaxis->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QValueAxis::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QValueAxis_SuperCustomEvent(QValueAxis* self, QEvent* event) {
    if (auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self)) {
        vqvalueaxis->QValueAxis::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QValueAxis::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnCustomEvent(QValueAxis* self, intptr_t slot) {
    if (auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self))
        vqvalueaxis->qvalueaxis_customevent_callback = reinterpret_cast<VirtualQValueAxis::QValueAxis_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QValueAxis_ConnectNotify(QValueAxis* self, const QMetaMethod* signal) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis) {
        vqvalueaxis->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QValueAxis::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QValueAxis_SuperConnectNotify(QValueAxis* self, const QMetaMethod* signal) {
    if (auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self)) {
        vqvalueaxis->QValueAxis::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QValueAxis::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnConnectNotify(QValueAxis* self, intptr_t slot) {
    if (auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self))
        vqvalueaxis->qvalueaxis_connectnotify_callback = reinterpret_cast<VirtualQValueAxis::QValueAxis_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QValueAxis_DisconnectNotify(QValueAxis* self, const QMetaMethod* signal) {
    auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self);
    if (vqvalueaxis) {
        vqvalueaxis->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QValueAxis::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QValueAxis_SuperDisconnectNotify(QValueAxis* self, const QMetaMethod* signal) {
    if (auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self)) {
        vqvalueaxis->QValueAxis::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QValueAxis::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValueAxis_OnDisconnectNotify(QValueAxis* self, intptr_t slot) {
    if (auto* vqvalueaxis = dynamic_cast<VirtualQValueAxis*>(self))
        vqvalueaxis->qvalueaxis_disconnectnotify_callback = reinterpret_cast<VirtualQValueAxis::QValueAxis_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QValueAxis_Sender(const QValueAxis* self) {
    if (auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self))) {
        return vqvalueaxis->VirtualQValueAxis::sender();
    } else
        qFatal("Error: Protected method QValueAxis::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QValueAxis_SenderSignalIndex(const QValueAxis* self) {
    if (auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self))) {
        return vqvalueaxis->VirtualQValueAxis::senderSignalIndex();
    } else
        qFatal("Error: Protected method QValueAxis::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QValueAxis_Receivers(const QValueAxis* self, const char* signal) {
    if (auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self))) {
        return vqvalueaxis->VirtualQValueAxis::receivers(signal);
    } else
        qFatal("Error: Protected method QValueAxis::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QValueAxis_IsSignalConnected(const QValueAxis* self, const QMetaMethod* signal) {
    if (auto* vqvalueaxis = const_cast<VirtualQValueAxis*>(dynamic_cast<const VirtualQValueAxis*>(self))) {
        return vqvalueaxis->VirtualQValueAxis::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QValueAxis::isSignalConnected called without a directly constructed type");
}

void QValueAxis_Delete(QValueAxis* self) {
    delete self;
}
