#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlaceReply>
#include <QPlaceSearchReply>
#include <QPlaceSearchRequest>
#include <QPlaceSearchResult>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qplacesearchreply.h>
#include "libqplacesearchreply.h"
#include "libqplacesearchreply.hxx"

QPlaceSearchReply* QPlaceSearchReply_new() {
    return new VirtualQPlaceSearchReply();
}

QPlaceSearchReply* QPlaceSearchReply_new2(QObject* parent) {
    return new VirtualQPlaceSearchReply(parent);
}

QMetaObject* QPlaceSearchReply_MetaObject(const QPlaceSearchReply* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPlaceSearchReply_Metacast(QPlaceSearchReply* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPlaceSearchReply_Metacall(QPlaceSearchReply* self, int param1, int param2, void** param3) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPlaceSearchReply*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int QPlaceSearchReply_Type(const QPlaceSearchReply* self) {
    auto* vqplacesearchreply = dynamic_cast<const VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        return static_cast<int>(self->type());
    } else {
        return static_cast<int>(((VirtualQPlaceSearchReply*)self)->type());
    }
}

libqt_list /* of QPlaceSearchResult* */ QPlaceSearchReply_Results(const QPlaceSearchReply* self) {
    QList<QPlaceSearchResult> _ret = self->results();
    // Convert QList<> from C++ memory to manually-managed C memory
    QPlaceSearchResult** _arr = static_cast<QPlaceSearchResult**>(malloc(sizeof(QPlaceSearchResult*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPlaceSearchResult(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QPlaceSearchRequest* QPlaceSearchReply_Request(const QPlaceSearchReply* self) {
    return new QPlaceSearchRequest(self->request());
}

QPlaceSearchRequest* QPlaceSearchReply_PreviousPageRequest(const QPlaceSearchReply* self) {
    return new QPlaceSearchRequest(self->previousPageRequest());
}

QPlaceSearchRequest* QPlaceSearchReply_NextPageRequest(const QPlaceSearchReply* self) {
    return new QPlaceSearchRequest(self->nextPageRequest());
}

// Base class handler implementation
int QPlaceSearchReply_QBaseMetacall(QPlaceSearchReply* self, int param1, int param2, void** param3) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_Metacall_IsBase(true);
        return vqplacesearchreply->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QPlaceSearchReply::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnMetacall(QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_Metacall_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QPlaceSearchReply_QBaseType(const QPlaceSearchReply* self) {
    auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self));
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_Type_IsBase(true);
        return static_cast<int>(vqplacesearchreply->type());
    } else {
        return static_cast<int>(self->QPlaceSearchReply::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnType(const QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self));
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_Type_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchReply_Abort(QPlaceSearchReply* self) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->abort();
    } else {
        self->QPlaceSearchReply::abort();
    }
}

// Base class handler implementation
void QPlaceSearchReply_QBaseAbort(QPlaceSearchReply* self) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_Abort_IsBase(true);
        vqplacesearchreply->abort();
    } else {
        self->QPlaceSearchReply::abort();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnAbort(QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_Abort_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_Abort_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceSearchReply_Event(QPlaceSearchReply* self, QEvent* event) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        return vqplacesearchreply->event(event);
    } else {
        return self->QPlaceSearchReply::event(event);
    }
}

// Base class handler implementation
bool QPlaceSearchReply_QBaseEvent(QPlaceSearchReply* self, QEvent* event) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_Event_IsBase(true);
        return vqplacesearchreply->event(event);
    } else {
        return self->QPlaceSearchReply::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnEvent(QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_Event_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceSearchReply_EventFilter(QPlaceSearchReply* self, QObject* watched, QEvent* event) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        return vqplacesearchreply->eventFilter(watched, event);
    } else {
        return self->QPlaceSearchReply::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPlaceSearchReply_QBaseEventFilter(QPlaceSearchReply* self, QObject* watched, QEvent* event) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_EventFilter_IsBase(true);
        return vqplacesearchreply->eventFilter(watched, event);
    } else {
        return self->QPlaceSearchReply::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnEventFilter(QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_EventFilter_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchReply_TimerEvent(QPlaceSearchReply* self, QTimerEvent* event) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->timerEvent(event);
    } else {
        ((VirtualQPlaceSearchReply*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPlaceSearchReply_QBaseTimerEvent(QPlaceSearchReply* self, QTimerEvent* event) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_TimerEvent_IsBase(true);
        vqplacesearchreply->timerEvent(event);
    } else {
        ((VirtualQPlaceSearchReply*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnTimerEvent(QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_TimerEvent_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchReply_ChildEvent(QPlaceSearchReply* self, QChildEvent* event) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->childEvent(event);
    } else {
        ((VirtualQPlaceSearchReply*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPlaceSearchReply_QBaseChildEvent(QPlaceSearchReply* self, QChildEvent* event) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_ChildEvent_IsBase(true);
        vqplacesearchreply->childEvent(event);
    } else {
        ((VirtualQPlaceSearchReply*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnChildEvent(QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_ChildEvent_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchReply_CustomEvent(QPlaceSearchReply* self, QEvent* event) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->customEvent(event);
    } else {
        ((VirtualQPlaceSearchReply*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPlaceSearchReply_QBaseCustomEvent(QPlaceSearchReply* self, QEvent* event) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_CustomEvent_IsBase(true);
        vqplacesearchreply->customEvent(event);
    } else {
        ((VirtualQPlaceSearchReply*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnCustomEvent(QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_CustomEvent_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchReply_ConnectNotify(QPlaceSearchReply* self, const QMetaMethod* signal) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->connectNotify(*signal);
    } else {
        ((VirtualQPlaceSearchReply*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPlaceSearchReply_QBaseConnectNotify(QPlaceSearchReply* self, const QMetaMethod* signal) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_ConnectNotify_IsBase(true);
        vqplacesearchreply->connectNotify(*signal);
    } else {
        ((VirtualQPlaceSearchReply*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnConnectNotify(QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_ConnectNotify_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchReply_DisconnectNotify(QPlaceSearchReply* self, const QMetaMethod* signal) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->disconnectNotify(*signal);
    } else {
        ((VirtualQPlaceSearchReply*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPlaceSearchReply_QBaseDisconnectNotify(QPlaceSearchReply* self, const QMetaMethod* signal) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_DisconnectNotify_IsBase(true);
        vqplacesearchreply->disconnectNotify(*signal);
    } else {
        ((VirtualQPlaceSearchReply*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnDisconnectNotify(QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_DisconnectNotify_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchReply_SetResults(QPlaceSearchReply* self, const libqt_list /* of QPlaceSearchResult* */ results) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    QList<QPlaceSearchResult> results_QList;
    results_QList.reserve(results.len);
    QPlaceSearchResult** results_arr = static_cast<QPlaceSearchResult**>(results.data);
    for (size_t i = 0; i < results.len; ++i) {
        results_QList.push_back(*(results_arr[i]));
    }
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setResults(results_QList);
    } else {
        ((VirtualQPlaceSearchReply*)self)->setResults(results_QList);
    }
}

// Base class handler implementation
void QPlaceSearchReply_QBaseSetResults(QPlaceSearchReply* self, const libqt_list /* of QPlaceSearchResult* */ results) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    QList<QPlaceSearchResult> results_QList;
    results_QList.reserve(results.len);
    QPlaceSearchResult** results_arr = static_cast<QPlaceSearchResult**>(results.data);
    for (size_t i = 0; i < results.len; ++i) {
        results_QList.push_back(*(results_arr[i]));
    }
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_SetResults_IsBase(true);
        vqplacesearchreply->setResults(results_QList);
    } else {
        ((VirtualQPlaceSearchReply*)self)->setResults(results_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnSetResults(QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_SetResults_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_SetResults_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchReply_SetRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* request) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setRequest(*request);
    } else {
        ((VirtualQPlaceSearchReply*)self)->setRequest(*request);
    }
}

// Base class handler implementation
void QPlaceSearchReply_QBaseSetRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* request) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_SetRequest_IsBase(true);
        vqplacesearchreply->setRequest(*request);
    } else {
        ((VirtualQPlaceSearchReply*)self)->setRequest(*request);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnSetRequest(QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_SetRequest_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_SetRequest_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchReply_SetPreviousPageRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* previous) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setPreviousPageRequest(*previous);
    } else {
        ((VirtualQPlaceSearchReply*)self)->setPreviousPageRequest(*previous);
    }
}

// Base class handler implementation
void QPlaceSearchReply_QBaseSetPreviousPageRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* previous) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_SetPreviousPageRequest_IsBase(true);
        vqplacesearchreply->setPreviousPageRequest(*previous);
    } else {
        ((VirtualQPlaceSearchReply*)self)->setPreviousPageRequest(*previous);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnSetPreviousPageRequest(QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_SetPreviousPageRequest_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_SetPreviousPageRequest_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchReply_SetNextPageRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* next) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setNextPageRequest(*next);
    } else {
        ((VirtualQPlaceSearchReply*)self)->setNextPageRequest(*next);
    }
}

// Base class handler implementation
void QPlaceSearchReply_QBaseSetNextPageRequest(QPlaceSearchReply* self, const QPlaceSearchRequest* next) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_SetNextPageRequest_IsBase(true);
        vqplacesearchreply->setNextPageRequest(*next);
    } else {
        ((VirtualQPlaceSearchReply*)self)->setNextPageRequest(*next);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnSetNextPageRequest(QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_SetNextPageRequest_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_SetNextPageRequest_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchReply_SetFinished(QPlaceSearchReply* self, bool finished) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setFinished(finished);
    } else {
        ((VirtualQPlaceSearchReply*)self)->setFinished(finished);
    }
}

// Base class handler implementation
void QPlaceSearchReply_QBaseSetFinished(QPlaceSearchReply* self, bool finished) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_SetFinished_IsBase(true);
        vqplacesearchreply->setFinished(finished);
    } else {
        ((VirtualQPlaceSearchReply*)self)->setFinished(finished);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnSetFinished(QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_SetFinished_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_SetFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchReply_SetError(QPlaceSearchReply* self, int errorVal, const libqt_string errorString) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else {
        ((VirtualQPlaceSearchReply*)self)->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    }
}

// Base class handler implementation
void QPlaceSearchReply_QBaseSetError(QPlaceSearchReply* self, int errorVal, const libqt_string errorString) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_SetError_IsBase(true);
        vqplacesearchreply->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else {
        ((VirtualQPlaceSearchReply*)self)->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnSetError(QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = dynamic_cast<VirtualQPlaceSearchReply*>(self);
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_SetError_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPlaceSearchReply_Sender(const QPlaceSearchReply* self) {
    auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self));
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        return vqplacesearchreply->sender();
    } else {
        return ((VirtualQPlaceSearchReply*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPlaceSearchReply_QBaseSender(const QPlaceSearchReply* self) {
    auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self));
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_Sender_IsBase(true);
        return vqplacesearchreply->sender();
    } else {
        return ((VirtualQPlaceSearchReply*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnSender(const QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self));
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_Sender_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlaceSearchReply_SenderSignalIndex(const QPlaceSearchReply* self) {
    auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self));
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        return vqplacesearchreply->senderSignalIndex();
    } else {
        return ((VirtualQPlaceSearchReply*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPlaceSearchReply_QBaseSenderSignalIndex(const QPlaceSearchReply* self) {
    auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self));
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_SenderSignalIndex_IsBase(true);
        return vqplacesearchreply->senderSignalIndex();
    } else {
        return ((VirtualQPlaceSearchReply*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnSenderSignalIndex(const QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self));
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlaceSearchReply_Receivers(const QPlaceSearchReply* self, const char* signal) {
    auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self));
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        return vqplacesearchreply->receivers(signal);
    } else {
        return ((VirtualQPlaceSearchReply*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPlaceSearchReply_QBaseReceivers(const QPlaceSearchReply* self, const char* signal) {
    auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self));
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_Receivers_IsBase(true);
        return vqplacesearchreply->receivers(signal);
    } else {
        return ((VirtualQPlaceSearchReply*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnReceivers(const QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self));
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_Receivers_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceSearchReply_IsSignalConnected(const QPlaceSearchReply* self, const QMetaMethod* signal) {
    auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self));
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        return vqplacesearchreply->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlaceSearchReply*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPlaceSearchReply_QBaseIsSignalConnected(const QPlaceSearchReply* self, const QMetaMethod* signal) {
    auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self));
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_IsSignalConnected_IsBase(true);
        return vqplacesearchreply->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlaceSearchReply*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchReply_OnIsSignalConnected(const QPlaceSearchReply* self, intptr_t slot) {
    auto* vqplacesearchreply = const_cast<VirtualQPlaceSearchReply*>(dynamic_cast<const VirtualQPlaceSearchReply*>(self));
    if (vqplacesearchreply && vqplacesearchreply->isVirtualQPlaceSearchReply) {
        vqplacesearchreply->setQPlaceSearchReply_IsSignalConnected_Callback(reinterpret_cast<VirtualQPlaceSearchReply::QPlaceSearchReply_IsSignalConnected_Callback>(slot));
    }
}

void QPlaceSearchReply_Delete(QPlaceSearchReply* self) {
    delete self;
}
