#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QLocale>
#include <QLogValue3DAxisFormatter>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QValue3DAxis>
#include <QValue3DAxisFormatter>
#include <qlogvalue3daxisformatter.h>
#include "libqlogvalue3daxisformatter.h"
#include "libqlogvalue3daxisformatter.hxx"

QLogValue3DAxisFormatter* QLogValue3DAxisFormatter_new() {
    return new VirtualQLogValue3DAxisFormatter();
}

QLogValue3DAxisFormatter* QLogValue3DAxisFormatter_new2(QObject* parent) {
    return new VirtualQLogValue3DAxisFormatter(parent);
}

QMetaObject* QLogValue3DAxisFormatter_MetaObject(const QLogValue3DAxisFormatter* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLogValue3DAxisFormatter_Metacast(QLogValue3DAxisFormatter* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLogValue3DAxisFormatter_Metacall(QLogValue3DAxisFormatter* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QLogValue3DAxisFormatter_Tr(const char* s) {
    auto _ret = QLogValue3DAxisFormatter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QLogValue3DAxisFormatter_SetBase(QLogValue3DAxisFormatter* self, double base) {
    self->setBase(static_cast<qreal>(base));
}

double QLogValue3DAxisFormatter_Base(const QLogValue3DAxisFormatter* self) {
    return static_cast<double>(self->base());
}

void QLogValue3DAxisFormatter_SetAutoSubGrid(QLogValue3DAxisFormatter* self, bool enabled) {
    self->setAutoSubGrid(enabled);
}

bool QLogValue3DAxisFormatter_AutoSubGrid(const QLogValue3DAxisFormatter* self) {
    return self->autoSubGrid();
}

void QLogValue3DAxisFormatter_SetShowEdgeLabels(QLogValue3DAxisFormatter* self, bool enabled) {
    self->setShowEdgeLabels(enabled);
}

bool QLogValue3DAxisFormatter_ShowEdgeLabels(const QLogValue3DAxisFormatter* self) {
    return self->showEdgeLabels();
}

void QLogValue3DAxisFormatter_BaseChanged(QLogValue3DAxisFormatter* self, double base) {
    self->baseChanged(static_cast<qreal>(base));
}

void QLogValue3DAxisFormatter_Connect_BaseChanged(QLogValue3DAxisFormatter* self, intptr_t slot) {
    void (*slotFunc)(QLogValue3DAxisFormatter*, double) = reinterpret_cast<void (*)(QLogValue3DAxisFormatter*, double)>(slot);
    QLogValue3DAxisFormatter::connect(self,
                                      static_cast<void (QLogValue3DAxisFormatter::*)(qreal)>(&QLogValue3DAxisFormatter::baseChanged),
                                      [self, slotFunc](qreal base) {
                                          double sigval1 = static_cast<double>(base);
                                          slotFunc(self, sigval1);
                                      });
}

void QLogValue3DAxisFormatter_AutoSubGridChanged(QLogValue3DAxisFormatter* self, bool enabled) {
    self->autoSubGridChanged(enabled);
}

void QLogValue3DAxisFormatter_Connect_AutoSubGridChanged(QLogValue3DAxisFormatter* self, intptr_t slot) {
    void (*slotFunc)(QLogValue3DAxisFormatter*, bool) = reinterpret_cast<void (*)(QLogValue3DAxisFormatter*, bool)>(slot);
    QLogValue3DAxisFormatter::connect(self,
                                      static_cast<void (QLogValue3DAxisFormatter::*)(bool)>(&QLogValue3DAxisFormatter::autoSubGridChanged),
                                      [self, slotFunc](bool enabled) {
                                          bool sigval1 = enabled;
                                          slotFunc(self, sigval1);
                                      });
}

void QLogValue3DAxisFormatter_ShowEdgeLabelsChanged(QLogValue3DAxisFormatter* self, bool enabled) {
    self->showEdgeLabelsChanged(enabled);
}

void QLogValue3DAxisFormatter_Connect_ShowEdgeLabelsChanged(QLogValue3DAxisFormatter* self, intptr_t slot) {
    void (*slotFunc)(QLogValue3DAxisFormatter*, bool) = reinterpret_cast<void (*)(QLogValue3DAxisFormatter*, bool)>(slot);
    QLogValue3DAxisFormatter::connect(self,
                                      static_cast<void (QLogValue3DAxisFormatter::*)(bool)>(&QLogValue3DAxisFormatter::showEdgeLabelsChanged),
                                      [self, slotFunc](bool enabled) {
                                          bool sigval1 = enabled;
                                          slotFunc(self, sigval1);
                                      });
}

QValue3DAxisFormatter* QLogValue3DAxisFormatter_CreateNewInstance(const QLogValue3DAxisFormatter* self) {
    auto* vqlogvalue3daxisformatter = dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self);
    if (vqlogvalue3daxisformatter) {
        return vqlogvalue3daxisformatter->createNewInstance();
    }
    qFatal("Error: Protected method QLogValue3DAxisFormatter::createNewInstance called without a directly constructed type");
}

void QLogValue3DAxisFormatter_Recalculate(QLogValue3DAxisFormatter* self) {
    auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self);
    if (vqlogvalue3daxisformatter) {
        vqlogvalue3daxisformatter->recalculate();
    }
}

float QLogValue3DAxisFormatter_PositionAt(const QLogValue3DAxisFormatter* self, float value) {
    auto* vqlogvalue3daxisformatter = dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self);
    if (vqlogvalue3daxisformatter) {
        return vqlogvalue3daxisformatter->positionAt(static_cast<float>(value));
    }
    qFatal("Error: Protected method QLogValue3DAxisFormatter::positionAt called without a directly constructed type");
}

float QLogValue3DAxisFormatter_ValueAt(const QLogValue3DAxisFormatter* self, float position) {
    auto* vqlogvalue3daxisformatter = dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self);
    if (vqlogvalue3daxisformatter) {
        return vqlogvalue3daxisformatter->valueAt(static_cast<float>(position));
    }
    qFatal("Error: Protected method QLogValue3DAxisFormatter::valueAt called without a directly constructed type");
}

