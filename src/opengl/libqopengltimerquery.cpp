#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QOpenGLTimeMonitor>
#include <QOpenGLTimerQuery>
#include <QString>
#include <QTimerEvent>
#include <qopengltimerquery.h>
#include "libqopengltimerquery.h"
#include "libqopengltimerquery.hxx"

QOpenGLTimerQuery* QOpenGLTimerQuery_new() {
    return new VirtualQOpenGLTimerQuery();
}

QOpenGLTimerQuery* QOpenGLTimerQuery_new2(QObject* parent) {
    return new VirtualQOpenGLTimerQuery(parent);
}

QMetaObject* QOpenGLTimerQuery_MetaObject(const QOpenGLTimerQuery* self) {
    return (QMetaObject*)self->metaObject();
}

void* QOpenGLTimerQuery_Metacast(QOpenGLTimerQuery* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QOpenGLTimerQuery_Metacall(QOpenGLTimerQuery* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QOpenGLTimerQuery_Tr(const char* s) {
    auto _ret = QOpenGLTimerQuery::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QOpenGLTimerQuery_Create(QOpenGLTimerQuery* self) {
    return self->create();
}

void QOpenGLTimerQuery_Destroy(QOpenGLTimerQuery* self) {
    self->destroy();
}

bool QOpenGLTimerQuery_IsCreated(const QOpenGLTimerQuery* self) {
    return self->isCreated();
}

uint32_t QOpenGLTimerQuery_ObjectId(const QOpenGLTimerQuery* self) {
    return self->objectId();
}

void QOpenGLTimerQuery_Begin(QOpenGLTimerQuery* self) {
    self->begin();
}

void QOpenGLTimerQuery_End(QOpenGLTimerQuery* self) {
    self->end();
}

uint64_t QOpenGLTimerQuery_WaitForTimestamp(const QOpenGLTimerQuery* self) {
    return self->waitForTimestamp();
}

void QOpenGLTimerQuery_RecordTimestamp(QOpenGLTimerQuery* self) {
    self->recordTimestamp();
}

bool QOpenGLTimerQuery_IsResultAvailable(const QOpenGLTimerQuery* self) {
    return self->isResultAvailable();
}

uint64_t QOpenGLTimerQuery_WaitForResult(const QOpenGLTimerQuery* self) {
    return self->waitForResult();
}

libqt_string QOpenGLTimerQuery_Tr2(const char* s, const char* c) {
    auto _ret = QOpenGLTimerQuery::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QOpenGLTimerQuery_Tr3(const char* s, const char* c, int n) {
    auto _ret = QOpenGLTimerQuery::tr(s, c, static_cast<int>(n));
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
QMetaObject* QOpenGLTimerQuery_SuperMetaObject(const QOpenGLTimerQuery* self) {
    return (QMetaObject*)self->QOpenGLTimerQuery::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnMetaObject(QOpenGLTimerQuery* self, intptr_t slot) {
    if (auto* vqopengltimerquery = const_cast<VirtualQOpenGLTimerQuery*>(dynamic_cast<const VirtualQOpenGLTimerQuery*>(self)))
        vqopengltimerquery->qopengltimerquery_metaobject_callback = reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QOpenGLTimerQuery_SuperMetacast(QOpenGLTimerQuery* self, const char* param1) {
    return self->QOpenGLTimerQuery::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnMetacast(QOpenGLTimerQuery* self, intptr_t slot) {
    if (auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self))
        vqopengltimerquery->qopengltimerquery_metacast_callback = reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_Metacast_Callback>(slot);
}

// Base class handler implementation
int QOpenGLTimerQuery_SuperMetacall(QOpenGLTimerQuery* self, int param1, int param2, void** param3) {
    return self->QOpenGLTimerQuery::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnMetacall(QOpenGLTimerQuery* self, intptr_t slot) {
    if (auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self))
        vqopengltimerquery->qopengltimerquery_metacall_callback = reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QOpenGLTimerQuery_Event(QOpenGLTimerQuery* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QOpenGLTimerQuery_SuperEvent(QOpenGLTimerQuery* self, QEvent* event) {
    return self->QOpenGLTimerQuery::event(event);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnEvent(QOpenGLTimerQuery* self, intptr_t slot) {
    if (auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self))
        vqopengltimerquery->qopengltimerquery_event_callback = reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_Event_Callback>(slot);
}

// Derived class handler implementation
bool QOpenGLTimerQuery_EventFilter(QOpenGLTimerQuery* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QOpenGLTimerQuery_SuperEventFilter(QOpenGLTimerQuery* self, QObject* watched, QEvent* event) {
    return self->QOpenGLTimerQuery::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnEventFilter(QOpenGLTimerQuery* self, intptr_t slot) {
    if (auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self))
        vqopengltimerquery->qopengltimerquery_eventfilter_callback = reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLTimerQuery_TimerEvent(QOpenGLTimerQuery* self, QTimerEvent* event) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery) {
        vqopengltimerquery->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLTimerQuery::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLTimerQuery_SuperTimerEvent(QOpenGLTimerQuery* self, QTimerEvent* event) {
    if (auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self)) {
        vqopengltimerquery->QOpenGLTimerQuery::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLTimerQuery::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnTimerEvent(QOpenGLTimerQuery* self, intptr_t slot) {
    if (auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self))
        vqopengltimerquery->qopengltimerquery_timerevent_callback = reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLTimerQuery_ChildEvent(QOpenGLTimerQuery* self, QChildEvent* event) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery) {
        vqopengltimerquery->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLTimerQuery::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLTimerQuery_SuperChildEvent(QOpenGLTimerQuery* self, QChildEvent* event) {
    if (auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self)) {
        vqopengltimerquery->QOpenGLTimerQuery::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLTimerQuery::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnChildEvent(QOpenGLTimerQuery* self, intptr_t slot) {
    if (auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self))
        vqopengltimerquery->qopengltimerquery_childevent_callback = reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLTimerQuery_CustomEvent(QOpenGLTimerQuery* self, QEvent* event) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery) {
        vqopengltimerquery->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLTimerQuery::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLTimerQuery_SuperCustomEvent(QOpenGLTimerQuery* self, QEvent* event) {
    if (auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self)) {
        vqopengltimerquery->QOpenGLTimerQuery::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLTimerQuery::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnCustomEvent(QOpenGLTimerQuery* self, intptr_t slot) {
    if (auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self))
        vqopengltimerquery->qopengltimerquery_customevent_callback = reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLTimerQuery_ConnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery) {
        vqopengltimerquery->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QOpenGLTimerQuery::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLTimerQuery_SuperConnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal) {
    if (auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self)) {
        vqopengltimerquery->QOpenGLTimerQuery::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QOpenGLTimerQuery::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnConnectNotify(QOpenGLTimerQuery* self, intptr_t slot) {
    if (auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self))
        vqopengltimerquery->qopengltimerquery_connectnotify_callback = reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLTimerQuery_DisconnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal) {
    auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self);
    if (vqopengltimerquery) {
        vqopengltimerquery->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QOpenGLTimerQuery::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLTimerQuery_SuperDisconnectNotify(QOpenGLTimerQuery* self, const QMetaMethod* signal) {
    if (auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self)) {
        vqopengltimerquery->QOpenGLTimerQuery::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QOpenGLTimerQuery::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimerQuery_OnDisconnectNotify(QOpenGLTimerQuery* self, intptr_t slot) {
    if (auto* vqopengltimerquery = dynamic_cast<VirtualQOpenGLTimerQuery*>(self))
        vqopengltimerquery->qopengltimerquery_disconnectnotify_callback = reinterpret_cast<VirtualQOpenGLTimerQuery::QOpenGLTimerQuery_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QOpenGLTimerQuery_Sender(const QOpenGLTimerQuery* self) {
    if (auto* vqopengltimerquery = const_cast<VirtualQOpenGLTimerQuery*>(dynamic_cast<const VirtualQOpenGLTimerQuery*>(self))) {
        return vqopengltimerquery->VirtualQOpenGLTimerQuery::sender();
    } else
        qFatal("Error: Protected method QOpenGLTimerQuery::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QOpenGLTimerQuery_SenderSignalIndex(const QOpenGLTimerQuery* self) {
    if (auto* vqopengltimerquery = const_cast<VirtualQOpenGLTimerQuery*>(dynamic_cast<const VirtualQOpenGLTimerQuery*>(self))) {
        return vqopengltimerquery->VirtualQOpenGLTimerQuery::senderSignalIndex();
    } else
        qFatal("Error: Protected method QOpenGLTimerQuery::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QOpenGLTimerQuery_Receivers(const QOpenGLTimerQuery* self, const char* signal) {
    if (auto* vqopengltimerquery = const_cast<VirtualQOpenGLTimerQuery*>(dynamic_cast<const VirtualQOpenGLTimerQuery*>(self))) {
        return vqopengltimerquery->VirtualQOpenGLTimerQuery::receivers(signal);
    } else
        qFatal("Error: Protected method QOpenGLTimerQuery::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QOpenGLTimerQuery_IsSignalConnected(const QOpenGLTimerQuery* self, const QMetaMethod* signal) {
    if (auto* vqopengltimerquery = const_cast<VirtualQOpenGLTimerQuery*>(dynamic_cast<const VirtualQOpenGLTimerQuery*>(self))) {
        return vqopengltimerquery->VirtualQOpenGLTimerQuery::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QOpenGLTimerQuery::isSignalConnected called without a directly constructed type");
}

void QOpenGLTimerQuery_Delete(QOpenGLTimerQuery* self) {
    delete self;
}

QOpenGLTimeMonitor* QOpenGLTimeMonitor_new() {
    return new VirtualQOpenGLTimeMonitor();
}

QOpenGLTimeMonitor* QOpenGLTimeMonitor_new2(QObject* parent) {
    return new VirtualQOpenGLTimeMonitor(parent);
}

QMetaObject* QOpenGLTimeMonitor_MetaObject(const QOpenGLTimeMonitor* self) {
    return (QMetaObject*)self->metaObject();
}

void* QOpenGLTimeMonitor_Metacast(QOpenGLTimeMonitor* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QOpenGLTimeMonitor_Metacall(QOpenGLTimeMonitor* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QOpenGLTimeMonitor_Tr(const char* s) {
    auto _ret = QOpenGLTimeMonitor::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QOpenGLTimeMonitor_SetSampleCount(QOpenGLTimeMonitor* self, int sampleCount) {
    self->setSampleCount(static_cast<int>(sampleCount));
}

int QOpenGLTimeMonitor_SampleCount(const QOpenGLTimeMonitor* self) {
    return self->sampleCount();
}

bool QOpenGLTimeMonitor_Create(QOpenGLTimeMonitor* self) {
    return self->create();
}

void QOpenGLTimeMonitor_Destroy(QOpenGLTimeMonitor* self) {
    self->destroy();
}

bool QOpenGLTimeMonitor_IsCreated(const QOpenGLTimeMonitor* self) {
    return self->isCreated();
}

libqt_list /* of uint32_t */ QOpenGLTimeMonitor_ObjectIds(const QOpenGLTimeMonitor* self) {
    QList<GLuint> _ret = self->objectIds();
    // Convert QList<> from C++ memory to manually-managed C memory
    uint32_t* _arr = static_cast<uint32_t*>(malloc(sizeof(uint32_t) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QOpenGLTimeMonitor_RecordSample(QOpenGLTimeMonitor* self) {
    return self->recordSample();
}

bool QOpenGLTimeMonitor_IsResultAvailable(const QOpenGLTimeMonitor* self) {
    return self->isResultAvailable();
}

libqt_list /* of uint64_t */ QOpenGLTimeMonitor_WaitForSamples(const QOpenGLTimeMonitor* self) {
    QList<GLuint64> _ret = self->waitForSamples();
    // Convert QList<> from C++ memory to manually-managed C memory
    uint64_t* _arr = static_cast<uint64_t*>(malloc(sizeof(uint64_t) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of uint64_t */ QOpenGLTimeMonitor_WaitForIntervals(const QOpenGLTimeMonitor* self) {
    QList<GLuint64> _ret = self->waitForIntervals();
    // Convert QList<> from C++ memory to manually-managed C memory
    uint64_t* _arr = static_cast<uint64_t*>(malloc(sizeof(uint64_t) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QOpenGLTimeMonitor_Reset(QOpenGLTimeMonitor* self) {
    self->reset();
}

libqt_string QOpenGLTimeMonitor_Tr2(const char* s, const char* c) {
    auto _ret = QOpenGLTimeMonitor::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QOpenGLTimeMonitor_Tr3(const char* s, const char* c, int n) {
    auto _ret = QOpenGLTimeMonitor::tr(s, c, static_cast<int>(n));
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
QMetaObject* QOpenGLTimeMonitor_SuperMetaObject(const QOpenGLTimeMonitor* self) {
    return (QMetaObject*)self->QOpenGLTimeMonitor::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnMetaObject(QOpenGLTimeMonitor* self, intptr_t slot) {
    if (auto* vqopengltimemonitor = const_cast<VirtualQOpenGLTimeMonitor*>(dynamic_cast<const VirtualQOpenGLTimeMonitor*>(self)))
        vqopengltimemonitor->qopengltimemonitor_metaobject_callback = reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QOpenGLTimeMonitor_SuperMetacast(QOpenGLTimeMonitor* self, const char* param1) {
    return self->QOpenGLTimeMonitor::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnMetacast(QOpenGLTimeMonitor* self, intptr_t slot) {
    if (auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self))
        vqopengltimemonitor->qopengltimemonitor_metacast_callback = reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_Metacast_Callback>(slot);
}

// Base class handler implementation
int QOpenGLTimeMonitor_SuperMetacall(QOpenGLTimeMonitor* self, int param1, int param2, void** param3) {
    return self->QOpenGLTimeMonitor::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnMetacall(QOpenGLTimeMonitor* self, intptr_t slot) {
    if (auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self))
        vqopengltimemonitor->qopengltimemonitor_metacall_callback = reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QOpenGLTimeMonitor_Event(QOpenGLTimeMonitor* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QOpenGLTimeMonitor_SuperEvent(QOpenGLTimeMonitor* self, QEvent* event) {
    return self->QOpenGLTimeMonitor::event(event);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnEvent(QOpenGLTimeMonitor* self, intptr_t slot) {
    if (auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self))
        vqopengltimemonitor->qopengltimemonitor_event_callback = reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_Event_Callback>(slot);
}

// Derived class handler implementation
bool QOpenGLTimeMonitor_EventFilter(QOpenGLTimeMonitor* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QOpenGLTimeMonitor_SuperEventFilter(QOpenGLTimeMonitor* self, QObject* watched, QEvent* event) {
    return self->QOpenGLTimeMonitor::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnEventFilter(QOpenGLTimeMonitor* self, intptr_t slot) {
    if (auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self))
        vqopengltimemonitor->qopengltimemonitor_eventfilter_callback = reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLTimeMonitor_TimerEvent(QOpenGLTimeMonitor* self, QTimerEvent* event) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor) {
        vqopengltimemonitor->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLTimeMonitor::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLTimeMonitor_SuperTimerEvent(QOpenGLTimeMonitor* self, QTimerEvent* event) {
    if (auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self)) {
        vqopengltimemonitor->QOpenGLTimeMonitor::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLTimeMonitor::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnTimerEvent(QOpenGLTimeMonitor* self, intptr_t slot) {
    if (auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self))
        vqopengltimemonitor->qopengltimemonitor_timerevent_callback = reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLTimeMonitor_ChildEvent(QOpenGLTimeMonitor* self, QChildEvent* event) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor) {
        vqopengltimemonitor->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLTimeMonitor::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLTimeMonitor_SuperChildEvent(QOpenGLTimeMonitor* self, QChildEvent* event) {
    if (auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self)) {
        vqopengltimemonitor->QOpenGLTimeMonitor::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLTimeMonitor::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnChildEvent(QOpenGLTimeMonitor* self, intptr_t slot) {
    if (auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self))
        vqopengltimemonitor->qopengltimemonitor_childevent_callback = reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLTimeMonitor_CustomEvent(QOpenGLTimeMonitor* self, QEvent* event) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor) {
        vqopengltimemonitor->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLTimeMonitor::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLTimeMonitor_SuperCustomEvent(QOpenGLTimeMonitor* self, QEvent* event) {
    if (auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self)) {
        vqopengltimemonitor->QOpenGLTimeMonitor::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLTimeMonitor::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnCustomEvent(QOpenGLTimeMonitor* self, intptr_t slot) {
    if (auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self))
        vqopengltimemonitor->qopengltimemonitor_customevent_callback = reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLTimeMonitor_ConnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor) {
        vqopengltimemonitor->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QOpenGLTimeMonitor::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLTimeMonitor_SuperConnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal) {
    if (auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self)) {
        vqopengltimemonitor->QOpenGLTimeMonitor::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QOpenGLTimeMonitor::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnConnectNotify(QOpenGLTimeMonitor* self, intptr_t slot) {
    if (auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self))
        vqopengltimemonitor->qopengltimemonitor_connectnotify_callback = reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLTimeMonitor_DisconnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal) {
    auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self);
    if (vqopengltimemonitor) {
        vqopengltimemonitor->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QOpenGLTimeMonitor::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLTimeMonitor_SuperDisconnectNotify(QOpenGLTimeMonitor* self, const QMetaMethod* signal) {
    if (auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self)) {
        vqopengltimemonitor->QOpenGLTimeMonitor::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QOpenGLTimeMonitor::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLTimeMonitor_OnDisconnectNotify(QOpenGLTimeMonitor* self, intptr_t slot) {
    if (auto* vqopengltimemonitor = dynamic_cast<VirtualQOpenGLTimeMonitor*>(self))
        vqopengltimemonitor->qopengltimemonitor_disconnectnotify_callback = reinterpret_cast<VirtualQOpenGLTimeMonitor::QOpenGLTimeMonitor_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QOpenGLTimeMonitor_Sender(const QOpenGLTimeMonitor* self) {
    if (auto* vqopengltimemonitor = const_cast<VirtualQOpenGLTimeMonitor*>(dynamic_cast<const VirtualQOpenGLTimeMonitor*>(self))) {
        return vqopengltimemonitor->VirtualQOpenGLTimeMonitor::sender();
    } else
        qFatal("Error: Protected method QOpenGLTimeMonitor::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QOpenGLTimeMonitor_SenderSignalIndex(const QOpenGLTimeMonitor* self) {
    if (auto* vqopengltimemonitor = const_cast<VirtualQOpenGLTimeMonitor*>(dynamic_cast<const VirtualQOpenGLTimeMonitor*>(self))) {
        return vqopengltimemonitor->VirtualQOpenGLTimeMonitor::senderSignalIndex();
    } else
        qFatal("Error: Protected method QOpenGLTimeMonitor::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QOpenGLTimeMonitor_Receivers(const QOpenGLTimeMonitor* self, const char* signal) {
    if (auto* vqopengltimemonitor = const_cast<VirtualQOpenGLTimeMonitor*>(dynamic_cast<const VirtualQOpenGLTimeMonitor*>(self))) {
        return vqopengltimemonitor->VirtualQOpenGLTimeMonitor::receivers(signal);
    } else
        qFatal("Error: Protected method QOpenGLTimeMonitor::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QOpenGLTimeMonitor_IsSignalConnected(const QOpenGLTimeMonitor* self, const QMetaMethod* signal) {
    if (auto* vqopengltimemonitor = const_cast<VirtualQOpenGLTimeMonitor*>(dynamic_cast<const VirtualQOpenGLTimeMonitor*>(self))) {
        return vqopengltimemonitor->VirtualQOpenGLTimeMonitor::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QOpenGLTimeMonitor::isSignalConnected called without a directly constructed type");
}

void QOpenGLTimeMonitor_Delete(QOpenGLTimeMonitor* self) {
    delete self;
}
