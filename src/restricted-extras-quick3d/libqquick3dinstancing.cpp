#include <QByteArray>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlParserStatus>
#include <QQuaternion>
#include <QQuick3DInstancing>
#define WORKAROUND_INNER_CLASS_DEFINITION_QQuick3DInstancing__InstanceTableEntry
#include <QQuick3DObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QQuick3DObject__ItemChangeData
#include <QString>
#include <QTimerEvent>
#include <QVector3D>
#include <QVector4D>
#include <qquick3dinstancing.h>
#include "libqquick3dinstancing.h"
#include "libqquick3dinstancing.hxx"

QQuick3DInstancing* QQuick3DInstancing_new() {
    return new VirtualQQuick3DInstancing();
}

QQuick3DInstancing* QQuick3DInstancing_new2(QQuick3DObject* parent) {
    return new VirtualQQuick3DInstancing(parent);
}

QMetaObject* QQuick3DInstancing_MetaObject(const QQuick3DInstancing* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuick3DInstancing_Metacast(QQuick3DInstancing* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuick3DInstancing_Metacall(QQuick3DInstancing* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuick3DInstancing_Tr(const char* s) {
    auto _ret = QQuick3DInstancing::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuick3DInstancing_InstanceBuffer(QQuick3DInstancing* self, int* instanceCount) {
    QByteArray _qb = self->instanceBuffer(static_cast<int*>(instanceCount));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

int QQuick3DInstancing_InstanceCountOverride(const QQuick3DInstancing* self) {
    return self->instanceCountOverride();
}

bool QQuick3DInstancing_HasTransparency(const QQuick3DInstancing* self) {
    return self->hasTransparency();
}

bool QQuick3DInstancing_DepthSortingEnabled(const QQuick3DInstancing* self) {
    return self->depthSortingEnabled();
}

QVector3D* QQuick3DInstancing_InstancePosition(QQuick3DInstancing* self, int index) {
    return new QVector3D(self->instancePosition(static_cast<int>(index)));
}

QVector3D* QQuick3DInstancing_InstanceScale(QQuick3DInstancing* self, int index) {
    return new QVector3D(self->instanceScale(static_cast<int>(index)));
}

QQuaternion* QQuick3DInstancing_InstanceRotation(QQuick3DInstancing* self, int index) {
    return new QQuaternion(self->instanceRotation(static_cast<int>(index)));
}

QColor* QQuick3DInstancing_InstanceColor(QQuick3DInstancing* self, int index) {
    return new QColor(self->instanceColor(static_cast<int>(index)));
}

QVector4D* QQuick3DInstancing_InstanceCustomData(QQuick3DInstancing* self, int index) {
    return new QVector4D(self->instanceCustomData(static_cast<int>(index)));
}

void QQuick3DInstancing_SetInstanceCountOverride(QQuick3DInstancing* self, int instanceCountOverride) {
    self->setInstanceCountOverride(static_cast<int>(instanceCountOverride));
}

void QQuick3DInstancing_SetHasTransparency(QQuick3DInstancing* self, bool hasTransparency) {
    self->setHasTransparency(hasTransparency);
}

void QQuick3DInstancing_SetDepthSortingEnabled(QQuick3DInstancing* self, bool enabled) {
    self->setDepthSortingEnabled(enabled);
}

void QQuick3DInstancing_InstanceTableChanged(QQuick3DInstancing* self) {
    self->instanceTableChanged();
}

void QQuick3DInstancing_Connect_InstanceTableChanged(QQuick3DInstancing* self, intptr_t slot) {
    void (*slotFunc)(QQuick3DInstancing*) = reinterpret_cast<void (*)(QQuick3DInstancing*)>(slot);
    QQuick3DInstancing::connect(self,
                                static_cast<void (QQuick3DInstancing::*)()>(&QQuick3DInstancing::instanceTableChanged),
                                [self, slotFunc]() {
                                    slotFunc(self);
                                });
}

void QQuick3DInstancing_InstanceNodeDirty(QQuick3DInstancing* self) {
    self->instanceNodeDirty();
}

void QQuick3DInstancing_Connect_InstanceNodeDirty(QQuick3DInstancing* self, intptr_t slot) {
    void (*slotFunc)(QQuick3DInstancing*) = reinterpret_cast<void (*)(QQuick3DInstancing*)>(slot);
    QQuick3DInstancing::connect(self,
                                static_cast<void (QQuick3DInstancing::*)()>(&QQuick3DInstancing::instanceNodeDirty),
                                [self, slotFunc]() {
                                    slotFunc(self);
                                });
}

void QQuick3DInstancing_InstanceCountOverrideChanged(QQuick3DInstancing* self) {
    self->instanceCountOverrideChanged();
}

void QQuick3DInstancing_Connect_InstanceCountOverrideChanged(QQuick3DInstancing* self, intptr_t slot) {
    void (*slotFunc)(QQuick3DInstancing*) = reinterpret_cast<void (*)(QQuick3DInstancing*)>(slot);
    QQuick3DInstancing::connect(self,
                                static_cast<void (QQuick3DInstancing::*)()>(&QQuick3DInstancing::instanceCountOverrideChanged),
                                [self, slotFunc]() {
                                    slotFunc(self);
                                });
}

void QQuick3DInstancing_HasTransparencyChanged(QQuick3DInstancing* self) {
    self->hasTransparencyChanged();
}

void QQuick3DInstancing_Connect_HasTransparencyChanged(QQuick3DInstancing* self, intptr_t slot) {
    void (*slotFunc)(QQuick3DInstancing*) = reinterpret_cast<void (*)(QQuick3DInstancing*)>(slot);
    QQuick3DInstancing::connect(self,
                                static_cast<void (QQuick3DInstancing::*)()>(&QQuick3DInstancing::hasTransparencyChanged),
                                [self, slotFunc]() {
                                    slotFunc(self);
                                });
}

void QQuick3DInstancing_DepthSortingEnabledChanged(QQuick3DInstancing* self) {
    self->depthSortingEnabledChanged();
}

void QQuick3DInstancing_Connect_DepthSortingEnabledChanged(QQuick3DInstancing* self, intptr_t slot) {
    void (*slotFunc)(QQuick3DInstancing*) = reinterpret_cast<void (*)(QQuick3DInstancing*)>(slot);
    QQuick3DInstancing::connect(self,
                                static_cast<void (QQuick3DInstancing::*)()>(&QQuick3DInstancing::depthSortingEnabledChanged),
                                [self, slotFunc]() {
                                    slotFunc(self);
                                });
}

libqt_string QQuick3DInstancing_GetInstanceBuffer(QQuick3DInstancing* self, int* instanceCount) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing) {
        QByteArray _qb = vqquick3dinstancing->getInstanceBuffer(static_cast<int*>(instanceCount));
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    }
    qFatal("Error: Protected method QQuick3DInstancing::getInstanceBuffer called without a directly constructed type");
}

libqt_string QQuick3DInstancing_Tr2(const char* s, const char* c) {
    auto _ret = QQuick3DInstancing::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuick3DInstancing_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuick3DInstancing::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQuick3DInstancing_SuperMetaObject(const QQuick3DInstancing* self) {
    return (QMetaObject*)self->QQuick3DInstancing::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnMetaObject(QQuick3DInstancing* self, intptr_t slot) {
    if (auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self)))
        vqquick3dinstancing->qquick3dinstancing_metaobject_callback = reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQuick3DInstancing_SuperMetacast(QQuick3DInstancing* self, const char* param1) {
    return self->QQuick3DInstancing::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnMetacast(QQuick3DInstancing* self, intptr_t slot) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self))
        vqquick3dinstancing->qquick3dinstancing_metacast_callback = reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQuick3DInstancing_SuperMetacall(QQuick3DInstancing* self, int param1, int param2, void** param3) {
    return self->QQuick3DInstancing::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnMetacall(QQuick3DInstancing* self, intptr_t slot) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self))
        vqquick3dinstancing->qquick3dinstancing_metacall_callback = reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnGetInstanceBuffer(QQuick3DInstancing* self, intptr_t slot) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self))
        vqquick3dinstancing->qquick3dinstancing_getinstancebuffer_callback = reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_GetInstanceBuffer_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DInstancing_MarkAllDirty(QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing) {
        vqquick3dinstancing->markAllDirty();
    } else {
        qFatal("Error: Protected virtual method QQuick3DInstancing::markAllDirty called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperMarkAllDirty(QQuick3DInstancing* self) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self)) {
        vqquick3dinstancing->QQuick3DInstancing::markAllDirty();
    } else
        qFatal("Error: Protected virtual method QQuick3DInstancing::markAllDirty called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnMarkAllDirty(QQuick3DInstancing* self, intptr_t slot) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self))
        vqquick3dinstancing->qquick3dinstancing_markalldirty_callback = reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_MarkAllDirty_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DInstancing_ItemChange(QQuick3DInstancing* self, int param1, const QQuick3DObject__ItemChangeData* param2) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing) {
        vqquick3dinstancing->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    } else {
        qFatal("Error: Protected virtual method QQuick3DInstancing::itemChange called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperItemChange(QQuick3DInstancing* self, int param1, const QQuick3DObject__ItemChangeData* param2) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self)) {
        vqquick3dinstancing->QQuick3DInstancing::itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    } else
        qFatal("Error: Protected virtual method QQuick3DInstancing::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnItemChange(QQuick3DInstancing* self, intptr_t slot) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self))
        vqquick3dinstancing->qquick3dinstancing_itemchange_callback = reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_ItemChange_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DInstancing_ClassBegin(QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing) {
        vqquick3dinstancing->classBegin();
    } else {
        qFatal("Error: Protected virtual method QQuick3DInstancing::classBegin called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperClassBegin(QQuick3DInstancing* self) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self)) {
        vqquick3dinstancing->QQuick3DInstancing::classBegin();
    } else
        qFatal("Error: Protected virtual method QQuick3DInstancing::classBegin called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnClassBegin(QQuick3DInstancing* self, intptr_t slot) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self))
        vqquick3dinstancing->qquick3dinstancing_classbegin_callback = reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_ClassBegin_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DInstancing_ComponentComplete(QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing) {
        vqquick3dinstancing->componentComplete();
    } else {
        qFatal("Error: Protected virtual method QQuick3DInstancing::componentComplete called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperComponentComplete(QQuick3DInstancing* self) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self)) {
        vqquick3dinstancing->QQuick3DInstancing::componentComplete();
    } else
        qFatal("Error: Protected virtual method QQuick3DInstancing::componentComplete called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnComponentComplete(QQuick3DInstancing* self, intptr_t slot) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self))
        vqquick3dinstancing->qquick3dinstancing_componentcomplete_callback = reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_ComponentComplete_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DInstancing_PreSync(QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing) {
        vqquick3dinstancing->preSync();
    } else {
        qFatal("Error: Protected virtual method QQuick3DInstancing::preSync called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperPreSync(QQuick3DInstancing* self) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self)) {
        vqquick3dinstancing->QQuick3DInstancing::preSync();
    } else
        qFatal("Error: Protected virtual method QQuick3DInstancing::preSync called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnPreSync(QQuick3DInstancing* self, intptr_t slot) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self))
        vqquick3dinstancing->qquick3dinstancing_presync_callback = reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_PreSync_Callback>(slot);
}

// Derived class handler implementation
bool QQuick3DInstancing_Event(QQuick3DInstancing* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QQuick3DInstancing_SuperEvent(QQuick3DInstancing* self, QEvent* event) {
    return self->QQuick3DInstancing::event(event);
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnEvent(QQuick3DInstancing* self, intptr_t slot) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self))
        vqquick3dinstancing->qquick3dinstancing_event_callback = reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQuick3DInstancing_EventFilter(QQuick3DInstancing* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQuick3DInstancing_SuperEventFilter(QQuick3DInstancing* self, QObject* watched, QEvent* event) {
    return self->QQuick3DInstancing::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnEventFilter(QQuick3DInstancing* self, intptr_t slot) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self))
        vqquick3dinstancing->qquick3dinstancing_eventfilter_callback = reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DInstancing_TimerEvent(QQuick3DInstancing* self, QTimerEvent* event) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing) {
        vqquick3dinstancing->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuick3DInstancing::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperTimerEvent(QQuick3DInstancing* self, QTimerEvent* event) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self)) {
        vqquick3dinstancing->QQuick3DInstancing::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuick3DInstancing::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnTimerEvent(QQuick3DInstancing* self, intptr_t slot) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self))
        vqquick3dinstancing->qquick3dinstancing_timerevent_callback = reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DInstancing_ChildEvent(QQuick3DInstancing* self, QChildEvent* event) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing) {
        vqquick3dinstancing->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuick3DInstancing::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperChildEvent(QQuick3DInstancing* self, QChildEvent* event) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self)) {
        vqquick3dinstancing->QQuick3DInstancing::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuick3DInstancing::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnChildEvent(QQuick3DInstancing* self, intptr_t slot) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self))
        vqquick3dinstancing->qquick3dinstancing_childevent_callback = reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DInstancing_CustomEvent(QQuick3DInstancing* self, QEvent* event) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing) {
        vqquick3dinstancing->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuick3DInstancing::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperCustomEvent(QQuick3DInstancing* self, QEvent* event) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self)) {
        vqquick3dinstancing->QQuick3DInstancing::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuick3DInstancing::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnCustomEvent(QQuick3DInstancing* self, intptr_t slot) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self))
        vqquick3dinstancing->qquick3dinstancing_customevent_callback = reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DInstancing_ConnectNotify(QQuick3DInstancing* self, const QMetaMethod* signal) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing) {
        vqquick3dinstancing->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuick3DInstancing::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperConnectNotify(QQuick3DInstancing* self, const QMetaMethod* signal) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self)) {
        vqquick3dinstancing->QQuick3DInstancing::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuick3DInstancing::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnConnectNotify(QQuick3DInstancing* self, intptr_t slot) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self))
        vqquick3dinstancing->qquick3dinstancing_connectnotify_callback = reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DInstancing_DisconnectNotify(QQuick3DInstancing* self, const QMetaMethod* signal) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing) {
        vqquick3dinstancing->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuick3DInstancing::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperDisconnectNotify(QQuick3DInstancing* self, const QMetaMethod* signal) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self)) {
        vqquick3dinstancing->QQuick3DInstancing::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuick3DInstancing::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnDisconnectNotify(QQuick3DInstancing* self, intptr_t slot) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self))
        vqquick3dinstancing->qquick3dinstancing_disconnectnotify_callback = reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QQuick3DInstancing_MarkDirty(QQuick3DInstancing* self) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self)) {
        vqquick3dinstancing->VirtualQQuick3DInstancing::markDirty();
    } else
        qFatal("Error: Protected method QQuick3DInstancing::markDirty called without a directly constructed type");
}

