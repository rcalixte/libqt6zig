#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QJSEngine>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlApplicationEngine>
#include <QQmlEngine>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <qqmlapplicationengine.h>
#include "libqqmlapplicationengine.h"
#include "libqqmlapplicationengine.hxx"

QQmlApplicationEngine* QQmlApplicationEngine_new() {
    return new VirtualQQmlApplicationEngine();
}

QQmlApplicationEngine* QQmlApplicationEngine_new2(const QUrl* url) {
    return new VirtualQQmlApplicationEngine(*url);
}

QQmlApplicationEngine* QQmlApplicationEngine_new3(libqt_string uri, libqt_string typeName) {
    return new VirtualQQmlApplicationEngine(QAnyStringView(uri.data, uri.len), QAnyStringView(typeName.data, typeName.len));
}

QQmlApplicationEngine* QQmlApplicationEngine_new4(const libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    return new VirtualQQmlApplicationEngine(filePath_QString);
}

QQmlApplicationEngine* QQmlApplicationEngine_new5(QObject* parent) {
    return new VirtualQQmlApplicationEngine(parent);
}

QQmlApplicationEngine* QQmlApplicationEngine_new6(const QUrl* url, QObject* parent) {
    return new VirtualQQmlApplicationEngine(*url, parent);
}

QQmlApplicationEngine* QQmlApplicationEngine_new7(libqt_string uri, libqt_string typeName, QObject* parent) {
    return new VirtualQQmlApplicationEngine(QAnyStringView(uri.data, uri.len), QAnyStringView(typeName.data, typeName.len), parent);
}

QQmlApplicationEngine* QQmlApplicationEngine_new8(const libqt_string filePath, QObject* parent) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    return new VirtualQQmlApplicationEngine(filePath_QString, parent);
}

