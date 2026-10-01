#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlParserStatus>
#include <QQuick3DObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QQuick3DObject__ItemChangeData
#include <QString>
#include <QTimerEvent>
#include <qquick3dobject.h>
#include "libqquick3dobject.h"
#include "libqquick3dobject.hxx"

QQuick3DObject* QQuick3DObject_new() {
    return new VirtualQQuick3DObject();
}

QQuick3DObject* QQuick3DObject_new2(QQuick3DObject* parent) {
    return new VirtualQQuick3DObject(parent);
}

QQmlParserStatus* QQuick3DObject_AsQQmlParserStatus(QQuick3DObject* self) {
    return static_cast<QQmlParserStatus*>(self);
}

QQuick3DObject* QQuick3DObject_FromQQmlParserStatus(QQmlParserStatus* _qqmlparserstatus) {
    return dynamic_cast<QQuick3DObject*>(static_cast<QQmlParserStatus*>(_qqmlparserstatus));
}

QMetaObject* QQuick3DObject_MetaObject(const QQuick3DObject* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuick3DObject_Metacast(QQuick3DObject* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuick3DObject_Metacall(QQuick3DObject* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuick3DObject_Tr(const char* s) {
    auto _ret = QQuick3DObject::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuick3DObject_State(const QQuick3DObject* self) {
    auto _ret = self->state();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuick3DObject_SetState(QQuick3DObject* self, const libqt_string state) {
    QString state_QString = QString::fromUtf8(state.data, state.len);
    self->setState(state_QString);
}

libqt_list /* of QQuick3DObject* */ QQuick3DObject_ChildItems(const QQuick3DObject* self) {
    QList<QQuick3DObject*> _ret = self->childItems();
    // Convert QList<> from C++ memory to manually-managed C memory
    QQuick3DObject** _arr = static_cast<QQuick3DObject**>(malloc(sizeof(QQuick3DObject*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QQuick3DObject* QQuick3DObject_ParentItem(const QQuick3DObject* self) {
    return self->parentItem();
}

void QQuick3DObject_Update(QQuick3DObject* self) {
    self->update();
}

void QQuick3DObject_SetParentItem(QQuick3DObject* self, QQuick3DObject* parentItem) {
    self->setParentItem(parentItem);
}

void QQuick3DObject_ParentChanged(QQuick3DObject* self) {
    self->parentChanged();
}

void QQuick3DObject_Connect_ParentChanged(QQuick3DObject* self, intptr_t slot) {
    void (*slotFunc)(QQuick3DObject*) = reinterpret_cast<void (*)(QQuick3DObject*)>(slot);
    QQuick3DObject::connect(self,
                            static_cast<void (QQuick3DObject::*)()>(&QQuick3DObject::parentChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QQuick3DObject_ChildrenChanged(QQuick3DObject* self) {
    self->childrenChanged();
}

void QQuick3DObject_Connect_ChildrenChanged(QQuick3DObject* self, intptr_t slot) {
    void (*slotFunc)(QQuick3DObject*) = reinterpret_cast<void (*)(QQuick3DObject*)>(slot);
    QQuick3DObject::connect(self,
                            static_cast<void (QQuick3DObject::*)()>(&QQuick3DObject::childrenChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QQuick3DObject_StateChanged(QQuick3DObject* self) {
    self->stateChanged();
}

void QQuick3DObject_Connect_StateChanged(QQuick3DObject* self, intptr_t slot) {
    void (*slotFunc)(QQuick3DObject*) = reinterpret_cast<void (*)(QQuick3DObject*)>(slot);
    QQuick3DObject::connect(self,
                            static_cast<void (QQuick3DObject::*)()>(&QQuick3DObject::stateChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QQuick3DObject_MarkAllDirty(QQuick3DObject* self) {
    auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self);
    if (vqquick3dobject) {
        vqquick3dobject->markAllDirty();
    }
}

void QQuick3DObject_ItemChange(QQuick3DObject* self, int param1, const QQuick3DObject__ItemChangeData* param2) {
    auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self);
    if (vqquick3dobject) {
        vqquick3dobject->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    }
}

void QQuick3DObject_ClassBegin(QQuick3DObject* self) {
    auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self);
    if (vqquick3dobject) {
        vqquick3dobject->classBegin();
    }
}

void QQuick3DObject_ComponentComplete(QQuick3DObject* self) {
    auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self);
    if (vqquick3dobject) {
        vqquick3dobject->componentComplete();
    }
}

void QQuick3DObject_PreSync(QQuick3DObject* self) {
    auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self);
    if (vqquick3dobject) {
        vqquick3dobject->preSync();
    }
}

libqt_string QQuick3DObject_Tr2(const char* s, const char* c) {
    auto _ret = QQuick3DObject::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuick3DObject_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuick3DObject::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQuick3DObject_SuperMetaObject(const QQuick3DObject* self) {
    return (QMetaObject*)self->QQuick3DObject::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQuick3DObject_OnMetaObject(QQuick3DObject* self, intptr_t slot) {
    if (auto* vqquick3dobject = const_cast<VirtualQQuick3DObject*>(dynamic_cast<const VirtualQQuick3DObject*>(self)))
        vqquick3dobject->qquick3dobject_metaobject_callback = reinterpret_cast<VirtualQQuick3DObject::QQuick3DObject_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQuick3DObject_SuperMetacast(QQuick3DObject* self, const char* param1) {
    return self->QQuick3DObject::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQuick3DObject_OnMetacast(QQuick3DObject* self, intptr_t slot) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self))
        vqquick3dobject->qquick3dobject_metacast_callback = reinterpret_cast<VirtualQQuick3DObject::QQuick3DObject_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQuick3DObject_SuperMetacall(QQuick3DObject* self, int param1, int param2, void** param3) {
    return self->QQuick3DObject::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQuick3DObject_OnMetacall(QQuick3DObject* self, intptr_t slot) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self))
        vqquick3dobject->qquick3dobject_metacall_callback = reinterpret_cast<VirtualQQuick3DObject::QQuick3DObject_Metacall_Callback>(slot);
}

// Base class handler implementation
void QQuick3DObject_SuperMarkAllDirty(QQuick3DObject* self) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self)) {
        vqquick3dobject->QQuick3DObject::markAllDirty();
    } else
        qFatal("Error: Protected virtual method QQuick3DObject::markAllDirty called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DObject_OnMarkAllDirty(QQuick3DObject* self, intptr_t slot) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self))
        vqquick3dobject->qquick3dobject_markalldirty_callback = reinterpret_cast<VirtualQQuick3DObject::QQuick3DObject_MarkAllDirty_Callback>(slot);
}

// Base class handler implementation
void QQuick3DObject_SuperItemChange(QQuick3DObject* self, int param1, const QQuick3DObject__ItemChangeData* param2) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self)) {
        vqquick3dobject->QQuick3DObject::itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    } else
        qFatal("Error: Protected virtual method QQuick3DObject::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DObject_OnItemChange(QQuick3DObject* self, intptr_t slot) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self))
        vqquick3dobject->qquick3dobject_itemchange_callback = reinterpret_cast<VirtualQQuick3DObject::QQuick3DObject_ItemChange_Callback>(slot);
}

// Base class handler implementation
void QQuick3DObject_SuperClassBegin(QQuick3DObject* self) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self)) {
        vqquick3dobject->QQuick3DObject::classBegin();
    } else
        qFatal("Error: Protected virtual method QQuick3DObject::classBegin called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DObject_OnClassBegin(QQuick3DObject* self, intptr_t slot) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self))
        vqquick3dobject->qquick3dobject_classbegin_callback = reinterpret_cast<VirtualQQuick3DObject::QQuick3DObject_ClassBegin_Callback>(slot);
}

// Base class handler implementation
void QQuick3DObject_SuperComponentComplete(QQuick3DObject* self) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self)) {
        vqquick3dobject->QQuick3DObject::componentComplete();
    } else
        qFatal("Error: Protected virtual method QQuick3DObject::componentComplete called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DObject_OnComponentComplete(QQuick3DObject* self, intptr_t slot) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self))
        vqquick3dobject->qquick3dobject_componentcomplete_callback = reinterpret_cast<VirtualQQuick3DObject::QQuick3DObject_ComponentComplete_Callback>(slot);
}

// Base class handler implementation
void QQuick3DObject_SuperPreSync(QQuick3DObject* self) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self)) {
        vqquick3dobject->QQuick3DObject::preSync();
    } else
        qFatal("Error: Protected virtual method QQuick3DObject::preSync called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DObject_OnPreSync(QQuick3DObject* self, intptr_t slot) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self))
        vqquick3dobject->qquick3dobject_presync_callback = reinterpret_cast<VirtualQQuick3DObject::QQuick3DObject_PreSync_Callback>(slot);
}

// Derived class handler implementation
bool QQuick3DObject_Event(QQuick3DObject* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QQuick3DObject_SuperEvent(QQuick3DObject* self, QEvent* event) {
    return self->QQuick3DObject::event(event);
}

// Auxiliary method to allow providing re-implementation
void QQuick3DObject_OnEvent(QQuick3DObject* self, intptr_t slot) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self))
        vqquick3dobject->qquick3dobject_event_callback = reinterpret_cast<VirtualQQuick3DObject::QQuick3DObject_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQuick3DObject_EventFilter(QQuick3DObject* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQuick3DObject_SuperEventFilter(QQuick3DObject* self, QObject* watched, QEvent* event) {
    return self->QQuick3DObject::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQuick3DObject_OnEventFilter(QQuick3DObject* self, intptr_t slot) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self))
        vqquick3dobject->qquick3dobject_eventfilter_callback = reinterpret_cast<VirtualQQuick3DObject::QQuick3DObject_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DObject_TimerEvent(QQuick3DObject* self, QTimerEvent* event) {
    auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self);
    if (vqquick3dobject) {
        vqquick3dobject->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuick3DObject::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DObject_SuperTimerEvent(QQuick3DObject* self, QTimerEvent* event) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self)) {
        vqquick3dobject->QQuick3DObject::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuick3DObject::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DObject_OnTimerEvent(QQuick3DObject* self, intptr_t slot) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self))
        vqquick3dobject->qquick3dobject_timerevent_callback = reinterpret_cast<VirtualQQuick3DObject::QQuick3DObject_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DObject_ChildEvent(QQuick3DObject* self, QChildEvent* event) {
    auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self);
    if (vqquick3dobject) {
        vqquick3dobject->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuick3DObject::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DObject_SuperChildEvent(QQuick3DObject* self, QChildEvent* event) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self)) {
        vqquick3dobject->QQuick3DObject::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuick3DObject::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DObject_OnChildEvent(QQuick3DObject* self, intptr_t slot) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self))
        vqquick3dobject->qquick3dobject_childevent_callback = reinterpret_cast<VirtualQQuick3DObject::QQuick3DObject_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DObject_CustomEvent(QQuick3DObject* self, QEvent* event) {
    auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self);
    if (vqquick3dobject) {
        vqquick3dobject->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuick3DObject::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DObject_SuperCustomEvent(QQuick3DObject* self, QEvent* event) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self)) {
        vqquick3dobject->QQuick3DObject::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuick3DObject::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DObject_OnCustomEvent(QQuick3DObject* self, intptr_t slot) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self))
        vqquick3dobject->qquick3dobject_customevent_callback = reinterpret_cast<VirtualQQuick3DObject::QQuick3DObject_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DObject_ConnectNotify(QQuick3DObject* self, const QMetaMethod* signal) {
    auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self);
    if (vqquick3dobject) {
        vqquick3dobject->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuick3DObject::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DObject_SuperConnectNotify(QQuick3DObject* self, const QMetaMethod* signal) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self)) {
        vqquick3dobject->QQuick3DObject::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuick3DObject::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DObject_OnConnectNotify(QQuick3DObject* self, intptr_t slot) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self))
        vqquick3dobject->qquick3dobject_connectnotify_callback = reinterpret_cast<VirtualQQuick3DObject::QQuick3DObject_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DObject_DisconnectNotify(QQuick3DObject* self, const QMetaMethod* signal) {
    auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self);
    if (vqquick3dobject) {
        vqquick3dobject->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuick3DObject::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DObject_SuperDisconnectNotify(QQuick3DObject* self, const QMetaMethod* signal) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self)) {
        vqquick3dobject->QQuick3DObject::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuick3DObject::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DObject_OnDisconnectNotify(QQuick3DObject* self, intptr_t slot) {
    if (auto* vqquick3dobject = dynamic_cast<VirtualQQuick3DObject*>(self))
        vqquick3dobject->qquick3dobject_disconnectnotify_callback = reinterpret_cast<VirtualQQuick3DObject::QQuick3DObject_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
bool QQuick3DObject_IsComponentComplete(const QQuick3DObject* self) {
    if (auto* vqquick3dobject = const_cast<VirtualQQuick3DObject*>(dynamic_cast<const VirtualQQuick3DObject*>(self))) {
        return vqquick3dobject->VirtualQQuick3DObject::isComponentComplete();
    } else
        qFatal("Error: Protected method QQuick3DObject::isComponentComplete called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QQuick3DObject_Sender(const QQuick3DObject* self) {
    if (auto* vqquick3dobject = const_cast<VirtualQQuick3DObject*>(dynamic_cast<const VirtualQQuick3DObject*>(self))) {
        return vqquick3dobject->VirtualQQuick3DObject::sender();
    } else
        qFatal("Error: Protected method QQuick3DObject::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuick3DObject_SenderSignalIndex(const QQuick3DObject* self) {
    if (auto* vqquick3dobject = const_cast<VirtualQQuick3DObject*>(dynamic_cast<const VirtualQQuick3DObject*>(self))) {
        return vqquick3dobject->VirtualQQuick3DObject::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQuick3DObject::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuick3DObject_Receivers(const QQuick3DObject* self, const char* signal) {
    if (auto* vqquick3dobject = const_cast<VirtualQQuick3DObject*>(dynamic_cast<const VirtualQQuick3DObject*>(self))) {
        return vqquick3dobject->VirtualQQuick3DObject::receivers(signal);
    } else
        qFatal("Error: Protected method QQuick3DObject::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuick3DObject_IsSignalConnected(const QQuick3DObject* self, const QMetaMethod* signal) {
    if (auto* vqquick3dobject = const_cast<VirtualQQuick3DObject*>(dynamic_cast<const VirtualQQuick3DObject*>(self))) {
        return vqquick3dobject->VirtualQQuick3DObject::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQuick3DObject::isSignalConnected called without a directly constructed type");
}

void QQuick3DObject_Delete(QQuick3DObject* self) {
    delete self;
}

QQuick3DObject__ItemChangeData* QQuick3DObject__ItemChangeData_new(const QQuick3DObject__ItemChangeData* other) {
    return new QQuick3DObject::ItemChangeData(*other);
}

QQuick3DObject__ItemChangeData* QQuick3DObject__ItemChangeData_new2(QQuick3DObject__ItemChangeData* other) {
    return new QQuick3DObject::ItemChangeData(std::move(*other));
}

QQuick3DObject__ItemChangeData* QQuick3DObject__ItemChangeData_new3(QQuick3DObject* v) {
    return new QQuick3DObject::ItemChangeData(v);
}

QQuick3DObject__ItemChangeData* QQuick3DObject__ItemChangeData_new4(double v) {
    return new QQuick3DObject::ItemChangeData(static_cast<qreal>(v));
}

QQuick3DObject__ItemChangeData* QQuick3DObject__ItemChangeData_new5(bool v) {
    return new QQuick3DObject::ItemChangeData(v);
}

void QQuick3DObject__ItemChangeData_CopyAssign(QQuick3DObject__ItemChangeData* self, QQuick3DObject__ItemChangeData* other) {
    *self = *other;
}

void QQuick3DObject__ItemChangeData_MoveAssign(QQuick3DObject__ItemChangeData* self, QQuick3DObject__ItemChangeData* other) {
    *self = std::move(*other);
}

QQuick3DObject* QQuick3DObject__ItemChangeData_Item(const QQuick3DObject__ItemChangeData* self) {
    return self->item;
}

void QQuick3DObject__ItemChangeData_SetItem(QQuick3DObject__ItemChangeData* self, QQuick3DObject* item) {
    self->item = item;
}

double QQuick3DObject__ItemChangeData_RealValue(const QQuick3DObject__ItemChangeData* self) {
    return self->realValue;
}

void QQuick3DObject__ItemChangeData_SetRealValue(QQuick3DObject__ItemChangeData* self, double realValue) {
    self->realValue = static_cast<double>(realValue);
}

bool QQuick3DObject__ItemChangeData_BoolValue(const QQuick3DObject__ItemChangeData* self) {
    return self->boolValue;
}

void QQuick3DObject__ItemChangeData_SetBoolValue(QQuick3DObject__ItemChangeData* self, bool boolValue) {
    self->boolValue = boolValue;
}

void QQuick3DObject__ItemChangeData_Delete(QQuick3DObject__ItemChangeData* self) {
    delete self;
}