void QLogValue3DAxisFormatter_PopulateCopy(const QLogValue3DAxisFormatter* self, QValue3DAxisFormatter* copy) {
    auto* vqlogvalue3daxisformatter = dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self);
    if (vqlogvalue3daxisformatter) {
        vqlogvalue3daxisformatter->populateCopy(*copy);
    }
}

libqt_string QLogValue3DAxisFormatter_Tr2(const char* s, const char* c) {
    auto _ret = QLogValue3DAxisFormatter::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QLogValue3DAxisFormatter_Tr3(const char* s, const char* c, int n) {
    auto _ret = QLogValue3DAxisFormatter::tr(s, c, static_cast<int>(n));
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
QMetaObject* QLogValue3DAxisFormatter_SuperMetaObject(const QLogValue3DAxisFormatter* self) {
    return (QMetaObject*)self->QLogValue3DAxisFormatter::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QLogValue3DAxisFormatter_OnMetaObject(QLogValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self)))
        vqlogvalue3daxisformatter->qlogvalue3daxisformatter_metaobject_callback = reinterpret_cast<VirtualQLogValue3DAxisFormatter::QLogValue3DAxisFormatter_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QLogValue3DAxisFormatter_SuperMetacast(QLogValue3DAxisFormatter* self, const char* param1) {
    return self->QLogValue3DAxisFormatter::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QLogValue3DAxisFormatter_OnMetacast(QLogValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self))
        vqlogvalue3daxisformatter->qlogvalue3daxisformatter_metacast_callback = reinterpret_cast<VirtualQLogValue3DAxisFormatter::QLogValue3DAxisFormatter_Metacast_Callback>(slot);
}

// Base class handler implementation
int QLogValue3DAxisFormatter_SuperMetacall(QLogValue3DAxisFormatter* self, int param1, int param2, void** param3) {
    return self->QLogValue3DAxisFormatter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QLogValue3DAxisFormatter_OnMetacall(QLogValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self))
        vqlogvalue3daxisformatter->qlogvalue3daxisformatter_metacall_callback = reinterpret_cast<VirtualQLogValue3DAxisFormatter::QLogValue3DAxisFormatter_Metacall_Callback>(slot);
}

