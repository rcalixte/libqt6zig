#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWebEngineUrlRequestInfo>
#include <QWebEngineUrlRequestInterceptor>
#include <qwebengineurlrequestinterceptor.h>
#include "libqwebengineurlrequestinterceptor.h"
#include "libqwebengineurlrequestinterceptor.hxx"

QWebEngineUrlRequestInterceptor* QWebEngineUrlRequestInterceptor_new() {
    return new VirtualQWebEngineUrlRequestInterceptor();
}

QWebEngineUrlRequestInterceptor* QWebEngineUrlRequestInterceptor_new2(QObject* p) {
    return new VirtualQWebEngineUrlRequestInterceptor(p);
}

QMetaObject* QWebEngineUrlRequestInterceptor_MetaObject(const QWebEngineUrlRequestInterceptor* self) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQWebEngineUrlRequestInterceptor*)self)->metaObject();
    }
}

void* QWebEngineUrlRequestInterceptor_Metacast(QWebEngineUrlRequestInterceptor* self, const char* param1) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQWebEngineUrlRequestInterceptor*)self)->qt_metacast(param1);
    }
}

int QWebEngineUrlRequestInterceptor_Metacall(QWebEngineUrlRequestInterceptor* self, int param1, int param2, void** param3) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWebEngineUrlRequestInterceptor*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void QWebEngineUrlRequestInterceptor_InterceptRequest(QWebEngineUrlRequestInterceptor* self, QWebEngineUrlRequestInfo* info) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->interceptRequest(*info);
    } else {
        ((VirtualQWebEngineUrlRequestInterceptor*)self)->interceptRequest(*info);
    }
}

