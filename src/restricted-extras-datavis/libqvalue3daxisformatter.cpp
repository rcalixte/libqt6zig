#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QLocale>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QValue3DAxis>
#include <QValue3DAxisFormatter>
#include <qvalue3daxisformatter.h>
#include "libqvalue3daxisformatter.h"
#include "libqvalue3daxisformatter.hxx"

QValue3DAxisFormatter* QValue3DAxisFormatter_new() {
    return new VirtualQValue3DAxisFormatter();
}

QValue3DAxisFormatter* QValue3DAxisFormatter_new2(QObject* parent) {
    return new VirtualQValue3DAxisFormatter(parent);
}

QMetaObject* QValue3DAxisFormatter_MetaObject(const QValue3DAxisFormatter* self) {
    return (QMetaObject*)self->metaObject();
}

void* QValue3DAxisFormatter_Metacast(QValue3DAxisFormatter* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QValue3DAxisFormatter_Metacall(QValue3DAxisFormatter* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QValue3DAxisFormatter_Tr(const char* s) {
    auto _ret = QValue3DAxisFormatter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QValue3DAxisFormatter* QValue3DAxisFormatter_CreateNewInstance(const QValue3DAxisFormatter* self) {
    auto* vqvalue3daxisformatter = dynamic_cast<const VirtualQValue3DAxisFormatter*>(self);
    if (vqvalue3daxisformatter) {
        return vqvalue3daxisformatter->createNewInstance();
    }
    qFatal("Error: Protected method QValue3DAxisFormatter::createNewInstance called without a directly constructed type");
}

void QValue3DAxisFormatter_Recalculate(QValue3DAxisFormatter* self) {
    auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self);
    if (vqvalue3daxisformatter) {
        vqvalue3daxisformatter->recalculate();
    }
}

libqt_string QValue3DAxisFormatter_StringForValue(const QValue3DAxisFormatter* self, double value, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    auto* vqvalue3daxisformatter = dynamic_cast<const VirtualQValue3DAxisFormatter*>(self);
    if (vqvalue3daxisformatter) {
        auto _ret = vqvalue3daxisformatter->stringForValue(static_cast<qreal>(value), format_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
    qFatal("Error: Protected method QValue3DAxisFormatter::stringForValue called without a directly constructed type");
}

float QValue3DAxisFormatter_PositionAt(const QValue3DAxisFormatter* self, float value) {
    auto* vqvalue3daxisformatter = dynamic_cast<const VirtualQValue3DAxisFormatter*>(self);
    if (vqvalue3daxisformatter) {
        return vqvalue3daxisformatter->positionAt(static_cast<float>(value));
    }
    qFatal("Error: Protected method QValue3DAxisFormatter::positionAt called without a directly constructed type");
}

float QValue3DAxisFormatter_ValueAt(const QValue3DAxisFormatter* self, float position) {
    auto* vqvalue3daxisformatter = dynamic_cast<const VirtualQValue3DAxisFormatter*>(self);
    if (vqvalue3daxisformatter) {
        return vqvalue3daxisformatter->valueAt(static_cast<float>(position));
    }
    qFatal("Error: Protected method QValue3DAxisFormatter::valueAt called without a directly constructed type");
}

void QValue3DAxisFormatter_PopulateCopy(const QValue3DAxisFormatter* self, QValue3DAxisFormatter* copy) {
    auto* vqvalue3daxisformatter = dynamic_cast<const VirtualQValue3DAxisFormatter*>(self);
    if (vqvalue3daxisformatter) {
        vqvalue3daxisformatter->populateCopy(*copy);
    }
}

libqt_string QValue3DAxisFormatter_Tr2(const char* s, const char* c) {
    auto _ret = QValue3DAxisFormatter::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QValue3DAxisFormatter_Tr3(const char* s, const char* c, int n) {
    auto _ret = QValue3DAxisFormatter::tr(s, c, static_cast<int>(n));
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
QMetaObject* QValue3DAxisFormatter_SuperMetaObject(const QValue3DAxisFormatter* self) {
    return (QMetaObject*)self->QValue3DAxisFormatter::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxisFormatter_OnMetaObject(QValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self)))
        vqvalue3daxisformatter->qvalue3daxisformatter_metaobject_callback = reinterpret_cast<VirtualQValue3DAxisFormatter::QValue3DAxisFormatter_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QValue3DAxisFormatter_SuperMetacast(QValue3DAxisFormatter* self, const char* param1) {
    return self->QValue3DAxisFormatter::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxisFormatter_OnMetacast(QValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self))
        vqvalue3daxisformatter->qvalue3daxisformatter_metacast_callback = reinterpret_cast<VirtualQValue3DAxisFormatter::QValue3DAxisFormatter_Metacast_Callback>(slot);
}

// Base class handler implementation
int QValue3DAxisFormatter_SuperMetacall(QValue3DAxisFormatter* self, int param1, int param2, void** param3) {
    return self->QValue3DAxisFormatter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxisFormatter_OnMetacall(QValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self))
        vqvalue3daxisformatter->qvalue3daxisformatter_metacall_callback = reinterpret_cast<VirtualQValue3DAxisFormatter::QValue3DAxisFormatter_Metacall_Callback>(slot);
}

// Base class handler implementation
QValue3DAxisFormatter* QValue3DAxisFormatter_SuperCreateNewInstance(const QValue3DAxisFormatter* self) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self))) {
        return vqvalue3daxisformatter->QValue3DAxisFormatter::createNewInstance();
    } else
        qFatal("Error: Protected virtual method QValue3DAxisFormatter::createNewInstance called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxisFormatter_OnCreateNewInstance(QValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self)))
        vqvalue3daxisformatter->qvalue3daxisformatter_createnewinstance_callback = reinterpret_cast<VirtualQValue3DAxisFormatter::QValue3DAxisFormatter_CreateNewInstance_Callback>(slot);
}