// Base class handler implementation
QValue3DAxisFormatter* QLogValue3DAxisFormatter_SuperCreateNewInstance(const QLogValue3DAxisFormatter* self) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self))) {
        return vqlogvalue3daxisformatter->QLogValue3DAxisFormatter::createNewInstance();
    } else
        qFatal("Error: Protected virtual method QLogValue3DAxisFormatter::createNewInstance called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLogValue3DAxisFormatter_OnCreateNewInstance(QLogValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self)))
        vqlogvalue3daxisformatter->qlogvalue3daxisformatter_createnewinstance_callback = reinterpret_cast<VirtualQLogValue3DAxisFormatter::QLogValue3DAxisFormatter_CreateNewInstance_Callback>(slot);
}

// Base class handler implementation
void QLogValue3DAxisFormatter_SuperRecalculate(QLogValue3DAxisFormatter* self) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self)) {
        vqlogvalue3daxisformatter->QLogValue3DAxisFormatter::recalculate();
    } else
        qFatal("Error: Protected virtual method QLogValue3DAxisFormatter::recalculate called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLogValue3DAxisFormatter_OnRecalculate(QLogValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self))
        vqlogvalue3daxisformatter->qlogvalue3daxisformatter_recalculate_callback = reinterpret_cast<VirtualQLogValue3DAxisFormatter::QLogValue3DAxisFormatter_Recalculate_Callback>(slot);
}

// Base class handler implementation
float QLogValue3DAxisFormatter_SuperPositionAt(const QLogValue3DAxisFormatter* self, float value) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self))) {
        return vqlogvalue3daxisformatter->QLogValue3DAxisFormatter::positionAt(static_cast<float>(value));
    } else
        qFatal("Error: Protected virtual method QLogValue3DAxisFormatter::positionAt called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLogValue3DAxisFormatter_OnPositionAt(QLogValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self)))
        vqlogvalue3daxisformatter->qlogvalue3daxisformatter_positionat_callback = reinterpret_cast<VirtualQLogValue3DAxisFormatter::QLogValue3DAxisFormatter_PositionAt_Callback>(slot);
}

// Base class handler implementation
float QLogValue3DAxisFormatter_SuperValueAt(const QLogValue3DAxisFormatter* self, float position) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self))) {
        return vqlogvalue3daxisformatter->QLogValue3DAxisFormatter::valueAt(static_cast<float>(position));
    } else
        qFatal("Error: Protected virtual method QLogValue3DAxisFormatter::valueAt called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLogValue3DAxisFormatter_OnValueAt(QLogValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self)))
        vqlogvalue3daxisformatter->qlogvalue3daxisformatter_valueat_callback = reinterpret_cast<VirtualQLogValue3DAxisFormatter::QLogValue3DAxisFormatter_ValueAt_Callback>(slot);
}

// Base class handler implementation
void QLogValue3DAxisFormatter_SuperPopulateCopy(const QLogValue3DAxisFormatter* self, QValue3DAxisFormatter* copy) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self))) {
        vqlogvalue3daxisformatter->QLogValue3DAxisFormatter::populateCopy(*copy);
    } else
        qFatal("Error: Protected virtual method QLogValue3DAxisFormatter::populateCopy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLogValue3DAxisFormatter_OnPopulateCopy(QLogValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self)))
        vqlogvalue3daxisformatter->qlogvalue3daxisformatter_populatecopy_callback = reinterpret_cast<VirtualQLogValue3DAxisFormatter::QLogValue3DAxisFormatter_PopulateCopy_Callback>(slot);
}

// Derived class handler implementation
libqt_string QLogValue3DAxisFormatter_StringForValue(const QLogValue3DAxisFormatter* self, double value, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self));
    if (vqlogvalue3daxisformatter) {
        auto _ret = vqlogvalue3daxisformatter->stringForValue(static_cast<qreal>(value), format_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        qFatal("Error: Protected virtual method QLogValue3DAxisFormatter::stringForValue called without a directly constructed type");
    }
}

