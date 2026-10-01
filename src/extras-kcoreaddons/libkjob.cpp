#include <KJob>
#include <KJobUiDelegate>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kjob.h>
#include "libkjob.h"
#include "libkjob.hxx"

KJob* KJob_new() {
    return new VirtualKJob();
}

KJob* KJob_new2(QObject* parent) {
    return new VirtualKJob(parent);
}

QMetaObject* KJob_MetaObject(const KJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KJob_Metacast(KJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KJob_Metacall(KJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KJob_Tr(const char* s) {
    auto _ret = KJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KJob_SetUiDelegate(KJob* self, KJobUiDelegate* delegate) {
    self->setUiDelegate(delegate);
}

KJobUiDelegate* KJob_UiDelegate(const KJob* self) {
    return self->uiDelegate();
}

int KJob_Capabilities(const KJob* self) {
    return static_cast<int>(self->capabilities());
}

bool KJob_IsSuspended(const KJob* self) {
    return self->isSuspended();
}

void KJob_Start(KJob* self) {
    self->start();
}

bool KJob_Kill(KJob* self) {
    return self->kill();
}

bool KJob_Suspend(KJob* self) {
    return self->suspend();
}

bool KJob_Resume(KJob* self) {
    return self->resume();
}

bool KJob_DoKill(KJob* self) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob) {
        return vkjob->doKill();
    }
    qFatal("Error: Protected method KJob::doKill called without a directly constructed type");
}

bool KJob_DoSuspend(KJob* self) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob) {
        return vkjob->doSuspend();
    }
    qFatal("Error: Protected method KJob::doSuspend called without a directly constructed type");
}

bool KJob_DoResume(KJob* self) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob) {
        return vkjob->doResume();
    }
    qFatal("Error: Protected method KJob::doResume called without a directly constructed type");
}

bool KJob_Exec(KJob* self) {
    return self->exec();
}

int KJob_Error(const KJob* self) {
    return self->error();
}

libqt_string KJob_ErrorText(const KJob* self) {
    auto _ret = self->errorText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KJob_ErrorString(const KJob* self) {
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

unsigned long long KJob_ProcessedAmount(const KJob* self, int unit) {
    return static_cast<unsigned long long>(self->processedAmount(static_cast<KJob::Unit>(unit)));
}

unsigned long long KJob_TotalAmount(const KJob* self, int unit) {
    return static_cast<unsigned long long>(self->totalAmount(static_cast<KJob::Unit>(unit)));
}

unsigned long KJob_Percent(const KJob* self) {
    return self->percent();
}

void KJob_SetAutoDelete(KJob* self, bool autodelete) {
    self->setAutoDelete(autodelete);
}

bool KJob_IsAutoDelete(const KJob* self) {
    return self->isAutoDelete();
}

void KJob_SetFinishedNotificationHidden(KJob* self) {
    self->setFinishedNotificationHidden();
}

bool KJob_IsFinishedNotificationHidden(const KJob* self) {
    return self->isFinishedNotificationHidden();
}

bool KJob_IsStartedWithExec(const KJob* self) {
    return self->isStartedWithExec();
}

long long KJob_ElapsedTime(const KJob* self) {
    return static_cast<long long>(self->elapsedTime());
}

void KJob_InfoMessage(KJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->infoMessage(job, message_QString);
}

void KJob_Connect_InfoMessage(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*, const char*) = reinterpret_cast<void (*)(KJob*, KJob*, const char*)>(slot);
    KJob::connect(self,
                  static_cast<void (KJob::*)(KJob*, const QString&)>(&KJob::infoMessage),
                  [self, slotFunc](KJob* job, const QString& message) {
                      KJob* sigval1 = job;
                      const auto message_ret = message;
                      // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                      QByteArray message_b = message_ret.toUtf8();
                      auto message_str_len = message_b.length();
                      const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
                      memcpy((void*)message_str, message_b.data(), message_str_len);
                      ((char*)message_str)[message_str_len] = '\0';
                      const char* sigval2 = message_str;
                      slotFunc(self, sigval1, sigval2);
                      libqt_free(message_str);
                  });
}

void KJob_Warning(KJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->warning(job, message_QString);
}

void KJob_Connect_Warning(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*, const char*) = reinterpret_cast<void (*)(KJob*, KJob*, const char*)>(slot);
    KJob::connect(self,
                  static_cast<void (KJob::*)(KJob*, const QString&)>(&KJob::warning),
                  [self, slotFunc](KJob* job, const QString& message) {
                      KJob* sigval1 = job;
                      const auto message_ret = message;
                      // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                      QByteArray message_b = message_ret.toUtf8();
                      auto message_str_len = message_b.length();
                      const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
                      memcpy((void*)message_str, message_b.data(), message_str_len);
                      ((char*)message_str)[message_str_len] = '\0';
                      const char* sigval2 = message_str;
                      slotFunc(self, sigval1, sigval2);
                      libqt_free(message_str);
                  });
}

