#include <QAbstractAxis>
#include <QChildEvent>
#include <QEvent>
#include <QLogValueAxis>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QLogValueAxis_Tr(const char* s) {
    auto _ret = QLogValueAxis::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QLogValueAxis_Type(const QLogValueAxis* self) {
    return static_cast<int>(self->type());
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
    QLogValueAxis::connect(self,
                           static_cast<void (QLogValueAxis::*)(qreal)>(&QLogValueAxis::minChanged),
                           [self, slotFunc](qreal min) {
                               double sigval1 = static_cast<double>(min);
                               slotFunc(self, sigval1);
                           });
}

void QLogValueAxis_MaxChanged(QLogValueAxis* self, double max) {
    self->maxChanged(static_cast<qreal>(max));
}

void QLogValueAxis_Connect_MaxChanged(QLogValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QLogValueAxis*, double) = reinterpret_cast<void (*)(QLogValueAxis*, double)>(slot);
    QLogValueAxis::connect(self,
                           static_cast<void (QLogValueAxis::*)(qreal)>(&QLogValueAxis::maxChanged),
                           [self, slotFunc](qreal max) {
                               double sigval1 = static_cast<double>(max);
                               slotFunc(self, sigval1);
                           });
}

void QLogValueAxis_RangeChanged(QLogValueAxis* self, double min, double max) {
    self->rangeChanged(static_cast<qreal>(min), static_cast<qreal>(max));
}