// Derived class handler implementation
QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_CalculateTableEntry(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QVector3D* eulerRotation, const QColor* color) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self))
        return new QQuick3DInstancing::InstanceTableEntry(vqquick3dinstancing->calculateTableEntry(*position, *scale, *eulerRotation, *color));
    qFatal("Error: Protected method QQuick3DInstancing::calculateTableEntry called without a directly constructed type");
}

// Derived class handler implementation
QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_CalculateTableEntryFromQuaternion(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QQuaternion* rotation, const QColor* color) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self))
        return new QQuick3DInstancing::InstanceTableEntry(vqquick3dinstancing->calculateTableEntryFromQuaternion(*position, *scale, *rotation, *color));
    qFatal("Error: Protected method QQuick3DInstancing::calculateTableEntryFromQuaternion called without a directly constructed type");
}

// Derived class handler implementation
QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_CalculateTableEntry5(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QVector3D* eulerRotation, const QColor* color, const QVector4D* customData) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self))
        return new QQuick3DInstancing::InstanceTableEntry(vqquick3dinstancing->calculateTableEntry(*position, *scale, *eulerRotation, *color, *customData));
    qFatal("Error: Protected method QQuick3DInstancing::calculateTableEntry5 called without a directly constructed type");
}

// Derived class handler implementation
QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_CalculateTableEntryFromQuaternion5(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QQuaternion* rotation, const QColor* color, const QVector4D* customData) {
    if (auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self))
        return new QQuick3DInstancing::InstanceTableEntry(vqquick3dinstancing->calculateTableEntryFromQuaternion(*position, *scale, *rotation, *color, *customData));
    qFatal("Error: Protected method QQuick3DInstancing::calculateTableEntryFromQuaternion5 called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuick3DInstancing_IsComponentComplete(const QQuick3DInstancing* self) {
    if (auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self))) {
        return vqquick3dinstancing->VirtualQQuick3DInstancing::isComponentComplete();
    } else
        qFatal("Error: Protected method QQuick3DInstancing::isComponentComplete called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QQuick3DInstancing_Sender(const QQuick3DInstancing* self) {
    if (auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self))) {
        return vqquick3dinstancing->VirtualQQuick3DInstancing::sender();
    } else
        qFatal("Error: Protected method QQuick3DInstancing::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuick3DInstancing_SenderSignalIndex(const QQuick3DInstancing* self) {
    if (auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self))) {
        return vqquick3dinstancing->VirtualQQuick3DInstancing::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQuick3DInstancing::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuick3DInstancing_Receivers(const QQuick3DInstancing* self, const char* signal) {
    if (auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self))) {
        return vqquick3dinstancing->VirtualQQuick3DInstancing::receivers(signal);
    } else
        qFatal("Error: Protected method QQuick3DInstancing::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuick3DInstancing_IsSignalConnected(const QQuick3DInstancing* self, const QMetaMethod* signal) {
    if (auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self))) {
        return vqquick3dinstancing->VirtualQQuick3DInstancing::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQuick3DInstancing::isSignalConnected called without a directly constructed type");
}

