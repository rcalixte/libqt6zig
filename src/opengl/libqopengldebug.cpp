#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QOpenGLDebugLogger>
#include <QOpenGLDebugMessage>
#include <QString>
#include <QTimerEvent>
#include <qopengldebug.h>
#include "libqopengldebug.h"
#include "libqopengldebug.hxx"

QOpenGLDebugMessage* QOpenGLDebugMessage_new() {
    return new QOpenGLDebugMessage();
}

QOpenGLDebugMessage* QOpenGLDebugMessage_new2(const QOpenGLDebugMessage* debugMessage) {
    return new QOpenGLDebugMessage(*debugMessage);
}

void QOpenGLDebugMessage_OperatorAssign(QOpenGLDebugMessage* self, const QOpenGLDebugMessage* debugMessage) {
    self->operator=(*debugMessage);
}

void QOpenGLDebugMessage_Swap(QOpenGLDebugMessage* self, QOpenGLDebugMessage* other) {
    self->swap(*other);
}

int QOpenGLDebugMessage_Source(const QOpenGLDebugMessage* self) {
    return static_cast<int>(self->source());
}

int QOpenGLDebugMessage_Type(const QOpenGLDebugMessage* self) {
    return static_cast<int>(self->type());
}

int QOpenGLDebugMessage_Severity(const QOpenGLDebugMessage* self) {
    return static_cast<int>(self->severity());
}

uint32_t QOpenGLDebugMessage_Id(const QOpenGLDebugMessage* self) {
    return self->id();
}

libqt_string QOpenGLDebugMessage_Message(const QOpenGLDebugMessage* self) {
    auto _ret = self->message();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QOpenGLDebugMessage* QOpenGLDebugMessage_CreateApplicationMessage(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QOpenGLDebugMessage(QOpenGLDebugMessage::createApplicationMessage(text_QString));
}

QOpenGLDebugMessage* QOpenGLDebugMessage_CreateThirdPartyMessage(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QOpenGLDebugMessage(QOpenGLDebugMessage::createThirdPartyMessage(text_QString));
}

bool QOpenGLDebugMessage_OperatorEqual(const QOpenGLDebugMessage* self, const QOpenGLDebugMessage* debugMessage) {
    return (*self == *debugMessage);
}

bool QOpenGLDebugMessage_OperatorNotEqual(const QOpenGLDebugMessage* self, const QOpenGLDebugMessage* debugMessage) {
    return (*self != *debugMessage);
}

QOpenGLDebugMessage* QOpenGLDebugMessage_CreateApplicationMessage2(const libqt_string text, uint32_t id) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QOpenGLDebugMessage(QOpenGLDebugMessage::createApplicationMessage(text_QString, static_cast<GLuint>(id)));
}

QOpenGLDebugMessage* QOpenGLDebugMessage_CreateApplicationMessage3(const libqt_string text, uint32_t id, int severity) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QOpenGLDebugMessage(QOpenGLDebugMessage::createApplicationMessage(text_QString, static_cast<GLuint>(id), static_cast<QOpenGLDebugMessage::Severity>(severity)));
}

QOpenGLDebugMessage* QOpenGLDebugMessage_CreateApplicationMessage4(const libqt_string text, uint32_t id, int severity, int typeVal) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QOpenGLDebugMessage(QOpenGLDebugMessage::createApplicationMessage(text_QString, static_cast<GLuint>(id), static_cast<QOpenGLDebugMessage::Severity>(severity), static_cast<QOpenGLDebugMessage::Type>(typeVal)));
}

QOpenGLDebugMessage* QOpenGLDebugMessage_CreateThirdPartyMessage2(const libqt_string text, uint32_t id) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QOpenGLDebugMessage(QOpenGLDebugMessage::createThirdPartyMessage(text_QString, static_cast<GLuint>(id)));
}

QOpenGLDebugMessage* QOpenGLDebugMessage_CreateThirdPartyMessage3(const libqt_string text, uint32_t id, int severity) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QOpenGLDebugMessage(QOpenGLDebugMessage::createThirdPartyMessage(text_QString, static_cast<GLuint>(id), static_cast<QOpenGLDebugMessage::Severity>(severity)));
}

