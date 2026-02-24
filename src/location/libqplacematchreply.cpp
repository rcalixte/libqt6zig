#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlace>
#include <QPlaceMatchReply>
#include <QPlaceMatchRequest>
#include <QPlaceReply>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qplacematchreply.h>
#include "libqplacematchreply.h"
#include "libqplacematchreply.hxx"

QPlaceMatchReply* QPlaceMatchReply_new() {
    return new VirtualQPlaceMatchReply();
}

QPlaceMatchReply* QPlaceMatchReply_new2(QObject* parent) {
    return new VirtualQPlaceMatchReply(parent);
}

QMetaObject* QPlaceMatchReply_MetaObject(const QPlaceMatchReply* self) {
    auto* vqplacematchreply = dynamic_cast<const VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQPlaceMatchReply*)self)->metaObject();
    }
}

void* QPlaceMatchReply_Metacast(QPlaceMatchReply* self, const char* param1) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQPlaceMatchReply*)self)->qt_metacast(param1);
    }
}

int QPlaceMatchReply_Metacall(QPlaceMatchReply* self, int param1, int param2, void** param3) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPlaceMatchReply*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int QPlaceMatchReply_Type(const QPlaceMatchReply* self) {
    auto* vqplacematchreply = dynamic_cast<const VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        return static_cast<int>(self->type());
    } else {
        return static_cast<int>(((VirtualQPlaceMatchReply*)self)->type());
    }
}

