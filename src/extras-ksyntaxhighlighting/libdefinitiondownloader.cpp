#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__DefinitionDownloader
#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__Repository
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <definitiondownloader.h>
#include "libdefinitiondownloader.h"
#include "libdefinitiondownloader.hxx"

KSyntaxHighlighting__DefinitionDownloader* KSyntaxHighlighting__DefinitionDownloader_new(KSyntaxHighlighting__Repository* repo) {
    return new VirtualKSyntaxHighlightingDefinitionDownloader(repo);
}

KSyntaxHighlighting__DefinitionDownloader* KSyntaxHighlighting__DefinitionDownloader_new2(KSyntaxHighlighting__Repository* repo, QObject* parent) {
    return new VirtualKSyntaxHighlightingDefinitionDownloader(repo, parent);
}

QMetaObject* KSyntaxHighlighting__DefinitionDownloader_MetaObject(const KSyntaxHighlighting__DefinitionDownloader* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSyntaxHighlighting__DefinitionDownloader_Metacast(KSyntaxHighlighting__DefinitionDownloader* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSyntaxHighlighting__DefinitionDownloader_Metacall(KSyntaxHighlighting__DefinitionDownloader* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KSyntaxHighlighting__DefinitionDownloader_Tr(const char* s) {
    auto _ret = KSyntaxHighlighting::DefinitionDownloader::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSyntaxHighlighting__DefinitionDownloader_Start(KSyntaxHighlighting__DefinitionDownloader* self) {
    self->start();
}

void KSyntaxHighlighting__DefinitionDownloader_InformationMessage(KSyntaxHighlighting__DefinitionDownloader* self, const libqt_string msg) {
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    self->informationMessage(msg_QString);
}

void KSyntaxHighlighting__DefinitionDownloader_Connect_InformationMessage(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    void (*slotFunc)(KSyntaxHighlighting__DefinitionDownloader*, const char*) = reinterpret_cast<void (*)(KSyntaxHighlighting__DefinitionDownloader*, const char*)>(slot);
    KSyntaxHighlighting::DefinitionDownloader::connect(self,
                                                       static_cast<void (KSyntaxHighlighting::DefinitionDownloader::*)(const QString&)>(&KSyntaxHighlighting::DefinitionDownloader::informationMessage),
                                                       [self, slotFunc](const QString& msg) {
                                                           const auto msg_ret = msg;
                                                           // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                                           QByteArray msg_b = msg_ret.toUtf8();
                                                           auto msg_str_len = msg_b.length();
                                                           const char* msg_str = static_cast<const char*>(malloc(msg_str_len + 1));
                                                           memcpy((void*)msg_str, msg_b.data(), msg_str_len);
                                                           ((char*)msg_str)[msg_str_len] = '\0';
                                                           const char* sigval1 = msg_str;
                                                           slotFunc(self, sigval1);
                                                           libqt_free(msg_str);
                                                       });
}

void KSyntaxHighlighting__DefinitionDownloader_Done(KSyntaxHighlighting__DefinitionDownloader* self) {
    self->done();
}

void KSyntaxHighlighting__DefinitionDownloader_Connect_Done(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    void (*slotFunc)(KSyntaxHighlighting__DefinitionDownloader*) = reinterpret_cast<void (*)(KSyntaxHighlighting__DefinitionDownloader*)>(slot);
    KSyntaxHighlighting::DefinitionDownloader::connect(self,
                                                       static_cast<void (KSyntaxHighlighting::DefinitionDownloader::*)()>(&KSyntaxHighlighting::DefinitionDownloader::done),
                                                       [self, slotFunc]() {
                                                           slotFunc(self);
                                                       });
}

libqt_string KSyntaxHighlighting__DefinitionDownloader_Tr2(const char* s, const char* c) {
    auto _ret = KSyntaxHighlighting::DefinitionDownloader::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSyntaxHighlighting__DefinitionDownloader_Tr3(const char* s, const char* c, int n) {
    auto _ret = KSyntaxHighlighting::DefinitionDownloader::tr(s, c, static_cast<int>(n));
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
QMetaObject* KSyntaxHighlighting__DefinitionDownloader_SuperMetaObject(const KSyntaxHighlighting__DefinitionDownloader* self) {
    return (QMetaObject*)self->KSyntaxHighlighting::DefinitionDownloader::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnMetaObject(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingdefinitiondownloader = const_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(dynamic_cast<const VirtualKSyntaxHighlightingDefinitionDownloader*>(self)))
        vksyntaxhighlightingdefinitiondownloader->ksyntaxhighlighting__definitiondownloader_metaobject_callback = reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KSyntaxHighlighting__DefinitionDownloader_SuperMetacast(KSyntaxHighlighting__DefinitionDownloader* self, const char* param1) {
    return self->KSyntaxHighlighting::DefinitionDownloader::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnMetacast(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self))
        vksyntaxhighlightingdefinitiondownloader->ksyntaxhighlighting__definitiondownloader_metacast_callback = reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_Metacast_Callback>(slot);
}

// Base class handler implementation
int KSyntaxHighlighting__DefinitionDownloader_SuperMetacall(KSyntaxHighlighting__DefinitionDownloader* self, int param1, int param2, void** param3) {
    return self->KSyntaxHighlighting::DefinitionDownloader::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnMetacall(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self))
        vksyntaxhighlightingdefinitiondownloader->ksyntaxhighlighting__definitiondownloader_metacall_callback = reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool KSyntaxHighlighting__DefinitionDownloader_Event(KSyntaxHighlighting__DefinitionDownloader* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KSyntaxHighlighting__DefinitionDownloader_SuperEvent(KSyntaxHighlighting__DefinitionDownloader* self, QEvent* event) {
    return self->KSyntaxHighlighting::DefinitionDownloader::event(event);
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnEvent(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self))
        vksyntaxhighlightingdefinitiondownloader->ksyntaxhighlighting__definitiondownloader_event_callback = reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_Event_Callback>(slot);
}

// Derived class handler implementation
bool KSyntaxHighlighting__DefinitionDownloader_EventFilter(KSyntaxHighlighting__DefinitionDownloader* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KSyntaxHighlighting__DefinitionDownloader_SuperEventFilter(KSyntaxHighlighting__DefinitionDownloader* self, QObject* watched, QEvent* event) {
    return self->KSyntaxHighlighting::DefinitionDownloader::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnEventFilter(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self))
        vksyntaxhighlightingdefinitiondownloader->ksyntaxhighlighting__definitiondownloader_eventfilter_callback = reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_TimerEvent(KSyntaxHighlighting__DefinitionDownloader* self, QTimerEvent* event) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader) {
        vksyntaxhighlightingdefinitiondownloader->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSyntaxHighlighting::DefinitionDownloader::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_SuperTimerEvent(KSyntaxHighlighting__DefinitionDownloader* self, QTimerEvent* event) {
    if (auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self)) {
        vksyntaxhighlightingdefinitiondownloader->KSyntaxHighlighting::DefinitionDownloader::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KSyntaxHighlighting::DefinitionDownloader::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnTimerEvent(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self))
        vksyntaxhighlightingdefinitiondownloader->ksyntaxhighlighting__definitiondownloader_timerevent_callback = reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_ChildEvent(KSyntaxHighlighting__DefinitionDownloader* self, QChildEvent* event) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader) {
        vksyntaxhighlightingdefinitiondownloader->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSyntaxHighlighting::DefinitionDownloader::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_SuperChildEvent(KSyntaxHighlighting__DefinitionDownloader* self, QChildEvent* event) {
    if (auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self)) {
        vksyntaxhighlightingdefinitiondownloader->KSyntaxHighlighting::DefinitionDownloader::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KSyntaxHighlighting::DefinitionDownloader::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnChildEvent(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self))
        vksyntaxhighlightingdefinitiondownloader->ksyntaxhighlighting__definitiondownloader_childevent_callback = reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_CustomEvent(KSyntaxHighlighting__DefinitionDownloader* self, QEvent* event) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader) {
        vksyntaxhighlightingdefinitiondownloader->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSyntaxHighlighting::DefinitionDownloader::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_SuperCustomEvent(KSyntaxHighlighting__DefinitionDownloader* self, QEvent* event) {
    if (auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self)) {
        vksyntaxhighlightingdefinitiondownloader->KSyntaxHighlighting::DefinitionDownloader::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KSyntaxHighlighting::DefinitionDownloader::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnCustomEvent(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self))
        vksyntaxhighlightingdefinitiondownloader->ksyntaxhighlighting__definitiondownloader_customevent_callback = reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_ConnectNotify(KSyntaxHighlighting__DefinitionDownloader* self, const QMetaMethod* signal) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader) {
        vksyntaxhighlightingdefinitiondownloader->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSyntaxHighlighting::DefinitionDownloader::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_SuperConnectNotify(KSyntaxHighlighting__DefinitionDownloader* self, const QMetaMethod* signal) {
    if (auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self)) {
        vksyntaxhighlightingdefinitiondownloader->KSyntaxHighlighting::DefinitionDownloader::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSyntaxHighlighting::DefinitionDownloader::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnConnectNotify(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self))
        vksyntaxhighlightingdefinitiondownloader->ksyntaxhighlighting__definitiondownloader_connectnotify_callback = reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_DisconnectNotify(KSyntaxHighlighting__DefinitionDownloader* self, const QMetaMethod* signal) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader) {
        vksyntaxhighlightingdefinitiondownloader->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSyntaxHighlighting::DefinitionDownloader::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_SuperDisconnectNotify(KSyntaxHighlighting__DefinitionDownloader* self, const QMetaMethod* signal) {
    if (auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self)) {
        vksyntaxhighlightingdefinitiondownloader->KSyntaxHighlighting::DefinitionDownloader::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSyntaxHighlighting::DefinitionDownloader::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnDisconnectNotify(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    if (auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self))
        vksyntaxhighlightingdefinitiondownloader->ksyntaxhighlighting__definitiondownloader_disconnectnotify_callback = reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KSyntaxHighlighting__DefinitionDownloader_Sender(const KSyntaxHighlighting__DefinitionDownloader* self) {
    if (auto* vksyntaxhighlightingdefinitiondownloader = const_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(dynamic_cast<const VirtualKSyntaxHighlightingDefinitionDownloader*>(self))) {
        return vksyntaxhighlightingdefinitiondownloader->VirtualKSyntaxHighlightingDefinitionDownloader::sender();
    } else
        qFatal("Error: Protected method KSyntaxHighlighting::DefinitionDownloader::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KSyntaxHighlighting__DefinitionDownloader_SenderSignalIndex(const KSyntaxHighlighting__DefinitionDownloader* self) {
    if (auto* vksyntaxhighlightingdefinitiondownloader = const_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(dynamic_cast<const VirtualKSyntaxHighlightingDefinitionDownloader*>(self))) {
        return vksyntaxhighlightingdefinitiondownloader->VirtualKSyntaxHighlightingDefinitionDownloader::senderSignalIndex();
    } else
        qFatal("Error: Protected method KSyntaxHighlighting::DefinitionDownloader::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KSyntaxHighlighting__DefinitionDownloader_Receivers(const KSyntaxHighlighting__DefinitionDownloader* self, const char* signal) {
    if (auto* vksyntaxhighlightingdefinitiondownloader = const_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(dynamic_cast<const VirtualKSyntaxHighlightingDefinitionDownloader*>(self))) {
        return vksyntaxhighlightingdefinitiondownloader->VirtualKSyntaxHighlightingDefinitionDownloader::receivers(signal);
    } else
        qFatal("Error: Protected method KSyntaxHighlighting::DefinitionDownloader::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSyntaxHighlighting__DefinitionDownloader_IsSignalConnected(const KSyntaxHighlighting__DefinitionDownloader* self, const QMetaMethod* signal) {
    if (auto* vksyntaxhighlightingdefinitiondownloader = const_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(dynamic_cast<const VirtualKSyntaxHighlightingDefinitionDownloader*>(self))) {
        return vksyntaxhighlightingdefinitiondownloader->VirtualKSyntaxHighlightingDefinitionDownloader::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KSyntaxHighlighting::DefinitionDownloader::isSignalConnected called without a directly constructed type");
}

void KSyntaxHighlighting__DefinitionDownloader_Delete(KSyntaxHighlighting__DefinitionDownloader* self) {
    delete self;
}
