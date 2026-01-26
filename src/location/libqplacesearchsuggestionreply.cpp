#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlaceReply>
#include <QPlaceSearchSuggestionReply>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qplacesearchsuggestionreply.h>
#include "libqplacesearchsuggestionreply.h"
#include "libqplacesearchsuggestionreply.hxx"

QPlaceSearchSuggestionReply* QPlaceSearchSuggestionReply_new() {
    return new VirtualQPlaceSearchSuggestionReply();
}

QPlaceSearchSuggestionReply* QPlaceSearchSuggestionReply_new2(QObject* parent) {
    return new VirtualQPlaceSearchSuggestionReply(parent);
}

QMetaObject* QPlaceSearchSuggestionReply_MetaObject(const QPlaceSearchSuggestionReply* self) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQPlaceSearchSuggestionReply*)self)->metaObject();
    }
}

void* QPlaceSearchSuggestionReply_Metacast(QPlaceSearchSuggestionReply* self, const char* param1) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQPlaceSearchSuggestionReply*)self)->qt_metacast(param1);
    }
}

int QPlaceSearchSuggestionReply_Metacall(QPlaceSearchSuggestionReply* self, int param1, int param2, void** param3) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPlaceSearchSuggestionReply*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_list /* of libqt_string */ QPlaceSearchSuggestionReply_Suggestions(const QPlaceSearchSuggestionReply* self) {
    QList<QString> _ret = self->suggestions();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QPlaceSearchSuggestionReply_Type(const QPlaceSearchSuggestionReply* self) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        return static_cast<int>(self->type());
    } else {
        return static_cast<int>(((VirtualQPlaceSearchSuggestionReply*)self)->type());
    }
}

