#include <QChildEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerMetaDataBaseInterface>
#include <QDesignerMetaDataBaseItemInterface>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <abstractmetadatabase.h>
#include "libabstractmetadatabase.h"
#include "libabstractmetadatabase.hxx"

QDesignerMetaDataBaseItemInterface* QDesignerMetaDataBaseItemInterface_new() {
    return new VirtualQDesignerMetaDataBaseItemInterface();
}

libqt_string QDesignerMetaDataBaseItemInterface_Name(const QDesignerMetaDataBaseItemInterface* self) {
    auto _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerMetaDataBaseItemInterface_SetName(QDesignerMetaDataBaseItemInterface* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_list /* of QWidget* */ QDesignerMetaDataBaseItemInterface_TabOrder(const QDesignerMetaDataBaseItemInterface* self) {
    QList<QWidget*> _ret = self->tabOrder();
    // Convert QList<> from C++ memory to manually-managed C memory
    QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QDesignerMetaDataBaseItemInterface_SetTabOrder(QDesignerMetaDataBaseItemInterface* self, const libqt_list /* of QWidget* */ tabOrder) {
    QList<QWidget*> tabOrder_QList;
    tabOrder_QList.reserve(tabOrder.len);
    QWidget** tabOrder_arr = static_cast<QWidget**>(tabOrder.data);
    for (size_t i = 0; i < tabOrder.len; ++i) {
        tabOrder_QList.push_back(tabOrder_arr[i]);
    }
    self->setTabOrder(tabOrder_QList);
}

bool QDesignerMetaDataBaseItemInterface_Enabled(const QDesignerMetaDataBaseItemInterface* self) {
    return self->enabled();
}

void QDesignerMetaDataBaseItemInterface_SetEnabled(QDesignerMetaDataBaseItemInterface* self, bool b) {
    self->setEnabled(b);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseItemInterface_OnName(QDesignerMetaDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseiteminterface = const_cast<VirtualQDesignerMetaDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseItemInterface*>(self)))
        vqdesignermetadatabaseiteminterface->qdesignermetadatabaseiteminterface_name_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseItemInterface::QDesignerMetaDataBaseItemInterface_Name_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseItemInterface_OnSetName(QDesignerMetaDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseiteminterface = dynamic_cast<VirtualQDesignerMetaDataBaseItemInterface*>(self))
        vqdesignermetadatabaseiteminterface->qdesignermetadatabaseiteminterface_setname_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseItemInterface::QDesignerMetaDataBaseItemInterface_SetName_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseItemInterface_OnTabOrder(QDesignerMetaDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseiteminterface = const_cast<VirtualQDesignerMetaDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseItemInterface*>(self)))
        vqdesignermetadatabaseiteminterface->qdesignermetadatabaseiteminterface_taborder_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseItemInterface::QDesignerMetaDataBaseItemInterface_TabOrder_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseItemInterface_OnSetTabOrder(QDesignerMetaDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseiteminterface = dynamic_cast<VirtualQDesignerMetaDataBaseItemInterface*>(self))
        vqdesignermetadatabaseiteminterface->qdesignermetadatabaseiteminterface_settaborder_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseItemInterface::QDesignerMetaDataBaseItemInterface_SetTabOrder_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseItemInterface_OnEnabled(QDesignerMetaDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseiteminterface = const_cast<VirtualQDesignerMetaDataBaseItemInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseItemInterface*>(self)))
        vqdesignermetadatabaseiteminterface->qdesignermetadatabaseiteminterface_enabled_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseItemInterface::QDesignerMetaDataBaseItemInterface_Enabled_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseItemInterface_OnSetEnabled(QDesignerMetaDataBaseItemInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseiteminterface = dynamic_cast<VirtualQDesignerMetaDataBaseItemInterface*>(self))
        vqdesignermetadatabaseiteminterface->qdesignermetadatabaseiteminterface_setenabled_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseItemInterface::QDesignerMetaDataBaseItemInterface_SetEnabled_Callback>(slot);
}

void QDesignerMetaDataBaseItemInterface_Delete(QDesignerMetaDataBaseItemInterface* self) {
    delete self;
}

QDesignerMetaDataBaseInterface* QDesignerMetaDataBaseInterface_new() {
    return new VirtualQDesignerMetaDataBaseInterface();
}

QDesignerMetaDataBaseInterface* QDesignerMetaDataBaseInterface_new2(QObject* parent) {
    return new VirtualQDesignerMetaDataBaseInterface(parent);
}

