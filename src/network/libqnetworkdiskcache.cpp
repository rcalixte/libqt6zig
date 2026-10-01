#include <QAbstractNetworkCache>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkCacheMetaData>
#include <QNetworkDiskCache>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <qnetworkdiskcache.h>
#include "libqnetworkdiskcache.h"
#include "libqnetworkdiskcache.hxx"

QNetworkDiskCache* QNetworkDiskCache_new() {
    return new VirtualQNetworkDiskCache();
}

QNetworkDiskCache* QNetworkDiskCache_new2(QObject* parent) {
    return new VirtualQNetworkDiskCache(parent);
}

QMetaObject* QNetworkDiskCache_MetaObject(const QNetworkDiskCache* self) {
    return (QMetaObject*)self->metaObject();
}

void* QNetworkDiskCache_Metacast(QNetworkDiskCache* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QNetworkDiskCache_Metacall(QNetworkDiskCache* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QNetworkDiskCache_Tr(const char* s) {
    auto _ret = QNetworkDiskCache::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QNetworkDiskCache_CacheDirectory(const QNetworkDiskCache* self) {
    auto _ret = self->cacheDirectory();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QNetworkDiskCache_SetCacheDirectory(QNetworkDiskCache* self, const libqt_string cacheDir) {
    QString cacheDir_QString = QString::fromUtf8(cacheDir.data, cacheDir.len);
    self->setCacheDirectory(cacheDir_QString);
}

long long QNetworkDiskCache_MaximumCacheSize(const QNetworkDiskCache* self) {
    return static_cast<long long>(self->maximumCacheSize());
}

void QNetworkDiskCache_SetMaximumCacheSize(QNetworkDiskCache* self, long long size) {
    self->setMaximumCacheSize(static_cast<qint64>(size));
}

long long QNetworkDiskCache_CacheSize(const QNetworkDiskCache* self) {
    return static_cast<long long>(self->cacheSize());
}

QNetworkCacheMetaData* QNetworkDiskCache_MetaData(QNetworkDiskCache* self, const QUrl* url) {
    return new QNetworkCacheMetaData(self->metaData(*url));
}

void QNetworkDiskCache_UpdateMetaData(QNetworkDiskCache* self, const QNetworkCacheMetaData* metaData) {
    self->updateMetaData(*metaData);
}

QIODevice* QNetworkDiskCache_Data(QNetworkDiskCache* self, const QUrl* url) {
    return self->data(*url);
}

bool QNetworkDiskCache_Remove(QNetworkDiskCache* self, const QUrl* url) {
    return self->remove(*url);
}

QIODevice* QNetworkDiskCache_Prepare(QNetworkDiskCache* self, const QNetworkCacheMetaData* metaData) {
    return self->prepare(*metaData);
}

void QNetworkDiskCache_Insert(QNetworkDiskCache* self, QIODevice* device) {
    self->insert(device);
}

QNetworkCacheMetaData* QNetworkDiskCache_FileMetaData(const QNetworkDiskCache* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new QNetworkCacheMetaData(self->fileMetaData(fileName_QString));
}

void QNetworkDiskCache_Clear(QNetworkDiskCache* self) {
    self->clear();
}

long long QNetworkDiskCache_Expire(QNetworkDiskCache* self) {
    auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
    if (vqnetworkdiskcache) {
        return static_cast<long long>(vqnetworkdiskcache->expire());
    }
    qFatal("Error: Protected method QNetworkDiskCache::expire called without a directly constructed type");
}

libqt_string QNetworkDiskCache_Tr2(const char* s, const char* c) {
    auto _ret = QNetworkDiskCache::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QNetworkDiskCache_Tr3(const char* s, const char* c, int n) {
    auto _ret = QNetworkDiskCache::tr(s, c, static_cast<int>(n));
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
QMetaObject* QNetworkDiskCache_SuperMetaObject(const QNetworkDiskCache* self) {
    return (QMetaObject*)self->QNetworkDiskCache::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnMetaObject(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self)))
        vqnetworkdiskcache->qnetworkdiskcache_metaobject_callback = reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QNetworkDiskCache_SuperMetacast(QNetworkDiskCache* self, const char* param1) {
    return self->QNetworkDiskCache::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnMetacast(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self))
        vqnetworkdiskcache->qnetworkdiskcache_metacast_callback = reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Metacast_Callback>(slot);
}

// Base class handler implementation
int QNetworkDiskCache_SuperMetacall(QNetworkDiskCache* self, int param1, int param2, void** param3) {
    return self->QNetworkDiskCache::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnMetacall(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self))
        vqnetworkdiskcache->qnetworkdiskcache_metacall_callback = reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Metacall_Callback>(slot);
}

// Base class handler implementation
long long QNetworkDiskCache_SuperCacheSize(const QNetworkDiskCache* self) {
    return static_cast<long long>(self->QNetworkDiskCache::cacheSize());
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnCacheSize(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self)))
        vqnetworkdiskcache->qnetworkdiskcache_cachesize_callback = reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_CacheSize_Callback>(slot);
}

// Base class handler implementation
QNetworkCacheMetaData* QNetworkDiskCache_SuperMetaData(QNetworkDiskCache* self, const QUrl* url) {
    return new QNetworkCacheMetaData(self->QNetworkDiskCache::metaData(*url));
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnMetaData(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self))
        vqnetworkdiskcache->qnetworkdiskcache_metadata_callback = reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_MetaData_Callback>(slot);
}

