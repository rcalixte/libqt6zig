#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlaceIdReply>
#include <QPlaceReply>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qplaceidreply.h>
#include "libqplaceidreply.h"
#include "libqplaceidreply.hxx"

QPlaceIdReply* QPlaceIdReply_new(int operationType) {
    return new VirtualQPlaceIdReply(static_cast<QPlaceIdReply::OperationType>(operationType));
}

QPlaceIdReply* QPlaceIdReply_new2(int operationType, QObject* parent) {
    return new VirtualQPlaceIdReply(static_cast<QPlaceIdReply::OperationType>(operationType), parent);
}

QMetaObject* QPlaceIdReply_MetaObject(const QPlaceIdReply* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPlaceIdReply_Metacast(QPlaceIdReply* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPlaceIdReply_Metacall(QPlaceIdReply* self, int param1, int param2, void** param3) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPlaceIdReply*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int QPlaceIdReply_Type(const QPlaceIdReply* self) {
    auto* vqplaceidreply = dynamic_cast<const VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        return static_cast<int>(self->type());
    } else {
        return static_cast<int>(((VirtualQPlaceIdReply*)self)->type());
    }
}

int QPlaceIdReply_OperationType(const QPlaceIdReply* self) {
    return static_cast<int>(self->operationType());
}

libqt_string QPlaceIdReply_Id(const QPlaceIdReply* self) {
    QString _ret = self->id();
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
int QPlaceIdReply_QBaseMetacall(QPlaceIdReply* self, int param1, int param2, void** param3) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_Metacall_IsBase(true);
        return vqplaceidreply->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QPlaceIdReply::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnMetacall(QPlaceIdReply* self, intptr_t slot) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_Metacall_Callback(reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QPlaceIdReply_QBaseType(const QPlaceIdReply* self) {
    auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self));
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_Type_IsBase(true);
        return static_cast<int>(vqplaceidreply->type());
    } else {
        return static_cast<int>(self->QPlaceIdReply::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnType(const QPlaceIdReply* self, intptr_t slot) {
    auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self));
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_Type_Callback(reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceIdReply_Abort(QPlaceIdReply* self) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->abort();
    } else {
        self->QPlaceIdReply::abort();
    }
}

// Base class handler implementation
void QPlaceIdReply_QBaseAbort(QPlaceIdReply* self) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_Abort_IsBase(true);
        vqplaceidreply->abort();
    } else {
        self->QPlaceIdReply::abort();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnAbort(QPlaceIdReply* self, intptr_t slot) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_Abort_Callback(reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_Abort_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceIdReply_Event(QPlaceIdReply* self, QEvent* event) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        return vqplaceidreply->event(event);
    } else {
        return self->QPlaceIdReply::event(event);
    }
}