// Base class handler implementation
void QValue3DAxisFormatter_SuperRecalculate(QValue3DAxisFormatter* self) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self)) {
        vqvalue3daxisformatter->QValue3DAxisFormatter::recalculate();
    } else
        qFatal("Error: Protected virtual method QValue3DAxisFormatter::recalculate called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxisFormatter_OnRecalculate(QValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self))
        vqvalue3daxisformatter->qvalue3daxisformatter_recalculate_callback = reinterpret_cast<VirtualQValue3DAxisFormatter::QValue3DAxisFormatter_Recalculate_Callback>(slot);
}

// Base class handler implementation
libqt_string QValue3DAxisFormatter_SuperStringForValue(const QValue3DAxisFormatter* self, double value, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self))) {
        auto _ret = vqvalue3daxisformatter->QValue3DAxisFormatter::stringForValue(static_cast<qreal>(value), format_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected virtual method QValue3DAxisFormatter::stringForValue called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxisFormatter_OnStringForValue(QValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self)))
        vqvalue3daxisformatter->qvalue3daxisformatter_stringforvalue_callback = reinterpret_cast<VirtualQValue3DAxisFormatter::QValue3DAxisFormatter_StringForValue_Callback>(slot);
}

// Base class handler implementation
float QValue3DAxisFormatter_SuperPositionAt(const QValue3DAxisFormatter* self, float value) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self))) {
        return vqvalue3daxisformatter->QValue3DAxisFormatter::positionAt(static_cast<float>(value));
    } else
        qFatal("Error: Protected virtual method QValue3DAxisFormatter::positionAt called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxisFormatter_OnPositionAt(QValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self)))
        vqvalue3daxisformatter->qvalue3daxisformatter_positionat_callback = reinterpret_cast<VirtualQValue3DAxisFormatter::QValue3DAxisFormatter_PositionAt_Callback>(slot);
}

