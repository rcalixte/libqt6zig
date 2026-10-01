#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__ForwardingWorkerBase
#include <KIO/UDSEntry>
#include <KIO/WorkerBase>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__WorkerResult
#include <QByteArray>
#include <QChildEvent>
#include <QDateTime>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <forwardingworkerbase.h>
#include "libforwardingworkerbase.h"
#include "libforwardingworkerbase.hxx"

KIO__ForwardingWorkerBase* KIO__ForwardingWorkerBase_new(const libqt_string protocol, const libqt_string poolSocket, const libqt_string appSocket) {
    QByteArray protocol_QByteArray(protocol.data, protocol.len);
    QByteArray poolSocket_QByteArray(poolSocket.data, poolSocket.len);
    QByteArray appSocket_QByteArray(appSocket.data, appSocket.len);
    return new VirtualKIOForwardingWorkerBase(protocol_QByteArray, poolSocket_QByteArray, appSocket_QByteArray);
}

KIO__WorkerBase* KIO__ForwardingWorkerBase_AsKIO__WorkerBase(KIO__ForwardingWorkerBase* self) {
    return static_cast<KIO::WorkerBase*>(self);
}

KIO__ForwardingWorkerBase* KIO__ForwardingWorkerBase_FromKIO__WorkerBase(KIO::WorkerBase* _kio__workerbase) {
    return dynamic_cast<KIO::ForwardingWorkerBase*>(static_cast<KIO::WorkerBase*>(_kio__workerbase));
}