// Base class handler implementation
void QNetworkDiskCache_SuperUpdateMetaData(QNetworkDiskCache* self, const QNetworkCacheMetaData* metaData) {
    self->QNetworkDiskCache::updateMetaData(*metaData);
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnUpdateMetaData(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self))
        vqnetworkdiskcache->qnetworkdiskcache_updatemetadata_callback = reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_UpdateMetaData_Callback>(slot);
}

// Base class handler implementation
QIODevice* QNetworkDiskCache_SuperData(QNetworkDiskCache* self, const QUrl* url) {
    return self->QNetworkDiskCache::data(*url);
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnData(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self))
        vqnetworkdiskcache->qnetworkdiskcache_data_callback = reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Data_Callback>(slot);
}

// Base class handler implementation
bool QNetworkDiskCache_SuperRemove(QNetworkDiskCache* self, const QUrl* url) {
    return self->QNetworkDiskCache::remove(*url);
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnRemove(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self))
        vqnetworkdiskcache->qnetworkdiskcache_remove_callback = reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Remove_Callback>(slot);
}

// Base class handler implementation
QIODevice* QNetworkDiskCache_SuperPrepare(QNetworkDiskCache* self, const QNetworkCacheMetaData* metaData) {
    return self->QNetworkDiskCache::prepare(*metaData);
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnPrepare(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self))
        vqnetworkdiskcache->qnetworkdiskcache_prepare_callback = reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Prepare_Callback>(slot);
}

// Base class handler implementation
void QNetworkDiskCache_SuperInsert(QNetworkDiskCache* self, QIODevice* device) {
    self->QNetworkDiskCache::insert(device);
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnInsert(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self))
        vqnetworkdiskcache->qnetworkdiskcache_insert_callback = reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Insert_Callback>(slot);
}

// Base class handler implementation
void QNetworkDiskCache_SuperClear(QNetworkDiskCache* self) {
    self->QNetworkDiskCache::clear();
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnClear(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self))
        vqnetworkdiskcache->qnetworkdiskcache_clear_callback = reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Clear_Callback>(slot);
}

// Base class handler implementation
long long QNetworkDiskCache_SuperExpire(QNetworkDiskCache* self) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        return static_cast<long long>(vqnetworkdiskcache->QNetworkDiskCache::expire());
    } else
        qFatal("Error: Protected virtual method QNetworkDiskCache::expire called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnExpire(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self))
        vqnetworkdiskcache->qnetworkdiskcache_expire_callback = reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Expire_Callback>(slot);
}

// Derived class handler implementation
bool QNetworkDiskCache_Event(QNetworkDiskCache* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QNetworkDiskCache_SuperEvent(QNetworkDiskCache* self, QEvent* event) {
    return self->QNetworkDiskCache::event(event);
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnEvent(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self))
        vqnetworkdiskcache->qnetworkdiskcache_event_callback = reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_Event_Callback>(slot);
}

