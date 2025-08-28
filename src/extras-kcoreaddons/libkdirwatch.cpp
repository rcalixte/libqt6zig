#include <KDirWatch>
#include <QChildEvent>
#include <QDateTime>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKDirWatch*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KDirWatch_Tr(const char* s) {
    QString _ret = KDirWatch::tr(s);
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
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        return self->event(event);
    } else {
        return ((VirtualKDirWatch*)self)->event(event);
    }
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
    KDirWatch::connect(self, &KDirWatch::dirty, [self, slotFunc](const QString& path) {
        const QString path_ret = path;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray path_b = path_ret.toUtf8();
        const char* path_str = static_cast<const char*>(malloc(path_b.length() + 1));
        memcpy((void*)path_str, path_b.data(), path_b.length());
        ((char*)path_str)[path_b.length()] = '\0';
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
    KDirWatch::connect(self, &KDirWatch::created, [self, slotFunc](const QString& path) {
        const QString path_ret = path;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray path_b = path_ret.toUtf8();
        const char* path_str = static_cast<const char*>(malloc(path_b.length() + 1));
        memcpy((void*)path_str, path_b.data(), path_b.length());
        ((char*)path_str)[path_b.length()] = '\0';
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
    KDirWatch::connect(self, &KDirWatch::deleted, [self, slotFunc](const QString& path) {
        const QString path_ret = path;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray path_b = path_ret.toUtf8();
        const char* path_str = static_cast<const char*>(malloc(path_b.length() + 1));
        memcpy((void*)path_str, path_b.data(), path_b.length());
        ((char*)path_str)[path_b.length()] = '\0';
        const char* sigval1 = path_str;
        slotFunc(self, sigval1);
        libqt_free(path_str);
    });
}

libqt_string KDirWatch_Tr2(const char* s, const char* c) {
    QString _ret = KDirWatch::tr(s, c);
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
    QString _ret = KDirWatch::tr(s, c, static_cast<int>(n));
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
int KDirWatch_QBaseMetacall(KDirWatch* self, int param1, int param2, void** param3) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_Metacall_IsBase(true);
        return vkdirwatch->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KDirWatch::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnMetacall(KDirWatch* self, intptr_t slot) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_Metacall_Callback(reinterpret_cast<VirtualKDirWatch::KDirWatch_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool KDirWatch_QBaseEvent(KDirWatch* self, QEvent* event) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_Event_IsBase(true);
        return vkdirwatch->event(event);
    } else {
        return self->KDirWatch::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnEvent(KDirWatch* self, intptr_t slot) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_Event_Callback(reinterpret_cast<VirtualKDirWatch::KDirWatch_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirWatch_EventFilter(KDirWatch* self, QObject* watched, QEvent* event) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        return vkdirwatch->eventFilter(watched, event);
    } else {
        return self->KDirWatch::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KDirWatch_QBaseEventFilter(KDirWatch* self, QObject* watched, QEvent* event) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_EventFilter_IsBase(true);
        return vkdirwatch->eventFilter(watched, event);
    } else {
        return self->KDirWatch::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnEventFilter(KDirWatch* self, intptr_t slot) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_EventFilter_Callback(reinterpret_cast<VirtualKDirWatch::KDirWatch_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirWatch_TimerEvent(KDirWatch* self, QTimerEvent* event) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->timerEvent(event);
    } else {
        ((VirtualKDirWatch*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KDirWatch_QBaseTimerEvent(KDirWatch* self, QTimerEvent* event) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_TimerEvent_IsBase(true);
        vkdirwatch->timerEvent(event);
    } else {
        ((VirtualKDirWatch*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnTimerEvent(KDirWatch* self, intptr_t slot) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_TimerEvent_Callback(reinterpret_cast<VirtualKDirWatch::KDirWatch_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirWatch_ChildEvent(KDirWatch* self, QChildEvent* event) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->childEvent(event);
    } else {
        ((VirtualKDirWatch*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KDirWatch_QBaseChildEvent(KDirWatch* self, QChildEvent* event) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_ChildEvent_IsBase(true);
        vkdirwatch->childEvent(event);
    } else {
        ((VirtualKDirWatch*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnChildEvent(KDirWatch* self, intptr_t slot) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_ChildEvent_Callback(reinterpret_cast<VirtualKDirWatch::KDirWatch_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirWatch_CustomEvent(KDirWatch* self, QEvent* event) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->customEvent(event);
    } else {
        ((VirtualKDirWatch*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KDirWatch_QBaseCustomEvent(KDirWatch* self, QEvent* event) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_CustomEvent_IsBase(true);
        vkdirwatch->customEvent(event);
    } else {
        ((VirtualKDirWatch*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnCustomEvent(KDirWatch* self, intptr_t slot) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_CustomEvent_Callback(reinterpret_cast<VirtualKDirWatch::KDirWatch_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirWatch_ConnectNotify(KDirWatch* self, const QMetaMethod* signal) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->connectNotify(*signal);
    } else {
        ((VirtualKDirWatch*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KDirWatch_QBaseConnectNotify(KDirWatch* self, const QMetaMethod* signal) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_ConnectNotify_IsBase(true);
        vkdirwatch->connectNotify(*signal);
    } else {
        ((VirtualKDirWatch*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnConnectNotify(KDirWatch* self, intptr_t slot) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_ConnectNotify_Callback(reinterpret_cast<VirtualKDirWatch::KDirWatch_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KDirWatch_DisconnectNotify(KDirWatch* self, const QMetaMethod* signal) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->disconnectNotify(*signal);
    } else {
        ((VirtualKDirWatch*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KDirWatch_QBaseDisconnectNotify(KDirWatch* self, const QMetaMethod* signal) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_DisconnectNotify_IsBase(true);
        vkdirwatch->disconnectNotify(*signal);
    } else {
        ((VirtualKDirWatch*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnDisconnectNotify(KDirWatch* self, intptr_t slot) {
    auto* vkdirwatch = dynamic_cast<VirtualKDirWatch*>(self);
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_DisconnectNotify_Callback(reinterpret_cast<VirtualKDirWatch::KDirWatch_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KDirWatch_Sender(const KDirWatch* self) {
    auto* vkdirwatch = const_cast<VirtualKDirWatch*>(dynamic_cast<const VirtualKDirWatch*>(self));
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        return vkdirwatch->sender();
    } else {
        return ((VirtualKDirWatch*)self)->sender();
    }
}

// Base class handler implementation
QObject* KDirWatch_QBaseSender(const KDirWatch* self) {
    auto* vkdirwatch = const_cast<VirtualKDirWatch*>(dynamic_cast<const VirtualKDirWatch*>(self));
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_Sender_IsBase(true);
        return vkdirwatch->sender();
    } else {
        return ((VirtualKDirWatch*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnSender(const KDirWatch* self, intptr_t slot) {
    auto* vkdirwatch = const_cast<VirtualKDirWatch*>(dynamic_cast<const VirtualKDirWatch*>(self));
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_Sender_Callback(reinterpret_cast<VirtualKDirWatch::KDirWatch_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirWatch_SenderSignalIndex(const KDirWatch* self) {
    auto* vkdirwatch = const_cast<VirtualKDirWatch*>(dynamic_cast<const VirtualKDirWatch*>(self));
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        return vkdirwatch->senderSignalIndex();
    } else {
        return ((VirtualKDirWatch*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KDirWatch_QBaseSenderSignalIndex(const KDirWatch* self) {
    auto* vkdirwatch = const_cast<VirtualKDirWatch*>(dynamic_cast<const VirtualKDirWatch*>(self));
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_SenderSignalIndex_IsBase(true);
        return vkdirwatch->senderSignalIndex();
    } else {
        return ((VirtualKDirWatch*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnSenderSignalIndex(const KDirWatch* self, intptr_t slot) {
    auto* vkdirwatch = const_cast<VirtualKDirWatch*>(dynamic_cast<const VirtualKDirWatch*>(self));
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_SenderSignalIndex_Callback(reinterpret_cast<VirtualKDirWatch::KDirWatch_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KDirWatch_Receivers(const KDirWatch* self, const char* signal) {
    auto* vkdirwatch = const_cast<VirtualKDirWatch*>(dynamic_cast<const VirtualKDirWatch*>(self));
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        return vkdirwatch->receivers(signal);
    } else {
        return ((VirtualKDirWatch*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KDirWatch_QBaseReceivers(const KDirWatch* self, const char* signal) {
    auto* vkdirwatch = const_cast<VirtualKDirWatch*>(dynamic_cast<const VirtualKDirWatch*>(self));
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_Receivers_IsBase(true);
        return vkdirwatch->receivers(signal);
    } else {
        return ((VirtualKDirWatch*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnReceivers(const KDirWatch* self, intptr_t slot) {
    auto* vkdirwatch = const_cast<VirtualKDirWatch*>(dynamic_cast<const VirtualKDirWatch*>(self));
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_Receivers_Callback(reinterpret_cast<VirtualKDirWatch::KDirWatch_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDirWatch_IsSignalConnected(const KDirWatch* self, const QMetaMethod* signal) {
    auto* vkdirwatch = const_cast<VirtualKDirWatch*>(dynamic_cast<const VirtualKDirWatch*>(self));
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        return vkdirwatch->isSignalConnected(*signal);
    } else {
        return ((VirtualKDirWatch*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KDirWatch_QBaseIsSignalConnected(const KDirWatch* self, const QMetaMethod* signal) {
    auto* vkdirwatch = const_cast<VirtualKDirWatch*>(dynamic_cast<const VirtualKDirWatch*>(self));
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_IsSignalConnected_IsBase(true);
        return vkdirwatch->isSignalConnected(*signal);
    } else {
        return ((VirtualKDirWatch*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KDirWatch_OnIsSignalConnected(const KDirWatch* self, intptr_t slot) {
    auto* vkdirwatch = const_cast<VirtualKDirWatch*>(dynamic_cast<const VirtualKDirWatch*>(self));
    if (vkdirwatch && vkdirwatch->isVirtualKDirWatch) {
        vkdirwatch->setKDirWatch_IsSignalConnected_Callback(reinterpret_cast<VirtualKDirWatch::KDirWatch_IsSignalConnected_Callback>(slot));
    }
}

void KDirWatch_Delete(KDirWatch* self) {
    delete self;
}