// Base class handler implementation
QMetaObject* QWebEngineUrlRequestInterceptor_SuperMetaObject(const QWebEngineUrlRequestInterceptor* self) {
    auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self));
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_MetaObject_IsBase(true);
        return (QMetaObject*)vqwebengineurlrequestinterceptor->metaObject();
    } else {
        return (QMetaObject*)self->QWebEngineUrlRequestInterceptor::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnMetaObject(const QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self));
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_MetaObject_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QWebEngineUrlRequestInterceptor_SuperMetacast(QWebEngineUrlRequestInterceptor* self, const char* param1) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_Metacast_IsBase(true);
        return vqwebengineurlrequestinterceptor->qt_metacast(param1);
    } else {
        return self->QWebEngineUrlRequestInterceptor::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnMetacast(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_Metacast_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QWebEngineUrlRequestInterceptor_SuperMetacall(QWebEngineUrlRequestInterceptor* self, int param1, int param2, void** param3) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_Metacall_IsBase(true);
        return vqwebengineurlrequestinterceptor->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QWebEngineUrlRequestInterceptor::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnMetacall(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_Metacall_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QWebEngineUrlRequestInterceptor_SuperInterceptRequest(QWebEngineUrlRequestInterceptor* self, QWebEngineUrlRequestInfo* info) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_InterceptRequest_IsBase(true);
        vqwebengineurlrequestinterceptor->interceptRequest(*info);
    } else {
        ((VirtualQWebEngineUrlRequestInterceptor*)self)->interceptRequest(*info);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnInterceptRequest(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_InterceptRequest_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_InterceptRequest_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEngineUrlRequestInterceptor_Event(QWebEngineUrlRequestInterceptor* self, QEvent* event) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        return vqwebengineurlrequestinterceptor->event(event);
    } else {
        return self->QWebEngineUrlRequestInterceptor::event(event);
    }
}

// Base class handler implementation
bool QWebEngineUrlRequestInterceptor_SuperEvent(QWebEngineUrlRequestInterceptor* self, QEvent* event) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_Event_IsBase(true);
        return vqwebengineurlrequestinterceptor->event(event);
    } else {
        return self->QWebEngineUrlRequestInterceptor::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnEvent(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_Event_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEngineUrlRequestInterceptor_EventFilter(QWebEngineUrlRequestInterceptor* self, QObject* watched, QEvent* event) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        return vqwebengineurlrequestinterceptor->eventFilter(watched, event);
    } else {
        return self->QWebEngineUrlRequestInterceptor::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QWebEngineUrlRequestInterceptor_SuperEventFilter(QWebEngineUrlRequestInterceptor* self, QObject* watched, QEvent* event) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_EventFilter_IsBase(true);
        return vqwebengineurlrequestinterceptor->eventFilter(watched, event);
    } else {
        return self->QWebEngineUrlRequestInterceptor::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnEventFilter(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_EventFilter_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineUrlRequestInterceptor_TimerEvent(QWebEngineUrlRequestInterceptor* self, QTimerEvent* event) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->timerEvent(event);
    } else {
        ((VirtualQWebEngineUrlRequestInterceptor*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QWebEngineUrlRequestInterceptor_SuperTimerEvent(QWebEngineUrlRequestInterceptor* self, QTimerEvent* event) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_TimerEvent_IsBase(true);
        vqwebengineurlrequestinterceptor->timerEvent(event);
    } else {
        ((VirtualQWebEngineUrlRequestInterceptor*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnTimerEvent(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_TimerEvent_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineUrlRequestInterceptor_ChildEvent(QWebEngineUrlRequestInterceptor* self, QChildEvent* event) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->childEvent(event);
    } else {
        ((VirtualQWebEngineUrlRequestInterceptor*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QWebEngineUrlRequestInterceptor_SuperChildEvent(QWebEngineUrlRequestInterceptor* self, QChildEvent* event) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_ChildEvent_IsBase(true);
        vqwebengineurlrequestinterceptor->childEvent(event);
    } else {
        ((VirtualQWebEngineUrlRequestInterceptor*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnChildEvent(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_ChildEvent_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineUrlRequestInterceptor_CustomEvent(QWebEngineUrlRequestInterceptor* self, QEvent* event) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->customEvent(event);
    } else {
        ((VirtualQWebEngineUrlRequestInterceptor*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QWebEngineUrlRequestInterceptor_SuperCustomEvent(QWebEngineUrlRequestInterceptor* self, QEvent* event) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_CustomEvent_IsBase(true);
        vqwebengineurlrequestinterceptor->customEvent(event);
    } else {
        ((VirtualQWebEngineUrlRequestInterceptor*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnCustomEvent(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_CustomEvent_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineUrlRequestInterceptor_ConnectNotify(QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->connectNotify(*signal);
    } else {
        ((VirtualQWebEngineUrlRequestInterceptor*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWebEngineUrlRequestInterceptor_SuperConnectNotify(QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_ConnectNotify_IsBase(true);
        vqwebengineurlrequestinterceptor->connectNotify(*signal);
    } else {
        ((VirtualQWebEngineUrlRequestInterceptor*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnConnectNotify(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_ConnectNotify_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineUrlRequestInterceptor_DisconnectNotify(QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->disconnectNotify(*signal);
    } else {
        ((VirtualQWebEngineUrlRequestInterceptor*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWebEngineUrlRequestInterceptor_SuperDisconnectNotify(QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_DisconnectNotify_IsBase(true);
        vqwebengineurlrequestinterceptor->disconnectNotify(*signal);
    } else {
        ((VirtualQWebEngineUrlRequestInterceptor*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnDisconnectNotify(QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    auto* vqwebengineurlrequestinterceptor = dynamic_cast<VirtualQWebEngineUrlRequestInterceptor*>(self);
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_DisconnectNotify_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWebEngineUrlRequestInterceptor_Sender(const QWebEngineUrlRequestInterceptor* self) {
    auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self));
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        return vqwebengineurlrequestinterceptor->sender();
    } else {
        return ((VirtualQWebEngineUrlRequestInterceptor*)self)->sender();
    }
}

// Base class handler implementation
QObject* QWebEngineUrlRequestInterceptor_SuperSender(const QWebEngineUrlRequestInterceptor* self) {
    auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self));
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_Sender_IsBase(true);
        return vqwebengineurlrequestinterceptor->sender();
    } else {
        return ((VirtualQWebEngineUrlRequestInterceptor*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnSender(const QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self));
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_Sender_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebEngineUrlRequestInterceptor_SenderSignalIndex(const QWebEngineUrlRequestInterceptor* self) {
    auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self));
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        return vqwebengineurlrequestinterceptor->senderSignalIndex();
    } else {
        return ((VirtualQWebEngineUrlRequestInterceptor*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QWebEngineUrlRequestInterceptor_SuperSenderSignalIndex(const QWebEngineUrlRequestInterceptor* self) {
    auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self));
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_SenderSignalIndex_IsBase(true);
        return vqwebengineurlrequestinterceptor->senderSignalIndex();
    } else {
        return ((VirtualQWebEngineUrlRequestInterceptor*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnSenderSignalIndex(const QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self));
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebEngineUrlRequestInterceptor_Receivers(const QWebEngineUrlRequestInterceptor* self, const char* signal) {
    auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self));
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        return vqwebengineurlrequestinterceptor->receivers(signal);
    } else {
        return ((VirtualQWebEngineUrlRequestInterceptor*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QWebEngineUrlRequestInterceptor_SuperReceivers(const QWebEngineUrlRequestInterceptor* self, const char* signal) {
    auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self));
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_Receivers_IsBase(true);
        return vqwebengineurlrequestinterceptor->receivers(signal);
    } else {
        return ((VirtualQWebEngineUrlRequestInterceptor*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnReceivers(const QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self));
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_Receivers_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEngineUrlRequestInterceptor_IsSignalConnected(const QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal) {
    auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self));
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        return vqwebengineurlrequestinterceptor->isSignalConnected(*signal);
    } else {
        return ((VirtualQWebEngineUrlRequestInterceptor*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWebEngineUrlRequestInterceptor_SuperIsSignalConnected(const QWebEngineUrlRequestInterceptor* self, const QMetaMethod* signal) {
    auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self));
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_IsSignalConnected_IsBase(true);
        return vqwebengineurlrequestinterceptor->isSignalConnected(*signal);
    } else {
        return ((VirtualQWebEngineUrlRequestInterceptor*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineUrlRequestInterceptor_OnIsSignalConnected(const QWebEngineUrlRequestInterceptor* self, intptr_t slot) {
    auto* vqwebengineurlrequestinterceptor = const_cast<VirtualQWebEngineUrlRequestInterceptor*>(dynamic_cast<const VirtualQWebEngineUrlRequestInterceptor*>(self));
    if (vqwebengineurlrequestinterceptor && vqwebengineurlrequestinterceptor->isVirtualQWebEngineUrlRequestInterceptor) {
        vqwebengineurlrequestinterceptor->setQWebEngineUrlRequestInterceptor_IsSignalConnected_Callback(reinterpret_cast<VirtualQWebEngineUrlRequestInterceptor::QWebEngineUrlRequestInterceptor_IsSignalConnected_Callback>(slot));
    }
}

void QWebEngineUrlRequestInterceptor_Delete(QWebEngineUrlRequestInterceptor* self) {
    delete self;
}
