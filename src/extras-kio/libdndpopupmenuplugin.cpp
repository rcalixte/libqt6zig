#include <KFileItemListProperties>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__DndPopupMenuPlugin
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
#include <QUrl>
#include <dndpopupmenuplugin.h>
#include "libdndpopupmenuplugin.h"
#include "libdndpopupmenuplugin.hxx"

KIO__DndPopupMenuPlugin* KIO__DndPopupMenuPlugin_new(QObject* parent) {
    return new VirtualKIODndPopupMenuPlugin(parent);
}

QMetaObject* KIO__DndPopupMenuPlugin_MetaObject(const KIO__DndPopupMenuPlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__DndPopupMenuPlugin_Metacast(KIO__DndPopupMenuPlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__DndPopupMenuPlugin_Metacall(KIO__DndPopupMenuPlugin* self, int param1, int param2, void** param3) {
    auto* vkio__dndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkio__dndpopupmenuplugin && vkio__dndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKIODndPopupMenuPlugin*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KIO__DndPopupMenuPlugin_Tr(const char* s) {
    QString _ret = KIO::DndPopupMenuPlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QAction* */ KIO__DndPopupMenuPlugin_Setup(KIO__DndPopupMenuPlugin* self, const KFileItemListProperties* popupMenuInfo, const QUrl* destination) {
    auto* vkio__dndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkio__dndpopupmenuplugin && vkio__dndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        QList<QAction*> _ret = vkio__dndpopupmenuplugin->setup(*popupMenuInfo, *destination);
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
        QList<QAction*> _ret = ((VirtualKIODndPopupMenuPlugin*)self)->setup(*popupMenuInfo, *destination);
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

libqt_string KIO__DndPopupMenuPlugin_Tr2(const char* s, const char* c) {
    QString _ret = KIO::DndPopupMenuPlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__DndPopupMenuPlugin_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::DndPopupMenuPlugin::tr(s, c, static_cast<int>(n));
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
int KIO__DndPopupMenuPlugin_QBaseMetacall(KIO__DndPopupMenuPlugin* self, int param1, int param2, void** param3) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_Metacall_IsBase(true);
        return vkiodndpopupmenuplugin->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::DndPopupMenuPlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnMetacall(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_Metacall_Callback(reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of QAction* */ KIO__DndPopupMenuPlugin_QBaseSetup(KIO__DndPopupMenuPlugin* self, const KFileItemListProperties* popupMenuInfo, const QUrl* destination) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_Setup_IsBase(true);
        QList<QAction*> _ret = vkiodndpopupmenuplugin->setup(*popupMenuInfo, *destination);
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
        QList<QAction*> _ret = ((VirtualKIODndPopupMenuPlugin*)self)->setup(*popupMenuInfo, *destination);
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
void KIO__DndPopupMenuPlugin_OnSetup(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_Setup_Callback(reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_Setup_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__DndPopupMenuPlugin_Event(KIO__DndPopupMenuPlugin* self, QEvent* event) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        return vkiodndpopupmenuplugin->event(event);
    } else {
        return self->KIO::DndPopupMenuPlugin::event(event);
    }
}

// Base class handler implementation
bool KIO__DndPopupMenuPlugin_QBaseEvent(KIO__DndPopupMenuPlugin* self, QEvent* event) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_Event_IsBase(true);
        return vkiodndpopupmenuplugin->event(event);
    } else {
        return self->KIO::DndPopupMenuPlugin::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnEvent(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_Event_Callback(reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__DndPopupMenuPlugin_EventFilter(KIO__DndPopupMenuPlugin* self, QObject* watched, QEvent* event) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        return vkiodndpopupmenuplugin->eventFilter(watched, event);
    } else {
        return self->KIO::DndPopupMenuPlugin::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KIO__DndPopupMenuPlugin_QBaseEventFilter(KIO__DndPopupMenuPlugin* self, QObject* watched, QEvent* event) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_EventFilter_IsBase(true);
        return vkiodndpopupmenuplugin->eventFilter(watched, event);
    } else {
        return self->KIO::DndPopupMenuPlugin::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnEventFilter(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_EventFilter_Callback(reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DndPopupMenuPlugin_TimerEvent(KIO__DndPopupMenuPlugin* self, QTimerEvent* event) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->timerEvent(event);
    } else {
        ((VirtualKIODndPopupMenuPlugin*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIO__DndPopupMenuPlugin_QBaseTimerEvent(KIO__DndPopupMenuPlugin* self, QTimerEvent* event) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_TimerEvent_IsBase(true);
        vkiodndpopupmenuplugin->timerEvent(event);
    } else {
        ((VirtualKIODndPopupMenuPlugin*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnTimerEvent(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_TimerEvent_Callback(reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DndPopupMenuPlugin_ChildEvent(KIO__DndPopupMenuPlugin* self, QChildEvent* event) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->childEvent(event);
    } else {
        ((VirtualKIODndPopupMenuPlugin*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIO__DndPopupMenuPlugin_QBaseChildEvent(KIO__DndPopupMenuPlugin* self, QChildEvent* event) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_ChildEvent_IsBase(true);
        vkiodndpopupmenuplugin->childEvent(event);
    } else {
        ((VirtualKIODndPopupMenuPlugin*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnChildEvent(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_ChildEvent_Callback(reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DndPopupMenuPlugin_CustomEvent(KIO__DndPopupMenuPlugin* self, QEvent* event) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->customEvent(event);
    } else {
        ((VirtualKIODndPopupMenuPlugin*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIO__DndPopupMenuPlugin_QBaseCustomEvent(KIO__DndPopupMenuPlugin* self, QEvent* event) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_CustomEvent_IsBase(true);
        vkiodndpopupmenuplugin->customEvent(event);
    } else {
        ((VirtualKIODndPopupMenuPlugin*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnCustomEvent(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_CustomEvent_Callback(reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DndPopupMenuPlugin_ConnectNotify(KIO__DndPopupMenuPlugin* self, const QMetaMethod* signal) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->connectNotify(*signal);
    } else {
        ((VirtualKIODndPopupMenuPlugin*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__DndPopupMenuPlugin_QBaseConnectNotify(KIO__DndPopupMenuPlugin* self, const QMetaMethod* signal) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_ConnectNotify_IsBase(true);
        vkiodndpopupmenuplugin->connectNotify(*signal);
    } else {
        ((VirtualKIODndPopupMenuPlugin*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnConnectNotify(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_ConnectNotify_Callback(reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__DndPopupMenuPlugin_DisconnectNotify(KIO__DndPopupMenuPlugin* self, const QMetaMethod* signal) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->disconnectNotify(*signal);
    } else {
        ((VirtualKIODndPopupMenuPlugin*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__DndPopupMenuPlugin_QBaseDisconnectNotify(KIO__DndPopupMenuPlugin* self, const QMetaMethod* signal) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_DisconnectNotify_IsBase(true);
        vkiodndpopupmenuplugin->disconnectNotify(*signal);
    } else {
        ((VirtualKIODndPopupMenuPlugin*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnDisconnectNotify(KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    auto* vkiodndpopupmenuplugin = dynamic_cast<VirtualKIODndPopupMenuPlugin*>(self);
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_DisconnectNotify_Callback(reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIO__DndPopupMenuPlugin_Sender(const KIO__DndPopupMenuPlugin* self) {
    auto* vkiodndpopupmenuplugin = const_cast<VirtualKIODndPopupMenuPlugin*>(dynamic_cast<const VirtualKIODndPopupMenuPlugin*>(self));
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        return vkiodndpopupmenuplugin->sender();
    } else {
        return ((VirtualKIODndPopupMenuPlugin*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIO__DndPopupMenuPlugin_QBaseSender(const KIO__DndPopupMenuPlugin* self) {
    auto* vkiodndpopupmenuplugin = const_cast<VirtualKIODndPopupMenuPlugin*>(dynamic_cast<const VirtualKIODndPopupMenuPlugin*>(self));
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_Sender_IsBase(true);
        return vkiodndpopupmenuplugin->sender();
    } else {
        return ((VirtualKIODndPopupMenuPlugin*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnSender(const KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    auto* vkiodndpopupmenuplugin = const_cast<VirtualKIODndPopupMenuPlugin*>(dynamic_cast<const VirtualKIODndPopupMenuPlugin*>(self));
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_Sender_Callback(reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__DndPopupMenuPlugin_SenderSignalIndex(const KIO__DndPopupMenuPlugin* self) {
    auto* vkiodndpopupmenuplugin = const_cast<VirtualKIODndPopupMenuPlugin*>(dynamic_cast<const VirtualKIODndPopupMenuPlugin*>(self));
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        return vkiodndpopupmenuplugin->senderSignalIndex();
    } else {
        return ((VirtualKIODndPopupMenuPlugin*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIO__DndPopupMenuPlugin_QBaseSenderSignalIndex(const KIO__DndPopupMenuPlugin* self) {
    auto* vkiodndpopupmenuplugin = const_cast<VirtualKIODndPopupMenuPlugin*>(dynamic_cast<const VirtualKIODndPopupMenuPlugin*>(self));
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_SenderSignalIndex_IsBase(true);
        return vkiodndpopupmenuplugin->senderSignalIndex();
    } else {
        return ((VirtualKIODndPopupMenuPlugin*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnSenderSignalIndex(const KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    auto* vkiodndpopupmenuplugin = const_cast<VirtualKIODndPopupMenuPlugin*>(dynamic_cast<const VirtualKIODndPopupMenuPlugin*>(self));
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__DndPopupMenuPlugin_Receivers(const KIO__DndPopupMenuPlugin* self, const char* signal) {
    auto* vkiodndpopupmenuplugin = const_cast<VirtualKIODndPopupMenuPlugin*>(dynamic_cast<const VirtualKIODndPopupMenuPlugin*>(self));
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        return vkiodndpopupmenuplugin->receivers(signal);
    } else {
        return ((VirtualKIODndPopupMenuPlugin*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIO__DndPopupMenuPlugin_QBaseReceivers(const KIO__DndPopupMenuPlugin* self, const char* signal) {
    auto* vkiodndpopupmenuplugin = const_cast<VirtualKIODndPopupMenuPlugin*>(dynamic_cast<const VirtualKIODndPopupMenuPlugin*>(self));
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_Receivers_IsBase(true);
        return vkiodndpopupmenuplugin->receivers(signal);
    } else {
        return ((VirtualKIODndPopupMenuPlugin*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnReceivers(const KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    auto* vkiodndpopupmenuplugin = const_cast<VirtualKIODndPopupMenuPlugin*>(dynamic_cast<const VirtualKIODndPopupMenuPlugin*>(self));
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_Receivers_Callback(reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__DndPopupMenuPlugin_IsSignalConnected(const KIO__DndPopupMenuPlugin* self, const QMetaMethod* signal) {
    auto* vkiodndpopupmenuplugin = const_cast<VirtualKIODndPopupMenuPlugin*>(dynamic_cast<const VirtualKIODndPopupMenuPlugin*>(self));
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        return vkiodndpopupmenuplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualKIODndPopupMenuPlugin*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIO__DndPopupMenuPlugin_QBaseIsSignalConnected(const KIO__DndPopupMenuPlugin* self, const QMetaMethod* signal) {
    auto* vkiodndpopupmenuplugin = const_cast<VirtualKIODndPopupMenuPlugin*>(dynamic_cast<const VirtualKIODndPopupMenuPlugin*>(self));
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_IsSignalConnected_IsBase(true);
        return vkiodndpopupmenuplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualKIODndPopupMenuPlugin*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__DndPopupMenuPlugin_OnIsSignalConnected(const KIO__DndPopupMenuPlugin* self, intptr_t slot) {
    auto* vkiodndpopupmenuplugin = const_cast<VirtualKIODndPopupMenuPlugin*>(dynamic_cast<const VirtualKIODndPopupMenuPlugin*>(self));
    if (vkiodndpopupmenuplugin && vkiodndpopupmenuplugin->isVirtualKIODndPopupMenuPlugin) {
        vkiodndpopupmenuplugin->setKIO__DndPopupMenuPlugin_IsSignalConnected_Callback(reinterpret_cast<VirtualKIODndPopupMenuPlugin::KIO__DndPopupMenuPlugin_IsSignalConnected_Callback>(slot));
    }
}

void KIO__DndPopupMenuPlugin_Delete(KIO__DndPopupMenuPlugin* self) {
    delete self;
}
