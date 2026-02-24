#include <QChildEvent>
#include <QEvent>
#include <QGeoRoute>
#include <QGeoRouteReply>
#include <QGeoRouteRequest>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qgeoroutereply.h>
#include "libqgeoroutereply.h"
#include "libqgeoroutereply.hxx"

QGeoRouteReply* QGeoRouteReply_new(int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    return new VirtualQGeoRouteReply(static_cast<QGeoRouteReply::Error>(errorVal), errorString_QString);
}

QGeoRouteReply* QGeoRouteReply_new2(int errorVal, const libqt_string errorString, QObject* parent) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    return new VirtualQGeoRouteReply(static_cast<QGeoRouteReply::Error>(errorVal), errorString_QString, parent);
}

QMetaObject* QGeoRouteReply_MetaObject(const QGeoRouteReply* self) {
    auto* vqgeoroutereply = dynamic_cast<const VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQGeoRouteReply*)self)->metaObject();
    }
}

void* QGeoRouteReply_Metacast(QGeoRouteReply* self, const char* param1) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQGeoRouteReply*)self)->qt_metacast(param1);
    }
}

int QGeoRouteReply_Metacall(QGeoRouteReply* self, int param1, int param2, void** param3) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGeoRouteReply*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

bool QGeoRouteReply_IsFinished(const QGeoRouteReply* self) {
    return self->isFinished();
}

int QGeoRouteReply_Error(const QGeoRouteReply* self) {
    return static_cast<int>(self->error());
}