void KJob_TotalSize(KJob* self, KJob* job, unsigned long long size) {
    self->totalSize(job, static_cast<qulonglong>(size));
}

void KJob_Connect_TotalSize(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*, unsigned long long) = reinterpret_cast<void (*)(KJob*, KJob*, unsigned long long)>(slot);
    KJob::connect(self,
                  static_cast<void (KJob::*)(KJob*, qulonglong)>(&KJob::totalSize),
                  [self, slotFunc](KJob* job, qulonglong size) {
                      KJob* sigval1 = job;
                      unsigned long long sigval2 = static_cast<unsigned long long>(size);
                      slotFunc(self, sigval1, sigval2);
                  });
}

void KJob_ProcessedSize(KJob* self, KJob* job, unsigned long long size) {
    self->processedSize(job, static_cast<qulonglong>(size));
}

void KJob_Connect_ProcessedSize(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*, unsigned long long) = reinterpret_cast<void (*)(KJob*, KJob*, unsigned long long)>(slot);
    KJob::connect(self,
                  static_cast<void (KJob::*)(KJob*, qulonglong)>(&KJob::processedSize),
                  [self, slotFunc](KJob* job, qulonglong size) {
                      KJob* sigval1 = job;
                      unsigned long long sigval2 = static_cast<unsigned long long>(size);
                      slotFunc(self, sigval1, sigval2);
                  });
}

void KJob_Speed(KJob* self, KJob* job, unsigned long speed) {
    self->speed(job, static_cast<unsigned long>(speed));
}

void KJob_Connect_Speed(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*, unsigned long) = reinterpret_cast<void (*)(KJob*, KJob*, unsigned long)>(slot);
    KJob::connect(self,
                  static_cast<void (KJob::*)(KJob*, unsigned long)>(&KJob::speed),
                  [self, slotFunc](KJob* job, unsigned long speed) {
                      KJob* sigval1 = job;
                      unsigned long sigval2 = speed;
                      slotFunc(self, sigval1, sigval2);
                  });
}

libqt_string KJob_Tr2(const char* s, const char* c) {
    auto _ret = KJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KJob_Tr3(const char* s, const char* c, int n) {
    auto _ret = KJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KJob_Kill1(KJob* self, int verbosity) {
    return self->kill(static_cast<KJob::KillVerbosity>(verbosity));
}

void KJob_SetFinishedNotificationHidden1(KJob* self, bool hide) {
    self->setFinishedNotificationHidden(hide);
}

// Base class handler implementation
QMetaObject* KJob_SuperMetaObject(const KJob* self) {
    return (QMetaObject*)self->KJob::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KJob_OnMetaObject(KJob* self, intptr_t slot) {
    if (auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self)))
        vkjob->kjob_metaobject_callback = reinterpret_cast<VirtualKJob::KJob_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KJob_SuperMetacast(KJob* self, const char* param1) {
    return self->KJob::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KJob_OnMetacast(KJob* self, intptr_t slot) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self))
        vkjob->kjob_metacast_callback = reinterpret_cast<VirtualKJob::KJob_Metacast_Callback>(slot);
}

