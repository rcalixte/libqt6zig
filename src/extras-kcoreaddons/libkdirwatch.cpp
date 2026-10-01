#include <KDirWatch>
#include <QChildEvent>
#include <QDateTime>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kdirwatch.h>
#include "libkdirwatch.h"
#include "libkdirwatch.hxx"

KDirWatch* KDirWatch_new() {
    return new VirtualKDirWatch();
}

KDirWatch* KDirWatch_new2(QObject* parent) {
    return new VirtualKDirWatch(parent);
}

QMetaObject* KDirWatch_MetaObject(const KDirWatch* self) {
    return (QMetaObject*)self->metaObject();
}

void* KDirWatch_Metacast(KDirWatch* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KDirWatch_Metacall(KDirWatch* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KDirWatch_Tr(const char* s) {
    auto _ret = KDirWatch::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KDirWatch_AddDir(KDirWatch* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->addDir(path_QString);
}

void KDirWatch_AddFile(KDirWatch* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    self->addFile(file_QString);
}

QDateTime* KDirWatch_Ctime(const KDirWatch* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new QDateTime(self->ctime(path_QString));
}

void KDirWatch_RemoveDir(KDirWatch* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->removeDir(path_QString);
}

void KDirWatch_RemoveFile(KDirWatch* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    self->removeFile(file_QString);
}

bool KDirWatch_StopDirScan(KDirWatch* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return self->stopDirScan(path_QString);
}

bool KDirWatch_RestartDirScan(KDirWatch* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return self->restartDirScan(path_QString);
}

void KDirWatch_StartScan(KDirWatch* self) {
    self->startScan();
}

void KDirWatch_StopScan(KDirWatch* self) {
    self->stopScan();
}

bool KDirWatch_IsStopped(KDirWatch* self) {
    return self->isStopped();
}

bool KDirWatch_Contains(const KDirWatch* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return self->contains(path_QString);
}

int KDirWatch_InternalMethod(const KDirWatch* self) {
    return static_cast<int>(self->internalMethod());
}

KDirWatch* KDirWatch_Self() {
    return KDirWatch::self();
}

bool KDirWatch_Exists() {
    return KDirWatch::exists();
}

bool KDirWatch_Event(KDirWatch* self, QEvent* event) {
    return self->event(event);
}

void KDirWatch_SetCreated(KDirWatch* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setCreated(path_QString);
}

void KDirWatch_SetDirty(KDirWatch* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setDirty(path_QString);
}

void KDirWatch_SetDeleted(KDirWatch* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setDeleted(path_QString);
}

void KDirWatch_Dirty(KDirWatch* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->dirty(path_QString);
}

void KDirWatch_Connect_Dirty(KDirWatch* self, intptr_t slot) {
    void (*slotFunc)(KDirWatch*, const char*) = reinterpret_cast<void (*)(KDirWatch*, const char*)>(slot);
    KDirWatch::connect(self,
                       static_cast<void (KDirWatch::*)(const QString&)>(&KDirWatch::dirty),
                       [self, slotFunc](const QString& path) {
                           const auto path_ret = path;
                           // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                           QByteArray path_b = path_ret.toUtf8();
                           auto path_str_len = path_b.length();
                           const char* path_str = static_cast<const char*>(malloc(path_str_len + 1));
                           memcpy((void*)path_str, path_b.data(), path_str_len);
                           ((char*)path_str)[path_str_len] = '\0';
                           const char* sigval1 = path_str;
                           slotFunc(self, sigval1);
                           libqt_free(path_str);
                       });
}

void KDirWatch_Created(KDirWatch* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->created(path_QString);
}

void KDirWatch_Connect_Created(KDirWatch* self, intptr_t slot) {
    void (*slotFunc)(KDirWatch*, const char*) = reinterpret_cast<void (*)(KDirWatch*, const char*)>(slot);
    KDirWatch::connect(self,
                       static_cast<void (KDirWatch::*)(const QString&)>(&KDirWatch::created),
                       [self, slotFunc](const QString& path) {
                           const auto path_ret = path;
                           // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                           QByteArray path_b = path_ret.toUtf8();
                           auto path_str_len = path_b.length();
                           const char* path_str = static_cast<const char*>(malloc(path_str_len + 1));
                           memcpy((void*)path_str, path_b.data(), path_str_len);
                           ((char*)path_str)[path_str_len] = '\0';
                           const char* sigval1 = path_str;
                           slotFunc(self, sigval1);
                           libqt_free(path_str);
                       });
}

void KDirWatch_Deleted(KDirWatch* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->deleted(path_QString);
}

void KDirWatch_Connect_Deleted(KDirWatch* self, intptr_t slot) {
    void (*slotFunc)(KDirWatch*, const char*) = reinterpret_cast<void (*)(KDirWatch*, const char*)>(slot);
    KDirWatch::connect(self,
                       static_cast<void (KDirWatch::*)(const QString&)>(&KDirWatch::deleted),
                       [self, slotFunc](const QString& path) {
                           const auto path_ret = path;
                           // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                           QByteArray path_b = path_ret.toUtf8();
                           auto path_str_len = path_b.length();
                           const char* path_str = static_cast<const char*>(malloc(path_str_len + 1));
                           memcpy((void*)path_str, path_b.data(), path_str_len);
                           ((char*)path_str)[path_str_len] = '\0';
                           const char* sigval1 = path_str;
                           slotFunc(self, sigval1);
                           libqt_free(path_str);
                       });
}

libqt_string KDirWatch_Tr2(const char* s, const char* c) {
    auto _ret = KDirWatch::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDirWatch_Tr3(const char* s, const char* c, int n) {
    auto _ret = KDirWatch::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KDirWatch_AddDir2(KDirWatch* self, const libqt_string path, int watchModes) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->addDir(path_QString, static_cast<KDirWatch::WatchModes>(watchModes));
}

void KDirWatch_StartScan1(KDirWatch* self, bool notify) {
    self->startScan(notify);
}

void KDirWatch_StartScan2(KDirWatch* self, bool notify, bool skippedToo) {
    self->startScan(notify, skippedToo);
}

// Base class handler implementation
QMetaObject* KDirWatch_SuperMetaObject(const KDirWatch* self) {
    return (QMetaObject*)self->KDirWatch::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnMetaObject(KDirWatch* self, intptr_t slot) {
    if (auto* vkdirwatch = const_cast<VirtualKDirWatch*>(dynamic_cast<const VirtualKDirWatch*>(self)))
        vkdirwatch->kdirwatch_metaobject_callback = reinterpret_cast<VirtualKDirWatch::KDirWatch_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KDirWatch_SuperMetacast(KDirWatch* self, const char* param1) {
    return self->KDirWatch::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnMetacast(KDirWatch* self, intptr_t slot) {
    if (auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self))
        vkdirwatch->kdirwatch_metacast_callback = reinterpret_cast<VirtualKDirWatch::KDirWatch_Metacast_Callback>(slot);
}

// Base class handler implementation
int KDirWatch_SuperMetacall(KDirWatch* self, int param1, int param2, void** param3) {
    return self->KDirWatch::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnMetacall(KDirWatch* self, intptr_t slot) {
    if (auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self))
        vkdirwatch->kdirwatch_metacall_callback = reinterpret_cast<VirtualKDirWatch::KDirWatch_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KDirWatch_SuperEvent(KDirWatch* self, QEvent* event) {
    return self->KDirWatch::event(event);
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnEvent(KDirWatch* self, intptr_t slot) {
    if (auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self))
        vkdirwatch->kdirwatch_event_callback = reinterpret_cast<VirtualKDirWatch::KDirWatch_Event_Callback>(slot);
}

// Derived class handler implementation
bool KDirWatch_EventFilter(KDirWatch* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KDirWatch_SuperEventFilter(KDirWatch* self, QObject* watched, QEvent* event) {
    return self->KDirWatch::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnEventFilter(KDirWatch* self, intptr_t slot) {
    if (auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self))
        vkdirwatch->kdirwatch_eventfilter_callback = reinterpret_cast<VirtualKDirWatch::KDirWatch_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KDirWatch_TimerEvent(KDirWatch* self, QTimerEvent* event) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch) {
        vkdirwatch->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirWatch::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirWatch_SuperTimerEvent(KDirWatch* self, QTimerEvent* event) {
    if (auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self)) {
        vkdirwatch->KDirWatch::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirWatch::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnTimerEvent(KDirWatch* self, intptr_t slot) {
    if (auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self))
        vkdirwatch->kdirwatch_timerevent_callback = reinterpret_cast<VirtualKDirWatch::KDirWatch_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirWatch_ChildEvent(KDirWatch* self, QChildEvent* event) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch) {
        vkdirwatch->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirWatch::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirWatch_SuperChildEvent(KDirWatch* self, QChildEvent* event) {
    if (auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self)) {
        vkdirwatch->KDirWatch::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirWatch::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnChildEvent(KDirWatch* self, intptr_t slot) {
    if (auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self))
        vkdirwatch->kdirwatch_childevent_callback = reinterpret_cast<VirtualKDirWatch::KDirWatch_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirWatch_CustomEvent(KDirWatch* self, QEvent* event) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch) {
        vkdirwatch->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KDirWatch::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirWatch_SuperCustomEvent(KDirWatch* self, QEvent* event) {
    if (auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self)) {
        vkdirwatch->KDirWatch::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KDirWatch::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnCustomEvent(KDirWatch* self, intptr_t slot) {
    if (auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self))
        vkdirwatch->kdirwatch_customevent_callback = reinterpret_cast<VirtualKDirWatch::KDirWatch_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KDirWatch_ConnectNotify(KDirWatch* self, const QMetaMethod* signal) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch) {
        vkdirwatch->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDirWatch::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirWatch_SuperConnectNotify(KDirWatch* self, const QMetaMethod* signal) {
    if (auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self)) {
        vkdirwatch->KDirWatch::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDirWatch::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnConnectNotify(KDirWatch* self, intptr_t slot) {
    if (auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self))
        vkdirwatch->kdirwatch_connectnotify_callback = reinterpret_cast<VirtualKDirWatch::KDirWatch_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KDirWatch_DisconnectNotify(KDirWatch* self, const QMetaMethod* signal) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch) {
        vkdirwatch->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KDirWatch::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KDirWatch_SuperDisconnectNotify(KDirWatch* self, const QMetaMethod* signal) {
    if (auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self)) {
        vkdirwatch->KDirWatch::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KDirWatch::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnDisconnectNotify(KDirWatch* self, intptr_t slot) {
    if (auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self))
        vkdirwatch->kdirwatch_disconnectnotify_callback = reinterpret_cast<VirtualKDirWatch::KDirWatch_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KDirWatch_Sender(const KDirWatch* self) {
    if (auto* vkdirwatch = const_cast<VirtualKDirWatch*>(dynamic_cast<const VirtualKDirWatch*>(self))) {
        return vkdirwatch->VirtualKDirWatch::sender();
    } else
        qFatal("Error: Protected method KDirWatch::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KDirWatch_SenderSignalIndex(const KDirWatch* self) {
    if (auto* vkdirwatch = const_cast<VirtualKDirWatch*>(dynamic_cast<const VirtualKDirWatch*>(self))) {
        return vkdirwatch->VirtualKDirWatch::senderSignalIndex();
    } else
        qFatal("Error: Protected method KDirWatch::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KDirWatch_Receivers(const KDirWatch* self, const char* signal) {
    if (auto* vkdirwatch = const_cast<VirtualKDirWatch*>(dynamic_cast<const VirtualKDirWatch*>(self))) {
        return vkdirwatch->VirtualKDirWatch::receivers(signal);
    } else
        qFatal("Error: Protected method KDirWatch::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KDirWatch_IsSignalConnected(const KDirWatch* self, const QMetaMethod* signal) {
    if (auto* vkdirwatch = const_cast<VirtualKDirWatch*>(dynamic_cast<const VirtualKDirWatch*>(self))) {
        return vkdirwatch->VirtualKDirWatch::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KDirWatch::isSignalConnected called without a directly constructed type");
}

void KDirWatch_Delete(KDirWatch* self) {
    delete self;
}
