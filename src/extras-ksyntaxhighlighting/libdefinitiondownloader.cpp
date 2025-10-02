#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__DefinitionDownloader
#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__Repository
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
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
    auto* vksyntaxhighlighting__definitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlighting__definitiondownloader && vksyntaxhighlighting__definitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSyntaxHighlightingDefinitionDownloader*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KSyntaxHighlighting__DefinitionDownloader_Tr(const char* s) {
    QString _ret = KSyntaxHighlighting::DefinitionDownloader::tr(s);
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
    KSyntaxHighlighting::DefinitionDownloader::connect(self, &KSyntaxHighlighting::DefinitionDownloader::informationMessage, [self, slotFunc](const QString& msg) {
        const QString msg_ret = msg;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray msg_b = msg_ret.toUtf8();
        const char* msg_str = static_cast<const char*>(malloc(msg_b.length() + 1));
        memcpy((void*)msg_str, msg_b.data(), msg_b.length());
        ((char*)msg_str)[msg_b.length()] = '\0';
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
    KSyntaxHighlighting::DefinitionDownloader::connect(self, &KSyntaxHighlighting::DefinitionDownloader::done, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KSyntaxHighlighting__DefinitionDownloader_Tr2(const char* s, const char* c) {
    QString _ret = KSyntaxHighlighting::DefinitionDownloader::tr(s, c);
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
    QString _ret = KSyntaxHighlighting::DefinitionDownloader::tr(s, c, static_cast<int>(n));
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
int KSyntaxHighlighting__DefinitionDownloader_QBaseMetacall(KSyntaxHighlighting__DefinitionDownloader* self, int param1, int param2, void** param3) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_Metacall_IsBase(true);
        return vksyntaxhighlightingdefinitiondownloader->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KSyntaxHighlighting::DefinitionDownloader::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnMetacall(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_Metacall_Callback(reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSyntaxHighlighting__DefinitionDownloader_Event(KSyntaxHighlighting__DefinitionDownloader* self, QEvent* event) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        return vksyntaxhighlightingdefinitiondownloader->event(event);
    } else {
        return self->KSyntaxHighlighting::DefinitionDownloader::event(event);
    }
}

// Base class handler implementation
bool KSyntaxHighlighting__DefinitionDownloader_QBaseEvent(KSyntaxHighlighting__DefinitionDownloader* self, QEvent* event) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_Event_IsBase(true);
        return vksyntaxhighlightingdefinitiondownloader->event(event);
    } else {
        return self->KSyntaxHighlighting::DefinitionDownloader::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnEvent(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_Event_Callback(reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSyntaxHighlighting__DefinitionDownloader_EventFilter(KSyntaxHighlighting__DefinitionDownloader* self, QObject* watched, QEvent* event) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        return vksyntaxhighlightingdefinitiondownloader->eventFilter(watched, event);
    } else {
        return self->KSyntaxHighlighting::DefinitionDownloader::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KSyntaxHighlighting__DefinitionDownloader_QBaseEventFilter(KSyntaxHighlighting__DefinitionDownloader* self, QObject* watched, QEvent* event) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_EventFilter_IsBase(true);
        return vksyntaxhighlightingdefinitiondownloader->eventFilter(watched, event);
    } else {
        return self->KSyntaxHighlighting::DefinitionDownloader::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnEventFilter(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_EventFilter_Callback(reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_TimerEvent(KSyntaxHighlighting__DefinitionDownloader* self, QTimerEvent* event) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->timerEvent(event);
    } else {
        ((VirtualKSyntaxHighlightingDefinitionDownloader*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_QBaseTimerEvent(KSyntaxHighlighting__DefinitionDownloader* self, QTimerEvent* event) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_TimerEvent_IsBase(true);
        vksyntaxhighlightingdefinitiondownloader->timerEvent(event);
    } else {
        ((VirtualKSyntaxHighlightingDefinitionDownloader*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnTimerEvent(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_TimerEvent_Callback(reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_ChildEvent(KSyntaxHighlighting__DefinitionDownloader* self, QChildEvent* event) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->childEvent(event);
    } else {
        ((VirtualKSyntaxHighlightingDefinitionDownloader*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_QBaseChildEvent(KSyntaxHighlighting__DefinitionDownloader* self, QChildEvent* event) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_ChildEvent_IsBase(true);
        vksyntaxhighlightingdefinitiondownloader->childEvent(event);
    } else {
        ((VirtualKSyntaxHighlightingDefinitionDownloader*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnChildEvent(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_ChildEvent_Callback(reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_CustomEvent(KSyntaxHighlighting__DefinitionDownloader* self, QEvent* event) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->customEvent(event);
    } else {
        ((VirtualKSyntaxHighlightingDefinitionDownloader*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_QBaseCustomEvent(KSyntaxHighlighting__DefinitionDownloader* self, QEvent* event) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_CustomEvent_IsBase(true);
        vksyntaxhighlightingdefinitiondownloader->customEvent(event);
    } else {
        ((VirtualKSyntaxHighlightingDefinitionDownloader*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnCustomEvent(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_CustomEvent_Callback(reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_ConnectNotify(KSyntaxHighlighting__DefinitionDownloader* self, const QMetaMethod* signal) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->connectNotify(*signal);
    } else {
        ((VirtualKSyntaxHighlightingDefinitionDownloader*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_QBaseConnectNotify(KSyntaxHighlighting__DefinitionDownloader* self, const QMetaMethod* signal) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_ConnectNotify_IsBase(true);
        vksyntaxhighlightingdefinitiondownloader->connectNotify(*signal);
    } else {
        ((VirtualKSyntaxHighlightingDefinitionDownloader*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnConnectNotify(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_ConnectNotify_Callback(reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_DisconnectNotify(KSyntaxHighlighting__DefinitionDownloader* self, const QMetaMethod* signal) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->disconnectNotify(*signal);
    } else {
        ((VirtualKSyntaxHighlightingDefinitionDownloader*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KSyntaxHighlighting__DefinitionDownloader_QBaseDisconnectNotify(KSyntaxHighlighting__DefinitionDownloader* self, const QMetaMethod* signal) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_DisconnectNotify_IsBase(true);
        vksyntaxhighlightingdefinitiondownloader->disconnectNotify(*signal);
    } else {
        ((VirtualKSyntaxHighlightingDefinitionDownloader*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnDisconnectNotify(KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    auto* vksyntaxhighlightingdefinitiondownloader = dynamic_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(self);
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_DisconnectNotify_Callback(reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KSyntaxHighlighting__DefinitionDownloader_Sender(const KSyntaxHighlighting__DefinitionDownloader* self) {
    auto* vksyntaxhighlightingdefinitiondownloader = const_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(dynamic_cast<const VirtualKSyntaxHighlightingDefinitionDownloader*>(self));
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        return vksyntaxhighlightingdefinitiondownloader->sender();
    } else {
        return ((VirtualKSyntaxHighlightingDefinitionDownloader*)self)->sender();
    }
}

// Base class handler implementation
QObject* KSyntaxHighlighting__DefinitionDownloader_QBaseSender(const KSyntaxHighlighting__DefinitionDownloader* self) {
    auto* vksyntaxhighlightingdefinitiondownloader = const_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(dynamic_cast<const VirtualKSyntaxHighlightingDefinitionDownloader*>(self));
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_Sender_IsBase(true);
        return vksyntaxhighlightingdefinitiondownloader->sender();
    } else {
        return ((VirtualKSyntaxHighlightingDefinitionDownloader*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnSender(const KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    auto* vksyntaxhighlightingdefinitiondownloader = const_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(dynamic_cast<const VirtualKSyntaxHighlightingDefinitionDownloader*>(self));
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_Sender_Callback(reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KSyntaxHighlighting__DefinitionDownloader_SenderSignalIndex(const KSyntaxHighlighting__DefinitionDownloader* self) {
    auto* vksyntaxhighlightingdefinitiondownloader = const_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(dynamic_cast<const VirtualKSyntaxHighlightingDefinitionDownloader*>(self));
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        return vksyntaxhighlightingdefinitiondownloader->senderSignalIndex();
    } else {
        return ((VirtualKSyntaxHighlightingDefinitionDownloader*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KSyntaxHighlighting__DefinitionDownloader_QBaseSenderSignalIndex(const KSyntaxHighlighting__DefinitionDownloader* self) {
    auto* vksyntaxhighlightingdefinitiondownloader = const_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(dynamic_cast<const VirtualKSyntaxHighlightingDefinitionDownloader*>(self));
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_SenderSignalIndex_IsBase(true);
        return vksyntaxhighlightingdefinitiondownloader->senderSignalIndex();
    } else {
        return ((VirtualKSyntaxHighlightingDefinitionDownloader*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnSenderSignalIndex(const KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    auto* vksyntaxhighlightingdefinitiondownloader = const_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(dynamic_cast<const VirtualKSyntaxHighlightingDefinitionDownloader*>(self));
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_SenderSignalIndex_Callback(reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KSyntaxHighlighting__DefinitionDownloader_Receivers(const KSyntaxHighlighting__DefinitionDownloader* self, const char* signal) {
    auto* vksyntaxhighlightingdefinitiondownloader = const_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(dynamic_cast<const VirtualKSyntaxHighlightingDefinitionDownloader*>(self));
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        return vksyntaxhighlightingdefinitiondownloader->receivers(signal);
    } else {
        return ((VirtualKSyntaxHighlightingDefinitionDownloader*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KSyntaxHighlighting__DefinitionDownloader_QBaseReceivers(const KSyntaxHighlighting__DefinitionDownloader* self, const char* signal) {
    auto* vksyntaxhighlightingdefinitiondownloader = const_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(dynamic_cast<const VirtualKSyntaxHighlightingDefinitionDownloader*>(self));
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_Receivers_IsBase(true);
        return vksyntaxhighlightingdefinitiondownloader->receivers(signal);
    } else {
        return ((VirtualKSyntaxHighlightingDefinitionDownloader*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnReceivers(const KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    auto* vksyntaxhighlightingdefinitiondownloader = const_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(dynamic_cast<const VirtualKSyntaxHighlightingDefinitionDownloader*>(self));
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_Receivers_Callback(reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSyntaxHighlighting__DefinitionDownloader_IsSignalConnected(const KSyntaxHighlighting__DefinitionDownloader* self, const QMetaMethod* signal) {
    auto* vksyntaxhighlightingdefinitiondownloader = const_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(dynamic_cast<const VirtualKSyntaxHighlightingDefinitionDownloader*>(self));
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        return vksyntaxhighlightingdefinitiondownloader->isSignalConnected(*signal);
    } else {
        return ((VirtualKSyntaxHighlightingDefinitionDownloader*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KSyntaxHighlighting__DefinitionDownloader_QBaseIsSignalConnected(const KSyntaxHighlighting__DefinitionDownloader* self, const QMetaMethod* signal) {
    auto* vksyntaxhighlightingdefinitiondownloader = const_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(dynamic_cast<const VirtualKSyntaxHighlightingDefinitionDownloader*>(self));
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_IsSignalConnected_IsBase(true);
        return vksyntaxhighlightingdefinitiondownloader->isSignalConnected(*signal);
    } else {
        return ((VirtualKSyntaxHighlightingDefinitionDownloader*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__DefinitionDownloader_OnIsSignalConnected(const KSyntaxHighlighting__DefinitionDownloader* self, intptr_t slot) {
    auto* vksyntaxhighlightingdefinitiondownloader = const_cast<VirtualKSyntaxHighlightingDefinitionDownloader*>(dynamic_cast<const VirtualKSyntaxHighlightingDefinitionDownloader*>(self));
    if (vksyntaxhighlightingdefinitiondownloader && vksyntaxhighlightingdefinitiondownloader->isVirtualKSyntaxHighlightingDefinitionDownloader) {
        vksyntaxhighlightingdefinitiondownloader->setKSyntaxHighlighting__DefinitionDownloader_IsSignalConnected_Callback(reinterpret_cast<VirtualKSyntaxHighlightingDefinitionDownloader::KSyntaxHighlighting__DefinitionDownloader_IsSignalConnected_Callback>(slot));
    }
}

void KSyntaxHighlighting__DefinitionDownloader_Delete(KSyntaxHighlighting__DefinitionDownloader* self) {
    delete self;
}
