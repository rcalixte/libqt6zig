#include <KToolBarSpacerAction>
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
#include <QWidgetAction>
#include <ktoolbarspaceraction.h>
#include "libktoolbarspaceraction.h"
#include "libktoolbarspaceraction.hxx"

KToolBarSpacerAction* KToolBarSpacerAction_new(QObject* parent) {
    return new VirtualKToolBarSpacerAction(parent);
}

QMetaObject* KToolBarSpacerAction_MetaObject(const KToolBarSpacerAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KToolBarSpacerAction_Metacast(KToolBarSpacerAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KToolBarSpacerAction_Metacall(KToolBarSpacerAction* self, int param1, int param2, void** param3) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKToolBarSpacerAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KToolBarSpacerAction_Tr(const char* s) {
    QString _ret = KToolBarSpacerAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QWidget* KToolBarSpacerAction_CreateWidget(KToolBarSpacerAction* self, QWidget* parent) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        return self->createWidget(parent);
    } else {
        return ((VirtualKToolBarSpacerAction*)self)->createWidget(parent);
    }
}

libqt_string KToolBarSpacerAction_Tr2(const char* s, const char* c) {
    QString _ret = KToolBarSpacerAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KToolBarSpacerAction_Tr3(const char* s, const char* c, int n) {
    QString _ret = KToolBarSpacerAction::tr(s, c, static_cast<int>(n));
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
int KToolBarSpacerAction_QBaseMetacall(KToolBarSpacerAction* self, int param1, int param2, void** param3) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_Metacall_IsBase(true);
        return vktoolbarspaceraction->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KToolBarSpacerAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnMetacall(KToolBarSpacerAction* self, intptr_t slot) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_Metacall_Callback(reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* KToolBarSpacerAction_QBaseCreateWidget(KToolBarSpacerAction* self, QWidget* parent) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_CreateWidget_IsBase(true);
        return vktoolbarspaceraction->createWidget(parent);
    } else {
        return self->KToolBarSpacerAction::createWidget(parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnCreateWidget(KToolBarSpacerAction* self, intptr_t slot) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_CreateWidget_Callback(reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_CreateWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolBarSpacerAction_Event(KToolBarSpacerAction* self, QEvent* param1) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        return vktoolbarspaceraction->event(param1);
    } else {
        return ((VirtualKToolBarSpacerAction*)self)->event(param1);
    }
}

// Base class handler implementation
bool KToolBarSpacerAction_QBaseEvent(KToolBarSpacerAction* self, QEvent* param1) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_Event_IsBase(true);
        return vktoolbarspaceraction->event(param1);
    } else {
        return ((VirtualKToolBarSpacerAction*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnEvent(KToolBarSpacerAction* self, intptr_t slot) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_Event_Callback(reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolBarSpacerAction_EventFilter(KToolBarSpacerAction* self, QObject* param1, QEvent* param2) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        return vktoolbarspaceraction->eventFilter(param1, param2);
    } else {
        return ((VirtualKToolBarSpacerAction*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KToolBarSpacerAction_QBaseEventFilter(KToolBarSpacerAction* self, QObject* param1, QEvent* param2) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_EventFilter_IsBase(true);
        return vktoolbarspaceraction->eventFilter(param1, param2);
    } else {
        return ((VirtualKToolBarSpacerAction*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnEventFilter(KToolBarSpacerAction* self, intptr_t slot) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_EventFilter_Callback(reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBarSpacerAction_DeleteWidget(KToolBarSpacerAction* self, QWidget* widget) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->deleteWidget(widget);
    } else {
        ((VirtualKToolBarSpacerAction*)self)->deleteWidget(widget);
    }
}

// Base class handler implementation
void KToolBarSpacerAction_QBaseDeleteWidget(KToolBarSpacerAction* self, QWidget* widget) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_DeleteWidget_IsBase(true);
        vktoolbarspaceraction->deleteWidget(widget);
    } else {
        ((VirtualKToolBarSpacerAction*)self)->deleteWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnDeleteWidget(KToolBarSpacerAction* self, intptr_t slot) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_DeleteWidget_Callback(reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_DeleteWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBarSpacerAction_TimerEvent(KToolBarSpacerAction* self, QTimerEvent* event) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->timerEvent(event);
    } else {
        ((VirtualKToolBarSpacerAction*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KToolBarSpacerAction_QBaseTimerEvent(KToolBarSpacerAction* self, QTimerEvent* event) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_TimerEvent_IsBase(true);
        vktoolbarspaceraction->timerEvent(event);
    } else {
        ((VirtualKToolBarSpacerAction*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnTimerEvent(KToolBarSpacerAction* self, intptr_t slot) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_TimerEvent_Callback(reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBarSpacerAction_ChildEvent(KToolBarSpacerAction* self, QChildEvent* event) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->childEvent(event);
    } else {
        ((VirtualKToolBarSpacerAction*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KToolBarSpacerAction_QBaseChildEvent(KToolBarSpacerAction* self, QChildEvent* event) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_ChildEvent_IsBase(true);
        vktoolbarspaceraction->childEvent(event);
    } else {
        ((VirtualKToolBarSpacerAction*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnChildEvent(KToolBarSpacerAction* self, intptr_t slot) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_ChildEvent_Callback(reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBarSpacerAction_CustomEvent(KToolBarSpacerAction* self, QEvent* event) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->customEvent(event);
    } else {
        ((VirtualKToolBarSpacerAction*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KToolBarSpacerAction_QBaseCustomEvent(KToolBarSpacerAction* self, QEvent* event) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_CustomEvent_IsBase(true);
        vktoolbarspaceraction->customEvent(event);
    } else {
        ((VirtualKToolBarSpacerAction*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnCustomEvent(KToolBarSpacerAction* self, intptr_t slot) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_CustomEvent_Callback(reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBarSpacerAction_ConnectNotify(KToolBarSpacerAction* self, const QMetaMethod* signal) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->connectNotify(*signal);
    } else {
        ((VirtualKToolBarSpacerAction*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KToolBarSpacerAction_QBaseConnectNotify(KToolBarSpacerAction* self, const QMetaMethod* signal) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_ConnectNotify_IsBase(true);
        vktoolbarspaceraction->connectNotify(*signal);
    } else {
        ((VirtualKToolBarSpacerAction*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnConnectNotify(KToolBarSpacerAction* self, intptr_t slot) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_ConnectNotify_Callback(reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBarSpacerAction_DisconnectNotify(KToolBarSpacerAction* self, const QMetaMethod* signal) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->disconnectNotify(*signal);
    } else {
        ((VirtualKToolBarSpacerAction*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KToolBarSpacerAction_QBaseDisconnectNotify(KToolBarSpacerAction* self, const QMetaMethod* signal) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_DisconnectNotify_IsBase(true);
        vktoolbarspaceraction->disconnectNotify(*signal);
    } else {
        ((VirtualKToolBarSpacerAction*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnDisconnectNotify(KToolBarSpacerAction* self, intptr_t slot) {
    auto* vktoolbarspaceraction = dynamic_cast<VirtualKToolBarSpacerAction*>(self);
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_DisconnectNotify_Callback(reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QWidget* */ KToolBarSpacerAction_CreatedWidgets(const KToolBarSpacerAction* self) {
    auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self));
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        QList<QWidget*> _ret = vktoolbarspaceraction->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualKToolBarSpacerAction*)self)->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QWidget* */ KToolBarSpacerAction_QBaseCreatedWidgets(const KToolBarSpacerAction* self) {
    auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self));
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_CreatedWidgets_IsBase(true);
        QList<QWidget*> _ret = vktoolbarspaceraction->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualKToolBarSpacerAction*)self)->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
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
void KToolBarSpacerAction_OnCreatedWidgets(const KToolBarSpacerAction* self, intptr_t slot) {
    auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self));
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_CreatedWidgets_Callback(reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_CreatedWidgets_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KToolBarSpacerAction_Sender(const KToolBarSpacerAction* self) {
    auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self));
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        return vktoolbarspaceraction->sender();
    } else {
        return ((VirtualKToolBarSpacerAction*)self)->sender();
    }
}

// Base class handler implementation
QObject* KToolBarSpacerAction_QBaseSender(const KToolBarSpacerAction* self) {
    auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self));
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_Sender_IsBase(true);
        return vktoolbarspaceraction->sender();
    } else {
        return ((VirtualKToolBarSpacerAction*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnSender(const KToolBarSpacerAction* self, intptr_t slot) {
    auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self));
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_Sender_Callback(reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KToolBarSpacerAction_SenderSignalIndex(const KToolBarSpacerAction* self) {
    auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self));
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        return vktoolbarspaceraction->senderSignalIndex();
    } else {
        return ((VirtualKToolBarSpacerAction*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KToolBarSpacerAction_QBaseSenderSignalIndex(const KToolBarSpacerAction* self) {
    auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self));
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_SenderSignalIndex_IsBase(true);
        return vktoolbarspaceraction->senderSignalIndex();
    } else {
        return ((VirtualKToolBarSpacerAction*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnSenderSignalIndex(const KToolBarSpacerAction* self, intptr_t slot) {
    auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self));
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_SenderSignalIndex_Callback(reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KToolBarSpacerAction_Receivers(const KToolBarSpacerAction* self, const char* signal) {
    auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self));
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        return vktoolbarspaceraction->receivers(signal);
    } else {
        return ((VirtualKToolBarSpacerAction*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KToolBarSpacerAction_QBaseReceivers(const KToolBarSpacerAction* self, const char* signal) {
    auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self));
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_Receivers_IsBase(true);
        return vktoolbarspaceraction->receivers(signal);
    } else {
        return ((VirtualKToolBarSpacerAction*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnReceivers(const KToolBarSpacerAction* self, intptr_t slot) {
    auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self));
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_Receivers_Callback(reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolBarSpacerAction_IsSignalConnected(const KToolBarSpacerAction* self, const QMetaMethod* signal) {
    auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self));
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        return vktoolbarspaceraction->isSignalConnected(*signal);
    } else {
        return ((VirtualKToolBarSpacerAction*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KToolBarSpacerAction_QBaseIsSignalConnected(const KToolBarSpacerAction* self, const QMetaMethod* signal) {
    auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self));
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_IsSignalConnected_IsBase(true);
        return vktoolbarspaceraction->isSignalConnected(*signal);
    } else {
        return ((VirtualKToolBarSpacerAction*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarSpacerAction_OnIsSignalConnected(const KToolBarSpacerAction* self, intptr_t slot) {
    auto* vktoolbarspaceraction = const_cast<VirtualKToolBarSpacerAction*>(dynamic_cast<const VirtualKToolBarSpacerAction*>(self));
    if (vktoolbarspaceraction && vktoolbarspaceraction->isVirtualKToolBarSpacerAction) {
        vktoolbarspaceraction->setKToolBarSpacerAction_IsSignalConnected_Callback(reinterpret_cast<VirtualKToolBarSpacerAction::KToolBarSpacerAction_IsSignalConnected_Callback>(slot));
    }
}

void KToolBarSpacerAction_Delete(KToolBarSpacerAction* self) {
    delete self;
}
