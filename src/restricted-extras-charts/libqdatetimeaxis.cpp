#include <QAbstractAxis>
#include <QChildEvent>
#include <QDateTime>
#include <QDateTimeAxis>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDateTimeAxis_Tr(const char* s) {
    auto _ret = QDateTimeAxis::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QDateTimeAxis_Type(const QDateTimeAxis* self) {
    return static_cast<int>(self->type());
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
    auto _ret = self->format();
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
    QDateTimeAxis::connect(self,
                           static_cast<void (QDateTimeAxis::*)(QDateTime)>(&QDateTimeAxis::minChanged),
                           [self, slotFunc](QDateTime min) {
                               QDateTime* sigval1 = new QDateTime(min);
                               slotFunc(self, sigval1);
                           });
}

void QDateTimeAxis_MaxChanged(QDateTimeAxis* self, QDateTime* max) {
    self->maxChanged(*max);
}

void QDateTimeAxis_Connect_MaxChanged(QDateTimeAxis* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeAxis*, QDateTime*) = reinterpret_cast<void (*)(QDateTimeAxis*, QDateTime*)>(slot);
    QDateTimeAxis::connect(self,
                           static_cast<void (QDateTimeAxis::*)(QDateTime)>(&QDateTimeAxis::maxChanged),
                           [self, slotFunc](QDateTime max) {
                               QDateTime* sigval1 = new QDateTime(max);
                               slotFunc(self, sigval1);
                           });
}

void QDateTimeAxis_RangeChanged(QDateTimeAxis* self, QDateTime* min, QDateTime* max) {
    self->rangeChanged(*min, *max);
}