libqt_string QGeoRouteReply_ErrorString(const QGeoRouteReply* self) {
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

QGeoRouteRequest* QGeoRouteReply_Request(const QGeoRouteReply* self) {
    return new QGeoRouteRequest(self->request());
}

libqt_list /* of QGeoRoute* */ QGeoRouteReply_Routes(const QGeoRouteReply* self) {
    QList<QGeoRoute> _ret = self->routes();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGeoRoute** _arr = static_cast<QGeoRoute**>(malloc(sizeof(QGeoRoute*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QGeoRoute(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QGeoRouteReply_Abort(QGeoRouteReply* self) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        self->abort();
    } else {
        ((VirtualQGeoRouteReply*)self)->abort();
    }
}

void QGeoRouteReply_Finished(QGeoRouteReply* self) {
    self->finished();
}

void QGeoRouteReply_Connect_Finished(QGeoRouteReply* self, intptr_t slot) {
    void (*slotFunc)(QGeoRouteReply*) = reinterpret_cast<void (*)(QGeoRouteReply*)>(slot);
    QGeoRouteReply::connect(self, &QGeoRouteReply::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGeoRouteReply_Aborted(QGeoRouteReply* self) {
    self->aborted();
}

void QGeoRouteReply_Connect_Aborted(QGeoRouteReply* self, intptr_t slot) {
    void (*slotFunc)(QGeoRouteReply*) = reinterpret_cast<void (*)(QGeoRouteReply*)>(slot);
    QGeoRouteReply::connect(self, &QGeoRouteReply::aborted, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGeoRouteReply_ErrorOccurred(QGeoRouteReply* self, int errorVal) {
    self->errorOccurred(static_cast<QGeoRouteReply::Error>(errorVal));
}

void QGeoRouteReply_Connect_ErrorOccurred(QGeoRouteReply* self, intptr_t slot) {
    void (*slotFunc)(QGeoRouteReply*, int) = reinterpret_cast<void (*)(QGeoRouteReply*, int)>(slot);
    QGeoRouteReply::connect(self, &QGeoRouteReply::errorOccurred, [self, slotFunc](QGeoRouteReply::Error errorVal) {
        int sigval1 = static_cast<int>(errorVal);
        slotFunc(self, sigval1);
    });
}

void QGeoRouteReply_ErrorOccurred2(QGeoRouteReply* self, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(static_cast<QGeoRouteReply::Error>(errorVal), errorString_QString);
}

void QGeoRouteReply_Connect_ErrorOccurred2(QGeoRouteReply* self, intptr_t slot) {
    void (*slotFunc)(QGeoRouteReply*, int, const char*) = reinterpret_cast<void (*)(QGeoRouteReply*, int, const char*)>(slot);
    QGeoRouteReply::connect(self, &QGeoRouteReply::errorOccurred, [self, slotFunc](QGeoRouteReply::Error errorVal, const QString& errorString) {
        int sigval1 = static_cast<int>(errorVal);
        const QString errorString_ret = errorString;
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
QMetaObject* QGeoRouteReply_SuperMetaObject(const QGeoRouteReply* self) {
    auto* vqgeoroutereply = const_cast<VirtualQGeoRouteReply*>(dynamic_cast<const VirtualQGeoRouteReply*>(self));
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_MetaObject_IsBase(true);
        return (QMetaObject*)vqgeoroutereply->metaObject();
    } else {
        return (QMetaObject*)self->QGeoRouteReply::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnMetaObject(const QGeoRouteReply* self, intptr_t slot) {
    auto* vqgeoroutereply = const_cast<VirtualQGeoRouteReply*>(dynamic_cast<const VirtualQGeoRouteReply*>(self));
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_MetaObject_Callback(reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QGeoRouteReply_SuperMetacast(QGeoRouteReply* self, const char* param1) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_Metacast_IsBase(true);
        return vqgeoroutereply->qt_metacast(param1);
    } else {
        return self->QGeoRouteReply::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnMetacast(QGeoRouteReply* self, intptr_t slot) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_Metacast_Callback(reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QGeoRouteReply_SuperMetacall(QGeoRouteReply* self, int param1, int param2, void** param3) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_Metacall_IsBase(true);
        return vqgeoroutereply->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QGeoRouteReply::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnMetacall(QGeoRouteReply* self, intptr_t slot) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_Metacall_Callback(reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QGeoRouteReply_SuperAbort(QGeoRouteReply* self) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_Abort_IsBase(true);
        vqgeoroutereply->abort();
    } else {
        self->QGeoRouteReply::abort();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnAbort(QGeoRouteReply* self, intptr_t slot) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_Abort_Callback(reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_Abort_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoRouteReply_Event(QGeoRouteReply* self, QEvent* event) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        return vqgeoroutereply->event(event);
    } else {
        return self->QGeoRouteReply::event(event);
    }
}

// Base class handler implementation
bool QGeoRouteReply_SuperEvent(QGeoRouteReply* self, QEvent* event) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_Event_IsBase(true);
        return vqgeoroutereply->event(event);
    } else {
        return self->QGeoRouteReply::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnEvent(QGeoRouteReply* self, intptr_t slot) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_Event_Callback(reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoRouteReply_EventFilter(QGeoRouteReply* self, QObject* watched, QEvent* event) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        return vqgeoroutereply->eventFilter(watched, event);
    } else {
        return self->QGeoRouteReply::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGeoRouteReply_SuperEventFilter(QGeoRouteReply* self, QObject* watched, QEvent* event) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_EventFilter_IsBase(true);
        return vqgeoroutereply->eventFilter(watched, event);
    } else {
        return self->QGeoRouteReply::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnEventFilter(QGeoRouteReply* self, intptr_t slot) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_EventFilter_Callback(reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRouteReply_TimerEvent(QGeoRouteReply* self, QTimerEvent* event) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->timerEvent(event);
    } else {
        ((VirtualQGeoRouteReply*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QGeoRouteReply_SuperTimerEvent(QGeoRouteReply* self, QTimerEvent* event) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_TimerEvent_IsBase(true);
        vqgeoroutereply->timerEvent(event);
    } else {
        ((VirtualQGeoRouteReply*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnTimerEvent(QGeoRouteReply* self, intptr_t slot) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_TimerEvent_Callback(reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRouteReply_ChildEvent(QGeoRouteReply* self, QChildEvent* event) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->childEvent(event);
    } else {
        ((VirtualQGeoRouteReply*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QGeoRouteReply_SuperChildEvent(QGeoRouteReply* self, QChildEvent* event) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_ChildEvent_IsBase(true);
        vqgeoroutereply->childEvent(event);
    } else {
        ((VirtualQGeoRouteReply*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnChildEvent(QGeoRouteReply* self, intptr_t slot) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_ChildEvent_Callback(reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRouteReply_CustomEvent(QGeoRouteReply* self, QEvent* event) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->customEvent(event);
    } else {
        ((VirtualQGeoRouteReply*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QGeoRouteReply_SuperCustomEvent(QGeoRouteReply* self, QEvent* event) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_CustomEvent_IsBase(true);
        vqgeoroutereply->customEvent(event);
    } else {
        ((VirtualQGeoRouteReply*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnCustomEvent(QGeoRouteReply* self, intptr_t slot) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_CustomEvent_Callback(reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRouteReply_ConnectNotify(QGeoRouteReply* self, const QMetaMethod* signal) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->connectNotify(*signal);
    } else {
        ((VirtualQGeoRouteReply*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGeoRouteReply_SuperConnectNotify(QGeoRouteReply* self, const QMetaMethod* signal) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_ConnectNotify_IsBase(true);
        vqgeoroutereply->connectNotify(*signal);
    } else {
        ((VirtualQGeoRouteReply*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnConnectNotify(QGeoRouteReply* self, intptr_t slot) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_ConnectNotify_Callback(reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRouteReply_DisconnectNotify(QGeoRouteReply* self, const QMetaMethod* signal) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->disconnectNotify(*signal);
    } else {
        ((VirtualQGeoRouteReply*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGeoRouteReply_SuperDisconnectNotify(QGeoRouteReply* self, const QMetaMethod* signal) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_DisconnectNotify_IsBase(true);
        vqgeoroutereply->disconnectNotify(*signal);
    } else {
        ((VirtualQGeoRouteReply*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnDisconnectNotify(QGeoRouteReply* self, intptr_t slot) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_DisconnectNotify_Callback(reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRouteReply_SetError(QGeoRouteReply* self, int errorVal, const libqt_string errorString) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setError(static_cast<QGeoRouteReply::Error>(errorVal), errorString_QString);
    } else {
        ((VirtualQGeoRouteReply*)self)->setError(static_cast<QGeoRouteReply::Error>(errorVal), errorString_QString);
    }
}

// Base class handler implementation
void QGeoRouteReply_SuperSetError(QGeoRouteReply* self, int errorVal, const libqt_string errorString) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_SetError_IsBase(true);
        vqgeoroutereply->setError(static_cast<QGeoRouteReply::Error>(errorVal), errorString_QString);
    } else {
        ((VirtualQGeoRouteReply*)self)->setError(static_cast<QGeoRouteReply::Error>(errorVal), errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnSetError(QGeoRouteReply* self, intptr_t slot) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_SetError_Callback(reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRouteReply_SetFinished(QGeoRouteReply* self, bool finished) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setFinished(finished);
    } else {
        ((VirtualQGeoRouteReply*)self)->setFinished(finished);
    }
}

// Base class handler implementation
void QGeoRouteReply_SuperSetFinished(QGeoRouteReply* self, bool finished) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_SetFinished_IsBase(true);
        vqgeoroutereply->setFinished(finished);
    } else {
        ((VirtualQGeoRouteReply*)self)->setFinished(finished);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnSetFinished(QGeoRouteReply* self, intptr_t slot) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_SetFinished_Callback(reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_SetFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRouteReply_SetRoutes(QGeoRouteReply* self, const libqt_list /* of QGeoRoute* */ routes) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    QList<QGeoRoute> routes_QList;
    routes_QList.reserve(routes.len);
    QGeoRoute** routes_arr = static_cast<QGeoRoute**>(routes.data);
    for (size_t i = 0; i < routes.len; ++i) {
        routes_QList.push_back(*(routes_arr[i]));
    }
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setRoutes(routes_QList);
    } else {
        ((VirtualQGeoRouteReply*)self)->setRoutes(routes_QList);
    }
}

// Base class handler implementation
void QGeoRouteReply_SuperSetRoutes(QGeoRouteReply* self, const libqt_list /* of QGeoRoute* */ routes) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    QList<QGeoRoute> routes_QList;
    routes_QList.reserve(routes.len);
    QGeoRoute** routes_arr = static_cast<QGeoRoute**>(routes.data);
    for (size_t i = 0; i < routes.len; ++i) {
        routes_QList.push_back(*(routes_arr[i]));
    }
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_SetRoutes_IsBase(true);
        vqgeoroutereply->setRoutes(routes_QList);
    } else {
        ((VirtualQGeoRouteReply*)self)->setRoutes(routes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnSetRoutes(QGeoRouteReply* self, intptr_t slot) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_SetRoutes_Callback(reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_SetRoutes_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoRouteReply_AddRoutes(QGeoRouteReply* self, const libqt_list /* of QGeoRoute* */ routes) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    QList<QGeoRoute> routes_QList;
    routes_QList.reserve(routes.len);
    QGeoRoute** routes_arr = static_cast<QGeoRoute**>(routes.data);
    for (size_t i = 0; i < routes.len; ++i) {
        routes_QList.push_back(*(routes_arr[i]));
    }
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->addRoutes(routes_QList);
    } else {
        ((VirtualQGeoRouteReply*)self)->addRoutes(routes_QList);
    }
}

// Base class handler implementation
void QGeoRouteReply_SuperAddRoutes(QGeoRouteReply* self, const libqt_list /* of QGeoRoute* */ routes) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    QList<QGeoRoute> routes_QList;
    routes_QList.reserve(routes.len);
    QGeoRoute** routes_arr = static_cast<QGeoRoute**>(routes.data);
    for (size_t i = 0; i < routes.len; ++i) {
        routes_QList.push_back(*(routes_arr[i]));
    }
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_AddRoutes_IsBase(true);
        vqgeoroutereply->addRoutes(routes_QList);
    } else {
        ((VirtualQGeoRouteReply*)self)->addRoutes(routes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnAddRoutes(QGeoRouteReply* self, intptr_t slot) {
    auto* vqgeoroutereply = dynamic_cast<VirtualQGeoRouteReply*>(self);
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_AddRoutes_Callback(reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_AddRoutes_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGeoRouteReply_Sender(const QGeoRouteReply* self) {
    auto* vqgeoroutereply = const_cast<VirtualQGeoRouteReply*>(dynamic_cast<const VirtualQGeoRouteReply*>(self));
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        return vqgeoroutereply->sender();
    } else {
        return ((VirtualQGeoRouteReply*)self)->sender();
    }
}

// Base class handler implementation
QObject* QGeoRouteReply_SuperSender(const QGeoRouteReply* self) {
    auto* vqgeoroutereply = const_cast<VirtualQGeoRouteReply*>(dynamic_cast<const VirtualQGeoRouteReply*>(self));
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_Sender_IsBase(true);
        return vqgeoroutereply->sender();
    } else {
        return ((VirtualQGeoRouteReply*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnSender(const QGeoRouteReply* self, intptr_t slot) {
    auto* vqgeoroutereply = const_cast<VirtualQGeoRouteReply*>(dynamic_cast<const VirtualQGeoRouteReply*>(self));
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_Sender_Callback(reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGeoRouteReply_SenderSignalIndex(const QGeoRouteReply* self) {
    auto* vqgeoroutereply = const_cast<VirtualQGeoRouteReply*>(dynamic_cast<const VirtualQGeoRouteReply*>(self));
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        return vqgeoroutereply->senderSignalIndex();
    } else {
        return ((VirtualQGeoRouteReply*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QGeoRouteReply_SuperSenderSignalIndex(const QGeoRouteReply* self) {
    auto* vqgeoroutereply = const_cast<VirtualQGeoRouteReply*>(dynamic_cast<const VirtualQGeoRouteReply*>(self));
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_SenderSignalIndex_IsBase(true);
        return vqgeoroutereply->senderSignalIndex();
    } else {
        return ((VirtualQGeoRouteReply*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnSenderSignalIndex(const QGeoRouteReply* self, intptr_t slot) {
    auto* vqgeoroutereply = const_cast<VirtualQGeoRouteReply*>(dynamic_cast<const VirtualQGeoRouteReply*>(self));
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGeoRouteReply_Receivers(const QGeoRouteReply* self, const char* signal) {
    auto* vqgeoroutereply = const_cast<VirtualQGeoRouteReply*>(dynamic_cast<const VirtualQGeoRouteReply*>(self));
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        return vqgeoroutereply->receivers(signal);
    } else {
        return ((VirtualQGeoRouteReply*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QGeoRouteReply_SuperReceivers(const QGeoRouteReply* self, const char* signal) {
    auto* vqgeoroutereply = const_cast<VirtualQGeoRouteReply*>(dynamic_cast<const VirtualQGeoRouteReply*>(self));
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_Receivers_IsBase(true);
        return vqgeoroutereply->receivers(signal);
    } else {
        return ((VirtualQGeoRouteReply*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnReceivers(const QGeoRouteReply* self, intptr_t slot) {
    auto* vqgeoroutereply = const_cast<VirtualQGeoRouteReply*>(dynamic_cast<const VirtualQGeoRouteReply*>(self));
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_Receivers_Callback(reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoRouteReply_IsSignalConnected(const QGeoRouteReply* self, const QMetaMethod* signal) {
    auto* vqgeoroutereply = const_cast<VirtualQGeoRouteReply*>(dynamic_cast<const VirtualQGeoRouteReply*>(self));
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        return vqgeoroutereply->isSignalConnected(*signal);
    } else {
        return ((VirtualQGeoRouteReply*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGeoRouteReply_SuperIsSignalConnected(const QGeoRouteReply* self, const QMetaMethod* signal) {
    auto* vqgeoroutereply = const_cast<VirtualQGeoRouteReply*>(dynamic_cast<const VirtualQGeoRouteReply*>(self));
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_IsSignalConnected_IsBase(true);
        return vqgeoroutereply->isSignalConnected(*signal);
    } else {
        return ((VirtualQGeoRouteReply*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoRouteReply_OnIsSignalConnected(const QGeoRouteReply* self, intptr_t slot) {
    auto* vqgeoroutereply = const_cast<VirtualQGeoRouteReply*>(dynamic_cast<const VirtualQGeoRouteReply*>(self));
    if (vqgeoroutereply && vqgeoroutereply->isVirtualQGeoRouteReply) {
        vqgeoroutereply->setQGeoRouteReply_IsSignalConnected_Callback(reinterpret_cast<VirtualQGeoRouteReply::QGeoRouteReply_IsSignalConnected_Callback>(slot));
    }
}

void QGeoRouteReply_Delete(QGeoRouteReply* self) {
    delete self;
}
