#include <QChildEvent>
#include <QEvent>
#include <QJSEngine>
#include <QJSValue>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qjsengine.h>
#include "libqjsengine.h"
#include "libqjsengine.hxx"

QJSEngine* QJSEngine_new() {
    return new VirtualQJSEngine();
}

QJSEngine* QJSEngine_new2(QObject* parent) {
    return new VirtualQJSEngine(parent);
}

QMetaObject* QJSEngine_MetaObject(const QJSEngine* self) {
    return (QMetaObject*)self->metaObject();
}

void* QJSEngine_Metacast(QJSEngine* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QJSEngine_Metacall(QJSEngine* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QJSEngine_Tr(const char* s) {
    auto _ret = QJSEngine::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QJSValue* QJSEngine_GlobalObject(const QJSEngine* self) {
    return new QJSValue(self->globalObject());
}

QJSValue* QJSEngine_Evaluate(QJSEngine* self, const libqt_string program) {
    QString program_QString = QString::fromUtf8(program.data, program.len);
    return new QJSValue(self->evaluate(program_QString));
}

QJSValue* QJSEngine_ImportModule(QJSEngine* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new QJSValue(self->importModule(fileName_QString));
}

bool QJSEngine_RegisterModule(QJSEngine* self, const libqt_string moduleName, const QJSValue* value) {
    QString moduleName_QString = QString::fromUtf8(moduleName.data, moduleName.len);
    return self->registerModule(moduleName_QString, *value);
}

QJSValue* QJSEngine_NewObject(QJSEngine* self) {
    return new QJSValue(self->newObject());
}

QJSValue* QJSEngine_NewSymbol(QJSEngine* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QJSValue(self->newSymbol(name_QString));
}

QJSValue* QJSEngine_NewArray(QJSEngine* self) {
    return new QJSValue(self->newArray());
}

QJSValue* QJSEngine_NewQObject(QJSEngine* self, QObject* object) {
    return new QJSValue(self->newQObject(object));
}

QJSValue* QJSEngine_NewQMetaObject(QJSEngine* self, const QMetaObject* metaObject) {
    return new QJSValue(self->newQMetaObject(metaObject));
}

QJSValue* QJSEngine_NewErrorObject(QJSEngine* self, int errorType) {
    return new QJSValue(self->newErrorObject(static_cast<QJSValue::ErrorType>(errorType)));
}

void QJSEngine_CollectGarbage(QJSEngine* self) {
    self->collectGarbage();
}

void QJSEngine_SetObjectOwnership(QObject* param1, int param2) {
    QJSEngine::setObjectOwnership(param1, static_cast<QJSEngine::ObjectOwnership>(param2));
}

int QJSEngine_ObjectOwnership(QObject* param1) {
    return static_cast<int>(QJSEngine::objectOwnership(param1));
}

void QJSEngine_InstallExtensions(QJSEngine* self, int extensions) {
    self->installExtensions(static_cast<QJSEngine::Extensions>(extensions));
}

void QJSEngine_SetInterrupted(QJSEngine* self, bool interrupted) {
    self->setInterrupted(interrupted);
}

bool QJSEngine_IsInterrupted(const QJSEngine* self) {
    return self->isInterrupted();
}

void QJSEngine_ThrowError(QJSEngine* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->throwError(message_QString);
}

void QJSEngine_ThrowError2(QJSEngine* self, int errorType) {
    self->throwError(static_cast<QJSValue::ErrorType>(errorType));
}

void QJSEngine_ThrowError3(QJSEngine* self, const QJSValue* errorVal) {
    self->throwError(*errorVal);
}

bool QJSEngine_HasError(const QJSEngine* self) {
    return self->hasError();
}

QJSValue* QJSEngine_CatchError(QJSEngine* self) {
    return new QJSValue(self->catchError());
}

libqt_string QJSEngine_UiLanguage(const QJSEngine* self) {
    auto _ret = self->uiLanguage();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QJSEngine_SetUiLanguage(QJSEngine* self, const libqt_string language) {
    QString language_QString = QString::fromUtf8(language.data, language.len);
    self->setUiLanguage(language_QString);
}

void QJSEngine_UiLanguageChanged(QJSEngine* self) {
    self->uiLanguageChanged();
}

void QJSEngine_Connect_UiLanguageChanged(QJSEngine* self, intptr_t slot) {
    void (*slotFunc)(QJSEngine*) = reinterpret_cast<void (*)(QJSEngine*)>(slot);
    QJSEngine::connect(self,
                       static_cast<void (QJSEngine::*)()>(&QJSEngine::uiLanguageChanged),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

libqt_string QJSEngine_Tr2(const char* s, const char* c) {
    auto _ret = QJSEngine::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QJSEngine_Tr3(const char* s, const char* c, int n) {
    auto _ret = QJSEngine::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QJSValue* QJSEngine_Evaluate2(QJSEngine* self, const libqt_string program, const libqt_string fileName) {
    QString program_QString = QString::fromUtf8(program.data, program.len);
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new QJSValue(self->evaluate(program_QString, fileName_QString));
}

QJSValue* QJSEngine_Evaluate3(QJSEngine* self, const libqt_string program, const libqt_string fileName, int lineNumber) {
    QString program_QString = QString::fromUtf8(program.data, program.len);
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new QJSValue(self->evaluate(program_QString, fileName_QString, static_cast<int>(lineNumber)));
}

QJSValue* QJSEngine_Evaluate4(QJSEngine* self, const libqt_string program, const libqt_string fileName, int lineNumber, libqt_list /* of libqt_string */ exceptionStackTrace) {
    QString program_QString = QString::fromUtf8(program.data, program.len);
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QList<QString>* exceptionStackTrace_QList = new QList<QString>();
    exceptionStackTrace_QList->reserve(exceptionStackTrace.len);
    libqt_string* exceptionStackTrace_arr = static_cast<libqt_string*>(exceptionStackTrace.data);
    for (size_t i = 0; i < exceptionStackTrace.len; ++i) {
        QString exceptionStackTrace_arr_i_QString = QString::fromUtf8(exceptionStackTrace_arr[i].data, exceptionStackTrace_arr[i].len);
        exceptionStackTrace_QList->push_back(exceptionStackTrace_arr_i_QString);
    }
    return new QJSValue(self->evaluate(program_QString, fileName_QString, static_cast<int>(lineNumber), exceptionStackTrace_QList));
}

QJSValue* QJSEngine_NewArray1(QJSEngine* self, unsigned int length) {
    return new QJSValue(self->newArray(static_cast<uint>(length)));
}

QJSValue* QJSEngine_NewErrorObject2(QJSEngine* self, int errorType, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    return new QJSValue(self->newErrorObject(static_cast<QJSValue::ErrorType>(errorType), message_QString));
}

void QJSEngine_InstallExtensions2(QJSEngine* self, int extensions, const QJSValue* object) {
    self->installExtensions(static_cast<QJSEngine::Extensions>(extensions), *object);
}

void QJSEngine_ThrowError22(QJSEngine* self, int errorType, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->throwError(static_cast<QJSValue::ErrorType>(errorType), message_QString);
}

// Base class handler implementation
QMetaObject* QJSEngine_SuperMetaObject(const QJSEngine* self) {
    return (QMetaObject*)self->QJSEngine::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QJSEngine_OnMetaObject(QJSEngine* self, intptr_t slot) {
    if (auto* vqjsengine = const_cast<VirtualQJSEngine*>(dynamic_cast<const VirtualQJSEngine*>(self)))
        vqjsengine->qjsengine_metaobject_callback = reinterpret_cast<VirtualQJSEngine::QJSEngine_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QJSEngine_SuperMetacast(QJSEngine* self, const char* param1) {
    return self->QJSEngine::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QJSEngine_OnMetacast(QJSEngine* self, intptr_t slot) {
    if (auto* vqjsengine = dynamic_cast<VirtualQJSEngine*>(self))
        vqjsengine->qjsengine_metacast_callback = reinterpret_cast<VirtualQJSEngine::QJSEngine_Metacast_Callback>(slot);
}

// Base class handler implementation
int QJSEngine_SuperMetacall(QJSEngine* self, int param1, int param2, void** param3) {
    return self->QJSEngine::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QJSEngine_OnMetacall(QJSEngine* self, intptr_t slot) {
    if (auto* vqjsengine = dynamic_cast<VirtualQJSEngine*>(self))
        vqjsengine->qjsengine_metacall_callback = reinterpret_cast<VirtualQJSEngine::QJSEngine_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QJSEngine_Event(QJSEngine* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QJSEngine_SuperEvent(QJSEngine* self, QEvent* event) {
    return self->QJSEngine::event(event);
}

// Auxiliary method to allow providing re-implementation
void QJSEngine_OnEvent(QJSEngine* self, intptr_t slot) {
    if (auto* vqjsengine = dynamic_cast<VirtualQJSEngine*>(self))
        vqjsengine->qjsengine_event_callback = reinterpret_cast<VirtualQJSEngine::QJSEngine_Event_Callback>(slot);
}

// Derived class handler implementation
bool QJSEngine_EventFilter(QJSEngine* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QJSEngine_SuperEventFilter(QJSEngine* self, QObject* watched, QEvent* event) {
    return self->QJSEngine::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QJSEngine_OnEventFilter(QJSEngine* self, intptr_t slot) {
    if (auto* vqjsengine = dynamic_cast<VirtualQJSEngine*>(self))
        vqjsengine->qjsengine_eventfilter_callback = reinterpret_cast<VirtualQJSEngine::QJSEngine_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QJSEngine_TimerEvent(QJSEngine* self, QTimerEvent* event) {
    auto* vqjsengine = dynamic_cast<VirtualQJSEngine*>(self);
    if (vqjsengine) {
        vqjsengine->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QJSEngine::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QJSEngine_SuperTimerEvent(QJSEngine* self, QTimerEvent* event) {
    if (auto* vqjsengine = dynamic_cast<VirtualQJSEngine*>(self)) {
        vqjsengine->QJSEngine::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QJSEngine::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QJSEngine_OnTimerEvent(QJSEngine* self, intptr_t slot) {
    if (auto* vqjsengine = dynamic_cast<VirtualQJSEngine*>(self))
        vqjsengine->qjsengine_timerevent_callback = reinterpret_cast<VirtualQJSEngine::QJSEngine_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QJSEngine_ChildEvent(QJSEngine* self, QChildEvent* event) {
    auto* vqjsengine = dynamic_cast<VirtualQJSEngine*>(self);
    if (vqjsengine) {
        vqjsengine->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QJSEngine::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QJSEngine_SuperChildEvent(QJSEngine* self, QChildEvent* event) {
    if (auto* vqjsengine = dynamic_cast<VirtualQJSEngine*>(self)) {
        vqjsengine->QJSEngine::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QJSEngine::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QJSEngine_OnChildEvent(QJSEngine* self, intptr_t slot) {
    if (auto* vqjsengine = dynamic_cast<VirtualQJSEngine*>(self))
        vqjsengine->qjsengine_childevent_callback = reinterpret_cast<VirtualQJSEngine::QJSEngine_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QJSEngine_CustomEvent(QJSEngine* self, QEvent* event) {
    auto* vqjsengine = dynamic_cast<VirtualQJSEngine*>(self);
    if (vqjsengine) {
        vqjsengine->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QJSEngine::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QJSEngine_SuperCustomEvent(QJSEngine* self, QEvent* event) {
    if (auto* vqjsengine = dynamic_cast<VirtualQJSEngine*>(self)) {
        vqjsengine->QJSEngine::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QJSEngine::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QJSEngine_OnCustomEvent(QJSEngine* self, intptr_t slot) {
    if (auto* vqjsengine = dynamic_cast<VirtualQJSEngine*>(self))
        vqjsengine->qjsengine_customevent_callback = reinterpret_cast<VirtualQJSEngine::QJSEngine_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QJSEngine_ConnectNotify(QJSEngine* self, const QMetaMethod* signal) {
    auto* vqjsengine = dynamic_cast<VirtualQJSEngine*>(self);
    if (vqjsengine) {
        vqjsengine->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QJSEngine::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QJSEngine_SuperConnectNotify(QJSEngine* self, const QMetaMethod* signal) {
    if (auto* vqjsengine = dynamic_cast<VirtualQJSEngine*>(self)) {
        vqjsengine->QJSEngine::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QJSEngine::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QJSEngine_OnConnectNotify(QJSEngine* self, intptr_t slot) {
    if (auto* vqjsengine = dynamic_cast<VirtualQJSEngine*>(self))
        vqjsengine->qjsengine_connectnotify_callback = reinterpret_cast<VirtualQJSEngine::QJSEngine_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QJSEngine_DisconnectNotify(QJSEngine* self, const QMetaMethod* signal) {
    auto* vqjsengine = dynamic_cast<VirtualQJSEngine*>(self);
    if (vqjsengine) {
        vqjsengine->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QJSEngine::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QJSEngine_SuperDisconnectNotify(QJSEngine* self, const QMetaMethod* signal) {
    if (auto* vqjsengine = dynamic_cast<VirtualQJSEngine*>(self)) {
        vqjsengine->QJSEngine::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QJSEngine::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QJSEngine_OnDisconnectNotify(QJSEngine* self, intptr_t slot) {
    if (auto* vqjsengine = dynamic_cast<VirtualQJSEngine*>(self))
        vqjsengine->qjsengine_disconnectnotify_callback = reinterpret_cast<VirtualQJSEngine::QJSEngine_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QJSEngine_Sender(const QJSEngine* self) {
    if (auto* vqjsengine = const_cast<VirtualQJSEngine*>(dynamic_cast<const VirtualQJSEngine*>(self))) {
        return vqjsengine->VirtualQJSEngine::sender();
    } else
        qFatal("Error: Protected method QJSEngine::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QJSEngine_SenderSignalIndex(const QJSEngine* self) {
    if (auto* vqjsengine = const_cast<VirtualQJSEngine*>(dynamic_cast<const VirtualQJSEngine*>(self))) {
        return vqjsengine->VirtualQJSEngine::senderSignalIndex();
    } else
        qFatal("Error: Protected method QJSEngine::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QJSEngine_Receivers(const QJSEngine* self, const char* signal) {
    if (auto* vqjsengine = const_cast<VirtualQJSEngine*>(dynamic_cast<const VirtualQJSEngine*>(self))) {
        return vqjsengine->VirtualQJSEngine::receivers(signal);
    } else
        qFatal("Error: Protected method QJSEngine::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QJSEngine_IsSignalConnected(const QJSEngine* self, const QMetaMethod* signal) {
    if (auto* vqjsengine = const_cast<VirtualQJSEngine*>(dynamic_cast<const VirtualQJSEngine*>(self))) {
        return vqjsengine->VirtualQJSEngine::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QJSEngine::isSignalConnected called without a directly constructed type");
}

void QJSEngine_Delete(QJSEngine* self) {
    delete self;
}

QJSEngine* qjsengine_h_QjsEngine(const QObject* param1) {
    return qjsEngine(param1);
}
