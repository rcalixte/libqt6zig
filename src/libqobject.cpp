#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QObjectData>
#include <QSignalBlocker>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qobject.h>
#include "libqobject.h"
#include "libqobject.hxx"

// This method's return type was changed from non-const to const in Qt 6.9
#if QT_VERSION >= QT_VERSION_CHECK(6, 9, 0)
const QMetaObject* QObjectData_DynamicMetaObject(const QObjectData* self) {
#else
QMetaObject* QObjectData_DynamicMetaObject(const QObjectData* self) {
#endif
    return self->dynamicMetaObject();
}

void QObjectData_Delete(QObjectData* self) {
    delete self;
}

QObject* QObject_new() {
    return new VirtualQObject();
}

QObject* QObject_new2(QObject* parent) {
    return new VirtualQObject(parent);
}

QMetaObject* QObject_MetaObject(const QObject* self) {
    return (QMetaObject*)self->metaObject();
}

void* QObject_Metacast(QObject* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QObject_Metacall(QObject* self, int param1, int param2, void** param3) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QObject_OnMetacall(QObject* self, intptr_t slot) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->setQObject_Metacall_Callback(reinterpret_cast<VirtualQObject::QObject_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QObject_QBaseMetacall(QObject* self, int param1, int param2, void** param3) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->setQObject_Metacall_IsBase(true);
        return vqobject->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QObject_Tr(const char* s) {
    QString _ret = QObject::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QObject_ObjectName(const QObject* self) {
    QString _ret = self->objectName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QObject_SetObjectName(QObject* self, char* name) {
    self->setObjectName(QAnyStringView(name));
}

bool QObject_IsWidgetType(const QObject* self) {
    return self->isWidgetType();
}

bool QObject_IsWindowType(const QObject* self) {
    return self->isWindowType();
}

bool QObject_IsQuickItemType(const QObject* self) {
    return self->isQuickItemType();
}

bool QObject_SignalsBlocked(const QObject* self) {
    return self->signalsBlocked();
}

bool QObject_BlockSignals(QObject* self, bool b) {
    return self->blockSignals(b);
}

QThread* QObject_Thread(const QObject* self) {
    return self->thread();
}

void QObject_MoveToThread(QObject* self, QThread* thread) {
    self->moveToThread(thread);
}

int QObject_StartTimer(QObject* self, int interval) {
    return self->startTimer(static_cast<int>(interval));
}

void QObject_KillTimer(QObject* self, int id) {
    self->killTimer(static_cast<int>(id));
}

libqt_list /* of QObject* */ QObject_Children(const QObject* self) {
    const QObjectList& _ret = self->children();
    // Convert QList<> from C++ memory to manually-managed C memory
    QObject** _arr = static_cast<QObject**>(malloc(sizeof(QObject*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QObject_SetParent(QObject* self, QObject* parent) {
    self->setParent(parent);
}

void QObject_InstallEventFilter(QObject* self, QObject* filterObj) {
    self->installEventFilter(filterObj);
}

void QObject_RemoveEventFilter(QObject* self, QObject* obj) {
    self->removeEventFilter(obj);
}

QMetaObject__Connection* QObject_Connect(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method) {
    return new QMetaObject::Connection(QObject::connect(sender, *signal, receiver, *method));
}

QMetaObject__Connection* QObject_Connect2(const QObject* self, QObject* sender, const char* signal, const char* member) {
    return new QMetaObject::Connection(self->connect(sender, signal, member));
}

bool QObject_Disconnect(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member) {
    return QObject::disconnect(sender, *signal, receiver, *member);
}

bool QObject_DisconnectWithQMetaObjectConnection(QMetaObject__Connection* param1) {
    return QObject::disconnect(*param1);
}

void QObject_DumpObjectTree(const QObject* self) {
    self->dumpObjectTree();
}

void QObject_DumpObjectInfo(const QObject* self) {
    self->dumpObjectInfo();
}

bool QObject_SetProperty(QObject* self, const char* name, QVariant* value) {
    return self->setProperty(name, *value);
}

QVariant* QObject_Property(const QObject* self, const char* name) {
    return new QVariant(self->property(name));
}

libqt_list /* of libqt_string */ QObject_DynamicPropertyNames(const QObject* self) {
    QList<QByteArray> _ret = self->dynamicPropertyNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_qb.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QBindingStorage* QObject_BindingStorage(QObject* self) {
    return self->bindingStorage();
}

QBindingStorage* QObject_BindingStorage2(const QObject* self) {
    return (QBindingStorage*)self->bindingStorage();
}

void QObject_Destroyed(QObject* self) {
    self->destroyed();
}

void QObject_Connect_Destroyed(QObject* self, intptr_t slot) {
    void (*slotFunc)(QObject*) = reinterpret_cast<void (*)(QObject*)>(slot);
    QObject::connect(self, &QObject::destroyed, [self, slotFunc]() {
        slotFunc(self);
    });
}

QObject* QObject_Parent(const QObject* self) {
    return self->parent();
}

bool QObject_Inherits(const QObject* self, const char* classname) {
    return self->inherits(classname);
}

void QObject_DeleteLater(QObject* self) {
    self->deleteLater();
}

libqt_string QObject_Tr2(const char* s, const char* c) {
    QString _ret = QObject::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QObject_Tr3(const char* s, const char* c, int n) {
    QString _ret = QObject::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QObject_StartTimer2(QObject* self, int interval, int timerType) {
    return self->startTimer(static_cast<int>(interval), static_cast<Qt::TimerType>(timerType));
}

QMetaObject__Connection* QObject_Connect5(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, int typeVal) {
    return new QMetaObject::Connection(QObject::connect(sender, *signal, receiver, *method, static_cast<Qt::ConnectionType>(typeVal)));
}

QMetaObject__Connection* QObject_Connect4(const QObject* self, QObject* sender, const char* signal, const char* member, int typeVal) {
    return new QMetaObject::Connection(self->connect(sender, signal, member, static_cast<Qt::ConnectionType>(typeVal)));
}

void QObject_Destroyed1(QObject* self, QObject* param1) {
    self->destroyed(param1);
}

void QObject_Connect_Destroyed1(QObject* self, intptr_t slot) {
    void (*slotFunc)(QObject*, QObject*) = reinterpret_cast<void (*)(QObject*, QObject*)>(slot);
    QObject::connect(self, &QObject::destroyed, [self, slotFunc](QObject* param1) {
        QObject* sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

// Derived class handler implementation
bool QObject_Event(QObject* self, QEvent* event) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        return vqobject->event(event);
    } else {
        return vqobject->event(event);
    }
}

// Base class handler implementation
bool QObject_QBaseEvent(QObject* self, QEvent* event) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->setQObject_Event_IsBase(true);
        return vqobject->event(event);
    } else {
        return vqobject->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QObject_OnEvent(QObject* self, intptr_t slot) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->setQObject_Event_Callback(reinterpret_cast<VirtualQObject::QObject_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QObject_EventFilter(QObject* self, QObject* watched, QEvent* event) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        return vqobject->eventFilter(watched, event);
    } else {
        return vqobject->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QObject_QBaseEventFilter(QObject* self, QObject* watched, QEvent* event) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->setQObject_EventFilter_IsBase(true);
        return vqobject->eventFilter(watched, event);
    } else {
        return vqobject->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QObject_OnEventFilter(QObject* self, intptr_t slot) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->setQObject_EventFilter_Callback(reinterpret_cast<VirtualQObject::QObject_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QObject_TimerEvent(QObject* self, QTimerEvent* event) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->timerEvent(event);
    } else {
        vqobject->timerEvent(event);
    }
}

// Base class handler implementation
void QObject_QBaseTimerEvent(QObject* self, QTimerEvent* event) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->setQObject_TimerEvent_IsBase(true);
        vqobject->timerEvent(event);
    } else {
        vqobject->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QObject_OnTimerEvent(QObject* self, intptr_t slot) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->setQObject_TimerEvent_Callback(reinterpret_cast<VirtualQObject::QObject_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QObject_ChildEvent(QObject* self, QChildEvent* event) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->childEvent(event);
    } else {
        vqobject->childEvent(event);
    }
}

// Base class handler implementation
void QObject_QBaseChildEvent(QObject* self, QChildEvent* event) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->setQObject_ChildEvent_IsBase(true);
        vqobject->childEvent(event);
    } else {
        vqobject->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QObject_OnChildEvent(QObject* self, intptr_t slot) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->setQObject_ChildEvent_Callback(reinterpret_cast<VirtualQObject::QObject_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QObject_CustomEvent(QObject* self, QEvent* event) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->customEvent(event);
    } else {
        vqobject->customEvent(event);
    }
}

// Base class handler implementation
void QObject_QBaseCustomEvent(QObject* self, QEvent* event) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->setQObject_CustomEvent_IsBase(true);
        vqobject->customEvent(event);
    } else {
        vqobject->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QObject_OnCustomEvent(QObject* self, intptr_t slot) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->setQObject_CustomEvent_Callback(reinterpret_cast<VirtualQObject::QObject_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QObject_ConnectNotify(QObject* self, QMetaMethod* signal) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->connectNotify(*signal);
    } else {
        vqobject->connectNotify(*signal);
    }
}

// Base class handler implementation
void QObject_QBaseConnectNotify(QObject* self, QMetaMethod* signal) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->setQObject_ConnectNotify_IsBase(true);
        vqobject->connectNotify(*signal);
    } else {
        vqobject->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QObject_OnConnectNotify(QObject* self, intptr_t slot) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->setQObject_ConnectNotify_Callback(reinterpret_cast<VirtualQObject::QObject_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QObject_DisconnectNotify(QObject* self, QMetaMethod* signal) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->disconnectNotify(*signal);
    } else {
        vqobject->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QObject_QBaseDisconnectNotify(QObject* self, QMetaMethod* signal) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->setQObject_DisconnectNotify_IsBase(true);
        vqobject->disconnectNotify(*signal);
    } else {
        vqobject->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QObject_OnDisconnectNotify(QObject* self, intptr_t slot) {
    if (auto* vqobject = dynamic_cast<VirtualQObject*>(self)) {
        vqobject->setQObject_DisconnectNotify_Callback(reinterpret_cast<VirtualQObject::QObject_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QObject_Sender(const QObject* self) {
    if (auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self))) {
        return vqobject->sender();
    } else {
        return vqobject->sender();
    }
}

// Base class handler implementation
QObject* QObject_QBaseSender(const QObject* self) {
    if (auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self))) {
        vqobject->setQObject_Sender_IsBase(true);
        return vqobject->sender();
    } else {
        return vqobject->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QObject_OnSender(const QObject* self, intptr_t slot) {
    if (auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self))) {
        vqobject->setQObject_Sender_Callback(reinterpret_cast<VirtualQObject::QObject_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QObject_SenderSignalIndex(const QObject* self) {
    if (auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self))) {
        return vqobject->senderSignalIndex();
    } else {
        return vqobject->senderSignalIndex();
    }
}

// Base class handler implementation
int QObject_QBaseSenderSignalIndex(const QObject* self) {
    if (auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self))) {
        vqobject->setQObject_SenderSignalIndex_IsBase(true);
        return vqobject->senderSignalIndex();
    } else {
        return vqobject->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QObject_OnSenderSignalIndex(const QObject* self, intptr_t slot) {
    if (auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self))) {
        vqobject->setQObject_SenderSignalIndex_Callback(reinterpret_cast<VirtualQObject::QObject_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QObject_Receivers(const QObject* self, const char* signal) {
    if (auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self))) {
        return vqobject->receivers(signal);
    } else {
        return vqobject->receivers(signal);
    }
}

// Base class handler implementation
int QObject_QBaseReceivers(const QObject* self, const char* signal) {
    if (auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self))) {
        vqobject->setQObject_Receivers_IsBase(true);
        return vqobject->receivers(signal);
    } else {
        return vqobject->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QObject_OnReceivers(const QObject* self, intptr_t slot) {
    if (auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self))) {
        vqobject->setQObject_Receivers_Callback(reinterpret_cast<VirtualQObject::QObject_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QObject_IsSignalConnected(const QObject* self, QMetaMethod* signal) {
    if (auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self))) {
        return vqobject->isSignalConnected(*signal);
    } else {
        return vqobject->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QObject_QBaseIsSignalConnected(const QObject* self, QMetaMethod* signal) {
    if (auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self))) {
        vqobject->setQObject_IsSignalConnected_IsBase(true);
        return vqobject->isSignalConnected(*signal);
    } else {
        return vqobject->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QObject_OnIsSignalConnected(const QObject* self, intptr_t slot) {
    if (auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self))) {
        vqobject->setQObject_IsSignalConnected_Callback(reinterpret_cast<VirtualQObject::QObject_IsSignalConnected_Callback>(slot));
    }
}

void QObject_Delete(QObject* self) {
    delete self;
}

QSignalBlocker* QSignalBlocker_new(QObject* o) {
    return new QSignalBlocker(o);
}

QSignalBlocker* QSignalBlocker_new2(QObject* o) {
    return new QSignalBlocker(*o);
}

void QSignalBlocker_Reblock(QSignalBlocker* self) {
    self->reblock();
}

void QSignalBlocker_Unblock(QSignalBlocker* self) {
    self->unblock();
}

void QSignalBlocker_Delete(QSignalBlocker* self) {
    delete self;
}
