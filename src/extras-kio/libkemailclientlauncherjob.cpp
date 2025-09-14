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
#include <QByteArray>
#include <cstring>
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
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKEMailClientLauncherJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KEMailClientLauncherJob_Tr(const char* s) {
    QString _ret = KEMailClientLauncherJob::tr(s);
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
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        self->start();
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->start();
    }
}

libqt_string KEMailClientLauncherJob_Tr2(const char* s, const char* c) {
    QString _ret = KEMailClientLauncherJob::tr(s, c);
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
    QString _ret = KEMailClientLauncherJob::tr(s, c, static_cast<int>(n));
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
int KEMailClientLauncherJob_QBaseMetacall(KEMailClientLauncherJob* self, int param1, int param2, void** param3) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_Metacall_IsBase(true);
        return vkemailclientlauncherjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KEMailClientLauncherJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnMetacall(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_Metacall_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_QBaseStart(KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_Start_IsBase(true);
        vkemailclientlauncherjob->start();
    } else {
        self->KEMailClientLauncherJob::start();
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnStart(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_Start_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_Start_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEMailClientLauncherJob_DoKill(KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        return vkemailclientlauncherjob->doKill();
    } else {
        return ((VirtualKEMailClientLauncherJob*)self)->doKill();
    }
}

// Base class handler implementation
bool KEMailClientLauncherJob_QBaseDoKill(KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_DoKill_IsBase(true);
        return vkemailclientlauncherjob->doKill();
    } else {
        return ((VirtualKEMailClientLauncherJob*)self)->doKill();
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnDoKill(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_DoKill_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_DoKill_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEMailClientLauncherJob_DoSuspend(KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        return vkemailclientlauncherjob->doSuspend();
    } else {
        return ((VirtualKEMailClientLauncherJob*)self)->doSuspend();
    }
}

// Base class handler implementation
bool KEMailClientLauncherJob_QBaseDoSuspend(KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_DoSuspend_IsBase(true);
        return vkemailclientlauncherjob->doSuspend();
    } else {
        return ((VirtualKEMailClientLauncherJob*)self)->doSuspend();
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnDoSuspend(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_DoSuspend_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_DoSuspend_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEMailClientLauncherJob_DoResume(KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        return vkemailclientlauncherjob->doResume();
    } else {
        return ((VirtualKEMailClientLauncherJob*)self)->doResume();
    }
}

// Base class handler implementation
bool KEMailClientLauncherJob_QBaseDoResume(KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_DoResume_IsBase(true);
        return vkemailclientlauncherjob->doResume();
    } else {
        return ((VirtualKEMailClientLauncherJob*)self)->doResume();
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnDoResume(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_DoResume_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_DoResume_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KEMailClientLauncherJob_ErrorString(const KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self));
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        QString _ret = vkemailclientlauncherjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KEMailClientLauncherJob::errorString();
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
libqt_string KEMailClientLauncherJob_QBaseErrorString(const KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self));
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_ErrorString_IsBase(true);
        QString _ret = vkemailclientlauncherjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KEMailClientLauncherJob::errorString();
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
void KEMailClientLauncherJob_OnErrorString(const KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self));
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_ErrorString_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_ErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEMailClientLauncherJob_Event(KEMailClientLauncherJob* self, QEvent* event) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        return vkemailclientlauncherjob->event(event);
    } else {
        return self->KEMailClientLauncherJob::event(event);
    }
}

// Base class handler implementation
bool KEMailClientLauncherJob_QBaseEvent(KEMailClientLauncherJob* self, QEvent* event) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_Event_IsBase(true);
        return vkemailclientlauncherjob->event(event);
    } else {
        return self->KEMailClientLauncherJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnEvent(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_Event_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEMailClientLauncherJob_EventFilter(KEMailClientLauncherJob* self, QObject* watched, QEvent* event) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        return vkemailclientlauncherjob->eventFilter(watched, event);
    } else {
        return self->KEMailClientLauncherJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KEMailClientLauncherJob_QBaseEventFilter(KEMailClientLauncherJob* self, QObject* watched, QEvent* event) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_EventFilter_IsBase(true);
        return vkemailclientlauncherjob->eventFilter(watched, event);
    } else {
        return self->KEMailClientLauncherJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnEventFilter(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_EventFilter_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KEMailClientLauncherJob_TimerEvent(KEMailClientLauncherJob* self, QTimerEvent* event) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->timerEvent(event);
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_QBaseTimerEvent(KEMailClientLauncherJob* self, QTimerEvent* event) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_TimerEvent_IsBase(true);
        vkemailclientlauncherjob->timerEvent(event);
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnTimerEvent(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_TimerEvent_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEMailClientLauncherJob_ChildEvent(KEMailClientLauncherJob* self, QChildEvent* event) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->childEvent(event);
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_QBaseChildEvent(KEMailClientLauncherJob* self, QChildEvent* event) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_ChildEvent_IsBase(true);
        vkemailclientlauncherjob->childEvent(event);
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnChildEvent(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_ChildEvent_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEMailClientLauncherJob_CustomEvent(KEMailClientLauncherJob* self, QEvent* event) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->customEvent(event);
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_QBaseCustomEvent(KEMailClientLauncherJob* self, QEvent* event) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_CustomEvent_IsBase(true);
        vkemailclientlauncherjob->customEvent(event);
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnCustomEvent(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_CustomEvent_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEMailClientLauncherJob_ConnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->connectNotify(*signal);
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_QBaseConnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_ConnectNotify_IsBase(true);
        vkemailclientlauncherjob->connectNotify(*signal);
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnConnectNotify(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_ConnectNotify_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KEMailClientLauncherJob_DisconnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->disconnectNotify(*signal);
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_QBaseDisconnectNotify(KEMailClientLauncherJob* self, const QMetaMethod* signal) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_DisconnectNotify_IsBase(true);
        vkemailclientlauncherjob->disconnectNotify(*signal);
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnDisconnectNotify(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_DisconnectNotify_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KEMailClientLauncherJob_SetCapabilities(KEMailClientLauncherJob* self, int capabilities) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_QBaseSetCapabilities(KEMailClientLauncherJob* self, int capabilities) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_SetCapabilities_IsBase(true);
        vkemailclientlauncherjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnSetCapabilities(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_SetCapabilities_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_SetCapabilities_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEMailClientLauncherJob_IsFinished(const KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self));
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        return vkemailclientlauncherjob->isFinished();
    } else {
        return ((VirtualKEMailClientLauncherJob*)self)->isFinished();
    }
}

// Base class handler implementation
bool KEMailClientLauncherJob_QBaseIsFinished(const KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self));
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_IsFinished_IsBase(true);
        return vkemailclientlauncherjob->isFinished();
    } else {
        return ((VirtualKEMailClientLauncherJob*)self)->isFinished();
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnIsFinished(const KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self));
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_IsFinished_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_IsFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void KEMailClientLauncherJob_SetError(KEMailClientLauncherJob* self, int errorCode) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_QBaseSetError(KEMailClientLauncherJob* self, int errorCode) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_SetError_IsBase(true);
        vkemailclientlauncherjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnSetError(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_SetError_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
void KEMailClientLauncherJob_SetErrorText(KEMailClientLauncherJob* self, const libqt_string errorText) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->setErrorText(errorText_QString);
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_QBaseSetErrorText(KEMailClientLauncherJob* self, const libqt_string errorText) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_SetErrorText_IsBase(true);
        vkemailclientlauncherjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->setErrorText(errorText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnSetErrorText(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_SetErrorText_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_SetErrorText_Callback>(slot));
    }
}

// Derived class handler implementation
void KEMailClientLauncherJob_SetProcessedAmount(KEMailClientLauncherJob* self, int unit, unsigned long long amount) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_QBaseSetProcessedAmount(KEMailClientLauncherJob* self, int unit, unsigned long long amount) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_SetProcessedAmount_IsBase(true);
        vkemailclientlauncherjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnSetProcessedAmount(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_SetProcessedAmount_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_SetProcessedAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KEMailClientLauncherJob_SetTotalAmount(KEMailClientLauncherJob* self, int unit, unsigned long long amount) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_QBaseSetTotalAmount(KEMailClientLauncherJob* self, int unit, unsigned long long amount) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_SetTotalAmount_IsBase(true);
        vkemailclientlauncherjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnSetTotalAmount(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_SetTotalAmount_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_SetTotalAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KEMailClientLauncherJob_SetProgressUnit(KEMailClientLauncherJob* self, int unit) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_QBaseSetProgressUnit(KEMailClientLauncherJob* self, int unit) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_SetProgressUnit_IsBase(true);
        vkemailclientlauncherjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnSetProgressUnit(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_SetProgressUnit_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_SetProgressUnit_Callback>(slot));
    }
}

// Derived class handler implementation
void KEMailClientLauncherJob_SetPercent(KEMailClientLauncherJob* self, unsigned long percentage) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_QBaseSetPercent(KEMailClientLauncherJob* self, unsigned long percentage) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_SetPercent_IsBase(true);
        vkemailclientlauncherjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnSetPercent(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_SetPercent_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_SetPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEMailClientLauncherJob_EmitResult(KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->emitResult();
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->emitResult();
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_QBaseEmitResult(KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_EmitResult_IsBase(true);
        vkemailclientlauncherjob->emitResult();
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->emitResult();
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnEmitResult(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_EmitResult_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_EmitResult_Callback>(slot));
    }
}

// Derived class handler implementation
void KEMailClientLauncherJob_EmitPercent(KEMailClientLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_QBaseEmitPercent(KEMailClientLauncherJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_EmitPercent_IsBase(true);
        vkemailclientlauncherjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnEmitPercent(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_EmitPercent_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_EmitPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEMailClientLauncherJob_EmitSpeed(KEMailClientLauncherJob* self, unsigned long speed) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_QBaseEmitSpeed(KEMailClientLauncherJob* self, unsigned long speed) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_EmitSpeed_IsBase(true);
        vkemailclientlauncherjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnEmitSpeed(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_EmitSpeed_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_EmitSpeed_Callback>(slot));
    }
}

// Derived class handler implementation
void KEMailClientLauncherJob_StartElapsedTimer(KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->startElapsedTimer();
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->startElapsedTimer();
    }
}

// Base class handler implementation
void KEMailClientLauncherJob_QBaseStartElapsedTimer(KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_StartElapsedTimer_IsBase(true);
        vkemailclientlauncherjob->startElapsedTimer();
    } else {
        ((VirtualKEMailClientLauncherJob*)self)->startElapsedTimer();
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnStartElapsedTimer(KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = dynamic_cast<VirtualKEMailClientLauncherJob*>(self);
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_StartElapsedTimer_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_StartElapsedTimer_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KEMailClientLauncherJob_Sender(const KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self));
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        return vkemailclientlauncherjob->sender();
    } else {
        return ((VirtualKEMailClientLauncherJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* KEMailClientLauncherJob_QBaseSender(const KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self));
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_Sender_IsBase(true);
        return vkemailclientlauncherjob->sender();
    } else {
        return ((VirtualKEMailClientLauncherJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnSender(const KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self));
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_Sender_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KEMailClientLauncherJob_SenderSignalIndex(const KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self));
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        return vkemailclientlauncherjob->senderSignalIndex();
    } else {
        return ((VirtualKEMailClientLauncherJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KEMailClientLauncherJob_QBaseSenderSignalIndex(const KEMailClientLauncherJob* self) {
    auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self));
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_SenderSignalIndex_IsBase(true);
        return vkemailclientlauncherjob->senderSignalIndex();
    } else {
        return ((VirtualKEMailClientLauncherJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnSenderSignalIndex(const KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self));
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KEMailClientLauncherJob_Receivers(const KEMailClientLauncherJob* self, const char* signal) {
    auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self));
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        return vkemailclientlauncherjob->receivers(signal);
    } else {
        return ((VirtualKEMailClientLauncherJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KEMailClientLauncherJob_QBaseReceivers(const KEMailClientLauncherJob* self, const char* signal) {
    auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self));
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_Receivers_IsBase(true);
        return vkemailclientlauncherjob->receivers(signal);
    } else {
        return ((VirtualKEMailClientLauncherJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnReceivers(const KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self));
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_Receivers_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEMailClientLauncherJob_IsSignalConnected(const KEMailClientLauncherJob* self, const QMetaMethod* signal) {
    auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self));
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        return vkemailclientlauncherjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKEMailClientLauncherJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KEMailClientLauncherJob_QBaseIsSignalConnected(const KEMailClientLauncherJob* self, const QMetaMethod* signal) {
    auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self));
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_IsSignalConnected_IsBase(true);
        return vkemailclientlauncherjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKEMailClientLauncherJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KEMailClientLauncherJob_OnIsSignalConnected(const KEMailClientLauncherJob* self, intptr_t slot) {
    auto* vkemailclientlauncherjob = const_cast<VirtualKEMailClientLauncherJob*>(dynamic_cast<const VirtualKEMailClientLauncherJob*>(self));
    if (vkemailclientlauncherjob && vkemailclientlauncherjob->isVirtualKEMailClientLauncherJob) {
        vkemailclientlauncherjob->setKEMailClientLauncherJob_IsSignalConnected_Callback(reinterpret_cast<VirtualKEMailClientLauncherJob::KEMailClientLauncherJob_IsSignalConnected_Callback>(slot));
    }
}

void KEMailClientLauncherJob_Delete(KEMailClientLauncherJob* self) {
    delete self;
}