// Base class handler implementation
int KJob_SuperMetacall(KJob* self, int param1, int param2, void** param3) {
    return self->KJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KJob_OnMetacall(KJob* self, intptr_t slot) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self))
        vkjob->kjob_metacall_callback = reinterpret_cast<VirtualKJob::KJob_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KJob_OnStart(KJob* self, intptr_t slot) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self))
        vkjob->kjob_start_callback = reinterpret_cast<VirtualKJob::KJob_Start_Callback>(slot);
}

// Base class handler implementation
bool KJob_SuperDoKill(KJob* self) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self)) {
        return vkjob->KJob::doKill();
    } else
        qFatal("Error: Protected virtual method KJob::doKill called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KJob_OnDoKill(KJob* self, intptr_t slot) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self))
        vkjob->kjob_dokill_callback = reinterpret_cast<VirtualKJob::KJob_DoKill_Callback>(slot);
}

// Base class handler implementation
bool KJob_SuperDoSuspend(KJob* self) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self)) {
        return vkjob->KJob::doSuspend();
    } else
        qFatal("Error: Protected virtual method KJob::doSuspend called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KJob_OnDoSuspend(KJob* self, intptr_t slot) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self))
        vkjob->kjob_dosuspend_callback = reinterpret_cast<VirtualKJob::KJob_DoSuspend_Callback>(slot);
}

// Base class handler implementation
bool KJob_SuperDoResume(KJob* self) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self)) {
        return vkjob->KJob::doResume();
    } else
        qFatal("Error: Protected virtual method KJob::doResume called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KJob_OnDoResume(KJob* self, intptr_t slot) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self))
        vkjob->kjob_doresume_callback = reinterpret_cast<VirtualKJob::KJob_DoResume_Callback>(slot);
}

// Base class handler implementation
libqt_string KJob_SuperErrorString(const KJob* self) {
    auto _ret = self->KJob::errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KJob_OnErrorString(KJob* self, intptr_t slot) {
    if (auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self)))
        vkjob->kjob_errorstring_callback = reinterpret_cast<VirtualKJob::KJob_ErrorString_Callback>(slot);
}

// Derived class handler implementation
bool KJob_Event(KJob* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KJob_SuperEvent(KJob* self, QEvent* event) {
    return self->KJob::event(event);
}

// Auxiliary method to allow providing re-implementation
void KJob_OnEvent(KJob* self, intptr_t slot) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self))
        vkjob->kjob_event_callback = reinterpret_cast<VirtualKJob::KJob_Event_Callback>(slot);
}

