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
    auto _ret = QKeychain::Job::tr(s);
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
    auto _ret = self->service();
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
    auto _ret = self->key();
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
    QKeychain::Job::connect(self,
                            static_cast<void (QKeychain::Job::*)(QKeychain::Job*)>(&QKeychain::Job::finished),
                            [self, slotFunc](QKeychain::Job* param1) {
                                QKeychain__Job* sigval1 = param1;
                                slotFunc(self, sigval1);
                            });
}

libqt_string QKeychain__Job_Tr2(const char* s, const char* c) {
    auto _ret = QKeychain::Job::tr(s, c);
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
    auto _ret = QKeychain::Job::tr(s, c, static_cast<int>(n));
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QKeychain__ReadPasswordJob_Tr(const char* s) {
    auto _ret = QKeychain::ReadPasswordJob::tr(s);
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
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QKeychain__ReadPasswordJob_TextData(const QKeychain__ReadPasswordJob* self) {
    auto _ret = self->textData();
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
    auto _ret = QKeychain::ReadPasswordJob::tr(s, c);
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
    auto _ret = QKeychain::ReadPasswordJob::tr(s, c, static_cast<int>(n));
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
QMetaObject* QKeychain__ReadPasswordJob_SuperMetaObject(const QKeychain__ReadPasswordJob* self) {
    return (QMetaObject*)self->QKeychain::ReadPasswordJob::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnMetaObject(QKeychain__ReadPasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainreadpasswordjob = const_cast<VirtualQKeychainReadPasswordJob*>(dynamic_cast<const VirtualQKeychainReadPasswordJob*>(self)))
        vqkeychainreadpasswordjob->qkeychain__readpasswordjob_metaobject_callback = reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QKeychain__ReadPasswordJob_SuperMetacast(QKeychain__ReadPasswordJob* self, const char* param1) {
    return self->QKeychain::ReadPasswordJob::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnMetacast(QKeychain__ReadPasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self))
        vqkeychainreadpasswordjob->qkeychain__readpasswordjob_metacast_callback = reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_Metacast_Callback>(slot);
}

// Base class handler implementation
int QKeychain__ReadPasswordJob_SuperMetacall(QKeychain__ReadPasswordJob* self, int param1, int param2, void** param3) {
    return self->QKeychain::ReadPasswordJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnMetacall(QKeychain__ReadPasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self))
        vqkeychainreadpasswordjob->qkeychain__readpasswordjob_metacall_callback = reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QKeychain__ReadPasswordJob_Event(QKeychain__ReadPasswordJob* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QKeychain__ReadPasswordJob_SuperEvent(QKeychain__ReadPasswordJob* self, QEvent* event) {
    return self->QKeychain::ReadPasswordJob::event(event);
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnEvent(QKeychain__ReadPasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self))
        vqkeychainreadpasswordjob->qkeychain__readpasswordjob_event_callback = reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_Event_Callback>(slot);
}

// Derived class handler implementation
bool QKeychain__ReadPasswordJob_EventFilter(QKeychain__ReadPasswordJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QKeychain__ReadPasswordJob_SuperEventFilter(QKeychain__ReadPasswordJob* self, QObject* watched, QEvent* event) {
    return self->QKeychain::ReadPasswordJob::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnEventFilter(QKeychain__ReadPasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self))
        vqkeychainreadpasswordjob->qkeychain__readpasswordjob_eventfilter_callback = reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QKeychain__ReadPasswordJob_TimerEvent(QKeychain__ReadPasswordJob* self, QTimerEvent* event) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob) {
        vqkeychainreadpasswordjob->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeychain::ReadPasswordJob::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeychain__ReadPasswordJob_SuperTimerEvent(QKeychain__ReadPasswordJob* self, QTimerEvent* event) {
    if (auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self)) {
        vqkeychainreadpasswordjob->QKeychain::ReadPasswordJob::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeychain::ReadPasswordJob::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnTimerEvent(QKeychain__ReadPasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self))
        vqkeychainreadpasswordjob->qkeychain__readpasswordjob_timerevent_callback = reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeychain__ReadPasswordJob_ChildEvent(QKeychain__ReadPasswordJob* self, QChildEvent* event) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob) {
        vqkeychainreadpasswordjob->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeychain::ReadPasswordJob::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeychain__ReadPasswordJob_SuperChildEvent(QKeychain__ReadPasswordJob* self, QChildEvent* event) {
    if (auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self)) {
        vqkeychainreadpasswordjob->QKeychain::ReadPasswordJob::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeychain::ReadPasswordJob::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnChildEvent(QKeychain__ReadPasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self))
        vqkeychainreadpasswordjob->qkeychain__readpasswordjob_childevent_callback = reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeychain__ReadPasswordJob_CustomEvent(QKeychain__ReadPasswordJob* self, QEvent* event) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob) {
        vqkeychainreadpasswordjob->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeychain::ReadPasswordJob::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeychain__ReadPasswordJob_SuperCustomEvent(QKeychain__ReadPasswordJob* self, QEvent* event) {
    if (auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self)) {
        vqkeychainreadpasswordjob->QKeychain::ReadPasswordJob::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeychain::ReadPasswordJob::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnCustomEvent(QKeychain__ReadPasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self))
        vqkeychainreadpasswordjob->qkeychain__readpasswordjob_customevent_callback = reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeychain__ReadPasswordJob_ConnectNotify(QKeychain__ReadPasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob) {
        vqkeychainreadpasswordjob->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QKeychain::ReadPasswordJob::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeychain__ReadPasswordJob_SuperConnectNotify(QKeychain__ReadPasswordJob* self, const QMetaMethod* signal) {
    if (auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self)) {
        vqkeychainreadpasswordjob->QKeychain::ReadPasswordJob::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QKeychain::ReadPasswordJob::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnConnectNotify(QKeychain__ReadPasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self))
        vqkeychainreadpasswordjob->qkeychain__readpasswordjob_connectnotify_callback = reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QKeychain__ReadPasswordJob_DisconnectNotify(QKeychain__ReadPasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self);
    if (vqkeychainreadpasswordjob) {
        vqkeychainreadpasswordjob->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QKeychain::ReadPasswordJob::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeychain__ReadPasswordJob_SuperDisconnectNotify(QKeychain__ReadPasswordJob* self, const QMetaMethod* signal) {
    if (auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self)) {
        vqkeychainreadpasswordjob->QKeychain::ReadPasswordJob::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QKeychain::ReadPasswordJob::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeychain__ReadPasswordJob_OnDisconnectNotify(QKeychain__ReadPasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self))
        vqkeychainreadpasswordjob->qkeychain__readpasswordjob_disconnectnotify_callback = reinterpret_cast<VirtualQKeychainReadPasswordJob::QKeychain__ReadPasswordJob_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QKeychain__ReadPasswordJob_DoStart(QKeychain__ReadPasswordJob* self) {
    if (auto* vqkeychainreadpasswordjob = dynamic_cast<VirtualQKeychainReadPasswordJob*>(self)) {
        vqkeychainreadpasswordjob->VirtualQKeychainReadPasswordJob::doStart();
    } else
        qFatal("Error: Protected method QKeychain::ReadPasswordJob::doStart called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QKeychain__ReadPasswordJob_Sender(const QKeychain__ReadPasswordJob* self) {
    if (auto* vqkeychainreadpasswordjob = const_cast<VirtualQKeychainReadPasswordJob*>(dynamic_cast<const VirtualQKeychainReadPasswordJob*>(self))) {
        return vqkeychainreadpasswordjob->VirtualQKeychainReadPasswordJob::sender();
    } else
        qFatal("Error: Protected method QKeychain::ReadPasswordJob::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QKeychain__ReadPasswordJob_SenderSignalIndex(const QKeychain__ReadPasswordJob* self) {
    if (auto* vqkeychainreadpasswordjob = const_cast<VirtualQKeychainReadPasswordJob*>(dynamic_cast<const VirtualQKeychainReadPasswordJob*>(self))) {
        return vqkeychainreadpasswordjob->VirtualQKeychainReadPasswordJob::senderSignalIndex();
    } else
        qFatal("Error: Protected method QKeychain::ReadPasswordJob::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QKeychain__ReadPasswordJob_Receivers(const QKeychain__ReadPasswordJob* self, const char* signal) {
    if (auto* vqkeychainreadpasswordjob = const_cast<VirtualQKeychainReadPasswordJob*>(dynamic_cast<const VirtualQKeychainReadPasswordJob*>(self))) {
        return vqkeychainreadpasswordjob->VirtualQKeychainReadPasswordJob::receivers(signal);
    } else
        qFatal("Error: Protected method QKeychain::ReadPasswordJob::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QKeychain__ReadPasswordJob_IsSignalConnected(const QKeychain__ReadPasswordJob* self, const QMetaMethod* signal) {
    if (auto* vqkeychainreadpasswordjob = const_cast<VirtualQKeychainReadPasswordJob*>(dynamic_cast<const VirtualQKeychainReadPasswordJob*>(self))) {
        return vqkeychainreadpasswordjob->VirtualQKeychainReadPasswordJob::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QKeychain::ReadPasswordJob::isSignalConnected called without a directly constructed type");
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QKeychain__WritePasswordJob_Tr(const char* s) {
    auto _ret = QKeychain::WritePasswordJob::tr(s);
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
    auto _ret = QKeychain::WritePasswordJob::tr(s, c);
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
    auto _ret = QKeychain::WritePasswordJob::tr(s, c, static_cast<int>(n));
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
QMetaObject* QKeychain__WritePasswordJob_SuperMetaObject(const QKeychain__WritePasswordJob* self) {
    return (QMetaObject*)self->QKeychain::WritePasswordJob::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnMetaObject(QKeychain__WritePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainwritepasswordjob = const_cast<VirtualQKeychainWritePasswordJob*>(dynamic_cast<const VirtualQKeychainWritePasswordJob*>(self)))
        vqkeychainwritepasswordjob->qkeychain__writepasswordjob_metaobject_callback = reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QKeychain__WritePasswordJob_SuperMetacast(QKeychain__WritePasswordJob* self, const char* param1) {
    return self->QKeychain::WritePasswordJob::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnMetacast(QKeychain__WritePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self))
        vqkeychainwritepasswordjob->qkeychain__writepasswordjob_metacast_callback = reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_Metacast_Callback>(slot);
}

// Base class handler implementation
int QKeychain__WritePasswordJob_SuperMetacall(QKeychain__WritePasswordJob* self, int param1, int param2, void** param3) {
    return self->QKeychain::WritePasswordJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnMetacall(QKeychain__WritePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self))
        vqkeychainwritepasswordjob->qkeychain__writepasswordjob_metacall_callback = reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QKeychain__WritePasswordJob_Event(QKeychain__WritePasswordJob* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QKeychain__WritePasswordJob_SuperEvent(QKeychain__WritePasswordJob* self, QEvent* event) {
    return self->QKeychain::WritePasswordJob::event(event);
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnEvent(QKeychain__WritePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self))
        vqkeychainwritepasswordjob->qkeychain__writepasswordjob_event_callback = reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_Event_Callback>(slot);
}

// Derived class handler implementation
bool QKeychain__WritePasswordJob_EventFilter(QKeychain__WritePasswordJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QKeychain__WritePasswordJob_SuperEventFilter(QKeychain__WritePasswordJob* self, QObject* watched, QEvent* event) {
    return self->QKeychain::WritePasswordJob::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnEventFilter(QKeychain__WritePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self))
        vqkeychainwritepasswordjob->qkeychain__writepasswordjob_eventfilter_callback = reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QKeychain__WritePasswordJob_TimerEvent(QKeychain__WritePasswordJob* self, QTimerEvent* event) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob) {
        vqkeychainwritepasswordjob->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeychain::WritePasswordJob::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeychain__WritePasswordJob_SuperTimerEvent(QKeychain__WritePasswordJob* self, QTimerEvent* event) {
    if (auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self)) {
        vqkeychainwritepasswordjob->QKeychain::WritePasswordJob::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeychain::WritePasswordJob::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnTimerEvent(QKeychain__WritePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self))
        vqkeychainwritepasswordjob->qkeychain__writepasswordjob_timerevent_callback = reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeychain__WritePasswordJob_ChildEvent(QKeychain__WritePasswordJob* self, QChildEvent* event) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob) {
        vqkeychainwritepasswordjob->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeychain::WritePasswordJob::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeychain__WritePasswordJob_SuperChildEvent(QKeychain__WritePasswordJob* self, QChildEvent* event) {
    if (auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self)) {
        vqkeychainwritepasswordjob->QKeychain::WritePasswordJob::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeychain::WritePasswordJob::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnChildEvent(QKeychain__WritePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self))
        vqkeychainwritepasswordjob->qkeychain__writepasswordjob_childevent_callback = reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeychain__WritePasswordJob_CustomEvent(QKeychain__WritePasswordJob* self, QEvent* event) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob) {
        vqkeychainwritepasswordjob->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeychain::WritePasswordJob::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeychain__WritePasswordJob_SuperCustomEvent(QKeychain__WritePasswordJob* self, QEvent* event) {
    if (auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self)) {
        vqkeychainwritepasswordjob->QKeychain::WritePasswordJob::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeychain::WritePasswordJob::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnCustomEvent(QKeychain__WritePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self))
        vqkeychainwritepasswordjob->qkeychain__writepasswordjob_customevent_callback = reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeychain__WritePasswordJob_ConnectNotify(QKeychain__WritePasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob) {
        vqkeychainwritepasswordjob->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QKeychain::WritePasswordJob::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeychain__WritePasswordJob_SuperConnectNotify(QKeychain__WritePasswordJob* self, const QMetaMethod* signal) {
    if (auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self)) {
        vqkeychainwritepasswordjob->QKeychain::WritePasswordJob::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QKeychain::WritePasswordJob::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnConnectNotify(QKeychain__WritePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self))
        vqkeychainwritepasswordjob->qkeychain__writepasswordjob_connectnotify_callback = reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QKeychain__WritePasswordJob_DisconnectNotify(QKeychain__WritePasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self);
    if (vqkeychainwritepasswordjob) {
        vqkeychainwritepasswordjob->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QKeychain::WritePasswordJob::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeychain__WritePasswordJob_SuperDisconnectNotify(QKeychain__WritePasswordJob* self, const QMetaMethod* signal) {
    if (auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self)) {
        vqkeychainwritepasswordjob->QKeychain::WritePasswordJob::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QKeychain::WritePasswordJob::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeychain__WritePasswordJob_OnDisconnectNotify(QKeychain__WritePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self))
        vqkeychainwritepasswordjob->qkeychain__writepasswordjob_disconnectnotify_callback = reinterpret_cast<VirtualQKeychainWritePasswordJob::QKeychain__WritePasswordJob_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QKeychain__WritePasswordJob_DoStart(QKeychain__WritePasswordJob* self) {
    if (auto* vqkeychainwritepasswordjob = dynamic_cast<VirtualQKeychainWritePasswordJob*>(self)) {
        vqkeychainwritepasswordjob->VirtualQKeychainWritePasswordJob::doStart();
    } else
        qFatal("Error: Protected method QKeychain::WritePasswordJob::doStart called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QKeychain__WritePasswordJob_Sender(const QKeychain__WritePasswordJob* self) {
    if (auto* vqkeychainwritepasswordjob = const_cast<VirtualQKeychainWritePasswordJob*>(dynamic_cast<const VirtualQKeychainWritePasswordJob*>(self))) {
        return vqkeychainwritepasswordjob->VirtualQKeychainWritePasswordJob::sender();
    } else
        qFatal("Error: Protected method QKeychain::WritePasswordJob::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QKeychain__WritePasswordJob_SenderSignalIndex(const QKeychain__WritePasswordJob* self) {
    if (auto* vqkeychainwritepasswordjob = const_cast<VirtualQKeychainWritePasswordJob*>(dynamic_cast<const VirtualQKeychainWritePasswordJob*>(self))) {
        return vqkeychainwritepasswordjob->VirtualQKeychainWritePasswordJob::senderSignalIndex();
    } else
        qFatal("Error: Protected method QKeychain::WritePasswordJob::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QKeychain__WritePasswordJob_Receivers(const QKeychain__WritePasswordJob* self, const char* signal) {
    if (auto* vqkeychainwritepasswordjob = const_cast<VirtualQKeychainWritePasswordJob*>(dynamic_cast<const VirtualQKeychainWritePasswordJob*>(self))) {
        return vqkeychainwritepasswordjob->VirtualQKeychainWritePasswordJob::receivers(signal);
    } else
        qFatal("Error: Protected method QKeychain::WritePasswordJob::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QKeychain__WritePasswordJob_IsSignalConnected(const QKeychain__WritePasswordJob* self, const QMetaMethod* signal) {
    if (auto* vqkeychainwritepasswordjob = const_cast<VirtualQKeychainWritePasswordJob*>(dynamic_cast<const VirtualQKeychainWritePasswordJob*>(self))) {
        return vqkeychainwritepasswordjob->VirtualQKeychainWritePasswordJob::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QKeychain::WritePasswordJob::isSignalConnected called without a directly constructed type");
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QKeychain__DeletePasswordJob_Tr(const char* s) {
    auto _ret = QKeychain::DeletePasswordJob::tr(s);
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
    auto _ret = QKeychain::DeletePasswordJob::tr(s, c);
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
    auto _ret = QKeychain::DeletePasswordJob::tr(s, c, static_cast<int>(n));
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
QMetaObject* QKeychain__DeletePasswordJob_SuperMetaObject(const QKeychain__DeletePasswordJob* self) {
    return (QMetaObject*)self->QKeychain::DeletePasswordJob::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnMetaObject(QKeychain__DeletePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychaindeletepasswordjob = const_cast<VirtualQKeychainDeletePasswordJob*>(dynamic_cast<const VirtualQKeychainDeletePasswordJob*>(self)))
        vqkeychaindeletepasswordjob->qkeychain__deletepasswordjob_metaobject_callback = reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QKeychain__DeletePasswordJob_SuperMetacast(QKeychain__DeletePasswordJob* self, const char* param1) {
    return self->QKeychain::DeletePasswordJob::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnMetacast(QKeychain__DeletePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self))
        vqkeychaindeletepasswordjob->qkeychain__deletepasswordjob_metacast_callback = reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_Metacast_Callback>(slot);
}

// Base class handler implementation
int QKeychain__DeletePasswordJob_SuperMetacall(QKeychain__DeletePasswordJob* self, int param1, int param2, void** param3) {
    return self->QKeychain::DeletePasswordJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnMetacall(QKeychain__DeletePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self))
        vqkeychaindeletepasswordjob->qkeychain__deletepasswordjob_metacall_callback = reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QKeychain__DeletePasswordJob_Event(QKeychain__DeletePasswordJob* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QKeychain__DeletePasswordJob_SuperEvent(QKeychain__DeletePasswordJob* self, QEvent* event) {
    return self->QKeychain::DeletePasswordJob::event(event);
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnEvent(QKeychain__DeletePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self))
        vqkeychaindeletepasswordjob->qkeychain__deletepasswordjob_event_callback = reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_Event_Callback>(slot);
}

// Derived class handler implementation
bool QKeychain__DeletePasswordJob_EventFilter(QKeychain__DeletePasswordJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QKeychain__DeletePasswordJob_SuperEventFilter(QKeychain__DeletePasswordJob* self, QObject* watched, QEvent* event) {
    return self->QKeychain::DeletePasswordJob::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnEventFilter(QKeychain__DeletePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self))
        vqkeychaindeletepasswordjob->qkeychain__deletepasswordjob_eventfilter_callback = reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QKeychain__DeletePasswordJob_TimerEvent(QKeychain__DeletePasswordJob* self, QTimerEvent* event) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob) {
        vqkeychaindeletepasswordjob->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeychain::DeletePasswordJob::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeychain__DeletePasswordJob_SuperTimerEvent(QKeychain__DeletePasswordJob* self, QTimerEvent* event) {
    if (auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self)) {
        vqkeychaindeletepasswordjob->QKeychain::DeletePasswordJob::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeychain::DeletePasswordJob::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnTimerEvent(QKeychain__DeletePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self))
        vqkeychaindeletepasswordjob->qkeychain__deletepasswordjob_timerevent_callback = reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeychain__DeletePasswordJob_ChildEvent(QKeychain__DeletePasswordJob* self, QChildEvent* event) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob) {
        vqkeychaindeletepasswordjob->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeychain::DeletePasswordJob::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeychain__DeletePasswordJob_SuperChildEvent(QKeychain__DeletePasswordJob* self, QChildEvent* event) {
    if (auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self)) {
        vqkeychaindeletepasswordjob->QKeychain::DeletePasswordJob::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeychain::DeletePasswordJob::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnChildEvent(QKeychain__DeletePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self))
        vqkeychaindeletepasswordjob->qkeychain__deletepasswordjob_childevent_callback = reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeychain__DeletePasswordJob_CustomEvent(QKeychain__DeletePasswordJob* self, QEvent* event) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob) {
        vqkeychaindeletepasswordjob->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeychain::DeletePasswordJob::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeychain__DeletePasswordJob_SuperCustomEvent(QKeychain__DeletePasswordJob* self, QEvent* event) {
    if (auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self)) {
        vqkeychaindeletepasswordjob->QKeychain::DeletePasswordJob::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeychain::DeletePasswordJob::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnCustomEvent(QKeychain__DeletePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self))
        vqkeychaindeletepasswordjob->qkeychain__deletepasswordjob_customevent_callback = reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeychain__DeletePasswordJob_ConnectNotify(QKeychain__DeletePasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob) {
        vqkeychaindeletepasswordjob->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QKeychain::DeletePasswordJob::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeychain__DeletePasswordJob_SuperConnectNotify(QKeychain__DeletePasswordJob* self, const QMetaMethod* signal) {
    if (auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self)) {
        vqkeychaindeletepasswordjob->QKeychain::DeletePasswordJob::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QKeychain::DeletePasswordJob::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnConnectNotify(QKeychain__DeletePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self))
        vqkeychaindeletepasswordjob->qkeychain__deletepasswordjob_connectnotify_callback = reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QKeychain__DeletePasswordJob_DisconnectNotify(QKeychain__DeletePasswordJob* self, const QMetaMethod* signal) {
    auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self);
    if (vqkeychaindeletepasswordjob) {
        vqkeychaindeletepasswordjob->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QKeychain::DeletePasswordJob::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeychain__DeletePasswordJob_SuperDisconnectNotify(QKeychain__DeletePasswordJob* self, const QMetaMethod* signal) {
    if (auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self)) {
        vqkeychaindeletepasswordjob->QKeychain::DeletePasswordJob::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QKeychain::DeletePasswordJob::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeychain__DeletePasswordJob_OnDisconnectNotify(QKeychain__DeletePasswordJob* self, intptr_t slot) {
    if (auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self))
        vqkeychaindeletepasswordjob->qkeychain__deletepasswordjob_disconnectnotify_callback = reinterpret_cast<VirtualQKeychainDeletePasswordJob::QKeychain__DeletePasswordJob_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QKeychain__DeletePasswordJob_DoStart(QKeychain__DeletePasswordJob* self) {
    if (auto* vqkeychaindeletepasswordjob = dynamic_cast<VirtualQKeychainDeletePasswordJob*>(self)) {
        vqkeychaindeletepasswordjob->VirtualQKeychainDeletePasswordJob::doStart();
    } else
        qFatal("Error: Protected method QKeychain::DeletePasswordJob::doStart called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QKeychain__DeletePasswordJob_Sender(const QKeychain__DeletePasswordJob* self) {
    if (auto* vqkeychaindeletepasswordjob = const_cast<VirtualQKeychainDeletePasswordJob*>(dynamic_cast<const VirtualQKeychainDeletePasswordJob*>(self))) {
        return vqkeychaindeletepasswordjob->VirtualQKeychainDeletePasswordJob::sender();
    } else
        qFatal("Error: Protected method QKeychain::DeletePasswordJob::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QKeychain__DeletePasswordJob_SenderSignalIndex(const QKeychain__DeletePasswordJob* self) {
    if (auto* vqkeychaindeletepasswordjob = const_cast<VirtualQKeychainDeletePasswordJob*>(dynamic_cast<const VirtualQKeychainDeletePasswordJob*>(self))) {
        return vqkeychaindeletepasswordjob->VirtualQKeychainDeletePasswordJob::senderSignalIndex();
    } else
        qFatal("Error: Protected method QKeychain::DeletePasswordJob::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QKeychain__DeletePasswordJob_Receivers(const QKeychain__DeletePasswordJob* self, const char* signal) {
    if (auto* vqkeychaindeletepasswordjob = const_cast<VirtualQKeychainDeletePasswordJob*>(dynamic_cast<const VirtualQKeychainDeletePasswordJob*>(self))) {
        return vqkeychaindeletepasswordjob->VirtualQKeychainDeletePasswordJob::receivers(signal);
    } else
        qFatal("Error: Protected method QKeychain::DeletePasswordJob::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QKeychain__DeletePasswordJob_IsSignalConnected(const QKeychain__DeletePasswordJob* self, const QMetaMethod* signal) {
    if (auto* vqkeychaindeletepasswordjob = const_cast<VirtualQKeychainDeletePasswordJob*>(dynamic_cast<const VirtualQKeychainDeletePasswordJob*>(self))) {
        return vqkeychaindeletepasswordjob->VirtualQKeychainDeletePasswordJob::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QKeychain::DeletePasswordJob::isSignalConnected called without a directly constructed type");
}

void QKeychain__DeletePasswordJob_Delete(QKeychain__DeletePasswordJob* self) {
    delete self;
}

bool QKeychain_IsAvailable() {
    return QKeychain::isAvailable();
}
