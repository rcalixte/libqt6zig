#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlComponent>
#include <QQmlContext>
#include <QQmlEngine>
#include <QQmlError>
#include <QQmlIncubator>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <qqmlcomponent.h>
#include "libqqmlcomponent.h"
#include "libqqmlcomponent.hxx"

QQmlComponent* QQmlComponent_new() {
    return new VirtualQQmlComponent();
}

QQmlComponent* QQmlComponent_new2(QQmlEngine* param1) {
    return new VirtualQQmlComponent(param1);
}

QQmlComponent* QQmlComponent_new3(QQmlEngine* param1, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQQmlComponent(param1, fileName_QString);
}

QQmlComponent* QQmlComponent_new4(QQmlEngine* param1, const libqt_string fileName, int mode) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQQmlComponent(param1, fileName_QString, static_cast<QQmlComponent::CompilationMode>(mode));
}

QQmlComponent* QQmlComponent_new5(QQmlEngine* param1, const QUrl* url) {
    return new VirtualQQmlComponent(param1, *url);
}

QQmlComponent* QQmlComponent_new6(QQmlEngine* param1, const QUrl* url, int mode) {
    return new VirtualQQmlComponent(param1, *url, static_cast<QQmlComponent::CompilationMode>(mode));
}

QQmlComponent* QQmlComponent_new7(QQmlEngine* engine, libqt_string uri, libqt_string typeName) {
    return new VirtualQQmlComponent(engine, QAnyStringView(uri.data, uri.len), QAnyStringView(typeName.data, typeName.len));
}

QQmlComponent* QQmlComponent_new8(QQmlEngine* engine, libqt_string uri, libqt_string typeName, int mode) {
    return new VirtualQQmlComponent(engine, QAnyStringView(uri.data, uri.len), QAnyStringView(typeName.data, typeName.len), static_cast<QQmlComponent::CompilationMode>(mode));
}

QQmlComponent* QQmlComponent_new9(QObject* parent) {
    return new VirtualQQmlComponent(parent);
}

QQmlComponent* QQmlComponent_new10(QQmlEngine* param1, QObject* parent) {
    return new VirtualQQmlComponent(param1, parent);
}

QQmlComponent* QQmlComponent_new11(QQmlEngine* param1, const libqt_string fileName, QObject* parent) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQQmlComponent(param1, fileName_QString, parent);
}

QQmlComponent* QQmlComponent_new12(QQmlEngine* param1, const libqt_string fileName, int mode, QObject* parent) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQQmlComponent(param1, fileName_QString, static_cast<QQmlComponent::CompilationMode>(mode), parent);
}

QQmlComponent* QQmlComponent_new13(QQmlEngine* param1, const QUrl* url, QObject* parent) {
    return new VirtualQQmlComponent(param1, *url, parent);
}

QQmlComponent* QQmlComponent_new14(QQmlEngine* param1, const QUrl* url, int mode, QObject* parent) {
    return new VirtualQQmlComponent(param1, *url, static_cast<QQmlComponent::CompilationMode>(mode), parent);
}

QQmlComponent* QQmlComponent_new15(QQmlEngine* engine, libqt_string uri, libqt_string typeName, QObject* parent) {
    return new VirtualQQmlComponent(engine, QAnyStringView(uri.data, uri.len), QAnyStringView(typeName.data, typeName.len), parent);
}

QQmlComponent* QQmlComponent_new16(QQmlEngine* engine, libqt_string uri, libqt_string typeName, int mode, QObject* parent) {
    return new VirtualQQmlComponent(engine, QAnyStringView(uri.data, uri.len), QAnyStringView(typeName.data, typeName.len), static_cast<QQmlComponent::CompilationMode>(mode), parent);
}

