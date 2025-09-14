#include <KAbstractFileItemActionPlugin>
#include <KFileItemListProperties>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <kabstractfileitemactionplugin.h>
#include "libkabstractfileitemactionplugin.h"
#include "libkabstractfileitemactionplugin.hxx"

KAbstractFileItemActionPlugin* KAbstractFileItemActionPlugin_new(QObject* parent) {
    return new VirtualKAbstractFileItemActionPlugin(parent);
}

QMetaObject* KAbstractFileItemActionPlugin_MetaObject(const KAbstractFileItemActionPlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* KAbstractFileItemActionPlugin_Metacast(KAbstractFileItemActionPlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KAbstractFileItemActionPlugin_Metacall(KAbstractFileItemActionPlugin* self, int param1, int param2, void** param3) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKAbstractFileItemActionPlugin*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KAbstractFileItemActionPlugin_Tr(const char* s) {
    QString _ret = KAbstractFileItemActionPlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QAction* */ KAbstractFileItemActionPlugin_Actions(KAbstractFileItemActionPlugin* self, const KFileItemListProperties* fileItemInfos, QWidget* parentWidget) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        QList<QAction*> _ret = vkabstractfileitemactionplugin->actions(*fileItemInfos, parentWidget);
        // Convert QList<> from C++ memory to manually-managed C memory
        QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QAction*> _ret = ((VirtualKAbstractFileItemActionPlugin*)self)->actions(*fileItemInfos, parentWidget);
        // Convert QList<> from C++ memory to manually-managed C memory
        QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

void KAbstractFileItemActionPlugin_Error(KAbstractFileItemActionPlugin* self, const libqt_string errorMessage) {
    QString errorMessage_QString = QString::fromUtf8(errorMessage.data, errorMessage.len);
    self->error(errorMessage_QString);
}

void KAbstractFileItemActionPlugin_Connect_Error(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    void (*slotFunc)(KAbstractFileItemActionPlugin*, const char*) = reinterpret_cast<void (*)(KAbstractFileItemActionPlugin*, const char*)>(slot);
    KAbstractFileItemActionPlugin::connect(self, &KAbstractFileItemActionPlugin::error, [self, slotFunc](const QString& errorMessage) {
        const QString errorMessage_ret = errorMessage;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray errorMessage_b = errorMessage_ret.toUtf8();
        const char* errorMessage_str = static_cast<const char*>(malloc(errorMessage_b.length() + 1));
        memcpy((void*)errorMessage_str, errorMessage_b.data(), errorMessage_b.length());
        ((char*)errorMessage_str)[errorMessage_b.length()] = '\0';
        const char* sigval1 = errorMessage_str;
        slotFunc(self, sigval1);
        libqt_free(errorMessage_str);
    });
}

libqt_string KAbstractFileItemActionPlugin_Tr2(const char* s, const char* c) {
    QString _ret = KAbstractFileItemActionPlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAbstractFileItemActionPlugin_Tr3(const char* s, const char* c, int n) {
    QString _ret = KAbstractFileItemActionPlugin::tr(s, c, static_cast<int>(n));
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
int KAbstractFileItemActionPlugin_QBaseMetacall(KAbstractFileItemActionPlugin* self, int param1, int param2, void** param3) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_Metacall_IsBase(true);
        return vkabstractfileitemactionplugin->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KAbstractFileItemActionPlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnMetacall(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_Metacall_Callback(reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of QAction* */ KAbstractFileItemActionPlugin_QBaseActions(KAbstractFileItemActionPlugin* self, const KFileItemListProperties* fileItemInfos, QWidget* parentWidget) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_Actions_IsBase(true);
        QList<QAction*> _ret = vkabstractfileitemactionplugin->actions(*fileItemInfos, parentWidget);
        // Convert QList<> from C++ memory to manually-managed C memory
        QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QAction*> _ret = ((VirtualKAbstractFileItemActionPlugin*)self)->actions(*fileItemInfos, parentWidget);
        // Convert QList<> from C++ memory to manually-managed C memory
        QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnActions(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_Actions_Callback(reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_Actions_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAbstractFileItemActionPlugin_Event(KAbstractFileItemActionPlugin* self, QEvent* event) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        return vkabstractfileitemactionplugin->event(event);
    } else {
        return self->KAbstractFileItemActionPlugin::event(event);
    }
}

// Base class handler implementation
bool KAbstractFileItemActionPlugin_QBaseEvent(KAbstractFileItemActionPlugin* self, QEvent* event) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_Event_IsBase(true);
        return vkabstractfileitemactionplugin->event(event);
    } else {
        return self->KAbstractFileItemActionPlugin::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnEvent(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_Event_Callback(reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAbstractFileItemActionPlugin_EventFilter(KAbstractFileItemActionPlugin* self, QObject* watched, QEvent* event) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        return vkabstractfileitemactionplugin->eventFilter(watched, event);
    } else {
        return self->KAbstractFileItemActionPlugin::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KAbstractFileItemActionPlugin_QBaseEventFilter(KAbstractFileItemActionPlugin* self, QObject* watched, QEvent* event) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_EventFilter_IsBase(true);
        return vkabstractfileitemactionplugin->eventFilter(watched, event);
    } else {
        return self->KAbstractFileItemActionPlugin::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnEventFilter(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_EventFilter_Callback(reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractFileItemActionPlugin_TimerEvent(KAbstractFileItemActionPlugin* self, QTimerEvent* event) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->timerEvent(event);
    } else {
        ((VirtualKAbstractFileItemActionPlugin*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KAbstractFileItemActionPlugin_QBaseTimerEvent(KAbstractFileItemActionPlugin* self, QTimerEvent* event) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_TimerEvent_IsBase(true);
        vkabstractfileitemactionplugin->timerEvent(event);
    } else {
        ((VirtualKAbstractFileItemActionPlugin*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnTimerEvent(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_TimerEvent_Callback(reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractFileItemActionPlugin_ChildEvent(KAbstractFileItemActionPlugin* self, QChildEvent* event) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->childEvent(event);
    } else {
        ((VirtualKAbstractFileItemActionPlugin*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KAbstractFileItemActionPlugin_QBaseChildEvent(KAbstractFileItemActionPlugin* self, QChildEvent* event) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_ChildEvent_IsBase(true);
        vkabstractfileitemactionplugin->childEvent(event);
    } else {
        ((VirtualKAbstractFileItemActionPlugin*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnChildEvent(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_ChildEvent_Callback(reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractFileItemActionPlugin_CustomEvent(KAbstractFileItemActionPlugin* self, QEvent* event) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->customEvent(event);
    } else {
        ((VirtualKAbstractFileItemActionPlugin*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KAbstractFileItemActionPlugin_QBaseCustomEvent(KAbstractFileItemActionPlugin* self, QEvent* event) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_CustomEvent_IsBase(true);
        vkabstractfileitemactionplugin->customEvent(event);
    } else {
        ((VirtualKAbstractFileItemActionPlugin*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnCustomEvent(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_CustomEvent_Callback(reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractFileItemActionPlugin_ConnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->connectNotify(*signal);
    } else {
        ((VirtualKAbstractFileItemActionPlugin*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KAbstractFileItemActionPlugin_QBaseConnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_ConnectNotify_IsBase(true);
        vkabstractfileitemactionplugin->connectNotify(*signal);
    } else {
        ((VirtualKAbstractFileItemActionPlugin*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnConnectNotify(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_ConnectNotify_Callback(reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KAbstractFileItemActionPlugin_DisconnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->disconnectNotify(*signal);
    } else {
        ((VirtualKAbstractFileItemActionPlugin*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KAbstractFileItemActionPlugin_QBaseDisconnectNotify(KAbstractFileItemActionPlugin* self, const QMetaMethod* signal) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_DisconnectNotify_IsBase(true);
        vkabstractfileitemactionplugin->disconnectNotify(*signal);
    } else {
        ((VirtualKAbstractFileItemActionPlugin*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnDisconnectNotify(KAbstractFileItemActionPlugin* self, intptr_t slot) {
    auto* vkabstractfileitemactionplugin = dynamic_cast<VirtualKAbstractFileItemActionPlugin*>(self);
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_DisconnectNotify_Callback(reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KAbstractFileItemActionPlugin_Sender(const KAbstractFileItemActionPlugin* self) {
    auto* vkabstractfileitemactionplugin = const_cast<VirtualKAbstractFileItemActionPlugin*>(dynamic_cast<const VirtualKAbstractFileItemActionPlugin*>(self));
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        return vkabstractfileitemactionplugin->sender();
    } else {
        return ((VirtualKAbstractFileItemActionPlugin*)self)->sender();
    }
}

// Base class handler implementation
QObject* KAbstractFileItemActionPlugin_QBaseSender(const KAbstractFileItemActionPlugin* self) {
    auto* vkabstractfileitemactionplugin = const_cast<VirtualKAbstractFileItemActionPlugin*>(dynamic_cast<const VirtualKAbstractFileItemActionPlugin*>(self));
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_Sender_IsBase(true);
        return vkabstractfileitemactionplugin->sender();
    } else {
        return ((VirtualKAbstractFileItemActionPlugin*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnSender(const KAbstractFileItemActionPlugin* self, intptr_t slot) {
    auto* vkabstractfileitemactionplugin = const_cast<VirtualKAbstractFileItemActionPlugin*>(dynamic_cast<const VirtualKAbstractFileItemActionPlugin*>(self));
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_Sender_Callback(reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KAbstractFileItemActionPlugin_SenderSignalIndex(const KAbstractFileItemActionPlugin* self) {
    auto* vkabstractfileitemactionplugin = const_cast<VirtualKAbstractFileItemActionPlugin*>(dynamic_cast<const VirtualKAbstractFileItemActionPlugin*>(self));
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        return vkabstractfileitemactionplugin->senderSignalIndex();
    } else {
        return ((VirtualKAbstractFileItemActionPlugin*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KAbstractFileItemActionPlugin_QBaseSenderSignalIndex(const KAbstractFileItemActionPlugin* self) {
    auto* vkabstractfileitemactionplugin = const_cast<VirtualKAbstractFileItemActionPlugin*>(dynamic_cast<const VirtualKAbstractFileItemActionPlugin*>(self));
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_SenderSignalIndex_IsBase(true);
        return vkabstractfileitemactionplugin->senderSignalIndex();
    } else {
        return ((VirtualKAbstractFileItemActionPlugin*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnSenderSignalIndex(const KAbstractFileItemActionPlugin* self, intptr_t slot) {
    auto* vkabstractfileitemactionplugin = const_cast<VirtualKAbstractFileItemActionPlugin*>(dynamic_cast<const VirtualKAbstractFileItemActionPlugin*>(self));
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_SenderSignalIndex_Callback(reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KAbstractFileItemActionPlugin_Receivers(const KAbstractFileItemActionPlugin* self, const char* signal) {
    auto* vkabstractfileitemactionplugin = const_cast<VirtualKAbstractFileItemActionPlugin*>(dynamic_cast<const VirtualKAbstractFileItemActionPlugin*>(self));
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        return vkabstractfileitemactionplugin->receivers(signal);
    } else {
        return ((VirtualKAbstractFileItemActionPlugin*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KAbstractFileItemActionPlugin_QBaseReceivers(const KAbstractFileItemActionPlugin* self, const char* signal) {
    auto* vkabstractfileitemactionplugin = const_cast<VirtualKAbstractFileItemActionPlugin*>(dynamic_cast<const VirtualKAbstractFileItemActionPlugin*>(self));
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_Receivers_IsBase(true);
        return vkabstractfileitemactionplugin->receivers(signal);
    } else {
        return ((VirtualKAbstractFileItemActionPlugin*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnReceivers(const KAbstractFileItemActionPlugin* self, intptr_t slot) {
    auto* vkabstractfileitemactionplugin = const_cast<VirtualKAbstractFileItemActionPlugin*>(dynamic_cast<const VirtualKAbstractFileItemActionPlugin*>(self));
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_Receivers_Callback(reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAbstractFileItemActionPlugin_IsSignalConnected(const KAbstractFileItemActionPlugin* self, const QMetaMethod* signal) {
    auto* vkabstractfileitemactionplugin = const_cast<VirtualKAbstractFileItemActionPlugin*>(dynamic_cast<const VirtualKAbstractFileItemActionPlugin*>(self));
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        return vkabstractfileitemactionplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualKAbstractFileItemActionPlugin*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KAbstractFileItemActionPlugin_QBaseIsSignalConnected(const KAbstractFileItemActionPlugin* self, const QMetaMethod* signal) {
    auto* vkabstractfileitemactionplugin = const_cast<VirtualKAbstractFileItemActionPlugin*>(dynamic_cast<const VirtualKAbstractFileItemActionPlugin*>(self));
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_IsSignalConnected_IsBase(true);
        return vkabstractfileitemactionplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualKAbstractFileItemActionPlugin*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAbstractFileItemActionPlugin_OnIsSignalConnected(const KAbstractFileItemActionPlugin* self, intptr_t slot) {
    auto* vkabstractfileitemactionplugin = const_cast<VirtualKAbstractFileItemActionPlugin*>(dynamic_cast<const VirtualKAbstractFileItemActionPlugin*>(self));
    if (vkabstractfileitemactionplugin && vkabstractfileitemactionplugin->isVirtualKAbstractFileItemActionPlugin) {
        vkabstractfileitemactionplugin->setKAbstractFileItemActionPlugin_IsSignalConnected_Callback(reinterpret_cast<VirtualKAbstractFileItemActionPlugin::KAbstractFileItemActionPlugin_IsSignalConnected_Callback>(slot));
    }
}

void KAbstractFileItemActionPlugin_Delete(KAbstractFileItemActionPlugin* self) {
    delete self;
}