libqt_list /* of QPlace* */ QPlaceMatchReply_Places(const QPlaceMatchReply* self) {
    QList<QPlace> _ret = self->places();
    // Convert QList<> from C++ memory to manually-managed C memory
    QPlace** _arr = static_cast<QPlace**>(malloc(sizeof(QPlace*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPlace(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QPlaceMatchRequest* QPlaceMatchReply_Request(const QPlaceMatchReply* self) {
    return new QPlaceMatchRequest(self->request());
}

// Base class handler implementation
QMetaObject* QPlaceMatchReply_SuperMetaObject(const QPlaceMatchReply* self) {
    auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self));
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_MetaObject_IsBase(true);
        return (QMetaObject*)vqplacematchreply->metaObject();
    } else {
        return (QMetaObject*)self->QPlaceMatchReply::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnMetaObject(const QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self));
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_MetaObject_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QPlaceMatchReply_SuperMetacast(QPlaceMatchReply* self, const char* param1) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_Metacast_IsBase(true);
        return vqplacematchreply->qt_metacast(param1);
    } else {
        return self->QPlaceMatchReply::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnMetacast(QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_Metacast_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QPlaceMatchReply_SuperMetacall(QPlaceMatchReply* self, int param1, int param2, void** param3) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_Metacall_IsBase(true);
        return vqplacematchreply->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QPlaceMatchReply::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnMetacall(QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_Metacall_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QPlaceMatchReply_SuperType(const QPlaceMatchReply* self) {
    auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self));
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_Type_IsBase(true);
        return static_cast<int>(vqplacematchreply->type());
    } else {
        return static_cast<int>(self->QPlaceMatchReply::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnType(const QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self));
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_Type_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceMatchReply_Abort(QPlaceMatchReply* self) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->abort();
    } else {
        self->QPlaceMatchReply::abort();
    }
}

// Base class handler implementation
void QPlaceMatchReply_SuperAbort(QPlaceMatchReply* self) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_Abort_IsBase(true);
        vqplacematchreply->abort();
    } else {
        self->QPlaceMatchReply::abort();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnAbort(QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_Abort_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_Abort_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceMatchReply_Event(QPlaceMatchReply* self, QEvent* event) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        return vqplacematchreply->event(event);
    } else {
        return self->QPlaceMatchReply::event(event);
    }
}

// Base class handler implementation
bool QPlaceMatchReply_SuperEvent(QPlaceMatchReply* self, QEvent* event) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_Event_IsBase(true);
        return vqplacematchreply->event(event);
    } else {
        return self->QPlaceMatchReply::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnEvent(QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_Event_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceMatchReply_EventFilter(QPlaceMatchReply* self, QObject* watched, QEvent* event) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        return vqplacematchreply->eventFilter(watched, event);
    } else {
        return self->QPlaceMatchReply::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPlaceMatchReply_SuperEventFilter(QPlaceMatchReply* self, QObject* watched, QEvent* event) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_EventFilter_IsBase(true);
        return vqplacematchreply->eventFilter(watched, event);
    } else {
        return self->QPlaceMatchReply::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnEventFilter(QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_EventFilter_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceMatchReply_TimerEvent(QPlaceMatchReply* self, QTimerEvent* event) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->timerEvent(event);
    } else {
        ((VirtualQPlaceMatchReply*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPlaceMatchReply_SuperTimerEvent(QPlaceMatchReply* self, QTimerEvent* event) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_TimerEvent_IsBase(true);
        vqplacematchreply->timerEvent(event);
    } else {
        ((VirtualQPlaceMatchReply*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnTimerEvent(QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_TimerEvent_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceMatchReply_ChildEvent(QPlaceMatchReply* self, QChildEvent* event) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->childEvent(event);
    } else {
        ((VirtualQPlaceMatchReply*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPlaceMatchReply_SuperChildEvent(QPlaceMatchReply* self, QChildEvent* event) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_ChildEvent_IsBase(true);
        vqplacematchreply->childEvent(event);
    } else {
        ((VirtualQPlaceMatchReply*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnChildEvent(QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_ChildEvent_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceMatchReply_CustomEvent(QPlaceMatchReply* self, QEvent* event) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->customEvent(event);
    } else {
        ((VirtualQPlaceMatchReply*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPlaceMatchReply_SuperCustomEvent(QPlaceMatchReply* self, QEvent* event) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_CustomEvent_IsBase(true);
        vqplacematchreply->customEvent(event);
    } else {
        ((VirtualQPlaceMatchReply*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnCustomEvent(QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_CustomEvent_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceMatchReply_ConnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->connectNotify(*signal);
    } else {
        ((VirtualQPlaceMatchReply*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPlaceMatchReply_SuperConnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_ConnectNotify_IsBase(true);
        vqplacematchreply->connectNotify(*signal);
    } else {
        ((VirtualQPlaceMatchReply*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnConnectNotify(QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_ConnectNotify_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceMatchReply_DisconnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->disconnectNotify(*signal);
    } else {
        ((VirtualQPlaceMatchReply*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPlaceMatchReply_SuperDisconnectNotify(QPlaceMatchReply* self, const QMetaMethod* signal) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_DisconnectNotify_IsBase(true);
        vqplacematchreply->disconnectNotify(*signal);
    } else {
        ((VirtualQPlaceMatchReply*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnDisconnectNotify(QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_DisconnectNotify_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceMatchReply_SetPlaces(QPlaceMatchReply* self, const libqt_list /* of QPlace* */ results) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    QList<QPlace> results_QList;
    results_QList.reserve(results.len);
    QPlace** results_arr = static_cast<QPlace**>(results.data);
    for (size_t i = 0; i < results.len; ++i) {
        results_QList.push_back(*(results_arr[i]));
    }
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setPlaces(results_QList);
    } else {
        ((VirtualQPlaceMatchReply*)self)->setPlaces(results_QList);
    }
}

// Base class handler implementation
void QPlaceMatchReply_SuperSetPlaces(QPlaceMatchReply* self, const libqt_list /* of QPlace* */ results) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    QList<QPlace> results_QList;
    results_QList.reserve(results.len);
    QPlace** results_arr = static_cast<QPlace**>(results.data);
    for (size_t i = 0; i < results.len; ++i) {
        results_QList.push_back(*(results_arr[i]));
    }
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_SetPlaces_IsBase(true);
        vqplacematchreply->setPlaces(results_QList);
    } else {
        ((VirtualQPlaceMatchReply*)self)->setPlaces(results_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnSetPlaces(QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_SetPlaces_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_SetPlaces_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceMatchReply_SetRequest(QPlaceMatchReply* self, const QPlaceMatchRequest* request) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setRequest(*request);
    } else {
        ((VirtualQPlaceMatchReply*)self)->setRequest(*request);
    }
}

// Base class handler implementation
void QPlaceMatchReply_SuperSetRequest(QPlaceMatchReply* self, const QPlaceMatchRequest* request) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_SetRequest_IsBase(true);
        vqplacematchreply->setRequest(*request);
    } else {
        ((VirtualQPlaceMatchReply*)self)->setRequest(*request);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnSetRequest(QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_SetRequest_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_SetRequest_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceMatchReply_SetFinished(QPlaceMatchReply* self, bool finished) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setFinished(finished);
    } else {
        ((VirtualQPlaceMatchReply*)self)->setFinished(finished);
    }
}

// Base class handler implementation
void QPlaceMatchReply_SuperSetFinished(QPlaceMatchReply* self, bool finished) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_SetFinished_IsBase(true);
        vqplacematchreply->setFinished(finished);
    } else {
        ((VirtualQPlaceMatchReply*)self)->setFinished(finished);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnSetFinished(QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_SetFinished_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_SetFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceMatchReply_SetError(QPlaceMatchReply* self, int errorVal, const libqt_string errorString) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else {
        ((VirtualQPlaceMatchReply*)self)->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    }
}

// Base class handler implementation
void QPlaceMatchReply_SuperSetError(QPlaceMatchReply* self, int errorVal, const libqt_string errorString) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_SetError_IsBase(true);
        vqplacematchreply->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else {
        ((VirtualQPlaceMatchReply*)self)->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnSetError(QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = dynamic_cast<VirtualQPlaceMatchReply*>(self);
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_SetError_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPlaceMatchReply_Sender(const QPlaceMatchReply* self) {
    auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self));
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        return vqplacematchreply->sender();
    } else {
        return ((VirtualQPlaceMatchReply*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPlaceMatchReply_SuperSender(const QPlaceMatchReply* self) {
    auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self));
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_Sender_IsBase(true);
        return vqplacematchreply->sender();
    } else {
        return ((VirtualQPlaceMatchReply*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnSender(const QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self));
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_Sender_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlaceMatchReply_SenderSignalIndex(const QPlaceMatchReply* self) {
    auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self));
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        return vqplacematchreply->senderSignalIndex();
    } else {
        return ((VirtualQPlaceMatchReply*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPlaceMatchReply_SuperSenderSignalIndex(const QPlaceMatchReply* self) {
    auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self));
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_SenderSignalIndex_IsBase(true);
        return vqplacematchreply->senderSignalIndex();
    } else {
        return ((VirtualQPlaceMatchReply*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnSenderSignalIndex(const QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self));
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlaceMatchReply_Receivers(const QPlaceMatchReply* self, const char* signal) {
    auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self));
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        return vqplacematchreply->receivers(signal);
    } else {
        return ((VirtualQPlaceMatchReply*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPlaceMatchReply_SuperReceivers(const QPlaceMatchReply* self, const char* signal) {
    auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self));
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_Receivers_IsBase(true);
        return vqplacematchreply->receivers(signal);
    } else {
        return ((VirtualQPlaceMatchReply*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnReceivers(const QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self));
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_Receivers_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceMatchReply_IsSignalConnected(const QPlaceMatchReply* self, const QMetaMethod* signal) {
    auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self));
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        return vqplacematchreply->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlaceMatchReply*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPlaceMatchReply_SuperIsSignalConnected(const QPlaceMatchReply* self, const QMetaMethod* signal) {
    auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self));
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_IsSignalConnected_IsBase(true);
        return vqplacematchreply->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlaceMatchReply*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceMatchReply_OnIsSignalConnected(const QPlaceMatchReply* self, intptr_t slot) {
    auto* vqplacematchreply = const_cast<VirtualQPlaceMatchReply*>(dynamic_cast<const VirtualQPlaceMatchReply*>(self));
    if (vqplacematchreply && vqplacematchreply->isVirtualQPlaceMatchReply) {
        vqplacematchreply->setQPlaceMatchReply_IsSignalConnected_Callback(reinterpret_cast<VirtualQPlaceMatchReply::QPlaceMatchReply_IsSignalConnected_Callback>(slot));
    }
}

void QPlaceMatchReply_Delete(QPlaceMatchReply* self) {
    delete self;
}