QMetaObject* QQmlComponent_MetaObject(const QQmlComponent* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQmlComponent_Metacast(QQmlComponent* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQmlComponent_Metacall(QQmlComponent* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQmlComponent_Tr(const char* s) {
    auto _ret = QQmlComponent::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QQmlComponent_Status(const QQmlComponent* self) {
    return static_cast<int>(self->status());
}

bool QQmlComponent_IsNull(const QQmlComponent* self) {
    return self->isNull();
}

bool QQmlComponent_IsReady(const QQmlComponent* self) {
    return self->isReady();
}

bool QQmlComponent_IsError(const QQmlComponent* self) {
    return self->isError();
}

bool QQmlComponent_IsLoading(const QQmlComponent* self) {
    return self->isLoading();
}

bool QQmlComponent_IsBound(const QQmlComponent* self) {
    return self->isBound();
}

libqt_list /* of QQmlError* */ QQmlComponent_Errors(const QQmlComponent* self) {
    QList<QQmlError> _ret = self->errors();
    // Convert QList<> from C++ memory to manually-managed C memory
    QQmlError** _arr = static_cast<QQmlError**>(malloc(sizeof(QQmlError*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QQmlError(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QQmlComponent_ErrorString(const QQmlComponent* self) {
    auto _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

double QQmlComponent_Progress(const QQmlComponent* self) {
    return static_cast<double>(self->progress());
}

QUrl* QQmlComponent_Url(const QQmlComponent* self) {
    return new QUrl(self->url());
}

QObject* QQmlComponent_Create(QQmlComponent* self, QQmlContext* context) {
    return self->create(context);
}

QObject* QQmlComponent_CreateWithInitialProperties(QQmlComponent* self, const libqt_map /* of libqt_string to QVariant* */ initialProperties) {
    QMap<QString, QVariant> initialProperties_QMap;
    libqt_string* initialProperties_karr = static_cast<libqt_string*>(initialProperties.keys);
    QVariant** initialProperties_varr = static_cast<QVariant**>(initialProperties.values);
    for (size_t i = 0; i < initialProperties.len; ++i) {
        QString initialProperties_karr_i_QString = QString::fromUtf8(initialProperties_karr[i].data, initialProperties_karr[i].len);
        initialProperties_QMap.insert(initialProperties_karr_i_QString, *(initialProperties_varr[i]));
    }
    return self->createWithInitialProperties(initialProperties_QMap);
}

void QQmlComponent_SetInitialProperties(QQmlComponent* self, QObject* component, const libqt_map /* of libqt_string to QVariant* */ properties) {
    QMap<QString, QVariant> properties_QMap;
    libqt_string* properties_karr = static_cast<libqt_string*>(properties.keys);
    QVariant** properties_varr = static_cast<QVariant**>(properties.values);
    for (size_t i = 0; i < properties.len; ++i) {
        QString properties_karr_i_QString = QString::fromUtf8(properties_karr[i].data, properties_karr[i].len);
        properties_QMap.insert(properties_karr_i_QString, *(properties_varr[i]));
    }
    self->setInitialProperties(component, properties_QMap);
}

QObject* QQmlComponent_BeginCreate(QQmlComponent* self, QQmlContext* param1) {
    return self->beginCreate(param1);
}

void QQmlComponent_CompleteCreate(QQmlComponent* self) {
    self->completeCreate();
}

void QQmlComponent_Create2(QQmlComponent* self, QQmlIncubator* param1) {
    self->create(*param1);
}

QQmlContext* QQmlComponent_CreationContext(const QQmlComponent* self) {
    return self->creationContext();
}

QQmlEngine* QQmlComponent_Engine(const QQmlComponent* self) {
    return self->engine();
}

void QQmlComponent_LoadUrl(QQmlComponent* self, const QUrl* url) {
    self->loadUrl(*url);
}

void QQmlComponent_LoadUrl2(QQmlComponent* self, const QUrl* url, int mode) {
    self->loadUrl(*url, static_cast<QQmlComponent::CompilationMode>(mode));
}

void QQmlComponent_LoadFromModule(QQmlComponent* self, libqt_string uri, libqt_string typeName) {
    self->loadFromModule(QAnyStringView(uri.data, uri.len), QAnyStringView(typeName.data, typeName.len));
}

void QQmlComponent_SetData(QQmlComponent* self, const libqt_string param1, const QUrl* baseUrl) {
    QByteArray param1_QByteArray(param1.data, param1.len);
    self->setData(param1_QByteArray, *baseUrl);
}

void QQmlComponent_StatusChanged(QQmlComponent* self, int param1) {
    self->statusChanged(static_cast<QQmlComponent::Status>(param1));
}

void QQmlComponent_Connect_StatusChanged(QQmlComponent* self, intptr_t slot) {
    void (*slotFunc)(QQmlComponent*, int) = reinterpret_cast<void (*)(QQmlComponent*, int)>(slot);
    QQmlComponent::connect(self,
                           static_cast<void (QQmlComponent::*)(QQmlComponent::Status)>(&QQmlComponent::statusChanged),
                           [self, slotFunc](QQmlComponent::Status param1) {
                               int sigval1 = static_cast<int>(param1);
                               slotFunc(self, sigval1);
                           });
}

void QQmlComponent_ProgressChanged(QQmlComponent* self, double param1) {
    self->progressChanged(static_cast<qreal>(param1));
}

void QQmlComponent_Connect_ProgressChanged(QQmlComponent* self, intptr_t slot) {
    void (*slotFunc)(QQmlComponent*, double) = reinterpret_cast<void (*)(QQmlComponent*, double)>(slot);
    QQmlComponent::connect(self,
                           static_cast<void (QQmlComponent::*)(qreal)>(&QQmlComponent::progressChanged),
                           [self, slotFunc](qreal param1) {
                               double sigval1 = static_cast<double>(param1);
                               slotFunc(self, sigval1);
                           });
}

libqt_string QQmlComponent_Tr2(const char* s, const char* c) {
    auto _ret = QQmlComponent::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQmlComponent_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQmlComponent::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QObject* QQmlComponent_CreateWithInitialProperties2(QQmlComponent* self, const libqt_map /* of libqt_string to QVariant* */ initialProperties, QQmlContext* context) {
    QMap<QString, QVariant> initialProperties_QMap;
    libqt_string* initialProperties_karr = static_cast<libqt_string*>(initialProperties.keys);
    QVariant** initialProperties_varr = static_cast<QVariant**>(initialProperties.values);
    for (size_t i = 0; i < initialProperties.len; ++i) {
        QString initialProperties_karr_i_QString = QString::fromUtf8(initialProperties_karr[i].data, initialProperties_karr[i].len);
        initialProperties_QMap.insert(initialProperties_karr_i_QString, *(initialProperties_varr[i]));
    }
    return self->createWithInitialProperties(initialProperties_QMap, context);
}

void QQmlComponent_Create22(QQmlComponent* self, QQmlIncubator* param1, QQmlContext* context) {
    self->create(*param1, context);
}

void QQmlComponent_Create3(QQmlComponent* self, QQmlIncubator* param1, QQmlContext* context, QQmlContext* forContext) {
    self->create(*param1, context, forContext);
}

void QQmlComponent_LoadFromModule3(QQmlComponent* self, libqt_string uri, libqt_string typeName, int mode) {
    self->loadFromModule(QAnyStringView(uri.data, uri.len), QAnyStringView(typeName.data, typeName.len), static_cast<QQmlComponent::CompilationMode>(mode));
}

// Base class handler implementation
QMetaObject* QQmlComponent_SuperMetaObject(const QQmlComponent* self) {
    return (QMetaObject*)self->QQmlComponent::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnMetaObject(QQmlComponent* self, intptr_t slot) {
    if (auto* vqqmlcomponent = const_cast<VirtualQQmlComponent*>(dynamic_cast<const VirtualQQmlComponent*>(self)))
        vqqmlcomponent->qqmlcomponent_metaobject_callback = reinterpret_cast<VirtualQQmlComponent::QQmlComponent_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQmlComponent_SuperMetacast(QQmlComponent* self, const char* param1) {
    return self->QQmlComponent::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnMetacast(QQmlComponent* self, intptr_t slot) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self))
        vqqmlcomponent->qqmlcomponent_metacast_callback = reinterpret_cast<VirtualQQmlComponent::QQmlComponent_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQmlComponent_SuperMetacall(QQmlComponent* self, int param1, int param2, void** param3) {
    return self->QQmlComponent::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnMetacall(QQmlComponent* self, intptr_t slot) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self))
        vqqmlcomponent->qqmlcomponent_metacall_callback = reinterpret_cast<VirtualQQmlComponent::QQmlComponent_Metacall_Callback>(slot);
}

// Base class handler implementation
QObject* QQmlComponent_SuperCreate(QQmlComponent* self, QQmlContext* context) {
    return self->QQmlComponent::create(context);
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnCreate(QQmlComponent* self, intptr_t slot) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self))
        vqqmlcomponent->qqmlcomponent_create_callback = reinterpret_cast<VirtualQQmlComponent::QQmlComponent_Create_Callback>(slot);
}

// Base class handler implementation
QObject* QQmlComponent_SuperBeginCreate(QQmlComponent* self, QQmlContext* param1) {
    return self->QQmlComponent::beginCreate(param1);
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnBeginCreate(QQmlComponent* self, intptr_t slot) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self))
        vqqmlcomponent->qqmlcomponent_begincreate_callback = reinterpret_cast<VirtualQQmlComponent::QQmlComponent_BeginCreate_Callback>(slot);
}

// Base class handler implementation
void QQmlComponent_SuperCompleteCreate(QQmlComponent* self) {
    self->QQmlComponent::completeCreate();
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnCompleteCreate(QQmlComponent* self, intptr_t slot) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self))
        vqqmlcomponent->qqmlcomponent_completecreate_callback = reinterpret_cast<VirtualQQmlComponent::QQmlComponent_CompleteCreate_Callback>(slot);
}

// Derived class handler implementation
bool QQmlComponent_Event(QQmlComponent* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QQmlComponent_SuperEvent(QQmlComponent* self, QEvent* event) {
    return self->QQmlComponent::event(event);
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnEvent(QQmlComponent* self, intptr_t slot) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self))
        vqqmlcomponent->qqmlcomponent_event_callback = reinterpret_cast<VirtualQQmlComponent::QQmlComponent_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQmlComponent_EventFilter(QQmlComponent* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQmlComponent_SuperEventFilter(QQmlComponent* self, QObject* watched, QEvent* event) {
    return self->QQmlComponent::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnEventFilter(QQmlComponent* self, intptr_t slot) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self))
        vqqmlcomponent->qqmlcomponent_eventfilter_callback = reinterpret_cast<VirtualQQmlComponent::QQmlComponent_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQmlComponent_TimerEvent(QQmlComponent* self, QTimerEvent* event) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent) {
        vqqmlcomponent->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlComponent::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlComponent_SuperTimerEvent(QQmlComponent* self, QTimerEvent* event) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self)) {
        vqqmlcomponent->QQmlComponent::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlComponent::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnTimerEvent(QQmlComponent* self, intptr_t slot) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self))
        vqqmlcomponent->qqmlcomponent_timerevent_callback = reinterpret_cast<VirtualQQmlComponent::QQmlComponent_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlComponent_ChildEvent(QQmlComponent* self, QChildEvent* event) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent) {
        vqqmlcomponent->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlComponent::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlComponent_SuperChildEvent(QQmlComponent* self, QChildEvent* event) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self)) {
        vqqmlcomponent->QQmlComponent::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlComponent::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnChildEvent(QQmlComponent* self, intptr_t slot) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self))
        vqqmlcomponent->qqmlcomponent_childevent_callback = reinterpret_cast<VirtualQQmlComponent::QQmlComponent_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlComponent_CustomEvent(QQmlComponent* self, QEvent* event) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent) {
        vqqmlcomponent->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlComponent::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlComponent_SuperCustomEvent(QQmlComponent* self, QEvent* event) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self)) {
        vqqmlcomponent->QQmlComponent::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlComponent::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnCustomEvent(QQmlComponent* self, intptr_t slot) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self))
        vqqmlcomponent->qqmlcomponent_customevent_callback = reinterpret_cast<VirtualQQmlComponent::QQmlComponent_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlComponent_ConnectNotify(QQmlComponent* self, const QMetaMethod* signal) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent) {
        vqqmlcomponent->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQmlComponent::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlComponent_SuperConnectNotify(QQmlComponent* self, const QMetaMethod* signal) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self)) {
        vqqmlcomponent->QQmlComponent::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQmlComponent::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnConnectNotify(QQmlComponent* self, intptr_t slot) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self))
        vqqmlcomponent->qqmlcomponent_connectnotify_callback = reinterpret_cast<VirtualQQmlComponent::QQmlComponent_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQmlComponent_DisconnectNotify(QQmlComponent* self, const QMetaMethod* signal) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent) {
        vqqmlcomponent->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQmlComponent::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlComponent_SuperDisconnectNotify(QQmlComponent* self, const QMetaMethod* signal) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self)) {
        vqqmlcomponent->QQmlComponent::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQmlComponent::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnDisconnectNotify(QQmlComponent* self, intptr_t slot) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self))
        vqqmlcomponent->qqmlcomponent_disconnectnotify_callback = reinterpret_cast<VirtualQQmlComponent::QQmlComponent_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QQmlComponent_CreateObject2(QQmlComponent* self) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self)) {
        return vqqmlcomponent->VirtualQQmlComponent::createObject();
    } else
        qFatal("Error: Protected method QQmlComponent::createObject2 called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QQmlComponent_CreateObject1(QQmlComponent* self, QObject* parent) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self)) {
        return vqqmlcomponent->VirtualQQmlComponent::createObject(parent);
    } else
        qFatal("Error: Protected method QQmlComponent::createObject1 called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QQmlComponent_CreateObject22(QQmlComponent* self, QObject* parent, const libqt_map /* of libqt_string to QVariant* */ properties) {
    if (auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self)) {
        QMap<QString, QVariant> properties_QMap;
        libqt_string* properties_karr = static_cast<libqt_string*>(properties.keys);
        QVariant** properties_varr = static_cast<QVariant**>(properties.values);
        for (size_t i = 0; i < properties.len; ++i) {
            QString properties_karr_i_QString = QString::fromUtf8(properties_karr[i].data, properties_karr[i].len);
            properties_QMap.insert(properties_karr_i_QString, *(properties_varr[i]));
        }
        return vqqmlcomponent->VirtualQQmlComponent::createObject(parent, properties_QMap);
    } else
        qFatal("Error: Protected method QQmlComponent::createObject22 called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QQmlComponent_Sender(const QQmlComponent* self) {
    if (auto* vqqmlcomponent = const_cast<VirtualQQmlComponent*>(dynamic_cast<const VirtualQQmlComponent*>(self))) {
        return vqqmlcomponent->VirtualQQmlComponent::sender();
    } else
        qFatal("Error: Protected method QQmlComponent::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQmlComponent_SenderSignalIndex(const QQmlComponent* self) {
    if (auto* vqqmlcomponent = const_cast<VirtualQQmlComponent*>(dynamic_cast<const VirtualQQmlComponent*>(self))) {
        return vqqmlcomponent->VirtualQQmlComponent::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQmlComponent::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQmlComponent_Receivers(const QQmlComponent* self, const char* signal) {
    if (auto* vqqmlcomponent = const_cast<VirtualQQmlComponent*>(dynamic_cast<const VirtualQQmlComponent*>(self))) {
        return vqqmlcomponent->VirtualQQmlComponent::receivers(signal);
    } else
        qFatal("Error: Protected method QQmlComponent::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQmlComponent_IsSignalConnected(const QQmlComponent* self, const QMetaMethod* signal) {
    if (auto* vqqmlcomponent = const_cast<VirtualQQmlComponent*>(dynamic_cast<const VirtualQQmlComponent*>(self))) {
        return vqqmlcomponent->VirtualQQmlComponent::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQmlComponent::isSignalConnected called without a directly constructed type");
}

void QQmlComponent_Delete(QQmlComponent* self) {
    delete self;
}