// Base class handler implementation
float QValue3DAxisFormatter_SuperValueAt(const QValue3DAxisFormatter* self, float position) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self))) {
        return vqvalue3daxisformatter->QValue3DAxisFormatter::valueAt(static_cast<float>(position));
    } else
        qFatal("Error: Protected virtual method QValue3DAxisFormatter::valueAt called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxisFormatter_OnValueAt(QValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self)))
        vqvalue3daxisformatter->qvalue3daxisformatter_valueat_callback = reinterpret_cast<VirtualQValue3DAxisFormatter::QValue3DAxisFormatter_ValueAt_Callback>(slot);
}

// Base class handler implementation
void QValue3DAxisFormatter_SuperPopulateCopy(const QValue3DAxisFormatter* self, QValue3DAxisFormatter* copy) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self))) {
        vqvalue3daxisformatter->QValue3DAxisFormatter::populateCopy(*copy);
    } else
        qFatal("Error: Protected virtual method QValue3DAxisFormatter::populateCopy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxisFormatter_OnPopulateCopy(QValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self)))
        vqvalue3daxisformatter->qvalue3daxisformatter_populatecopy_callback = reinterpret_cast<VirtualQValue3DAxisFormatter::QValue3DAxisFormatter_PopulateCopy_Callback>(slot);
}

// Derived class handler implementation
bool QValue3DAxisFormatter_Event(QValue3DAxisFormatter* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QValue3DAxisFormatter_SuperEvent(QValue3DAxisFormatter* self, QEvent* event) {
    return self->QValue3DAxisFormatter::event(event);
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxisFormatter_OnEvent(QValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self))
        vqvalue3daxisformatter->qvalue3daxisformatter_event_callback = reinterpret_cast<VirtualQValue3DAxisFormatter::QValue3DAxisFormatter_Event_Callback>(slot);
}

// Derived class handler implementation
bool QValue3DAxisFormatter_EventFilter(QValue3DAxisFormatter* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QValue3DAxisFormatter_SuperEventFilter(QValue3DAxisFormatter* self, QObject* watched, QEvent* event) {
    return self->QValue3DAxisFormatter::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxisFormatter_OnEventFilter(QValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self))
        vqvalue3daxisformatter->qvalue3daxisformatter_eventfilter_callback = reinterpret_cast<VirtualQValue3DAxisFormatter::QValue3DAxisFormatter_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QValue3DAxisFormatter_TimerEvent(QValue3DAxisFormatter* self, QTimerEvent* event) {
    auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self);
    if (vqvalue3daxisformatter) {
        vqvalue3daxisformatter->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QValue3DAxisFormatter::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QValue3DAxisFormatter_SuperTimerEvent(QValue3DAxisFormatter* self, QTimerEvent* event) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self)) {
        vqvalue3daxisformatter->QValue3DAxisFormatter::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QValue3DAxisFormatter::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxisFormatter_OnTimerEvent(QValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self))
        vqvalue3daxisformatter->qvalue3daxisformatter_timerevent_callback = reinterpret_cast<VirtualQValue3DAxisFormatter::QValue3DAxisFormatter_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QValue3DAxisFormatter_ChildEvent(QValue3DAxisFormatter* self, QChildEvent* event) {
    auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self);
    if (vqvalue3daxisformatter) {
        vqvalue3daxisformatter->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QValue3DAxisFormatter::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QValue3DAxisFormatter_SuperChildEvent(QValue3DAxisFormatter* self, QChildEvent* event) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self)) {
        vqvalue3daxisformatter->QValue3DAxisFormatter::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QValue3DAxisFormatter::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxisFormatter_OnChildEvent(QValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self))
        vqvalue3daxisformatter->qvalue3daxisformatter_childevent_callback = reinterpret_cast<VirtualQValue3DAxisFormatter::QValue3DAxisFormatter_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QValue3DAxisFormatter_CustomEvent(QValue3DAxisFormatter* self, QEvent* event) {
    auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self);
    if (vqvalue3daxisformatter) {
        vqvalue3daxisformatter->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QValue3DAxisFormatter::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QValue3DAxisFormatter_SuperCustomEvent(QValue3DAxisFormatter* self, QEvent* event) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self)) {
        vqvalue3daxisformatter->QValue3DAxisFormatter::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QValue3DAxisFormatter::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxisFormatter_OnCustomEvent(QValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self))
        vqvalue3daxisformatter->qvalue3daxisformatter_customevent_callback = reinterpret_cast<VirtualQValue3DAxisFormatter::QValue3DAxisFormatter_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QValue3DAxisFormatter_ConnectNotify(QValue3DAxisFormatter* self, const QMetaMethod* signal) {
    auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self);
    if (vqvalue3daxisformatter) {
        vqvalue3daxisformatter->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QValue3DAxisFormatter::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QValue3DAxisFormatter_SuperConnectNotify(QValue3DAxisFormatter* self, const QMetaMethod* signal) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self)) {
        vqvalue3daxisformatter->QValue3DAxisFormatter::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QValue3DAxisFormatter::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxisFormatter_OnConnectNotify(QValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self))
        vqvalue3daxisformatter->qvalue3daxisformatter_connectnotify_callback = reinterpret_cast<VirtualQValue3DAxisFormatter::QValue3DAxisFormatter_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QValue3DAxisFormatter_DisconnectNotify(QValue3DAxisFormatter* self, const QMetaMethod* signal) {
    auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self);
    if (vqvalue3daxisformatter) {
        vqvalue3daxisformatter->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QValue3DAxisFormatter::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QValue3DAxisFormatter_SuperDisconnectNotify(QValue3DAxisFormatter* self, const QMetaMethod* signal) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self)) {
        vqvalue3daxisformatter->QValue3DAxisFormatter::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QValue3DAxisFormatter::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QValue3DAxisFormatter_OnDisconnectNotify(QValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self))
        vqvalue3daxisformatter->qvalue3daxisformatter_disconnectnotify_callback = reinterpret_cast<VirtualQValue3DAxisFormatter::QValue3DAxisFormatter_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QValue3DAxisFormatter_SetAllowNegatives(QValue3DAxisFormatter* self, bool allow) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self)) {
        vqvalue3daxisformatter->VirtualQValue3DAxisFormatter::setAllowNegatives(allow);
    } else
        qFatal("Error: Protected method QValue3DAxisFormatter::setAllowNegatives called without a directly constructed type");
}

