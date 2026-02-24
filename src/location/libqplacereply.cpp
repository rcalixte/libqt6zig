#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlaceReply>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vqplacereply = dynamic_cast<const VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQPlaceReply*)self)->metaObject();
    }
}

void* QPlaceReply_Metacast(QPlaceReply* self, const char* param1) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQPlaceReply*)self)->qt_metacast(param1);
    }
}

int QPlaceReply_Metacall(QPlaceReply* self, int param1, int param2, void** param3) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPlaceReply*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

bool QPlaceReply_IsFinished(const QPlaceReply* self) {
    return self->isFinished();
}

int QPlaceReply_Type(const QPlaceReply* self) {
    auto* vqplacereply = dynamic_cast<const VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        return static_cast<int>(self->type());
    } else {
        return static_cast<int>(((VirtualQPlaceReply*)self)->type());
    }
}

libqt_string QPlaceReply_ErrorString(const QPlaceReply* self) {
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

int QPlaceReply_Error(const QPlaceReply* self) {
    return static_cast<int>(self->error());
}

void QPlaceReply_Abort(QPlaceReply* self) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        self->abort();
    } else {
        ((VirtualQPlaceReply*)self)->abort();
    }
}

void QPlaceReply_Finished(QPlaceReply* self) {
    self->finished();
}