// Base class handler implementation
bool QPlaceIdReply_QBaseEvent(QPlaceIdReply* self, QEvent* event) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_Event_IsBase(true);
        return vqplaceidreply->event(event);
    } else {
        return self->QPlaceIdReply::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnEvent(QPlaceIdReply* self, intptr_t slot) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_Event_Callback(reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceIdReply_EventFilter(QPlaceIdReply* self, QObject* watched, QEvent* event) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        return vqplaceidreply->eventFilter(watched, event);
    } else {
        return self->QPlaceIdReply::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPlaceIdReply_QBaseEventFilter(QPlaceIdReply* self, QObject* watched, QEvent* event) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_EventFilter_IsBase(true);
        return vqplaceidreply->eventFilter(watched, event);
    } else {
        return self->QPlaceIdReply::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnEventFilter(QPlaceIdReply* self, intptr_t slot) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_EventFilter_Callback(reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceIdReply_TimerEvent(QPlaceIdReply* self, QTimerEvent* event) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->timerEvent(event);
    } else {
        ((VirtualQPlaceIdReply*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPlaceIdReply_QBaseTimerEvent(QPlaceIdReply* self, QTimerEvent* event) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_TimerEvent_IsBase(true);
        vqplaceidreply->timerEvent(event);
    } else {
        ((VirtualQPlaceIdReply*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnTimerEvent(QPlaceIdReply* self, intptr_t slot) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_TimerEvent_Callback(reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceIdReply_ChildEvent(QPlaceIdReply* self, QChildEvent* event) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->childEvent(event);
    } else {
        ((VirtualQPlaceIdReply*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPlaceIdReply_QBaseChildEvent(QPlaceIdReply* self, QChildEvent* event) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_ChildEvent_IsBase(true);
        vqplaceidreply->childEvent(event);
    } else {
        ((VirtualQPlaceIdReply*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnChildEvent(QPlaceIdReply* self, intptr_t slot) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_ChildEvent_Callback(reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceIdReply_CustomEvent(QPlaceIdReply* self, QEvent* event) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->customEvent(event);
    } else {
        ((VirtualQPlaceIdReply*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPlaceIdReply_QBaseCustomEvent(QPlaceIdReply* self, QEvent* event) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_CustomEvent_IsBase(true);
        vqplaceidreply->customEvent(event);
    } else {
        ((VirtualQPlaceIdReply*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnCustomEvent(QPlaceIdReply* self, intptr_t slot) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_CustomEvent_Callback(reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceIdReply_ConnectNotify(QPlaceIdReply* self, const QMetaMethod* signal) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->connectNotify(*signal);
    } else {
        ((VirtualQPlaceIdReply*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPlaceIdReply_QBaseConnectNotify(QPlaceIdReply* self, const QMetaMethod* signal) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_ConnectNotify_IsBase(true);
        vqplaceidreply->connectNotify(*signal);
    } else {
        ((VirtualQPlaceIdReply*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnConnectNotify(QPlaceIdReply* self, intptr_t slot) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_ConnectNotify_Callback(reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceIdReply_DisconnectNotify(QPlaceIdReply* self, const QMetaMethod* signal) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->disconnectNotify(*signal);
    } else {
        ((VirtualQPlaceIdReply*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPlaceIdReply_QBaseDisconnectNotify(QPlaceIdReply* self, const QMetaMethod* signal) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_DisconnectNotify_IsBase(true);
        vqplaceidreply->disconnectNotify(*signal);
    } else {
        ((VirtualQPlaceIdReply*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnDisconnectNotify(QPlaceIdReply* self, intptr_t slot) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_DisconnectNotify_Callback(reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceIdReply_SetId(QPlaceIdReply* self, const libqt_string identifier) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setId(identifier_QString);
    } else {
        ((VirtualQPlaceIdReply*)self)->setId(identifier_QString);
    }
}

// Base class handler implementation
void QPlaceIdReply_QBaseSetId(QPlaceIdReply* self, const libqt_string identifier) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_SetId_IsBase(true);
        vqplaceidreply->setId(identifier_QString);
    } else {
        ((VirtualQPlaceIdReply*)self)->setId(identifier_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnSetId(QPlaceIdReply* self, intptr_t slot) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_SetId_Callback(reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_SetId_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceIdReply_SetFinished(QPlaceIdReply* self, bool finished) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setFinished(finished);
    } else {
        ((VirtualQPlaceIdReply*)self)->setFinished(finished);
    }
}

// Base class handler implementation
void QPlaceIdReply_QBaseSetFinished(QPlaceIdReply* self, bool finished) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_SetFinished_IsBase(true);
        vqplaceidreply->setFinished(finished);
    } else {
        ((VirtualQPlaceIdReply*)self)->setFinished(finished);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnSetFinished(QPlaceIdReply* self, intptr_t slot) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_SetFinished_Callback(reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_SetFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceIdReply_SetError(QPlaceIdReply* self, int errorVal, const libqt_string errorString) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else {
        ((VirtualQPlaceIdReply*)self)->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    }
}

// Base class handler implementation
void QPlaceIdReply_QBaseSetError(QPlaceIdReply* self, int errorVal, const libqt_string errorString) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_SetError_IsBase(true);
        vqplaceidreply->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else {
        ((VirtualQPlaceIdReply*)self)->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnSetError(QPlaceIdReply* self, intptr_t slot) {
    auto* vqplaceidreply = dynamic_cast<VirtualQPlaceIdReply*>(self);
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_SetError_Callback(reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPlaceIdReply_Sender(const QPlaceIdReply* self) {
    auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self));
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        return vqplaceidreply->sender();
    } else {
        return ((VirtualQPlaceIdReply*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPlaceIdReply_QBaseSender(const QPlaceIdReply* self) {
    auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self));
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_Sender_IsBase(true);
        return vqplaceidreply->sender();
    } else {
        return ((VirtualQPlaceIdReply*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnSender(const QPlaceIdReply* self, intptr_t slot) {
    auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self));
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_Sender_Callback(reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlaceIdReply_SenderSignalIndex(const QPlaceIdReply* self) {
    auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self));
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        return vqplaceidreply->senderSignalIndex();
    } else {
        return ((VirtualQPlaceIdReply*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPlaceIdReply_QBaseSenderSignalIndex(const QPlaceIdReply* self) {
    auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self));
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_SenderSignalIndex_IsBase(true);
        return vqplaceidreply->senderSignalIndex();
    } else {
        return ((VirtualQPlaceIdReply*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnSenderSignalIndex(const QPlaceIdReply* self, intptr_t slot) {
    auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self));
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlaceIdReply_Receivers(const QPlaceIdReply* self, const char* signal) {
    auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self));
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        return vqplaceidreply->receivers(signal);
    } else {
        return ((VirtualQPlaceIdReply*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPlaceIdReply_QBaseReceivers(const QPlaceIdReply* self, const char* signal) {
    auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self));
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_Receivers_IsBase(true);
        return vqplaceidreply->receivers(signal);
    } else {
        return ((VirtualQPlaceIdReply*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnReceivers(const QPlaceIdReply* self, intptr_t slot) {
    auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self));
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_Receivers_Callback(reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceIdReply_IsSignalConnected(const QPlaceIdReply* self, const QMetaMethod* signal) {
    auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self));
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        return vqplaceidreply->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlaceIdReply*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPlaceIdReply_QBaseIsSignalConnected(const QPlaceIdReply* self, const QMetaMethod* signal) {
    auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self));
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_IsSignalConnected_IsBase(true);
        return vqplaceidreply->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlaceIdReply*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceIdReply_OnIsSignalConnected(const QPlaceIdReply* self, intptr_t slot) {
    auto* vqplaceidreply = const_cast<VirtualQPlaceIdReply*>(dynamic_cast<const VirtualQPlaceIdReply*>(self));
    if (vqplaceidreply && vqplaceidreply->isVirtualQPlaceIdReply) {
        vqplaceidreply->setQPlaceIdReply_IsSignalConnected_Callback(reinterpret_cast<VirtualQPlaceIdReply::QPlaceIdReply_IsSignalConnected_Callback>(slot));
    }
}

void QPlaceIdReply_Delete(QPlaceIdReply* self) {
    delete self;
}
