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
#define WORKAROUND_INNER_CLASS_DEFINITION_Disambiguated_t
#include <qobject.h>
#include "libqobject.h"
#include "libqobject.hxx"

QObject* QObjectData_QPtr(const QObjectData* self) {
    return self->q_ptr;
}

void QObjectData_SetQPtr(QObjectData* self, QObject* q_ptr) {
    self->q_ptr = q_ptr;
}

QObject* QObjectData_Parent(const QObjectData* self) {
    return self->parent;
}

void QObjectData_SetParent(QObjectData* self, QObject* parent) {
    self->parent = parent;
}

libqt_list /* of QObject* */ QObjectData_Children(const QObjectData* self) {
    QList<QObject*> children_ret = self->children;
    // Convert QList<> from C++ memory to manually-managed C memory
    QObject** children_arr = static_cast<QObject**>(malloc(sizeof(QObject*) * (children_ret.size() + 1)));
    for (qsizetype i = 0; i < children_ret.size(); ++i) {
        children_arr[i] = children_ret[i];
    }
    libqt_list children_out;
    children_out.len = children_ret.size();
    children_out.data = static_cast<void*>(children_arr);
    return children_out;
}

void QObjectData_SetChildren(QObjectData* self, libqt_list /* of QObject* */ children) {
    QList<QObject*> children_QList;
    children_QList.reserve(children.len);
    QObject** children_arr = static_cast<QObject**>(children.data);
    for (size_t i = 0; i < children.len; ++i) {
        children_QList.push_back(children_arr[i]);
    }
    self->children = children_QList;
}

unsigned int QObjectData_IsWidget(const QObjectData* self) {
    return static_cast<unsigned int>(self->isWidget);
}

void QObjectData_SetIsWidget(QObjectData* self, unsigned int isWidget) {
    self->isWidget = static_cast<uint>(isWidget);
}

unsigned int QObjectData_BlockSig(const QObjectData* self) {
    return static_cast<unsigned int>(self->blockSig);
}

void QObjectData_SetBlockSig(QObjectData* self, unsigned int blockSig) {
    self->blockSig = static_cast<uint>(blockSig);
}

unsigned int QObjectData_WasDeleted(const QObjectData* self) {
    return static_cast<unsigned int>(self->wasDeleted);
}

void QObjectData_SetWasDeleted(QObjectData* self, unsigned int wasDeleted) {
    self->wasDeleted = static_cast<uint>(wasDeleted);
}

unsigned int QObjectData_IsDeletingChildren(const QObjectData* self) {
    return static_cast<unsigned int>(self->isDeletingChildren);
}

void QObjectData_SetIsDeletingChildren(QObjectData* self, unsigned int isDeletingChildren) {
    self->isDeletingChildren = static_cast<uint>(isDeletingChildren);
}

unsigned int QObjectData_SendChildEvents(const QObjectData* self) {
    return static_cast<unsigned int>(self->sendChildEvents);
}

void QObjectData_SetSendChildEvents(QObjectData* self, unsigned int sendChildEvents) {
    self->sendChildEvents = static_cast<uint>(sendChildEvents);
}

unsigned int QObjectData_ReceiveChildEvents(const QObjectData* self) {
    return static_cast<unsigned int>(self->receiveChildEvents);
}

void QObjectData_SetReceiveChildEvents(QObjectData* self, unsigned int receiveChildEvents) {
    self->receiveChildEvents = static_cast<uint>(receiveChildEvents);
}

unsigned int QObjectData_IsWindow(const QObjectData* self) {
    return static_cast<unsigned int>(self->isWindow);
}

void QObjectData_SetIsWindow(QObjectData* self, unsigned int isWindow) {
    self->isWindow = static_cast<uint>(isWindow);
}

unsigned int QObjectData_DeleteLaterCalled(const QObjectData* self) {
    return static_cast<unsigned int>(self->deleteLaterCalled);
}

void QObjectData_SetDeleteLaterCalled(QObjectData* self, unsigned int deleteLaterCalled) {
    self->deleteLaterCalled = static_cast<uint>(deleteLaterCalled);
}

unsigned int QObjectData_IsQuickItem(const QObjectData* self) {
    return static_cast<unsigned int>(self->isQuickItem);
}

