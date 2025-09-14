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
#include <QByteArray>
#include <cstring>
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
    auto* vkio__openfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkio__openfilemanagerwindowjob && vkio__openfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKIOOpenFileManagerWindowJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KIO__OpenFileManagerWindowJob_Tr(const char* s) {
    QString _ret = KIO::OpenFileManagerWindowJob::tr(s);
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
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size() + 1)));
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
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__OpenFileManagerWindowJob_SetStartupId(KIO__OpenFileManagerWindowJob* self, const libqt_string startupId) {
    QByteArray startupId_QByteArray(startupId.data, startupId.len);
    self->setStartupId(startupId_QByteArray);
}

void KIO__OpenFileManagerWindowJob_Start(KIO__OpenFileManagerWindowJob* self) {
    auto* vkio__openfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkio__openfilemanagerwindowjob && vkio__openfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        self->start();
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->start();
    }
}

libqt_string KIO__OpenFileManagerWindowJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::OpenFileManagerWindowJob::tr(s, c);
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
    QString _ret = KIO::OpenFileManagerWindowJob::tr(s, c, static_cast<int>(n));
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
int KIO__OpenFileManagerWindowJob_QBaseMetacall(KIO__OpenFileManagerWindowJob* self, int param1, int param2, void** param3) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_Metacall_IsBase(true);
        return vkioopenfilemanagerwindowjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::OpenFileManagerWindowJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnMetacall(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_Metacall_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_QBaseStart(KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_Start_IsBase(true);
        vkioopenfilemanagerwindowjob->start();
    } else {
        self->KIO::OpenFileManagerWindowJob::start();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnStart(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_Start_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_Start_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__OpenFileManagerWindowJob_DoKill(KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        return vkioopenfilemanagerwindowjob->doKill();
    } else {
        return ((VirtualKIOOpenFileManagerWindowJob*)self)->doKill();
    }
}

// Base class handler implementation
bool KIO__OpenFileManagerWindowJob_QBaseDoKill(KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_DoKill_IsBase(true);
        return vkioopenfilemanagerwindowjob->doKill();
    } else {
        return ((VirtualKIOOpenFileManagerWindowJob*)self)->doKill();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnDoKill(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_DoKill_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_DoKill_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__OpenFileManagerWindowJob_DoSuspend(KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        return vkioopenfilemanagerwindowjob->doSuspend();
    } else {
        return ((VirtualKIOOpenFileManagerWindowJob*)self)->doSuspend();
    }
}

// Base class handler implementation
bool KIO__OpenFileManagerWindowJob_QBaseDoSuspend(KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_DoSuspend_IsBase(true);
        return vkioopenfilemanagerwindowjob->doSuspend();
    } else {
        return ((VirtualKIOOpenFileManagerWindowJob*)self)->doSuspend();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnDoSuspend(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_DoSuspend_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_DoSuspend_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__OpenFileManagerWindowJob_DoResume(KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        return vkioopenfilemanagerwindowjob->doResume();
    } else {
        return ((VirtualKIOOpenFileManagerWindowJob*)self)->doResume();
    }
}

// Base class handler implementation
bool KIO__OpenFileManagerWindowJob_QBaseDoResume(KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_DoResume_IsBase(true);
        return vkioopenfilemanagerwindowjob->doResume();
    } else {
        return ((VirtualKIOOpenFileManagerWindowJob*)self)->doResume();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnDoResume(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_DoResume_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_DoResume_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KIO__OpenFileManagerWindowJob_ErrorString(const KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self));
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        QString _ret = vkioopenfilemanagerwindowjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::OpenFileManagerWindowJob::errorString();
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
libqt_string KIO__OpenFileManagerWindowJob_QBaseErrorString(const KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self));
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_ErrorString_IsBase(true);
        QString _ret = vkioopenfilemanagerwindowjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::OpenFileManagerWindowJob::errorString();
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
void KIO__OpenFileManagerWindowJob_OnErrorString(const KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self));
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_ErrorString_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_ErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__OpenFileManagerWindowJob_Event(KIO__OpenFileManagerWindowJob* self, QEvent* event) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        return vkioopenfilemanagerwindowjob->event(event);
    } else {
        return self->KIO::OpenFileManagerWindowJob::event(event);
    }
}

// Base class handler implementation
bool KIO__OpenFileManagerWindowJob_QBaseEvent(KIO__OpenFileManagerWindowJob* self, QEvent* event) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_Event_IsBase(true);
        return vkioopenfilemanagerwindowjob->event(event);
    } else {
        return self->KIO::OpenFileManagerWindowJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnEvent(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_Event_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__OpenFileManagerWindowJob_EventFilter(KIO__OpenFileManagerWindowJob* self, QObject* watched, QEvent* event) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        return vkioopenfilemanagerwindowjob->eventFilter(watched, event);
    } else {
        return self->KIO::OpenFileManagerWindowJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KIO__OpenFileManagerWindowJob_QBaseEventFilter(KIO__OpenFileManagerWindowJob* self, QObject* watched, QEvent* event) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_EventFilter_IsBase(true);
        return vkioopenfilemanagerwindowjob->eventFilter(watched, event);
    } else {
        return self->KIO::OpenFileManagerWindowJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnEventFilter(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_EventFilter_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_TimerEvent(KIO__OpenFileManagerWindowJob* self, QTimerEvent* event) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->timerEvent(event);
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_QBaseTimerEvent(KIO__OpenFileManagerWindowJob* self, QTimerEvent* event) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_TimerEvent_IsBase(true);
        vkioopenfilemanagerwindowjob->timerEvent(event);
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnTimerEvent(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_TimerEvent_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_ChildEvent(KIO__OpenFileManagerWindowJob* self, QChildEvent* event) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->childEvent(event);
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_QBaseChildEvent(KIO__OpenFileManagerWindowJob* self, QChildEvent* event) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_ChildEvent_IsBase(true);
        vkioopenfilemanagerwindowjob->childEvent(event);
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnChildEvent(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_ChildEvent_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_CustomEvent(KIO__OpenFileManagerWindowJob* self, QEvent* event) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->customEvent(event);
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_QBaseCustomEvent(KIO__OpenFileManagerWindowJob* self, QEvent* event) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_CustomEvent_IsBase(true);
        vkioopenfilemanagerwindowjob->customEvent(event);
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnCustomEvent(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_CustomEvent_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_ConnectNotify(KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->connectNotify(*signal);
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_QBaseConnectNotify(KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_ConnectNotify_IsBase(true);
        vkioopenfilemanagerwindowjob->connectNotify(*signal);
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnConnectNotify(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_ConnectNotify_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_DisconnectNotify(KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->disconnectNotify(*signal);
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_QBaseDisconnectNotify(KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_DisconnectNotify_IsBase(true);
        vkioopenfilemanagerwindowjob->disconnectNotify(*signal);
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnDisconnectNotify(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_DisconnectNotify_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_SetCapabilities(KIO__OpenFileManagerWindowJob* self, int capabilities) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_QBaseSetCapabilities(KIO__OpenFileManagerWindowJob* self, int capabilities) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_SetCapabilities_IsBase(true);
        vkioopenfilemanagerwindowjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnSetCapabilities(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_SetCapabilities_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_SetCapabilities_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__OpenFileManagerWindowJob_IsFinished(const KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self));
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        return vkioopenfilemanagerwindowjob->isFinished();
    } else {
        return ((VirtualKIOOpenFileManagerWindowJob*)self)->isFinished();
    }
}

// Base class handler implementation
bool KIO__OpenFileManagerWindowJob_QBaseIsFinished(const KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self));
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_IsFinished_IsBase(true);
        return vkioopenfilemanagerwindowjob->isFinished();
    } else {
        return ((VirtualKIOOpenFileManagerWindowJob*)self)->isFinished();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnIsFinished(const KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self));
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_IsFinished_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_IsFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_SetError(KIO__OpenFileManagerWindowJob* self, int errorCode) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_QBaseSetError(KIO__OpenFileManagerWindowJob* self, int errorCode) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_SetError_IsBase(true);
        vkioopenfilemanagerwindowjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnSetError(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_SetError_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_SetErrorText(KIO__OpenFileManagerWindowJob* self, const libqt_string errorText) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->setErrorText(errorText_QString);
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_QBaseSetErrorText(KIO__OpenFileManagerWindowJob* self, const libqt_string errorText) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_SetErrorText_IsBase(true);
        vkioopenfilemanagerwindowjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->setErrorText(errorText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnSetErrorText(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_SetErrorText_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_SetErrorText_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_SetProcessedAmount(KIO__OpenFileManagerWindowJob* self, int unit, unsigned long long amount) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_QBaseSetProcessedAmount(KIO__OpenFileManagerWindowJob* self, int unit, unsigned long long amount) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_SetProcessedAmount_IsBase(true);
        vkioopenfilemanagerwindowjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnSetProcessedAmount(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_SetProcessedAmount_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_SetProcessedAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_SetTotalAmount(KIO__OpenFileManagerWindowJob* self, int unit, unsigned long long amount) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_QBaseSetTotalAmount(KIO__OpenFileManagerWindowJob* self, int unit, unsigned long long amount) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_SetTotalAmount_IsBase(true);
        vkioopenfilemanagerwindowjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnSetTotalAmount(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_SetTotalAmount_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_SetTotalAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_SetProgressUnit(KIO__OpenFileManagerWindowJob* self, int unit) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_QBaseSetProgressUnit(KIO__OpenFileManagerWindowJob* self, int unit) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_SetProgressUnit_IsBase(true);
        vkioopenfilemanagerwindowjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnSetProgressUnit(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_SetProgressUnit_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_SetProgressUnit_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_SetPercent(KIO__OpenFileManagerWindowJob* self, unsigned long percentage) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_QBaseSetPercent(KIO__OpenFileManagerWindowJob* self, unsigned long percentage) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_SetPercent_IsBase(true);
        vkioopenfilemanagerwindowjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnSetPercent(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_SetPercent_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_SetPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_EmitResult(KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->emitResult();
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->emitResult();
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_QBaseEmitResult(KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_EmitResult_IsBase(true);
        vkioopenfilemanagerwindowjob->emitResult();
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->emitResult();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnEmitResult(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_EmitResult_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_EmitResult_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_EmitPercent(KIO__OpenFileManagerWindowJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_QBaseEmitPercent(KIO__OpenFileManagerWindowJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_EmitPercent_IsBase(true);
        vkioopenfilemanagerwindowjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnEmitPercent(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_EmitPercent_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_EmitPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_EmitSpeed(KIO__OpenFileManagerWindowJob* self, unsigned long speed) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_QBaseEmitSpeed(KIO__OpenFileManagerWindowJob* self, unsigned long speed) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_EmitSpeed_IsBase(true);
        vkioopenfilemanagerwindowjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnEmitSpeed(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_EmitSpeed_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_EmitSpeed_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__OpenFileManagerWindowJob_StartElapsedTimer(KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->startElapsedTimer();
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->startElapsedTimer();
    }
}

// Base class handler implementation
void KIO__OpenFileManagerWindowJob_QBaseStartElapsedTimer(KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_StartElapsedTimer_IsBase(true);
        vkioopenfilemanagerwindowjob->startElapsedTimer();
    } else {
        ((VirtualKIOOpenFileManagerWindowJob*)self)->startElapsedTimer();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnStartElapsedTimer(KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = dynamic_cast<VirtualKIOOpenFileManagerWindowJob*>(self);
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_StartElapsedTimer_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_StartElapsedTimer_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIO__OpenFileManagerWindowJob_Sender(const KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self));
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        return vkioopenfilemanagerwindowjob->sender();
    } else {
        return ((VirtualKIOOpenFileManagerWindowJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIO__OpenFileManagerWindowJob_QBaseSender(const KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self));
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_Sender_IsBase(true);
        return vkioopenfilemanagerwindowjob->sender();
    } else {
        return ((VirtualKIOOpenFileManagerWindowJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnSender(const KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self));
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_Sender_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__OpenFileManagerWindowJob_SenderSignalIndex(const KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self));
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        return vkioopenfilemanagerwindowjob->senderSignalIndex();
    } else {
        return ((VirtualKIOOpenFileManagerWindowJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIO__OpenFileManagerWindowJob_QBaseSenderSignalIndex(const KIO__OpenFileManagerWindowJob* self) {
    auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self));
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_SenderSignalIndex_IsBase(true);
        return vkioopenfilemanagerwindowjob->senderSignalIndex();
    } else {
        return ((VirtualKIOOpenFileManagerWindowJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnSenderSignalIndex(const KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self));
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__OpenFileManagerWindowJob_Receivers(const KIO__OpenFileManagerWindowJob* self, const char* signal) {
    auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self));
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        return vkioopenfilemanagerwindowjob->receivers(signal);
    } else {
        return ((VirtualKIOOpenFileManagerWindowJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIO__OpenFileManagerWindowJob_QBaseReceivers(const KIO__OpenFileManagerWindowJob* self, const char* signal) {
    auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self));
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_Receivers_IsBase(true);
        return vkioopenfilemanagerwindowjob->receivers(signal);
    } else {
        return ((VirtualKIOOpenFileManagerWindowJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnReceivers(const KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self));
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_Receivers_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__OpenFileManagerWindowJob_IsSignalConnected(const KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal) {
    auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self));
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        return vkioopenfilemanagerwindowjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOOpenFileManagerWindowJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIO__OpenFileManagerWindowJob_QBaseIsSignalConnected(const KIO__OpenFileManagerWindowJob* self, const QMetaMethod* signal) {
    auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self));
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_IsSignalConnected_IsBase(true);
        return vkioopenfilemanagerwindowjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOOpenFileManagerWindowJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__OpenFileManagerWindowJob_OnIsSignalConnected(const KIO__OpenFileManagerWindowJob* self, intptr_t slot) {
    auto* vkioopenfilemanagerwindowjob = const_cast<VirtualKIOOpenFileManagerWindowJob*>(dynamic_cast<const VirtualKIOOpenFileManagerWindowJob*>(self));
    if (vkioopenfilemanagerwindowjob && vkioopenfilemanagerwindowjob->isVirtualKIOOpenFileManagerWindowJob) {
        vkioopenfilemanagerwindowjob->setKIO__OpenFileManagerWindowJob_IsSignalConnected_Callback(reinterpret_cast<VirtualKIOOpenFileManagerWindowJob::KIO__OpenFileManagerWindowJob_IsSignalConnected_Callback>(slot));
    }
}

void KIO__OpenFileManagerWindowJob_Delete(KIO__OpenFileManagerWindowJob* self) {
    delete self;
}

KIO__OpenFileManagerWindowJob* KIO_HighlightInFileManager(const libqt_list /* of QUrl* */ param1, const libqt_string param2) {
    QList<QUrl> param1_QList;
    param1_QList.reserve(param1.len);
    QUrl** param1_arr = static_cast<QUrl**>(param1.data);
    for (size_t i = 0; i < param1.len; ++i) {
        param1_QList.push_back(*(param1_arr[i]));
    }
    QByteArray param2_QByteArray(param2.data, param2.len);
    return KIO::highlightInFileManager(param1_QList, param2_QByteArray);
}
