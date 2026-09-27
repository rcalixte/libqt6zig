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
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        QByteArray _qb = vqquick3dinstancing->getInstanceBuffer(static_cast<int*>(instanceCount));
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    }
    return {};
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
    auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self));
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_MetaObject_IsBase(true);
        return (QMetaObject*)vqquick3dinstancing->metaObject();
    } else {
        return (QMetaObject*)self->QQuick3DInstancing::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnMetaObject(const QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self));
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_MetaObject_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQuick3DInstancing_SuperMetacast(QQuick3DInstancing* self, const char* param1) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_Metacast_IsBase(true);
        return vqquick3dinstancing->qt_metacast(param1);
    } else {
        return self->QQuick3DInstancing::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnMetacast(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_Metacast_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQuick3DInstancing_SuperMetacall(QQuick3DInstancing* self, int param1, int param2, void** param3) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_Metacall_IsBase(true);
        return vqquick3dinstancing->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuick3DInstancing::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnMetacall(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_Metacall_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_Metacall_Callback>(slot));
}

// Base class handler implementation
libqt_string QQuick3DInstancing_SuperGetInstanceBuffer(QQuick3DInstancing* self, int* instanceCount) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_GetInstanceBuffer_IsBase(true);
        QByteArray _qb = vqquick3dinstancing->getInstanceBuffer(static_cast<int*>(instanceCount));
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else {
        QByteArray _qb = ((VirtualQQuick3DInstancing*)self)->getInstanceBuffer(static_cast<int*>(instanceCount));
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnGetInstanceBuffer(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_GetInstanceBuffer_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_GetInstanceBuffer_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DInstancing_MarkAllDirty(QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->markAllDirty();
    } else {
        ((VirtualQQuick3DInstancing*)self)->markAllDirty();
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperMarkAllDirty(QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_MarkAllDirty_IsBase(true);
        vqquick3dinstancing->markAllDirty();
    } else {
        ((VirtualQQuick3DInstancing*)self)->markAllDirty();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnMarkAllDirty(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_MarkAllDirty_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_MarkAllDirty_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DInstancing_ItemChange(QQuick3DInstancing* self, int param1, const QQuick3DObject__ItemChangeData* param2) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    } else {
        ((VirtualQQuick3DInstancing*)self)->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperItemChange(QQuick3DInstancing* self, int param1, const QQuick3DObject__ItemChangeData* param2) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_ItemChange_IsBase(true);
        vqquick3dinstancing->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    } else {
        ((VirtualQQuick3DInstancing*)self)->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnItemChange(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_ItemChange_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_ItemChange_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DInstancing_ClassBegin(QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->classBegin();
    } else {
        ((VirtualQQuick3DInstancing*)self)->classBegin();
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperClassBegin(QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_ClassBegin_IsBase(true);
        vqquick3dinstancing->classBegin();
    } else {
        ((VirtualQQuick3DInstancing*)self)->classBegin();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnClassBegin(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_ClassBegin_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_ClassBegin_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DInstancing_ComponentComplete(QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->componentComplete();
    } else {
        ((VirtualQQuick3DInstancing*)self)->componentComplete();
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperComponentComplete(QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_ComponentComplete_IsBase(true);
        vqquick3dinstancing->componentComplete();
    } else {
        ((VirtualQQuick3DInstancing*)self)->componentComplete();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnComponentComplete(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_ComponentComplete_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_ComponentComplete_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DInstancing_PreSync(QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->preSync();
    } else {
        ((VirtualQQuick3DInstancing*)self)->preSync();
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperPreSync(QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_PreSync_IsBase(true);
        vqquick3dinstancing->preSync();
    } else {
        ((VirtualQQuick3DInstancing*)self)->preSync();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnPreSync(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_PreSync_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_PreSync_Callback>(slot));
}

// Derived class handler implementation
bool QQuick3DInstancing_Event(QQuick3DInstancing* self, QEvent* event) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        return vqquick3dinstancing->event(event);
    } else {
        return self->QQuick3DInstancing::event(event);
    }
}

// Base class handler implementation
bool QQuick3DInstancing_SuperEvent(QQuick3DInstancing* self, QEvent* event) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_Event_IsBase(true);
        return vqquick3dinstancing->event(event);
    } else {
        return self->QQuick3DInstancing::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnEvent(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_Event_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQuick3DInstancing_EventFilter(QQuick3DInstancing* self, QObject* watched, QEvent* event) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        return vqquick3dinstancing->eventFilter(watched, event);
    } else {
        return self->QQuick3DInstancing::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQuick3DInstancing_SuperEventFilter(QQuick3DInstancing* self, QObject* watched, QEvent* event) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_EventFilter_IsBase(true);
        return vqquick3dinstancing->eventFilter(watched, event);
    } else {
        return self->QQuick3DInstancing::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnEventFilter(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_EventFilter_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DInstancing_TimerEvent(QQuick3DInstancing* self, QTimerEvent* event) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->timerEvent(event);
    } else {
        ((VirtualQQuick3DInstancing*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperTimerEvent(QQuick3DInstancing* self, QTimerEvent* event) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_TimerEvent_IsBase(true);
        vqquick3dinstancing->timerEvent(event);
    } else {
        ((VirtualQQuick3DInstancing*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnTimerEvent(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_TimerEvent_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DInstancing_ChildEvent(QQuick3DInstancing* self, QChildEvent* event) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->childEvent(event);
    } else {
        ((VirtualQQuick3DInstancing*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperChildEvent(QQuick3DInstancing* self, QChildEvent* event) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_ChildEvent_IsBase(true);
        vqquick3dinstancing->childEvent(event);
    } else {
        ((VirtualQQuick3DInstancing*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnChildEvent(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_ChildEvent_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DInstancing_CustomEvent(QQuick3DInstancing* self, QEvent* event) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->customEvent(event);
    } else {
        ((VirtualQQuick3DInstancing*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperCustomEvent(QQuick3DInstancing* self, QEvent* event) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_CustomEvent_IsBase(true);
        vqquick3dinstancing->customEvent(event);
    } else {
        ((VirtualQQuick3DInstancing*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnCustomEvent(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_CustomEvent_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DInstancing_ConnectNotify(QQuick3DInstancing* self, const QMetaMethod* signal) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->connectNotify(*signal);
    } else {
        ((VirtualQQuick3DInstancing*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperConnectNotify(QQuick3DInstancing* self, const QMetaMethod* signal) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_ConnectNotify_IsBase(true);
        vqquick3dinstancing->connectNotify(*signal);
    } else {
        ((VirtualQQuick3DInstancing*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnConnectNotify(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_ConnectNotify_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DInstancing_DisconnectNotify(QQuick3DInstancing* self, const QMetaMethod* signal) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->disconnectNotify(*signal);
    } else {
        ((VirtualQQuick3DInstancing*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperDisconnectNotify(QQuick3DInstancing* self, const QMetaMethod* signal) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_DisconnectNotify_IsBase(true);
        vqquick3dinstancing->disconnectNotify(*signal);
    } else {
        ((VirtualQQuick3DInstancing*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnDisconnectNotify(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_DisconnectNotify_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DInstancing_MarkDirty(QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->markDirty();
    } else {
        ((VirtualQQuick3DInstancing*)self)->markDirty();
    }
}

// Base class handler implementation
void QQuick3DInstancing_SuperMarkDirty(QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_MarkDirty_IsBase(true);
        vqquick3dinstancing->markDirty();
    } else {
        ((VirtualQQuick3DInstancing*)self)->markDirty();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnMarkDirty(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_MarkDirty_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_MarkDirty_Callback>(slot));
}

// Derived class handler implementation
QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_CalculateTableEntry(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QVector3D* eulerRotation, const QColor* color) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        return new QQuick3DInstancing::InstanceTableEntry(vqquick3dinstancing->calculateTableEntry(*position, *scale, *eulerRotation, *color));
    }
    return {};
}

// Base class handler implementation
QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_SuperCalculateTableEntry(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QVector3D* eulerRotation, const QColor* color) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_CalculateTableEntry_IsBase(true);
        return new QQuick3DInstancing::InstanceTableEntry(vqquick3dinstancing->calculateTableEntry(*position, *scale, *eulerRotation, *color));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnCalculateTableEntry(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_CalculateTableEntry_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_CalculateTableEntry_Callback>(slot));
}

// Derived class handler implementation
QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_CalculateTableEntryFromQuaternion(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QQuaternion* rotation, const QColor* color) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        return new QQuick3DInstancing::InstanceTableEntry(vqquick3dinstancing->calculateTableEntryFromQuaternion(*position, *scale, *rotation, *color));
    }
    return {};
}

// Base class handler implementation
QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_SuperCalculateTableEntryFromQuaternion(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QQuaternion* rotation, const QColor* color) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_CalculateTableEntryFromQuaternion_IsBase(true);
        return new QQuick3DInstancing::InstanceTableEntry(vqquick3dinstancing->calculateTableEntryFromQuaternion(*position, *scale, *rotation, *color));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnCalculateTableEntryFromQuaternion(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_CalculateTableEntryFromQuaternion_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_CalculateTableEntryFromQuaternion_Callback>(slot));
}

// Derived class handler implementation
QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_CalculateTableEntry5(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QVector3D* eulerRotation, const QColor* color, const QVector4D* customData) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        return new QQuick3DInstancing::InstanceTableEntry(vqquick3dinstancing->calculateTableEntry(*position, *scale, *eulerRotation, *color, *customData));
    }
    return {};
}

// Base class handler implementation
QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_SuperCalculateTableEntry5(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QVector3D* eulerRotation, const QColor* color, const QVector4D* customData) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_CalculateTableEntry5_IsBase(true);
        return new QQuick3DInstancing::InstanceTableEntry(vqquick3dinstancing->calculateTableEntry(*position, *scale, *eulerRotation, *color, *customData));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnCalculateTableEntry5(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_CalculateTableEntry5_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_CalculateTableEntry5_Callback>(slot));
}

// Derived class handler implementation
QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_CalculateTableEntryFromQuaternion5(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QQuaternion* rotation, const QColor* color, const QVector4D* customData) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        return new QQuick3DInstancing::InstanceTableEntry(vqquick3dinstancing->calculateTableEntryFromQuaternion(*position, *scale, *rotation, *color, *customData));
    }
    return {};
}

// Base class handler implementation
QQuick3DInstancing__InstanceTableEntry* QQuick3DInstancing_SuperCalculateTableEntryFromQuaternion5(QQuick3DInstancing* self, const QVector3D* position, const QVector3D* scale, const QQuaternion* rotation, const QColor* color, const QVector4D* customData) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_CalculateTableEntryFromQuaternion5_IsBase(true);
        return new QQuick3DInstancing::InstanceTableEntry(vqquick3dinstancing->calculateTableEntryFromQuaternion(*position, *scale, *rotation, *color, *customData));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnCalculateTableEntryFromQuaternion5(QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = dynamic_cast<VirtualQQuick3DInstancing*>(self);
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_CalculateTableEntryFromQuaternion5_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_CalculateTableEntryFromQuaternion5_Callback>(slot));
}

// Derived class handler implementation
bool QQuick3DInstancing_IsComponentComplete(const QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self));
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        return vqquick3dinstancing->isComponentComplete();
    } else {
        return ((VirtualQQuick3DInstancing*)self)->isComponentComplete();
    }
}

// Base class handler implementation
bool QQuick3DInstancing_SuperIsComponentComplete(const QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self));
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_IsComponentComplete_IsBase(true);
        return vqquick3dinstancing->isComponentComplete();
    } else {
        return ((VirtualQQuick3DInstancing*)self)->isComponentComplete();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnIsComponentComplete(const QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self));
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_IsComponentComplete_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_IsComponentComplete_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuick3DInstancing_Sender(const QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self));
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        return vqquick3dinstancing->sender();
    } else {
        return ((VirtualQQuick3DInstancing*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQuick3DInstancing_SuperSender(const QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self));
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_Sender_IsBase(true);
        return vqquick3dinstancing->sender();
    } else {
        return ((VirtualQQuick3DInstancing*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnSender(const QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self));
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_Sender_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQuick3DInstancing_SenderSignalIndex(const QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self));
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        return vqquick3dinstancing->senderSignalIndex();
    } else {
        return ((VirtualQQuick3DInstancing*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQuick3DInstancing_SuperSenderSignalIndex(const QQuick3DInstancing* self) {
    auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self));
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_SenderSignalIndex_IsBase(true);
        return vqquick3dinstancing->senderSignalIndex();
    } else {
        return ((VirtualQQuick3DInstancing*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnSenderSignalIndex(const QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self));
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQuick3DInstancing_Receivers(const QQuick3DInstancing* self, const char* signal) {
    auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self));
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        return vqquick3dinstancing->receivers(signal);
    } else {
        return ((VirtualQQuick3DInstancing*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQuick3DInstancing_SuperReceivers(const QQuick3DInstancing* self, const char* signal) {
    auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self));
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_Receivers_IsBase(true);
        return vqquick3dinstancing->receivers(signal);
    } else {
        return ((VirtualQQuick3DInstancing*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnReceivers(const QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self));
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_Receivers_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQuick3DInstancing_IsSignalConnected(const QQuick3DInstancing* self, const QMetaMethod* signal) {
    auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self));
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        return vqquick3dinstancing->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuick3DInstancing*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQuick3DInstancing_SuperIsSignalConnected(const QQuick3DInstancing* self, const QMetaMethod* signal) {
    auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self));
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing) {
        vqquick3dinstancing->setQQuick3DInstancing_IsSignalConnected_IsBase(true);
        return vqquick3dinstancing->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuick3DInstancing*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DInstancing_OnIsSignalConnected(const QQuick3DInstancing* self, intptr_t slot) {
    auto* vqquick3dinstancing = const_cast<VirtualQQuick3DInstancing*>(dynamic_cast<const VirtualQQuick3DInstancing*>(self));
    if (vqquick3dinstancing && vqquick3dinstancing->isVirtualQQuick3DInstancing)
        vqquick3dinstancing->setQQuick3DInstancing_IsSignalConnected_Callback(reinterpret_cast<VirtualQQuick3DInstancing::QQuick3DInstancing_IsSignalConnected_Callback>(slot));
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