// Derived class handler implementation
bool QNetworkDiskCache_EventFilter(QNetworkDiskCache* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QNetworkDiskCache_SuperEventFilter(QNetworkDiskCache* self, QObject* watched, QEvent* event) {
    return self->QNetworkDiskCache::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnEventFilter(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self))
        vqnetworkdiskcache->qnetworkdiskcache_eventfilter_callback = reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QNetworkDiskCache_TimerEvent(QNetworkDiskCache* self, QTimerEvent* event) {
    auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
    if (vqnetworkdiskcache) {
        vqnetworkdiskcache->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QNetworkDiskCache::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QNetworkDiskCache_SuperTimerEvent(QNetworkDiskCache* self, QTimerEvent* event) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->QNetworkDiskCache::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QNetworkDiskCache::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnTimerEvent(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self))
        vqnetworkdiskcache->qnetworkdiskcache_timerevent_callback = reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QNetworkDiskCache_ChildEvent(QNetworkDiskCache* self, QChildEvent* event) {
    auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
    if (vqnetworkdiskcache) {
        vqnetworkdiskcache->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QNetworkDiskCache::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QNetworkDiskCache_SuperChildEvent(QNetworkDiskCache* self, QChildEvent* event) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->QNetworkDiskCache::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QNetworkDiskCache::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnChildEvent(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self))
        vqnetworkdiskcache->qnetworkdiskcache_childevent_callback = reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QNetworkDiskCache_CustomEvent(QNetworkDiskCache* self, QEvent* event) {
    auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
    if (vqnetworkdiskcache) {
        vqnetworkdiskcache->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QNetworkDiskCache::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QNetworkDiskCache_SuperCustomEvent(QNetworkDiskCache* self, QEvent* event) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->QNetworkDiskCache::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QNetworkDiskCache::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnCustomEvent(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self))
        vqnetworkdiskcache->qnetworkdiskcache_customevent_callback = reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QNetworkDiskCache_ConnectNotify(QNetworkDiskCache* self, const QMetaMethod* signal) {
    auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
    if (vqnetworkdiskcache) {
        vqnetworkdiskcache->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QNetworkDiskCache::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QNetworkDiskCache_SuperConnectNotify(QNetworkDiskCache* self, const QMetaMethod* signal) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->QNetworkDiskCache::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QNetworkDiskCache::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnConnectNotify(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self))
        vqnetworkdiskcache->qnetworkdiskcache_connectnotify_callback = reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QNetworkDiskCache_DisconnectNotify(QNetworkDiskCache* self, const QMetaMethod* signal) {
    auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self);
    if (vqnetworkdiskcache) {
        vqnetworkdiskcache->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QNetworkDiskCache::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QNetworkDiskCache_SuperDisconnectNotify(QNetworkDiskCache* self, const QMetaMethod* signal) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self)) {
        vqnetworkdiskcache->QNetworkDiskCache::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QNetworkDiskCache::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QNetworkDiskCache_OnDisconnectNotify(QNetworkDiskCache* self, intptr_t slot) {
    if (auto* vqnetworkdiskcache = dynamic_cast<VirtualQNetworkDiskCache*>(self))
        vqnetworkdiskcache->qnetworkdiskcache_disconnectnotify_callback = reinterpret_cast<VirtualQNetworkDiskCache::QNetworkDiskCache_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QNetworkDiskCache_Sender(const QNetworkDiskCache* self) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self))) {
        return vqnetworkdiskcache->VirtualQNetworkDiskCache::sender();
    } else
        qFatal("Error: Protected method QNetworkDiskCache::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QNetworkDiskCache_SenderSignalIndex(const QNetworkDiskCache* self) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self))) {
        return vqnetworkdiskcache->VirtualQNetworkDiskCache::senderSignalIndex();
    } else
        qFatal("Error: Protected method QNetworkDiskCache::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QNetworkDiskCache_Receivers(const QNetworkDiskCache* self, const char* signal) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self))) {
        return vqnetworkdiskcache->VirtualQNetworkDiskCache::receivers(signal);
    } else
        qFatal("Error: Protected method QNetworkDiskCache::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QNetworkDiskCache_IsSignalConnected(const QNetworkDiskCache* self, const QMetaMethod* signal) {
    if (auto* vqnetworkdiskcache = const_cast<VirtualQNetworkDiskCache*>(dynamic_cast<const VirtualQNetworkDiskCache*>(self))) {
        return vqnetworkdiskcache->VirtualQNetworkDiskCache::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QNetworkDiskCache::isSignalConnected called without a directly constructed type");
}

void QNetworkDiskCache_Delete(QNetworkDiskCache* self) {
    delete self;
}
