#include <KEMailClientLauncherJob>
#include <KJob>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <kemailclientlauncherjob.h>
#include "libkemailclientlauncherjob.h"
#include "libkemailclientlauncherjob.hxx"

KEMailClientLauncherJob* KEMailClientLauncherJob_new() {
    return new VirtualKEMailClientLauncherJob();
}

KEMailClientLauncherJob* KEMailClientLauncherJob_new2(QObject* parent) {
    return new VirtualKEMailClientLauncherJob(parent);
}

QMetaObject* KEMailClientLauncherJob_MetaObject(const KEMailClientLauncherJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KEMailClientLauncherJob_Metacast(KEMailClientLauncherJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KEMailClientLauncherJob_Metacall(KEMailClientLauncherJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KEMailClientLauncherJob_Tr(const char* s) {
    auto _ret = KEMailClientLauncherJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KEMailClientLauncherJob_SetTo(KEMailClientLauncherJob* self, const libqt_list /* of libqt_string */ to) {
    QList<QString> to_QList;
    to_QList.reserve(to.len);
    libqt_string* to_arr = static_cast<libqt_string*>(to.data);
    for (size_t i = 0; i < to.len; ++i) {
        QString to_arr_i_QString = QString::fromUtf8(to_arr[i].data, to_arr[i].len);
        to_QList.push_back(to_arr_i_QString);
    }
    self->setTo(to_QList);
}

void KEMailClientLauncherJob_SetCc(KEMailClientLauncherJob* self, const libqt_list /* of libqt_string */ cc) {
    QList<QString> cc_QList;
    cc_QList.reserve(cc.len);
    libqt_string* cc_arr = static_cast<libqt_string*>(cc.data);
    for (size_t i = 0; i < cc.len; ++i) {
        QString cc_arr_i_QString = QString::fromUtf8(cc_arr[i].data, cc_arr[i].len);
        cc_QList.push_back(cc_arr_i_QString);
    }
    self->setCc(cc_QList);
}

void KEMailClientLauncherJob_SetBcc(KEMailClientLauncherJob* self, const libqt_list /* of libqt_string */ bcc) {
    QList<QString> bcc_QList;
    bcc_QList.reserve(bcc.len);
    libqt_string* bcc_arr = static_cast<libqt_string*>(bcc.data);
    for (size_t i = 0; i < bcc.len; ++i) {
        QString bcc_arr_i_QString = QString::fromUtf8(bcc_arr[i].data, bcc_arr[i].len);
        bcc_QList.push_back(bcc_arr_i_QString);
    }
    self->setBcc(bcc_QList);
}

void KEMailClientLauncherJob_SetSubject(KEMailClientLauncherJob* self, const libqt_string subject) {
    QString subject_QString = QString::fromUtf8(subject.data, subject.len);
    self->setSubject(subject_QString);
}

void KEMailClientLauncherJob_SetBody(KEMailClientLauncherJob* self, const libqt_string body) {
    QString body_QString = QString::fromUtf8(body.data, body.len);
    self->setBody(body_QString);
}

void KEMailClientLauncherJob_SetAttachments(KEMailClientLauncherJob* self, const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    self->setAttachments(urls_QList);
}

void KEMailClientLauncherJob_SetStartupId(KEMailClientLauncherJob* self, const libqt_string startupId) {
    QByteArray startupId_QByteArray(startupId.data, startupId.len);
    self->setStartupId(startupId_QByteArray);
}

void KEMailClientLauncherJob_Start(KEMailClientLauncherJob* self) {
    self->start();
}

libqt_string KEMailClientLauncherJob_Tr2(const char* s, const char* c) {
    auto _ret = KEMailClientLauncherJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEMailClientLauncherJob_Tr3(const char* s, const char* c, int n) {
    auto _ret = KEMailClientLauncherJob::tr(s, c, static_cast<int>(n));
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
QMetaObject* KEMailClientLauncherJob_SuperMetaObject(const KEMailClientLauncherJob* self) {
    return (QMetaObject*)self->KEMailClientLauncherJob::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnMetaObject(KEMailClientLauncherJob* self, intptr_t slot) {
    if (auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self)))
        vkemailclientlauncherjob->kemailclientlauncherjob_metaobject_callback = reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KEMailClientLauncherJob_SuperMetacast(KEMailClientLauncherJob* self, const char* param1) {
    return self->KEMailClientLauncherJob::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnMetacast(KEMailClientLauncherJob* self, intptr_t slot) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self))
        vkemailclientlauncherjob->kemailclientlauncherjob_metacast_callback = reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_Metacast_Callback>(slot);
}

// Base class handler implementation
int KEMailClientLauncherJob_SuperMetacall(KEMailClientLauncherJob* self, int param1, int param2, void** param3) {
    return self->KEMailClientLauncherJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnMetacall(KEMailClientLauncherJob* self, intptr_t slot) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self))
        vkemailclientlauncherjob->kemailclientlauncherjob_metacall_callback = reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_Metacall_Callback>(slot);
}

// Base class handler implementation
void KEMailClientLauncherJob_SuperStart(KEMailClientLauncherJob* self) {
    self->KEMailClientLauncherJob::start();
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnStart(KEMailClientLauncherJob* self, intptr_t slot) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self))
        vkemailclientlauncherjob->kemailclientlauncherjob_start_callback = reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_Start_Callback>(slot);
}

