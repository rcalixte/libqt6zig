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
    return (QMetaObject*)self->metaObject();
}

void* QPluginLoader_Metacast(QPluginLoader* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPluginLoader_Metacall(QPluginLoader* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPluginLoader_Tr(const char* s) {
    auto _ret = QPluginLoader::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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
    auto _ret = self->fileName();
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
    auto _ret = self->errorString();
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

libqt_string QPluginLoader_Tr2(const char* s, const char* c) {
    auto _ret = QPluginLoader::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPluginLoader_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPluginLoader::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPluginLoader_SuperMetaObject(const QPluginLoader* self) {
    return (QMetaObject*)self->QPluginLoader::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnMetaObject(QPluginLoader* self, intptr_t slot) {
    if (auto* vqpluginloader = const_cast<VirtualQPluginLoader*>(dynamic_cast<const VirtualQPluginLoader*>(self)))
        vqpluginloader->qpluginloader_metaobject_callback = reinterpret_cast<VirtualQPluginLoader::QPluginLoader_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPluginLoader_SuperMetacast(QPluginLoader* self, const char* param1) {
    return self->QPluginLoader::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnMetacast(QPluginLoader* self, intptr_t slot) {
    if (auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self))
        vqpluginloader->qpluginloader_metacast_callback = reinterpret_cast<VirtualQPluginLoader::QPluginLoader_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPluginLoader_SuperMetacall(QPluginLoader* self, int param1, int param2, void** param3) {
    return self->QPluginLoader::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnMetacall(QPluginLoader* self, intptr_t slot) {
    if (auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self))
        vqpluginloader->qpluginloader_metacall_callback = reinterpret_cast<VirtualQPluginLoader::QPluginLoader_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QPluginLoader_Event(QPluginLoader* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPluginLoader_SuperEvent(QPluginLoader* self, QEvent* event) {
    return self->QPluginLoader::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnEvent(QPluginLoader* self, intptr_t slot) {
    if (auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self))
        vqpluginloader->qpluginloader_event_callback = reinterpret_cast<VirtualQPluginLoader::QPluginLoader_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPluginLoader_EventFilter(QPluginLoader* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPluginLoader_SuperEventFilter(QPluginLoader* self, QObject* watched, QEvent* event) {
    return self->QPluginLoader::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnEventFilter(QPluginLoader* self, intptr_t slot) {
    if (auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self))
        vqpluginloader->qpluginloader_eventfilter_callback = reinterpret_cast<VirtualQPluginLoader::QPluginLoader_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPluginLoader_TimerEvent(QPluginLoader* self, QTimerEvent* event) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader) {
        vqpluginloader->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPluginLoader::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPluginLoader_SuperTimerEvent(QPluginLoader* self, QTimerEvent* event) {
    if (auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self)) {
        vqpluginloader->QPluginLoader::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPluginLoader::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnTimerEvent(QPluginLoader* self, intptr_t slot) {
    if (auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self))
        vqpluginloader->qpluginloader_timerevent_callback = reinterpret_cast<VirtualQPluginLoader::QPluginLoader_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPluginLoader_ChildEvent(QPluginLoader* self, QChildEvent* event) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader) {
        vqpluginloader->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPluginLoader::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPluginLoader_SuperChildEvent(QPluginLoader* self, QChildEvent* event) {
    if (auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self)) {
        vqpluginloader->QPluginLoader::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPluginLoader::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnChildEvent(QPluginLoader* self, intptr_t slot) {
    if (auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self))
        vqpluginloader->qpluginloader_childevent_callback = reinterpret_cast<VirtualQPluginLoader::QPluginLoader_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPluginLoader_CustomEvent(QPluginLoader* self, QEvent* event) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader) {
        vqpluginloader->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPluginLoader::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPluginLoader_SuperCustomEvent(QPluginLoader* self, QEvent* event) {
    if (auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self)) {
        vqpluginloader->QPluginLoader::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPluginLoader::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnCustomEvent(QPluginLoader* self, intptr_t slot) {
    if (auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self))
        vqpluginloader->qpluginloader_customevent_callback = reinterpret_cast<VirtualQPluginLoader::QPluginLoader_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPluginLoader_ConnectNotify(QPluginLoader* self, const QMetaMethod* signal) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader) {
        vqpluginloader->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPluginLoader::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPluginLoader_SuperConnectNotify(QPluginLoader* self, const QMetaMethod* signal) {
    if (auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self)) {
        vqpluginloader->QPluginLoader::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPluginLoader::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnConnectNotify(QPluginLoader* self, intptr_t slot) {
    if (auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self))
        vqpluginloader->qpluginloader_connectnotify_callback = reinterpret_cast<VirtualQPluginLoader::QPluginLoader_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPluginLoader_DisconnectNotify(QPluginLoader* self, const QMetaMethod* signal) {
    auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self);
    if (vqpluginloader) {
        vqpluginloader->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPluginLoader::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPluginLoader_SuperDisconnectNotify(QPluginLoader* self, const QMetaMethod* signal) {
    if (auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self)) {
        vqpluginloader->QPluginLoader::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPluginLoader::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPluginLoader_OnDisconnectNotify(QPluginLoader* self, intptr_t slot) {
    if (auto* vqpluginloader = dynamic_cast<VirtualQPluginLoader*>(self))
        vqpluginloader->qpluginloader_disconnectnotify_callback = reinterpret_cast<VirtualQPluginLoader::QPluginLoader_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QPluginLoader_Sender(const QPluginLoader* self) {
    if (auto* vqpluginloader = const_cast<VirtualQPluginLoader*>(dynamic_cast<const VirtualQPluginLoader*>(self))) {
        return vqpluginloader->VirtualQPluginLoader::sender();
    } else
        qFatal("Error: Protected method QPluginLoader::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPluginLoader_SenderSignalIndex(const QPluginLoader* self) {
    if (auto* vqpluginloader = const_cast<VirtualQPluginLoader*>(dynamic_cast<const VirtualQPluginLoader*>(self))) {
        return vqpluginloader->VirtualQPluginLoader::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPluginLoader::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPluginLoader_Receivers(const QPluginLoader* self, const char* signal) {
    if (auto* vqpluginloader = const_cast<VirtualQPluginLoader*>(dynamic_cast<const VirtualQPluginLoader*>(self))) {
        return vqpluginloader->VirtualQPluginLoader::receivers(signal);
    } else
        qFatal("Error: Protected method QPluginLoader::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPluginLoader_IsSignalConnected(const QPluginLoader* self, const QMetaMethod* signal) {
    if (auto* vqpluginloader = const_cast<VirtualQPluginLoader*>(dynamic_cast<const VirtualQPluginLoader*>(self))) {
        return vqpluginloader->VirtualQPluginLoader::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPluginLoader::isSignalConnected called without a directly constructed type");
}

void QPluginLoader_Delete(QPluginLoader* self) {
    delete self;
}
