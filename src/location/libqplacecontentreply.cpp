#include <QChildEvent>
#include <QEvent>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlaceContent>
#include <QPlaceContentReply>
#include <QPlaceContentRequest>
#include <QPlaceReply>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qplacecontentreply.h>
#include "libqplacecontentreply.h"
#include "libqplacecontentreply.hxx"

QPlaceContentReply* QPlaceContentReply_new() {
    return new VirtualQPlaceContentReply();
}

QPlaceContentReply* QPlaceContentReply_new2(QObject* parent) {
    return new VirtualQPlaceContentReply(parent);
}

QMetaObject* QPlaceContentReply_MetaObject(const QPlaceContentReply* self) {
    auto* vqplacecontentreply = dynamic_cast<const VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQPlaceContentReply*)self)->metaObject();
    }
}

void* QPlaceContentReply_Metacast(QPlaceContentReply* self, const char* param1) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQPlaceContentReply*)self)->qt_metacast(param1);
    }
}

int QPlaceContentReply_Metacall(QPlaceContentReply* self, int param1, int param2, void** param3) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPlaceContentReply*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int QPlaceContentReply_Type(const QPlaceContentReply* self) {
    auto* vqplacecontentreply = dynamic_cast<const VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        return static_cast<int>(self->type());
    } else {
        return static_cast<int>(((VirtualQPlaceContentReply*)self)->type());
    }
}

libqt_map /* of int to QPlaceContent* */ QPlaceContentReply_Content(const QPlaceContentReply* self) {
    QMap<int, QPlaceContent> _ret = self->content();
    // Convert QMap<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    QPlaceContent** _varr = static_cast<QPlaceContent**>(malloc(sizeof(QPlaceContent*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = _itr->first;
        _varr[_ctr] = new QPlaceContent(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

int QPlaceContentReply_TotalCount(const QPlaceContentReply* self) {
    return self->totalCount();
}

QPlaceContentRequest* QPlaceContentReply_Request(const QPlaceContentReply* self) {
    return new QPlaceContentRequest(self->request());
}

QPlaceContentRequest* QPlaceContentReply_PreviousPageRequest(const QPlaceContentReply* self) {
    return new QPlaceContentRequest(self->previousPageRequest());
}

QPlaceContentRequest* QPlaceContentReply_NextPageRequest(const QPlaceContentReply* self) {
    return new QPlaceContentRequest(self->nextPageRequest());
}

// Base class handler implementation
QMetaObject* QPlaceContentReply_SuperMetaObject(const QPlaceContentReply* self) {
    auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self));
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_MetaObject_IsBase(true);
        return (QMetaObject*)vqplacecontentreply->metaObject();
    } else {
        return (QMetaObject*)self->QPlaceContentReply::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnMetaObject(const QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self));
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_MetaObject_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QPlaceContentReply_SuperMetacast(QPlaceContentReply* self, const char* param1) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_Metacast_IsBase(true);
        return vqplacecontentreply->qt_metacast(param1);
    } else {
        return self->QPlaceContentReply::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnMetacast(QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_Metacast_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QPlaceContentReply_SuperMetacall(QPlaceContentReply* self, int param1, int param2, void** param3) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_Metacall_IsBase(true);
        return vqplacecontentreply->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QPlaceContentReply::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnMetacall(QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_Metacall_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QPlaceContentReply_SuperType(const QPlaceContentReply* self) {
    auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self));
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_Type_IsBase(true);
        return static_cast<int>(vqplacecontentreply->type());
    } else {
        return static_cast<int>(self->QPlaceContentReply::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnType(const QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self));
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_Type_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceContentReply_Abort(QPlaceContentReply* self) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->abort();
    } else {
        self->QPlaceContentReply::abort();
    }
}

// Base class handler implementation
void QPlaceContentReply_SuperAbort(QPlaceContentReply* self) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_Abort_IsBase(true);
        vqplacecontentreply->abort();
    } else {
        self->QPlaceContentReply::abort();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnAbort(QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_Abort_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_Abort_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceContentReply_Event(QPlaceContentReply* self, QEvent* event) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        return vqplacecontentreply->event(event);
    } else {
        return self->QPlaceContentReply::event(event);
    }
}

