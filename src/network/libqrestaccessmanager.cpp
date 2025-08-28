#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHttpMultiPart>
#include <QIODevice>
#include <QJsonDocument>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QObject>
#include <QRestAccessManager>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qrestaccessmanager.h>
#include "libqrestaccessmanager.h"
#include "libqrestaccessmanager.hxx"

QRestAccessManager* QRestAccessManager_new(QNetworkAccessManager* manager) {
    return new VirtualQRestAccessManager(manager);
}

QRestAccessManager* QRestAccessManager_new2(QNetworkAccessManager* manager, QObject* parent) {
    return new VirtualQRestAccessManager(manager, parent);
}

QMetaObject* QRestAccessManager_MetaObject(const QRestAccessManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* QRestAccessManager_Metacast(QRestAccessManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QRestAccessManager_Metacall(QRestAccessManager* self, int param1, int param2, void** param3) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQRestAccessManager*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QRestAccessManager_Tr(const char* s) {
    QString _ret = QRestAccessManager::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QNetworkAccessManager* QRestAccessManager_NetworkAccessManager(const QRestAccessManager* self) {
    return self->networkAccessManager();
}

QNetworkReply* QRestAccessManager_DeleteResource(QRestAccessManager* self, const QNetworkRequest* request) {
    return self->deleteResource(*request);
}

QNetworkReply* QRestAccessManager_Head(QRestAccessManager* self, const QNetworkRequest* request) {
    return self->head(*request);
}

QNetworkReply* QRestAccessManager_Get(QRestAccessManager* self, const QNetworkRequest* request) {
    return self->get(*request);
}

QNetworkReply* QRestAccessManager_Get2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return self->get(*request, data_QByteArray);
}

QNetworkReply* QRestAccessManager_Get3(QRestAccessManager* self, const QNetworkRequest* request, const QJsonDocument* data) {
    return self->get(*request, *data);
}

QNetworkReply* QRestAccessManager_Get4(QRestAccessManager* self, const QNetworkRequest* request, QIODevice* data) {
    return self->get(*request, data);
}

QNetworkReply* QRestAccessManager_Post(QRestAccessManager* self, const QNetworkRequest* request, const QJsonDocument* data) {
    return self->post(*request, *data);
}

QNetworkReply* QRestAccessManager_Post2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_map /* of libqt_string to QVariant* */ data) {
    QMap<QString, QVariant> data_QMap;
    libqt_string* data_karr = static_cast<libqt_string*>(data.keys);
    QVariant** data_varr = static_cast<QVariant**>(data.values);
    for (size_t i = 0; i < data.len; ++i) {
        QString data_karr_i_QString = QString::fromUtf8(data_karr[i].data, data_karr[i].len);
        data_QMap[data_karr_i_QString] = *(data_varr[i]);
    }
    return self->post(*request, data_QMap);
}

QNetworkReply* QRestAccessManager_Post3(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return self->post(*request, data_QByteArray);
}

QNetworkReply* QRestAccessManager_Post4(QRestAccessManager* self, const QNetworkRequest* request, QHttpMultiPart* data) {
    return self->post(*request, data);
}

QNetworkReply* QRestAccessManager_Post5(QRestAccessManager* self, const QNetworkRequest* request, QIODevice* data) {
    return self->post(*request, data);
}

QNetworkReply* QRestAccessManager_Put(QRestAccessManager* self, const QNetworkRequest* request, const QJsonDocument* data) {
    return self->put(*request, *data);
}

QNetworkReply* QRestAccessManager_Put2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_map /* of libqt_string to QVariant* */ data) {
    QMap<QString, QVariant> data_QMap;
    libqt_string* data_karr = static_cast<libqt_string*>(data.keys);
    QVariant** data_varr = static_cast<QVariant**>(data.values);
    for (size_t i = 0; i < data.len; ++i) {
        QString data_karr_i_QString = QString::fromUtf8(data_karr[i].data, data_karr[i].len);
        data_QMap[data_karr_i_QString] = *(data_varr[i]);
    }
    return self->put(*request, data_QMap);
}

QNetworkReply* QRestAccessManager_Put3(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return self->put(*request, data_QByteArray);
}

QNetworkReply* QRestAccessManager_Put4(QRestAccessManager* self, const QNetworkRequest* request, QHttpMultiPart* data) {
    return self->put(*request, data);
}

QNetworkReply* QRestAccessManager_Put5(QRestAccessManager* self, const QNetworkRequest* request, QIODevice* data) {
    return self->put(*request, data);
}

QNetworkReply* QRestAccessManager_Patch(QRestAccessManager* self, const QNetworkRequest* request, const QJsonDocument* data) {
    return self->patch(*request, *data);
}

QNetworkReply* QRestAccessManager_Patch2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_map /* of libqt_string to QVariant* */ data) {
    QMap<QString, QVariant> data_QMap;
    libqt_string* data_karr = static_cast<libqt_string*>(data.keys);
    QVariant** data_varr = static_cast<QVariant**>(data.values);
    for (size_t i = 0; i < data.len; ++i) {
        QString data_karr_i_QString = QString::fromUtf8(data_karr[i].data, data_karr[i].len);
        data_QMap[data_karr_i_QString] = *(data_varr[i]);
    }
    return self->patch(*request, data_QMap);
}