void QQuick3DInstancing_Delete(QQuick3DInstancing* self) {
    delete self;
}

QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing__InstanceTableEntry_new() {
    return new QQuick3DInstancing::InstanceTableEntry();
}

QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing__InstanceTableEntry_new2(const QQuick3DInstancing__InstanceTableEntry* other) {
    return new QQuick3DInstancing::InstanceTableEntry(*other);
}

QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing__InstanceTableEntry_new3(QQuick3DInstancing__InstanceTableEntry* other) {
    return new QQuick3DInstancing::InstanceTableEntry(std::move(*other));
}

void QQuick3DInstancing__InstanceTableEntry_CopyAssign(QQuick3DInstancing__InstanceTableEntry* self, QQuick3DInstancing__InstanceTableEntry* other) {
    *self = *other;
}

void QQuick3DInstancing__InstanceTableEntry_MoveAssign(QQuick3DInstancing__InstanceTableEntry* self, QQuick3DInstancing__InstanceTableEntry* other) {
    *self = std::move(*other);
}

QVector4D* QQuick3DInstancing__InstanceTableEntry_Row0(const QQuick3DInstancing__InstanceTableEntry* self) {
    return new QVector4D(self->row0);
}

void QQuick3DInstancing__InstanceTableEntry_SetRow0(QQuick3DInstancing__InstanceTableEntry* self, QVector4D* row0) {
    self->row0 = *row0;
}

