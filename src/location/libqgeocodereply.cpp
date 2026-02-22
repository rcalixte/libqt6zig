#include <QChildEvent>
#include <QEvent>
#include <QGeoCodeReply>
#include <QGeoLocation>
#include <QGeoShape>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qgeocodereply.h>
#include "libqgeocodereply.h"
#include "libqgeocodereply.hxx"

QGeoCodeReply* QGeoCodeReply_new(int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    return new VirtualQGeoCodeReply(static_cast<QGeoCodeReply::Error>(errorVal), errorString_QString);
}

QGeoCodeReply* QGeoCodeReply_new2(int errorVal, const libqt_string errorString, QObject* parent) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    return new VirtualQGeoCodeReply(static_cast<QGeoCodeReply::Error>(errorVal), errorString_QString, parent);
}

QMetaObject* QGeoCodeReply_MetaObject(const QGeoCodeReply* self) {
    auto* vqgeocodereply = dynamic_cast<const VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQGeoCodeReply*)self)->metaObject();
    }
}

void* QGeoCodeReply_Metacast(QGeoCodeReply* self, const char* param1) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQGeoCodeReply*)self)->qt_metacast(param1);
    }
}

int QGeoCodeReply_Metacall(QGeoCodeReply* self, int param1, int param2, void** param3) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQGeoCodeReply*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

bool QGeoCodeReply_IsFinished(const QGeoCodeReply* self) {
    return self->isFinished();
}

int QGeoCodeReply_Error(const QGeoCodeReply* self) {
    return static_cast<int>(self->error());
}