// Base class handler implementation
libqt_string QLogValue3DAxisFormatter_SuperStringForValue(const QLogValue3DAxisFormatter* self, double value, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self))) {
        auto _ret = vqlogvalue3daxisformatter->QLogValue3DAxisFormatter::stringForValue(static_cast<qreal>(value), format_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected virtual method QLogValue3DAxisFormatter::stringForValue called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLogValue3DAxisFormatter_OnStringForValue(QLogValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self)))
        vqlogvalue3daxisformatter->qlogvalue3daxisformatter_stringforvalue_callback = reinterpret_cast<VirtualQLogValue3DAxisFormatter::QLogValue3DAxisFormatter_StringForValue_Callback>(slot);
}

// Derived class handler implementation
bool QLogValue3DAxisFormatter_Event(QLogValue3DAxisFormatter* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QLogValue3DAxisFormatter_SuperEvent(QLogValue3DAxisFormatter* self, QEvent* event) {
    return self->QLogValue3DAxisFormatter::event(event);
}

// Auxiliary method to allow providing re-implementation
void QLogValue3DAxisFormatter_OnEvent(QLogValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self))
        vqlogvalue3daxisformatter->qlogvalue3daxisformatter_event_callback = reinterpret_cast<VirtualQLogValue3DAxisFormatter::QLogValue3DAxisFormatter_Event_Callback>(slot);
}

// Derived class handler implementation
bool QLogValue3DAxisFormatter_EventFilter(QLogValue3DAxisFormatter* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QLogValue3DAxisFormatter_SuperEventFilter(QLogValue3DAxisFormatter* self, QObject* watched, QEvent* event) {
    return self->QLogValue3DAxisFormatter::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QLogValue3DAxisFormatter_OnEventFilter(QLogValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self))
        vqlogvalue3daxisformatter->qlogvalue3daxisformatter_eventfilter_callback = reinterpret_cast<VirtualQLogValue3DAxisFormatter::QLogValue3DAxisFormatter_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QLogValue3DAxisFormatter_TimerEvent(QLogValue3DAxisFormatter* self, QTimerEvent* event) {
    auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self);
    if (vqlogvalue3daxisformatter) {
        vqlogvalue3daxisformatter->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLogValue3DAxisFormatter::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLogValue3DAxisFormatter_SuperTimerEvent(QLogValue3DAxisFormatter* self, QTimerEvent* event) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self)) {
        vqlogvalue3daxisformatter->QLogValue3DAxisFormatter::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QLogValue3DAxisFormatter::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLogValue3DAxisFormatter_OnTimerEvent(QLogValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self))
        vqlogvalue3daxisformatter->qlogvalue3daxisformatter_timerevent_callback = reinterpret_cast<VirtualQLogValue3DAxisFormatter::QLogValue3DAxisFormatter_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QLogValue3DAxisFormatter_ChildEvent(QLogValue3DAxisFormatter* self, QChildEvent* event) {
    auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self);
    if (vqlogvalue3daxisformatter) {
        vqlogvalue3daxisformatter->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLogValue3DAxisFormatter::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLogValue3DAxisFormatter_SuperChildEvent(QLogValue3DAxisFormatter* self, QChildEvent* event) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self)) {
        vqlogvalue3daxisformatter->QLogValue3DAxisFormatter::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QLogValue3DAxisFormatter::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLogValue3DAxisFormatter_OnChildEvent(QLogValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self))
        vqlogvalue3daxisformatter->qlogvalue3daxisformatter_childevent_callback = reinterpret_cast<VirtualQLogValue3DAxisFormatter::QLogValue3DAxisFormatter_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QLogValue3DAxisFormatter_CustomEvent(QLogValue3DAxisFormatter* self, QEvent* event) {
    auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self);
    if (vqlogvalue3daxisformatter) {
        vqlogvalue3daxisformatter->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLogValue3DAxisFormatter::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLogValue3DAxisFormatter_SuperCustomEvent(QLogValue3DAxisFormatter* self, QEvent* event) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self)) {
        vqlogvalue3daxisformatter->QLogValue3DAxisFormatter::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QLogValue3DAxisFormatter::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLogValue3DAxisFormatter_OnCustomEvent(QLogValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self))
        vqlogvalue3daxisformatter->qlogvalue3daxisformatter_customevent_callback = reinterpret_cast<VirtualQLogValue3DAxisFormatter::QLogValue3DAxisFormatter_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QLogValue3DAxisFormatter_ConnectNotify(QLogValue3DAxisFormatter* self, const QMetaMethod* signal) {
    auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self);
    if (vqlogvalue3daxisformatter) {
        vqlogvalue3daxisformatter->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLogValue3DAxisFormatter::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLogValue3DAxisFormatter_SuperConnectNotify(QLogValue3DAxisFormatter* self, const QMetaMethod* signal) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self)) {
        vqlogvalue3daxisformatter->QLogValue3DAxisFormatter::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLogValue3DAxisFormatter::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLogValue3DAxisFormatter_OnConnectNotify(QLogValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self))
        vqlogvalue3daxisformatter->qlogvalue3daxisformatter_connectnotify_callback = reinterpret_cast<VirtualQLogValue3DAxisFormatter::QLogValue3DAxisFormatter_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QLogValue3DAxisFormatter_DisconnectNotify(QLogValue3DAxisFormatter* self, const QMetaMethod* signal) {
    auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self);
    if (vqlogvalue3daxisformatter) {
        vqlogvalue3daxisformatter->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLogValue3DAxisFormatter::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLogValue3DAxisFormatter_SuperDisconnectNotify(QLogValue3DAxisFormatter* self, const QMetaMethod* signal) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self)) {
        vqlogvalue3daxisformatter->QLogValue3DAxisFormatter::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLogValue3DAxisFormatter::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLogValue3DAxisFormatter_OnDisconnectNotify(QLogValue3DAxisFormatter* self, intptr_t slot) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self))
        vqlogvalue3daxisformatter->qlogvalue3daxisformatter_disconnectnotify_callback = reinterpret_cast<VirtualQLogValue3DAxisFormatter::QLogValue3DAxisFormatter_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QLogValue3DAxisFormatter_SetAllowNegatives(QLogValue3DAxisFormatter* self, bool allow) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self)) {
        vqlogvalue3daxisformatter->VirtualQLogValue3DAxisFormatter::setAllowNegatives(allow);
    } else
        qFatal("Error: Protected method QLogValue3DAxisFormatter::setAllowNegatives called without a directly constructed type");
}

