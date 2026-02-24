#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlace>
#include <QPlaceDetailsReply>
#include <QPlaceReply>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qplacedetailsreply.h>
#include "libqplacedetailsreply.h"
#include "libqplacedetailsreply.hxx"

QPlaceDetailsReply* QPlaceDetailsReply_new() {
    return new VirtualQPlaceDetailsReply();
}

QPlaceDetailsReply* QPlaceDetailsReply_new2(QObject* parent) {
    return new VirtualQPlaceDetailsReply(parent);
}

QMetaObject* QPlaceDetailsReply_MetaObject(const QPlaceDetailsReply* self) {
    auto* vqplacedetailsreply = dynamic_cast<const VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQPlaceDetailsReply*)self)->metaObject();
    }
}

void* QPlaceDetailsReply_Metacast(QPlaceDetailsReply* self, const char* param1) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQPlaceDetailsReply*)self)->qt_metacast(param1);
    }
}

int QPlaceDetailsReply_Metacall(QPlaceDetailsReply* self, int param1, int param2, void** param3) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPlaceDetailsReply*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int QPlaceDetailsReply_Type(const QPlaceDetailsReply* self) {
    auto* vqplacedetailsreply = dynamic_cast<const VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        return static_cast<int>(self->type());
    } else {
        return static_cast<int>(((VirtualQPlaceDetailsReply*)self)->type());
    }
}

QPlace* QPlaceDetailsReply_Place(const QPlaceDetailsReply* self) {
    return new QPlace(self->place());
}

// Base class handler implementation
QMetaObject* QPlaceDetailsReply_SuperMetaObject(const QPlaceDetailsReply* self) {
    auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self));
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_MetaObject_IsBase(true);
        return (QMetaObject*)vqplacedetailsreply->metaObject();
    } else {
        return (QMetaObject*)self->QPlaceDetailsReply::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnMetaObject(const QPlaceDetailsReply* self, intptr_t slot) {
    auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self));
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_MetaObject_Callback(reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QPlaceDetailsReply_SuperMetacast(QPlaceDetailsReply* self, const char* param1) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_Metacast_IsBase(true);
        return vqplacedetailsreply->qt_metacast(param1);
    } else {
        return self->QPlaceDetailsReply::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnMetacast(QPlaceDetailsReply* self, intptr_t slot) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_Metacast_Callback(reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QPlaceDetailsReply_SuperMetacall(QPlaceDetailsReply* self, int param1, int param2, void** param3) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_Metacall_IsBase(true);
        return vqplacedetailsreply->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QPlaceDetailsReply::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnMetacall(QPlaceDetailsReply* self, intptr_t slot) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_Metacall_Callback(reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QPlaceDetailsReply_SuperType(const QPlaceDetailsReply* self) {
    auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self));
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_Type_IsBase(true);
        return static_cast<int>(vqplacedetailsreply->type());
    } else {
        return static_cast<int>(self->QPlaceDetailsReply::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnType(const QPlaceDetailsReply* self, intptr_t slot) {
    auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self));
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_Type_Callback(reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceDetailsReply_Abort(QPlaceDetailsReply* self) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->abort();
    } else {
        self->QPlaceDetailsReply::abort();
    }
}

// Base class handler implementation
void QPlaceDetailsReply_SuperAbort(QPlaceDetailsReply* self) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_Abort_IsBase(true);
        vqplacedetailsreply->abort();
    } else {
        self->QPlaceDetailsReply::abort();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnAbort(QPlaceDetailsReply* self, intptr_t slot) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_Abort_Callback(reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_Abort_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceDetailsReply_Event(QPlaceDetailsReply* self, QEvent* event) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        return vqplacedetailsreply->event(event);
    } else {
        return self->QPlaceDetailsReply::event(event);
    }
}

