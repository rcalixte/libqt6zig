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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QRestAccessManager_Tr(const char* s) {
    auto _ret = QRestAccessManager::tr(s);
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
        data_QMap.insert(data_karr_i_QString, *(data_varr[i]));
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
        data_QMap.insert(data_karr_i_QString, *(data_varr[i]));
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
        data_QMap.insert(data_karr_i_QString, *(data_varr[i]));
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
    auto _ret = QRestAccessManager::tr(s, c);
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
    auto _ret = QRestAccessManager::tr(s, c, static_cast<int>(n));
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
QMetaObject* QRestAccessManager_SuperMetaObject(const QRestAccessManager* self) {
    return (QMetaObject*)self->QRestAccessManager::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnMetaObject(QRestAccessManager* self, intptr_t slot) {
    if (auto* vqrestaccessmanager = const_cast<VirtualQRestAccessManager*>(dynamic_cast<const VirtualQRestAccessManager*>(self)))
        vqrestaccessmanager->qrestaccessmanager_metaobject_callback = reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QRestAccessManager_SuperMetacast(QRestAccessManager* self, const char* param1) {
    return self->QRestAccessManager::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnMetacast(QRestAccessManager* self, intptr_t slot) {
    if (auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self))
        vqrestaccessmanager->qrestaccessmanager_metacast_callback = reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_Metacast_Callback>(slot);
}

// Base class handler implementation
int QRestAccessManager_SuperMetacall(QRestAccessManager* self, int param1, int param2, void** param3) {
    return self->QRestAccessManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnMetacall(QRestAccessManager* self, intptr_t slot) {
    if (auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self))
        vqrestaccessmanager->qrestaccessmanager_metacall_callback = reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QRestAccessManager_Event(QRestAccessManager* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QRestAccessManager_SuperEvent(QRestAccessManager* self, QEvent* event) {
    return self->QRestAccessManager::event(event);
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnEvent(QRestAccessManager* self, intptr_t slot) {
    if (auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self))
        vqrestaccessmanager->qrestaccessmanager_event_callback = reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_Event_Callback>(slot);
}

// Derived class handler implementation
bool QRestAccessManager_EventFilter(QRestAccessManager* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QRestAccessManager_SuperEventFilter(QRestAccessManager* self, QObject* watched, QEvent* event) {
    return self->QRestAccessManager::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnEventFilter(QRestAccessManager* self, intptr_t slot) {
    if (auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self))
        vqrestaccessmanager->qrestaccessmanager_eventfilter_callback = reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QRestAccessManager_TimerEvent(QRestAccessManager* self, QTimerEvent* event) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager) {
        vqrestaccessmanager->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRestAccessManager::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRestAccessManager_SuperTimerEvent(QRestAccessManager* self, QTimerEvent* event) {
    if (auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self)) {
        vqrestaccessmanager->QRestAccessManager::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QRestAccessManager::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnTimerEvent(QRestAccessManager* self, intptr_t slot) {
    if (auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self))
        vqrestaccessmanager->qrestaccessmanager_timerevent_callback = reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QRestAccessManager_ChildEvent(QRestAccessManager* self, QChildEvent* event) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager) {
        vqrestaccessmanager->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRestAccessManager::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRestAccessManager_SuperChildEvent(QRestAccessManager* self, QChildEvent* event) {
    if (auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self)) {
        vqrestaccessmanager->QRestAccessManager::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QRestAccessManager::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnChildEvent(QRestAccessManager* self, intptr_t slot) {
    if (auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self))
        vqrestaccessmanager->qrestaccessmanager_childevent_callback = reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QRestAccessManager_CustomEvent(QRestAccessManager* self, QEvent* event) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager) {
        vqrestaccessmanager->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QRestAccessManager::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QRestAccessManager_SuperCustomEvent(QRestAccessManager* self, QEvent* event) {
    if (auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self)) {
        vqrestaccessmanager->QRestAccessManager::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QRestAccessManager::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnCustomEvent(QRestAccessManager* self, intptr_t slot) {
    if (auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self))
        vqrestaccessmanager->qrestaccessmanager_customevent_callback = reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QRestAccessManager_ConnectNotify(QRestAccessManager* self, const QMetaMethod* signal) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager) {
        vqrestaccessmanager->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QRestAccessManager::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QRestAccessManager_SuperConnectNotify(QRestAccessManager* self, const QMetaMethod* signal) {
    if (auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self)) {
        vqrestaccessmanager->QRestAccessManager::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QRestAccessManager::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnConnectNotify(QRestAccessManager* self, intptr_t slot) {
    if (auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self))
        vqrestaccessmanager->qrestaccessmanager_connectnotify_callback = reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QRestAccessManager_DisconnectNotify(QRestAccessManager* self, const QMetaMethod* signal) {
    auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self);
    if (vqrestaccessmanager) {
        vqrestaccessmanager->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QRestAccessManager::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QRestAccessManager_SuperDisconnectNotify(QRestAccessManager* self, const QMetaMethod* signal) {
    if (auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self)) {
        vqrestaccessmanager->QRestAccessManager::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QRestAccessManager::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QRestAccessManager_OnDisconnectNotify(QRestAccessManager* self, intptr_t slot) {
    if (auto* vqrestaccessmanager = dynamic_cast<VirtualQRestAccessManager*>(self))
        vqrestaccessmanager->qrestaccessmanager_disconnectnotify_callback = reinterpret_cast<VirtualQRestAccessManager::QRestAccessManager_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QRestAccessManager_Sender(const QRestAccessManager* self) {
    if (auto* vqrestaccessmanager = const_cast<VirtualQRestAccessManager*>(dynamic_cast<const VirtualQRestAccessManager*>(self))) {
        return vqrestaccessmanager->VirtualQRestAccessManager::sender();
    } else
        qFatal("Error: Protected method QRestAccessManager::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QRestAccessManager_SenderSignalIndex(const QRestAccessManager* self) {
    if (auto* vqrestaccessmanager = const_cast<VirtualQRestAccessManager*>(dynamic_cast<const VirtualQRestAccessManager*>(self))) {
        return vqrestaccessmanager->VirtualQRestAccessManager::senderSignalIndex();
    } else
        qFatal("Error: Protected method QRestAccessManager::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QRestAccessManager_Receivers(const QRestAccessManager* self, const char* signal) {
    if (auto* vqrestaccessmanager = const_cast<VirtualQRestAccessManager*>(dynamic_cast<const VirtualQRestAccessManager*>(self))) {
        return vqrestaccessmanager->VirtualQRestAccessManager::receivers(signal);
    } else
        qFatal("Error: Protected method QRestAccessManager::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QRestAccessManager_IsSignalConnected(const QRestAccessManager* self, const QMetaMethod* signal) {
    if (auto* vqrestaccessmanager = const_cast<VirtualQRestAccessManager*>(dynamic_cast<const VirtualQRestAccessManager*>(self))) {
        return vqrestaccessmanager->VirtualQRestAccessManager::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QRestAccessManager::isSignalConnected called without a directly constructed type");
}

void QRestAccessManager_Delete(QRestAccessManager* self) {
    delete self;
}
