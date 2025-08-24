#include <KToolBarPopupAction>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <QWidgetAction>
#include <ktoolbarpopupaction.h>
#include "libktoolbarpopupaction.h"
#include "libktoolbarpopupaction.hxx"

KToolBarPopupAction* KToolBarPopupAction_new(const QIcon* icon, const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKToolBarPopupAction(*icon, text_QString, parent);
}

QMetaObject* KToolBarPopupAction_MetaObject(const KToolBarPopupAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KToolBarPopupAction_Metacast(KToolBarPopupAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KToolBarPopupAction_Metacall(KToolBarPopupAction* self, int param1, int param2, void** param3) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKToolBarPopupAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KToolBarPopupAction_OnMetacall(KToolBarPopupAction* self, intptr_t slot) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_Metacall_Callback(reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KToolBarPopupAction_QBaseMetacall(KToolBarPopupAction* self, int param1, int param2, void** param3) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_Metacall_IsBase(true);
        return vktoolbarpopupaction->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKToolBarPopupAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KToolBarPopupAction_Tr(const char* s) {
    QString _ret = KToolBarPopupAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QMenu* KToolBarPopupAction_PopupMenu(const KToolBarPopupAction* self) {
    return self->popupMenu();
}

int KToolBarPopupAction_PopupMode(const KToolBarPopupAction* self) {
    return static_cast<int>(self->popupMode());
}

void KToolBarPopupAction_SetPopupMode(KToolBarPopupAction* self, int popupMode) {
    self->setPopupMode(static_cast<KToolBarPopupAction::PopupMode>(popupMode));
}

libqt_string KToolBarPopupAction_Tr2(const char* s, const char* c) {
    QString _ret = KToolBarPopupAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KToolBarPopupAction_Tr3(const char* s, const char* c, int n) {
    QString _ret = KToolBarPopupAction::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QWidget* KToolBarPopupAction_CreateWidget(KToolBarPopupAction* self, QWidget* parent) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        return vktoolbarpopupaction->createWidget(parent);
    } else {
        return self->KToolBarPopupAction::createWidget(parent);
    }
}

// Base class handler implementation
QWidget* KToolBarPopupAction_QBaseCreateWidget(KToolBarPopupAction* self, QWidget* parent) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_CreateWidget_IsBase(true);
        return vktoolbarpopupaction->createWidget(parent);
    } else {
        return self->KToolBarPopupAction::createWidget(parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnCreateWidget(KToolBarPopupAction* self, intptr_t slot) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_CreateWidget_Callback(reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_CreateWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolBarPopupAction_Event(KToolBarPopupAction* self, QEvent* param1) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        return vktoolbarpopupaction->event(param1);
    } else {
        return ((VirtualKToolBarPopupAction*)self)->event(param1);
    }
}

// Base class handler implementation
bool KToolBarPopupAction_QBaseEvent(KToolBarPopupAction* self, QEvent* param1) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_Event_IsBase(true);
        return vktoolbarpopupaction->event(param1);
    } else {
        return ((VirtualKToolBarPopupAction*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnEvent(KToolBarPopupAction* self, intptr_t slot) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_Event_Callback(reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolBarPopupAction_EventFilter(KToolBarPopupAction* self, QObject* param1, QEvent* param2) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        return vktoolbarpopupaction->eventFilter(param1, param2);
    } else {
        return ((VirtualKToolBarPopupAction*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KToolBarPopupAction_QBaseEventFilter(KToolBarPopupAction* self, QObject* param1, QEvent* param2) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_EventFilter_IsBase(true);
        return vktoolbarpopupaction->eventFilter(param1, param2);
    } else {
        return ((VirtualKToolBarPopupAction*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnEventFilter(KToolBarPopupAction* self, intptr_t slot) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_EventFilter_Callback(reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBarPopupAction_DeleteWidget(KToolBarPopupAction* self, QWidget* widget) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->deleteWidget(widget);
    } else {
        ((VirtualKToolBarPopupAction*)self)->deleteWidget(widget);
    }
}

// Base class handler implementation
void KToolBarPopupAction_QBaseDeleteWidget(KToolBarPopupAction* self, QWidget* widget) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_DeleteWidget_IsBase(true);
        vktoolbarpopupaction->deleteWidget(widget);
    } else {
        ((VirtualKToolBarPopupAction*)self)->deleteWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnDeleteWidget(KToolBarPopupAction* self, intptr_t slot) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_DeleteWidget_Callback(reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_DeleteWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBarPopupAction_TimerEvent(KToolBarPopupAction* self, QTimerEvent* event) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->timerEvent(event);
    } else {
        ((VirtualKToolBarPopupAction*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KToolBarPopupAction_QBaseTimerEvent(KToolBarPopupAction* self, QTimerEvent* event) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_TimerEvent_IsBase(true);
        vktoolbarpopupaction->timerEvent(event);
    } else {
        ((VirtualKToolBarPopupAction*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnTimerEvent(KToolBarPopupAction* self, intptr_t slot) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_TimerEvent_Callback(reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBarPopupAction_ChildEvent(KToolBarPopupAction* self, QChildEvent* event) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->childEvent(event);
    } else {
        ((VirtualKToolBarPopupAction*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KToolBarPopupAction_QBaseChildEvent(KToolBarPopupAction* self, QChildEvent* event) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_ChildEvent_IsBase(true);
        vktoolbarpopupaction->childEvent(event);
    } else {
        ((VirtualKToolBarPopupAction*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnChildEvent(KToolBarPopupAction* self, intptr_t slot) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_ChildEvent_Callback(reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBarPopupAction_CustomEvent(KToolBarPopupAction* self, QEvent* event) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->customEvent(event);
    } else {
        ((VirtualKToolBarPopupAction*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KToolBarPopupAction_QBaseCustomEvent(KToolBarPopupAction* self, QEvent* event) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_CustomEvent_IsBase(true);
        vktoolbarpopupaction->customEvent(event);
    } else {
        ((VirtualKToolBarPopupAction*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnCustomEvent(KToolBarPopupAction* self, intptr_t slot) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_CustomEvent_Callback(reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBarPopupAction_ConnectNotify(KToolBarPopupAction* self, const QMetaMethod* signal) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->connectNotify(*signal);
    } else {
        ((VirtualKToolBarPopupAction*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KToolBarPopupAction_QBaseConnectNotify(KToolBarPopupAction* self, const QMetaMethod* signal) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_ConnectNotify_IsBase(true);
        vktoolbarpopupaction->connectNotify(*signal);
    } else {
        ((VirtualKToolBarPopupAction*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnConnectNotify(KToolBarPopupAction* self, intptr_t slot) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_ConnectNotify_Callback(reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBarPopupAction_DisconnectNotify(KToolBarPopupAction* self, const QMetaMethod* signal) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->disconnectNotify(*signal);
    } else {
        ((VirtualKToolBarPopupAction*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KToolBarPopupAction_QBaseDisconnectNotify(KToolBarPopupAction* self, const QMetaMethod* signal) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_DisconnectNotify_IsBase(true);
        vktoolbarpopupaction->disconnectNotify(*signal);
    } else {
        ((VirtualKToolBarPopupAction*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnDisconnectNotify(KToolBarPopupAction* self, intptr_t slot) {
    auto* vktoolbarpopupaction = dynamic_cast<VirtualKToolBarPopupAction*>(self);
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_DisconnectNotify_Callback(reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QWidget* */ KToolBarPopupAction_CreatedWidgets(const KToolBarPopupAction* self) {
    auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self));
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        QList<QWidget*> _ret = vktoolbarpopupaction->createdWidgets();
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
        QList<QWidget*> _ret = ((VirtualKToolBarPopupAction*)self)->createdWidgets();
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
libqt_list /* of QWidget* */ KToolBarPopupAction_QBaseCreatedWidgets(const KToolBarPopupAction* self) {
    auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self));
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_CreatedWidgets_IsBase(true);
        QList<QWidget*> _ret = vktoolbarpopupaction->createdWidgets();
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
        QList<QWidget*> _ret = ((VirtualKToolBarPopupAction*)self)->createdWidgets();
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
void KToolBarPopupAction_OnCreatedWidgets(const KToolBarPopupAction* self, intptr_t slot) {
    auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self));
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_CreatedWidgets_Callback(reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_CreatedWidgets_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KToolBarPopupAction_Sender(const KToolBarPopupAction* self) {
    auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self));
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        return vktoolbarpopupaction->sender();
    } else {
        return ((VirtualKToolBarPopupAction*)self)->sender();
    }
}

// Base class handler implementation
QObject* KToolBarPopupAction_QBaseSender(const KToolBarPopupAction* self) {
    auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self));
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_Sender_IsBase(true);
        return vktoolbarpopupaction->sender();
    } else {
        return ((VirtualKToolBarPopupAction*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnSender(const KToolBarPopupAction* self, intptr_t slot) {
    auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self));
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_Sender_Callback(reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KToolBarPopupAction_SenderSignalIndex(const KToolBarPopupAction* self) {
    auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self));
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        return vktoolbarpopupaction->senderSignalIndex();
    } else {
        return ((VirtualKToolBarPopupAction*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KToolBarPopupAction_QBaseSenderSignalIndex(const KToolBarPopupAction* self) {
    auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self));
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_SenderSignalIndex_IsBase(true);
        return vktoolbarpopupaction->senderSignalIndex();
    } else {
        return ((VirtualKToolBarPopupAction*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnSenderSignalIndex(const KToolBarPopupAction* self, intptr_t slot) {
    auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self));
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_SenderSignalIndex_Callback(reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KToolBarPopupAction_Receivers(const KToolBarPopupAction* self, const char* signal) {
    auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self));
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        return vktoolbarpopupaction->receivers(signal);
    } else {
        return ((VirtualKToolBarPopupAction*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KToolBarPopupAction_QBaseReceivers(const KToolBarPopupAction* self, const char* signal) {
    auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self));
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_Receivers_IsBase(true);
        return vktoolbarpopupaction->receivers(signal);
    } else {
        return ((VirtualKToolBarPopupAction*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnReceivers(const KToolBarPopupAction* self, intptr_t slot) {
    auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self));
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_Receivers_Callback(reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolBarPopupAction_IsSignalConnected(const KToolBarPopupAction* self, const QMetaMethod* signal) {
    auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self));
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        return vktoolbarpopupaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKToolBarPopupAction*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KToolBarPopupAction_QBaseIsSignalConnected(const KToolBarPopupAction* self, const QMetaMethod* signal) {
    auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self));
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_IsSignalConnected_IsBase(true);
        return vktoolbarpopupaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKToolBarPopupAction*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarPopupAction_OnIsSignalConnected(const KToolBarPopupAction* self, intptr_t slot) {
    auto* vktoolbarpopupaction = const_cast<VirtualKToolBarPopupAction*>(dynamic_cast<const VirtualKToolBarPopupAction*>(self));
    if (vktoolbarpopupaction && vktoolbarpopupaction->isVirtualKToolBarPopupAction) {
        vktoolbarpopupaction->setKToolBarPopupAction_IsSignalConnected_Callback(reinterpret_cast<VirtualKToolBarPopupAction::KToolBarPopupAction_IsSignalConnected_Callback>(slot));
    }
}

void KToolBarPopupAction_Delete(KToolBarPopupAction* self) {
    delete self;
}
