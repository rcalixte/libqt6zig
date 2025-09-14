#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__ForwardingWorkerBase
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__UDSEntry
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__WorkerBase
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__WorkerResult
#include <QByteArray>
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

QMetaObject* KIO__ForwardingWorkerBase_MetaObject(const KIO__ForwardingWorkerBase* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__ForwardingWorkerBase_Metacast(KIO__ForwardingWorkerBase* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__ForwardingWorkerBase_Metacall(KIO__ForwardingWorkerBase* self, int param1, int param2, void** param3) {
    auto* vkio__forwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkio__forwardingworkerbase && vkio__forwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKIOForwardingWorkerBase*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KIO__ForwardingWorkerBase_Tr(const char* s) {
    QString _ret = KIO::ForwardingWorkerBase::tr(s);
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
    auto* vkio__forwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkio__forwardingworkerbase && vkio__forwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(self->get(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->get(*url));
    }
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_Put(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions, int flags) {
    auto* vkio__forwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkio__forwardingworkerbase && vkio__forwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(self->put(*url, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->put(*url, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
    }
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_Stat(KIO__ForwardingWorkerBase* self, const QUrl* url) {
    auto* vkio__forwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkio__forwardingworkerbase && vkio__forwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(self->stat(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->stat(*url));
    }
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_Mimetype(KIO__ForwardingWorkerBase* self, const QUrl* url) {
    auto* vkio__forwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkio__forwardingworkerbase && vkio__forwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(self->mimetype(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->mimetype(*url));
    }
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_ListDir(KIO__ForwardingWorkerBase* self, const QUrl* url) {
    auto* vkio__forwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkio__forwardingworkerbase && vkio__forwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(self->listDir(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->listDir(*url));
    }
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_Mkdir(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions) {
    auto* vkio__forwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkio__forwardingworkerbase && vkio__forwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(self->mkdir(*url, static_cast<int>(permissions)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->mkdir(*url, static_cast<int>(permissions)));
    }
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_Rename(KIO__ForwardingWorkerBase* self, const QUrl* src, const QUrl* dest, int flags) {
    auto* vkio__forwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkio__forwardingworkerbase && vkio__forwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(self->rename(*src, *dest, static_cast<KIO::JobFlags>(flags)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->rename(*src, *dest, static_cast<KIO::JobFlags>(flags)));
    }
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_Symlink(KIO__ForwardingWorkerBase* self, const libqt_string target, const QUrl* dest, int flags) {
    QString target_QString = QString::fromUtf8(target.data, target.len);
    auto* vkio__forwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkio__forwardingworkerbase && vkio__forwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(self->symlink(target_QString, *dest, static_cast<KIO::JobFlags>(flags)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->symlink(target_QString, *dest, static_cast<KIO::JobFlags>(flags)));
    }
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_Chmod(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions) {
    auto* vkio__forwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkio__forwardingworkerbase && vkio__forwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(self->chmod(*url, static_cast<int>(permissions)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->chmod(*url, static_cast<int>(permissions)));
    }
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_SetModificationTime(KIO__ForwardingWorkerBase* self, const QUrl* url, const QDateTime* mtime) {
    auto* vkio__forwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkio__forwardingworkerbase && vkio__forwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(self->setModificationTime(*url, *mtime));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->setModificationTime(*url, *mtime));
    }
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_Copy(KIO__ForwardingWorkerBase* self, const QUrl* src, const QUrl* dest, int permissions, int flags) {
    auto* vkio__forwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkio__forwardingworkerbase && vkio__forwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(self->copy(*src, *dest, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->copy(*src, *dest, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
    }
}

KIO__WorkerResult* KIO__ForwardingWorkerBase_Del(KIO__ForwardingWorkerBase* self, const QUrl* url, bool isfile) {
    auto* vkio__forwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkio__forwardingworkerbase && vkio__forwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(self->del(*url, isfile));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->del(*url, isfile));
    }
}

bool KIO__ForwardingWorkerBase_RewriteUrl(KIO__ForwardingWorkerBase* self, const QUrl* url, QUrl* newURL) {
    auto* vkio__forwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkio__forwardingworkerbase && vkio__forwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return vkio__forwardingworkerbase->rewriteUrl(*url, *newURL);
    }
    return {};
}

void KIO__ForwardingWorkerBase_AdjustUDSEntry(const KIO__ForwardingWorkerBase* self, KIO__UDSEntry* entry, int creationMode) {
    auto* vkio__forwardingworkerbase = dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self);
    if (vkio__forwardingworkerbase && vkio__forwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkio__forwardingworkerbase->adjustUDSEntry(*entry, static_cast<VirtualKIOForwardingWorkerBase::UDSEntryCreationMode>(creationMode));
    }
}

libqt_string KIO__ForwardingWorkerBase_Tr2(const char* s, const char* c) {
    QString _ret = KIO::ForwardingWorkerBase::tr(s, c);
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
    QString _ret = KIO::ForwardingWorkerBase::tr(s, c, static_cast<int>(n));
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
int KIO__ForwardingWorkerBase_QBaseMetacall(KIO__ForwardingWorkerBase* self, int param1, int param2, void** param3) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Metacall_IsBase(true);
        return vkioforwardingworkerbase->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::ForwardingWorkerBase::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnMetacall(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Metacall_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseGet(KIO__ForwardingWorkerBase* self, const QUrl* url) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Get_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->get(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->get(*url));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnGet(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Get_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Get_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBasePut(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions, int flags) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Put_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->put(*url, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->put(*url, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnPut(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Put_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Put_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseStat(KIO__ForwardingWorkerBase* self, const QUrl* url) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Stat_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->stat(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->stat(*url));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnStat(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Stat_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Stat_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseMimetype(KIO__ForwardingWorkerBase* self, const QUrl* url) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Mimetype_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->mimetype(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->mimetype(*url));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnMimetype(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Mimetype_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Mimetype_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseListDir(KIO__ForwardingWorkerBase* self, const QUrl* url) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_ListDir_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->listDir(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->listDir(*url));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnListDir(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_ListDir_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_ListDir_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseMkdir(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Mkdir_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->mkdir(*url, static_cast<int>(permissions)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->mkdir(*url, static_cast<int>(permissions)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnMkdir(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Mkdir_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Mkdir_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseRename(KIO__ForwardingWorkerBase* self, const QUrl* src, const QUrl* dest, int flags) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Rename_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->rename(*src, *dest, static_cast<KIO::JobFlags>(flags)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->rename(*src, *dest, static_cast<KIO::JobFlags>(flags)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnRename(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Rename_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Rename_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseSymlink(KIO__ForwardingWorkerBase* self, const libqt_string target, const QUrl* dest, int flags) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Symlink_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->symlink(target_QString, *dest, static_cast<KIO::JobFlags>(flags)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->symlink(target_QString, *dest, static_cast<KIO::JobFlags>(flags)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnSymlink(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Symlink_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Symlink_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseChmod(KIO__ForwardingWorkerBase* self, const QUrl* url, int permissions) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Chmod_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->chmod(*url, static_cast<int>(permissions)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->chmod(*url, static_cast<int>(permissions)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnChmod(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Chmod_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Chmod_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseSetModificationTime(KIO__ForwardingWorkerBase* self, const QUrl* url, const QDateTime* mtime) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_SetModificationTime_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->setModificationTime(*url, *mtime));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->setModificationTime(*url, *mtime));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnSetModificationTime(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_SetModificationTime_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_SetModificationTime_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseCopy(KIO__ForwardingWorkerBase* self, const QUrl* src, const QUrl* dest, int permissions, int flags) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Copy_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->copy(*src, *dest, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->copy(*src, *dest, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnCopy(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Copy_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Copy_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseDel(KIO__ForwardingWorkerBase* self, const QUrl* url, bool isfile) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Del_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->del(*url, isfile));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->del(*url, isfile));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnDel(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Del_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Del_Callback>(slot));
    }
}

// Base class handler implementation
bool KIO__ForwardingWorkerBase_QBaseRewriteUrl(KIO__ForwardingWorkerBase* self, const QUrl* url, QUrl* newURL) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_RewriteUrl_IsBase(true);
        return vkioforwardingworkerbase->rewriteUrl(*url, *newURL);
    } else {
        return ((VirtualKIOForwardingWorkerBase*)self)->rewriteUrl(*url, *newURL);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnRewriteUrl(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_RewriteUrl_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_RewriteUrl_Callback>(slot));
    }
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_QBaseAdjustUDSEntry(const KIO__ForwardingWorkerBase* self, KIO__UDSEntry* entry, int creationMode) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_AdjustUDSEntry_IsBase(true);
        vkioforwardingworkerbase->adjustUDSEntry(*entry, static_cast<VirtualKIOForwardingWorkerBase::UDSEntryCreationMode>(creationMode));
    } else {
        ((VirtualKIOForwardingWorkerBase*)self)->adjustUDSEntry(*entry, static_cast<VirtualKIOForwardingWorkerBase::UDSEntryCreationMode>(creationMode));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnAdjustUDSEntry(const KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_AdjustUDSEntry_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_AdjustUDSEntry_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__ForwardingWorkerBase_Event(KIO__ForwardingWorkerBase* self, QEvent* event) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return vkioforwardingworkerbase->event(event);
    } else {
        return self->KIO::ForwardingWorkerBase::event(event);
    }
}

// Base class handler implementation
bool KIO__ForwardingWorkerBase_QBaseEvent(KIO__ForwardingWorkerBase* self, QEvent* event) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Event_IsBase(true);
        return vkioforwardingworkerbase->event(event);
    } else {
        return self->KIO::ForwardingWorkerBase::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnEvent(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Event_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__ForwardingWorkerBase_EventFilter(KIO__ForwardingWorkerBase* self, QObject* watched, QEvent* event) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return vkioforwardingworkerbase->eventFilter(watched, event);
    } else {
        return self->KIO::ForwardingWorkerBase::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KIO__ForwardingWorkerBase_QBaseEventFilter(KIO__ForwardingWorkerBase* self, QObject* watched, QEvent* event) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_EventFilter_IsBase(true);
        return vkioforwardingworkerbase->eventFilter(watched, event);
    } else {
        return self->KIO::ForwardingWorkerBase::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnEventFilter(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_EventFilter_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_TimerEvent(KIO__ForwardingWorkerBase* self, QTimerEvent* event) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->timerEvent(event);
    } else {
        ((VirtualKIOForwardingWorkerBase*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_QBaseTimerEvent(KIO__ForwardingWorkerBase* self, QTimerEvent* event) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_TimerEvent_IsBase(true);
        vkioforwardingworkerbase->timerEvent(event);
    } else {
        ((VirtualKIOForwardingWorkerBase*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnTimerEvent(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_TimerEvent_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_ChildEvent(KIO__ForwardingWorkerBase* self, QChildEvent* event) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->childEvent(event);
    } else {
        ((VirtualKIOForwardingWorkerBase*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_QBaseChildEvent(KIO__ForwardingWorkerBase* self, QChildEvent* event) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_ChildEvent_IsBase(true);
        vkioforwardingworkerbase->childEvent(event);
    } else {
        ((VirtualKIOForwardingWorkerBase*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnChildEvent(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_ChildEvent_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_CustomEvent(KIO__ForwardingWorkerBase* self, QEvent* event) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->customEvent(event);
    } else {
        ((VirtualKIOForwardingWorkerBase*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_QBaseCustomEvent(KIO__ForwardingWorkerBase* self, QEvent* event) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_CustomEvent_IsBase(true);
        vkioforwardingworkerbase->customEvent(event);
    } else {
        ((VirtualKIOForwardingWorkerBase*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnCustomEvent(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_CustomEvent_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_ConnectNotify(KIO__ForwardingWorkerBase* self, const QMetaMethod* signal) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->connectNotify(*signal);
    } else {
        ((VirtualKIOForwardingWorkerBase*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_QBaseConnectNotify(KIO__ForwardingWorkerBase* self, const QMetaMethod* signal) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_ConnectNotify_IsBase(true);
        vkioforwardingworkerbase->connectNotify(*signal);
    } else {
        ((VirtualKIOForwardingWorkerBase*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnConnectNotify(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_ConnectNotify_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_DisconnectNotify(KIO__ForwardingWorkerBase* self, const QMetaMethod* signal) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->disconnectNotify(*signal);
    } else {
        ((VirtualKIOForwardingWorkerBase*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_QBaseDisconnectNotify(KIO__ForwardingWorkerBase* self, const QMetaMethod* signal) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_DisconnectNotify_IsBase(true);
        vkioforwardingworkerbase->disconnectNotify(*signal);
    } else {
        ((VirtualKIOForwardingWorkerBase*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnDisconnectNotify(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_DisconnectNotify_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_AppConnectionMade(KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->appConnectionMade();
    } else {
        self->KIO::ForwardingWorkerBase::appConnectionMade();
    }
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_QBaseAppConnectionMade(KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_AppConnectionMade_IsBase(true);
        vkioforwardingworkerbase->appConnectionMade();
    } else {
        self->KIO::ForwardingWorkerBase::appConnectionMade();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnAppConnectionMade(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_AppConnectionMade_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_AppConnectionMade_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_SetHost(KIO__ForwardingWorkerBase* self, const libqt_string host, uint16_t port, const libqt_string user, const libqt_string pass) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    QString host_QString = QString::fromUtf8(host.data, host.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString pass_QString = QString::fromUtf8(pass.data, pass.len);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setHost(host_QString, static_cast<quint16>(port), user_QString, pass_QString);
    } else {
        self->KIO::ForwardingWorkerBase::setHost(host_QString, static_cast<quint16>(port), user_QString, pass_QString);
    }
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_QBaseSetHost(KIO__ForwardingWorkerBase* self, const libqt_string host, uint16_t port, const libqt_string user, const libqt_string pass) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    QString host_QString = QString::fromUtf8(host.data, host.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString pass_QString = QString::fromUtf8(pass.data, pass.len);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_SetHost_IsBase(true);
        vkioforwardingworkerbase->setHost(host_QString, static_cast<quint16>(port), user_QString, pass_QString);
    } else {
        self->KIO::ForwardingWorkerBase::setHost(host_QString, static_cast<quint16>(port), user_QString, pass_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnSetHost(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_SetHost_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_SetHost_Callback>(slot));
    }
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_OpenConnection(KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(vkioforwardingworkerbase->openConnection());
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->openConnection());
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseOpenConnection(KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_OpenConnection_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->openConnection());
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->openConnection());
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnOpenConnection(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_OpenConnection_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_OpenConnection_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_CloseConnection(KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->closeConnection();
    } else {
        self->KIO::ForwardingWorkerBase::closeConnection();
    }
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_QBaseCloseConnection(KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_CloseConnection_IsBase(true);
        vkioforwardingworkerbase->closeConnection();
    } else {
        self->KIO::ForwardingWorkerBase::closeConnection();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnCloseConnection(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_CloseConnection_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_CloseConnection_Callback>(slot));
    }
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_Open(KIO__ForwardingWorkerBase* self, const QUrl* url, int mode) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(vkioforwardingworkerbase->open(*url, static_cast<QIODevice::OpenMode>(mode)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->open(*url, static_cast<QIODevice::OpenMode>(mode)));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseOpen(KIO__ForwardingWorkerBase* self, const QUrl* url, int mode) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Open_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->open(*url, static_cast<QIODevice::OpenMode>(mode)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->open(*url, static_cast<QIODevice::OpenMode>(mode)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnOpen(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Open_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Open_Callback>(slot));
    }
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_Read(KIO__ForwardingWorkerBase* self, unsigned long long size) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(vkioforwardingworkerbase->read(static_cast<KIO::filesize_t>(size)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->read(static_cast<KIO::filesize_t>(size)));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseRead(KIO__ForwardingWorkerBase* self, unsigned long long size) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Read_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->read(static_cast<KIO::filesize_t>(size)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->read(static_cast<KIO::filesize_t>(size)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnRead(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Read_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Read_Callback>(slot));
    }
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_Write(KIO__ForwardingWorkerBase* self, const libqt_string data) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    QByteArray data_QByteArray(data.data, data.len);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(vkioforwardingworkerbase->write(data_QByteArray));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->write(data_QByteArray));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseWrite(KIO__ForwardingWorkerBase* self, const libqt_string data) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    QByteArray data_QByteArray(data.data, data.len);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Write_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->write(data_QByteArray));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->write(data_QByteArray));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnWrite(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Write_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Write_Callback>(slot));
    }
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_Seek(KIO__ForwardingWorkerBase* self, unsigned long long offset) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(vkioforwardingworkerbase->seek(static_cast<KIO::filesize_t>(offset)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->seek(static_cast<KIO::filesize_t>(offset)));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseSeek(KIO__ForwardingWorkerBase* self, unsigned long long offset) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Seek_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->seek(static_cast<KIO::filesize_t>(offset)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->seek(static_cast<KIO::filesize_t>(offset)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnSeek(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Seek_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_Truncate(KIO__ForwardingWorkerBase* self, unsigned long long size) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(vkioforwardingworkerbase->truncate(static_cast<KIO::filesize_t>(size)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->truncate(static_cast<KIO::filesize_t>(size)));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseTruncate(KIO__ForwardingWorkerBase* self, unsigned long long size) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Truncate_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->truncate(static_cast<KIO::filesize_t>(size)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->truncate(static_cast<KIO::filesize_t>(size)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnTruncate(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Truncate_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Truncate_Callback>(slot));
    }
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_Close(KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(vkioforwardingworkerbase->close());
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->close());
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseClose(KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Close_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->close());
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->close());
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnClose(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Close_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Close_Callback>(slot));
    }
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_Chown(KIO__ForwardingWorkerBase* self, const QUrl* url, const libqt_string owner, const libqt_string group) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    QString owner_QString = QString::fromUtf8(owner.data, owner.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(vkioforwardingworkerbase->chown(*url, owner_QString, group_QString));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->chown(*url, owner_QString, group_QString));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseChown(KIO__ForwardingWorkerBase* self, const QUrl* url, const libqt_string owner, const libqt_string group) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    QString owner_QString = QString::fromUtf8(owner.data, owner.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Chown_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->chown(*url, owner_QString, group_QString));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->chown(*url, owner_QString, group_QString));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnChown(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Chown_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Chown_Callback>(slot));
    }
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_Special(KIO__ForwardingWorkerBase* self, const libqt_string data) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    QByteArray data_QByteArray(data.data, data.len);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(vkioforwardingworkerbase->special(data_QByteArray));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->special(data_QByteArray));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseSpecial(KIO__ForwardingWorkerBase* self, const libqt_string data) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    QByteArray data_QByteArray(data.data, data.len);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Special_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->special(data_QByteArray));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->special(data_QByteArray));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnSpecial(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Special_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Special_Callback>(slot));
    }
}

// Derived class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_FileSystemFreeSpace(KIO__ForwardingWorkerBase* self, const QUrl* url) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new KIO::WorkerResult(vkioforwardingworkerbase->fileSystemFreeSpace(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->fileSystemFreeSpace(*url));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__ForwardingWorkerBase_QBaseFileSystemFreeSpace(KIO__ForwardingWorkerBase* self, const QUrl* url) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_FileSystemFreeSpace_IsBase(true);
        return new KIO::WorkerResult(vkioforwardingworkerbase->fileSystemFreeSpace(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOForwardingWorkerBase*)self)->fileSystemFreeSpace(*url));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnFileSystemFreeSpace(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_FileSystemFreeSpace_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_FileSystemFreeSpace_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_WorkerStatus2(KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->worker_status();
    } else {
        self->KIO::ForwardingWorkerBase::worker_status();
    }
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_QBaseWorkerStatus2(KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_WorkerStatus2_IsBase(true);
        vkioforwardingworkerbase->worker_status();
    } else {
        self->KIO::ForwardingWorkerBase::worker_status();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnWorkerStatus2(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_WorkerStatus2_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_WorkerStatus2_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__ForwardingWorkerBase_ReparseConfiguration(KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->reparseConfiguration();
    } else {
        self->KIO::ForwardingWorkerBase::reparseConfiguration();
    }
}

// Base class handler implementation
void KIO__ForwardingWorkerBase_QBaseReparseConfiguration(KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_ReparseConfiguration_IsBase(true);
        vkioforwardingworkerbase->reparseConfiguration();
    } else {
        self->KIO::ForwardingWorkerBase::reparseConfiguration();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnReparseConfiguration(KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = dynamic_cast<VirtualKIOForwardingWorkerBase*>(self);
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_ReparseConfiguration_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_ReparseConfiguration_Callback>(slot));
    }
}

// Derived class handler implementation
QUrl* KIO__ForwardingWorkerBase_ProcessedUrl(const KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new QUrl(vkioforwardingworkerbase->processedUrl());
    }
    return {};
}

// Base class handler implementation
QUrl* KIO__ForwardingWorkerBase_QBaseProcessedUrl(const KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_ProcessedUrl_IsBase(true);
        return new QUrl(vkioforwardingworkerbase->processedUrl());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnProcessedUrl(const KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_ProcessedUrl_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_ProcessedUrl_Callback>(slot));
    }
}

// Derived class handler implementation
QUrl* KIO__ForwardingWorkerBase_RequestedUrl(const KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return new QUrl(vkioforwardingworkerbase->requestedUrl());
    }
    return {};
}

// Base class handler implementation
QUrl* KIO__ForwardingWorkerBase_QBaseRequestedUrl(const KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_RequestedUrl_IsBase(true);
        return new QUrl(vkioforwardingworkerbase->requestedUrl());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnRequestedUrl(const KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_RequestedUrl_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_RequestedUrl_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIO__ForwardingWorkerBase_Sender(const KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return vkioforwardingworkerbase->sender();
    } else {
        return ((VirtualKIOForwardingWorkerBase*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIO__ForwardingWorkerBase_QBaseSender(const KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Sender_IsBase(true);
        return vkioforwardingworkerbase->sender();
    } else {
        return ((VirtualKIOForwardingWorkerBase*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnSender(const KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Sender_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__ForwardingWorkerBase_SenderSignalIndex(const KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return vkioforwardingworkerbase->senderSignalIndex();
    } else {
        return ((VirtualKIOForwardingWorkerBase*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIO__ForwardingWorkerBase_QBaseSenderSignalIndex(const KIO__ForwardingWorkerBase* self) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_SenderSignalIndex_IsBase(true);
        return vkioforwardingworkerbase->senderSignalIndex();
    } else {
        return ((VirtualKIOForwardingWorkerBase*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnSenderSignalIndex(const KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__ForwardingWorkerBase_Receivers(const KIO__ForwardingWorkerBase* self, const char* signal) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return vkioforwardingworkerbase->receivers(signal);
    } else {
        return ((VirtualKIOForwardingWorkerBase*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIO__ForwardingWorkerBase_QBaseReceivers(const KIO__ForwardingWorkerBase* self, const char* signal) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Receivers_IsBase(true);
        return vkioforwardingworkerbase->receivers(signal);
    } else {
        return ((VirtualKIOForwardingWorkerBase*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnReceivers(const KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_Receivers_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__ForwardingWorkerBase_IsSignalConnected(const KIO__ForwardingWorkerBase* self, const QMetaMethod* signal) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        return vkioforwardingworkerbase->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOForwardingWorkerBase*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIO__ForwardingWorkerBase_QBaseIsSignalConnected(const KIO__ForwardingWorkerBase* self, const QMetaMethod* signal) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_IsSignalConnected_IsBase(true);
        return vkioforwardingworkerbase->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOForwardingWorkerBase*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__ForwardingWorkerBase_OnIsSignalConnected(const KIO__ForwardingWorkerBase* self, intptr_t slot) {
    auto* vkioforwardingworkerbase = const_cast<VirtualKIOForwardingWorkerBase*>(dynamic_cast<const VirtualKIOForwardingWorkerBase*>(self));
    if (vkioforwardingworkerbase && vkioforwardingworkerbase->isVirtualKIOForwardingWorkerBase) {
        vkioforwardingworkerbase->setKIO__ForwardingWorkerBase_IsSignalConnected_Callback(reinterpret_cast<VirtualKIOForwardingWorkerBase::KIO__ForwardingWorkerBase_IsSignalConnected_Callback>(slot));
    }
}

void KIO__ForwardingWorkerBase_Delete(KIO__ForwardingWorkerBase* self) {
    delete self;
}