// Derived class protected handler implementation
bool QValue3DAxisFormatter_AllowNegatives(const QValue3DAxisFormatter* self) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self))) {
        return vqvalue3daxisformatter->VirtualQValue3DAxisFormatter::allowNegatives();
    } else
        qFatal("Error: Protected method QValue3DAxisFormatter::allowNegatives called without a directly constructed type");
}

// Derived class protected handler implementation
void QValue3DAxisFormatter_SetAllowZero(QValue3DAxisFormatter* self, bool allow) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self)) {
        vqvalue3daxisformatter->VirtualQValue3DAxisFormatter::setAllowZero(allow);
    } else
        qFatal("Error: Protected method QValue3DAxisFormatter::setAllowZero called without a directly constructed type");
}

// Derived class protected handler implementation
bool QValue3DAxisFormatter_AllowZero(const QValue3DAxisFormatter* self) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self))) {
        return vqvalue3daxisformatter->VirtualQValue3DAxisFormatter::allowZero();
    } else
        qFatal("Error: Protected method QValue3DAxisFormatter::allowZero called without a directly constructed type");
}

// Derived class protected handler implementation
void QValue3DAxisFormatter_MarkDirty(QValue3DAxisFormatter* self) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self)) {
        vqvalue3daxisformatter->VirtualQValue3DAxisFormatter::markDirty();
    } else
        qFatal("Error: Protected method QValue3DAxisFormatter::markDirty called without a directly constructed type");
}