// Base class handler implementation
bool QPlaceContentReply_SuperEvent(QPlaceContentReply* self, QEvent* event) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_Event_IsBase(true);
        return vqplacecontentreply->event(event);
    } else {
        return self->QPlaceContentReply::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnEvent(QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_Event_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceContentReply_EventFilter(QPlaceContentReply* self, QObject* watched, QEvent* event) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        return vqplacecontentreply->eventFilter(watched, event);
    } else {
        return self->QPlaceContentReply::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPlaceContentReply_SuperEventFilter(QPlaceContentReply* self, QObject* watched, QEvent* event) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_EventFilter_IsBase(true);
        return vqplacecontentreply->eventFilter(watched, event);
    } else {
        return self->QPlaceContentReply::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnEventFilter(QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_EventFilter_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceContentReply_TimerEvent(QPlaceContentReply* self, QTimerEvent* event) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->timerEvent(event);
    } else {
        ((VirtualQPlaceContentReply*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPlaceContentReply_SuperTimerEvent(QPlaceContentReply* self, QTimerEvent* event) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_TimerEvent_IsBase(true);
        vqplacecontentreply->timerEvent(event);
    } else {
        ((VirtualQPlaceContentReply*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnTimerEvent(QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_TimerEvent_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceContentReply_ChildEvent(QPlaceContentReply* self, QChildEvent* event) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->childEvent(event);
    } else {
        ((VirtualQPlaceContentReply*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPlaceContentReply_SuperChildEvent(QPlaceContentReply* self, QChildEvent* event) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_ChildEvent_IsBase(true);
        vqplacecontentreply->childEvent(event);
    } else {
        ((VirtualQPlaceContentReply*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnChildEvent(QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_ChildEvent_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceContentReply_CustomEvent(QPlaceContentReply* self, QEvent* event) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->customEvent(event);
    } else {
        ((VirtualQPlaceContentReply*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPlaceContentReply_SuperCustomEvent(QPlaceContentReply* self, QEvent* event) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_CustomEvent_IsBase(true);
        vqplacecontentreply->customEvent(event);
    } else {
        ((VirtualQPlaceContentReply*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnCustomEvent(QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_CustomEvent_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceContentReply_ConnectNotify(QPlaceContentReply* self, const QMetaMethod* signal) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->connectNotify(*signal);
    } else {
        ((VirtualQPlaceContentReply*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPlaceContentReply_SuperConnectNotify(QPlaceContentReply* self, const QMetaMethod* signal) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_ConnectNotify_IsBase(true);
        vqplacecontentreply->connectNotify(*signal);
    } else {
        ((VirtualQPlaceContentReply*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnConnectNotify(QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_ConnectNotify_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceContentReply_DisconnectNotify(QPlaceContentReply* self, const QMetaMethod* signal) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->disconnectNotify(*signal);
    } else {
        ((VirtualQPlaceContentReply*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPlaceContentReply_SuperDisconnectNotify(QPlaceContentReply* self, const QMetaMethod* signal) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_DisconnectNotify_IsBase(true);
        vqplacecontentreply->disconnectNotify(*signal);
    } else {
        ((VirtualQPlaceContentReply*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnDisconnectNotify(QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_DisconnectNotify_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceContentReply_SetContent(QPlaceContentReply* self, const libqt_map /* of int to QPlaceContent* */ content) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    QMap<int, QPlaceContent> content_QMap;
    int* content_karr = static_cast<int*>(content.keys);
    QPlaceContent** content_varr = static_cast<QPlaceContent**>(content.values);
    for (size_t i = 0; i < content.len; ++i) {
        content_QMap[static_cast<int>(content_karr[i])] = *(content_varr[i]);
    }
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setContent(content_QMap);
    } else {
        ((VirtualQPlaceContentReply*)self)->setContent(content_QMap);
    }
}

// Base class handler implementation
void QPlaceContentReply_SuperSetContent(QPlaceContentReply* self, const libqt_map /* of int to QPlaceContent* */ content) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    QMap<int, QPlaceContent> content_QMap;
    int* content_karr = static_cast<int*>(content.keys);
    QPlaceContent** content_varr = static_cast<QPlaceContent**>(content.values);
    for (size_t i = 0; i < content.len; ++i) {
        content_QMap[static_cast<int>(content_karr[i])] = *(content_varr[i]);
    }
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_SetContent_IsBase(true);
        vqplacecontentreply->setContent(content_QMap);
    } else {
        ((VirtualQPlaceContentReply*)self)->setContent(content_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnSetContent(QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_SetContent_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_SetContent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceContentReply_SetTotalCount(QPlaceContentReply* self, int total) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setTotalCount(static_cast<int>(total));
    } else {
        ((VirtualQPlaceContentReply*)self)->setTotalCount(static_cast<int>(total));
    }
}

// Base class handler implementation
void QPlaceContentReply_SuperSetTotalCount(QPlaceContentReply* self, int total) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_SetTotalCount_IsBase(true);
        vqplacecontentreply->setTotalCount(static_cast<int>(total));
    } else {
        ((VirtualQPlaceContentReply*)self)->setTotalCount(static_cast<int>(total));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnSetTotalCount(QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_SetTotalCount_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_SetTotalCount_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceContentReply_SetRequest(QPlaceContentReply* self, const QPlaceContentRequest* request) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setRequest(*request);
    } else {
        ((VirtualQPlaceContentReply*)self)->setRequest(*request);
    }
}

// Base class handler implementation
void QPlaceContentReply_SuperSetRequest(QPlaceContentReply* self, const QPlaceContentRequest* request) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_SetRequest_IsBase(true);
        vqplacecontentreply->setRequest(*request);
    } else {
        ((VirtualQPlaceContentReply*)self)->setRequest(*request);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnSetRequest(QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_SetRequest_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_SetRequest_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceContentReply_SetPreviousPageRequest(QPlaceContentReply* self, const QPlaceContentRequest* previous) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setPreviousPageRequest(*previous);
    } else {
        ((VirtualQPlaceContentReply*)self)->setPreviousPageRequest(*previous);
    }
}

// Base class handler implementation
void QPlaceContentReply_SuperSetPreviousPageRequest(QPlaceContentReply* self, const QPlaceContentRequest* previous) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_SetPreviousPageRequest_IsBase(true);
        vqplacecontentreply->setPreviousPageRequest(*previous);
    } else {
        ((VirtualQPlaceContentReply*)self)->setPreviousPageRequest(*previous);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnSetPreviousPageRequest(QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_SetPreviousPageRequest_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_SetPreviousPageRequest_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceContentReply_SetNextPageRequest(QPlaceContentReply* self, const QPlaceContentRequest* next) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setNextPageRequest(*next);
    } else {
        ((VirtualQPlaceContentReply*)self)->setNextPageRequest(*next);
    }
}

// Base class handler implementation
void QPlaceContentReply_SuperSetNextPageRequest(QPlaceContentReply* self, const QPlaceContentRequest* next) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_SetNextPageRequest_IsBase(true);
        vqplacecontentreply->setNextPageRequest(*next);
    } else {
        ((VirtualQPlaceContentReply*)self)->setNextPageRequest(*next);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnSetNextPageRequest(QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_SetNextPageRequest_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_SetNextPageRequest_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceContentReply_SetFinished(QPlaceContentReply* self, bool finished) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setFinished(finished);
    } else {
        ((VirtualQPlaceContentReply*)self)->setFinished(finished);
    }
}

// Base class handler implementation
void QPlaceContentReply_SuperSetFinished(QPlaceContentReply* self, bool finished) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_SetFinished_IsBase(true);
        vqplacecontentreply->setFinished(finished);
    } else {
        ((VirtualQPlaceContentReply*)self)->setFinished(finished);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnSetFinished(QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_SetFinished_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_SetFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceContentReply_SetError(QPlaceContentReply* self, int errorVal, const libqt_string errorString) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else {
        ((VirtualQPlaceContentReply*)self)->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    }
}

// Base class handler implementation
void QPlaceContentReply_SuperSetError(QPlaceContentReply* self, int errorVal, const libqt_string errorString) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_SetError_IsBase(true);
        vqplacecontentreply->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else {
        ((VirtualQPlaceContentReply*)self)->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnSetError(QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = dynamic_cast<VirtualQPlaceContentReply*>(self);
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_SetError_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPlaceContentReply_Sender(const QPlaceContentReply* self) {
    auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self));
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        return vqplacecontentreply->sender();
    } else {
        return ((VirtualQPlaceContentReply*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPlaceContentReply_SuperSender(const QPlaceContentReply* self) {
    auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self));
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_Sender_IsBase(true);
        return vqplacecontentreply->sender();
    } else {
        return ((VirtualQPlaceContentReply*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnSender(const QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self));
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_Sender_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlaceContentReply_SenderSignalIndex(const QPlaceContentReply* self) {
    auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self));
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        return vqplacecontentreply->senderSignalIndex();
    } else {
        return ((VirtualQPlaceContentReply*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPlaceContentReply_SuperSenderSignalIndex(const QPlaceContentReply* self) {
    auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self));
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_SenderSignalIndex_IsBase(true);
        return vqplacecontentreply->senderSignalIndex();
    } else {
        return ((VirtualQPlaceContentReply*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnSenderSignalIndex(const QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self));
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlaceContentReply_Receivers(const QPlaceContentReply* self, const char* signal) {
    auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self));
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        return vqplacecontentreply->receivers(signal);
    } else {
        return ((VirtualQPlaceContentReply*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPlaceContentReply_SuperReceivers(const QPlaceContentReply* self, const char* signal) {
    auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self));
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_Receivers_IsBase(true);
        return vqplacecontentreply->receivers(signal);
    } else {
        return ((VirtualQPlaceContentReply*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnReceivers(const QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self));
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_Receivers_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceContentReply_IsSignalConnected(const QPlaceContentReply* self, const QMetaMethod* signal) {
    auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self));
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        return vqplacecontentreply->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlaceContentReply*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPlaceContentReply_SuperIsSignalConnected(const QPlaceContentReply* self, const QMetaMethod* signal) {
    auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self));
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_IsSignalConnected_IsBase(true);
        return vqplacecontentreply->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlaceContentReply*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceContentReply_OnIsSignalConnected(const QPlaceContentReply* self, intptr_t slot) {
    auto* vqplacecontentreply = const_cast<VirtualQPlaceContentReply*>(dynamic_cast<const VirtualQPlaceContentReply*>(self));
    if (vqplacecontentreply && vqplacecontentreply->isVirtualQPlaceContentReply) {
        vqplacecontentreply->setQPlaceContentReply_IsSignalConnected_Callback(reinterpret_cast<VirtualQPlaceContentReply::QPlaceContentReply_IsSignalConnected_Callback>(slot));
    }
}

void QPlaceContentReply_Delete(QPlaceContentReply* self) {
    delete self;
}
