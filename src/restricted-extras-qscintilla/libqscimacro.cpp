#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qscimacro.h>
#include "libqscimacro.h"
#include "libqscimacro.hxx"

QsciMacro* QsciMacro_new(QsciScintilla* parent) {
    return new VirtualQsciMacro(parent);
}

QsciMacro* QsciMacro_new2(const libqt_string asc, QsciScintilla* parent) {
    QString asc_QString = QString::fromUtf8(asc.data, asc.len);
    return new VirtualQsciMacro(asc_QString, parent);
}

QMetaObject* QsciMacro_MetaObject(const QsciMacro* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciMacro_Metacast(QsciMacro* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciMacro_Metacall(QsciMacro* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciMacro_Tr(const char* s) {
    auto _ret = QsciMacro::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QsciMacro_Clear(QsciMacro* self) {
    self->clear();
}

bool QsciMacro_Load(QsciMacro* self, const libqt_string asc) {
    QString asc_QString = QString::fromUtf8(asc.data, asc.len);
    return self->load(asc_QString);
}

libqt_string QsciMacro_Save(const QsciMacro* self) {
    auto _ret = self->save();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QsciMacro_Play(QsciMacro* self) {
    self->play();
}

void QsciMacro_StartRecording(QsciMacro* self) {
    self->startRecording();
}

void QsciMacro_EndRecording(QsciMacro* self) {
    self->endRecording();
}

libqt_string QsciMacro_Tr2(const char* s, const char* c) {
    auto _ret = QsciMacro::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciMacro_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciMacro::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciMacro_SuperMetaObject(const QsciMacro* self) {
    return (QMetaObject*)self->QsciMacro::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnMetaObject(QsciMacro* self, intptr_t slot) {
    if (auto* vqscimacro = const_cast<VirtualQsciMacro*>(dynamic_cast<const VirtualQsciMacro*>(self)))
        vqscimacro->qscimacro_metaobject_callback = reinterpret_cast<VirtualQsciMacro::QsciMacro_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciMacro_SuperMetacast(QsciMacro* self, const char* param1) {
    return self->QsciMacro::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnMetacast(QsciMacro* self, intptr_t slot) {
    if (auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self))
        vqscimacro->qscimacro_metacast_callback = reinterpret_cast<VirtualQsciMacro::QsciMacro_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciMacro_SuperMetacall(QsciMacro* self, int param1, int param2, void** param3) {
    return self->QsciMacro::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnMetacall(QsciMacro* self, intptr_t slot) {
    if (auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self))
        vqscimacro->qscimacro_metacall_callback = reinterpret_cast<VirtualQsciMacro::QsciMacro_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciMacro_SuperPlay(QsciMacro* self) {
    self->QsciMacro::play();
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnPlay(QsciMacro* self, intptr_t slot) {
    if (auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self))
        vqscimacro->qscimacro_play_callback = reinterpret_cast<VirtualQsciMacro::QsciMacro_Play_Callback>(slot);
}

// Base class handler implementation
void QsciMacro_SuperStartRecording(QsciMacro* self) {
    self->QsciMacro::startRecording();
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnStartRecording(QsciMacro* self, intptr_t slot) {
    if (auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self))
        vqscimacro->qscimacro_startrecording_callback = reinterpret_cast<VirtualQsciMacro::QsciMacro_StartRecording_Callback>(slot);
}

// Base class handler implementation
void QsciMacro_SuperEndRecording(QsciMacro* self) {
    self->QsciMacro::endRecording();
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnEndRecording(QsciMacro* self, intptr_t slot) {
    if (auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self))
        vqscimacro->qscimacro_endrecording_callback = reinterpret_cast<VirtualQsciMacro::QsciMacro_EndRecording_Callback>(slot);
}

// Derived class handler implementation
bool QsciMacro_Event(QsciMacro* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciMacro_SuperEvent(QsciMacro* self, QEvent* event) {
    return self->QsciMacro::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnEvent(QsciMacro* self, intptr_t slot) {
    if (auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self))
        vqscimacro->qscimacro_event_callback = reinterpret_cast<VirtualQsciMacro::QsciMacro_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciMacro_EventFilter(QsciMacro* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciMacro_SuperEventFilter(QsciMacro* self, QObject* watched, QEvent* event) {
    return self->QsciMacro::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnEventFilter(QsciMacro* self, intptr_t slot) {
    if (auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self))
        vqscimacro->qscimacro_eventfilter_callback = reinterpret_cast<VirtualQsciMacro::QsciMacro_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciMacro_TimerEvent(QsciMacro* self, QTimerEvent* event) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro) {
        vqscimacro->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciMacro::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciMacro_SuperTimerEvent(QsciMacro* self, QTimerEvent* event) {
    if (auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self)) {
        vqscimacro->QsciMacro::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciMacro::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnTimerEvent(QsciMacro* self, intptr_t slot) {
    if (auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self))
        vqscimacro->qscimacro_timerevent_callback = reinterpret_cast<VirtualQsciMacro::QsciMacro_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciMacro_ChildEvent(QsciMacro* self, QChildEvent* event) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro) {
        vqscimacro->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciMacro::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciMacro_SuperChildEvent(QsciMacro* self, QChildEvent* event) {
    if (auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self)) {
        vqscimacro->QsciMacro::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciMacro::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnChildEvent(QsciMacro* self, intptr_t slot) {
    if (auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self))
        vqscimacro->qscimacro_childevent_callback = reinterpret_cast<VirtualQsciMacro::QsciMacro_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciMacro_CustomEvent(QsciMacro* self, QEvent* event) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro) {
        vqscimacro->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciMacro::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciMacro_SuperCustomEvent(QsciMacro* self, QEvent* event) {
    if (auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self)) {
        vqscimacro->QsciMacro::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciMacro::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnCustomEvent(QsciMacro* self, intptr_t slot) {
    if (auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self))
        vqscimacro->qscimacro_customevent_callback = reinterpret_cast<VirtualQsciMacro::QsciMacro_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciMacro_ConnectNotify(QsciMacro* self, const QMetaMethod* signal) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro) {
        vqscimacro->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciMacro::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciMacro_SuperConnectNotify(QsciMacro* self, const QMetaMethod* signal) {
    if (auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self)) {
        vqscimacro->QsciMacro::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciMacro::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnConnectNotify(QsciMacro* self, intptr_t slot) {
    if (auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self))
        vqscimacro->qscimacro_connectnotify_callback = reinterpret_cast<VirtualQsciMacro::QsciMacro_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciMacro_DisconnectNotify(QsciMacro* self, const QMetaMethod* signal) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro) {
        vqscimacro->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciMacro::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciMacro_SuperDisconnectNotify(QsciMacro* self, const QMetaMethod* signal) {
    if (auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self)) {
        vqscimacro->QsciMacro::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciMacro::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnDisconnectNotify(QsciMacro* self, intptr_t slot) {
    if (auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self))
        vqscimacro->qscimacro_disconnectnotify_callback = reinterpret_cast<VirtualQsciMacro::QsciMacro_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QsciMacro_Sender(const QsciMacro* self) {
    if (auto* vqscimacro = const_cast<VirtualQsciMacro*>(dynamic_cast<const VirtualQsciMacro*>(self))) {
        return vqscimacro->VirtualQsciMacro::sender();
    } else
        qFatal("Error: Protected method QsciMacro::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciMacro_SenderSignalIndex(const QsciMacro* self) {
    if (auto* vqscimacro = const_cast<VirtualQsciMacro*>(dynamic_cast<const VirtualQsciMacro*>(self))) {
        return vqscimacro->VirtualQsciMacro::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciMacro::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciMacro_Receivers(const QsciMacro* self, const char* signal) {
    if (auto* vqscimacro = const_cast<VirtualQsciMacro*>(dynamic_cast<const VirtualQsciMacro*>(self))) {
        return vqscimacro->VirtualQsciMacro::receivers(signal);
    } else
        qFatal("Error: Protected method QsciMacro::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciMacro_IsSignalConnected(const QsciMacro* self, const QMetaMethod* signal) {
    if (auto* vqscimacro = const_cast<VirtualQsciMacro*>(dynamic_cast<const VirtualQsciMacro*>(self))) {
        return vqscimacro->VirtualQsciMacro::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciMacro::isSignalConnected called without a directly constructed type");
}

void QsciMacro_Delete(QsciMacro* self) {
    delete self;
}
