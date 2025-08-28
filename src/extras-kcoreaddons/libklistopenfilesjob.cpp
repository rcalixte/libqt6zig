#include <KJob>
#include <KListOpenFilesJob>
#define WORKAROUND_INNER_CLASS_DEFINITION_KProcessList__KProcessInfo
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <klistopenfilesjob.h>
#include "libklistopenfilesjob.h"
#include "libklistopenfilesjob.hxx"

KListOpenFilesJob* KListOpenFilesJob_new(const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new VirtualKListOpenFilesJob(path_QString);
}

QMetaObject* KListOpenFilesJob_MetaObject(const KListOpenFilesJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KListOpenFilesJob_Metacast(KListOpenFilesJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KListOpenFilesJob_Metacall(KListOpenFilesJob* self, int param1, int param2, void** param3) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKListOpenFilesJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KListOpenFilesJob_OnMetacall(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_Metacall_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KListOpenFilesJob_QBaseMetacall(KListOpenFilesJob* self, int param1, int param2, void** param3) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_Metacall_IsBase(true);
        return vklistopenfilesjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKListOpenFilesJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KListOpenFilesJob_Tr(const char* s) {
    QString _ret = KListOpenFilesJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KListOpenFilesJob_Start(KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        self->start();
    } else {
        ((VirtualKListOpenFilesJob*)self)->start();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KListOpenFilesJob_OnStart(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_Start_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_Start_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KListOpenFilesJob_QBaseStart(KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_Start_IsBase(true);
        vklistopenfilesjob->start();
    } else {
        ((VirtualKListOpenFilesJob*)self)->start();
    }
}

libqt_list /* of KProcessList__KProcessInfo* */ KListOpenFilesJob_ProcessInfoList(const KListOpenFilesJob* self) {
    QList<KProcessList::KProcessInfo> _ret = self->processInfoList();
    // Convert QList<> from C++ memory to manually-managed C memory
    KProcessList__KProcessInfo** _arr = static_cast<KProcessList__KProcessInfo**>(malloc(sizeof(KProcessList__KProcessInfo*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KProcessList::KProcessInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string KListOpenFilesJob_Tr2(const char* s, const char* c) {
    QString _ret = KListOpenFilesJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KListOpenFilesJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = KListOpenFilesJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool KListOpenFilesJob_DoKill(KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        return vklistopenfilesjob->doKill();
    } else {
        return ((VirtualKListOpenFilesJob*)self)->doKill();
    }
}

// Base class handler implementation
bool KListOpenFilesJob_QBaseDoKill(KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_DoKill_IsBase(true);
        return vklistopenfilesjob->doKill();
    } else {
        return ((VirtualKListOpenFilesJob*)self)->doKill();
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnDoKill(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_DoKill_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_DoKill_Callback>(slot));
    }
}

// Derived class handler implementation
bool KListOpenFilesJob_DoSuspend(KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        return vklistopenfilesjob->doSuspend();
    } else {
        return ((VirtualKListOpenFilesJob*)self)->doSuspend();
    }
}

// Base class handler implementation
bool KListOpenFilesJob_QBaseDoSuspend(KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_DoSuspend_IsBase(true);
        return vklistopenfilesjob->doSuspend();
    } else {
        return ((VirtualKListOpenFilesJob*)self)->doSuspend();
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnDoSuspend(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_DoSuspend_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_DoSuspend_Callback>(slot));
    }
}

// Derived class handler implementation
bool KListOpenFilesJob_DoResume(KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        return vklistopenfilesjob->doResume();
    } else {
        return ((VirtualKListOpenFilesJob*)self)->doResume();
    }
}

// Base class handler implementation
bool KListOpenFilesJob_QBaseDoResume(KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_DoResume_IsBase(true);
        return vklistopenfilesjob->doResume();
    } else {
        return ((VirtualKListOpenFilesJob*)self)->doResume();
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnDoResume(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_DoResume_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_DoResume_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KListOpenFilesJob_ErrorString(const KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self));
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        QString _ret = vklistopenfilesjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KListOpenFilesJob::errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KListOpenFilesJob_QBaseErrorString(const KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self));
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_ErrorString_IsBase(true);
        QString _ret = vklistopenfilesjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KListOpenFilesJob::errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnErrorString(const KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self));
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_ErrorString_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_ErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
bool KListOpenFilesJob_Event(KListOpenFilesJob* self, QEvent* event) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        return vklistopenfilesjob->event(event);
    } else {
        return self->KListOpenFilesJob::event(event);
    }
}

// Base class handler implementation
bool KListOpenFilesJob_QBaseEvent(KListOpenFilesJob* self, QEvent* event) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_Event_IsBase(true);
        return vklistopenfilesjob->event(event);
    } else {
        return self->KListOpenFilesJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnEvent(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_Event_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KListOpenFilesJob_EventFilter(KListOpenFilesJob* self, QObject* watched, QEvent* event) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        return vklistopenfilesjob->eventFilter(watched, event);
    } else {
        return self->KListOpenFilesJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KListOpenFilesJob_QBaseEventFilter(KListOpenFilesJob* self, QObject* watched, QEvent* event) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_EventFilter_IsBase(true);
        return vklistopenfilesjob->eventFilter(watched, event);
    } else {
        return self->KListOpenFilesJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnEventFilter(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_EventFilter_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KListOpenFilesJob_TimerEvent(KListOpenFilesJob* self, QTimerEvent* event) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->timerEvent(event);
    } else {
        ((VirtualKListOpenFilesJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KListOpenFilesJob_QBaseTimerEvent(KListOpenFilesJob* self, QTimerEvent* event) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_TimerEvent_IsBase(true);
        vklistopenfilesjob->timerEvent(event);
    } else {
        ((VirtualKListOpenFilesJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnTimerEvent(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_TimerEvent_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListOpenFilesJob_ChildEvent(KListOpenFilesJob* self, QChildEvent* event) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->childEvent(event);
    } else {
        ((VirtualKListOpenFilesJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KListOpenFilesJob_QBaseChildEvent(KListOpenFilesJob* self, QChildEvent* event) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_ChildEvent_IsBase(true);
        vklistopenfilesjob->childEvent(event);
    } else {
        ((VirtualKListOpenFilesJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnChildEvent(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_ChildEvent_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListOpenFilesJob_CustomEvent(KListOpenFilesJob* self, QEvent* event) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->customEvent(event);
    } else {
        ((VirtualKListOpenFilesJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KListOpenFilesJob_QBaseCustomEvent(KListOpenFilesJob* self, QEvent* event) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_CustomEvent_IsBase(true);
        vklistopenfilesjob->customEvent(event);
    } else {
        ((VirtualKListOpenFilesJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnCustomEvent(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_CustomEvent_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListOpenFilesJob_ConnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->connectNotify(*signal);
    } else {
        ((VirtualKListOpenFilesJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KListOpenFilesJob_QBaseConnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_ConnectNotify_IsBase(true);
        vklistopenfilesjob->connectNotify(*signal);
    } else {
        ((VirtualKListOpenFilesJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnConnectNotify(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_ConnectNotify_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KListOpenFilesJob_DisconnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->disconnectNotify(*signal);
    } else {
        ((VirtualKListOpenFilesJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KListOpenFilesJob_QBaseDisconnectNotify(KListOpenFilesJob* self, const QMetaMethod* signal) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_DisconnectNotify_IsBase(true);
        vklistopenfilesjob->disconnectNotify(*signal);
    } else {
        ((VirtualKListOpenFilesJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnDisconnectNotify(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_DisconnectNotify_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KListOpenFilesJob_SetCapabilities(KListOpenFilesJob* self, int capabilities) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKListOpenFilesJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Base class handler implementation
void KListOpenFilesJob_QBaseSetCapabilities(KListOpenFilesJob* self, int capabilities) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_SetCapabilities_IsBase(true);
        vklistopenfilesjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKListOpenFilesJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnSetCapabilities(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_SetCapabilities_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_SetCapabilities_Callback>(slot));
    }
}

// Derived class handler implementation
bool KListOpenFilesJob_IsFinished(const KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self));
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        return vklistopenfilesjob->isFinished();
    } else {
        return ((VirtualKListOpenFilesJob*)self)->isFinished();
    }
}

// Base class handler implementation
bool KListOpenFilesJob_QBaseIsFinished(const KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self));
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_IsFinished_IsBase(true);
        return vklistopenfilesjob->isFinished();
    } else {
        return ((VirtualKListOpenFilesJob*)self)->isFinished();
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnIsFinished(const KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self));
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_IsFinished_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_IsFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void KListOpenFilesJob_SetError(KListOpenFilesJob* self, int errorCode) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKListOpenFilesJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Base class handler implementation
void KListOpenFilesJob_QBaseSetError(KListOpenFilesJob* self, int errorCode) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_SetError_IsBase(true);
        vklistopenfilesjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKListOpenFilesJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnSetError(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_SetError_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
void KListOpenFilesJob_SetErrorText(KListOpenFilesJob* self, const libqt_string errorText) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKListOpenFilesJob*)self)->setErrorText(errorText_QString);
    }
}

// Base class handler implementation
void KListOpenFilesJob_QBaseSetErrorText(KListOpenFilesJob* self, const libqt_string errorText) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_SetErrorText_IsBase(true);
        vklistopenfilesjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKListOpenFilesJob*)self)->setErrorText(errorText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnSetErrorText(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_SetErrorText_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_SetErrorText_Callback>(slot));
    }
}

// Derived class handler implementation
void KListOpenFilesJob_SetProcessedAmount(KListOpenFilesJob* self, int unit, unsigned long long amount) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKListOpenFilesJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KListOpenFilesJob_QBaseSetProcessedAmount(KListOpenFilesJob* self, int unit, unsigned long long amount) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_SetProcessedAmount_IsBase(true);
        vklistopenfilesjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKListOpenFilesJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnSetProcessedAmount(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_SetProcessedAmount_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_SetProcessedAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KListOpenFilesJob_SetTotalAmount(KListOpenFilesJob* self, int unit, unsigned long long amount) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKListOpenFilesJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KListOpenFilesJob_QBaseSetTotalAmount(KListOpenFilesJob* self, int unit, unsigned long long amount) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_SetTotalAmount_IsBase(true);
        vklistopenfilesjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKListOpenFilesJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnSetTotalAmount(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_SetTotalAmount_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_SetTotalAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KListOpenFilesJob_SetProgressUnit(KListOpenFilesJob* self, int unit) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKListOpenFilesJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Base class handler implementation
void KListOpenFilesJob_QBaseSetProgressUnit(KListOpenFilesJob* self, int unit) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_SetProgressUnit_IsBase(true);
        vklistopenfilesjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKListOpenFilesJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnSetProgressUnit(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_SetProgressUnit_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_SetProgressUnit_Callback>(slot));
    }
}

// Derived class handler implementation
void KListOpenFilesJob_SetPercent(KListOpenFilesJob* self, unsigned long percentage) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKListOpenFilesJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Base class handler implementation
void KListOpenFilesJob_QBaseSetPercent(KListOpenFilesJob* self, unsigned long percentage) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_SetPercent_IsBase(true);
        vklistopenfilesjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKListOpenFilesJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnSetPercent(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_SetPercent_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_SetPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListOpenFilesJob_EmitResult(KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->emitResult();
    } else {
        ((VirtualKListOpenFilesJob*)self)->emitResult();
    }
}

// Base class handler implementation
void KListOpenFilesJob_QBaseEmitResult(KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_EmitResult_IsBase(true);
        vklistopenfilesjob->emitResult();
    } else {
        ((VirtualKListOpenFilesJob*)self)->emitResult();
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnEmitResult(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_EmitResult_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_EmitResult_Callback>(slot));
    }
}

// Derived class handler implementation
void KListOpenFilesJob_EmitPercent(KListOpenFilesJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKListOpenFilesJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Base class handler implementation
void KListOpenFilesJob_QBaseEmitPercent(KListOpenFilesJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_EmitPercent_IsBase(true);
        vklistopenfilesjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKListOpenFilesJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnEmitPercent(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_EmitPercent_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_EmitPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KListOpenFilesJob_EmitSpeed(KListOpenFilesJob* self, unsigned long speed) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKListOpenFilesJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Base class handler implementation
void KListOpenFilesJob_QBaseEmitSpeed(KListOpenFilesJob* self, unsigned long speed) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_EmitSpeed_IsBase(true);
        vklistopenfilesjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKListOpenFilesJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnEmitSpeed(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_EmitSpeed_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_EmitSpeed_Callback>(slot));
    }
}

// Derived class handler implementation
void KListOpenFilesJob_StartElapsedTimer(KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->startElapsedTimer();
    } else {
        ((VirtualKListOpenFilesJob*)self)->startElapsedTimer();
    }
}

// Base class handler implementation
void KListOpenFilesJob_QBaseStartElapsedTimer(KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_StartElapsedTimer_IsBase(true);
        vklistopenfilesjob->startElapsedTimer();
    } else {
        ((VirtualKListOpenFilesJob*)self)->startElapsedTimer();
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnStartElapsedTimer(KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = dynamic_cast<VirtualKListOpenFilesJob*>(self);
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_StartElapsedTimer_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_StartElapsedTimer_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KListOpenFilesJob_Sender(const KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self));
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        return vklistopenfilesjob->sender();
    } else {
        return ((VirtualKListOpenFilesJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* KListOpenFilesJob_QBaseSender(const KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self));
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_Sender_IsBase(true);
        return vklistopenfilesjob->sender();
    } else {
        return ((VirtualKListOpenFilesJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnSender(const KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self));
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_Sender_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KListOpenFilesJob_SenderSignalIndex(const KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self));
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        return vklistopenfilesjob->senderSignalIndex();
    } else {
        return ((VirtualKListOpenFilesJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KListOpenFilesJob_QBaseSenderSignalIndex(const KListOpenFilesJob* self) {
    auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self));
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_SenderSignalIndex_IsBase(true);
        return vklistopenfilesjob->senderSignalIndex();
    } else {
        return ((VirtualKListOpenFilesJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnSenderSignalIndex(const KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self));
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KListOpenFilesJob_Receivers(const KListOpenFilesJob* self, const char* signal) {
    auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self));
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        return vklistopenfilesjob->receivers(signal);
    } else {
        return ((VirtualKListOpenFilesJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KListOpenFilesJob_QBaseReceivers(const KListOpenFilesJob* self, const char* signal) {
    auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self));
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_Receivers_IsBase(true);
        return vklistopenfilesjob->receivers(signal);
    } else {
        return ((VirtualKListOpenFilesJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnReceivers(const KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self));
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_Receivers_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KListOpenFilesJob_IsSignalConnected(const KListOpenFilesJob* self, const QMetaMethod* signal) {
    auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self));
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        return vklistopenfilesjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKListOpenFilesJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KListOpenFilesJob_QBaseIsSignalConnected(const KListOpenFilesJob* self, const QMetaMethod* signal) {
    auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self));
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_IsSignalConnected_IsBase(true);
        return vklistopenfilesjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKListOpenFilesJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KListOpenFilesJob_OnIsSignalConnected(const KListOpenFilesJob* self, intptr_t slot) {
    auto* vklistopenfilesjob = const_cast<VirtualKListOpenFilesJob*>(dynamic_cast<const VirtualKListOpenFilesJob*>(self));
    if (vklistopenfilesjob && vklistopenfilesjob->isVirtualKListOpenFilesJob) {
        vklistopenfilesjob->setKListOpenFilesJob_IsSignalConnected_Callback(reinterpret_cast<VirtualKListOpenFilesJob::KListOpenFilesJob_IsSignalConnected_Callback>(slot));
    }
}

void KListOpenFilesJob_Delete(KListOpenFilesJob* self) {
    delete self;
}