void QDateTimeAxis_Connect_RangeChanged(QDateTimeAxis* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeAxis*, QDateTime*, QDateTime*) = reinterpret_cast<void (*)(QDateTimeAxis*, QDateTime*, QDateTime*)>(slot);
    QDateTimeAxis::connect(self,
                           static_cast<void (QDateTimeAxis::*)(QDateTime, QDateTime)>(&QDateTimeAxis::rangeChanged),
                           [self, slotFunc](QDateTime min, QDateTime max) {
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
    void (*slotFunc)(QDateTimeAxis*, const char*) = reinterpret_cast<void (*)(QDateTimeAxis*, const char*)>(slot);
    QDateTimeAxis::connect(self,
                           static_cast<void (QDateTimeAxis::*)(QString)>(&QDateTimeAxis::formatChanged),
                           [self, slotFunc](QString format) {
                               auto format_ret = format;
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

void QDateTimeAxis_TickCountChanged(QDateTimeAxis* self, int tick) {
    self->tickCountChanged(static_cast<int>(tick));
}

void QDateTimeAxis_Connect_TickCountChanged(QDateTimeAxis* self, intptr_t slot) {
    void (*slotFunc)(QDateTimeAxis*, int) = reinterpret_cast<void (*)(QDateTimeAxis*, int)>(slot);
    QDateTimeAxis::connect(self,
                           static_cast<void (QDateTimeAxis::*)(int)>(&QDateTimeAxis::tickCountChanged),
                           [self, slotFunc](int tick) {
                               int sigval1 = tick;
                               slotFunc(self, sigval1);
                           });
}

libqt_string QDateTimeAxis_Tr2(const char* s, const char* c) {
    auto _ret = QDateTimeAxis::tr(s, c);
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
    auto _ret = QDateTimeAxis::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDateTimeAxis_SuperMetaObject(const QDateTimeAxis* self) {
    return (QMetaObject*)self->QDateTimeAxis::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnMetaObject(QDateTimeAxis* self, intptr_t slot) {
    if (auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self)))
        vqdatetimeaxis->qdatetimeaxis_metaobject_callback = reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDateTimeAxis_SuperMetacast(QDateTimeAxis* self, const char* param1) {
    return self->QDateTimeAxis::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnMetacast(QDateTimeAxis* self, intptr_t slot) {
    if (auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self))
        vqdatetimeaxis->qdatetimeaxis_metacast_callback = reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDateTimeAxis_SuperMetacall(QDateTimeAxis* self, int param1, int param2, void** param3) {
    return self->QDateTimeAxis::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnMetacall(QDateTimeAxis* self, intptr_t slot) {
    if (auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self))
        vqdatetimeaxis->qdatetimeaxis_metacall_callback = reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_Metacall_Callback>(slot);
}

// Base class handler implementation
int QDateTimeAxis_SuperType(const QDateTimeAxis* self) {
    return static_cast<int>(self->QDateTimeAxis::type());
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnType(QDateTimeAxis* self, intptr_t slot) {
    if (auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self)))
        vqdatetimeaxis->qdatetimeaxis_type_callback = reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_Type_Callback>(slot);
}

// Derived class handler implementation
bool QDateTimeAxis_Event(QDateTimeAxis* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QDateTimeAxis_SuperEvent(QDateTimeAxis* self, QEvent* event) {
    return self->QDateTimeAxis::event(event);
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnEvent(QDateTimeAxis* self, intptr_t slot) {
    if (auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self))
        vqdatetimeaxis->qdatetimeaxis_event_callback = reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_Event_Callback>(slot);
}

// Derived class handler implementation
bool QDateTimeAxis_EventFilter(QDateTimeAxis* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDateTimeAxis_SuperEventFilter(QDateTimeAxis* self, QObject* watched, QEvent* event) {
    return self->QDateTimeAxis::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnEventFilter(QDateTimeAxis* self, intptr_t slot) {
    if (auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self))
        vqdatetimeaxis->qdatetimeaxis_eventfilter_callback = reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeAxis_TimerEvent(QDateTimeAxis* self, QTimerEvent* event) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis) {
        vqdatetimeaxis->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeAxis::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeAxis_SuperTimerEvent(QDateTimeAxis* self, QTimerEvent* event) {
    if (auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self)) {
        vqdatetimeaxis->QDateTimeAxis::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeAxis::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnTimerEvent(QDateTimeAxis* self, intptr_t slot) {
    if (auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self))
        vqdatetimeaxis->qdatetimeaxis_timerevent_callback = reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeAxis_ChildEvent(QDateTimeAxis* self, QChildEvent* event) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis) {
        vqdatetimeaxis->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeAxis::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeAxis_SuperChildEvent(QDateTimeAxis* self, QChildEvent* event) {
    if (auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self)) {
        vqdatetimeaxis->QDateTimeAxis::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeAxis::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnChildEvent(QDateTimeAxis* self, intptr_t slot) {
    if (auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self))
        vqdatetimeaxis->qdatetimeaxis_childevent_callback = reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeAxis_CustomEvent(QDateTimeAxis* self, QEvent* event) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis) {
        vqdatetimeaxis->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDateTimeAxis::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeAxis_SuperCustomEvent(QDateTimeAxis* self, QEvent* event) {
    if (auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self)) {
        vqdatetimeaxis->QDateTimeAxis::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDateTimeAxis::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnCustomEvent(QDateTimeAxis* self, intptr_t slot) {
    if (auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self))
        vqdatetimeaxis->qdatetimeaxis_customevent_callback = reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeAxis_ConnectNotify(QDateTimeAxis* self, const QMetaMethod* signal) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis) {
        vqdatetimeaxis->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDateTimeAxis::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeAxis_SuperConnectNotify(QDateTimeAxis* self, const QMetaMethod* signal) {
    if (auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self)) {
        vqdatetimeaxis->QDateTimeAxis::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDateTimeAxis::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnConnectNotify(QDateTimeAxis* self, intptr_t slot) {
    if (auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self))
        vqdatetimeaxis->qdatetimeaxis_connectnotify_callback = reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDateTimeAxis_DisconnectNotify(QDateTimeAxis* self, const QMetaMethod* signal) {
    auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self);
    if (vqdatetimeaxis) {
        vqdatetimeaxis->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDateTimeAxis::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDateTimeAxis_SuperDisconnectNotify(QDateTimeAxis* self, const QMetaMethod* signal) {
    if (auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self)) {
        vqdatetimeaxis->QDateTimeAxis::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDateTimeAxis::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDateTimeAxis_OnDisconnectNotify(QDateTimeAxis* self, intptr_t slot) {
    if (auto* vqdatetimeaxis = dynamic_cast<VirtualQDateTimeAxis*>(self))
        vqdatetimeaxis->qdatetimeaxis_disconnectnotify_callback = reinterpret_cast<VirtualQDateTimeAxis::QDateTimeAxis_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QDateTimeAxis_Sender(const QDateTimeAxis* self) {
    if (auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self))) {
        return vqdatetimeaxis->VirtualQDateTimeAxis::sender();
    } else
        qFatal("Error: Protected method QDateTimeAxis::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDateTimeAxis_SenderSignalIndex(const QDateTimeAxis* self) {
    if (auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self))) {
        return vqdatetimeaxis->VirtualQDateTimeAxis::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDateTimeAxis::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDateTimeAxis_Receivers(const QDateTimeAxis* self, const char* signal) {
    if (auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self))) {
        return vqdatetimeaxis->VirtualQDateTimeAxis::receivers(signal);
    } else
        qFatal("Error: Protected method QDateTimeAxis::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDateTimeAxis_IsSignalConnected(const QDateTimeAxis* self, const QMetaMethod* signal) {
    if (auto* vqdatetimeaxis = const_cast<VirtualQDateTimeAxis*>(dynamic_cast<const VirtualQDateTimeAxis*>(self))) {
        return vqdatetimeaxis->VirtualQDateTimeAxis::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDateTimeAxis::isSignalConnected called without a directly constructed type");
}

void QDateTimeAxis_Delete(QDateTimeAxis* self) {
    delete self;
}