QMetaObject* QDesignerMetaDataBaseInterface_MetaObject(const QDesignerMetaDataBaseInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDesignerMetaDataBaseInterface_Metacast(QDesignerMetaDataBaseInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDesignerMetaDataBaseInterface_Metacall(QDesignerMetaDataBaseInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDesignerMetaDataBaseInterface_Tr(const char* s) {
    auto _ret = QDesignerMetaDataBaseInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDesignerMetaDataBaseItemInterface* QDesignerMetaDataBaseInterface_Item(const QDesignerMetaDataBaseInterface* self, QObject* object) {
    return self->item(object);
}

void QDesignerMetaDataBaseInterface_Add(QDesignerMetaDataBaseInterface* self, QObject* object) {
    self->add(object);
}

void QDesignerMetaDataBaseInterface_Remove(QDesignerMetaDataBaseInterface* self, QObject* object) {
    self->remove(object);
}

libqt_list /* of QObject* */ QDesignerMetaDataBaseInterface_Objects(const QDesignerMetaDataBaseInterface* self) {
    QList<QObject*> _ret = self->objects();
    // Convert QList<> from C++ memory to manually-managed C memory
    QObject** _arr = static_cast<QObject**>(malloc(sizeof(QObject*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QDesignerFormEditorInterface* QDesignerMetaDataBaseInterface_Core(const QDesignerMetaDataBaseInterface* self) {
    return self->core();
}

void QDesignerMetaDataBaseInterface_Changed(QDesignerMetaDataBaseInterface* self) {
    self->changed();
}

void QDesignerMetaDataBaseInterface_Connect_Changed(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerMetaDataBaseInterface*) = reinterpret_cast<void (*)(QDesignerMetaDataBaseInterface*)>(slot);
    QDesignerMetaDataBaseInterface::connect(self,
                                            static_cast<void (QDesignerMetaDataBaseInterface::*)()>(&QDesignerMetaDataBaseInterface::changed),
                                            [self, slotFunc]() {
                                                slotFunc(self);
                                            });
}

libqt_string QDesignerMetaDataBaseInterface_Tr2(const char* s, const char* c) {
    auto _ret = QDesignerMetaDataBaseInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerMetaDataBaseInterface_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDesignerMetaDataBaseInterface::tr(s, c, static_cast<int>(n));
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
QMetaObject* QDesignerMetaDataBaseInterface_SuperMetaObject(const QDesignerMetaDataBaseInterface* self) {
    return (QMetaObject*)self->QDesignerMetaDataBaseInterface::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnMetaObject(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self)))
        vqdesignermetadatabaseinterface->qdesignermetadatabaseinterface_metaobject_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDesignerMetaDataBaseInterface_SuperMetacast(QDesignerMetaDataBaseInterface* self, const char* param1) {
    return self->QDesignerMetaDataBaseInterface::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnMetacast(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self))
        vqdesignermetadatabaseinterface->qdesignermetadatabaseinterface_metacast_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDesignerMetaDataBaseInterface_SuperMetacall(QDesignerMetaDataBaseInterface* self, int param1, int param2, void** param3) {
    return self->QDesignerMetaDataBaseInterface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnMetacall(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self))
        vqdesignermetadatabaseinterface->qdesignermetadatabaseinterface_metacall_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnItem(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self)))
        vqdesignermetadatabaseinterface->qdesignermetadatabaseinterface_item_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_Item_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnAdd(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self))
        vqdesignermetadatabaseinterface->qdesignermetadatabaseinterface_add_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_Add_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnRemove(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self))
        vqdesignermetadatabaseinterface->qdesignermetadatabaseinterface_remove_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_Remove_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnObjects(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self)))
        vqdesignermetadatabaseinterface->qdesignermetadatabaseinterface_objects_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_Objects_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnCore(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self)))
        vqdesignermetadatabaseinterface->qdesignermetadatabaseinterface_core_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_Core_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerMetaDataBaseInterface_Event(QDesignerMetaDataBaseInterface* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QDesignerMetaDataBaseInterface_SuperEvent(QDesignerMetaDataBaseInterface* self, QEvent* event) {
    return self->QDesignerMetaDataBaseInterface::event(event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnEvent(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self))
        vqdesignermetadatabaseinterface->qdesignermetadatabaseinterface_event_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_Event_Callback>(slot);
}

// Derived class handler implementation
bool QDesignerMetaDataBaseInterface_EventFilter(QDesignerMetaDataBaseInterface* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDesignerMetaDataBaseInterface_SuperEventFilter(QDesignerMetaDataBaseInterface* self, QObject* watched, QEvent* event) {
    return self->QDesignerMetaDataBaseInterface::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnEventFilter(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self))
        vqdesignermetadatabaseinterface->qdesignermetadatabaseinterface_eventfilter_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDesignerMetaDataBaseInterface_TimerEvent(QDesignerMetaDataBaseInterface* self, QTimerEvent* event) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface) {
        vqdesignermetadatabaseinterface->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerMetaDataBaseInterface::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerMetaDataBaseInterface_SuperTimerEvent(QDesignerMetaDataBaseInterface* self, QTimerEvent* event) {
    if (auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self)) {
        vqdesignermetadatabaseinterface->QDesignerMetaDataBaseInterface::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerMetaDataBaseInterface::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnTimerEvent(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self))
        vqdesignermetadatabaseinterface->qdesignermetadatabaseinterface_timerevent_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerMetaDataBaseInterface_ChildEvent(QDesignerMetaDataBaseInterface* self, QChildEvent* event) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface) {
        vqdesignermetadatabaseinterface->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerMetaDataBaseInterface::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerMetaDataBaseInterface_SuperChildEvent(QDesignerMetaDataBaseInterface* self, QChildEvent* event) {
    if (auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self)) {
        vqdesignermetadatabaseinterface->QDesignerMetaDataBaseInterface::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerMetaDataBaseInterface::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnChildEvent(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self))
        vqdesignermetadatabaseinterface->qdesignermetadatabaseinterface_childevent_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerMetaDataBaseInterface_CustomEvent(QDesignerMetaDataBaseInterface* self, QEvent* event) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface) {
        vqdesignermetadatabaseinterface->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDesignerMetaDataBaseInterface::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerMetaDataBaseInterface_SuperCustomEvent(QDesignerMetaDataBaseInterface* self, QEvent* event) {
    if (auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self)) {
        vqdesignermetadatabaseinterface->QDesignerMetaDataBaseInterface::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDesignerMetaDataBaseInterface::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnCustomEvent(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self))
        vqdesignermetadatabaseinterface->qdesignermetadatabaseinterface_customevent_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDesignerMetaDataBaseInterface_ConnectNotify(QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface) {
        vqdesignermetadatabaseinterface->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerMetaDataBaseInterface::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerMetaDataBaseInterface_SuperConnectNotify(QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self)) {
        vqdesignermetadatabaseinterface->QDesignerMetaDataBaseInterface::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerMetaDataBaseInterface::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnConnectNotify(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self))
        vqdesignermetadatabaseinterface->qdesignermetadatabaseinterface_connectnotify_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDesignerMetaDataBaseInterface_DisconnectNotify(QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal) {
    auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self);
    if (vqdesignermetadatabaseinterface) {
        vqdesignermetadatabaseinterface->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDesignerMetaDataBaseInterface::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDesignerMetaDataBaseInterface_SuperDisconnectNotify(QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self)) {
        vqdesignermetadatabaseinterface->QDesignerMetaDataBaseInterface::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDesignerMetaDataBaseInterface::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDesignerMetaDataBaseInterface_OnDisconnectNotify(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
    if (auto* vqdesignermetadatabaseinterface = dynamic_cast<VirtualQDesignerMetaDataBaseInterface*>(self))
        vqdesignermetadatabaseinterface->qdesignermetadatabaseinterface_disconnectnotify_callback = reinterpret_cast<VirtualQDesignerMetaDataBaseInterface::QDesignerMetaDataBaseInterface_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QDesignerMetaDataBaseInterface_Sender(const QDesignerMetaDataBaseInterface* self) {
    if (auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self))) {
        return vqdesignermetadatabaseinterface->VirtualQDesignerMetaDataBaseInterface::sender();
    } else
        qFatal("Error: Protected method QDesignerMetaDataBaseInterface::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerMetaDataBaseInterface_SenderSignalIndex(const QDesignerMetaDataBaseInterface* self) {
    if (auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self))) {
        return vqdesignermetadatabaseinterface->VirtualQDesignerMetaDataBaseInterface::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDesignerMetaDataBaseInterface::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDesignerMetaDataBaseInterface_Receivers(const QDesignerMetaDataBaseInterface* self, const char* signal) {
    if (auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self))) {
        return vqdesignermetadatabaseinterface->VirtualQDesignerMetaDataBaseInterface::receivers(signal);
    } else
        qFatal("Error: Protected method QDesignerMetaDataBaseInterface::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDesignerMetaDataBaseInterface_IsSignalConnected(const QDesignerMetaDataBaseInterface* self, const QMetaMethod* signal) {
    if (auto* vqdesignermetadatabaseinterface = const_cast<VirtualQDesignerMetaDataBaseInterface*>(dynamic_cast<const VirtualQDesignerMetaDataBaseInterface*>(self))) {
        return vqdesignermetadatabaseinterface->VirtualQDesignerMetaDataBaseInterface::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDesignerMetaDataBaseInterface::isSignalConnected called without a directly constructed type");
}

void QDesignerMetaDataBaseInterface_Delete(QDesignerMetaDataBaseInterface* self) {
    delete self;
}