// Base class handler implementation
QMetaObject* QPlaceSearchSuggestionReply_QBaseMetaObject(const QPlaceSearchSuggestionReply* self) {
    auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self));
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_MetaObject_IsBase(true);
        return (QMetaObject*)vqplacesearchsuggestionreply->metaObject();
    } else {
        return (QMetaObject*)self->QPlaceSearchSuggestionReply::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnMetaObject(const QPlaceSearchSuggestionReply* self, intptr_t slot) {
    auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self));
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_MetaObject_Callback(reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QPlaceSearchSuggestionReply_QBaseMetacast(QPlaceSearchSuggestionReply* self, const char* param1) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_Metacast_IsBase(true);
        return vqplacesearchsuggestionreply->qt_metacast(param1);
    } else {
        return self->QPlaceSearchSuggestionReply::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnMetacast(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_Metacast_Callback(reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QPlaceSearchSuggestionReply_QBaseMetacall(QPlaceSearchSuggestionReply* self, int param1, int param2, void** param3) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_Metacall_IsBase(true);
        return vqplacesearchsuggestionreply->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QPlaceSearchSuggestionReply::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnMetacall(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_Metacall_Callback(reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QPlaceSearchSuggestionReply_QBaseType(const QPlaceSearchSuggestionReply* self) {
    auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self));
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_Type_IsBase(true);
        return static_cast<int>(vqplacesearchsuggestionreply->type());
    } else {
        return static_cast<int>(self->QPlaceSearchSuggestionReply::type());
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnType(const QPlaceSearchSuggestionReply* self, intptr_t slot) {
    auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self));
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_Type_Callback(reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchSuggestionReply_Abort(QPlaceSearchSuggestionReply* self) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->abort();
    } else {
        self->QPlaceSearchSuggestionReply::abort();
    }
}

// Base class handler implementation
void QPlaceSearchSuggestionReply_QBaseAbort(QPlaceSearchSuggestionReply* self) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_Abort_IsBase(true);
        vqplacesearchsuggestionreply->abort();
    } else {
        self->QPlaceSearchSuggestionReply::abort();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnAbort(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_Abort_Callback(reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_Abort_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceSearchSuggestionReply_Event(QPlaceSearchSuggestionReply* self, QEvent* event) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        return vqplacesearchsuggestionreply->event(event);
    } else {
        return self->QPlaceSearchSuggestionReply::event(event);
    }
}

// Base class handler implementation
bool QPlaceSearchSuggestionReply_QBaseEvent(QPlaceSearchSuggestionReply* self, QEvent* event) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_Event_IsBase(true);
        return vqplacesearchsuggestionreply->event(event);
    } else {
        return self->QPlaceSearchSuggestionReply::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnEvent(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_Event_Callback(reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceSearchSuggestionReply_EventFilter(QPlaceSearchSuggestionReply* self, QObject* watched, QEvent* event) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        return vqplacesearchsuggestionreply->eventFilter(watched, event);
    } else {
        return self->QPlaceSearchSuggestionReply::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPlaceSearchSuggestionReply_QBaseEventFilter(QPlaceSearchSuggestionReply* self, QObject* watched, QEvent* event) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_EventFilter_IsBase(true);
        return vqplacesearchsuggestionreply->eventFilter(watched, event);
    } else {
        return self->QPlaceSearchSuggestionReply::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnEventFilter(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_EventFilter_Callback(reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchSuggestionReply_TimerEvent(QPlaceSearchSuggestionReply* self, QTimerEvent* event) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->timerEvent(event);
    } else {
        ((VirtualQPlaceSearchSuggestionReply*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPlaceSearchSuggestionReply_QBaseTimerEvent(QPlaceSearchSuggestionReply* self, QTimerEvent* event) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_TimerEvent_IsBase(true);
        vqplacesearchsuggestionreply->timerEvent(event);
    } else {
        ((VirtualQPlaceSearchSuggestionReply*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnTimerEvent(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_TimerEvent_Callback(reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchSuggestionReply_ChildEvent(QPlaceSearchSuggestionReply* self, QChildEvent* event) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->childEvent(event);
    } else {
        ((VirtualQPlaceSearchSuggestionReply*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPlaceSearchSuggestionReply_QBaseChildEvent(QPlaceSearchSuggestionReply* self, QChildEvent* event) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_ChildEvent_IsBase(true);
        vqplacesearchsuggestionreply->childEvent(event);
    } else {
        ((VirtualQPlaceSearchSuggestionReply*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnChildEvent(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_ChildEvent_Callback(reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchSuggestionReply_CustomEvent(QPlaceSearchSuggestionReply* self, QEvent* event) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->customEvent(event);
    } else {
        ((VirtualQPlaceSearchSuggestionReply*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPlaceSearchSuggestionReply_QBaseCustomEvent(QPlaceSearchSuggestionReply* self, QEvent* event) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_CustomEvent_IsBase(true);
        vqplacesearchsuggestionreply->customEvent(event);
    } else {
        ((VirtualQPlaceSearchSuggestionReply*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnCustomEvent(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_CustomEvent_Callback(reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchSuggestionReply_ConnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->connectNotify(*signal);
    } else {
        ((VirtualQPlaceSearchSuggestionReply*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPlaceSearchSuggestionReply_QBaseConnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_ConnectNotify_IsBase(true);
        vqplacesearchsuggestionreply->connectNotify(*signal);
    } else {
        ((VirtualQPlaceSearchSuggestionReply*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnConnectNotify(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_ConnectNotify_Callback(reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchSuggestionReply_DisconnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->disconnectNotify(*signal);
    } else {
        ((VirtualQPlaceSearchSuggestionReply*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPlaceSearchSuggestionReply_QBaseDisconnectNotify(QPlaceSearchSuggestionReply* self, const QMetaMethod* signal) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_DisconnectNotify_IsBase(true);
        vqplacesearchsuggestionreply->disconnectNotify(*signal);
    } else {
        ((VirtualQPlaceSearchSuggestionReply*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnDisconnectNotify(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_DisconnectNotify_Callback(reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchSuggestionReply_SetSuggestions(QPlaceSearchSuggestionReply* self, const libqt_list /* of libqt_string */ suggestions) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    QList<QString> suggestions_QList;
    suggestions_QList.reserve(suggestions.len);
    libqt_string* suggestions_arr = static_cast<libqt_string*>(suggestions.data);
    for (size_t i = 0; i < suggestions.len; ++i) {
        QString suggestions_arr_i_QString = QString::fromUtf8(suggestions_arr[i].data, suggestions_arr[i].len);
        suggestions_QList.push_back(suggestions_arr_i_QString);
    }
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setSuggestions(suggestions_QList);
    } else {
        ((VirtualQPlaceSearchSuggestionReply*)self)->setSuggestions(suggestions_QList);
    }
}

// Base class handler implementation
void QPlaceSearchSuggestionReply_QBaseSetSuggestions(QPlaceSearchSuggestionReply* self, const libqt_list /* of libqt_string */ suggestions) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    QList<QString> suggestions_QList;
    suggestions_QList.reserve(suggestions.len);
    libqt_string* suggestions_arr = static_cast<libqt_string*>(suggestions.data);
    for (size_t i = 0; i < suggestions.len; ++i) {
        QString suggestions_arr_i_QString = QString::fromUtf8(suggestions_arr[i].data, suggestions_arr[i].len);
        suggestions_QList.push_back(suggestions_arr_i_QString);
    }
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_SetSuggestions_IsBase(true);
        vqplacesearchsuggestionreply->setSuggestions(suggestions_QList);
    } else {
        ((VirtualQPlaceSearchSuggestionReply*)self)->setSuggestions(suggestions_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnSetSuggestions(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_SetSuggestions_Callback(reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_SetSuggestions_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchSuggestionReply_SetFinished(QPlaceSearchSuggestionReply* self, bool finished) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setFinished(finished);
    } else {
        ((VirtualQPlaceSearchSuggestionReply*)self)->setFinished(finished);
    }
}

// Base class handler implementation
void QPlaceSearchSuggestionReply_QBaseSetFinished(QPlaceSearchSuggestionReply* self, bool finished) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_SetFinished_IsBase(true);
        vqplacesearchsuggestionreply->setFinished(finished);
    } else {
        ((VirtualQPlaceSearchSuggestionReply*)self)->setFinished(finished);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnSetFinished(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_SetFinished_Callback(reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_SetFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceSearchSuggestionReply_SetError(QPlaceSearchSuggestionReply* self, int errorVal, const libqt_string errorString) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else {
        ((VirtualQPlaceSearchSuggestionReply*)self)->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    }
}

// Base class handler implementation
void QPlaceSearchSuggestionReply_QBaseSetError(QPlaceSearchSuggestionReply* self, int errorVal, const libqt_string errorString) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_SetError_IsBase(true);
        vqplacesearchsuggestionreply->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    } else {
        ((VirtualQPlaceSearchSuggestionReply*)self)->setError(static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnSetError(QPlaceSearchSuggestionReply* self, intptr_t slot) {
    auto* vqplacesearchsuggestionreply = dynamic_cast<VirtualQPlaceSearchSuggestionReply*>(self);
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_SetError_Callback(reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPlaceSearchSuggestionReply_Sender(const QPlaceSearchSuggestionReply* self) {
    auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self));
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        return vqplacesearchsuggestionreply->sender();
    } else {
        return ((VirtualQPlaceSearchSuggestionReply*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPlaceSearchSuggestionReply_QBaseSender(const QPlaceSearchSuggestionReply* self) {
    auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self));
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_Sender_IsBase(true);
        return vqplacesearchsuggestionreply->sender();
    } else {
        return ((VirtualQPlaceSearchSuggestionReply*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnSender(const QPlaceSearchSuggestionReply* self, intptr_t slot) {
    auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self));
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_Sender_Callback(reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlaceSearchSuggestionReply_SenderSignalIndex(const QPlaceSearchSuggestionReply* self) {
    auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self));
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        return vqplacesearchsuggestionreply->senderSignalIndex();
    } else {
        return ((VirtualQPlaceSearchSuggestionReply*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPlaceSearchSuggestionReply_QBaseSenderSignalIndex(const QPlaceSearchSuggestionReply* self) {
    auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self));
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_SenderSignalIndex_IsBase(true);
        return vqplacesearchsuggestionreply->senderSignalIndex();
    } else {
        return ((VirtualQPlaceSearchSuggestionReply*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnSenderSignalIndex(const QPlaceSearchSuggestionReply* self, intptr_t slot) {
    auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self));
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlaceSearchSuggestionReply_Receivers(const QPlaceSearchSuggestionReply* self, const char* signal) {
    auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self));
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        return vqplacesearchsuggestionreply->receivers(signal);
    } else {
        return ((VirtualQPlaceSearchSuggestionReply*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPlaceSearchSuggestionReply_QBaseReceivers(const QPlaceSearchSuggestionReply* self, const char* signal) {
    auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self));
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_Receivers_IsBase(true);
        return vqplacesearchsuggestionreply->receivers(signal);
    } else {
        return ((VirtualQPlaceSearchSuggestionReply*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnReceivers(const QPlaceSearchSuggestionReply* self, intptr_t slot) {
    auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self));
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_Receivers_Callback(reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceSearchSuggestionReply_IsSignalConnected(const QPlaceSearchSuggestionReply* self, const QMetaMethod* signal) {
    auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self));
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        return vqplacesearchsuggestionreply->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlaceSearchSuggestionReply*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPlaceSearchSuggestionReply_QBaseIsSignalConnected(const QPlaceSearchSuggestionReply* self, const QMetaMethod* signal) {
    auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self));
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_IsSignalConnected_IsBase(true);
        return vqplacesearchsuggestionreply->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlaceSearchSuggestionReply*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceSearchSuggestionReply_OnIsSignalConnected(const QPlaceSearchSuggestionReply* self, intptr_t slot) {
    auto* vqplacesearchsuggestionreply = const_cast<VirtualQPlaceSearchSuggestionReply*>(dynamic_cast<const VirtualQPlaceSearchSuggestionReply*>(self));
    if (vqplacesearchsuggestionreply && vqplacesearchsuggestionreply->isVirtualQPlaceSearchSuggestionReply) {
        vqplacesearchsuggestionreply->setQPlaceSearchSuggestionReply_IsSignalConnected_Callback(reinterpret_cast<VirtualQPlaceSearchSuggestionReply::QPlaceSearchSuggestionReply_IsSignalConnected_Callback>(slot));
    }
}

void QPlaceSearchSuggestionReply_Delete(QPlaceSearchSuggestionReply* self) {
    delete self;
}