// Derived class handler implementation
bool KJob_EventFilter(KJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KJob_SuperEventFilter(KJob* self, QObject* watched, QEvent* event) {
    return self->KJob::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KJob_OnEventFilter(KJob* self, intptr_t slot) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self))
        vkjob->kjob_eventfilter_callback = reinterpret_cast<VirtualKJob::KJob_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KJob_TimerEvent(KJob* self, QTimerEvent* event) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob) {
        vkjob->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KJob::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KJob_SuperTimerEvent(KJob* self, QTimerEvent* event) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self)) {
        vkjob->KJob::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KJob::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KJob_OnTimerEvent(KJob* self, intptr_t slot) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self))
        vkjob->kjob_timerevent_callback = reinterpret_cast<VirtualKJob::KJob_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KJob_ChildEvent(KJob* self, QChildEvent* event) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob) {
        vkjob->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KJob::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KJob_SuperChildEvent(KJob* self, QChildEvent* event) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self)) {
        vkjob->KJob::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KJob::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KJob_OnChildEvent(KJob* self, intptr_t slot) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self))
        vkjob->kjob_childevent_callback = reinterpret_cast<VirtualKJob::KJob_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KJob_CustomEvent(KJob* self, QEvent* event) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob) {
        vkjob->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KJob::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KJob_SuperCustomEvent(KJob* self, QEvent* event) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self)) {
        vkjob->KJob::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KJob::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KJob_OnCustomEvent(KJob* self, intptr_t slot) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self))
        vkjob->kjob_customevent_callback = reinterpret_cast<VirtualKJob::KJob_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KJob_ConnectNotify(KJob* self, const QMetaMethod* signal) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob) {
        vkjob->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KJob::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KJob_SuperConnectNotify(KJob* self, const QMetaMethod* signal) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self)) {
        vkjob->KJob::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KJob::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KJob_OnConnectNotify(KJob* self, intptr_t slot) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self))
        vkjob->kjob_connectnotify_callback = reinterpret_cast<VirtualKJob::KJob_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KJob_DisconnectNotify(KJob* self, const QMetaMethod* signal) {
    auto* vkjob = dynamic_cast<VirtualKJob*>(self);
    if (vkjob) {
        vkjob->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KJob::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KJob_SuperDisconnectNotify(KJob* self, const QMetaMethod* signal) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self)) {
        vkjob->KJob::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KJob::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KJob_OnDisconnectNotify(KJob* self, intptr_t slot) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self))
        vkjob->kjob_disconnectnotify_callback = reinterpret_cast<VirtualKJob::KJob_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KJob_SetCapabilities(KJob* self, int capabilities) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self)) {
        vkjob->VirtualKJob::setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else
        qFatal("Error: Protected method KJob::setCapabilities called without a directly constructed type");
}

// Derived class protected handler implementation
bool KJob_IsFinished(const KJob* self) {
    if (auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self))) {
        return vkjob->VirtualKJob::isFinished();
    } else
        qFatal("Error: Protected method KJob::isFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void KJob_SetError(KJob* self, int errorCode) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self)) {
        vkjob->VirtualKJob::setError(static_cast<int>(errorCode));
    } else
        qFatal("Error: Protected method KJob::setError called without a directly constructed type");
}

// Derived class protected handler implementation
void KJob_SetErrorText(KJob* self, const libqt_string errorText) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self)) {
        QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
        vkjob->VirtualKJob::setErrorText(errorText_QString);
    } else
        qFatal("Error: Protected method KJob::setErrorText called without a directly constructed type");
}

// Derived class protected handler implementation
void KJob_SetProcessedAmount(KJob* self, int unit, unsigned long long amount) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self)) {
        vkjob->VirtualKJob::setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KJob::setProcessedAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KJob_SetTotalAmount(KJob* self, int unit, unsigned long long amount) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self)) {
        vkjob->VirtualKJob::setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KJob::setTotalAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KJob_SetProgressUnit(KJob* self, int unit) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self)) {
        vkjob->VirtualKJob::setProgressUnit(static_cast<KJob::Unit>(unit));
    } else
        qFatal("Error: Protected method KJob::setProgressUnit called without a directly constructed type");
}

// Derived class protected handler implementation
void KJob_SetPercent(KJob* self, unsigned long percentage) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self)) {
        vkjob->VirtualKJob::setPercent(static_cast<unsigned long>(percentage));
    } else
        qFatal("Error: Protected method KJob::setPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KJob_EmitResult(KJob* self) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self)) {
        vkjob->VirtualKJob::emitResult();
    } else
        qFatal("Error: Protected method KJob::emitResult called without a directly constructed type");
}

// Derived class protected handler implementation
void KJob_EmitPercent(KJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self)) {
        vkjob->VirtualKJob::emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else
        qFatal("Error: Protected method KJob::emitPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KJob_EmitSpeed(KJob* self, unsigned long speed) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self)) {
        vkjob->VirtualKJob::emitSpeed(static_cast<unsigned long>(speed));
    } else
        qFatal("Error: Protected method KJob::emitSpeed called without a directly constructed type");
}

