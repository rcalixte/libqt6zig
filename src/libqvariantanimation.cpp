#include <QAbstractAnimation>
#include <QChildEvent>
#include <QEasingCurve>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPair>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <QVariantAnimation>
#include <qvariantanimation.h>
#include "libqvariantanimation.h"
#include "libqvariantanimation.hxx"

QVariantAnimation* QVariantAnimation_new() {
    return new VirtualQVariantAnimation();
}

QVariantAnimation* QVariantAnimation_new2(QObject* parent) {
    return new VirtualQVariantAnimation(parent);
}

QMetaObject* QVariantAnimation_MetaObject(const QVariantAnimation* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVariantAnimation_Metacast(QVariantAnimation* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVariantAnimation_Metacall(QVariantAnimation* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QVariantAnimation_Tr(const char* s) {
    auto _ret = QVariantAnimation::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVariant* QVariantAnimation_StartValue(const QVariantAnimation* self) {
    return new QVariant(self->startValue());
}

void QVariantAnimation_SetStartValue(QVariantAnimation* self, const QVariant* value) {
    self->setStartValue(*value);
}

QVariant* QVariantAnimation_EndValue(const QVariantAnimation* self) {
    return new QVariant(self->endValue());
}

void QVariantAnimation_SetEndValue(QVariantAnimation* self, const QVariant* value) {
    self->setEndValue(*value);
}

QVariant* QVariantAnimation_KeyValueAt(const QVariantAnimation* self, double step) {
    return new QVariant(self->keyValueAt(static_cast<qreal>(step)));
}

void QVariantAnimation_SetKeyValueAt(QVariantAnimation* self, double step, const QVariant* value) {
    self->setKeyValueAt(static_cast<qreal>(step), *value);
}

libqt_list /* of pair_double_qvariant tuple of double and QVariant* */ QVariantAnimation_KeyValues(const QVariantAnimation* self) {
    QList<QPair<double, QVariant>> _ret = self->keyValues();
    // Convert QList<> from C++ memory to manually-managed C memory
    pair_double_qvariant /* tuple of double and QVariant* */* _arr = static_cast<pair_double_qvariant /* tuple of double and QVariant* */*>(malloc(sizeof(pair_double_qvariant /* tuple of double and QVariant* */) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<double, QVariant> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        pair_double_qvariant /* tuple of double and QVariant* */ _lv_out;
        _lv_out.first = _lv_ret.first;
        _lv_out.second = new QVariant(_lv_ret.second);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QVariantAnimation_SetKeyValues(QVariantAnimation* self, const libqt_list /* of pair_double_qvariant tuple of double and QVariant* */ values) {
    QList<QPair<double, QVariant>> values_QList;
    values_QList.reserve(values.len);
    pair_double_qvariant /* tuple of double and QVariant* */* values_arr = static_cast<pair_double_qvariant /* tuple of double and QVariant* */*>(values.data);
    for (size_t i = 0; i < values.len; ++i) {
        QPair<double, QVariant> values_arr_i_QPair;
        values_arr_i_QPair.first = values_arr[i].first;
        values_arr_i_QPair.second = *(values_arr[i].second);
        values_QList.push_back(values_arr_i_QPair);
    }
    self->setKeyValues(values_QList);
}

QVariant* QVariantAnimation_CurrentValue(const QVariantAnimation* self) {
    return new QVariant(self->currentValue());
}

int QVariantAnimation_Duration(const QVariantAnimation* self) {
    return self->duration();
}

void QVariantAnimation_SetDuration(QVariantAnimation* self, int msecs) {
    self->setDuration(static_cast<int>(msecs));
}

QEasingCurve* QVariantAnimation_EasingCurve(const QVariantAnimation* self) {
    return new QEasingCurve(self->easingCurve());
}

void QVariantAnimation_SetEasingCurve(QVariantAnimation* self, const QEasingCurve* easing) {
    self->setEasingCurve(*easing);
}

void QVariantAnimation_ValueChanged(QVariantAnimation* self, const QVariant* value) {
    self->valueChanged(*value);
}

void QVariantAnimation_Connect_ValueChanged(QVariantAnimation* self, intptr_t slot) {
    void (*slotFunc)(QVariantAnimation*, QVariant*) = reinterpret_cast<void (*)(QVariantAnimation*, QVariant*)>(slot);
    QVariantAnimation::connect(self,
                               static_cast<void (QVariantAnimation::*)(const QVariant&)>(&QVariantAnimation::valueChanged),
                               [self, slotFunc](const QVariant& value) {
                                   const QVariant& value_ret = value;
                                   // Cast returned reference into pointer
                                   QVariant* sigval1 = const_cast<QVariant*>(&value_ret);
                                   slotFunc(self, sigval1);
                               });
}

bool QVariantAnimation_Event(QVariantAnimation* self, QEvent* event) {
    auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
    if (vqvariantanimation) {
        return vqvariantanimation->event(event);
    }
    qFatal("Error: Protected method QVariantAnimation::event called without a directly constructed type");
}

void QVariantAnimation_UpdateCurrentTime(QVariantAnimation* self, int param1) {
    auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
    if (vqvariantanimation) {
        vqvariantanimation->updateCurrentTime(static_cast<int>(param1));
    }
}

void QVariantAnimation_UpdateState(QVariantAnimation* self, int newState, int oldState) {
    auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
    if (vqvariantanimation) {
        vqvariantanimation->updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    }
}

void QVariantAnimation_UpdateCurrentValue(QVariantAnimation* self, const QVariant* value) {
    auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
    if (vqvariantanimation) {
        vqvariantanimation->updateCurrentValue(*value);
    }
}

QVariant* QVariantAnimation_Interpolated(const QVariantAnimation* self, const QVariant* from, const QVariant* to, double progress) {
    auto* vqvariantanimation = dynamic_cast<const VirtualQVariantAnimation*>(self);
    if (vqvariantanimation) {
        return new QVariant(vqvariantanimation->interpolated(*from, *to, static_cast<qreal>(progress)));
    }
    qFatal("Error: Protected method QVariantAnimation::interpolated called without a directly constructed type");
}

libqt_string QVariantAnimation_Tr2(const char* s, const char* c) {
    auto _ret = QVariantAnimation::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVariantAnimation_Tr3(const char* s, const char* c, int n) {
    auto _ret = QVariantAnimation::tr(s, c, static_cast<int>(n));
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
QMetaObject* QVariantAnimation_SuperMetaObject(const QVariantAnimation* self) {
    return (QMetaObject*)self->QVariantAnimation::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnMetaObject(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self)))
        vqvariantanimation->qvariantanimation_metaobject_callback = reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QVariantAnimation_SuperMetacast(QVariantAnimation* self, const char* param1) {
    return self->QVariantAnimation::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnMetacast(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self))
        vqvariantanimation->qvariantanimation_metacast_callback = reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_Metacast_Callback>(slot);
}

// Base class handler implementation
int QVariantAnimation_SuperMetacall(QVariantAnimation* self, int param1, int param2, void** param3) {
    return self->QVariantAnimation::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnMetacall(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self))
        vqvariantanimation->qvariantanimation_metacall_callback = reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_Metacall_Callback>(slot);
}

// Base class handler implementation
int QVariantAnimation_SuperDuration(const QVariantAnimation* self) {
    return self->QVariantAnimation::duration();
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnDuration(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self)))
        vqvariantanimation->qvariantanimation_duration_callback = reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_Duration_Callback>(slot);
}

// Base class handler implementation
bool QVariantAnimation_SuperEvent(QVariantAnimation* self, QEvent* event) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        return vqvariantanimation->QVariantAnimation::event(event);
    } else
        qFatal("Error: Protected virtual method QVariantAnimation::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnEvent(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self))
        vqvariantanimation->qvariantanimation_event_callback = reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_Event_Callback>(slot);
}

// Base class handler implementation
void QVariantAnimation_SuperUpdateCurrentTime(QVariantAnimation* self, int param1) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->QVariantAnimation::updateCurrentTime(static_cast<int>(param1));
    } else
        qFatal("Error: Protected virtual method QVariantAnimation::updateCurrentTime called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnUpdateCurrentTime(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self))
        vqvariantanimation->qvariantanimation_updatecurrenttime_callback = reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_UpdateCurrentTime_Callback>(slot);
}

// Base class handler implementation
void QVariantAnimation_SuperUpdateState(QVariantAnimation* self, int newState, int oldState) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->QVariantAnimation::updateState(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
    } else
        qFatal("Error: Protected virtual method QVariantAnimation::updateState called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnUpdateState(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self))
        vqvariantanimation->qvariantanimation_updatestate_callback = reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_UpdateState_Callback>(slot);
}

// Base class handler implementation
void QVariantAnimation_SuperUpdateCurrentValue(QVariantAnimation* self, const QVariant* value) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->QVariantAnimation::updateCurrentValue(*value);
    } else
        qFatal("Error: Protected virtual method QVariantAnimation::updateCurrentValue called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnUpdateCurrentValue(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self))
        vqvariantanimation->qvariantanimation_updatecurrentvalue_callback = reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_UpdateCurrentValue_Callback>(slot);
}

// Base class handler implementation
QVariant* QVariantAnimation_SuperInterpolated(const QVariantAnimation* self, const QVariant* from, const QVariant* to, double progress) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self)))
        return new QVariant(vqvariantanimation->interpolated(*from, *to, static_cast<qreal>(progress)));
    qFatal("Error: Protected virtual method QVariantAnimation::interpolated called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnInterpolated(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self)))
        vqvariantanimation->qvariantanimation_interpolated_callback = reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_Interpolated_Callback>(slot);
}