QMetaObject* QQmlApplicationEngine_MetaObject(const QQmlApplicationEngine* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQmlApplicationEngine_Metacast(QQmlApplicationEngine* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQmlApplicationEngine_Metacall(QQmlApplicationEngine* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQmlApplicationEngine_Tr(const char* s) {
    auto _ret = QQmlApplicationEngine::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QObject* */ QQmlApplicationEngine_RootObjects(const QQmlApplicationEngine* self) {
    QList<QObject*> _ret = self->rootObjects();
    // Convert QList<> from C++ memory to manually-managed C memory
    QObject** _arr = static_cast<QObject**>(malloc(sizeof(QObject*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QQmlApplicationEngine_Load(QQmlApplicationEngine* self, const QUrl* url) {
    self->load(*url);
}

void QQmlApplicationEngine_Load2(QQmlApplicationEngine* self, const libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->load(filePath_QString);
}

void QQmlApplicationEngine_LoadFromModule(QQmlApplicationEngine* self, libqt_string uri, libqt_string typeName) {
    self->loadFromModule(QAnyStringView(uri.data, uri.len), QAnyStringView(typeName.data, typeName.len));
}

void QQmlApplicationEngine_SetInitialProperties(QQmlApplicationEngine* self, const libqt_map /* of libqt_string to QVariant* */ initialProperties) {
    QMap<QString, QVariant> initialProperties_QMap;
    libqt_string* initialProperties_karr = static_cast<libqt_string*>(initialProperties.keys);
    QVariant** initialProperties_varr = static_cast<QVariant**>(initialProperties.values);
    for (size_t i = 0; i < initialProperties.len; ++i) {
        QString initialProperties_karr_i_QString = QString::fromUtf8(initialProperties_karr[i].data, initialProperties_karr[i].len);
        initialProperties_QMap.insert(initialProperties_karr_i_QString, *(initialProperties_varr[i]));
    }
    self->setInitialProperties(initialProperties_QMap);
}

void QQmlApplicationEngine_SetExtraFileSelectors(QQmlApplicationEngine* self, const libqt_list /* of libqt_string */ extraFileSelectors) {
    QList<QString> extraFileSelectors_QList;
    extraFileSelectors_QList.reserve(extraFileSelectors.len);
    libqt_string* extraFileSelectors_arr = static_cast<libqt_string*>(extraFileSelectors.data);
    for (size_t i = 0; i < extraFileSelectors.len; ++i) {
        QString extraFileSelectors_arr_i_QString = QString::fromUtf8(extraFileSelectors_arr[i].data, extraFileSelectors_arr[i].len);
        extraFileSelectors_QList.push_back(extraFileSelectors_arr_i_QString);
    }
    self->setExtraFileSelectors(extraFileSelectors_QList);
}

void QQmlApplicationEngine_LoadData(QQmlApplicationEngine* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->loadData(data_QByteArray);
}

void QQmlApplicationEngine_ObjectCreated(QQmlApplicationEngine* self, QObject* object, const QUrl* url) {
    self->objectCreated(object, *url);
}

void QQmlApplicationEngine_Connect_ObjectCreated(QQmlApplicationEngine* self, intptr_t slot) {
    void (*slotFunc)(QQmlApplicationEngine*, QObject*, QUrl*) = reinterpret_cast<void (*)(QQmlApplicationEngine*, QObject*, QUrl*)>(slot);
    QQmlApplicationEngine::connect(self,
                                   static_cast<void (QQmlApplicationEngine::*)(QObject*, const QUrl&)>(&QQmlApplicationEngine::objectCreated),
                                   [self, slotFunc](QObject* object, const QUrl& url) {
                                       QObject* sigval1 = object;
                                       const QUrl& url_ret = url;
                                       // Cast returned reference into pointer
                                       QUrl* sigval2 = const_cast<QUrl*>(&url_ret);
                                       slotFunc(self, sigval1, sigval2);
                                   });
}

void QQmlApplicationEngine_ObjectCreationFailed(QQmlApplicationEngine* self, const QUrl* url) {
    self->objectCreationFailed(*url);
}

void QQmlApplicationEngine_Connect_ObjectCreationFailed(QQmlApplicationEngine* self, intptr_t slot) {
    void (*slotFunc)(QQmlApplicationEngine*, QUrl*) = reinterpret_cast<void (*)(QQmlApplicationEngine*, QUrl*)>(slot);
    QQmlApplicationEngine::connect(self,
                                   static_cast<void (QQmlApplicationEngine::*)(const QUrl&)>(&QQmlApplicationEngine::objectCreationFailed),
                                   [self, slotFunc](const QUrl& url) {
                                       const QUrl& url_ret = url;
                                       // Cast returned reference into pointer
                                       QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                                       slotFunc(self, sigval1);
                                   });
}

libqt_string QQmlApplicationEngine_Tr2(const char* s, const char* c) {
    auto _ret = QQmlApplicationEngine::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQmlApplicationEngine_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQmlApplicationEngine::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQmlApplicationEngine_LoadData2(QQmlApplicationEngine* self, const libqt_string data, const QUrl* url) {
    QByteArray data_QByteArray(data.data, data.len);
    self->loadData(data_QByteArray, *url);
}

// Base class handler implementation
QMetaObject* QQmlApplicationEngine_SuperMetaObject(const QQmlApplicationEngine* self) {
    return (QMetaObject*)self->QQmlApplicationEngine::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQmlApplicationEngine_OnMetaObject(QQmlApplicationEngine* self, intptr_t slot) {
    if (auto* vqqmlapplicationengine = const_cast<VirtualQQmlApplicationEngine*>(dynamic_cast<const VirtualQQmlApplicationEngine*>(self)))
        vqqmlapplicationengine->qqmlapplicationengine_metaobject_callback = reinterpret_cast<VirtualQQmlApplicationEngine::QQmlApplicationEngine_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQmlApplicationEngine_SuperMetacast(QQmlApplicationEngine* self, const char* param1) {
    return self->QQmlApplicationEngine::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQmlApplicationEngine_OnMetacast(QQmlApplicationEngine* self, intptr_t slot) {
    if (auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self))
        vqqmlapplicationengine->qqmlapplicationengine_metacast_callback = reinterpret_cast<VirtualQQmlApplicationEngine::QQmlApplicationEngine_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQmlApplicationEngine_SuperMetacall(QQmlApplicationEngine* self, int param1, int param2, void** param3) {
    return self->QQmlApplicationEngine::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQmlApplicationEngine_OnMetacall(QQmlApplicationEngine* self, intptr_t slot) {
    if (auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self))
        vqqmlapplicationengine->qqmlapplicationengine_metacall_callback = reinterpret_cast<VirtualQQmlApplicationEngine::QQmlApplicationEngine_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QQmlApplicationEngine_Event(QQmlApplicationEngine* self, QEvent* param1) {
    auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self);
    if (vqqmlapplicationengine) {
        return vqqmlapplicationengine->event(param1);
    } else {
        qFatal("Error: Protected virtual method QQmlApplicationEngine::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QQmlApplicationEngine_SuperEvent(QQmlApplicationEngine* self, QEvent* param1) {
    if (auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self)) {
        return vqqmlapplicationengine->QQmlApplicationEngine::event(param1);
    } else
        qFatal("Error: Protected virtual method QQmlApplicationEngine::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlApplicationEngine_OnEvent(QQmlApplicationEngine* self, intptr_t slot) {
    if (auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self))
        vqqmlapplicationengine->qqmlapplicationengine_event_callback = reinterpret_cast<VirtualQQmlApplicationEngine::QQmlApplicationEngine_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQmlApplicationEngine_EventFilter(QQmlApplicationEngine* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQmlApplicationEngine_SuperEventFilter(QQmlApplicationEngine* self, QObject* watched, QEvent* event) {
    return self->QQmlApplicationEngine::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQmlApplicationEngine_OnEventFilter(QQmlApplicationEngine* self, intptr_t slot) {
    if (auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self))
        vqqmlapplicationengine->qqmlapplicationengine_eventfilter_callback = reinterpret_cast<VirtualQQmlApplicationEngine::QQmlApplicationEngine_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQmlApplicationEngine_TimerEvent(QQmlApplicationEngine* self, QTimerEvent* event) {
    auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self);
    if (vqqmlapplicationengine) {
        vqqmlapplicationengine->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlApplicationEngine::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlApplicationEngine_SuperTimerEvent(QQmlApplicationEngine* self, QTimerEvent* event) {
    if (auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self)) {
        vqqmlapplicationengine->QQmlApplicationEngine::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlApplicationEngine::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlApplicationEngine_OnTimerEvent(QQmlApplicationEngine* self, intptr_t slot) {
    if (auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self))
        vqqmlapplicationengine->qqmlapplicationengine_timerevent_callback = reinterpret_cast<VirtualQQmlApplicationEngine::QQmlApplicationEngine_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlApplicationEngine_ChildEvent(QQmlApplicationEngine* self, QChildEvent* event) {
    auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self);
    if (vqqmlapplicationengine) {
        vqqmlapplicationengine->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlApplicationEngine::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlApplicationEngine_SuperChildEvent(QQmlApplicationEngine* self, QChildEvent* event) {
    if (auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self)) {
        vqqmlapplicationengine->QQmlApplicationEngine::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlApplicationEngine::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlApplicationEngine_OnChildEvent(QQmlApplicationEngine* self, intptr_t slot) {
    if (auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self))
        vqqmlapplicationengine->qqmlapplicationengine_childevent_callback = reinterpret_cast<VirtualQQmlApplicationEngine::QQmlApplicationEngine_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlApplicationEngine_CustomEvent(QQmlApplicationEngine* self, QEvent* event) {
    auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self);
    if (vqqmlapplicationengine) {
        vqqmlapplicationengine->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlApplicationEngine::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlApplicationEngine_SuperCustomEvent(QQmlApplicationEngine* self, QEvent* event) {
    if (auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self)) {
        vqqmlapplicationengine->QQmlApplicationEngine::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlApplicationEngine::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlApplicationEngine_OnCustomEvent(QQmlApplicationEngine* self, intptr_t slot) {
    if (auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self))
        vqqmlapplicationengine->qqmlapplicationengine_customevent_callback = reinterpret_cast<VirtualQQmlApplicationEngine::QQmlApplicationEngine_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlApplicationEngine_ConnectNotify(QQmlApplicationEngine* self, const QMetaMethod* signal) {
    auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self);
    if (vqqmlapplicationengine) {
        vqqmlapplicationengine->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQmlApplicationEngine::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlApplicationEngine_SuperConnectNotify(QQmlApplicationEngine* self, const QMetaMethod* signal) {
    if (auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self)) {
        vqqmlapplicationengine->QQmlApplicationEngine::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQmlApplicationEngine::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlApplicationEngine_OnConnectNotify(QQmlApplicationEngine* self, intptr_t slot) {
    if (auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self))
        vqqmlapplicationengine->qqmlapplicationengine_connectnotify_callback = reinterpret_cast<VirtualQQmlApplicationEngine::QQmlApplicationEngine_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQmlApplicationEngine_DisconnectNotify(QQmlApplicationEngine* self, const QMetaMethod* signal) {
    auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self);
    if (vqqmlapplicationengine) {
        vqqmlapplicationengine->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQmlApplicationEngine::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlApplicationEngine_SuperDisconnectNotify(QQmlApplicationEngine* self, const QMetaMethod* signal) {
    if (auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self)) {
        vqqmlapplicationengine->QQmlApplicationEngine::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQmlApplicationEngine::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlApplicationEngine_OnDisconnectNotify(QQmlApplicationEngine* self, intptr_t slot) {
    if (auto* vqqmlapplicationengine = dynamic_cast<VirtualQQmlApplicationEngine*>(self))
        vqqmlapplicationengine->qqmlapplicationengine_disconnectnotify_callback = reinterpret_cast<VirtualQQmlApplicationEngine::QQmlApplicationEngine_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QQmlApplicationEngine_Sender(const QQmlApplicationEngine* self) {
    if (auto* vqqmlapplicationengine = const_cast<VirtualQQmlApplicationEngine*>(dynamic_cast<const VirtualQQmlApplicationEngine*>(self))) {
        return vqqmlapplicationengine->VirtualQQmlApplicationEngine::sender();
    } else
        qFatal("Error: Protected method QQmlApplicationEngine::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQmlApplicationEngine_SenderSignalIndex(const QQmlApplicationEngine* self) {
    if (auto* vqqmlapplicationengine = const_cast<VirtualQQmlApplicationEngine*>(dynamic_cast<const VirtualQQmlApplicationEngine*>(self))) {
        return vqqmlapplicationengine->VirtualQQmlApplicationEngine::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQmlApplicationEngine::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQmlApplicationEngine_Receivers(const QQmlApplicationEngine* self, const char* signal) {
    if (auto* vqqmlapplicationengine = const_cast<VirtualQQmlApplicationEngine*>(dynamic_cast<const VirtualQQmlApplicationEngine*>(self))) {
        return vqqmlapplicationengine->VirtualQQmlApplicationEngine::receivers(signal);
    } else
        qFatal("Error: Protected method QQmlApplicationEngine::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQmlApplicationEngine_IsSignalConnected(const QQmlApplicationEngine* self, const QMetaMethod* signal) {
    if (auto* vqqmlapplicationengine = const_cast<VirtualQQmlApplicationEngine*>(dynamic_cast<const VirtualQQmlApplicationEngine*>(self))) {
        return vqqmlapplicationengine->VirtualQQmlApplicationEngine::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQmlApplicationEngine::isSignalConnected called without a directly constructed type");
}

void QQmlApplicationEngine_Delete(QQmlApplicationEngine* self) {
    delete self;
}