// Derived class protected handler implementation
QValue3DAxis* QValue3DAxisFormatter_Axis(const QValue3DAxisFormatter* self) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self))) {
        return vqvalue3daxisformatter->VirtualQValue3DAxisFormatter::axis();
    } else
        qFatal("Error: Protected method QValue3DAxisFormatter::axis called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of float */ QValue3DAxisFormatter_GridPositions(const QValue3DAxisFormatter* self) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self))) {
        QList<float>& _ret = vqvalue3daxisformatter->VirtualQValue3DAxisFormatter::gridPositions();
        // Convert QList<> from C++ memory to manually-managed C memory
        float* _arr = static_cast<float*>(malloc(sizeof(float) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method QValue3DAxisFormatter::gridPositions called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of float */ QValue3DAxisFormatter_SubGridPositions(const QValue3DAxisFormatter* self) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self))) {
        QList<float>& _ret = vqvalue3daxisformatter->VirtualQValue3DAxisFormatter::subGridPositions();
        // Convert QList<> from C++ memory to manually-managed C memory
        float* _arr = static_cast<float*>(malloc(sizeof(float) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method QValue3DAxisFormatter::subGridPositions called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of float */ QValue3DAxisFormatter_LabelPositions(const QValue3DAxisFormatter* self) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self))) {
        QList<float>& _ret = vqvalue3daxisformatter->VirtualQValue3DAxisFormatter::labelPositions();
        // Convert QList<> from C++ memory to manually-managed C memory
        float* _arr = static_cast<float*>(malloc(sizeof(float) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method QValue3DAxisFormatter::labelPositions called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of libqt_string */ QValue3DAxisFormatter_LabelStrings(const QValue3DAxisFormatter* self) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self))) {
        QList<QString>& _ret = vqvalue3daxisformatter->VirtualQValue3DAxisFormatter::labelStrings();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            auto _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method QValue3DAxisFormatter::labelStrings called without a directly constructed type");
}

// Derived class protected handler implementation
void QValue3DAxisFormatter_SetLocale(QValue3DAxisFormatter* self, const QLocale* locale) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self)) {
        vqvalue3daxisformatter->VirtualQValue3DAxisFormatter::setLocale(*locale);
    } else
        qFatal("Error: Protected method QValue3DAxisFormatter::setLocale called without a directly constructed type");
}

// Derived class handler implementation
QLocale* QValue3DAxisFormatter_Locale(const QValue3DAxisFormatter* self) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self)))
        return new QLocale(vqvalue3daxisformatter->locale());
    qFatal("Error: Protected method QValue3DAxisFormatter::locale called without a directly constructed type");
}

// Derived class protected handler implementation
void QValue3DAxisFormatter_MarkDirty1(QValue3DAxisFormatter* self, bool labelsChange) {
    if (auto* vqvalue3daxisformatter = dynamic_cast<VirtualQValue3DAxisFormatter*>(self)) {
        vqvalue3daxisformatter->VirtualQValue3DAxisFormatter::markDirty(labelsChange);
    } else
        qFatal("Error: Protected method QValue3DAxisFormatter::markDirty1 called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QValue3DAxisFormatter_Sender(const QValue3DAxisFormatter* self) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self))) {
        return vqvalue3daxisformatter->VirtualQValue3DAxisFormatter::sender();
    } else
        qFatal("Error: Protected method QValue3DAxisFormatter::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QValue3DAxisFormatter_SenderSignalIndex(const QValue3DAxisFormatter* self) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self))) {
        return vqvalue3daxisformatter->VirtualQValue3DAxisFormatter::senderSignalIndex();
    } else
        qFatal("Error: Protected method QValue3DAxisFormatter::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QValue3DAxisFormatter_Receivers(const QValue3DAxisFormatter* self, const char* signal) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self))) {
        return vqvalue3daxisformatter->VirtualQValue3DAxisFormatter::receivers(signal);
    } else
        qFatal("Error: Protected method QValue3DAxisFormatter::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QValue3DAxisFormatter_IsSignalConnected(const QValue3DAxisFormatter* self, const QMetaMethod* signal) {
    if (auto* vqvalue3daxisformatter = const_cast<VirtualQValue3DAxisFormatter*>(dynamic_cast<const VirtualQValue3DAxisFormatter*>(self))) {
        return vqvalue3daxisformatter->VirtualQValue3DAxisFormatter::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QValue3DAxisFormatter::isSignalConnected called without a directly constructed type");
}

void QValue3DAxisFormatter_Delete(QValue3DAxisFormatter* self) {
    delete self;
}
