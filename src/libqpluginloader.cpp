#include <QChildEvent>
#include <QEvent>
#include <QJsonObject>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPluginLoader>
#include <QStaticPlugin>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qpluginloader.h>
#include "libqpluginloader.h"
#include "libqpluginloader.hxx"

QPluginLoader* QPluginLoader_new() {
    return new VirtualQPluginLoader();
}

QPluginLoader* QPluginLoader_new2(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQPluginLoader(fileName_QString);
}

QPluginLoader* QPluginLoader_new3(QObject* parent) {
    return new VirtualQPluginLoader(parent);
}

QPluginLoader* QPluginLoader_new4(const libqt_string fileName, QObject* parent) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQPluginLoader(fileName_QString, parent);
}

QMetaObject* QPluginLoader_MetaObject(const QPluginLoader* self) {
    auto* vqpluginloader = dynamic_cast<const VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQPluginLoader*)self)->metaObject();
    }
}

void* QPluginLoader_Metacast(QPluginLoader* self, const char* param1) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQPluginLoader*)self)->qt_metacast(param1);
    }
}

int QPluginLoader_Metacall(QPluginLoader* self, int param1, int param2, void** param3) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPluginLoader*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

QObject* QPluginLoader_Instance(QPluginLoader* self) {
    return self->instance();
}

QJsonObject* QPluginLoader_MetaData(const QPluginLoader* self) {
    return new QJsonObject(self->metaData());
}