void QObjectData_SetIsQuickItem(QObjectData* self, unsigned int isQuickItem) {
    self->isQuickItem = static_cast<uint>(isQuickItem);
}

unsigned int QObjectData_WillBeWidget(const QObjectData* self) {
    return static_cast<unsigned int>(self->willBeWidget);
}

void QObjectData_SetWillBeWidget(QObjectData* self, unsigned int willBeWidget) {
    self->willBeWidget = static_cast<uint>(willBeWidget);
}

unsigned int QObjectData_WasWidget(const QObjectData* self) {
    return static_cast<unsigned int>(self->wasWidget);
}

void QObjectData_SetWasWidget(QObjectData* self, unsigned int wasWidget) {
    self->wasWidget = static_cast<uint>(wasWidget);
}

unsigned int QObjectData_ReceiveParentEvents(const QObjectData* self) {
    return static_cast<unsigned int>(self->receiveParentEvents);
}

void QObjectData_SetReceiveParentEvents(QObjectData* self, unsigned int receiveParentEvents) {
    self->receiveParentEvents = static_cast<uint>(receiveParentEvents);
}

unsigned int QObjectData_Unused(const QObjectData* self) {
    return static_cast<unsigned int>(self->unused);
}

void QObjectData_SetUnused(QObjectData* self, unsigned int unused) {
    self->unused = static_cast<uint>(unused);
}

QBindingStorage* QObjectData_BindingStorage(const QObjectData* self) {
    return new QBindingStorage(self->bindingStorage);
}