// Derived class handler implementation
bool KEMailClientLauncherJob_DoKill(KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob) {
        return vkemailclientlauncherjob->doKill();
    } else {
        qFatal("Error: Protected virtual method KEMailClientLauncherJob::doKill called without a directly constructed type");
    }
}

// Base class handler implementation
bool KEMailClientLauncherJob_SuperDoKill(KEMailClientLauncherJob* self) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self)) {
        return vkemailclientlauncherjob->KEMailClientLauncherJob::doKill();
    } else
        qFatal("Error: Protected virtual method KEMailClientLauncherJob::doKill called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnDoKill(KEMailClientLauncherJob* self, intptr_t slot) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self))
        vkemailclientlauncherjob->kemailclientlauncherjob_dokill_callback = reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_DoKill_Callback>(slot);
}

// Derived class handler implementation
bool KEMailClientLauncherJob_DoSuspend(KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob) {
        return vkemailclientlauncherjob->doSuspend();
    } else {
        qFatal("Error: Protected virtual method KEMailClientLauncherJob::doSuspend called without a directly constructed type");
    }
}

// Base class handler implementation
bool KEMailClientLauncherJob_SuperDoSuspend(KEMailClientLauncherJob* self) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self)) {
        return vkemailclientlauncherjob->KEMailClientLauncherJob::doSuspend();
    } else
        qFatal("Error: Protected virtual method KEMailClientLauncherJob::doSuspend called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnDoSuspend(KEMailClientLauncherJob* self, intptr_t slot) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self))
        vkemailclientlauncherjob->kemailclientlauncherjob_dosuspend_callback = reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_DoSuspend_Callback>(slot);
}

// Derived class handler implementation
bool KEMailClientLauncherJob_DoResume(KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob) {
        return vkemailclientlauncherjob->doResume();
    } else {
        qFatal("Error: Protected virtual method KEMailClientLauncherJob::doResume called without a directly constructed type");
    }
}

// Base class handler implementation
bool KEMailClientLauncherJob_SuperDoResume(KEMailClientLauncherJob* self) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self)) {
        return vkemailclientlauncherjob->KEMailClientLauncherJob::doResume();
    } else
        qFatal("Error: Protected virtual method KEMailClientLauncherJob::doResume called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnDoResume(KEMailClientLauncherJob* self, intptr_t slot) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self))
        vkemailclientlauncherjob->kemailclientlauncherjob_doresume_callback = reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_DoResume_Callback>(slot);
}

// Derived class handler implementation
libqt_string KEMailClientLauncherJob_ErrorString(const KEMailClientLauncherJob* self) {
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

// Base class handler implementation
libqt_string KEMailClientLauncherJob_SuperErrorString(const KEMailClientLauncherJob* self) {
    auto _ret = self->KEMailClientLauncherJob::errorString();
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
void KEMailClientLauncherJob_OnErrorString(KEMailClientLauncherJob* self, intptr_t slot) {
    if (auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self)))
        vkemailclientlauncherjob->kemailclientlauncherjob_errorstring_callback = reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_ErrorString_Callback>(slot);
}

// Derived class handler implementation
bool KEMailClientLauncherJob_Event(KEMailClientLauncherJob* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KEMailClientLauncherJob_SuperEvent(KEMailClientLauncherJob* self, QEvent* event) {
    return self->KEMailClientLauncherJob::event(event);
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnEvent(KEMailClientLauncherJob* self, intptr_t slot) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self))
        vkemailclientlauncherjob->kemailclientlauncherjob_event_callback = reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_Event_Callback>(slot);
}