libqt_list /* of QObject* */ QPluginLoader_StaticInstances() {
    QList<QObject*> _ret = QPluginLoader::staticInstances();
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

libqt_list /* of QStaticPlugin* */ QPluginLoader_StaticPlugins() {
    QList<QStaticPlugin> _ret = QPluginLoader::staticPlugins();
    // Convert QList<> from C++ memory to manually-managed C memory
    QStaticPlugin** _arr = static_cast<QStaticPlugin**>(malloc(sizeof(QStaticPlugin*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QStaticPlugin(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QPluginLoader_Load(QPluginLoader* self) {
    return self->load();
}

bool QPluginLoader_Unload(QPluginLoader* self) {
    return self->unload();
}

bool QPluginLoader_IsLoaded(const QPluginLoader* self) {
    return self->isLoaded();
}

void QPluginLoader_SetFileName(QPluginLoader* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setFileName(fileName_QString);
}

libqt_string QPluginLoader_FileName(const QPluginLoader* self) {
    QString _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPluginLoader_ErrorString(const QPluginLoader* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPluginLoader_SetLoadHints(QPluginLoader* self, int loadHints) {
    self->setLoadHints(static_cast<QLibrary::LoadHints>(loadHints));
}

int QPluginLoader_LoadHints(const QPluginLoader* self) {
    return static_cast<int>(self->loadHints());
}

// Base class handler implementation
QMetaObject* QPluginLoader_SuperMetaObject(const QPluginLoader* self) {
    auto* vqpluginloader = const_cast<VirtualQPluginLoader*>(dynamic_cast<const VirtualQPluginLoader*>(self));
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_MetaObject_IsBase(true);
        return (QMetaObject*)vqpluginloader->metaObject();
    } else {
        return (QMetaObject*)self->QPluginLoader::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnMetaObject(const QPluginLoader* self, intptr_t slot) {
    auto* vqpluginloader = const_cast<VirtualQPluginLoader*>(dynamic_cast<const VirtualQPluginLoader*>(self));
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_MetaObject_Callback(reinterpret_cast<VirtualQPluginLoader::QPluginLoader_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QPluginLoader_SuperMetacast(QPluginLoader* self, const char* param1) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_Metacast_IsBase(true);
        return vqpluginloader->qt_metacast(param1);
    } else {
        return self->QPluginLoader::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnMetacast(QPluginLoader* self, intptr_t slot) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_Metacast_Callback(reinterpret_cast<VirtualQPluginLoader::QPluginLoader_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QPluginLoader_SuperMetacall(QPluginLoader* self, int param1, int param2, void** param3) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_Metacall_IsBase(true);
        return vqpluginloader->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QPluginLoader::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnMetacall(QPluginLoader* self, intptr_t slot) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_Metacall_Callback(reinterpret_cast<VirtualQPluginLoader::QPluginLoader_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPluginLoader_Event(QPluginLoader* self, QEvent* event) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        return vqpluginloader->event(event);
    } else {
        return self->QPluginLoader::event(event);
    }
}

// Base class handler implementation
bool QPluginLoader_SuperEvent(QPluginLoader* self, QEvent* event) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_Event_IsBase(true);
        return vqpluginloader->event(event);
    } else {
        return self->QPluginLoader::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnEvent(QPluginLoader* self, intptr_t slot) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_Event_Callback(reinterpret_cast<VirtualQPluginLoader::QPluginLoader_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPluginLoader_EventFilter(QPluginLoader* self, QObject* watched, QEvent* event) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        return vqpluginloader->eventFilter(watched, event);
    } else {
        return self->QPluginLoader::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPluginLoader_SuperEventFilter(QPluginLoader* self, QObject* watched, QEvent* event) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_EventFilter_IsBase(true);
        return vqpluginloader->eventFilter(watched, event);
    } else {
        return self->QPluginLoader::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnEventFilter(QPluginLoader* self, intptr_t slot) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_EventFilter_Callback(reinterpret_cast<VirtualQPluginLoader::QPluginLoader_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPluginLoader_TimerEvent(QPluginLoader* self, QTimerEvent* event) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->timerEvent(event);
    } else {
        ((VirtualQPluginLoader*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPluginLoader_SuperTimerEvent(QPluginLoader* self, QTimerEvent* event) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_TimerEvent_IsBase(true);
        vqpluginloader->timerEvent(event);
    } else {
        ((VirtualQPluginLoader*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnTimerEvent(QPluginLoader* self, intptr_t slot) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_TimerEvent_Callback(reinterpret_cast<VirtualQPluginLoader::QPluginLoader_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPluginLoader_ChildEvent(QPluginLoader* self, QChildEvent* event) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->childEvent(event);
    } else {
        ((VirtualQPluginLoader*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPluginLoader_SuperChildEvent(QPluginLoader* self, QChildEvent* event) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_ChildEvent_IsBase(true);
        vqpluginloader->childEvent(event);
    } else {
        ((VirtualQPluginLoader*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnChildEvent(QPluginLoader* self, intptr_t slot) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_ChildEvent_Callback(reinterpret_cast<VirtualQPluginLoader::QPluginLoader_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPluginLoader_CustomEvent(QPluginLoader* self, QEvent* event) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->customEvent(event);
    } else {
        ((VirtualQPluginLoader*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPluginLoader_SuperCustomEvent(QPluginLoader* self, QEvent* event) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_CustomEvent_IsBase(true);
        vqpluginloader->customEvent(event);
    } else {
        ((VirtualQPluginLoader*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnCustomEvent(QPluginLoader* self, intptr_t slot) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_CustomEvent_Callback(reinterpret_cast<VirtualQPluginLoader::QPluginLoader_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPluginLoader_ConnectNotify(QPluginLoader* self, const QMetaMethod* signal) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->connectNotify(*signal);
    } else {
        ((VirtualQPluginLoader*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPluginLoader_SuperConnectNotify(QPluginLoader* self, const QMetaMethod* signal) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_ConnectNotify_IsBase(true);
        vqpluginloader->connectNotify(*signal);
    } else {
        ((VirtualQPluginLoader*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnConnectNotify(QPluginLoader* self, intptr_t slot) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_ConnectNotify_Callback(reinterpret_cast<VirtualQPluginLoader::QPluginLoader_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPluginLoader_DisconnectNotify(QPluginLoader* self, const QMetaMethod* signal) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->disconnectNotify(*signal);
    } else {
        ((VirtualQPluginLoader*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPluginLoader_SuperDisconnectNotify(QPluginLoader* self, const QMetaMethod* signal) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_DisconnectNotify_IsBase(true);
        vqpluginloader->disconnectNotify(*signal);
    } else {
        ((VirtualQPluginLoader*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnDisconnectNotify(QPluginLoader* self, intptr_t slot) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_DisconnectNotify_Callback(reinterpret_cast<VirtualQPluginLoader::QPluginLoader_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPluginLoader_Sender(const QPluginLoader* self) {
    auto* vqpluginloader = const_cast<VirtualQPluginLoader*>(dynamic_cast<const VirtualQPluginLoader*>(self));
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        return vqpluginloader->sender();
    } else {
        return ((VirtualQPluginLoader*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPluginLoader_SuperSender(const QPluginLoader* self) {
    auto* vqpluginloader = const_cast<VirtualQPluginLoader*>(dynamic_cast<const VirtualQPluginLoader*>(self));
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_Sender_IsBase(true);
        return vqpluginloader->sender();
    } else {
        return ((VirtualQPluginLoader*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnSender(const QPluginLoader* self, intptr_t slot) {
    auto* vqpluginloader = const_cast<VirtualQPluginLoader*>(dynamic_cast<const VirtualQPluginLoader*>(self));
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_Sender_Callback(reinterpret_cast<VirtualQPluginLoader::QPluginLoader_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPluginLoader_SenderSignalIndex(const QPluginLoader* self) {
    auto* vqpluginloader = const_cast<VirtualQPluginLoader*>(dynamic_cast<const VirtualQPluginLoader*>(self));
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        return vqpluginloader->senderSignalIndex();
    } else {
        return ((VirtualQPluginLoader*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPluginLoader_SuperSenderSignalIndex(const QPluginLoader* self) {
    auto* vqpluginloader = const_cast<VirtualQPluginLoader*>(dynamic_cast<const VirtualQPluginLoader*>(self));
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_SenderSignalIndex_IsBase(true);
        return vqpluginloader->senderSignalIndex();
    } else {
        return ((VirtualQPluginLoader*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnSenderSignalIndex(const QPluginLoader* self, intptr_t slot) {
    auto* vqpluginloader = const_cast<VirtualQPluginLoader*>(dynamic_cast<const VirtualQPluginLoader*>(self));
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPluginLoader::QPluginLoader_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPluginLoader_Receivers(const QPluginLoader* self, const char* signal) {
    auto* vqpluginloader = const_cast<VirtualQPluginLoader*>(dynamic_cast<const VirtualQPluginLoader*>(self));
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        return vqpluginloader->receivers(signal);
    } else {
        return ((VirtualQPluginLoader*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPluginLoader_SuperReceivers(const QPluginLoader* self, const char* signal) {
    auto* vqpluginloader = const_cast<VirtualQPluginLoader*>(dynamic_cast<const VirtualQPluginLoader*>(self));
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_Receivers_IsBase(true);
        return vqpluginloader->receivers(signal);
    } else {
        return ((VirtualQPluginLoader*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnReceivers(const QPluginLoader* self, intptr_t slot) {
    auto* vqpluginloader = const_cast<VirtualQPluginLoader*>(dynamic_cast<const VirtualQPluginLoader*>(self));
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_Receivers_Callback(reinterpret_cast<VirtualQPluginLoader::QPluginLoader_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPluginLoader_IsSignalConnected(const QPluginLoader* self, const QMetaMethod* signal) {
    auto* vqpluginloader = const_cast<VirtualQPluginLoader*>(dynamic_cast<const VirtualQPluginLoader*>(self));
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        return vqpluginloader->isSignalConnected(*signal);
    } else {
        return ((VirtualQPluginLoader*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPluginLoader_SuperIsSignalConnected(const QPluginLoader* self, const QMetaMethod* signal) {
    auto* vqpluginloader = const_cast<VirtualQPluginLoader*>(dynamic_cast<const VirtualQPluginLoader*>(self));
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_IsSignalConnected_IsBase(true);
        return vqpluginloader->isSignalConnected(*signal);
    } else {
        return ((VirtualQPluginLoader*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnIsSignalConnected(const QPluginLoader* self, intptr_t slot) {
    auto* vqpluginloader = const_cast<VirtualQPluginLoader*>(dynamic_cast<const VirtualQPluginLoader*>(self));
    if (vqpluginloader && vqpluginloader->isVirtualQPluginLoader) {
        vqpluginloader->setQPluginLoader_IsSignalConnected_Callback(reinterpret_cast<VirtualQPluginLoader::QPluginLoader_IsSignalConnected_Callback>(slot));
    }
}

void QPluginLoader_Delete(QPluginLoader* self) {
    delete self;
}
