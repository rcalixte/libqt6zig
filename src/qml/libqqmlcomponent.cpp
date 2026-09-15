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
    QQmlComponent::connect(self, &QQmlComponent::statusChanged, [self, slotFunc](QQmlComponent::Status param1) {
        int sigval1 = static_cast<int>(param1);
        slotFunc(self, sigval1);
    });
}

void QQmlComponent_ProgressChanged(QQmlComponent* self, double param1) {
    self->progressChanged(static_cast<qreal>(param1));
}

void QQmlComponent_Connect_ProgressChanged(QQmlComponent* self, intptr_t slot) {
    void (*slotFunc)(QQmlComponent*, double) = reinterpret_cast<void (*)(QQmlComponent*, double)>(slot);
    QQmlComponent::connect(self, &QQmlComponent::progressChanged, [self, slotFunc](qreal param1) {
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
    auto* vqqmlcomponent = const_cast<VirtualQQmlComponent*>(dynamic_cast<const VirtualQQmlComponent*>(self));
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_MetaObject_IsBase(true);
        return (QMetaObject*)vqqmlcomponent->metaObject();
    } else {
        return (QMetaObject*)self->QQmlComponent::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnMetaObject(const QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = const_cast<VirtualQQmlComponent*>(dynamic_cast<const VirtualQQmlComponent*>(self));
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_MetaObject_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQmlComponent_SuperMetacast(QQmlComponent* self, const char* param1) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_Metacast_IsBase(true);
        return vqqmlcomponent->qt_metacast(param1);
    } else {
        return self->QQmlComponent::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnMetacast(QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_Metacast_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQmlComponent_SuperMetacall(QQmlComponent* self, int param1, int param2, void** param3) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_Metacall_IsBase(true);
        return vqqmlcomponent->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQmlComponent::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnMetacall(QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_Metacall_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_Metacall_Callback>(slot));
}

// Base class handler implementation
QObject* QQmlComponent_SuperCreate(QQmlComponent* self, QQmlContext* context) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_Create_IsBase(true);
        return vqqmlcomponent->create(context);
    } else {
        return self->QQmlComponent::create(context);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnCreate(QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_Create_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_Create_Callback>(slot));
}

// Base class handler implementation
QObject* QQmlComponent_SuperBeginCreate(QQmlComponent* self, QQmlContext* param1) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_BeginCreate_IsBase(true);
        return vqqmlcomponent->beginCreate(param1);
    } else {
        return self->QQmlComponent::beginCreate(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnBeginCreate(QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_BeginCreate_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_BeginCreate_Callback>(slot));
}

// Base class handler implementation
void QQmlComponent_SuperCompleteCreate(QQmlComponent* self) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_CompleteCreate_IsBase(true);
        vqqmlcomponent->completeCreate();
    } else {
        self->QQmlComponent::completeCreate();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnCompleteCreate(QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_CompleteCreate_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_CompleteCreate_Callback>(slot));
}

// Derived class handler implementation
bool QQmlComponent_Event(QQmlComponent* self, QEvent* event) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        return vqqmlcomponent->event(event);
    } else {
        return self->QQmlComponent::event(event);
    }
}