// Derived class protected handler implementation
bool QLogValue3DAxisFormatter_AllowNegatives(const QLogValue3DAxisFormatter* self) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self))) {
        return vqlogvalue3daxisformatter->VirtualQLogValue3DAxisFormatter::allowNegatives();
    } else
        qFatal("Error: Protected method QLogValue3DAxisFormatter::allowNegatives called without a directly constructed type");
}

// Derived class protected handler implementation
void QLogValue3DAxisFormatter_SetAllowZero(QLogValue3DAxisFormatter* self, bool allow) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self)) {
        vqlogvalue3daxisformatter->VirtualQLogValue3DAxisFormatter::setAllowZero(allow);
    } else
        qFatal("Error: Protected method QLogValue3DAxisFormatter::setAllowZero called without a directly constructed type");
}

// Derived class protected handler implementation
bool QLogValue3DAxisFormatter_AllowZero(const QLogValue3DAxisFormatter* self) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self))) {
        return vqlogvalue3daxisformatter->VirtualQLogValue3DAxisFormatter::allowZero();
    } else
        qFatal("Error: Protected method QLogValue3DAxisFormatter::allowZero called without a directly constructed type");
}

// Derived class protected handler implementation
void QLogValue3DAxisFormatter_MarkDirty(QLogValue3DAxisFormatter* self) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self)) {
        vqlogvalue3daxisformatter->VirtualQLogValue3DAxisFormatter::markDirty();
    } else
        qFatal("Error: Protected method QLogValue3DAxisFormatter::markDirty called without a directly constructed type");
}