// Derived class handler implementation
bool KEMailClientLauncherJob_EventFilter(KEMailClientLauncherJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KEMailClientLauncherJob_SuperEventFilter(KEMailClientLauncherJob* self, QObject* watched, QEvent* event) {
    return self->KEMailClientLauncherJob::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnEventFilter(KEMailClientLauncherJob* self, intptr_t slot) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self))
        vkemailclientlauncherjob->kemailclientlauncherjob_eventfilter_callback = reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KEMailClientLauncherJob_TimerEvent(KEMailClientLauncherJob* self, QTimerEvent* event) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob) {
        vkemailclientlauncherjob->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEMailClientLauncherJob::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_SuperTimerEvent(KEMailClientLauncherJob* self, QTimerEvent* event) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self)) {
        vkemailclientlauncherjob->KEMailClientLauncherJob::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KEMailClientLauncherJob::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnTimerEvent(KEMailClientLauncherJob* self, intptr_t slot) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self))
        vkemailclientlauncherjob->kemailclientlauncherjob_timerevent_callback = reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KEMailClientLauncherJob_ChildEvent(KEMailClientLauncherJob* self, QChildEvent* event) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob) {
        vkemailclientlauncherjob->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEMailClientLauncherJob::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_SuperChildEvent(KEMailClientLauncherJob* self, QChildEvent* event) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self)) {
        vkemailclientlauncherjob->KEMailClientLauncherJob::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KEMailClientLauncherJob::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnChildEvent(KEMailClientLauncherJob* self, intptr_t slot) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self))
        vkemailclientlauncherjob->kemailclientlauncherjob_childevent_callback = reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KEMailClientLauncherJob_CustomEvent(KEMailClientLauncherJob* self, QEvent* event) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob) {
        vkemailclientlauncherjob->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEMailClientLauncherJob::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_SuperCustomEvent(KEMailClientLauncherJob* self, QEvent* event) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self)) {
        vkemailclientlauncherjob->KEMailClientLauncherJob::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KEMailClientLauncherJob::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnCustomEvent(KEMailClientLauncherJob* self, intptr_t slot) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self))
        vkemailclientlauncherjob->kemailclientlauncherjob_customevent_callback = reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KEMailClientLauncherJob_ConnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob) {
        vkemailclientlauncherjob->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KEMailClientLauncherJob::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_SuperConnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self)) {
        vkemailclientlauncherjob->KEMailClientLauncherJob::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KEMailClientLauncherJob::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnConnectNotify(KEMailClientLauncherJob* self, intptr_t slot) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self))
        vkemailclientlauncherjob->kemailclientlauncherjob_connectnotify_callback = reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KEMailClientLauncherJob_DisconnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob) {
        vkemailclientlauncherjob->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KEMailClientLauncherJob::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_SuperDisconnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self)) {
        vkemailclientlauncherjob->KEMailClientLauncherJob::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KEMailClientLauncherJob::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnDisconnectNotify(KEMailClientLauncherJob* self, intptr_t slot) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self))
        vkemailclientlauncherjob->kemailclientlauncherjob_disconnectnotify_callback = reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KEMailClientLauncherJob_SetCapabilities(KEMailClientLauncherJob* self, int capabilities) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self)) {
        vkemailclientlauncherjob->VirtualKEMailClientLauncherJob::setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else
        qFatal("Error: Protected method KEMailClientLauncherJob::setCapabilities called without a directly constructed type");
}

// Derived class protected handler implementation
bool KEMailClientLauncherJob_IsFinished(const KEMailClientLauncherJob* self) {
    if (auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self))) {
        return vkemailclientlauncherjob->VirtualKEMailClientLauncherJob::isFinished();
    } else
        qFatal("Error: Protected method KEMailClientLauncherJob::isFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void KEMailClientLauncherJob_SetError(KEMailClientLauncherJob* self, int errorCode) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self)) {
        vkemailclientlauncherjob->VirtualKEMailClientLauncherJob::setError(static_cast<int>(errorCode));
    } else
        qFatal("Error: Protected method KEMailClientLauncherJob::setError called without a directly constructed type");
}