QOpenGLDebugMessage* QOpenGLDebugMessage_CreateThirdPartyMessage4(const libqt_string text, uint32_t id, int severity, int typeVal) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new QOpenGLDebugMessage(QOpenGLDebugMessage::createThirdPartyMessage(text_QString, static_cast<GLuint>(id), static_cast<QOpenGLDebugMessage::Severity>(severity), static_cast<QOpenGLDebugMessage::Type>(typeVal)));
}

void QOpenGLDebugMessage_Delete(QOpenGLDebugMessage* self) {
    delete self;
}

QOpenGLDebugLogger* QOpenGLDebugLogger_new() {
    return new VirtualQOpenGLDebugLogger();
}

QOpenGLDebugLogger* QOpenGLDebugLogger_new2(QObject* parent) {
    return new VirtualQOpenGLDebugLogger(parent);
}

QMetaObject* QOpenGLDebugLogger_MetaObject(const QOpenGLDebugLogger* self) {
    return (QMetaObject*)self->metaObject();
}

void* QOpenGLDebugLogger_Metacast(QOpenGLDebugLogger* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QOpenGLDebugLogger_Metacall(QOpenGLDebugLogger* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QOpenGLDebugLogger_Tr(const char* s) {
    auto _ret = QOpenGLDebugLogger::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QOpenGLDebugLogger_Initialize(QOpenGLDebugLogger* self) {
    return self->initialize();
}

bool QOpenGLDebugLogger_IsLogging(const QOpenGLDebugLogger* self) {
    return self->isLogging();
}

int QOpenGLDebugLogger_LoggingMode(const QOpenGLDebugLogger* self) {
    return static_cast<int>(self->loggingMode());
}

long long QOpenGLDebugLogger_MaximumMessageLength(const QOpenGLDebugLogger* self) {
    return static_cast<long long>(self->maximumMessageLength());
}

void QOpenGLDebugLogger_PushGroup(QOpenGLDebugLogger* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->pushGroup(name_QString);
}

void QOpenGLDebugLogger_PopGroup(QOpenGLDebugLogger* self) {
    self->popGroup();
}

void QOpenGLDebugLogger_EnableMessages(QOpenGLDebugLogger* self) {
    self->enableMessages();
}

void QOpenGLDebugLogger_EnableMessages2(QOpenGLDebugLogger* self, const libqt_list /* of uint32_t */ ids) {
    QList<GLuint> ids_QList;
    ids_QList.reserve(ids.len);
    uint32_t* ids_arr = static_cast<uint32_t*>(ids.data);
    for (size_t i = 0; i < ids.len; ++i) {
        ids_QList.push_back(static_cast<GLuint>(ids_arr[i]));
    }
    self->enableMessages(ids_QList);
}

void QOpenGLDebugLogger_DisableMessages(QOpenGLDebugLogger* self) {
    self->disableMessages();
}

void QOpenGLDebugLogger_DisableMessages2(QOpenGLDebugLogger* self, const libqt_list /* of uint32_t */ ids) {
    QList<GLuint> ids_QList;
    ids_QList.reserve(ids.len);
    uint32_t* ids_arr = static_cast<uint32_t*>(ids.data);
    for (size_t i = 0; i < ids.len; ++i) {
        ids_QList.push_back(static_cast<GLuint>(ids_arr[i]));
    }
    self->disableMessages(ids_QList);
}

libqt_list /* of QOpenGLDebugMessage* */ QOpenGLDebugLogger_LoggedMessages(const QOpenGLDebugLogger* self) {
    QList<QOpenGLDebugMessage> _ret = self->loggedMessages();
    // Convert QList<> from C++ memory to manually-managed C memory
    QOpenGLDebugMessage** _arr = static_cast<QOpenGLDebugMessage**>(malloc(sizeof(QOpenGLDebugMessage*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QOpenGLDebugMessage(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QOpenGLDebugLogger_LogMessage(QOpenGLDebugLogger* self, const QOpenGLDebugMessage* debugMessage) {
    self->logMessage(*debugMessage);
}

void QOpenGLDebugLogger_StartLogging(QOpenGLDebugLogger* self) {
    self->startLogging();
}

void QOpenGLDebugLogger_StopLogging(QOpenGLDebugLogger* self) {
    self->stopLogging();
}

void QOpenGLDebugLogger_MessageLogged(QOpenGLDebugLogger* self, const QOpenGLDebugMessage* debugMessage) {
    self->messageLogged(*debugMessage);
}

void QOpenGLDebugLogger_Connect_MessageLogged(QOpenGLDebugLogger* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLDebugLogger*, QOpenGLDebugMessage*) = reinterpret_cast<void (*)(QOpenGLDebugLogger*, QOpenGLDebugMessage*)>(slot);
    QOpenGLDebugLogger::connect(self,
                                static_cast<void (QOpenGLDebugLogger::*)(const QOpenGLDebugMessage&)>(&QOpenGLDebugLogger::messageLogged),
                                [self, slotFunc](const QOpenGLDebugMessage& debugMessage) {
                                    const QOpenGLDebugMessage& debugMessage_ret = debugMessage;
                                    // Cast returned reference into pointer
                                    QOpenGLDebugMessage* sigval1 = const_cast<QOpenGLDebugMessage*>(&debugMessage_ret);
                                    slotFunc(self, sigval1);
                                });
}

libqt_string QOpenGLDebugLogger_Tr2(const char* s, const char* c) {
    auto _ret = QOpenGLDebugLogger::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QOpenGLDebugLogger_Tr3(const char* s, const char* c, int n) {
    auto _ret = QOpenGLDebugLogger::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QOpenGLDebugLogger_PushGroup2(QOpenGLDebugLogger* self, const libqt_string name, uint32_t id) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->pushGroup(name_QString, static_cast<GLuint>(id));
}

void QOpenGLDebugLogger_PushGroup3(QOpenGLDebugLogger* self, const libqt_string name, uint32_t id, int source) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->pushGroup(name_QString, static_cast<GLuint>(id), static_cast<QOpenGLDebugMessage::Source>(source));
}

void QOpenGLDebugLogger_EnableMessages1(QOpenGLDebugLogger* self, int sources) {
    self->enableMessages(static_cast<QOpenGLDebugMessage::Sources>(sources));
}

void QOpenGLDebugLogger_EnableMessages22(QOpenGLDebugLogger* self, int sources, int types) {
    self->enableMessages(static_cast<QOpenGLDebugMessage::Sources>(sources), static_cast<QOpenGLDebugMessage::Types>(types));
}

void QOpenGLDebugLogger_EnableMessages3(QOpenGLDebugLogger* self, int sources, int types, int severities) {
    self->enableMessages(static_cast<QOpenGLDebugMessage::Sources>(sources), static_cast<QOpenGLDebugMessage::Types>(types), static_cast<QOpenGLDebugMessage::Severities>(severities));
}

void QOpenGLDebugLogger_EnableMessages23(QOpenGLDebugLogger* self, const libqt_list /* of uint32_t */ ids, int sources) {
    QList<GLuint> ids_QList;
    ids_QList.reserve(ids.len);
    uint32_t* ids_arr = static_cast<uint32_t*>(ids.data);
    for (size_t i = 0; i < ids.len; ++i) {
        ids_QList.push_back(static_cast<GLuint>(ids_arr[i]));
    }
    self->enableMessages(ids_QList, static_cast<QOpenGLDebugMessage::Sources>(sources));
}

void QOpenGLDebugLogger_EnableMessages32(QOpenGLDebugLogger* self, const libqt_list /* of uint32_t */ ids, int sources, int types) {
    QList<GLuint> ids_QList;
    ids_QList.reserve(ids.len);
    uint32_t* ids_arr = static_cast<uint32_t*>(ids.data);
    for (size_t i = 0; i < ids.len; ++i) {
        ids_QList.push_back(static_cast<GLuint>(ids_arr[i]));
    }
    self->enableMessages(ids_QList, static_cast<QOpenGLDebugMessage::Sources>(sources), static_cast<QOpenGLDebugMessage::Types>(types));
}

void QOpenGLDebugLogger_DisableMessages1(QOpenGLDebugLogger* self, int sources) {
    self->disableMessages(static_cast<QOpenGLDebugMessage::Sources>(sources));
}

void QOpenGLDebugLogger_DisableMessages22(QOpenGLDebugLogger* self, int sources, int types) {
    self->disableMessages(static_cast<QOpenGLDebugMessage::Sources>(sources), static_cast<QOpenGLDebugMessage::Types>(types));
}

void QOpenGLDebugLogger_DisableMessages3(QOpenGLDebugLogger* self, int sources, int types, int severities) {
    self->disableMessages(static_cast<QOpenGLDebugMessage::Sources>(sources), static_cast<QOpenGLDebugMessage::Types>(types), static_cast<QOpenGLDebugMessage::Severities>(severities));
}

void QOpenGLDebugLogger_DisableMessages23(QOpenGLDebugLogger* self, const libqt_list /* of uint32_t */ ids, int sources) {
    QList<GLuint> ids_QList;
    ids_QList.reserve(ids.len);
    uint32_t* ids_arr = static_cast<uint32_t*>(ids.data);
    for (size_t i = 0; i < ids.len; ++i) {
        ids_QList.push_back(static_cast<GLuint>(ids_arr[i]));
    }
    self->disableMessages(ids_QList, static_cast<QOpenGLDebugMessage::Sources>(sources));
}

void QOpenGLDebugLogger_DisableMessages32(QOpenGLDebugLogger* self, const libqt_list /* of uint32_t */ ids, int sources, int types) {
    QList<GLuint> ids_QList;
    ids_QList.reserve(ids.len);
    uint32_t* ids_arr = static_cast<uint32_t*>(ids.data);
    for (size_t i = 0; i < ids.len; ++i) {
        ids_QList.push_back(static_cast<GLuint>(ids_arr[i]));
    }
    self->disableMessages(ids_QList, static_cast<QOpenGLDebugMessage::Sources>(sources), static_cast<QOpenGLDebugMessage::Types>(types));
}

void QOpenGLDebugLogger_StartLogging1(QOpenGLDebugLogger* self, int loggingMode) {
    self->startLogging(static_cast<QOpenGLDebugLogger::LoggingMode>(loggingMode));
}

// Base class handler implementation
QMetaObject* QOpenGLDebugLogger_SuperMetaObject(const QOpenGLDebugLogger* self) {
    return (QMetaObject*)self->QOpenGLDebugLogger::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QOpenGLDebugLogger_OnMetaObject(QOpenGLDebugLogger* self, intptr_t slot) {
    if (auto* vqopengldebuglogger = const_cast<VirtualQOpenGLDebugLogger*>(dynamic_cast<const VirtualQOpenGLDebugLogger*>(self)))
        vqopengldebuglogger->qopengldebuglogger_metaobject_callback = reinterpret_cast<VirtualQOpenGLDebugLogger::QOpenGLDebugLogger_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QOpenGLDebugLogger_SuperMetacast(QOpenGLDebugLogger* self, const char* param1) {
    return self->QOpenGLDebugLogger::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLDebugLogger_OnMetacast(QOpenGLDebugLogger* self, intptr_t slot) {
    if (auto* vqopengldebuglogger = dynamic_cast<VirtualQOpenGLDebugLogger*>(self))
        vqopengldebuglogger->qopengldebuglogger_metacast_callback = reinterpret_cast<VirtualQOpenGLDebugLogger::QOpenGLDebugLogger_Metacast_Callback>(slot);
}

// Base class handler implementation
int QOpenGLDebugLogger_SuperMetacall(QOpenGLDebugLogger* self, int param1, int param2, void** param3) {
    return self->QOpenGLDebugLogger::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLDebugLogger_OnMetacall(QOpenGLDebugLogger* self, intptr_t slot) {
    if (auto* vqopengldebuglogger = dynamic_cast<VirtualQOpenGLDebugLogger*>(self))
        vqopengldebuglogger->qopengldebuglogger_metacall_callback = reinterpret_cast<VirtualQOpenGLDebugLogger::QOpenGLDebugLogger_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QOpenGLDebugLogger_Event(QOpenGLDebugLogger* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QOpenGLDebugLogger_SuperEvent(QOpenGLDebugLogger* self, QEvent* event) {
    return self->QOpenGLDebugLogger::event(event);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLDebugLogger_OnEvent(QOpenGLDebugLogger* self, intptr_t slot) {
    if (auto* vqopengldebuglogger = dynamic_cast<VirtualQOpenGLDebugLogger*>(self))
        vqopengldebuglogger->qopengldebuglogger_event_callback = reinterpret_cast<VirtualQOpenGLDebugLogger::QOpenGLDebugLogger_Event_Callback>(slot);
}

// Derived class handler implementation
bool QOpenGLDebugLogger_EventFilter(QOpenGLDebugLogger* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QOpenGLDebugLogger_SuperEventFilter(QOpenGLDebugLogger* self, QObject* watched, QEvent* event) {
    return self->QOpenGLDebugLogger::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QOpenGLDebugLogger_OnEventFilter(QOpenGLDebugLogger* self, intptr_t slot) {
    if (auto* vqopengldebuglogger = dynamic_cast<VirtualQOpenGLDebugLogger*>(self))
        vqopengldebuglogger->qopengldebuglogger_eventfilter_callback = reinterpret_cast<VirtualQOpenGLDebugLogger::QOpenGLDebugLogger_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLDebugLogger_TimerEvent(QOpenGLDebugLogger* self, QTimerEvent* event) {
    auto* vqopengldebuglogger = dynamic_cast<VirtualQOpenGLDebugLogger*>(self);
    if (vqopengldebuglogger) {
        vqopengldebuglogger->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLDebugLogger::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLDebugLogger_SuperTimerEvent(QOpenGLDebugLogger* self, QTimerEvent* event) {
    if (auto* vqopengldebuglogger = dynamic_cast<VirtualQOpenGLDebugLogger*>(self)) {
        vqopengldebuglogger->QOpenGLDebugLogger::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLDebugLogger::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLDebugLogger_OnTimerEvent(QOpenGLDebugLogger* self, intptr_t slot) {
    if (auto* vqopengldebuglogger = dynamic_cast<VirtualQOpenGLDebugLogger*>(self))
        vqopengldebuglogger->qopengldebuglogger_timerevent_callback = reinterpret_cast<VirtualQOpenGLDebugLogger::QOpenGLDebugLogger_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLDebugLogger_ChildEvent(QOpenGLDebugLogger* self, QChildEvent* event) {
    auto* vqopengldebuglogger = dynamic_cast<VirtualQOpenGLDebugLogger*>(self);
    if (vqopengldebuglogger) {
        vqopengldebuglogger->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLDebugLogger::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLDebugLogger_SuperChildEvent(QOpenGLDebugLogger* self, QChildEvent* event) {
    if (auto* vqopengldebuglogger = dynamic_cast<VirtualQOpenGLDebugLogger*>(self)) {
        vqopengldebuglogger->QOpenGLDebugLogger::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLDebugLogger::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLDebugLogger_OnChildEvent(QOpenGLDebugLogger* self, intptr_t slot) {
    if (auto* vqopengldebuglogger = dynamic_cast<VirtualQOpenGLDebugLogger*>(self))
        vqopengldebuglogger->qopengldebuglogger_childevent_callback = reinterpret_cast<VirtualQOpenGLDebugLogger::QOpenGLDebugLogger_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLDebugLogger_CustomEvent(QOpenGLDebugLogger* self, QEvent* event) {
    auto* vqopengldebuglogger = dynamic_cast<VirtualQOpenGLDebugLogger*>(self);
    if (vqopengldebuglogger) {
        vqopengldebuglogger->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOpenGLDebugLogger::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLDebugLogger_SuperCustomEvent(QOpenGLDebugLogger* self, QEvent* event) {
    if (auto* vqopengldebuglogger = dynamic_cast<VirtualQOpenGLDebugLogger*>(self)) {
        vqopengldebuglogger->QOpenGLDebugLogger::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QOpenGLDebugLogger::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLDebugLogger_OnCustomEvent(QOpenGLDebugLogger* self, intptr_t slot) {
    if (auto* vqopengldebuglogger = dynamic_cast<VirtualQOpenGLDebugLogger*>(self))
        vqopengldebuglogger->qopengldebuglogger_customevent_callback = reinterpret_cast<VirtualQOpenGLDebugLogger::QOpenGLDebugLogger_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLDebugLogger_ConnectNotify(QOpenGLDebugLogger* self, const QMetaMethod* signal) {
    auto* vqopengldebuglogger = dynamic_cast<VirtualQOpenGLDebugLogger*>(self);
    if (vqopengldebuglogger) {
        vqopengldebuglogger->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QOpenGLDebugLogger::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLDebugLogger_SuperConnectNotify(QOpenGLDebugLogger* self, const QMetaMethod* signal) {
    if (auto* vqopengldebuglogger = dynamic_cast<VirtualQOpenGLDebugLogger*>(self)) {
        vqopengldebuglogger->QOpenGLDebugLogger::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QOpenGLDebugLogger::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLDebugLogger_OnConnectNotify(QOpenGLDebugLogger* self, intptr_t slot) {
    if (auto* vqopengldebuglogger = dynamic_cast<VirtualQOpenGLDebugLogger*>(self))
        vqopengldebuglogger->qopengldebuglogger_connectnotify_callback = reinterpret_cast<VirtualQOpenGLDebugLogger::QOpenGLDebugLogger_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QOpenGLDebugLogger_DisconnectNotify(QOpenGLDebugLogger* self, const QMetaMethod* signal) {
    auto* vqopengldebuglogger = dynamic_cast<VirtualQOpenGLDebugLogger*>(self);
    if (vqopengldebuglogger) {
        vqopengldebuglogger->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QOpenGLDebugLogger::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QOpenGLDebugLogger_SuperDisconnectNotify(QOpenGLDebugLogger* self, const QMetaMethod* signal) {
    if (auto* vqopengldebuglogger = dynamic_cast<VirtualQOpenGLDebugLogger*>(self)) {
        vqopengldebuglogger->QOpenGLDebugLogger::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QOpenGLDebugLogger::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOpenGLDebugLogger_OnDisconnectNotify(QOpenGLDebugLogger* self, intptr_t slot) {
    if (auto* vqopengldebuglogger = dynamic_cast<VirtualQOpenGLDebugLogger*>(self))
        vqopengldebuglogger->qopengldebuglogger_disconnectnotify_callback = reinterpret_cast<VirtualQOpenGLDebugLogger::QOpenGLDebugLogger_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QOpenGLDebugLogger_Sender(const QOpenGLDebugLogger* self) {
    if (auto* vqopengldebuglogger = const_cast<VirtualQOpenGLDebugLogger*>(dynamic_cast<const VirtualQOpenGLDebugLogger*>(self))) {
        return vqopengldebuglogger->VirtualQOpenGLDebugLogger::sender();
    } else
        qFatal("Error: Protected method QOpenGLDebugLogger::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QOpenGLDebugLogger_SenderSignalIndex(const QOpenGLDebugLogger* self) {
    if (auto* vqopengldebuglogger = const_cast<VirtualQOpenGLDebugLogger*>(dynamic_cast<const VirtualQOpenGLDebugLogger*>(self))) {
        return vqopengldebuglogger->VirtualQOpenGLDebugLogger::senderSignalIndex();
    } else
        qFatal("Error: Protected method QOpenGLDebugLogger::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QOpenGLDebugLogger_Receivers(const QOpenGLDebugLogger* self, const char* signal) {
    if (auto* vqopengldebuglogger = const_cast<VirtualQOpenGLDebugLogger*>(dynamic_cast<const VirtualQOpenGLDebugLogger*>(self))) {
        return vqopengldebuglogger->VirtualQOpenGLDebugLogger::receivers(signal);
    } else
        qFatal("Error: Protected method QOpenGLDebugLogger::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QOpenGLDebugLogger_IsSignalConnected(const QOpenGLDebugLogger* self, const QMetaMethod* signal) {
    if (auto* vqopengldebuglogger = const_cast<VirtualQOpenGLDebugLogger*>(dynamic_cast<const VirtualQOpenGLDebugLogger*>(self))) {
        return vqopengldebuglogger->VirtualQOpenGLDebugLogger::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QOpenGLDebugLogger::isSignalConnected called without a directly constructed type");
}

void QOpenGLDebugLogger_Delete(QOpenGLDebugLogger* self) {
    delete self;
}
