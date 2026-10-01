#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__OpenFileManagerWindowJob
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
#include <openfilemanagerwindowjob.h>
#include "libopenfilemanagerwindowjob.h"
#include "libopenfilemanagerwindowjob.hxx"

KIO__OpenFileManagerWindowJob* KIO__OpenFileManagerWindowJob_new() {
    return new VirtualKIOOpenFileManagerWindowJob();
}

KIO__OpenFileManagerWindowJob* KIO__OpenFileManagerWindowJob_new2(QObject* parent) {
    return new VirtualKIOOpenFileManagerWindowJob(parent);
}

QMetaObject* KIO__OpenFileManagerWindowJob_MetaObject(const KIO__OpenFileManagerWindowJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__OpenFileManagerWindowJob_Metacast(KIO__OpenFileManagerWindowJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__OpenFileManagerWindowJob_Metacall(KIO__OpenFileManagerWindowJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__OpenFileManagerWindowJob_Tr(const char* s) {
    auto _ret = KIO::OpenFileManagerWindowJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QUrl* */ KIO__OpenFileManagerWindowJob_HighlightUrls(const KIO__OpenFileManagerWindowJob* self) {
    QList<QUrl> _ret = self->highlightUrls();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KIO__OpenFileManagerWindowJob_SetHighlightUrls(KIO__OpenFileManagerWindowJob* self, const libqt_list /* of QUrl* */ highlightUrls) {
    QList<QUrl> highlightUrls_QList;
    highlightUrls_QList.reserve(highlightUrls.len);
    QUrl** highlightUrls_arr = static_cast<QUrl**>(highlightUrls.data);
    for (size_t i = 0; i < highlightUrls.len; ++i) {
        highlightUrls_QList.push_back(*(highlightUrls_arr[i]));
    }
    self->setHighlightUrls(highlightUrls_QList);
}

libqt_string KIO__OpenFileManagerWindowJob_StartupId(const KIO__OpenFileManagerWindowJob* self) {
    QByteArray _qb = self->startupId();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void KIO__OpenFileManagerWindowJob_SetStartupId(KIO__OpenFileManagerWindowJob* self, const libqt_string startupId) {
    QByteArray startupId_QByteArray(startupId.data, startupId.len);
    self->setStartupId(startupId_QByteArray);
}

void KIO__OpenFileManagerWindowJob_Start(KIO__OpenFileManagerWindowJob* self) {
    self->start();
}

libqt_string KIO__OpenFileManagerWindowJob_Tr2(const char* s, const char* c) {
    auto _ret = KIO::OpenFileManagerWindowJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__OpenFileManagerWindowJob_Tr3(const char* s, const char* c, int n) {
    auto _ret = KIO::OpenFileManagerWindowJob::tr(s, c, static_cast<int>(n));
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
QMetaObject* KIO__OpenFileManagerWindowJob_SuperMetaObject(const KIO__OpenFileManagerWindowJob* self) {
    return (QMetaObject*)self->KIO::OpenFileManagerWindowJob::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnMetaObject(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    if (auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self)))
        vkioopenfilemanagerwindowjob->kio__openfilemanagerwindowjob_metaobject_callback = reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KIO__OpenFileManagerWindowJob_SuperMetacast(KIO__OpenFileManagerWindowJob* self, const char* param1) {
    return self->KIO::OpenFileManagerWindowJob::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnMetacast(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self))
        vkioopenfilemanagerwindowjob->kio__openfilemanagerwindowjob_metacast_callback = reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_Metacast_Callback>(slot);
}

// Base class handler implementation
int KIO__OpenFileManagerWindowJob_SuperMetacall(KIO__OpenFileManagerWindowJob* self, int param1, int param2, void** param3) {
    return self->KIO::OpenFileManagerWindowJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnMetacall(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self))
        vkioopenfilemanagerwindowjob->kio__openfilemanagerwindowjob_metacall_callback = reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_Metacall_Callback>(slot);
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_SuperStart(KIO__OpenFileManagerWindowJob* self) {
    self->KIO::OpenFileManagerWindowJob::start();
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnStart(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self))
        vkioopenfilemanagerwindowjob->kio__openfilemanagerwindowjob_start_callback = reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_Start_Callback>(slot);
}

// Derived class handler implementation
bool KIO__OpenFileManagerWindowJob_DoKill(KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob) {
        return vkioopenfilemanagerwindowjob->doKill();
    } else {
        qFatal("Error: Protected virtual method KIO::OpenFileManagerWindowJob::doKill called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__OpenFileManagerWindowJob_SuperDoKill(KIO__OpenFileManagerWindowJob* self) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self)) {
        return vkioopenfilemanagerwindowjob->KIO::OpenFileManagerWindowJob::doKill();
    } else
        qFatal("Error: Protected virtual method KIO::OpenFileManagerWindowJob::doKill called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnDoKill(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self))
        vkioopenfilemanagerwindowjob->kio__openfilemanagerwindowjob_dokill_callback = reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_DoKill_Callback>(slot);
}

// Derived class handler implementation
bool KIO__OpenFileManagerWindowJob_DoSuspend(KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob) {
        return vkioopenfilemanagerwindowjob->doSuspend();
    } else {
        qFatal("Error: Protected virtual method KIO::OpenFileManagerWindowJob::doSuspend called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__OpenFileManagerWindowJob_SuperDoSuspend(KIO__OpenFileManagerWindowJob* self) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self)) {
        return vkioopenfilemanagerwindowjob->KIO::OpenFileManagerWindowJob::doSuspend();
    } else
        qFatal("Error: Protected virtual method KIO::OpenFileManagerWindowJob::doSuspend called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnDoSuspend(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self))
        vkioopenfilemanagerwindowjob->kio__openfilemanagerwindowjob_dosuspend_callback = reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_DoSuspend_Callback>(slot);
}

// Derived class handler implementation
bool KIO__OpenFileManagerWindowJob_DoResume(KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob) {
        return vkioopenfilemanagerwindowjob->doResume();
    } else {
        qFatal("Error: Protected virtual method KIO::OpenFileManagerWindowJob::doResume called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__OpenFileManagerWindowJob_SuperDoResume(KIO__OpenFileManagerWindowJob* self) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self)) {
        return vkioopenfilemanagerwindowjob->KIO::OpenFileManagerWindowJob::doResume();
    } else
        qFatal("Error: Protected virtual method KIO::OpenFileManagerWindowJob::doResume called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnDoResume(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self))
        vkioopenfilemanagerwindowjob->kio__openfilemanagerwindowjob_doresume_callback = reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_DoResume_Callback>(slot);
}

// Derived class handler implementation
libqt_string KIO__OpenFileManagerWindowJob_ErrorString(const KIO__OpenFileManagerWindowJob* self) {
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
libqt_string KIO__OpenFileManagerWindowJob_SuperErrorString(const KIO__OpenFileManagerWindowJob* self) {
    auto _ret = self->KIO::OpenFileManagerWindowJob::errorString();
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
void KIO__OpenFileManagerWindowJob_OnErrorString(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    if (auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self)))
        vkioopenfilemanagerwindowjob->kio__openfilemanagerwindowjob_errorstring_callback = reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_ErrorString_Callback>(slot);
}

// Derived class handler implementation
bool KIO__OpenFileManagerWindowJob_Event(KIO__OpenFileManagerWindowJob* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KIO__OpenFileManagerWindowJob_SuperEvent(KIO__OpenFileManagerWindowJob* self, QEvent* event) {
    return self->KIO::OpenFileManagerWindowJob::event(event);
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnEvent(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self))
        vkioopenfilemanagerwindowjob->kio__openfilemanagerwindowjob_event_callback = reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_Event_Callback>(slot);
}

// Derived class handler implementation
bool KIO__OpenFileManagerWindowJob_EventFilter(KIO__OpenFileManagerWindowJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KIO__OpenFileManagerWindowJob_SuperEventFilter(KIO__OpenFileManagerWindowJob* self, QObject* watched, QEvent* event) {
    return self->KIO::OpenFileManagerWindowJob::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnEventFilter(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self))
        vkioopenfilemanagerwindowjob->kio__openfilemanagerwindowjob_eventfilter_callback = reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_TimerEvent(KIO__OpenFileManagerWindowJob* self, QTimerEvent* event) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob) {
        vkioopenfilemanagerwindowjob->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::OpenFileManagerWindowJob::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_SuperTimerEvent(KIO__OpenFileManagerWindowJob* self, QTimerEvent* event) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self)) {
        vkioopenfilemanagerwindowjob->KIO::OpenFileManagerWindowJob::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::OpenFileManagerWindowJob::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnTimerEvent(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self))
        vkioopenfilemanagerwindowjob->kio__openfilemanagerwindowjob_timerevent_callback = reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_ChildEvent(KIO__OpenFileManagerWindowJob* self, QChildEvent* event) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob) {
        vkioopenfilemanagerwindowjob->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::OpenFileManagerWindowJob::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_SuperChildEvent(KIO__OpenFileManagerWindowJob* self, QChildEvent* event) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self)) {
        vkioopenfilemanagerwindowjob->KIO::OpenFileManagerWindowJob::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::OpenFileManagerWindowJob::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnChildEvent(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self))
        vkioopenfilemanagerwindowjob->kio__openfilemanagerwindowjob_childevent_callback = reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_CustomEvent(KIO__OpenFileManagerWindowJob* self, QEvent* event) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob) {
        vkioopenfilemanagerwindowjob->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::OpenFileManagerWindowJob::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_SuperCustomEvent(KIO__OpenFileManagerWindowJob* self, QEvent* event) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self)) {
        vkioopenfilemanagerwindowjob->KIO::OpenFileManagerWindowJob::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::OpenFileManagerWindowJob::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnCustomEvent(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self))
        vkioopenfilemanagerwindowjob->kio__openfilemanagerwindowjob_customevent_callback = reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_ConnectNotify(KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob) {
        vkioopenfilemanagerwindowjob->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::OpenFileManagerWindowJob::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_SuperConnectNotify(KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self)) {
        vkioopenfilemanagerwindowjob->KIO::OpenFileManagerWindowJob::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::OpenFileManagerWindowJob::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnConnectNotify(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self))
        vkioopenfilemanagerwindowjob->kio__openfilemanagerwindowjob_connectnotify_callback = reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_DisconnectNotify(KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob) {
        vkioopenfilemanagerwindowjob->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::OpenFileManagerWindowJob::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_SuperDisconnectNotify(KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self)) {
        vkioopenfilemanagerwindowjob->KIO::OpenFileManagerWindowJob::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::OpenFileManagerWindowJob::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnDisconnectNotify(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self))
        vkioopenfilemanagerwindowjob->kio__openfilemanagerwindowjob_disconnectnotify_callback = reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KIO__OpenFileManagerWindowJob_SetCapabilities(KIO__OpenFileManagerWindowJob* self, int capabilities) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self)) {
        vkioopenfilemanagerwindowjob->VirtualKIOOpenFileManagerWindowJob::setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else
        qFatal("Error: Protected method KIO::OpenFileManagerWindowJob::setCapabilities called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__OpenFileManagerWindowJob_IsFinished(const KIO__OpenFileManagerWindowJob* self) {
    if (auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self))) {
        return vkioopenfilemanagerwindowjob->VirtualKIOOpenFileManagerWindowJob::isFinished();
    } else
        qFatal("Error: Protected method KIO::OpenFileManagerWindowJob::isFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenFileManagerWindowJob_SetError(KIO__OpenFileManagerWindowJob* self, int errorCode) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self)) {
        vkioopenfilemanagerwindowjob->VirtualKIOOpenFileManagerWindowJob::setError(static_cast<int>(errorCode));
    } else
        qFatal("Error: Protected method KIO::OpenFileManagerWindowJob::setError called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenFileManagerWindowJob_SetErrorText(KIO__OpenFileManagerWindowJob* self, const libqt_string errorText) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self)) {
        QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
        vkioopenfilemanagerwindowjob->VirtualKIOOpenFileManagerWindowJob::setErrorText(errorText_QString);
    } else
        qFatal("Error: Protected method KIO::OpenFileManagerWindowJob::setErrorText called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenFileManagerWindowJob_SetProcessedAmount(KIO__OpenFileManagerWindowJob* self, int unit, unsigned long long amount) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self)) {
        vkioopenfilemanagerwindowjob->VirtualKIOOpenFileManagerWindowJob::setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::OpenFileManagerWindowJob::setProcessedAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenFileManagerWindowJob_SetTotalAmount(KIO__OpenFileManagerWindowJob* self, int unit, unsigned long long amount) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self)) {
        vkioopenfilemanagerwindowjob->VirtualKIOOpenFileManagerWindowJob::setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::OpenFileManagerWindowJob::setTotalAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenFileManagerWindowJob_SetProgressUnit(KIO__OpenFileManagerWindowJob* self, int unit) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self)) {
        vkioopenfilemanagerwindowjob->VirtualKIOOpenFileManagerWindowJob::setProgressUnit(static_cast<KJob::Unit>(unit));
    } else
        qFatal("Error: Protected method KIO::OpenFileManagerWindowJob::setProgressUnit called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenFileManagerWindowJob_SetPercent(KIO__OpenFileManagerWindowJob* self, unsigned long percentage) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self)) {
        vkioopenfilemanagerwindowjob->VirtualKIOOpenFileManagerWindowJob::setPercent(static_cast<unsigned long>(percentage));
    } else
        qFatal("Error: Protected method KIO::OpenFileManagerWindowJob::setPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenFileManagerWindowJob_EmitResult(KIO__OpenFileManagerWindowJob* self) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self)) {
        vkioopenfilemanagerwindowjob->VirtualKIOOpenFileManagerWindowJob::emitResult();
    } else
        qFatal("Error: Protected method KIO::OpenFileManagerWindowJob::emitResult called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenFileManagerWindowJob_EmitPercent(KIO__OpenFileManagerWindowJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self)) {
        vkioopenfilemanagerwindowjob->VirtualKIOOpenFileManagerWindowJob::emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else
        qFatal("Error: Protected method KIO::OpenFileManagerWindowJob::emitPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenFileManagerWindowJob_EmitSpeed(KIO__OpenFileManagerWindowJob* self, unsigned long speed) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self)) {
        vkioopenfilemanagerwindowjob->VirtualKIOOpenFileManagerWindowJob::emitSpeed(static_cast<unsigned long>(speed));
    } else
        qFatal("Error: Protected method KIO::OpenFileManagerWindowJob::emitSpeed called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__OpenFileManagerWindowJob_StartElapsedTimer(KIO__OpenFileManagerWindowJob* self) {
    if (auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self)) {
        vkioopenfilemanagerwindowjob->VirtualKIOOpenFileManagerWindowJob::startElapsedTimer();
    } else
        qFatal("Error: Protected method KIO::OpenFileManagerWindowJob::startElapsedTimer called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KIO__OpenFileManagerWindowJob_Sender(const KIO__OpenFileManagerWindowJob* self) {
    if (auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self))) {
        return vkioopenfilemanagerwindowjob->VirtualKIOOpenFileManagerWindowJob::sender();
    } else
        qFatal("Error: Protected method KIO::OpenFileManagerWindowJob::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__OpenFileManagerWindowJob_SenderSignalIndex(const KIO__OpenFileManagerWindowJob* self) {
    if (auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self))) {
        return vkioopenfilemanagerwindowjob->VirtualKIOOpenFileManagerWindowJob::senderSignalIndex();
    } else
        qFatal("Error: Protected method KIO::OpenFileManagerWindowJob::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__OpenFileManagerWindowJob_Receivers(const KIO__OpenFileManagerWindowJob* self, const char* signal) {
    if (auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self))) {
        return vkioopenfilemanagerwindowjob->VirtualKIOOpenFileManagerWindowJob::receivers(signal);
    } else
        qFatal("Error: Protected method KIO::OpenFileManagerWindowJob::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__OpenFileManagerWindowJob_IsSignalConnected(const KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal) {
    if (auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self))) {
        return vkioopenfilemanagerwindowjob->VirtualKIOOpenFileManagerWindowJob::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KIO::OpenFileManagerWindowJob::isSignalConnected called without a directly constructed type");
}

void KIO__OpenFileManagerWindowJob_Delete(KIO__OpenFileManagerWindowJob* self) {
    delete self;
}

KIO__OpenFileManagerWindowJob* KIO_HighlightInFileManager(const libqt_list /* of QUrl* */ urls, const libqt_string asn) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    QByteArray asn_QByteArray(asn.data, asn.len);
    return KIO::highlightInFileManager(urls_QList, asn_QByteArray);
}