void QObjectData_SetBindingStorage(QObjectData* self, QBindingStorage* bindingStorage) {
    self->bindingStorage = *bindingStorage;
}

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
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQObject*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QObject_OnMetacall(QObject* self, intptr_t slot) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_Metacall_Callback(reinterpret_cast<VirtualQObject::QObject_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QObject_QBaseMetacall(QObject* self, int param1, int param2, void** param3) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_Metacall_IsBase(true);
        return vqobject->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQObject*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QObject_Tr(const char* s) {
    QString _ret = QObject::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QObject_Event(QObject* self, QEvent* event) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        return self->event(event);
    } else {
        return ((VirtualQObject*)self)->event(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QObject_OnEvent(QObject* self, intptr_t slot) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_Event_Callback(reinterpret_cast<VirtualQObject::QObject_Event_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QObject_QBaseEvent(QObject* self, QEvent* event) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_Event_IsBase(true);
        return vqobject->event(event);
    } else {
        return ((VirtualQObject*)self)->event(event);
    }
}

bool QObject_EventFilter(QObject* self, QObject* watched, QEvent* event) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        return self->eventFilter(watched, event);
    } else {
        return ((VirtualQObject*)self)->eventFilter(watched, event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QObject_OnEventFilter(QObject* self, intptr_t slot) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_EventFilter_Callback(reinterpret_cast<VirtualQObject::QObject_EventFilter_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QObject_QBaseEventFilter(QObject* self, QObject* watched, QEvent* event) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_EventFilter_IsBase(true);
        return vqobject->eventFilter(watched, event);
    } else {
        return ((VirtualQObject*)self)->eventFilter(watched, event);
    }
}

libqt_string QObject_ObjectName(const QObject* self) {
    QString _ret = self->objectName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QObject_SetObjectName(QObject* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setObjectName(QAnyStringView(name_QString));
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

bool QObject_MoveToThread(QObject* self, QThread* thread) {
    return self->moveToThread(thread);
}

int QObject_StartTimer(QObject* self, int interval) {
    return self->startTimer(static_cast<int>(interval));
}

void QObject_KillTimer(QObject* self, int id) {
    self->killTimer(static_cast<int>(id));
}

void QObject_KillTimer2(QObject* self, int id) {
    self->killTimer(static_cast<Qt::TimerId>(id));
}

libqt_list /* of QObject* */ QObject_Children(const QObject* self) {
    const QList<QObject*>& _ret = self->children();
    // Convert QList<> from C++ memory to manually-managed C memory
    QObject** _arr = static_cast<QObject**>(malloc(sizeof(QObject*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
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

QMetaObject__Connection* QObject_Connect(const QObject* sender, const QMetaMethod* signal, const QObject* receiver, const QMetaMethod* method) {
    return new QMetaObject::Connection(QObject::connect(sender, *signal, receiver, *method));
}

QMetaObject__Connection* QObject_Connect2(const QObject* self, const QObject* sender, const char* signal, const char* member) {
    return new QMetaObject::Connection(self->connect(sender, signal, member));
}

bool QObject_Disconnect(const QObject* sender, const QMetaMethod* signal, const QObject* receiver, const QMetaMethod* member) {
    return QObject::disconnect(sender, *signal, receiver, *member);
}

bool QObject_Disconnect2(const QMetaObject__Connection* param1) {
    return QObject::disconnect(*param1);
}

void QObject_DumpObjectTree(const QObject* self) {
    self->dumpObjectTree();
}

void QObject_DumpObjectInfo(const QObject* self) {
    self->dumpObjectInfo();
}

bool QObject_SetProperty(QObject* self, const char* name, const QVariant* value) {
    return self->setProperty(name, *value);
}

QVariant* QObject_Property(const QObject* self, const char* name) {
    return new QVariant(self->property(name));
}

libqt_list /* of libqt_string */ QObject_DynamicPropertyNames(const QObject* self) {
    QList<QByteArray> _ret = self->dynamicPropertyNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
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

void QObject_TimerEvent(QObject* self, QTimerEvent* event) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->timerEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QObject_OnTimerEvent(QObject* self, intptr_t slot) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_TimerEvent_Callback(reinterpret_cast<VirtualQObject::QObject_TimerEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QObject_QBaseTimerEvent(QObject* self, QTimerEvent* event) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_TimerEvent_IsBase(true);
        vqobject->timerEvent(event);
    }
}

void QObject_ChildEvent(QObject* self, QChildEvent* event) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->childEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QObject_OnChildEvent(QObject* self, intptr_t slot) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_ChildEvent_Callback(reinterpret_cast<VirtualQObject::QObject_ChildEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QObject_QBaseChildEvent(QObject* self, QChildEvent* event) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_ChildEvent_IsBase(true);
        vqobject->childEvent(event);
    }
}

void QObject_CustomEvent(QObject* self, QEvent* event) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->customEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QObject_OnCustomEvent(QObject* self, intptr_t slot) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_CustomEvent_Callback(reinterpret_cast<VirtualQObject::QObject_CustomEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QObject_QBaseCustomEvent(QObject* self, QEvent* event) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_CustomEvent_IsBase(true);
        vqobject->customEvent(event);
    }
}

void QObject_ConnectNotify(QObject* self, const QMetaMethod* signal) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->connectNotify(*signal);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QObject_OnConnectNotify(QObject* self, intptr_t slot) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_ConnectNotify_Callback(reinterpret_cast<VirtualQObject::QObject_ConnectNotify_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QObject_QBaseConnectNotify(QObject* self, const QMetaMethod* signal) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_ConnectNotify_IsBase(true);
        vqobject->connectNotify(*signal);
    }
}

void QObject_DisconnectNotify(QObject* self, const QMetaMethod* signal) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->disconnectNotify(*signal);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QObject_OnDisconnectNotify(QObject* self, intptr_t slot) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_DisconnectNotify_Callback(reinterpret_cast<VirtualQObject::QObject_DisconnectNotify_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QObject_QBaseDisconnectNotify(QObject* self, const QMetaMethod* signal) {
    auto* vqobject = dynamic_cast<VirtualQObject*>(self);
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_DisconnectNotify_IsBase(true);
        vqobject->disconnectNotify(*signal);
    }
}

libqt_string QObject_Tr2(const char* s, const char* c) {
    QString _ret = QObject::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QObject_Tr3(const char* s, const char* c, int n) {
    QString _ret = QObject::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QObject_MoveToThread2(QObject* self, QThread* thread, Disambiguated_t* param2) {
    return self->moveToThread(thread, *param2);
}

int QObject_StartTimer22(QObject* self, int interval, int timerType) {
    return self->startTimer(static_cast<int>(interval), static_cast<Qt::TimerType>(timerType));
}

QMetaObject__Connection* QObject_Connect5(const QObject* sender, const QMetaMethod* signal, const QObject* receiver, const QMetaMethod* method, int typeVal) {
    return new QMetaObject::Connection(QObject::connect(sender, *signal, receiver, *method, static_cast<Qt::ConnectionType>(typeVal)));
}

QMetaObject__Connection* QObject_Connect4(const QObject* self, const QObject* sender, const char* signal, const char* member, int typeVal) {
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
QObject* QObject_Sender(const QObject* self) {
    auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self));
    if (vqobject && vqobject->isVirtualQObject) {
        return vqobject->sender();
    } else {
        return ((VirtualQObject*)self)->sender();
    }
}

// Base class handler implementation
QObject* QObject_QBaseSender(const QObject* self) {
    auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self));
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_Sender_IsBase(true);
        return vqobject->sender();
    } else {
        return ((VirtualQObject*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QObject_OnSender(const QObject* self, intptr_t slot) {
    auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self));
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_Sender_Callback(reinterpret_cast<VirtualQObject::QObject_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QObject_SenderSignalIndex(const QObject* self) {
    auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self));
    if (vqobject && vqobject->isVirtualQObject) {
        return vqobject->senderSignalIndex();
    } else {
        return ((VirtualQObject*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QObject_QBaseSenderSignalIndex(const QObject* self) {
    auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self));
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_SenderSignalIndex_IsBase(true);
        return vqobject->senderSignalIndex();
    } else {
        return ((VirtualQObject*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QObject_OnSenderSignalIndex(const QObject* self, intptr_t slot) {
    auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self));
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_SenderSignalIndex_Callback(reinterpret_cast<VirtualQObject::QObject_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QObject_Receivers(const QObject* self, const char* signal) {
    auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self));
    if (vqobject && vqobject->isVirtualQObject) {
        return vqobject->receivers(signal);
    } else {
        return ((VirtualQObject*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QObject_QBaseReceivers(const QObject* self, const char* signal) {
    auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self));
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_Receivers_IsBase(true);
        return vqobject->receivers(signal);
    } else {
        return ((VirtualQObject*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QObject_OnReceivers(const QObject* self, intptr_t slot) {
    auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self));
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_Receivers_Callback(reinterpret_cast<VirtualQObject::QObject_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QObject_IsSignalConnected(const QObject* self, const QMetaMethod* signal) {
    auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self));
    if (vqobject && vqobject->isVirtualQObject) {
        return vqobject->isSignalConnected(*signal);
    } else {
        return ((VirtualQObject*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QObject_QBaseIsSignalConnected(const QObject* self, const QMetaMethod* signal) {
    auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self));
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_IsSignalConnected_IsBase(true);
        return vqobject->isSignalConnected(*signal);
    } else {
        return ((VirtualQObject*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QObject_OnIsSignalConnected(const QObject* self, intptr_t slot) {
    auto* vqobject = const_cast<VirtualQObject*>(dynamic_cast<const VirtualQObject*>(self));
    if (vqobject && vqobject->isVirtualQObject) {
        vqobject->setQObject_IsSignalConnected_Callback(reinterpret_cast<VirtualQObject::QObject_IsSignalConnected_Callback>(slot));
    }
}

void QObject_Connect_ObjectNameChanged(QObject* self, intptr_t slot) {
    void (*slotFunc)(QObject*, const char*) = reinterpret_cast<void (*)(QObject*, const char*)>(slot);
    QObject::connect(self, &QObject::objectNameChanged, [self, slotFunc](const QString& objectName) {
        const QString objectName_ret = objectName;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray objectName_b = objectName_ret.toUtf8();
        const char* objectName_str = static_cast<const char*>(malloc(objectName_b.length() + 1));
        memcpy((void*)objectName_str, objectName_b.data(), objectName_b.length());
        ((char*)objectName_str)[objectName_b.length()] = '\0';
        const char* sigval1 = objectName_str;
        slotFunc(self, sigval1);
        libqt_free(objectName_str);
    });
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

void QSignalBlocker_Dismiss(QSignalBlocker* self) {
    self->dismiss();
}

void QSignalBlocker_Delete(QSignalBlocker* self) {
    delete self;
}