// Derived class protected handler implementation
void KEMailClientLauncherJob_SetErrorText(KEMailClientLauncherJob* self, const libqt_string errorText) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self)) {
        QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
        vkemailclientlauncherjob->VirtualKEMailClientLauncherJob::setErrorText(errorText_QString);
    } else
        qFatal("Error: Protected method KEMailClientLauncherJob::setErrorText called without a directly constructed type");
}

// Derived class protected handler implementation
void KEMailClientLauncherJob_SetProcessedAmount(KEMailClientLauncherJob* self, int unit, unsigned long long amount) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self)) {
        vkemailclientlauncherjob->VirtualKEMailClientLauncherJob::setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KEMailClientLauncherJob::setProcessedAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KEMailClientLauncherJob_SetTotalAmount(KEMailClientLauncherJob* self, int unit, unsigned long long amount) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self)) {
        vkemailclientlauncherjob->VirtualKEMailClientLauncherJob::setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KEMailClientLauncherJob::setTotalAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KEMailClientLauncherJob_SetProgressUnit(KEMailClientLauncherJob* self, int unit) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self)) {
        vkemailclientlauncherjob->VirtualKEMailClientLauncherJob::setProgressUnit(static_cast<KJob::Unit>(unit));
    } else
        qFatal("Error: Protected method KEMailClientLauncherJob::setProgressUnit called without a directly constructed type");
}

// Derived class protected handler implementation
void KEMailClientLauncherJob_SetPercent(KEMailClientLauncherJob* self, unsigned long percentage) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self)) {
        vkemailclientlauncherjob->VirtualKEMailClientLauncherJob::setPercent(static_cast<unsigned long>(percentage));
    } else
        qFatal("Error: Protected method KEMailClientLauncherJob::setPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KEMailClientLauncherJob_EmitResult(KEMailClientLauncherJob* self) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self)) {
        vkemailclientlauncherjob->VirtualKEMailClientLauncherJob::emitResult();
    } else
        qFatal("Error: Protected method KEMailClientLauncherJob::emitResult called without a directly constructed type");
}

// Derived class protected handler implementation
void KEMailClientLauncherJob_EmitPercent(KEMailClientLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self)) {
        vkemailclientlauncherjob->VirtualKEMailClientLauncherJob::emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else
        qFatal("Error: Protected method KEMailClientLauncherJob::emitPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KEMailClientLauncherJob_EmitSpeed(KEMailClientLauncherJob* self, unsigned long speed) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self)) {
        vkemailclientlauncherjob->VirtualKEMailClientLauncherJob::emitSpeed(static_cast<unsigned long>(speed));
    } else
        qFatal("Error: Protected method KEMailClientLauncherJob::emitSpeed called without a directly constructed type");
}

// Derived class protected handler implementation
void KEMailClientLauncherJob_StartElapsedTimer(KEMailClientLauncherJob* self) {
    if (auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self)) {
        vkemailclientlauncherjob->VirtualKEMailClientLauncherJob::startElapsedTimer();
    } else
        qFatal("Error: Protected method KEMailClientLauncherJob::startElapsedTimer called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KEMailClientLauncherJob_Sender(const KEMailClientLauncherJob* self) {
    if (auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self))) {
        return vkemailclientlauncherjob->VirtualKEMailClientLauncherJob::sender();
    } else
        qFatal("Error: Protected method KEMailClientLauncherJob::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KEMailClientLauncherJob_SenderSignalIndex(const KEMailClientLauncherJob* self) {
    if (auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self))) {
        return vkemailclientlauncherjob->VirtualKEMailClientLauncherJob::senderSignalIndex();
    } else
        qFatal("Error: Protected method KEMailClientLauncherJob::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KEMailClientLauncherJob_Receivers(const KEMailClientLauncherJob* self, const char* signal) {
    if (auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self))) {
        return vkemailclientlauncherjob->VirtualKEMailClientLauncherJob::receivers(signal);
    } else
        qFatal("Error: Protected method KEMailClientLauncherJob::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KEMailClientLauncherJob_IsSignalConnected(const KEMailClientLauncherJob* self, const QMetaMethod* signal) {
    if (auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self))) {
        return vkemailclientlauncherjob->VirtualKEMailClientLauncherJob::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KEMailClientLauncherJob::isSignalConnected called without a directly constructed type");
}

void KEMailClientLauncherJob_Delete(KEMailClientLauncherJob* self) {
    delete self;
}