// Derived class protected handler implementation
void KJob_StartElapsedTimer(KJob* self) {
    if (auto* vkjob = dynamic_cast<VirtualKJob*>(self)) {
        vkjob->VirtualKJob::startElapsedTimer();
    } else
        qFatal("Error: Protected method KJob::startElapsedTimer called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KJob_Sender(const KJob* self) {
    if (auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self))) {
        return vkjob->VirtualKJob::sender();
    } else
        qFatal("Error: Protected method KJob::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KJob_SenderSignalIndex(const KJob* self) {
    if (auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self))) {
        return vkjob->VirtualKJob::senderSignalIndex();
    } else
        qFatal("Error: Protected method KJob::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KJob_Receivers(const KJob* self, const char* signal) {
    if (auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self))) {
        return vkjob->VirtualKJob::receivers(signal);
    } else
        qFatal("Error: Protected method KJob::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KJob_IsSignalConnected(const KJob* self, const QMetaMethod* signal) {
    if (auto* vkjob = const_cast<VirtualKJob*>(dynamic_cast<const VirtualKJob*>(self))) {
        return vkjob->VirtualKJob::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KJob::isSignalConnected called without a directly constructed type");
}

void KJob_Connect_Finished(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*) = reinterpret_cast<void (*)(KJob*, KJob*)>(slot);
    KJob::connect(self, &KJob::finished, [self, slotFunc](KJob* job) {
        KJob* sigval1 = job;
        slotFunc(self, sigval1);
    });
}

void KJob_Connect_Suspended(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*) = reinterpret_cast<void (*)(KJob*, KJob*)>(slot);
    KJob::connect(self, &KJob::suspended, [self, slotFunc](KJob* job) {
        KJob* sigval1 = job;
        slotFunc(self, sigval1);
    });
}

void KJob_Connect_Resumed(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*) = reinterpret_cast<void (*)(KJob*, KJob*)>(slot);
    KJob::connect(self, &KJob::resumed, [self, slotFunc](KJob* job) {
        KJob* sigval1 = job;
        slotFunc(self, sigval1);
    });
}

void KJob_Connect_Result(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*) = reinterpret_cast<void (*)(KJob*, KJob*)>(slot);
    KJob::connect(self, &KJob::result, [self, slotFunc](KJob* job) {
        KJob* sigval1 = job;
        slotFunc(self, sigval1);
    });
}

void KJob_Connect_TotalAmountChanged(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*, int, unsigned long long) = reinterpret_cast<void (*)(KJob*, KJob*, int, unsigned long long)>(slot);
    KJob::connect(self, &KJob::totalAmountChanged, [self, slotFunc](KJob* job, KJob::Unit unit, qulonglong amount) {
        KJob* sigval1 = job;
        int sigval2 = static_cast<int>(unit);
        unsigned long long sigval3 = static_cast<unsigned long long>(amount);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void KJob_Connect_ProcessedAmountChanged(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*, int, unsigned long long) = reinterpret_cast<void (*)(KJob*, KJob*, int, unsigned long long)>(slot);
    KJob::connect(self, &KJob::processedAmountChanged, [self, slotFunc](KJob* job, KJob::Unit unit, qulonglong amount) {
        KJob* sigval1 = job;
        int sigval2 = static_cast<int>(unit);
        unsigned long long sigval3 = static_cast<unsigned long long>(amount);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void KJob_Connect_PercentChanged(KJob* self, intptr_t slot) {
    void (*slotFunc)(KJob*, KJob*, unsigned long) = reinterpret_cast<void (*)(KJob*, KJob*, unsigned long)>(slot);
    KJob::connect(self, &KJob::percentChanged, [self, slotFunc](KJob* job, unsigned long percent) {
        KJob* sigval1 = job;
        unsigned long sigval2 = percent;
        slotFunc(self, sigval1, sigval2);
    });
}

void KJob_Delete(KJob* self) {
    delete self;
}