// Base class handler implementation
bool QQmlComponent_SuperEvent(QQmlComponent* self, QEvent* event) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_Event_IsBase(true);
        return vqqmlcomponent->event(event);
    } else {
        return self->QQmlComponent::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnEvent(QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_Event_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQmlComponent_EventFilter(QQmlComponent* self, QObject* watched, QEvent* event) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        return vqqmlcomponent->eventFilter(watched, event);
    } else {
        return self->QQmlComponent::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQmlComponent_SuperEventFilter(QQmlComponent* self, QObject* watched, QEvent* event) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_EventFilter_IsBase(true);
        return vqqmlcomponent->eventFilter(watched, event);
    } else {
        return self->QQmlComponent::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnEventFilter(QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_EventFilter_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQmlComponent_TimerEvent(QQmlComponent* self, QTimerEvent* event) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->timerEvent(event);
    } else {
        ((VirtualQQmlComponent*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQmlComponent_SuperTimerEvent(QQmlComponent* self, QTimerEvent* event) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_TimerEvent_IsBase(true);
        vqqmlcomponent->timerEvent(event);
    } else {
        ((VirtualQQmlComponent*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnTimerEvent(QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_TimerEvent_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlComponent_ChildEvent(QQmlComponent* self, QChildEvent* event) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->childEvent(event);
    } else {
        ((VirtualQQmlComponent*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQmlComponent_SuperChildEvent(QQmlComponent* self, QChildEvent* event) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_ChildEvent_IsBase(true);
        vqqmlcomponent->childEvent(event);
    } else {
        ((VirtualQQmlComponent*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnChildEvent(QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_ChildEvent_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlComponent_CustomEvent(QQmlComponent* self, QEvent* event) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->customEvent(event);
    } else {
        ((VirtualQQmlComponent*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQmlComponent_SuperCustomEvent(QQmlComponent* self, QEvent* event) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_CustomEvent_IsBase(true);
        vqqmlcomponent->customEvent(event);
    } else {
        ((VirtualQQmlComponent*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnCustomEvent(QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_CustomEvent_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlComponent_ConnectNotify(QQmlComponent* self, const QMetaMethod* signal) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->connectNotify(*signal);
    } else {
        ((VirtualQQmlComponent*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlComponent_SuperConnectNotify(QQmlComponent* self, const QMetaMethod* signal) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_ConnectNotify_IsBase(true);
        vqqmlcomponent->connectNotify(*signal);
    } else {
        ((VirtualQQmlComponent*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnConnectNotify(QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_ConnectNotify_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQmlComponent_DisconnectNotify(QQmlComponent* self, const QMetaMethod* signal) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->disconnectNotify(*signal);
    } else {
        ((VirtualQQmlComponent*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlComponent_SuperDisconnectNotify(QQmlComponent* self, const QMetaMethod* signal) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_DisconnectNotify_IsBase(true);
        vqqmlcomponent->disconnectNotify(*signal);
    } else {
        ((VirtualQQmlComponent*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnDisconnectNotify(QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_DisconnectNotify_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* QQmlComponent_CreateObject2(QQmlComponent* self) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        return vqqmlcomponent->createObject();
    } else {
        return ((VirtualQQmlComponent*)self)->createObject();
    }
}

// Base class handler implementation
QObject* QQmlComponent_SuperCreateObject2(QQmlComponent* self) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_CreateObject2_IsBase(true);
        return vqqmlcomponent->createObject();
    } else {
        return ((VirtualQQmlComponent*)self)->createObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnCreateObject2(QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_CreateObject2_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_CreateObject2_Callback>(slot));
}

// Derived class handler implementation
QObject* QQmlComponent_CreateObject1(QQmlComponent* self, QObject* parent) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        return vqqmlcomponent->createObject(parent);
    } else {
        return ((VirtualQQmlComponent*)self)->createObject(parent);
    }
}

// Base class handler implementation
QObject* QQmlComponent_SuperCreateObject1(QQmlComponent* self, QObject* parent) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_CreateObject1_IsBase(true);
        return vqqmlcomponent->createObject(parent);
    } else {
        return ((VirtualQQmlComponent*)self)->createObject(parent);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnCreateObject1(QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_CreateObject1_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_CreateObject1_Callback>(slot));
}

// Derived class handler implementation
QObject* QQmlComponent_CreateObject22(QQmlComponent* self, QObject* parent, const libqt_map /* of libqt_string to QVariant* */ properties) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    QMap<QString, QVariant> properties_QMap;
    libqt_string* properties_karr = static_cast<libqt_string*>(properties.keys);
    QVariant** properties_varr = static_cast<QVariant**>(properties.values);
    for (size_t i = 0; i < properties.len; ++i) {
        QString properties_karr_i_QString = QString::fromUtf8(properties_karr[i].data, properties_karr[i].len);
        properties_QMap.insert(properties_karr_i_QString, *(properties_varr[i]));
    }
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        return vqqmlcomponent->createObject(parent, properties_QMap);
    } else {
        return ((VirtualQQmlComponent*)self)->createObject(parent, properties_QMap);
    }
}

// Base class handler implementation
QObject* QQmlComponent_SuperCreateObject22(QQmlComponent* self, QObject* parent, const libqt_map /* of libqt_string to QVariant* */ properties) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    QMap<QString, QVariant> properties_QMap;
    libqt_string* properties_karr = static_cast<libqt_string*>(properties.keys);
    QVariant** properties_varr = static_cast<QVariant**>(properties.values);
    for (size_t i = 0; i < properties.len; ++i) {
        QString properties_karr_i_QString = QString::fromUtf8(properties_karr[i].data, properties_karr[i].len);
        properties_QMap.insert(properties_karr_i_QString, *(properties_varr[i]));
    }
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_CreateObject22_IsBase(true);
        return vqqmlcomponent->createObject(parent, properties_QMap);
    } else {
        return ((VirtualQQmlComponent*)self)->createObject(parent, properties_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnCreateObject22(QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = dynamic_cast<VirtualQQmlComponent*>(self);
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_CreateObject22_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_CreateObject22_Callback>(slot));
}

// Derived class handler implementation
QObject* QQmlComponent_Sender(const QQmlComponent* self) {
    auto* vqqmlcomponent = const_cast<VirtualQQmlComponent*>(dynamic_cast<const VirtualQQmlComponent*>(self));
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        return vqqmlcomponent->sender();
    } else {
        return ((VirtualQQmlComponent*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQmlComponent_SuperSender(const QQmlComponent* self) {
    auto* vqqmlcomponent = const_cast<VirtualQQmlComponent*>(dynamic_cast<const VirtualQQmlComponent*>(self));
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_Sender_IsBase(true);
        return vqqmlcomponent->sender();
    } else {
        return ((VirtualQQmlComponent*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnSender(const QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = const_cast<VirtualQQmlComponent*>(dynamic_cast<const VirtualQQmlComponent*>(self));
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_Sender_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQmlComponent_SenderSignalIndex(const QQmlComponent* self) {
    auto* vqqmlcomponent = const_cast<VirtualQQmlComponent*>(dynamic_cast<const VirtualQQmlComponent*>(self));
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        return vqqmlcomponent->senderSignalIndex();
    } else {
        return ((VirtualQQmlComponent*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQmlComponent_SuperSenderSignalIndex(const QQmlComponent* self) {
    auto* vqqmlcomponent = const_cast<VirtualQQmlComponent*>(dynamic_cast<const VirtualQQmlComponent*>(self));
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_SenderSignalIndex_IsBase(true);
        return vqqmlcomponent->senderSignalIndex();
    } else {
        return ((VirtualQQmlComponent*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnSenderSignalIndex(const QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = const_cast<VirtualQQmlComponent*>(dynamic_cast<const VirtualQQmlComponent*>(self));
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQmlComponent_Receivers(const QQmlComponent* self, const char* signal) {
    auto* vqqmlcomponent = const_cast<VirtualQQmlComponent*>(dynamic_cast<const VirtualQQmlComponent*>(self));
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        return vqqmlcomponent->receivers(signal);
    } else {
        return ((VirtualQQmlComponent*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQmlComponent_SuperReceivers(const QQmlComponent* self, const char* signal) {
    auto* vqqmlcomponent = const_cast<VirtualQQmlComponent*>(dynamic_cast<const VirtualQQmlComponent*>(self));
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_Receivers_IsBase(true);
        return vqqmlcomponent->receivers(signal);
    } else {
        return ((VirtualQQmlComponent*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnReceivers(const QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = const_cast<VirtualQQmlComponent*>(dynamic_cast<const VirtualQQmlComponent*>(self));
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_Receivers_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQmlComponent_IsSignalConnected(const QQmlComponent* self, const QMetaMethod* signal) {
    auto* vqqmlcomponent = const_cast<VirtualQQmlComponent*>(dynamic_cast<const VirtualQQmlComponent*>(self));
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        return vqqmlcomponent->isSignalConnected(*signal);
    } else {
        return ((VirtualQQmlComponent*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQmlComponent_SuperIsSignalConnected(const QQmlComponent* self, const QMetaMethod* signal) {
    auto* vqqmlcomponent = const_cast<VirtualQQmlComponent*>(dynamic_cast<const VirtualQQmlComponent*>(self));
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent) {
        vqqmlcomponent->setQQmlComponent_IsSignalConnected_IsBase(true);
        return vqqmlcomponent->isSignalConnected(*signal);
    } else {
        return ((VirtualQQmlComponent*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlComponent_OnIsSignalConnected(const QQmlComponent* self, intptr_t slot) {
    auto* vqqmlcomponent = const_cast<VirtualQQmlComponent*>(dynamic_cast<const VirtualQQmlComponent*>(self));
    if (vqqmlcomponent && vqqmlcomponent->isVirtualQQmlComponent)
        vqqmlcomponent->setQQmlComponent_IsSignalConnected_Callback(reinterpret_cast<VirtualQQmlComponent::QQmlComponent_IsSignalConnected_Callback>(slot));
}

void QQmlComponent_Delete(QQmlComponent* self) {
    delete self;
}
