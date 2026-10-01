#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlaceReply>
#include <QString>
#include <QTimerEvent>
#include <qplacereply.h>
#include "libqplacereply.h"
#include "libqplacereply.hxx"

QPlaceReply* QPlaceReply_new() {
    return new VirtualQPlaceReply();
}

QPlaceReply* QPlaceReply_new2(QObject* parent) {
    return new VirtualQPlaceReply(parent);
}

QMetaObject* QPlaceReply_MetaObject(const QPlaceReply* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPlaceReply_Metacast(QPlaceReply* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPlaceReply_Metacall(QPlaceReply* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPlaceReply_Tr(const char* s) {
    auto _ret = QPlaceReply::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QPlaceReply_IsFinished(const QPlaceReply* self) {
    return self->isFinished();
}

int QPlaceReply_Type(const QPlaceReply* self) {
    return static_cast<int>(self->type());
}

libqt_string QPlaceReply_ErrorString(const QPlaceReply* self) {
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

int QPlaceReply_Error(const QPlaceReply* self) {
    return static_cast<int>(self->error());
}

void QPlaceReply_Abort(QPlaceReply* self) {
    self->abort();
}

void QPlaceReply_Finished(QPlaceReply* self) {
    self->finished();
}

void QPlaceReply_Connect_Finished(QPlaceReply* self, intptr_t slot) {
    void (*slotFunc)(QPlaceReply*) = reinterpret_cast<void (*)(QPlaceReply*)>(slot);
    QPlaceReply::connect(self,
                         static_cast<void (QPlaceReply::*)()>(&QPlaceReply::finished),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

void QPlaceReply_ContentUpdated(QPlaceReply* self) {
    self->contentUpdated();
}

void QPlaceReply_Connect_ContentUpdated(QPlaceReply* self, intptr_t slot) {
    void (*slotFunc)(QPlaceReply*) = reinterpret_cast<void (*)(QPlaceReply*)>(slot);
    QPlaceReply::connect(self,
                         static_cast<void (QPlaceReply::*)()>(&QPlaceReply::contentUpdated),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

void QPlaceReply_Aborted(QPlaceReply* self) {
    self->aborted();
}

void QPlaceReply_Connect_Aborted(QPlaceReply* self, intptr_t slot) {
    void (*slotFunc)(QPlaceReply*) = reinterpret_cast<void (*)(QPlaceReply*)>(slot);
    QPlaceReply::connect(self,
                         static_cast<void (QPlaceReply::*)()>(&QPlaceReply::aborted),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

void QPlaceReply_ErrorOccurred(QPlaceReply* self, int errorVal) {
    self->errorOccurred(static_cast<QPlaceReply::Error>(errorVal));
}

void QPlaceReply_Connect_ErrorOccurred(QPlaceReply* self, intptr_t slot) {
    void (*slotFunc)(QPlaceReply*, int) = reinterpret_cast<void (*)(QPlaceReply*, int)>(slot);
    QPlaceReply::connect(self,
                         static_cast<void (QPlaceReply::*)(QPlaceReply::Error, const QString&)>(&QPlaceReply::errorOccurred),
                         [self, slotFunc](QPlaceReply::Error errorVal) {
                             int sigval1 = static_cast<int>(errorVal);
                             slotFunc(self, sigval1);
                         });
}

libqt_string QPlaceReply_Tr2(const char* s, const char* c) {
    auto _ret = QPlaceReply::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPlaceReply_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPlaceReply::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlaceReply_ErrorOccurred2(QPlaceReply* self, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
}

void QPlaceReply_Connect_ErrorOccurred2(QPlaceReply* self, intptr_t slot) {
    void (*slotFunc)(QPlaceReply*, int, const char*) = reinterpret_cast<void (*)(QPlaceReply*, int, const char*)>(slot);
    QPlaceReply::connect(self,
                         static_cast<void (QPlaceReply::*)(QPlaceReply::Error, const QString&)>(&QPlaceReply::errorOccurred),
                         [self, slotFunc](QPlaceReply::Error errorVal, const QString& errorString) {
                             int sigval1 = static_cast<int>(errorVal);
                             const auto errorString_ret = errorString;
                             // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                             QByteArray errorString_b = errorString_ret.toUtf8();
                             auto errorString_str_len = errorString_b.length();
                             const char* errorString_str = static_cast<const char*>(malloc(errorString_str_len + 1));
                             memcpy((void*)errorString_str, errorString_b.data(), errorString_str_len);
                             ((char*)errorString_str)[errorString_str_len] = '\0';
                             const char* sigval2 = errorString_str;
                             slotFunc(self, sigval1, sigval2);
                             libqt_free(errorString_str);
                         });
}

// Base class handler implementation
QMetaObject* QPlaceReply_SuperMetaObject(const QPlaceReply* self) {
    return (QMetaObject*)self->QPlaceReply::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnMetaObject(QPlaceReply* self, intptr_t slot) {
    if (auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self)))
        vqplacereply->qplacereply_metaobject_callback = reinterpret_cast<VirtualQPlaceReply::QPlaceReply_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPlaceReply_SuperMetacast(QPlaceReply* self, const char* param1) {
    return self->QPlaceReply::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnMetacast(QPlaceReply* self, intptr_t slot) {
    if (auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self))
        vqplacereply->qplacereply_metacast_callback = reinterpret_cast<VirtualQPlaceReply::QPlaceReply_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPlaceReply_SuperMetacall(QPlaceReply* self, int param1, int param2, void** param3) {
    return self->QPlaceReply::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnMetacall(QPlaceReply* self, intptr_t slot) {
    if (auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self))
        vqplacereply->qplacereply_metacall_callback = reinterpret_cast<VirtualQPlaceReply::QPlaceReply_Metacall_Callback>(slot);
}

// Base class handler implementation
int QPlaceReply_SuperType(const QPlaceReply* self) {
    return static_cast<int>(self->QPlaceReply::type());
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnType(QPlaceReply* self, intptr_t slot) {
    if (auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self)))
        vqplacereply->qplacereply_type_callback = reinterpret_cast<VirtualQPlaceReply::QPlaceReply_Type_Callback>(slot);
}

// Base class handler implementation
void QPlaceReply_SuperAbort(QPlaceReply* self) {
    self->QPlaceReply::abort();
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnAbort(QPlaceReply* self, intptr_t slot) {
    if (auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self))
        vqplacereply->qplacereply_abort_callback = reinterpret_cast<VirtualQPlaceReply::QPlaceReply_Abort_Callback>(slot);
}

// Derived class handler implementation
bool QPlaceReply_Event(QPlaceReply* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPlaceReply_SuperEvent(QPlaceReply* self, QEvent* event) {
    return self->QPlaceReply::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnEvent(QPlaceReply* self, intptr_t slot) {
    if (auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self))
        vqplacereply->qplacereply_event_callback = reinterpret_cast<VirtualQPlaceReply::QPlaceReply_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPlaceReply_EventFilter(QPlaceReply* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPlaceReply_SuperEventFilter(QPlaceReply* self, QObject* watched, QEvent* event) {
    return self->QPlaceReply::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnEventFilter(QPlaceReply* self, intptr_t slot) {
    if (auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self))
        vqplacereply->qplacereply_eventfilter_callback = reinterpret_cast<VirtualQPlaceReply::QPlaceReply_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPlaceReply_TimerEvent(QPlaceReply* self, QTimerEvent* event) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply) {
        vqplacereply->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceReply::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceReply_SuperTimerEvent(QPlaceReply* self, QTimerEvent* event) {
    if (auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self)) {
        vqplacereply->QPlaceReply::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceReply::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnTimerEvent(QPlaceReply* self, intptr_t slot) {
    if (auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self))
        vqplacereply->qplacereply_timerevent_callback = reinterpret_cast<VirtualQPlaceReply::QPlaceReply_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceReply_ChildEvent(QPlaceReply* self, QChildEvent* event) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply) {
        vqplacereply->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceReply::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceReply_SuperChildEvent(QPlaceReply* self, QChildEvent* event) {
    if (auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self)) {
        vqplacereply->QPlaceReply::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceReply::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnChildEvent(QPlaceReply* self, intptr_t slot) {
    if (auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self))
        vqplacereply->qplacereply_childevent_callback = reinterpret_cast<VirtualQPlaceReply::QPlaceReply_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceReply_CustomEvent(QPlaceReply* self, QEvent* event) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply) {
        vqplacereply->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceReply::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceReply_SuperCustomEvent(QPlaceReply* self, QEvent* event) {
    if (auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self)) {
        vqplacereply->QPlaceReply::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceReply::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnCustomEvent(QPlaceReply* self, intptr_t slot) {
    if (auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self))
        vqplacereply->qplacereply_customevent_callback = reinterpret_cast<VirtualQPlaceReply::QPlaceReply_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceReply_ConnectNotify(QPlaceReply* self, const QMetaMethod* signal) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply) {
        vqplacereply->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlaceReply::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceReply_SuperConnectNotify(QPlaceReply* self, const QMetaMethod* signal) {
    if (auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self)) {
        vqplacereply->QPlaceReply::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlaceReply::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnConnectNotify(QPlaceReply* self, intptr_t slot) {
    if (auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self))
        vqplacereply->qplacereply_connectnotify_callback = reinterpret_cast<VirtualQPlaceReply::QPlaceReply_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPlaceReply_DisconnectNotify(QPlaceReply* self, const QMetaMethod* signal) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply) {
        vqplacereply->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlaceReply::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceReply_SuperDisconnectNotify(QPlaceReply* self, const QMetaMethod* signal) {
    if (auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self)) {
        vqplacereply->QPlaceReply::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlaceReply::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnDisconnectNotify(QPlaceReply* self, intptr_t slot) {
    if (auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self))
        vqplacereply->qplacereply_disconnectnotify_callback = reinterpret_cast<VirtualQPlaceReply::QPlaceReply_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QPlaceReply_SetFinished(QPlaceReply* self, bool finished) {
    if (auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self)) {
        vqplacereply->VirtualQPlaceReply::setFinished(finished);
    } else
        qFatal("Error: Protected method QPlaceReply::setFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void QPlaceReply_SetError(QPlaceReply* self, int errorVal, const libqt_string errorString) {
    if (auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqplacereply->VirtualQPlaceReply::setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else
        qFatal("Error: Protected method QPlaceReply::setError called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPlaceReply_Sender(const QPlaceReply* self) {
    if (auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self))) {
        return vqplacereply->VirtualQPlaceReply::sender();
    } else
        qFatal("Error: Protected method QPlaceReply::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlaceReply_SenderSignalIndex(const QPlaceReply* self) {
    if (auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self))) {
        return vqplacereply->VirtualQPlaceReply::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPlaceReply::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlaceReply_Receivers(const QPlaceReply* self, const char* signal) {
    if (auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self))) {
        return vqplacereply->VirtualQPlaceReply::receivers(signal);
    } else
        qFatal("Error: Protected method QPlaceReply::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPlaceReply_IsSignalConnected(const QPlaceReply* self, const QMetaMethod* signal) {
    if (auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self))) {
        return vqplacereply->VirtualQPlaceReply::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPlaceReply::isSignalConnected called without a directly constructed type");
}

void QPlaceReply_Delete(QPlaceReply* self) {
    delete self;
}