// Derived class protected handler implementation
QValue3DAxis* QLogValue3DAxisFormatter_Axis(const QLogValue3DAxisFormatter* self) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self))) {
        return vqlogvalue3daxisformatter->VirtualQLogValue3DAxisFormatter::axis();
    } else
        qFatal("Error: Protected method QLogValue3DAxisFormatter::axis called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of float */ QLogValue3DAxisFormatter_GridPositions(const QLogValue3DAxisFormatter* self) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self))) {
        QList<float>& _ret = vqlogvalue3daxisformatter->VirtualQLogValue3DAxisFormatter::gridPositions();
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
        qFatal("Error: Protected method QLogValue3DAxisFormatter::gridPositions called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of float */ QLogValue3DAxisFormatter_SubGridPositions(const QLogValue3DAxisFormatter* self) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self))) {
        QList<float>& _ret = vqlogvalue3daxisformatter->VirtualQLogValue3DAxisFormatter::subGridPositions();
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
        qFatal("Error: Protected method QLogValue3DAxisFormatter::subGridPositions called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of float */ QLogValue3DAxisFormatter_LabelPositions(const QLogValue3DAxisFormatter* self) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self))) {
        QList<float>& _ret = vqlogvalue3daxisformatter->VirtualQLogValue3DAxisFormatter::labelPositions();
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
        qFatal("Error: Protected method QLogValue3DAxisFormatter::labelPositions called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of libqt_string */ QLogValue3DAxisFormatter_LabelStrings(const QLogValue3DAxisFormatter* self) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self))) {
        QList<QString>& _ret = vqlogvalue3daxisformatter->VirtualQLogValue3DAxisFormatter::labelStrings();
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
        qFatal("Error: Protected method QLogValue3DAxisFormatter::labelStrings called without a directly constructed type");
}

// Derived class protected handler implementation
void QLogValue3DAxisFormatter_SetLocale(QLogValue3DAxisFormatter* self, const QLocale* locale) {
    if (auto* vqlogvalue3daxisformatter = dynamic_cast<VirtualQLogValue3DAxisFormatter*>(self)) {
        vqlogvalue3daxisformatter->VirtualQLogValue3DAxisFormatter::setLocale(*locale);
    } else
        qFatal("Error: Protected method QLogValue3DAxisFormatter::setLocale called without a directly constructed type");
}

// Derived class handler implementation
QLocale* QLogValue3DAxisFormatter_Locale(const QLogValue3DAxisFormatter* self) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self)))
        return new QLocale(vqlogvalue3daxisformatter->locale());
    qFatal("Error: Protected method QLogValue3DAxisFormatter::locale called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QLogValue3DAxisFormatter_Sender(const QLogValue3DAxisFormatter* self) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self))) {
        return vqlogvalue3daxisformatter->VirtualQLogValue3DAxisFormatter::sender();
    } else
        qFatal("Error: Protected method QLogValue3DAxisFormatter::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QLogValue3DAxisFormatter_SenderSignalIndex(const QLogValue3DAxisFormatter* self) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self))) {
        return vqlogvalue3daxisformatter->VirtualQLogValue3DAxisFormatter::senderSignalIndex();
    } else
        qFatal("Error: Protected method QLogValue3DAxisFormatter::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QLogValue3DAxisFormatter_Receivers(const QLogValue3DAxisFormatter* self, const char* signal) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self))) {
        return vqlogvalue3daxisformatter->VirtualQLogValue3DAxisFormatter::receivers(signal);
    } else
        qFatal("Error: Protected method QLogValue3DAxisFormatter::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QLogValue3DAxisFormatter_IsSignalConnected(const QLogValue3DAxisFormatter* self, const QMetaMethod* signal) {
    if (auto* vqlogvalue3daxisformatter = const_cast<VirtualQLogValue3DAxisFormatter*>(dynamic_cast<const VirtualQLogValue3DAxisFormatter*>(self))) {
        return vqlogvalue3daxisformatter->VirtualQLogValue3DAxisFormatter::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QLogValue3DAxisFormatter::isSignalConnected called without a directly constructed type");
}

void QLogValue3DAxisFormatter_Delete(QLogValue3DAxisFormatter* self) {
    delete self;
}