// Base class handler implementation
bool QPlaceDetailsReply_SuperEvent(QPlaceDetailsReply* self, QEvent* event) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_Event_IsBase(true);
        return vqplacedetailsreply->event(event);
    } else {
        return self->QPlaceDetailsReply::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnEvent(QPlaceDetailsReply* self, intptr_t slot) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_Event_Callback(reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceDetailsReply_EventFilter(QPlaceDetailsReply* self, QObject* watched, QEvent* event) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        return vqplacedetailsreply->eventFilter(watched, event);
    } else {
        return self->QPlaceDetailsReply::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPlaceDetailsReply_SuperEventFilter(QPlaceDetailsReply* self, QObject* watched, QEvent* event) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_EventFilter_IsBase(true);
        return vqplacedetailsreply->eventFilter(watched, event);
    } else {
        return self->QPlaceDetailsReply::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnEventFilter(QPlaceDetailsReply* self, intptr_t slot) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_EventFilter_Callback(reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceDetailsReply_TimerEvent(QPlaceDetailsReply* self, QTimerEvent* event) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->timerEvent(event);
    } else {
        ((VirtualQPlaceDetailsReply*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPlaceDetailsReply_SuperTimerEvent(QPlaceDetailsReply* self, QTimerEvent* event) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_TimerEvent_IsBase(true);
        vqplacedetailsreply->timerEvent(event);
    } else {
        ((VirtualQPlaceDetailsReply*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnTimerEvent(QPlaceDetailsReply* self, intptr_t slot) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_TimerEvent_Callback(reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceDetailsReply_ChildEvent(QPlaceDetailsReply* self, QChildEvent* event) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->childEvent(event);
    } else {
        ((VirtualQPlaceDetailsReply*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPlaceDetailsReply_SuperChildEvent(QPlaceDetailsReply* self, QChildEvent* event) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_ChildEvent_IsBase(true);
        vqplacedetailsreply->childEvent(event);
    } else {
        ((VirtualQPlaceDetailsReply*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnChildEvent(QPlaceDetailsReply* self, intptr_t slot) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_ChildEvent_Callback(reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceDetailsReply_CustomEvent(QPlaceDetailsReply* self, QEvent* event) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->customEvent(event);
    } else {
        ((VirtualQPlaceDetailsReply*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPlaceDetailsReply_SuperCustomEvent(QPlaceDetailsReply* self, QEvent* event) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_CustomEvent_IsBase(true);
        vqplacedetailsreply->customEvent(event);
    } else {
        ((VirtualQPlaceDetailsReply*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnCustomEvent(QPlaceDetailsReply* self, intptr_t slot) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_CustomEvent_Callback(reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceDetailsReply_ConnectNotify(QPlaceDetailsReply* self, const QMetaMethod* signal) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->connectNotify(*signal);
    } else {
        ((VirtualQPlaceDetailsReply*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPlaceDetailsReply_SuperConnectNotify(QPlaceDetailsReply* self, const QMetaMethod* signal) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_ConnectNotify_IsBase(true);
        vqplacedetailsreply->connectNotify(*signal);
    } else {
        ((VirtualQPlaceDetailsReply*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnConnectNotify(QPlaceDetailsReply* self, intptr_t slot) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_ConnectNotify_Callback(reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceDetailsReply_DisconnectNotify(QPlaceDetailsReply* self, const QMetaMethod* signal) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->disconnectNotify(*signal);
    } else {
        ((VirtualQPlaceDetailsReply*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPlaceDetailsReply_SuperDisconnectNotify(QPlaceDetailsReply* self, const QMetaMethod* signal) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_DisconnectNotify_IsBase(true);
        vqplacedetailsreply->disconnectNotify(*signal);
    } else {
        ((VirtualQPlaceDetailsReply*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnDisconnectNotify(QPlaceDetailsReply* self, intptr_t slot) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_DisconnectNotify_Callback(reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceDetailsReply_SetPlace(QPlaceDetailsReply* self, const QPlace* place) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setPlace(*place);
    } else {
        ((VirtualQPlaceDetailsReply*)self)->setPlace(*place);
    }
}

// Base class handler implementation
void QPlaceDetailsReply_SuperSetPlace(QPlaceDetailsReply* self, const QPlace* place) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_SetPlace_IsBase(true);
        vqplacedetailsreply->setPlace(*place);
    } else {
        ((VirtualQPlaceDetailsReply*)self)->setPlace(*place);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnSetPlace(QPlaceDetailsReply* self, intptr_t slot) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_SetPlace_Callback(reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_SetPlace_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceDetailsReply_SetFinished(QPlaceDetailsReply* self, bool finished) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setFinished(finished);
    } else {
        ((VirtualQPlaceDetailsReply*)self)->setFinished(finished);
    }
}

// Base class handler implementation
void QPlaceDetailsReply_SuperSetFinished(QPlaceDetailsReply* self, bool finished) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_SetFinished_IsBase(true);
        vqplacedetailsreply->setFinished(finished);
    } else {
        ((VirtualQPlaceDetailsReply*)self)->setFinished(finished);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnSetFinished(QPlaceDetailsReply* self, intptr_t slot) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_SetFinished_Callback(reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_SetFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceDetailsReply_SetError(QPlaceDetailsReply* self, int errorVal, const libqt_string errorString) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else {
        ((VirtualQPlaceDetailsReply*)self)->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    }
}

// Base class handler implementation
void QPlaceDetailsReply_SuperSetError(QPlaceDetailsReply* self, int errorVal, const libqt_string errorString) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_SetError_IsBase(true);
        vqplacedetailsreply->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else {
        ((VirtualQPlaceDetailsReply*)self)->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnSetError(QPlaceDetailsReply* self, intptr_t slot) {
    auto* vqplacedetailsreply = dynamic_cast<VirtualQPlaceDetailsReply*>(self);
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_SetError_Callback(reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPlaceDetailsReply_Sender(const QPlaceDetailsReply* self) {
    auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self));
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        return vqplacedetailsreply->sender();
    } else {
        return ((VirtualQPlaceDetailsReply*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPlaceDetailsReply_SuperSender(const QPlaceDetailsReply* self) {
    auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self));
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_Sender_IsBase(true);
        return vqplacedetailsreply->sender();
    } else {
        return ((VirtualQPlaceDetailsReply*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnSender(const QPlaceDetailsReply* self, intptr_t slot) {
    auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self));
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_Sender_Callback(reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlaceDetailsReply_SenderSignalIndex(const QPlaceDetailsReply* self) {
    auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self));
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        return vqplacedetailsreply->senderSignalIndex();
    } else {
        return ((VirtualQPlaceDetailsReply*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPlaceDetailsReply_SuperSenderSignalIndex(const QPlaceDetailsReply* self) {
    auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self));
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_SenderSignalIndex_IsBase(true);
        return vqplacedetailsreply->senderSignalIndex();
    } else {
        return ((VirtualQPlaceDetailsReply*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnSenderSignalIndex(const QPlaceDetailsReply* self, intptr_t slot) {
    auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self));
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlaceDetailsReply_Receivers(const QPlaceDetailsReply* self, const char* signal) {
    auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self));
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        return vqplacedetailsreply->receivers(signal);
    } else {
        return ((VirtualQPlaceDetailsReply*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPlaceDetailsReply_SuperReceivers(const QPlaceDetailsReply* self, const char* signal) {
    auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self));
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_Receivers_IsBase(true);
        return vqplacedetailsreply->receivers(signal);
    } else {
        return ((VirtualQPlaceDetailsReply*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnReceivers(const QPlaceDetailsReply* self, intptr_t slot) {
    auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self));
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_Receivers_Callback(reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceDetailsReply_IsSignalConnected(const QPlaceDetailsReply* self, const QMetaMethod* signal) {
    auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self));
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        return vqplacedetailsreply->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlaceDetailsReply*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPlaceDetailsReply_SuperIsSignalConnected(const QPlaceDetailsReply* self, const QMetaMethod* signal) {
    auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self));
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_IsSignalConnected_IsBase(true);
        return vqplacedetailsreply->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlaceDetailsReply*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceDetailsReply_OnIsSignalConnected(const QPlaceDetailsReply* self, intptr_t slot) {
    auto* vqplacedetailsreply = const_cast<VirtualQPlaceDetailsReply*>(dynamic_cast<const VirtualQPlaceDetailsReply*>(self));
    if (vqplacedetailsreply && vqplacedetailsreply->isVirtualQPlaceDetailsReply) {
        vqplacedetailsreply->setQPlaceDetailsReply_IsSignalConnected_Callback(reinterpret_cast<VirtualQPlaceDetailsReply::QPlaceDetailsReply_IsSignalConnected_Callback>(slot));
    }
}

void QPlaceDetailsReply_Delete(QPlaceDetailsReply* self) {
    delete self;
}