QVector4D* QQuick3DInstancing__InstanceTableEntry_Row1(const QQuick3DInstancing__InstanceTableEntry* self) {
    return new QVector4D(self->row1);
}

void QQuick3DInstancing__InstanceTableEntry_SetRow1(QQuick3DInstancing__InstanceTableEntry* self, QVector4D* row1) {
    self->row1 = *row1;
}

QVector4D* QQuick3DInstancing__InstanceTableEntry_Row2(const QQuick3DInstancing__InstanceTableEntry* self) {
    return new QVector4D(self->row2);
}

void QQuick3DInstancing__InstanceTableEntry_SetRow2(QQuick3DInstancing__InstanceTableEntry* self, QVector4D* row2) {
    self->row2 = *row2;
}

QVector4D* QQuick3DInstancing__InstanceTableEntry_Color(const QQuick3DInstancing__InstanceTableEntry* self) {
    return new QVector4D(self->color);
}

void QQuick3DInstancing__InstanceTableEntry_SetColor(QQuick3DInstancing__InstanceTableEntry* self, QVector4D* color) {
    self->color = *color;
}

QVector4D* QQuick3DInstancing__InstanceTableEntry_InstanceData(const QQuick3DInstancing__InstanceTableEntry* self) {
    return new QVector4D(self->instanceData);
}

void QQuick3DInstancing__InstanceTableEntry_SetInstanceData(QQuick3DInstancing__InstanceTableEntry* self, QVector4D* instanceData) {
    self->instanceData = *instanceData;
}

QVector3D* QQuick3DInstancing__InstanceTableEntry_GetPosition(const QQuick3DInstancing__InstanceTableEntry* self) {
    return new QVector3D(self->getPosition());
}

QVector3D* QQuick3DInstancing__InstanceTableEntry_GetScale(const QQuick3DInstancing__InstanceTableEntry* self) {
    return new QVector3D(self->getScale());
}

QQuaternion* QQuick3DInstancing__InstanceTableEntry_GetRotation(const QQuick3DInstancing__InstanceTableEntry* self) {
    return new QQuaternion(self->getRotation());
}

QColor* QQuick3DInstancing__InstanceTableEntry_GetColor(const QQuick3DInstancing__InstanceTableEntry* self) {
    return new QColor(self->getColor());
}

void QQuick3DInstancing__InstanceTableEntry_Delete(QQuick3DInstancing__InstanceTableEntry* self) {
    delete self;
}