QNetworkReply* QRestAccessManager_Patch3(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return self->patch(*request, data_QByteArray);
}

QNetworkReply* QRestAccessManager_Patch4(QRestAccessManager* self, const QNetworkRequest* request, QIODevice* data) {
    return self->patch(*request, data);
}

QNetworkReply* QRestAccessManager_SendCustomRequest(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string method, const libqt_string data) {
    QByteArray method_QByteArray(method.data, method.len);
    QByteArray data_QByteArray(data.data, data.len);
    return self->sendCustomRequest(*request, method_QByteArray, data_QByteArray);
}

QNetworkReply* QRestAccessManager_SendCustomRequest2(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string method, QIODevice* data) {
    QByteArray method_QByteArray(method.data, method.len);
    return self->sendCustomRequest(*request, method_QByteArray, data);
}

QNetworkReply* QRestAccessManager_SendCustomRequest3(QRestAccessManager* self, const QNetworkRequest* request, const libqt_string method, QHttpMultiPart* data) {
    QByteArray method_QByteArray(method.data, method.len);
    return self->sendCustomRequest(*request, method_QByteArray, data);
}

libqt_string QRestAccessManager_Tr2(const char* s, const char* c) {
    QString _ret = QRestAccessManager::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QRestAccessManager_Tr3(const char* s, const char* c, int n) {
    QString _ret = QRestAccessManager::tr(s, c, static_cast<int>(n));
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
int QRestAccessManager_QBaseMetacall(QRestAccessManager* self, int param1, int param2, void** param3) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_Metacall_IsBase(true);
        return vqrestaccessmanager->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QRestAccessManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnMetacall(QRestAccessManager* self, intptr_t slot) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_Metacall_Callback(reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRestAccessManager_Event(QRestAccessManager* self, QEvent* event) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        return vqrestaccessmanager->event(event);
    } else {
        return self->QRestAccessManager::event(event);
    }
}

// Base class handler implementation
bool QRestAccessManager_QBaseEvent(QRestAccessManager* self, QEvent* event) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_Event_IsBase(true);
        return vqrestaccessmanager->event(event);
    } else {
        return self->QRestAccessManager::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnEvent(QRestAccessManager* self, intptr_t slot) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_Event_Callback(reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRestAccessManager_EventFilter(QRestAccessManager* self, QObject* watched, QEvent* event) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        return vqrestaccessmanager->eventFilter(watched, event);
    } else {
        return self->QRestAccessManager::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QRestAccessManager_QBaseEventFilter(QRestAccessManager* self, QObject* watched, QEvent* event) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_EventFilter_IsBase(true);
        return vqrestaccessmanager->eventFilter(watched, event);
    } else {
        return self->QRestAccessManager::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnEventFilter(QRestAccessManager* self, intptr_t slot) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_EventFilter_Callback(reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QRestAccessManager_TimerEvent(QRestAccessManager* self, QTimerEvent* event) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->timerEvent(event);
    } else {
        ((VirtualQRestAccessManager*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QRestAccessManager_QBaseTimerEvent(QRestAccessManager* self, QTimerEvent* event) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_TimerEvent_IsBase(true);
        vqrestaccessmanager->timerEvent(event);
    } else {
        ((VirtualQRestAccessManager*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnTimerEvent(QRestAccessManager* self, intptr_t slot) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_TimerEvent_Callback(reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRestAccessManager_ChildEvent(QRestAccessManager* self, QChildEvent* event) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->childEvent(event);
    } else {
        ((VirtualQRestAccessManager*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QRestAccessManager_QBaseChildEvent(QRestAccessManager* self, QChildEvent* event) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_ChildEvent_IsBase(true);
        vqrestaccessmanager->childEvent(event);
    } else {
        ((VirtualQRestAccessManager*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnChildEvent(QRestAccessManager* self, intptr_t slot) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_ChildEvent_Callback(reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRestAccessManager_CustomEvent(QRestAccessManager* self, QEvent* event) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->customEvent(event);
    } else {
        ((VirtualQRestAccessManager*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QRestAccessManager_QBaseCustomEvent(QRestAccessManager* self, QEvent* event) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_CustomEvent_IsBase(true);
        vqrestaccessmanager->customEvent(event);
    } else {
        ((VirtualQRestAccessManager*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnCustomEvent(QRestAccessManager* self, intptr_t slot) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_CustomEvent_Callback(reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRestAccessManager_ConnectNotify(QRestAccessManager* self, const QMetaMethod* signal) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->connectNotify(*signal);
    } else {
        ((VirtualQRestAccessManager*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QRestAccessManager_QBaseConnectNotify(QRestAccessManager* self, const QMetaMethod* signal) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_ConnectNotify_IsBase(true);
        vqrestaccessmanager->connectNotify(*signal);
    } else {
        ((VirtualQRestAccessManager*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnConnectNotify(QRestAccessManager* self, intptr_t slot) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_ConnectNotify_Callback(reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QRestAccessManager_DisconnectNotify(QRestAccessManager* self, const QMetaMethod* signal) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->disconnectNotify(*signal);
    } else {
        ((VirtualQRestAccessManager*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QRestAccessManager_QBaseDisconnectNotify(QRestAccessManager* self, const QMetaMethod* signal) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_DisconnectNotify_IsBase(true);
        vqrestaccessmanager->disconnectNotify(*signal);
    } else {
        ((VirtualQRestAccessManager*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnDisconnectNotify(QRestAccessManager* self, intptr_t slot) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_DisconnectNotify_Callback(reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QRestAccessManager_Sender(const QRestAccessManager* self) {
    auto* vqrestaccessmanager = const_cast<VirtualQRestAccessManager*>(dynamic_cast<const VirtualQRestAccessManager*>(self));
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        return vqrestaccessmanager->sender();
    } else {
        return ((VirtualQRestAccessManager*)self)->sender();
    }
}

// Base class handler implementation
QObject* QRestAccessManager_QBaseSender(const QRestAccessManager* self) {
    auto* vqrestaccessmanager = const_cast<VirtualQRestAccessManager*>(dynamic_cast<const VirtualQRestAccessManager*>(self));
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_Sender_IsBase(true);
        return vqrestaccessmanager->sender();
    } else {
        return ((VirtualQRestAccessManager*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnSender(const QRestAccessManager* self, intptr_t slot) {
    auto* vqrestaccessmanager = const_cast<VirtualQRestAccessManager*>(dynamic_cast<const VirtualQRestAccessManager*>(self));
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_Sender_Callback(reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QRestAccessManager_SenderSignalIndex(const QRestAccessManager* self) {
    auto* vqrestaccessmanager = const_cast<VirtualQRestAccessManager*>(dynamic_cast<const VirtualQRestAccessManager*>(self));
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        return vqrestaccessmanager->senderSignalIndex();
    } else {
        return ((VirtualQRestAccessManager*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QRestAccessManager_QBaseSenderSignalIndex(const QRestAccessManager* self) {
    auto* vqrestaccessmanager = const_cast<VirtualQRestAccessManager*>(dynamic_cast<const VirtualQRestAccessManager*>(self));
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_SenderSignalIndex_IsBase(true);
        return vqrestaccessmanager->senderSignalIndex();
    } else {
        return ((VirtualQRestAccessManager*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnSenderSignalIndex(const QRestAccessManager* self, intptr_t slot) {
    auto* vqrestaccessmanager = const_cast<VirtualQRestAccessManager*>(dynamic_cast<const VirtualQRestAccessManager*>(self));
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_SenderSignalIndex_Callback(reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QRestAccessManager_Receivers(const QRestAccessManager* self, const char* signal) {
    auto* vqrestaccessmanager = const_cast<VirtualQRestAccessManager*>(dynamic_cast<const VirtualQRestAccessManager*>(self));
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        return vqrestaccessmanager->receivers(signal);
    } else {
        return ((VirtualQRestAccessManager*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QRestAccessManager_QBaseReceivers(const QRestAccessManager* self, const char* signal) {
    auto* vqrestaccessmanager = const_cast<VirtualQRestAccessManager*>(dynamic_cast<const VirtualQRestAccessManager*>(self));
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_Receivers_IsBase(true);
        return vqrestaccessmanager->receivers(signal);
    } else {
        return ((VirtualQRestAccessManager*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnReceivers(const QRestAccessManager* self, intptr_t slot) {
    auto* vqrestaccessmanager = const_cast<VirtualQRestAccessManager*>(dynamic_cast<const VirtualQRestAccessManager*>(self));
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_Receivers_Callback(reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRestAccessManager_IsSignalConnected(const QRestAccessManager* self, const QMetaMethod* signal) {
    auto* vqrestaccessmanager = const_cast<VirtualQRestAccessManager*>(dynamic_cast<const VirtualQRestAccessManager*>(self));
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        return vqrestaccessmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualQRestAccessManager*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QRestAccessManager_QBaseIsSignalConnected(const QRestAccessManager* self, const QMetaMethod* signal) {
    auto* vqrestaccessmanager = const_cast<VirtualQRestAccessManager*>(dynamic_cast<const VirtualQRestAccessManager*>(self));
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_IsSignalConnected_IsBase(true);
        return vqrestaccessmanager->isSignalConnected(*signal);
    } else {
        return ((VirtualQRestAccessManager*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnIsSignalConnected(const QRestAccessManager* self, intptr_t slot) {
    auto* vqrestaccessmanager = const_cast<VirtualQRestAccessManager*>(dynamic_cast<const VirtualQRestAccessManager*>(self));
    if (vqrestaccessmanager && vqrestaccessmanager->isVirtualQRestAccessManager) {
        vqrestaccessmanager->setQRestAccessManager_IsSignalConnected_Callback(reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_IsSignalConnected_Callback>(slot));
    }
}

void QRestAccessManager_Delete(QRestAccessManager* self) {
    delete self;
}
