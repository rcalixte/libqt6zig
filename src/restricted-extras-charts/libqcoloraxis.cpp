#include <QAbstractAxis>
#include <QChildEvent>
#include <QColorAxis>
#include <QEvent>
#include <QLinearGradient>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QColorAxis_Tr(const char* s) {
    auto _ret = QColorAxis::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QColorAxis_Type(const QColorAxis* self) {
    return static_cast<int>(self->type());
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

void QColorAxis_SetGradient(QColorAxis* self, const QLinearGradient* gradient) {
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
    QColorAxis::connect(self,
                        static_cast<void (QColorAxis::*)(qreal)>(&QColorAxis::minChanged),
                        [self, slotFunc](qreal min) {
                            double sigval1 = static_cast<double>(min);
                            slotFunc(self, sigval1);
                        });
}

void QColorAxis_MaxChanged(QColorAxis* self, double max) {
    self->maxChanged(static_cast<qreal>(max));
}

void QColorAxis_Connect_MaxChanged(QColorAxis* self, intptr_t slot) {
    void (*slotFunc)(QColorAxis*, double) = reinterpret_cast<void (*)(QColorAxis*, double)>(slot);
    QColorAxis::connect(self,
                        static_cast<void (QColorAxis::*)(qreal)>(&QColorAxis::maxChanged),
                        [self, slotFunc](qreal max) {
                            double sigval1 = static_cast<double>(max);
                            slotFunc(self, sigval1);
                        });
}

void QColorAxis_RangeChanged(QColorAxis* self, double min, double max) {
    self->rangeChanged(static_cast<qreal>(min), static_cast<qreal>(max));
}

void QColorAxis_Connect_RangeChanged(QColorAxis* self, intptr_t slot) {
    void (*slotFunc)(QColorAxis*, double, double) = reinterpret_cast<void (*)(QColorAxis*, double, double)>(slot);
    QColorAxis::connect(self,
                        static_cast<void (QColorAxis::*)(qreal, qreal)>(&QColorAxis::rangeChanged),
                        [self, slotFunc](qreal min, qreal max) {
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
    QColorAxis::connect(self,
                        static_cast<void (QColorAxis::*)(int)>(&QColorAxis::tickCountChanged),
                        [self, slotFunc](int tickCount) {
                            int sigval1 = tickCount;
                            slotFunc(self, sigval1);
                        });
}

void QColorAxis_GradientChanged(QColorAxis* self, const QLinearGradient* gradient) {
    self->gradientChanged(*gradient);
}

void QColorAxis_Connect_GradientChanged(QColorAxis* self, intptr_t slot) {
    void (*slotFunc)(QColorAxis*, QLinearGradient*) = reinterpret_cast<void (*)(QColorAxis*, QLinearGradient*)>(slot);
    QColorAxis::connect(self,
                        static_cast<void (QColorAxis::*)(const QLinearGradient&)>(&QColorAxis::gradientChanged),
                        [self, slotFunc](const QLinearGradient& gradient) {
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
    QColorAxis::connect(self,
                        static_cast<void (QColorAxis::*)(const qreal)>(&QColorAxis::sizeChanged),
                        [self, slotFunc](const qreal size) {
                            const double sigval1 = static_cast<const double>(size);
                            slotFunc(self, sigval1);
                        });
}

void QColorAxis_AutoRangeChanged(QColorAxis* self, bool autoRange) {
    self->autoRangeChanged(autoRange);
}

void QColorAxis_Connect_AutoRangeChanged(QColorAxis* self, intptr_t slot) {
    void (*slotFunc)(QColorAxis*, bool) = reinterpret_cast<void (*)(QColorAxis*, bool)>(slot);
    QColorAxis::connect(self,
                        static_cast<void (QColorAxis::*)(bool)>(&QColorAxis::autoRangeChanged),
                        [self, slotFunc](bool autoRange) {
                            bool sigval1 = autoRange;
                            slotFunc(self, sigval1);
                        });
}

libqt_string QColorAxis_Tr2(const char* s, const char* c) {
    auto _ret = QColorAxis::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QColorAxis_Tr3(const char* s, const char* c, int n) {
    auto _ret = QColorAxis::tr(s, c, static_cast<int>(n));
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
QMetaObject* QColorAxis_SuperMetaObject(const QColorAxis* self) {
    return (QMetaObject*)self->QColorAxis::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnMetaObject(QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self)))
        vqcoloraxis->qcoloraxis_metaobject_callback = reinterpret_cast<VirtualQColorAxis::QColorAxis_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QColorAxis_SuperMetacast(QColorAxis* self, const char* param1) {
    return self->QColorAxis::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnMetacast(QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self))
        vqcoloraxis->qcoloraxis_metacast_callback = reinterpret_cast<VirtualQColorAxis::QColorAxis_Metacast_Callback>(slot);
}

// Base class handler implementation
int QColorAxis_SuperMetacall(QColorAxis* self, int param1, int param2, void** param3) {
    return self->QColorAxis::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnMetacall(QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self))
        vqcoloraxis->qcoloraxis_metacall_callback = reinterpret_cast<VirtualQColorAxis::QColorAxis_Metacall_Callback>(slot);
}

// Base class handler implementation
int QColorAxis_SuperType(const QColorAxis* self) {
    return static_cast<int>(self->QColorAxis::type());
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnType(QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self)))
        vqcoloraxis->qcoloraxis_type_callback = reinterpret_cast<VirtualQColorAxis::QColorAxis_Type_Callback>(slot);
}

// Derived class handler implementation
bool QColorAxis_Event(QColorAxis* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QColorAxis_SuperEvent(QColorAxis* self, QEvent* event) {
    return self->QColorAxis::event(event);
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnEvent(QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self))
        vqcoloraxis->qcoloraxis_event_callback = reinterpret_cast<VirtualQColorAxis::QColorAxis_Event_Callback>(slot);
}

// Derived class handler implementation
bool QColorAxis_EventFilter(QColorAxis* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QColorAxis_SuperEventFilter(QColorAxis* self, QObject* watched, QEvent* event) {
    return self->QColorAxis::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnEventFilter(QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self))
        vqcoloraxis->qcoloraxis_eventfilter_callback = reinterpret_cast<VirtualQColorAxis::QColorAxis_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QColorAxis_TimerEvent(QColorAxis* self, QTimerEvent* event) {
    auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self);
    if (vqcoloraxis) {
        vqcoloraxis->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorAxis::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorAxis_SuperTimerEvent(QColorAxis* self, QTimerEvent* event) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->QColorAxis::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorAxis::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnTimerEvent(QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self))
        vqcoloraxis->qcoloraxis_timerevent_callback = reinterpret_cast<VirtualQColorAxis::QColorAxis_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorAxis_ChildEvent(QColorAxis* self, QChildEvent* event) {
    auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self);
    if (vqcoloraxis) {
        vqcoloraxis->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorAxis::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorAxis_SuperChildEvent(QColorAxis* self, QChildEvent* event) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->QColorAxis::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorAxis::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnChildEvent(QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self))
        vqcoloraxis->qcoloraxis_childevent_callback = reinterpret_cast<VirtualQColorAxis::QColorAxis_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorAxis_CustomEvent(QColorAxis* self, QEvent* event) {
    auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self);
    if (vqcoloraxis) {
        vqcoloraxis->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColorAxis::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorAxis_SuperCustomEvent(QColorAxis* self, QEvent* event) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->QColorAxis::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QColorAxis::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnCustomEvent(QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self))
        vqcoloraxis->qcoloraxis_customevent_callback = reinterpret_cast<VirtualQColorAxis::QColorAxis_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QColorAxis_ConnectNotify(QColorAxis* self, const QMetaMethod* signal) {
    auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self);
    if (vqcoloraxis) {
        vqcoloraxis->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QColorAxis::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorAxis_SuperConnectNotify(QColorAxis* self, const QMetaMethod* signal) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->QColorAxis::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QColorAxis::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnConnectNotify(QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self))
        vqcoloraxis->qcoloraxis_connectnotify_callback = reinterpret_cast<VirtualQColorAxis::QColorAxis_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QColorAxis_DisconnectNotify(QColorAxis* self, const QMetaMethod* signal) {
    auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self);
    if (vqcoloraxis) {
        vqcoloraxis->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QColorAxis::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QColorAxis_SuperDisconnectNotify(QColorAxis* self, const QMetaMethod* signal) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self)) {
        vqcoloraxis->QColorAxis::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QColorAxis::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColorAxis_OnDisconnectNotify(QColorAxis* self, intptr_t slot) {
    if (auto* vqcoloraxis = dynamic_cast<VirtualQColorAxis*>(self))
        vqcoloraxis->qcoloraxis_disconnectnotify_callback = reinterpret_cast<VirtualQColorAxis::QColorAxis_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QColorAxis_Sender(const QColorAxis* self) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self))) {
        return vqcoloraxis->VirtualQColorAxis::sender();
    } else
        qFatal("Error: Protected method QColorAxis::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QColorAxis_SenderSignalIndex(const QColorAxis* self) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self))) {
        return vqcoloraxis->VirtualQColorAxis::senderSignalIndex();
    } else
        qFatal("Error: Protected method QColorAxis::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QColorAxis_Receivers(const QColorAxis* self, const char* signal) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self))) {
        return vqcoloraxis->VirtualQColorAxis::receivers(signal);
    } else
        qFatal("Error: Protected method QColorAxis::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QColorAxis_IsSignalConnected(const QColorAxis* self, const QMetaMethod* signal) {
    if (auto* vqcoloraxis = const_cast<VirtualQColorAxis*>(dynamic_cast<const VirtualQColorAxis*>(self))) {
        return vqcoloraxis->VirtualQColorAxis::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QColorAxis::isSignalConnected called without a directly constructed type");
}

void QColorAxis_Delete(QColorAxis* self) {
    delete self;
}