// Derived class handler implementation
void QVariantAnimation_UpdateDirection(QVariantAnimation* self, int direction) {
    auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
    if (vqvariantanimation) {
        vqvariantanimation->updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else {
        qFatal("Error: Protected virtual method QVariantAnimation::updateDirection called without a directly constructed type");
    }
}

// Base class handler implementation
void QVariantAnimation_SuperUpdateDirection(QVariantAnimation* self, int direction) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->QVariantAnimation::updateDirection(static_cast<QAbstractAnimation::Direction>(direction));
    } else
        qFatal("Error: Protected virtual method QVariantAnimation::updateDirection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnUpdateDirection(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self))
        vqvariantanimation->qvariantanimation_updatedirection_callback = reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_UpdateDirection_Callback>(slot);
}

// Derived class handler implementation
bool QVariantAnimation_EventFilter(QVariantAnimation* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QVariantAnimation_SuperEventFilter(QVariantAnimation* self, QObject* watched, QEvent* event) {
    return self->QVariantAnimation::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnEventFilter(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self))
        vqvariantanimation->qvariantanimation_eventfilter_callback = reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QVariantAnimation_TimerEvent(QVariantAnimation* self, QTimerEvent* event) {
    auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
    if (vqvariantanimation) {
        vqvariantanimation->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVariantAnimation::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVariantAnimation_SuperTimerEvent(QVariantAnimation* self, QTimerEvent* event) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->QVariantAnimation::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QVariantAnimation::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnTimerEvent(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self))
        vqvariantanimation->qvariantanimation_timerevent_callback = reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QVariantAnimation_ChildEvent(QVariantAnimation* self, QChildEvent* event) {
    auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
    if (vqvariantanimation) {
        vqvariantanimation->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVariantAnimation::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVariantAnimation_SuperChildEvent(QVariantAnimation* self, QChildEvent* event) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->QVariantAnimation::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QVariantAnimation::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnChildEvent(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self))
        vqvariantanimation->qvariantanimation_childevent_callback = reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QVariantAnimation_CustomEvent(QVariantAnimation* self, QEvent* event) {
    auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
    if (vqvariantanimation) {
        vqvariantanimation->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVariantAnimation::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVariantAnimation_SuperCustomEvent(QVariantAnimation* self, QEvent* event) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->QVariantAnimation::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QVariantAnimation::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnCustomEvent(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self))
        vqvariantanimation->qvariantanimation_customevent_callback = reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QVariantAnimation_ConnectNotify(QVariantAnimation* self, const QMetaMethod* signal) {
    auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
    if (vqvariantanimation) {
        vqvariantanimation->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVariantAnimation::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVariantAnimation_SuperConnectNotify(QVariantAnimation* self, const QMetaMethod* signal) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->QVariantAnimation::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVariantAnimation::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnConnectNotify(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self))
        vqvariantanimation->qvariantanimation_connectnotify_callback = reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QVariantAnimation_DisconnectNotify(QVariantAnimation* self, const QMetaMethod* signal) {
    auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self);
    if (vqvariantanimation) {
        vqvariantanimation->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVariantAnimation::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVariantAnimation_SuperDisconnectNotify(QVariantAnimation* self, const QMetaMethod* signal) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self)) {
        vqvariantanimation->QVariantAnimation::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVariantAnimation::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVariantAnimation_OnDisconnectNotify(QVariantAnimation* self, intptr_t slot) {
    if (auto* vqvariantanimation = dynamic_cast<VirtualQVariantAnimation*>(self))
        vqvariantanimation->qvariantanimation_disconnectnotify_callback = reinterpret_cast<VirtualQVariantAnimation::QVariantAnimation_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QVariantAnimation_Sender(const QVariantAnimation* self) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        return vqvariantanimation->VirtualQVariantAnimation::sender();
    } else
        qFatal("Error: Protected method QVariantAnimation::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QVariantAnimation_SenderSignalIndex(const QVariantAnimation* self) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        return vqvariantanimation->VirtualQVariantAnimation::senderSignalIndex();
    } else
        qFatal("Error: Protected method QVariantAnimation::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QVariantAnimation_Receivers(const QVariantAnimation* self, const char* signal) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        return vqvariantanimation->VirtualQVariantAnimation::receivers(signal);
    } else
        qFatal("Error: Protected method QVariantAnimation::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QVariantAnimation_IsSignalConnected(const QVariantAnimation* self, const QMetaMethod* signal) {
    if (auto* vqvariantanimation = const_cast<VirtualQVariantAnimation*>(dynamic_cast<const VirtualQVariantAnimation*>(self))) {
        return vqvariantanimation->VirtualQVariantAnimation::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QVariantAnimation::isSignalConnected called without a directly constructed type");
}

void QVariantAnimation_Delete(QVariantAnimation* self) {
    delete self;
}