QMetaObject* KIO__ForwardingWorkerBase_MetaObject(const KIO__ForwardingWorkerBase* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__ForwardingWorkerBase_Metacast(KIO__ForwardingWorkerBase* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__ForwardingWorkerBase_Metacall(KIO__ForwardingWorkerBase* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__ForwardingWorkerBase_Tr(const char* s) {
    auto _ret = KIO::ForwardingWorkerBase::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_Get(KIO__ForwardingWorkerBase* self, const QUrl* url) {
    return new KIO::WorkerResult(self->get(*url));
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_Put(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions, int flags) {
    return new KIO::WorkerResult(self->put(*url, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_Stat(KIO__ForwardingWorkerBase* self, const QUrl* url) {
    return new KIO::WorkerResult(self->stat(*url));
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_Mimetype(KIO__ForwardingWorkerBase* self, const QUrl* url) {
    return new KIO::WorkerResult(self->mimetype(*url));
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_ListDir(KIO__ForwardingWorkerBase* self, const QUrl* url) {
    return new KIO::WorkerResult(self->listDir(*url));
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_Mkdir(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions) {
    return new KIO::WorkerResult(self->mkdir(*url, static_cast<int>(permissions)));
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_Rename(KIO__ForwardingWorkerBase* self, const QUrl* src, const QUrl* dest, int flags) {
    return new KIO::WorkerResult(self->rename(*src, *dest, static_cast<KIO::JobFlags>(flags)));
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_Symlink(KIO__ForwardingWorkerBase* self, const libqt_string target, const QUrl* dest, int flags) {
    QString target_QString = QString::fromUtf8(target.data, target.len);
    return new KIO::WorkerResult(self->symlink(target_QString, *dest, static_cast<KIO::JobFlags>(flags)));
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_Chmod(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions) {
    return new KIO::WorkerResult(self->chmod(*url, static_cast<int>(permissions)));
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_SetModificationTime(KIO__ForwardingWorkerBase* self, const QUrl* url, const QDateTime* mtime) {
    return new KIO::WorkerResult(self->setModificationTime(*url, *mtime));
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_Copy(KIO__ForwardingWorkerBase* self, const QUrl* src, const QUrl* dest, int permissions, int flags) {
    return new KIO::WorkerResult(self->copy(*src, *dest, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_Del(KIO__ForwardingWorkerBase* self, const QUrl* url, bool isfile) {
    return new KIO::WorkerResult(self->del(*url, isfile));
}

bool KIO__ForwardingWorkerBase_RewriteUrl(KIO__ForwardingWorkerBase* self, const QUrl* url, QUrl* newURL) {
    auto* vkio__forwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkio__forwardingworkerbase) {
        return vkio__forwardingworkerbase->rewriteUrl(*url, *newURL);
    }
    qFatal("Error: Protected method KIO::ForwardingWorkerBase::rewriteUrl called without a directly constructed type");
}

void KIO__ForwardingWorkerBase_AdjustUDSEntry(const KIO__ForwardingWorkerBase* self, KIO__UDSEntry* entry, int creationMode) {
    auto* vkio__forwardingworkerbase = dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self);
    if (vkio__forwardingworkerbase) {
        vkio__forwardingworkerbase->adjustUDSEntry(*entry, static_cast<VirtualKIOForwardingWorkerBase::UDSEntryCreationMode>(creationMode));
    }
}

libqt_string KIO__ForwardingWorkerBase_Tr2(const char* s, const char* c) {
    auto _ret = KIO::ForwardingWorkerBase::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__ForwardingWorkerBase_Tr3(const char* s, const char* c, int n) {
    auto _ret = KIO::ForwardingWorkerBase::tr(s, c, static_cast<int>(n));
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
QMetaObject* KIO__ForwardingWorkerBase_SuperMetaObject(const KIO__ForwardingWorkerBase* self) {
    return (QMetaObject*)self->KIO::ForwardingWorkerBase::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnMetaObject(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self)))
        vkioforwardingworkerbase->kio__forwardingworkerbase_metaobject_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KIO__ForwardingWorkerBase_SuperMetacast(KIO__ForwardingWorkerBase* self, const char* param1) {
    return self->KIO::ForwardingWorkerBase::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnMetacast(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_metacast_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Metacast_Callback>(slot);
}

// Base class handler implementation
int KIO__ForwardingWorkerBase_SuperMetacall(KIO__ForwardingWorkerBase* self, int param1, int param2, void** param3) {
    return self->KIO::ForwardingWorkerBase::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnMetacall(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_metacall_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Metacall_Callback>(slot);
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperGet(KIO__ForwardingWorkerBase* self, const QUrl* url) {
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::get(*url));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnGet(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_get_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Get_Callback>(slot);
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperPut(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions, int flags) {
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::put(*url, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnPut(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_put_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Put_Callback>(slot);
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperStat(KIO__ForwardingWorkerBase* self, const QUrl* url) {
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::stat(*url));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnStat(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_stat_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Stat_Callback>(slot);
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperMimetype(KIO__ForwardingWorkerBase* self, const QUrl* url) {
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::mimetype(*url));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnMimetype(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_mimetype_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Mimetype_Callback>(slot);
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperListDir(KIO__ForwardingWorkerBase* self, const QUrl* url) {
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::listDir(*url));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnListDir(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_listdir_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_ListDir_Callback>(slot);
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperMkdir(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions) {
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::mkdir(*url, static_cast<int>(permissions)));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnMkdir(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_mkdir_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Mkdir_Callback>(slot);
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperRename(KIO__ForwardingWorkerBase* self, const QUrl* src, const QUrl* dest, int flags) {
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::rename(*src, *dest, static_cast<KIO::JobFlags>(flags)));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnRename(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_rename_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Rename_Callback>(slot);
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperSymlink(KIO__ForwardingWorkerBase* self, const libqt_string target, const QUrl* dest, int flags) {
    QString target_QString = QString::fromUtf8(target.data, target.len);
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::symlink(target_QString, *dest, static_cast<KIO::JobFlags>(flags)));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnSymlink(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_symlink_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Symlink_Callback>(slot);
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperChmod(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions) {
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::chmod(*url, static_cast<int>(permissions)));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnChmod(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_chmod_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Chmod_Callback>(slot);
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperSetModificationTime(KIO__ForwardingWorkerBase* self, const QUrl* url, const QDateTime* mtime) {
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::setModificationTime(*url, *mtime));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnSetModificationTime(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_setmodificationtime_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_SetModificationTime_Callback>(slot);
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperCopy(KIO__ForwardingWorkerBase* self, const QUrl* src, const QUrl* dest, int permissions, int flags) {
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::copy(*src, *dest, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnCopy(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_copy_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Copy_Callback>(slot);
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperDel(KIO__ForwardingWorkerBase* self, const QUrl* url, bool isfile) {
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::del(*url, isfile));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnDel(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_del_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Del_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnRewriteUrl(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_rewriteurl_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_RewriteUrl_Callback>(slot);
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_SuperAdjustUDSEntry(const KIO__ForwardingWorkerBase* self, KIO__UDSEntry* entry, int creationMode) {
    if (auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self))) {
        vkioforwardingworkerbase->KIO::ForwardingWorkerBase::adjustUDSEntry(*entry, static_cast<VirtualKIOForwardingWorkerBase::UDSEntryCreationMode>(creationMode));
    } else
        qFatal("Error: Protected virtual method KIO::ForwardingWorkerBase::adjustUDSEntry called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnAdjustUDSEntry(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self)))
        vkioforwardingworkerbase->kio__forwardingworkerbase_adjustudsentry_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_AdjustUDSEntry_Callback>(slot);
}

// Derived class handler implementation
bool KIO__ForwardingWorkerBase_Event(KIO__ForwardingWorkerBase* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KIO__ForwardingWorkerBase_SuperEvent(KIO__ForwardingWorkerBase* self, QEvent* event) {
    return self->KIO::ForwardingWorkerBase::event(event);
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnEvent(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_event_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Event_Callback>(slot);
}

// Derived class handler implementation
bool KIO__ForwardingWorkerBase_EventFilter(KIO__ForwardingWorkerBase* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KIO__ForwardingWorkerBase_SuperEventFilter(KIO__ForwardingWorkerBase* self, QObject* watched, QEvent* event) {
    return self->KIO::ForwardingWorkerBase::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnEventFilter(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_eventfilter_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_TimerEvent(KIO__ForwardingWorkerBase* self, QTimerEvent* event) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase) {
        vkioforwardingworkerbase->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::ForwardingWorkerBase::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_SuperTimerEvent(KIO__ForwardingWorkerBase* self, QTimerEvent* event) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self)) {
        vkioforwardingworkerbase->KIO::ForwardingWorkerBase::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::ForwardingWorkerBase::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnTimerEvent(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_timerevent_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_ChildEvent(KIO__ForwardingWorkerBase* self, QChildEvent* event) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase) {
        vkioforwardingworkerbase->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::ForwardingWorkerBase::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_SuperChildEvent(KIO__ForwardingWorkerBase* self, QChildEvent* event) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self)) {
        vkioforwardingworkerbase->KIO::ForwardingWorkerBase::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::ForwardingWorkerBase::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnChildEvent(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_childevent_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_CustomEvent(KIO__ForwardingWorkerBase* self, QEvent* event) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase) {
        vkioforwardingworkerbase->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::ForwardingWorkerBase::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_SuperCustomEvent(KIO__ForwardingWorkerBase* self, QEvent* event) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self)) {
        vkioforwardingworkerbase->KIO::ForwardingWorkerBase::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::ForwardingWorkerBase::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnCustomEvent(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_customevent_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_ConnectNotify(KIO__ForwardingWorkerBase* self, const QMetaMethod* signal) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase) {
        vkioforwardingworkerbase->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::ForwardingWorkerBase::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_SuperConnectNotify(KIO__ForwardingWorkerBase* self, const QMetaMethod* signal) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self)) {
        vkioforwardingworkerbase->KIO::ForwardingWorkerBase::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::ForwardingWorkerBase::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnConnectNotify(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_connectnotify_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_DisconnectNotify(KIO__ForwardingWorkerBase* self, const QMetaMethod* signal) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase) {
        vkioforwardingworkerbase->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::ForwardingWorkerBase::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_SuperDisconnectNotify(KIO__ForwardingWorkerBase* self, const QMetaMethod* signal) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self)) {
        vkioforwardingworkerbase->KIO::ForwardingWorkerBase::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::ForwardingWorkerBase::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnDisconnectNotify(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_disconnectnotify_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_AppConnectionMade(KIO__ForwardingWorkerBase* self) {
    self->appConnectionMade();
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_SuperAppConnectionMade(KIO__ForwardingWorkerBase* self) {
    self->KIO::ForwardingWorkerBase::appConnectionMade();
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnAppConnectionMade(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_appconnectionmade_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_AppConnectionMade_Callback>(slot);
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_SetHost(KIO__ForwardingWorkerBase* self, const libqt_string host, uint16_t port, const libqt_string user, const libqt_string pass) {
    QString host_QString = QString::fromUtf8(host.data, host.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString pass_QString = QString::fromUtf8(pass.data, pass.len);
    self->setHost(host_QString, static_cast<quint16>(port), user_QString, pass_QString);
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_SuperSetHost(KIO__ForwardingWorkerBase* self, const libqt_string host, uint16_t port, const libqt_string user, const libqt_string pass) {
    QString host_QString = QString::fromUtf8(host.data, host.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString pass_QString = QString::fromUtf8(pass.data, pass.len);
    self->KIO::ForwardingWorkerBase::setHost(host_QString, static_cast<quint16>(port), user_QString, pass_QString);
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnSetHost(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_sethost_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_SetHost_Callback>(slot);
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_OpenConnection(KIO__ForwardingWorkerBase* self) {
    return new KIO::WorkerResult(self->openConnection());
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperOpenConnection(KIO__ForwardingWorkerBase* self) {
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::openConnection());
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnOpenConnection(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_openconnection_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_OpenConnection_Callback>(slot);
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_CloseConnection(KIO__ForwardingWorkerBase* self) {
    self->closeConnection();
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_SuperCloseConnection(KIO__ForwardingWorkerBase* self) {
    self->KIO::ForwardingWorkerBase::closeConnection();
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnCloseConnection(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_closeconnection_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_CloseConnection_Callback>(slot);
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_Open(KIO__ForwardingWorkerBase* self, const QUrl* url, int mode) {
    return new KIO::WorkerResult(self->open(*url, static_cast<QIODevice::OpenMode>(mode)));
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperOpen(KIO__ForwardingWorkerBase* self, const QUrl* url, int mode) {
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::open(*url, static_cast<QIODevice::OpenMode>(mode)));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnOpen(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_open_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Open_Callback>(slot);
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_Read(KIO__ForwardingWorkerBase* self, unsigned long long size) {
    return new KIO::WorkerResult(self->read(static_cast<KIO::filesize_t>(size)));
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperRead(KIO__ForwardingWorkerBase* self, unsigned long long size) {
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::read(static_cast<KIO::filesize_t>(size)));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnRead(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_read_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Read_Callback>(slot);
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_Write(KIO__ForwardingWorkerBase* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return new KIO::WorkerResult(self->write(data_QByteArray));
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperWrite(KIO__ForwardingWorkerBase* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::write(data_QByteArray));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnWrite(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_write_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Write_Callback>(slot);
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_Seek(KIO__ForwardingWorkerBase* self, unsigned long long offset) {
    return new KIO::WorkerResult(self->seek(static_cast<KIO::filesize_t>(offset)));
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperSeek(KIO__ForwardingWorkerBase* self, unsigned long long offset) {
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::seek(static_cast<KIO::filesize_t>(offset)));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnSeek(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_seek_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Seek_Callback>(slot);
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_Truncate(KIO__ForwardingWorkerBase* self, unsigned long long size) {
    return new KIO::WorkerResult(self->truncate(static_cast<KIO::filesize_t>(size)));
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperTruncate(KIO__ForwardingWorkerBase* self, unsigned long long size) {
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::truncate(static_cast<KIO::filesize_t>(size)));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnTruncate(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_truncate_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Truncate_Callback>(slot);
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_Close(KIO__ForwardingWorkerBase* self) {
    return new KIO::WorkerResult(self->close());
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperClose(KIO__ForwardingWorkerBase* self) {
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::close());
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnClose(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_close_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Close_Callback>(slot);
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_Chown(KIO__ForwardingWorkerBase* self, const QUrl* url, const libqt_string owner, const libqt_string group) {
    QString owner_QString = QString::fromUtf8(owner.data, owner.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return new KIO::WorkerResult(self->chown(*url, owner_QString, group_QString));
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperChown(KIO__ForwardingWorkerBase* self, const QUrl* url, const libqt_string owner, const libqt_string group) {
    QString owner_QString = QString::fromUtf8(owner.data, owner.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::chown(*url, owner_QString, group_QString));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnChown(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_chown_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Chown_Callback>(slot);
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_Special(KIO__ForwardingWorkerBase* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return new KIO::WorkerResult(self->special(data_QByteArray));
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperSpecial(KIO__ForwardingWorkerBase* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::special(data_QByteArray));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnSpecial(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_special_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Special_Callback>(slot);
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_FileSystemFreeSpace(KIO__ForwardingWorkerBase* self, const QUrl* url) {
    return new KIO::WorkerResult(self->fileSystemFreeSpace(*url));
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_SuperFileSystemFreeSpace(KIO__ForwardingWorkerBase* self, const QUrl* url) {
    return new KIO::WorkerResult(self->KIO::ForwardingWorkerBase::fileSystemFreeSpace(*url));
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnFileSystemFreeSpace(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_filesystemfreespace_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_FileSystemFreeSpace_Callback>(slot);
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_WorkerStatus2(KIO__ForwardingWorkerBase* self) {
    self->worker_status();
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_SuperWorkerStatus2(KIO__ForwardingWorkerBase* self) {
    self->KIO::ForwardingWorkerBase::worker_status();
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnWorkerStatus2(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_workerstatus2_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_WorkerStatus2_Callback>(slot);
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_ReparseConfiguration(KIO__ForwardingWorkerBase* self) {
    self->reparseConfiguration();
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_SuperReparseConfiguration(KIO__ForwardingWorkerBase* self) {
    self->KIO::ForwardingWorkerBase::reparseConfiguration();
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnReparseConfiguration(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    if (auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self))
        vkioforwardingworkerbase->kio__forwardingworkerbase_reparseconfiguration_callback = reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_ReparseConfiguration_Callback>(slot);
}

// Derived class handler implementation
QUrl* KIO__ForwardingWorkerBase_ProcessedUrl(const KIO__ForwardingWorkerBase* self) {
    if (auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self)))
        return new QUrl(vkioforwardingworkerbase->processedUrl());
    qFatal("Error: Protected method KIO::ForwardingWorkerBase::processedUrl called without a directly constructed type");
}

// Derived class handler implementation
QUrl* KIO__ForwardingWorkerBase_RequestedUrl(const KIO__ForwardingWorkerBase* self) {
    if (auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self)))
        return new QUrl(vkioforwardingworkerbase->requestedUrl());
    qFatal("Error: Protected method KIO::ForwardingWorkerBase::requestedUrl called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KIO__ForwardingWorkerBase_Sender(const KIO__ForwardingWorkerBase* self) {
    if (auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self))) {
        return vkioforwardingworkerbase->VirtualKIOForwardingWorkerBase::sender();
    } else
        qFatal("Error: Protected method KIO::ForwardingWorkerBase::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__ForwardingWorkerBase_SenderSignalIndex(const KIO__ForwardingWorkerBase* self) {
    if (auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self))) {
        return vkioforwardingworkerbase->VirtualKIOForwardingWorkerBase::senderSignalIndex();
    } else
        qFatal("Error: Protected method KIO::ForwardingWorkerBase::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__ForwardingWorkerBase_Receivers(const KIO__ForwardingWorkerBase* self, const char* signal) {
    if (auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self))) {
        return vkioforwardingworkerbase->VirtualKIOForwardingWorkerBase::receivers(signal);
    } else
        qFatal("Error: Protected method KIO::ForwardingWorkerBase::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__ForwardingWorkerBase_IsSignalConnected(const KIO__ForwardingWorkerBase* self, const QMetaMethod* signal) {
    if (auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self))) {
        return vkioforwardingworkerbase->VirtualKIOForwardingWorkerBase::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KIO::ForwardingWorkerBase::isSignalConnected called without a directly constructed type");
}

void KIO__ForwardingWorkerBase_Delete(KIO__ForwardingWorkerBase* self) {
    delete self;
}
