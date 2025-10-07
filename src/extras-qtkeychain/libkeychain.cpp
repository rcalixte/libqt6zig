#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_QKeychain__DeletePasswordJob
#define WORKAROUND_INNER_CLASS_DEFINITION_QKeychain__Job
#define WORKAROUND_INNER_CLASS_DEFINITION_QKeychain__ReadPasswordJob
#define WORKAROUND_INNER_CLASS_DEFINITION_QKeychain__WritePasswordJob
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <keychain.h>
#include "libkeychain.h"
#include "libkeychain.hxx"

QMetaObject* QKeychain__Job_MetaObject(const QKeychain__Job* self) {
    return (QMetaObject*)self->metaObject();
}

void* QKeychain__Job_Metacast(QKeychain__Job* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QKeychain__Job_Metacall(QKeychain__Job* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QKeychain__Job_Tr(const char* s) {
    QString _ret = QKeychain::Job::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSettings* QKeychain__Job_Settings(const QKeychain__Job* self) {
    return self->settings();
}

void QKeychain__Job_SetSettings(QKeychain__Job* self, QSettings* settings) {
    self->setSettings(settings);
}

void QKeychain__Job_Start(QKeychain__Job* self) {
    self->start();
}

libqt_string QKeychain__Job_Service(const QKeychain__Job* self) {
    QString _ret = self->service();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QKeychain__Job_Error(const QKeychain__Job* self) {
    return static_cast<int>(self->error());
}

libqt_string QKeychain__Job_ErrorString(const QKeychain__Job* self) {
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

bool QKeychain__Job_AutoDelete(const QKeychain__Job* self) {
    return self->autoDelete();
}

void QKeychain__Job_SetAutoDelete(QKeychain__Job* self, bool autoDelete) {
    self->setAutoDelete(autoDelete);
}

bool QKeychain__Job_InsecureFallback(const QKeychain__Job* self) {
    return self->insecureFallback();
}

void QKeychain__Job_SetInsecureFallback(QKeychain__Job* self, bool insecureFallback) {
    self->setInsecureFallback(insecureFallback);
}

libqt_string QKeychain__Job_Key(const QKeychain__Job* self) {
    QString _ret = self->key();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QKeychain__Job_SetKey(QKeychain__Job* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->setKey(key_QString);
}

void QKeychain__Job_EmitFinished(QKeychain__Job* self) {
    self->emitFinished();
}

void QKeychain__Job_EmitFinishedWithError(QKeychain__Job* self, int param1, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->emitFinishedWithError(static_cast<QKeychain::Error>(param1), errorString_QString);
}

void QKeychain__Job_Finished(QKeychain__Job* self, QKeychain__Job* param1) {
    self->finished(param1);
}

void QKeychain__Job_Connect_Finished(QKeychain__Job* self, intptr_t slot) {
    void (*slotFunc)(QKeychain__Job*, QKeychain__Job*) = reinterpret_cast<void (*)(QKeychain__Job*, QKeychain__Job*)>(slot);
    QKeychain::Job::connect(self, &QKeychain::Job::finished, [self, slotFunc](QKeychain::Job* param1) {
        QKeychain__Job* sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

libqt_string QKeychain__Job_Tr2(const char* s, const char* c) {
    QString _ret = QKeychain::Job::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QKeychain__Job_Tr3(const char* s, const char* c, int n) {
    QString _ret = QKeychain::Job::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QKeychain__Job_Delete(QKeychain__Job* self) {
    delete self;
}

QKeychain__ReadPasswordJob* QKeychain__ReadPasswordJob_new(const libqt_string service) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    return new VirtualQKeychainReadPasswordJob(service_QString);
}

QKeychain__ReadPasswordJob* QKeychain__ReadPasswordJob_new2(const libqt_string service, QObject* parent) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    return new VirtualQKeychainReadPasswordJob(service_QString, parent);
}

QMetaObject* QKeychain__ReadPasswordJob_MetaObject(const QKeychain__ReadPasswordJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* QKeychain__ReadPasswordJob_Metacast(QKeychain__ReadPasswordJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QKeychain__ReadPasswordJob_Metacall(QKeychain__ReadPasswordJob* self, int param1, int param2, void** param3) {
    auto* vqkeychain__readpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychain__readpasswordjob && vqkeychain__readpasswordjob->isVirtualQKeychainReadPasswordJob) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQKeychainReadPasswordJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QKeychain__ReadPasswordJob_Tr(const char* s) {
    QString _ret = QKeychain::ReadPasswordJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QKeychain__ReadPasswordJob_BinaryData(const QKeychain__ReadPasswordJob* self) {
    QByteArray _qb = self->binaryData();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QKeychain__ReadPasswordJob_TextData(const QKeychain__ReadPasswordJob* self) {
    QString _ret = self->textData();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QKeychain__ReadPasswordJob_Tr2(const char* s, const char* c) {
    QString _ret = QKeychain::ReadPasswordJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QKeychain__ReadPasswordJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = QKeychain::ReadPasswordJob::tr(s, c, static_cast<int>(n));
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
int QKeychain__ReadPasswordJob_QBaseMetacall(QKeychain__ReadPasswordJob* self, int param1, int param2, void** param3) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_Metacall_IsBase(true);
        return vqkeychainreadpasswordjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QKeychain::ReadPasswordJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnMetacall(QKeychain__ReadPasswordJob* self, intptr_t slot) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_Metacall_Callback(reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeychain__ReadPasswordJob_Event(QKeychain__ReadPasswordJob* self, QEvent* event) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        return vqkeychainreadpasswordjob->event(event);
    } else {
        return self->QKeychain::ReadPasswordJob::event(event);
    }
}

// Base class handler implementation
bool QKeychain__ReadPasswordJob_QBaseEvent(QKeychain__ReadPasswordJob* self, QEvent* event) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_Event_IsBase(true);
        return vqkeychainreadpasswordjob->event(event);
    } else {
        return self->QKeychain::ReadPasswordJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnEvent(QKeychain__ReadPasswordJob* self, intptr_t slot) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_Event_Callback(reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeychain__ReadPasswordJob_EventFilter(QKeychain__ReadPasswordJob* self, QObject* watched, QEvent* event) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        return vqkeychainreadpasswordjob->eventFilter(watched, event);
    } else {
        return self->QKeychain::ReadPasswordJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QKeychain__ReadPasswordJob_QBaseEventFilter(QKeychain__ReadPasswordJob* self, QObject* watched, QEvent* event) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_EventFilter_IsBase(true);
        return vqkeychainreadpasswordjob->eventFilter(watched, event);
    } else {
        return self->QKeychain::ReadPasswordJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnEventFilter(QKeychain__ReadPasswordJob* self, intptr_t slot) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_EventFilter_Callback(reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeychain__ReadPasswordJob_TimerEvent(QKeychain__ReadPasswordJob* self, QTimerEvent* event) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->timerEvent(event);
    } else {
        ((VirtualQKeychainReadPasswordJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QKeychain__ReadPasswordJob_QBaseTimerEvent(QKeychain__ReadPasswordJob* self, QTimerEvent* event) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_TimerEvent_IsBase(true);
        vqkeychainreadpasswordjob->timerEvent(event);
    } else {
        ((VirtualQKeychainReadPasswordJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnTimerEvent(QKeychain__ReadPasswordJob* self, intptr_t slot) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_TimerEvent_Callback(reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeychain__ReadPasswordJob_ChildEvent(QKeychain__ReadPasswordJob* self, QChildEvent* event) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->childEvent(event);
    } else {
        ((VirtualQKeychainReadPasswordJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QKeychain__ReadPasswordJob_QBaseChildEvent(QKeychain__ReadPasswordJob* self, QChildEvent* event) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_ChildEvent_IsBase(true);
        vqkeychainreadpasswordjob->childEvent(event);
    } else {
        ((VirtualQKeychainReadPasswordJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnChildEvent(QKeychain__ReadPasswordJob* self, intptr_t slot) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_ChildEvent_Callback(reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeychain__ReadPasswordJob_CustomEvent(QKeychain__ReadPasswordJob* self, QEvent* event) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->customEvent(event);
    } else {
        ((VirtualQKeychainReadPasswordJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QKeychain__ReadPasswordJob_QBaseCustomEvent(QKeychain__ReadPasswordJob* self, QEvent* event) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_CustomEvent_IsBase(true);
        vqkeychainreadpasswordjob->customEvent(event);
    } else {
        ((VirtualQKeychainReadPasswordJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnCustomEvent(QKeychain__ReadPasswordJob* self, intptr_t slot) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_CustomEvent_Callback(reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeychain__ReadPasswordJob_ConnectNotify(QKeychain__ReadPasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->connectNotify(*signal);
    } else {
        ((VirtualQKeychainReadPasswordJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QKeychain__ReadPasswordJob_QBaseConnectNotify(QKeychain__ReadPasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_ConnectNotify_IsBase(true);
        vqkeychainreadpasswordjob->connectNotify(*signal);
    } else {
        ((VirtualQKeychainReadPasswordJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnConnectNotify(QKeychain__ReadPasswordJob* self, intptr_t slot) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_ConnectNotify_Callback(reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeychain__ReadPasswordJob_DisconnectNotify(QKeychain__ReadPasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->disconnectNotify(*signal);
    } else {
        ((VirtualQKeychainReadPasswordJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QKeychain__ReadPasswordJob_QBaseDisconnectNotify(QKeychain__ReadPasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_DisconnectNotify_IsBase(true);
        vqkeychainreadpasswordjob->disconnectNotify(*signal);
    } else {
        ((VirtualQKeychainReadPasswordJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnDisconnectNotify(QKeychain__ReadPasswordJob* self, intptr_t slot) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_DisconnectNotify_Callback(reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeychain__ReadPasswordJob_DoStart(QKeychain__ReadPasswordJob* self) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->doStart();
    } else {
        ((VirtualQKeychainReadPasswordJob*)self)->doStart();
    }
}

// Base class handler implementation
void QKeychain__ReadPasswordJob_QBaseDoStart(QKeychain__ReadPasswordJob* self) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_DoStart_IsBase(true);
        vqkeychainreadpasswordjob->doStart();
    } else {
        ((VirtualQKeychainReadPasswordJob*)self)->doStart();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnDoStart(QKeychain__ReadPasswordJob* self, intptr_t slot) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_DoStart_Callback(reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_DoStart_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QKeychain__ReadPasswordJob_Sender(const QKeychain__ReadPasswordJob* self) {
    auto* vqkeychainreadpasswordjob = const_cast<VirtualQKeychainReadPasswordJob*>(dynamic_cast<const VirtualQKeychainReadPasswordJob*>(self));
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        return vqkeychainreadpasswordjob->sender();
    } else {
        return ((VirtualQKeychainReadPasswordJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* QKeychain__ReadPasswordJob_QBaseSender(const QKeychain__ReadPasswordJob* self) {
    auto* vqkeychainreadpasswordjob = const_cast<VirtualQKeychainReadPasswordJob*>(dynamic_cast<const VirtualQKeychainReadPasswordJob*>(self));
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_Sender_IsBase(true);
        return vqkeychainreadpasswordjob->sender();
    } else {
        return ((VirtualQKeychainReadPasswordJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnSender(const QKeychain__ReadPasswordJob* self, intptr_t slot) {
    auto* vqkeychainreadpasswordjob = const_cast<VirtualQKeychainReadPasswordJob*>(dynamic_cast<const VirtualQKeychainReadPasswordJob*>(self));
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_Sender_Callback(reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QKeychain__ReadPasswordJob_SenderSignalIndex(const QKeychain__ReadPasswordJob* self) {
    auto* vqkeychainreadpasswordjob = const_cast<VirtualQKeychainReadPasswordJob*>(dynamic_cast<const VirtualQKeychainReadPasswordJob*>(self));
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        return vqkeychainreadpasswordjob->senderSignalIndex();
    } else {
        return ((VirtualQKeychainReadPasswordJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QKeychain__ReadPasswordJob_QBaseSenderSignalIndex(const QKeychain__ReadPasswordJob* self) {
    auto* vqkeychainreadpasswordjob = const_cast<VirtualQKeychainReadPasswordJob*>(dynamic_cast<const VirtualQKeychainReadPasswordJob*>(self));
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_SenderSignalIndex_IsBase(true);
        return vqkeychainreadpasswordjob->senderSignalIndex();
    } else {
        return ((VirtualQKeychainReadPasswordJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnSenderSignalIndex(const QKeychain__ReadPasswordJob* self, intptr_t slot) {
    auto* vqkeychainreadpasswordjob = const_cast<VirtualQKeychainReadPasswordJob*>(dynamic_cast<const VirtualQKeychainReadPasswordJob*>(self));
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QKeychain__ReadPasswordJob_Receivers(const QKeychain__ReadPasswordJob* self, const char* signal) {
    auto* vqkeychainreadpasswordjob = const_cast<VirtualQKeychainReadPasswordJob*>(dynamic_cast<const VirtualQKeychainReadPasswordJob*>(self));
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        return vqkeychainreadpasswordjob->receivers(signal);
    } else {
        return ((VirtualQKeychainReadPasswordJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QKeychain__ReadPasswordJob_QBaseReceivers(const QKeychain__ReadPasswordJob* self, const char* signal) {
    auto* vqkeychainreadpasswordjob = const_cast<VirtualQKeychainReadPasswordJob*>(dynamic_cast<const VirtualQKeychainReadPasswordJob*>(self));
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_Receivers_IsBase(true);
        return vqkeychainreadpasswordjob->receivers(signal);
    } else {
        return ((VirtualQKeychainReadPasswordJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnReceivers(const QKeychain__ReadPasswordJob* self, intptr_t slot) {
    auto* vqkeychainreadpasswordjob = const_cast<VirtualQKeychainReadPasswordJob*>(dynamic_cast<const VirtualQKeychainReadPasswordJob*>(self));
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_Receivers_Callback(reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeychain__ReadPasswordJob_IsSignalConnected(const QKeychain__ReadPasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychainreadpasswordjob = const_cast<VirtualQKeychainReadPasswordJob*>(dynamic_cast<const VirtualQKeychainReadPasswordJob*>(self));
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        return vqkeychainreadpasswordjob->isSignalConnected(*signal);
    } else {
        return ((VirtualQKeychainReadPasswordJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QKeychain__ReadPasswordJob_QBaseIsSignalConnected(const QKeychain__ReadPasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychainreadpasswordjob = const_cast<VirtualQKeychainReadPasswordJob*>(dynamic_cast<const VirtualQKeychainReadPasswordJob*>(self));
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_IsSignalConnected_IsBase(true);
        return vqkeychainreadpasswordjob->isSignalConnected(*signal);
    } else {
        return ((VirtualQKeychainReadPasswordJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnIsSignalConnected(const QKeychain__ReadPasswordJob* self, intptr_t slot) {
    auto* vqkeychainreadpasswordjob = const_cast<VirtualQKeychainReadPasswordJob*>(dynamic_cast<const VirtualQKeychainReadPasswordJob*>(self));
    if (vqkeychainreadpasswordjob && vqkeychainreadpasswordjob->isVirtualQKeychainReadPasswordJob) {
        vqkeychainreadpasswordjob->setQKeychain__ReadPasswordJob_IsSignalConnected_Callback(reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_IsSignalConnected_Callback>(slot));
    }
}

void QKeychain__ReadPasswordJob_Delete(QKeychain__ReadPasswordJob* self) {
    delete self;
}

QKeychain__WritePasswordJob* QKeychain__WritePasswordJob_new(const libqt_string service) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    return new VirtualQKeychainWritePasswordJob(service_QString);
}

QKeychain__WritePasswordJob* QKeychain__WritePasswordJob_new2(const libqt_string service, QObject* parent) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    return new VirtualQKeychainWritePasswordJob(service_QString, parent);
}

QMetaObject* QKeychain__WritePasswordJob_MetaObject(const QKeychain__WritePasswordJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* QKeychain__WritePasswordJob_Metacast(QKeychain__WritePasswordJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QKeychain__WritePasswordJob_Metacall(QKeychain__WritePasswordJob* self, int param1, int param2, void** param3) {
    auto* vqkeychain__writepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychain__writepasswordjob && vqkeychain__writepasswordjob->isVirtualQKeychainWritePasswordJob) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQKeychainWritePasswordJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QKeychain__WritePasswordJob_Tr(const char* s) {
    QString _ret = QKeychain::WritePasswordJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QKeychain__WritePasswordJob_SetBinaryData(QKeychain__WritePasswordJob* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->setBinaryData(data_QByteArray);
}

void QKeychain__WritePasswordJob_SetTextData(QKeychain__WritePasswordJob* self, const libqt_string data) {
    QString data_QString = QString::fromUtf8(data.data, data.len);
    self->setTextData(data_QString);
}

libqt_string QKeychain__WritePasswordJob_Tr2(const char* s, const char* c) {
    QString _ret = QKeychain::WritePasswordJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QKeychain__WritePasswordJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = QKeychain::WritePasswordJob::tr(s, c, static_cast<int>(n));
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
int QKeychain__WritePasswordJob_QBaseMetacall(QKeychain__WritePasswordJob* self, int param1, int param2, void** param3) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_Metacall_IsBase(true);
        return vqkeychainwritepasswordjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QKeychain::WritePasswordJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnMetacall(QKeychain__WritePasswordJob* self, intptr_t slot) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_Metacall_Callback(reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeychain__WritePasswordJob_Event(QKeychain__WritePasswordJob* self, QEvent* event) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        return vqkeychainwritepasswordjob->event(event);
    } else {
        return self->QKeychain::WritePasswordJob::event(event);
    }
}

// Base class handler implementation
bool QKeychain__WritePasswordJob_QBaseEvent(QKeychain__WritePasswordJob* self, QEvent* event) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_Event_IsBase(true);
        return vqkeychainwritepasswordjob->event(event);
    } else {
        return self->QKeychain::WritePasswordJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnEvent(QKeychain__WritePasswordJob* self, intptr_t slot) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_Event_Callback(reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeychain__WritePasswordJob_EventFilter(QKeychain__WritePasswordJob* self, QObject* watched, QEvent* event) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        return vqkeychainwritepasswordjob->eventFilter(watched, event);
    } else {
        return self->QKeychain::WritePasswordJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QKeychain__WritePasswordJob_QBaseEventFilter(QKeychain__WritePasswordJob* self, QObject* watched, QEvent* event) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_EventFilter_IsBase(true);
        return vqkeychainwritepasswordjob->eventFilter(watched, event);
    } else {
        return self->QKeychain::WritePasswordJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnEventFilter(QKeychain__WritePasswordJob* self, intptr_t slot) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_EventFilter_Callback(reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeychain__WritePasswordJob_TimerEvent(QKeychain__WritePasswordJob* self, QTimerEvent* event) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->timerEvent(event);
    } else {
        ((VirtualQKeychainWritePasswordJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QKeychain__WritePasswordJob_QBaseTimerEvent(QKeychain__WritePasswordJob* self, QTimerEvent* event) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_TimerEvent_IsBase(true);
        vqkeychainwritepasswordjob->timerEvent(event);
    } else {
        ((VirtualQKeychainWritePasswordJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnTimerEvent(QKeychain__WritePasswordJob* self, intptr_t slot) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_TimerEvent_Callback(reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeychain__WritePasswordJob_ChildEvent(QKeychain__WritePasswordJob* self, QChildEvent* event) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->childEvent(event);
    } else {
        ((VirtualQKeychainWritePasswordJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QKeychain__WritePasswordJob_QBaseChildEvent(QKeychain__WritePasswordJob* self, QChildEvent* event) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_ChildEvent_IsBase(true);
        vqkeychainwritepasswordjob->childEvent(event);
    } else {
        ((VirtualQKeychainWritePasswordJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnChildEvent(QKeychain__WritePasswordJob* self, intptr_t slot) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_ChildEvent_Callback(reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeychain__WritePasswordJob_CustomEvent(QKeychain__WritePasswordJob* self, QEvent* event) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->customEvent(event);
    } else {
        ((VirtualQKeychainWritePasswordJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QKeychain__WritePasswordJob_QBaseCustomEvent(QKeychain__WritePasswordJob* self, QEvent* event) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_CustomEvent_IsBase(true);
        vqkeychainwritepasswordjob->customEvent(event);
    } else {
        ((VirtualQKeychainWritePasswordJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnCustomEvent(QKeychain__WritePasswordJob* self, intptr_t slot) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_CustomEvent_Callback(reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeychain__WritePasswordJob_ConnectNotify(QKeychain__WritePasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->connectNotify(*signal);
    } else {
        ((VirtualQKeychainWritePasswordJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QKeychain__WritePasswordJob_QBaseConnectNotify(QKeychain__WritePasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_ConnectNotify_IsBase(true);
        vqkeychainwritepasswordjob->connectNotify(*signal);
    } else {
        ((VirtualQKeychainWritePasswordJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnConnectNotify(QKeychain__WritePasswordJob* self, intptr_t slot) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_ConnectNotify_Callback(reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeychain__WritePasswordJob_DisconnectNotify(QKeychain__WritePasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->disconnectNotify(*signal);
    } else {
        ((VirtualQKeychainWritePasswordJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QKeychain__WritePasswordJob_QBaseDisconnectNotify(QKeychain__WritePasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_DisconnectNotify_IsBase(true);
        vqkeychainwritepasswordjob->disconnectNotify(*signal);
    } else {
        ((VirtualQKeychainWritePasswordJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnDisconnectNotify(QKeychain__WritePasswordJob* self, intptr_t slot) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_DisconnectNotify_Callback(reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeychain__WritePasswordJob_DoStart(QKeychain__WritePasswordJob* self) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->doStart();
    } else {
        ((VirtualQKeychainWritePasswordJob*)self)->doStart();
    }
}

// Base class handler implementation
void QKeychain__WritePasswordJob_QBaseDoStart(QKeychain__WritePasswordJob* self) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_DoStart_IsBase(true);
        vqkeychainwritepasswordjob->doStart();
    } else {
        ((VirtualQKeychainWritePasswordJob*)self)->doStart();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnDoStart(QKeychain__WritePasswordJob* self, intptr_t slot) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_DoStart_Callback(reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_DoStart_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QKeychain__WritePasswordJob_Sender(const QKeychain__WritePasswordJob* self) {
    auto* vqkeychainwritepasswordjob = const_cast<VirtualQKeychainWritePasswordJob*>(dynamic_cast<const VirtualQKeychainWritePasswordJob*>(self));
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        return vqkeychainwritepasswordjob->sender();
    } else {
        return ((VirtualQKeychainWritePasswordJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* QKeychain__WritePasswordJob_QBaseSender(const QKeychain__WritePasswordJob* self) {
    auto* vqkeychainwritepasswordjob = const_cast<VirtualQKeychainWritePasswordJob*>(dynamic_cast<const VirtualQKeychainWritePasswordJob*>(self));
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_Sender_IsBase(true);
        return vqkeychainwritepasswordjob->sender();
    } else {
        return ((VirtualQKeychainWritePasswordJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnSender(const QKeychain__WritePasswordJob* self, intptr_t slot) {
    auto* vqkeychainwritepasswordjob = const_cast<VirtualQKeychainWritePasswordJob*>(dynamic_cast<const VirtualQKeychainWritePasswordJob*>(self));
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_Sender_Callback(reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QKeychain__WritePasswordJob_SenderSignalIndex(const QKeychain__WritePasswordJob* self) {
    auto* vqkeychainwritepasswordjob = const_cast<VirtualQKeychainWritePasswordJob*>(dynamic_cast<const VirtualQKeychainWritePasswordJob*>(self));
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        return vqkeychainwritepasswordjob->senderSignalIndex();
    } else {
        return ((VirtualQKeychainWritePasswordJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QKeychain__WritePasswordJob_QBaseSenderSignalIndex(const QKeychain__WritePasswordJob* self) {
    auto* vqkeychainwritepasswordjob = const_cast<VirtualQKeychainWritePasswordJob*>(dynamic_cast<const VirtualQKeychainWritePasswordJob*>(self));
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_SenderSignalIndex_IsBase(true);
        return vqkeychainwritepasswordjob->senderSignalIndex();
    } else {
        return ((VirtualQKeychainWritePasswordJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnSenderSignalIndex(const QKeychain__WritePasswordJob* self, intptr_t slot) {
    auto* vqkeychainwritepasswordjob = const_cast<VirtualQKeychainWritePasswordJob*>(dynamic_cast<const VirtualQKeychainWritePasswordJob*>(self));
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QKeychain__WritePasswordJob_Receivers(const QKeychain__WritePasswordJob* self, const char* signal) {
    auto* vqkeychainwritepasswordjob = const_cast<VirtualQKeychainWritePasswordJob*>(dynamic_cast<const VirtualQKeychainWritePasswordJob*>(self));
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        return vqkeychainwritepasswordjob->receivers(signal);
    } else {
        return ((VirtualQKeychainWritePasswordJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QKeychain__WritePasswordJob_QBaseReceivers(const QKeychain__WritePasswordJob* self, const char* signal) {
    auto* vqkeychainwritepasswordjob = const_cast<VirtualQKeychainWritePasswordJob*>(dynamic_cast<const VirtualQKeychainWritePasswordJob*>(self));
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_Receivers_IsBase(true);
        return vqkeychainwritepasswordjob->receivers(signal);
    } else {
        return ((VirtualQKeychainWritePasswordJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnReceivers(const QKeychain__WritePasswordJob* self, intptr_t slot) {
    auto* vqkeychainwritepasswordjob = const_cast<VirtualQKeychainWritePasswordJob*>(dynamic_cast<const VirtualQKeychainWritePasswordJob*>(self));
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_Receivers_Callback(reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeychain__WritePasswordJob_IsSignalConnected(const QKeychain__WritePasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychainwritepasswordjob = const_cast<VirtualQKeychainWritePasswordJob*>(dynamic_cast<const VirtualQKeychainWritePasswordJob*>(self));
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        return vqkeychainwritepasswordjob->isSignalConnected(*signal);
    } else {
        return ((VirtualQKeychainWritePasswordJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QKeychain__WritePasswordJob_QBaseIsSignalConnected(const QKeychain__WritePasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychainwritepasswordjob = const_cast<VirtualQKeychainWritePasswordJob*>(dynamic_cast<const VirtualQKeychainWritePasswordJob*>(self));
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_IsSignalConnected_IsBase(true);
        return vqkeychainwritepasswordjob->isSignalConnected(*signal);
    } else {
        return ((VirtualQKeychainWritePasswordJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnIsSignalConnected(const QKeychain__WritePasswordJob* self, intptr_t slot) {
    auto* vqkeychainwritepasswordjob = const_cast<VirtualQKeychainWritePasswordJob*>(dynamic_cast<const VirtualQKeychainWritePasswordJob*>(self));
    if (vqkeychainwritepasswordjob && vqkeychainwritepasswordjob->isVirtualQKeychainWritePasswordJob) {
        vqkeychainwritepasswordjob->setQKeychain__WritePasswordJob_IsSignalConnected_Callback(reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_IsSignalConnected_Callback>(slot));
    }
}

void QKeychain__WritePasswordJob_Delete(QKeychain__WritePasswordJob* self) {
    delete self;
}

QKeychain__DeletePasswordJob* QKeychain__DeletePasswordJob_new(const libqt_string service) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    return new VirtualQKeychainDeletePasswordJob(service_QString);
}

QKeychain__DeletePasswordJob* QKeychain__DeletePasswordJob_new2(const libqt_string service, QObject* parent) {
    QString service_QString = QString::fromUtf8(service.data, service.len);
    return new VirtualQKeychainDeletePasswordJob(service_QString, parent);
}

QMetaObject* QKeychain__DeletePasswordJob_MetaObject(const QKeychain__DeletePasswordJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* QKeychain__DeletePasswordJob_Metacast(QKeychain__DeletePasswordJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QKeychain__DeletePasswordJob_Metacall(QKeychain__DeletePasswordJob* self, int param1, int param2, void** param3) {
    auto* vqkeychain__deletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychain__deletepasswordjob && vqkeychain__deletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQKeychainDeletePasswordJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QKeychain__DeletePasswordJob_Tr(const char* s) {
    QString _ret = QKeychain::DeletePasswordJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QKeychain__DeletePasswordJob_Tr2(const char* s, const char* c) {
    QString _ret = QKeychain::DeletePasswordJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QKeychain__DeletePasswordJob_Tr3(const char* s, const char* c, int n) {
    QString _ret = QKeychain::DeletePasswordJob::tr(s, c, static_cast<int>(n));
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
int QKeychain__DeletePasswordJob_QBaseMetacall(QKeychain__DeletePasswordJob* self, int param1, int param2, void** param3) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_Metacall_IsBase(true);
        return vqkeychaindeletepasswordjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QKeychain::DeletePasswordJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnMetacall(QKeychain__DeletePasswordJob* self, intptr_t slot) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_Metacall_Callback(reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeychain__DeletePasswordJob_Event(QKeychain__DeletePasswordJob* self, QEvent* event) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        return vqkeychaindeletepasswordjob->event(event);
    } else {
        return self->QKeychain::DeletePasswordJob::event(event);
    }
}

// Base class handler implementation
bool QKeychain__DeletePasswordJob_QBaseEvent(QKeychain__DeletePasswordJob* self, QEvent* event) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_Event_IsBase(true);
        return vqkeychaindeletepasswordjob->event(event);
    } else {
        return self->QKeychain::DeletePasswordJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnEvent(QKeychain__DeletePasswordJob* self, intptr_t slot) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_Event_Callback(reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeychain__DeletePasswordJob_EventFilter(QKeychain__DeletePasswordJob* self, QObject* watched, QEvent* event) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        return vqkeychaindeletepasswordjob->eventFilter(watched, event);
    } else {
        return self->QKeychain::DeletePasswordJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QKeychain__DeletePasswordJob_QBaseEventFilter(QKeychain__DeletePasswordJob* self, QObject* watched, QEvent* event) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_EventFilter_IsBase(true);
        return vqkeychaindeletepasswordjob->eventFilter(watched, event);
    } else {
        return self->QKeychain::DeletePasswordJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnEventFilter(QKeychain__DeletePasswordJob* self, intptr_t slot) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_EventFilter_Callback(reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeychain__DeletePasswordJob_TimerEvent(QKeychain__DeletePasswordJob* self, QTimerEvent* event) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->timerEvent(event);
    } else {
        ((VirtualQKeychainDeletePasswordJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QKeychain__DeletePasswordJob_QBaseTimerEvent(QKeychain__DeletePasswordJob* self, QTimerEvent* event) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_TimerEvent_IsBase(true);
        vqkeychaindeletepasswordjob->timerEvent(event);
    } else {
        ((VirtualQKeychainDeletePasswordJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnTimerEvent(QKeychain__DeletePasswordJob* self, intptr_t slot) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_TimerEvent_Callback(reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeychain__DeletePasswordJob_ChildEvent(QKeychain__DeletePasswordJob* self, QChildEvent* event) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->childEvent(event);
    } else {
        ((VirtualQKeychainDeletePasswordJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QKeychain__DeletePasswordJob_QBaseChildEvent(QKeychain__DeletePasswordJob* self, QChildEvent* event) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_ChildEvent_IsBase(true);
        vqkeychaindeletepasswordjob->childEvent(event);
    } else {
        ((VirtualQKeychainDeletePasswordJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnChildEvent(QKeychain__DeletePasswordJob* self, intptr_t slot) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_ChildEvent_Callback(reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeychain__DeletePasswordJob_CustomEvent(QKeychain__DeletePasswordJob* self, QEvent* event) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->customEvent(event);
    } else {
        ((VirtualQKeychainDeletePasswordJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QKeychain__DeletePasswordJob_QBaseCustomEvent(QKeychain__DeletePasswordJob* self, QEvent* event) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_CustomEvent_IsBase(true);
        vqkeychaindeletepasswordjob->customEvent(event);
    } else {
        ((VirtualQKeychainDeletePasswordJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnCustomEvent(QKeychain__DeletePasswordJob* self, intptr_t slot) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_CustomEvent_Callback(reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeychain__DeletePasswordJob_ConnectNotify(QKeychain__DeletePasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->connectNotify(*signal);
    } else {
        ((VirtualQKeychainDeletePasswordJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QKeychain__DeletePasswordJob_QBaseConnectNotify(QKeychain__DeletePasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_ConnectNotify_IsBase(true);
        vqkeychaindeletepasswordjob->connectNotify(*signal);
    } else {
        ((VirtualQKeychainDeletePasswordJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnConnectNotify(QKeychain__DeletePasswordJob* self, intptr_t slot) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_ConnectNotify_Callback(reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeychain__DeletePasswordJob_DisconnectNotify(QKeychain__DeletePasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->disconnectNotify(*signal);
    } else {
        ((VirtualQKeychainDeletePasswordJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QKeychain__DeletePasswordJob_QBaseDisconnectNotify(QKeychain__DeletePasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_DisconnectNotify_IsBase(true);
        vqkeychaindeletepasswordjob->disconnectNotify(*signal);
    } else {
        ((VirtualQKeychainDeletePasswordJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnDisconnectNotify(QKeychain__DeletePasswordJob* self, intptr_t slot) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_DisconnectNotify_Callback(reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeychain__DeletePasswordJob_DoStart(QKeychain__DeletePasswordJob* self) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->doStart();
    } else {
        ((VirtualQKeychainDeletePasswordJob*)self)->doStart();
    }
}

// Base class handler implementation
void QKeychain__DeletePasswordJob_QBaseDoStart(QKeychain__DeletePasswordJob* self) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_DoStart_IsBase(true);
        vqkeychaindeletepasswordjob->doStart();
    } else {
        ((VirtualQKeychainDeletePasswordJob*)self)->doStart();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnDoStart(QKeychain__DeletePasswordJob* self, intptr_t slot) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_DoStart_Callback(reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_DoStart_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QKeychain__DeletePasswordJob_Sender(const QKeychain__DeletePasswordJob* self) {
    auto* vqkeychaindeletepasswordjob = const_cast<VirtualQKeychainDeletePasswordJob*>(dynamic_cast<const VirtualQKeychainDeletePasswordJob*>(self));
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        return vqkeychaindeletepasswordjob->sender();
    } else {
        return ((VirtualQKeychainDeletePasswordJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* QKeychain__DeletePasswordJob_QBaseSender(const QKeychain__DeletePasswordJob* self) {
    auto* vqkeychaindeletepasswordjob = const_cast<VirtualQKeychainDeletePasswordJob*>(dynamic_cast<const VirtualQKeychainDeletePasswordJob*>(self));
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_Sender_IsBase(true);
        return vqkeychaindeletepasswordjob->sender();
    } else {
        return ((VirtualQKeychainDeletePasswordJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnSender(const QKeychain__DeletePasswordJob* self, intptr_t slot) {
    auto* vqkeychaindeletepasswordjob = const_cast<VirtualQKeychainDeletePasswordJob*>(dynamic_cast<const VirtualQKeychainDeletePasswordJob*>(self));
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_Sender_Callback(reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QKeychain__DeletePasswordJob_SenderSignalIndex(const QKeychain__DeletePasswordJob* self) {
    auto* vqkeychaindeletepasswordjob = const_cast<VirtualQKeychainDeletePasswordJob*>(dynamic_cast<const VirtualQKeychainDeletePasswordJob*>(self));
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        return vqkeychaindeletepasswordjob->senderSignalIndex();
    } else {
        return ((VirtualQKeychainDeletePasswordJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QKeychain__DeletePasswordJob_QBaseSenderSignalIndex(const QKeychain__DeletePasswordJob* self) {
    auto* vqkeychaindeletepasswordjob = const_cast<VirtualQKeychainDeletePasswordJob*>(dynamic_cast<const VirtualQKeychainDeletePasswordJob*>(self));
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_SenderSignalIndex_IsBase(true);
        return vqkeychaindeletepasswordjob->senderSignalIndex();
    } else {
        return ((VirtualQKeychainDeletePasswordJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnSenderSignalIndex(const QKeychain__DeletePasswordJob* self, intptr_t slot) {
    auto* vqkeychaindeletepasswordjob = const_cast<VirtualQKeychainDeletePasswordJob*>(dynamic_cast<const VirtualQKeychainDeletePasswordJob*>(self));
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QKeychain__DeletePasswordJob_Receivers(const QKeychain__DeletePasswordJob* self, const char* signal) {
    auto* vqkeychaindeletepasswordjob = const_cast<VirtualQKeychainDeletePasswordJob*>(dynamic_cast<const VirtualQKeychainDeletePasswordJob*>(self));
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        return vqkeychaindeletepasswordjob->receivers(signal);
    } else {
        return ((VirtualQKeychainDeletePasswordJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QKeychain__DeletePasswordJob_QBaseReceivers(const QKeychain__DeletePasswordJob* self, const char* signal) {
    auto* vqkeychaindeletepasswordjob = const_cast<VirtualQKeychainDeletePasswordJob*>(dynamic_cast<const VirtualQKeychainDeletePasswordJob*>(self));
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_Receivers_IsBase(true);
        return vqkeychaindeletepasswordjob->receivers(signal);
    } else {
        return ((VirtualQKeychainDeletePasswordJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnReceivers(const QKeychain__DeletePasswordJob* self, intptr_t slot) {
    auto* vqkeychaindeletepasswordjob = const_cast<VirtualQKeychainDeletePasswordJob*>(dynamic_cast<const VirtualQKeychainDeletePasswordJob*>(self));
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_Receivers_Callback(reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeychain__DeletePasswordJob_IsSignalConnected(const QKeychain__DeletePasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychaindeletepasswordjob = const_cast<VirtualQKeychainDeletePasswordJob*>(dynamic_cast<const VirtualQKeychainDeletePasswordJob*>(self));
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        return vqkeychaindeletepasswordjob->isSignalConnected(*signal);
    } else {
        return ((VirtualQKeychainDeletePasswordJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QKeychain__DeletePasswordJob_QBaseIsSignalConnected(const QKeychain__DeletePasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychaindeletepasswordjob = const_cast<VirtualQKeychainDeletePasswordJob*>(dynamic_cast<const VirtualQKeychainDeletePasswordJob*>(self));
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_IsSignalConnected_IsBase(true);
        return vqkeychaindeletepasswordjob->isSignalConnected(*signal);
    } else {
        return ((VirtualQKeychainDeletePasswordJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnIsSignalConnected(const QKeychain__DeletePasswordJob* self, intptr_t slot) {
    auto* vqkeychaindeletepasswordjob = const_cast<VirtualQKeychainDeletePasswordJob*>(dynamic_cast<const VirtualQKeychainDeletePasswordJob*>(self));
    if (vqkeychaindeletepasswordjob && vqkeychaindeletepasswordjob->isVirtualQKeychainDeletePasswordJob) {
        vqkeychaindeletepasswordjob->setQKeychain__DeletePasswordJob_IsSignalConnected_Callback(reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_IsSignalConnected_Callback>(slot));
    }
}

void QKeychain__DeletePasswordJob_Delete(QKeychain__DeletePasswordJob* self) {
    delete self;
}

bool QKeychain_IsAvailable() {
    return QKeychain::isAvailable();
}