void QPlaceReply_Connect_Finished(QPlaceReply* self, intptr_t slot) {
    void (*slotFunc)(QPlaceReply*) = reinterpret_cast<void (*)(QPlaceReply*)>(slot);
    QPlaceReply::connect(self, &QPlaceReply::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPlaceReply_ContentUpdated(QPlaceReply* self) {
    self->contentUpdated();
}

void QPlaceReply_Connect_ContentUpdated(QPlaceReply* self, intptr_t slot) {
    void (*slotFunc)(QPlaceReply*) = reinterpret_cast<void (*)(QPlaceReply*)>(slot);
    QPlaceReply::connect(self, &QPlaceReply::contentUpdated, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPlaceReply_Aborted(QPlaceReply* self) {
    self->aborted();
}

void QPlaceReply_Connect_Aborted(QPlaceReply* self, intptr_t slot) {
    void (*slotFunc)(QPlaceReply*) = reinterpret_cast<void (*)(QPlaceReply*)>(slot);
    QPlaceReply::connect(self, &QPlaceReply::aborted, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPlaceReply_ErrorOccurred(QPlaceReply* self, int errorVal) {
    self->errorOccurred(static_cast<QPlaceReply::Error>(errorVal));
}

void QPlaceReply_Connect_ErrorOccurred(QPlaceReply* self, intptr_t slot) {
    void (*slotFunc)(QPlaceReply*, int) = reinterpret_cast<void (*)(QPlaceReply*, int)>(slot);
    QPlaceReply::connect(self, &QPlaceReply::errorOccurred, [self, slotFunc](QPlaceReply::Error errorVal) {
        int sigval1 = static_cast<int>(errorVal);
        slotFunc(self, sigval1);
    });
}

void QPlaceReply_ErrorOccurred2(QPlaceReply* self, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
}

void QPlaceReply_Connect_ErrorOccurred2(QPlaceReply* self, intptr_t slot) {
    void (*slotFunc)(QPlaceReply*, int, const char*) = reinterpret_cast<void (*)(QPlaceReply*, int, const char*)>(slot);
    QPlaceReply::connect(self, &QPlaceReply::errorOccurred, [self, slotFunc](QPlaceReply::Error errorVal, const QString& errorString) {
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
QMetaObject* QPlaceReply_SuperMetaObject(const QPlaceReply* self) {
    auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self));
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_MetaObject_IsBase(true);
        return (QMetaObject*)vqplacereply->metaObject();
    } else {
        return (QMetaObject*)self->QPlaceReply::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnMetaObject(const QPlaceReply* self, intptr_t slot) {
    auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self));
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_MetaObject_Callback(reinterpret_cast<VirtualQPlaceReply::QPlaceReply_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QPlaceReply_SuperMetacast(QPlaceReply* self, const char* param1) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_Metacast_IsBase(true);
        return vqplacereply->qt_metacast(param1);
    } else {
        return self->QPlaceReply::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnMetacast(QPlaceReply* self, intptr_t slot) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_Metacast_Callback(reinterpret_cast<VirtualQPlaceReply::QPlaceReply_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QPlaceReply_SuperMetacall(QPlaceReply* self, int param1, int param2, void** param3) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_Metacall_IsBase(true);
        return vqplacereply->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QPlaceReply::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnMetacall(QPlaceReply* self, intptr_t slot) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_Metacall_Callback(reinterpret_cast<VirtualQPlaceReply::QPlaceReply_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QPlaceReply_SuperType(const QPlaceReply* self) {
    auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self));
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_Type_IsBase(true);
        return static_cast<int>(vqplacereply->type());
    } else {
        return static_cast<int>(self->QPlaceReply::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnType(const QPlaceReply* self, intptr_t slot) {
    auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self));
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_Type_Callback(reinterpret_cast<VirtualQPlaceReply::QPlaceReply_Type_Callback>(slot));
    }
}

// Base class handler implementation
void QPlaceReply_SuperAbort(QPlaceReply* self) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_Abort_IsBase(true);
        vqplacereply->abort();
    } else {
        self->QPlaceReply::abort();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnAbort(QPlaceReply* self, intptr_t slot) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_Abort_Callback(reinterpret_cast<VirtualQPlaceReply::QPlaceReply_Abort_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceReply_Event(QPlaceReply* self, QEvent* event) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        return vqplacereply->event(event);
    } else {
        return self->QPlaceReply::event(event);
    }
}

// Base class handler implementation
bool QPlaceReply_SuperEvent(QPlaceReply* self, QEvent* event) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_Event_IsBase(true);
        return vqplacereply->event(event);
    } else {
        return self->QPlaceReply::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnEvent(QPlaceReply* self, intptr_t slot) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_Event_Callback(reinterpret_cast<VirtualQPlaceReply::QPlaceReply_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceReply_EventFilter(QPlaceReply* self, QObject* watched, QEvent* event) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        return vqplacereply->eventFilter(watched, event);
    } else {
        return self->QPlaceReply::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPlaceReply_SuperEventFilter(QPlaceReply* self, QObject* watched, QEvent* event) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_EventFilter_IsBase(true);
        return vqplacereply->eventFilter(watched, event);
    } else {
        return self->QPlaceReply::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnEventFilter(QPlaceReply* self, intptr_t slot) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_EventFilter_Callback(reinterpret_cast<VirtualQPlaceReply::QPlaceReply_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceReply_TimerEvent(QPlaceReply* self, QTimerEvent* event) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->timerEvent(event);
    } else {
        ((VirtualQPlaceReply*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPlaceReply_SuperTimerEvent(QPlaceReply* self, QTimerEvent* event) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_TimerEvent_IsBase(true);
        vqplacereply->timerEvent(event);
    } else {
        ((VirtualQPlaceReply*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnTimerEvent(QPlaceReply* self, intptr_t slot) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_TimerEvent_Callback(reinterpret_cast<VirtualQPlaceReply::QPlaceReply_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceReply_ChildEvent(QPlaceReply* self, QChildEvent* event) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->childEvent(event);
    } else {
        ((VirtualQPlaceReply*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPlaceReply_SuperChildEvent(QPlaceReply* self, QChildEvent* event) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_ChildEvent_IsBase(true);
        vqplacereply->childEvent(event);
    } else {
        ((VirtualQPlaceReply*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnChildEvent(QPlaceReply* self, intptr_t slot) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_ChildEvent_Callback(reinterpret_cast<VirtualQPlaceReply::QPlaceReply_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceReply_CustomEvent(QPlaceReply* self, QEvent* event) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->customEvent(event);
    } else {
        ((VirtualQPlaceReply*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPlaceReply_SuperCustomEvent(QPlaceReply* self, QEvent* event) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_CustomEvent_IsBase(true);
        vqplacereply->customEvent(event);
    } else {
        ((VirtualQPlaceReply*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnCustomEvent(QPlaceReply* self, intptr_t slot) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_CustomEvent_Callback(reinterpret_cast<VirtualQPlaceReply::QPlaceReply_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceReply_ConnectNotify(QPlaceReply* self, const QMetaMethod* signal) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->connectNotify(*signal);
    } else {
        ((VirtualQPlaceReply*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPlaceReply_SuperConnectNotify(QPlaceReply* self, const QMetaMethod* signal) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_ConnectNotify_IsBase(true);
        vqplacereply->connectNotify(*signal);
    } else {
        ((VirtualQPlaceReply*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnConnectNotify(QPlaceReply* self, intptr_t slot) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_ConnectNotify_Callback(reinterpret_cast<VirtualQPlaceReply::QPlaceReply_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceReply_DisconnectNotify(QPlaceReply* self, const QMetaMethod* signal) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->disconnectNotify(*signal);
    } else {
        ((VirtualQPlaceReply*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPlaceReply_SuperDisconnectNotify(QPlaceReply* self, const QMetaMethod* signal) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_DisconnectNotify_IsBase(true);
        vqplacereply->disconnectNotify(*signal);
    } else {
        ((VirtualQPlaceReply*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnDisconnectNotify(QPlaceReply* self, intptr_t slot) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_DisconnectNotify_Callback(reinterpret_cast<VirtualQPlaceReply::QPlaceReply_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceReply_SetFinished(QPlaceReply* self, bool finished) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setFinished(finished);
    } else {
        ((VirtualQPlaceReply*)self)->setFinished(finished);
    }
}

// Base class handler implementation
void QPlaceReply_SuperSetFinished(QPlaceReply* self, bool finished) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_SetFinished_IsBase(true);
        vqplacereply->setFinished(finished);
    } else {
        ((VirtualQPlaceReply*)self)->setFinished(finished);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnSetFinished(QPlaceReply* self, intptr_t slot) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_SetFinished_Callback(reinterpret_cast<VirtualQPlaceReply::QPlaceReply_SetFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceReply_SetError(QPlaceReply* self, int errorVal, const libqt_string errorString) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else {
        ((VirtualQPlaceReply*)self)->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    }
}

// Base class handler implementation
void QPlaceReply_SuperSetError(QPlaceReply* self, int errorVal, const libqt_string errorString) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_SetError_IsBase(true);
        vqplacereply->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else {
        ((VirtualQPlaceReply*)self)->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnSetError(QPlaceReply* self, intptr_t slot) {
    auto* vqplacereply = dynamic_cast<VirtualQPlaceReply*>(self);
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_SetError_Callback(reinterpret_cast<VirtualQPlaceReply::QPlaceReply_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPlaceReply_Sender(const QPlaceReply* self) {
    auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self));
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        return vqplacereply->sender();
    } else {
        return ((VirtualQPlaceReply*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPlaceReply_SuperSender(const QPlaceReply* self) {
    auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self));
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_Sender_IsBase(true);
        return vqplacereply->sender();
    } else {
        return ((VirtualQPlaceReply*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnSender(const QPlaceReply* self, intptr_t slot) {
    auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self));
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_Sender_Callback(reinterpret_cast<VirtualQPlaceReply::QPlaceReply_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlaceReply_SenderSignalIndex(const QPlaceReply* self) {
    auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self));
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        return vqplacereply->senderSignalIndex();
    } else {
        return ((VirtualQPlaceReply*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPlaceReply_SuperSenderSignalIndex(const QPlaceReply* self) {
    auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self));
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_SenderSignalIndex_IsBase(true);
        return vqplacereply->senderSignalIndex();
    } else {
        return ((VirtualQPlaceReply*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnSenderSignalIndex(const QPlaceReply* self, intptr_t slot) {
    auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self));
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPlaceReply::QPlaceReply_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlaceReply_Receivers(const QPlaceReply* self, const char* signal) {
    auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self));
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        return vqplacereply->receivers(signal);
    } else {
        return ((VirtualQPlaceReply*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPlaceReply_SuperReceivers(const QPlaceReply* self, const char* signal) {
    auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self));
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_Receivers_IsBase(true);
        return vqplacereply->receivers(signal);
    } else {
        return ((VirtualQPlaceReply*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnReceivers(const QPlaceReply* self, intptr_t slot) {
    auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self));
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_Receivers_Callback(reinterpret_cast<VirtualQPlaceReply::QPlaceReply_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceReply_IsSignalConnected(const QPlaceReply* self, const QMetaMethod* signal) {
    auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self));
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        return vqplacereply->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlaceReply*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPlaceReply_SuperIsSignalConnected(const QPlaceReply* self, const QMetaMethod* signal) {
    auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self));
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_IsSignalConnected_IsBase(true);
        return vqplacereply->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlaceReply*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceReply_OnIsSignalConnected(const QPlaceReply* self, intptr_t slot) {
    auto* vqplacereply = const_cast<VirtualQPlaceReply*>(dynamic_cast<const VirtualQPlaceReply*>(self));
    if (vqplacereply && vqplacereply->isVirtualQPlaceReply) {
        vqplacereply->setQPlaceReply_IsSignalConnected_Callback(reinterpret_cast<VirtualQPlaceReply::QPlaceReply_IsSignalConnected_Callback>(slot));
    }
}

void QPlaceReply_Delete(QPlaceReply* self) {
    delete self;
}