void QLogValueAxis_Connect_RangeChanged(QLogValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QLogValueAxis*, double, double) = reinterpret_cast<void (*)(QLogValueAxis*, double, double)>(slot);
    QLogValueAxis::connect(self,
                           static_cast<void (QLogValueAxis::*)(qreal, qreal)>(&QLogValueAxis::rangeChanged),
                           [self, slotFunc](qreal min, qreal max) {
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
    void (*slotFunc)(QLogValueAxis*, const char*) = reinterpret_cast<void (*)(QLogValueAxis*, const char*)>(slot);
    QLogValueAxis::connect(self,
                           static_cast<void (QLogValueAxis::*)(const QString&)>(&QLogValueAxis::labelFormatChanged),
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

void QLogValueAxis_BaseChanged(QLogValueAxis* self, double base) {
    self->baseChanged(static_cast<qreal>(base));
}

void QLogValueAxis_Connect_BaseChanged(QLogValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QLogValueAxis*, double) = reinterpret_cast<void (*)(QLogValueAxis*, double)>(slot);
    QLogValueAxis::connect(self,
                           static_cast<void (QLogValueAxis::*)(qreal)>(&QLogValueAxis::baseChanged),
                           [self, slotFunc](qreal base) {
                               double sigval1 = static_cast<double>(base);
                               slotFunc(self, sigval1);
                           });
}

void QLogValueAxis_TickCountChanged(QLogValueAxis* self, int tickCount) {
    self->tickCountChanged(static_cast<int>(tickCount));
}

void QLogValueAxis_Connect_TickCountChanged(QLogValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QLogValueAxis*, int) = reinterpret_cast<void (*)(QLogValueAxis*, int)>(slot);
    QLogValueAxis::connect(self,
                           static_cast<void (QLogValueAxis::*)(int)>(&QLogValueAxis::tickCountChanged),
                           [self, slotFunc](int tickCount) {
                               int sigval1 = tickCount;
                               slotFunc(self, sigval1);
                           });
}

void QLogValueAxis_MinorTickCountChanged(QLogValueAxis* self, int minorTickCount) {
    self->minorTickCountChanged(static_cast<int>(minorTickCount));
}

void QLogValueAxis_Connect_MinorTickCountChanged(QLogValueAxis* self, intptr_t slot) {
    void (*slotFunc)(QLogValueAxis*, int) = reinterpret_cast<void (*)(QLogValueAxis*, int)>(slot);
    QLogValueAxis::connect(self,
                           static_cast<void (QLogValueAxis::*)(int)>(&QLogValueAxis::minorTickCountChanged),
                           [self, slotFunc](int minorTickCount) {
                               int sigval1 = minorTickCount;
                               slotFunc(self, sigval1);
                           });
}

libqt_string QLogValueAxis_Tr2(const char* s, const char* c) {
    auto _ret = QLogValueAxis::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QLogValueAxis_Tr3(const char* s, const char* c, int n) {
    auto _ret = QLogValueAxis::tr(s, c, static_cast<int>(n));
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
QMetaObject* QLogValueAxis_SuperMetaObject(const QLogValueAxis* self) {
    return (QMetaObject*)self->QLogValueAxis::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnMetaObject(QLogValueAxis* self, intptr_t slot) {
    if (auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self)))
        vqlogvalueaxis->qlogvalueaxis_metaobject_callback = reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QLogValueAxis_SuperMetacast(QLogValueAxis* self, const char* param1) {
    return self->QLogValueAxis::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnMetacast(QLogValueAxis* self, intptr_t slot) {
    if (auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self))
        vqlogvalueaxis->qlogvalueaxis_metacast_callback = reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_Metacast_Callback>(slot);
}

// Base class handler implementation
int QLogValueAxis_SuperMetacall(QLogValueAxis* self, int param1, int param2, void** param3) {
    return self->QLogValueAxis::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnMetacall(QLogValueAxis* self, intptr_t slot) {
    if (auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self))
        vqlogvalueaxis->qlogvalueaxis_metacall_callback = reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_Metacall_Callback>(slot);
}

// Base class handler implementation
int QLogValueAxis_SuperType(const QLogValueAxis* self) {
    return static_cast<int>(self->QLogValueAxis::type());
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnType(QLogValueAxis* self, intptr_t slot) {
    if (auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self)))
        vqlogvalueaxis->qlogvalueaxis_type_callback = reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_Type_Callback>(slot);
}

// Derived class handler implementation
bool QLogValueAxis_Event(QLogValueAxis* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QLogValueAxis_SuperEvent(QLogValueAxis* self, QEvent* event) {
    return self->QLogValueAxis::event(event);
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnEvent(QLogValueAxis* self, intptr_t slot) {
    if (auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self))
        vqlogvalueaxis->qlogvalueaxis_event_callback = reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_Event_Callback>(slot);
}

// Derived class handler implementation
bool QLogValueAxis_EventFilter(QLogValueAxis* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QLogValueAxis_SuperEventFilter(QLogValueAxis* self, QObject* watched, QEvent* event) {
    return self->QLogValueAxis::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnEventFilter(QLogValueAxis* self, intptr_t slot) {
    if (auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self))
        vqlogvalueaxis->qlogvalueaxis_eventfilter_callback = reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QLogValueAxis_TimerEvent(QLogValueAxis* self, QTimerEvent* event) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis) {
        vqlogvalueaxis->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLogValueAxis::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLogValueAxis_SuperTimerEvent(QLogValueAxis* self, QTimerEvent* event) {
    if (auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self)) {
        vqlogvalueaxis->QLogValueAxis::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QLogValueAxis::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnTimerEvent(QLogValueAxis* self, intptr_t slot) {
    if (auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self))
        vqlogvalueaxis->qlogvalueaxis_timerevent_callback = reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QLogValueAxis_ChildEvent(QLogValueAxis* self, QChildEvent* event) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis) {
        vqlogvalueaxis->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLogValueAxis::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLogValueAxis_SuperChildEvent(QLogValueAxis* self, QChildEvent* event) {
    if (auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self)) {
        vqlogvalueaxis->QLogValueAxis::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QLogValueAxis::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnChildEvent(QLogValueAxis* self, intptr_t slot) {
    if (auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self))
        vqlogvalueaxis->qlogvalueaxis_childevent_callback = reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QLogValueAxis_CustomEvent(QLogValueAxis* self, QEvent* event) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis) {
        vqlogvalueaxis->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLogValueAxis::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLogValueAxis_SuperCustomEvent(QLogValueAxis* self, QEvent* event) {
    if (auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self)) {
        vqlogvalueaxis->QLogValueAxis::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QLogValueAxis::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnCustomEvent(QLogValueAxis* self, intptr_t slot) {
    if (auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self))
        vqlogvalueaxis->qlogvalueaxis_customevent_callback = reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QLogValueAxis_ConnectNotify(QLogValueAxis* self, const QMetaMethod* signal) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis) {
        vqlogvalueaxis->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLogValueAxis::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLogValueAxis_SuperConnectNotify(QLogValueAxis* self, const QMetaMethod* signal) {
    if (auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self)) {
        vqlogvalueaxis->QLogValueAxis::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLogValueAxis::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnConnectNotify(QLogValueAxis* self, intptr_t slot) {
    if (auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self))
        vqlogvalueaxis->qlogvalueaxis_connectnotify_callback = reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QLogValueAxis_DisconnectNotify(QLogValueAxis* self, const QMetaMethod* signal) {
    auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self);
    if (vqlogvalueaxis) {
        vqlogvalueaxis->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLogValueAxis::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLogValueAxis_SuperDisconnectNotify(QLogValueAxis* self, const QMetaMethod* signal) {
    if (auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self)) {
        vqlogvalueaxis->QLogValueAxis::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLogValueAxis::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLogValueAxis_OnDisconnectNotify(QLogValueAxis* self, intptr_t slot) {
    if (auto* vqlogvalueaxis = dynamic_cast<VirtualQLogValueAxis*>(self))
        vqlogvalueaxis->qlogvalueaxis_disconnectnotify_callback = reinterpret_cast<VirtualQLogValueAxis::QLogValueAxis_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QLogValueAxis_Sender(const QLogValueAxis* self) {
    if (auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self))) {
        return vqlogvalueaxis->VirtualQLogValueAxis::sender();
    } else
        qFatal("Error: Protected method QLogValueAxis::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QLogValueAxis_SenderSignalIndex(const QLogValueAxis* self) {
    if (auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self))) {
        return vqlogvalueaxis->VirtualQLogValueAxis::senderSignalIndex();
    } else
        qFatal("Error: Protected method QLogValueAxis::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QLogValueAxis_Receivers(const QLogValueAxis* self, const char* signal) {
    if (auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self))) {
        return vqlogvalueaxis->VirtualQLogValueAxis::receivers(signal);
    } else
        qFatal("Error: Protected method QLogValueAxis::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QLogValueAxis_IsSignalConnected(const QLogValueAxis* self, const QMetaMethod* signal) {
    if (auto* vqlogvalueaxis = const_cast<VirtualQLogValueAxis*>(dynamic_cast<const VirtualQLogValueAxis*>(self))) {
        return vqlogvalueaxis->VirtualQLogValueAxis::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QLogValueAxis::isSignalConnected called without a directly constructed type");
}

void QLogValueAxis_Delete(QLogValueAxis* self) {
    delete self;
}