libqt_string QGeoCodeReply_ErrorString(const QGeoCodeReply* self) {
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

QGeoShape* QGeoCodeReply_Viewport(const QGeoCodeReply* self) {
    return new QGeoShape(self->viewport());
}

libqt_list /* of QGeoLocation* */ QGeoCodeReply_Locations(const QGeoCodeReply* self) {
    QList<QGeoLocation> _ret = self->locations();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGeoLocation** _arr = static_cast<QGeoLocation**>(malloc(sizeof(QGeoLocation*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QGeoLocation(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

ptrdiff_t QGeoCodeReply_Limit(const QGeoCodeReply* self) {
    return static_cast<ptrdiff_t>(self->limit());
}

ptrdiff_t QGeoCodeReply_Offset(const QGeoCodeReply* self) {
    return static_cast<ptrdiff_t>(self->offset());
}

void QGeoCodeReply_Abort(QGeoCodeReply* self) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        self->abort();
    } else {
        ((VirtualQGeoCodeReply*)self)->abort();
    }
}

void QGeoCodeReply_Finished(QGeoCodeReply* self) {
    self->finished();
}

void QGeoCodeReply_Connect_Finished(QGeoCodeReply* self, intptr_t slot) {
    void (*slotFunc)(QGeoCodeReply*) = reinterpret_cast<void (*)(QGeoCodeReply*)>(slot);
    QGeoCodeReply::connect(self, &QGeoCodeReply::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGeoCodeReply_Aborted(QGeoCodeReply* self) {
    self->aborted();
}

void QGeoCodeReply_Connect_Aborted(QGeoCodeReply* self, intptr_t slot) {
    void (*slotFunc)(QGeoCodeReply*) = reinterpret_cast<void (*)(QGeoCodeReply*)>(slot);
    QGeoCodeReply::connect(self, &QGeoCodeReply::aborted, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGeoCodeReply_ErrorOccurred(QGeoCodeReply* self, int errorVal) {
    self->errorOccurred(static_cast<QGeoCodeReply::Error>(errorVal));
}

void QGeoCodeReply_Connect_ErrorOccurred(QGeoCodeReply* self, intptr_t slot) {
    void (*slotFunc)(QGeoCodeReply*, int) = reinterpret_cast<void (*)(QGeoCodeReply*, int)>(slot);
    QGeoCodeReply::connect(self, &QGeoCodeReply::errorOccurred, [self, slotFunc](QGeoCodeReply::Error errorVal) {
        int sigval1 = static_cast<int>(errorVal);
        slotFunc(self, sigval1);
    });
}

void QGeoCodeReply_ErrorOccurred2(QGeoCodeReply* self, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(static_cast<QGeoCodeReply::Error>(errorVal), errorString_QString);
}

void QGeoCodeReply_Connect_ErrorOccurred2(QGeoCodeReply* self, intptr_t slot) {
    void (*slotFunc)(QGeoCodeReply*, int, const char*) = reinterpret_cast<void (*)(QGeoCodeReply*, int, const char*)>(slot);
    QGeoCodeReply::connect(self, &QGeoCodeReply::errorOccurred, [self, slotFunc](QGeoCodeReply::Error errorVal, const QString& errorString) {
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
QMetaObject* QGeoCodeReply_QBaseMetaObject(const QGeoCodeReply* self) {
    auto* vqgeocodereply = const_cast<VirtualQGeoCodeReply*>(dynamic_cast<const VirtualQGeoCodeReply*>(self));
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_MetaObject_IsBase(true);
        return (QMetaObject*)vqgeocodereply->metaObject();
    } else {
        return (QMetaObject*)self->QGeoCodeReply::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnMetaObject(const QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = const_cast<VirtualQGeoCodeReply*>(dynamic_cast<const VirtualQGeoCodeReply*>(self));
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_MetaObject_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QGeoCodeReply_QBaseMetacast(QGeoCodeReply* self, const char* param1) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_Metacast_IsBase(true);
        return vqgeocodereply->qt_metacast(param1);
    } else {
        return self->QGeoCodeReply::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnMetacast(QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_Metacast_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QGeoCodeReply_QBaseMetacall(QGeoCodeReply* self, int param1, int param2, void** param3) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_Metacall_IsBase(true);
        return vqgeocodereply->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QGeoCodeReply::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnMetacall(QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_Metacall_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QGeoCodeReply_QBaseAbort(QGeoCodeReply* self) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_Abort_IsBase(true);
        vqgeocodereply->abort();
    } else {
        self->QGeoCodeReply::abort();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnAbort(QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_Abort_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_Abort_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoCodeReply_Event(QGeoCodeReply* self, QEvent* event) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        return vqgeocodereply->event(event);
    } else {
        return self->QGeoCodeReply::event(event);
    }
}

// Base class handler implementation
bool QGeoCodeReply_QBaseEvent(QGeoCodeReply* self, QEvent* event) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_Event_IsBase(true);
        return vqgeocodereply->event(event);
    } else {
        return self->QGeoCodeReply::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnEvent(QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_Event_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoCodeReply_EventFilter(QGeoCodeReply* self, QObject* watched, QEvent* event) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        return vqgeocodereply->eventFilter(watched, event);
    } else {
        return self->QGeoCodeReply::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGeoCodeReply_QBaseEventFilter(QGeoCodeReply* self, QObject* watched, QEvent* event) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_EventFilter_IsBase(true);
        return vqgeocodereply->eventFilter(watched, event);
    } else {
        return self->QGeoCodeReply::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnEventFilter(QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_EventFilter_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoCodeReply_TimerEvent(QGeoCodeReply* self, QTimerEvent* event) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->timerEvent(event);
    } else {
        ((VirtualQGeoCodeReply*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QGeoCodeReply_QBaseTimerEvent(QGeoCodeReply* self, QTimerEvent* event) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_TimerEvent_IsBase(true);
        vqgeocodereply->timerEvent(event);
    } else {
        ((VirtualQGeoCodeReply*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnTimerEvent(QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_TimerEvent_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoCodeReply_ChildEvent(QGeoCodeReply* self, QChildEvent* event) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->childEvent(event);
    } else {
        ((VirtualQGeoCodeReply*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QGeoCodeReply_QBaseChildEvent(QGeoCodeReply* self, QChildEvent* event) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_ChildEvent_IsBase(true);
        vqgeocodereply->childEvent(event);
    } else {
        ((VirtualQGeoCodeReply*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnChildEvent(QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_ChildEvent_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoCodeReply_CustomEvent(QGeoCodeReply* self, QEvent* event) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->customEvent(event);
    } else {
        ((VirtualQGeoCodeReply*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QGeoCodeReply_QBaseCustomEvent(QGeoCodeReply* self, QEvent* event) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_CustomEvent_IsBase(true);
        vqgeocodereply->customEvent(event);
    } else {
        ((VirtualQGeoCodeReply*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnCustomEvent(QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_CustomEvent_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoCodeReply_ConnectNotify(QGeoCodeReply* self, const QMetaMethod* signal) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->connectNotify(*signal);
    } else {
        ((VirtualQGeoCodeReply*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGeoCodeReply_QBaseConnectNotify(QGeoCodeReply* self, const QMetaMethod* signal) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_ConnectNotify_IsBase(true);
        vqgeocodereply->connectNotify(*signal);
    } else {
        ((VirtualQGeoCodeReply*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnConnectNotify(QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_ConnectNotify_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoCodeReply_DisconnectNotify(QGeoCodeReply* self, const QMetaMethod* signal) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->disconnectNotify(*signal);
    } else {
        ((VirtualQGeoCodeReply*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGeoCodeReply_QBaseDisconnectNotify(QGeoCodeReply* self, const QMetaMethod* signal) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_DisconnectNotify_IsBase(true);
        vqgeocodereply->disconnectNotify(*signal);
    } else {
        ((VirtualQGeoCodeReply*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnDisconnectNotify(QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_DisconnectNotify_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoCodeReply_SetError(QGeoCodeReply* self, int errorVal, const libqt_string errorString) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setError(static_cast<QGeoCodeReply::Error>(errorVal), errorString_QString);
    } else {
        ((VirtualQGeoCodeReply*)self)->setError(static_cast<QGeoCodeReply::Error>(errorVal), errorString_QString);
    }
}

// Base class handler implementation
void QGeoCodeReply_QBaseSetError(QGeoCodeReply* self, int errorVal, const libqt_string errorString) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_SetError_IsBase(true);
        vqgeocodereply->setError(static_cast<QGeoCodeReply::Error>(errorVal), errorString_QString);
    } else {
        ((VirtualQGeoCodeReply*)self)->setError(static_cast<QGeoCodeReply::Error>(errorVal), errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnSetError(QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_SetError_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoCodeReply_SetFinished(QGeoCodeReply* self, bool finished) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setFinished(finished);
    } else {
        ((VirtualQGeoCodeReply*)self)->setFinished(finished);
    }
}

// Base class handler implementation
void QGeoCodeReply_QBaseSetFinished(QGeoCodeReply* self, bool finished) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_SetFinished_IsBase(true);
        vqgeocodereply->setFinished(finished);
    } else {
        ((VirtualQGeoCodeReply*)self)->setFinished(finished);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnSetFinished(QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_SetFinished_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_SetFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoCodeReply_SetViewport(QGeoCodeReply* self, const QGeoShape* viewport) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setViewport(*viewport);
    } else {
        ((VirtualQGeoCodeReply*)self)->setViewport(*viewport);
    }
}

// Base class handler implementation
void QGeoCodeReply_QBaseSetViewport(QGeoCodeReply* self, const QGeoShape* viewport) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_SetViewport_IsBase(true);
        vqgeocodereply->setViewport(*viewport);
    } else {
        ((VirtualQGeoCodeReply*)self)->setViewport(*viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnSetViewport(QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_SetViewport_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_SetViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoCodeReply_AddLocation(QGeoCodeReply* self, const QGeoLocation* location) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->addLocation(*location);
    } else {
        ((VirtualQGeoCodeReply*)self)->addLocation(*location);
    }
}

// Base class handler implementation
void QGeoCodeReply_QBaseAddLocation(QGeoCodeReply* self, const QGeoLocation* location) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_AddLocation_IsBase(true);
        vqgeocodereply->addLocation(*location);
    } else {
        ((VirtualQGeoCodeReply*)self)->addLocation(*location);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnAddLocation(QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_AddLocation_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_AddLocation_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoCodeReply_SetLocations(QGeoCodeReply* self, const libqt_list /* of QGeoLocation* */ locations) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    QList<QGeoLocation> locations_QList;
    locations_QList.reserve(locations.len);
    QGeoLocation** locations_arr = static_cast<QGeoLocation**>(locations.data);
    for (size_t i = 0; i < locations.len; ++i) {
        locations_QList.push_back(*(locations_arr[i]));
    }
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setLocations(locations_QList);
    } else {
        ((VirtualQGeoCodeReply*)self)->setLocations(locations_QList);
    }
}

// Base class handler implementation
void QGeoCodeReply_QBaseSetLocations(QGeoCodeReply* self, const libqt_list /* of QGeoLocation* */ locations) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    QList<QGeoLocation> locations_QList;
    locations_QList.reserve(locations.len);
    QGeoLocation** locations_arr = static_cast<QGeoLocation**>(locations.data);
    for (size_t i = 0; i < locations.len; ++i) {
        locations_QList.push_back(*(locations_arr[i]));
    }
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_SetLocations_IsBase(true);
        vqgeocodereply->setLocations(locations_QList);
    } else {
        ((VirtualQGeoCodeReply*)self)->setLocations(locations_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnSetLocations(QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_SetLocations_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_SetLocations_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoCodeReply_SetLimit(QGeoCodeReply* self, ptrdiff_t limit) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setLimit((qsizetype)(limit));
    } else {
        ((VirtualQGeoCodeReply*)self)->setLimit((qsizetype)(limit));
    }
}

// Base class handler implementation
void QGeoCodeReply_QBaseSetLimit(QGeoCodeReply* self, ptrdiff_t limit) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_SetLimit_IsBase(true);
        vqgeocodereply->setLimit((qsizetype)(limit));
    } else {
        ((VirtualQGeoCodeReply*)self)->setLimit((qsizetype)(limit));
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnSetLimit(QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_SetLimit_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_SetLimit_Callback>(slot));
    }
}

// Derived class handler implementation
void QGeoCodeReply_SetOffset(QGeoCodeReply* self, ptrdiff_t offset) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setOffset((qsizetype)(offset));
    } else {
        ((VirtualQGeoCodeReply*)self)->setOffset((qsizetype)(offset));
    }
}

// Base class handler implementation
void QGeoCodeReply_QBaseSetOffset(QGeoCodeReply* self, ptrdiff_t offset) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_SetOffset_IsBase(true);
        vqgeocodereply->setOffset((qsizetype)(offset));
    } else {
        ((VirtualQGeoCodeReply*)self)->setOffset((qsizetype)(offset));
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnSetOffset(QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = dynamic_cast<VirtualQGeoCodeReply*>(self);
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_SetOffset_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_SetOffset_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGeoCodeReply_Sender(const QGeoCodeReply* self) {
    auto* vqgeocodereply = const_cast<VirtualQGeoCodeReply*>(dynamic_cast<const VirtualQGeoCodeReply*>(self));
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        return vqgeocodereply->sender();
    } else {
        return ((VirtualQGeoCodeReply*)self)->sender();
    }
}

// Base class handler implementation
QObject* QGeoCodeReply_QBaseSender(const QGeoCodeReply* self) {
    auto* vqgeocodereply = const_cast<VirtualQGeoCodeReply*>(dynamic_cast<const VirtualQGeoCodeReply*>(self));
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_Sender_IsBase(true);
        return vqgeocodereply->sender();
    } else {
        return ((VirtualQGeoCodeReply*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnSender(const QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = const_cast<VirtualQGeoCodeReply*>(dynamic_cast<const VirtualQGeoCodeReply*>(self));
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_Sender_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGeoCodeReply_SenderSignalIndex(const QGeoCodeReply* self) {
    auto* vqgeocodereply = const_cast<VirtualQGeoCodeReply*>(dynamic_cast<const VirtualQGeoCodeReply*>(self));
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        return vqgeocodereply->senderSignalIndex();
    } else {
        return ((VirtualQGeoCodeReply*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QGeoCodeReply_QBaseSenderSignalIndex(const QGeoCodeReply* self) {
    auto* vqgeocodereply = const_cast<VirtualQGeoCodeReply*>(dynamic_cast<const VirtualQGeoCodeReply*>(self));
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_SenderSignalIndex_IsBase(true);
        return vqgeocodereply->senderSignalIndex();
    } else {
        return ((VirtualQGeoCodeReply*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnSenderSignalIndex(const QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = const_cast<VirtualQGeoCodeReply*>(dynamic_cast<const VirtualQGeoCodeReply*>(self));
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGeoCodeReply_Receivers(const QGeoCodeReply* self, const char* signal) {
    auto* vqgeocodereply = const_cast<VirtualQGeoCodeReply*>(dynamic_cast<const VirtualQGeoCodeReply*>(self));
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        return vqgeocodereply->receivers(signal);
    } else {
        return ((VirtualQGeoCodeReply*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QGeoCodeReply_QBaseReceivers(const QGeoCodeReply* self, const char* signal) {
    auto* vqgeocodereply = const_cast<VirtualQGeoCodeReply*>(dynamic_cast<const VirtualQGeoCodeReply*>(self));
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_Receivers_IsBase(true);
        return vqgeocodereply->receivers(signal);
    } else {
        return ((VirtualQGeoCodeReply*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnReceivers(const QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = const_cast<VirtualQGeoCodeReply*>(dynamic_cast<const VirtualQGeoCodeReply*>(self));
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_Receivers_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGeoCodeReply_IsSignalConnected(const QGeoCodeReply* self, const QMetaMethod* signal) {
    auto* vqgeocodereply = const_cast<VirtualQGeoCodeReply*>(dynamic_cast<const VirtualQGeoCodeReply*>(self));
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        return vqgeocodereply->isSignalConnected(*signal);
    } else {
        return ((VirtualQGeoCodeReply*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGeoCodeReply_QBaseIsSignalConnected(const QGeoCodeReply* self, const QMetaMethod* signal) {
    auto* vqgeocodereply = const_cast<VirtualQGeoCodeReply*>(dynamic_cast<const VirtualQGeoCodeReply*>(self));
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_IsSignalConnected_IsBase(true);
        return vqgeocodereply->isSignalConnected(*signal);
    } else {
        return ((VirtualQGeoCodeReply*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGeoCodeReply_OnIsSignalConnected(const QGeoCodeReply* self, intptr_t slot) {
    auto* vqgeocodereply = const_cast<VirtualQGeoCodeReply*>(dynamic_cast<const VirtualQGeoCodeReply*>(self));
    if (vqgeocodereply && vqgeocodereply->isVirtualQGeoCodeReply) {
        vqgeocodereply->setQGeoCodeReply_IsSignalConnected_Callback(reinterpret_cast<VirtualQGeoCodeReply::QGeoCodeReply_IsSignalConnected_Callback>(slot));
    }
}

void QGeoCodeReply_Delete(QGeoCodeReply* self) {
    delete self;
}
