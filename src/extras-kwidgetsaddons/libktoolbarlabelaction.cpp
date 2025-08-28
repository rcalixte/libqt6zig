#include <KToolBarLabelAction>
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
#include <ktoolbarlabelaction.h>
#include "libktoolbarlabelaction.h"
#include "libktoolbarlabelaction.hxx"

KToolBarLabelAction* KToolBarLabelAction_new(const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKToolBarLabelAction(text_QString, parent);
}

KToolBarLabelAction* KToolBarLabelAction_new2(QAction* buddy, const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKToolBarLabelAction(buddy, text_QString, parent);
}

QMetaObject* KToolBarLabelAction_MetaObject(const KToolBarLabelAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KToolBarLabelAction_Metacast(KToolBarLabelAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KToolBarLabelAction_Metacall(KToolBarLabelAction* self, int param1, int param2, void** param3) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKToolBarLabelAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KToolBarLabelAction_OnMetacall(KToolBarLabelAction* self, intptr_t slot) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_Metacall_Callback(reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KToolBarLabelAction_QBaseMetacall(KToolBarLabelAction* self, int param1, int param2, void** param3) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_Metacall_IsBase(true);
        return vktoolbarlabelaction->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKToolBarLabelAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KToolBarLabelAction_Tr(const char* s) {
    QString _ret = KToolBarLabelAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KToolBarLabelAction_SetBuddy(KToolBarLabelAction* self, QAction* buddy) {
    self->setBuddy(buddy);
}

QAction* KToolBarLabelAction_Buddy(const KToolBarLabelAction* self) {
    return self->buddy();
}

QWidget* KToolBarLabelAction_CreateWidget(KToolBarLabelAction* self, QWidget* parent) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        return self->createWidget(parent);
    } else {
        return ((VirtualKToolBarLabelAction*)self)->createWidget(parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KToolBarLabelAction_OnCreateWidget(KToolBarLabelAction* self, intptr_t slot) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_CreateWidget_Callback(reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_CreateWidget_Callback>(slot));
    }
}

// Virtual base class handler implementation
QWidget* KToolBarLabelAction_QBaseCreateWidget(KToolBarLabelAction* self, QWidget* parent) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_CreateWidget_IsBase(true);
        return vktoolbarlabelaction->createWidget(parent);
    } else {
        return ((VirtualKToolBarLabelAction*)self)->createWidget(parent);
    }
}

void KToolBarLabelAction_TextChanged(KToolBarLabelAction* self, const libqt_string newText) {
    QString newText_QString = QString::fromUtf8(newText.data, newText.len);
    self->textChanged(newText_QString);
}

void KToolBarLabelAction_Connect_TextChanged(KToolBarLabelAction* self, intptr_t slot) {
    void (*slotFunc)(KToolBarLabelAction*, const char*) = reinterpret_cast<void (*)(KToolBarLabelAction*, const char*)>(slot);
    KToolBarLabelAction::connect(self, &KToolBarLabelAction::textChanged, [self, slotFunc](const QString& newText) {
        const QString newText_ret = newText;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray newText_b = newText_ret.toUtf8();
        const char* newText_str = static_cast<const char*>(malloc(newText_b.length() + 1));
        memcpy((void*)newText_str, newText_b.data(), newText_b.length());
        ((char*)newText_str)[newText_b.length()] = '\0';
        const char* sigval1 = newText_str;
        slotFunc(self, sigval1);
        libqt_free(newText_str);
    });
}

bool KToolBarLabelAction_Event(KToolBarLabelAction* self, QEvent* param1) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        return vktoolbarlabelaction->event(param1);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void KToolBarLabelAction_OnEvent(KToolBarLabelAction* self, intptr_t slot) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_Event_Callback(reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_Event_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool KToolBarLabelAction_QBaseEvent(KToolBarLabelAction* self, QEvent* param1) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_Event_IsBase(true);
        return vktoolbarlabelaction->event(param1);
    }
    return {};
}

bool KToolBarLabelAction_EventFilter(KToolBarLabelAction* self, QObject* watched, QEvent* event) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        return vktoolbarlabelaction->eventFilter(watched, event);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void KToolBarLabelAction_OnEventFilter(KToolBarLabelAction* self, intptr_t slot) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_EventFilter_Callback(reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_EventFilter_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool KToolBarLabelAction_QBaseEventFilter(KToolBarLabelAction* self, QObject* watched, QEvent* event) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_EventFilter_IsBase(true);
        return vktoolbarlabelaction->eventFilter(watched, event);
    }
    return {};
}

libqt_string KToolBarLabelAction_Tr2(const char* s, const char* c) {
    QString _ret = KToolBarLabelAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KToolBarLabelAction_Tr3(const char* s, const char* c, int n) {
    QString _ret = KToolBarLabelAction::tr(s, c, static_cast<int>(n));
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
void KToolBarLabelAction_DeleteWidget(KToolBarLabelAction* self, QWidget* widget) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->deleteWidget(widget);
    } else {
        ((VirtualKToolBarLabelAction*)self)->deleteWidget(widget);
    }
}

// Base class handler implementation
void KToolBarLabelAction_QBaseDeleteWidget(KToolBarLabelAction* self, QWidget* widget) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_DeleteWidget_IsBase(true);
        vktoolbarlabelaction->deleteWidget(widget);
    } else {
        ((VirtualKToolBarLabelAction*)self)->deleteWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnDeleteWidget(KToolBarLabelAction* self, intptr_t slot) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_DeleteWidget_Callback(reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_DeleteWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBarLabelAction_TimerEvent(KToolBarLabelAction* self, QTimerEvent* event) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->timerEvent(event);
    } else {
        ((VirtualKToolBarLabelAction*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KToolBarLabelAction_QBaseTimerEvent(KToolBarLabelAction* self, QTimerEvent* event) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_TimerEvent_IsBase(true);
        vktoolbarlabelaction->timerEvent(event);
    } else {
        ((VirtualKToolBarLabelAction*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnTimerEvent(KToolBarLabelAction* self, intptr_t slot) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_TimerEvent_Callback(reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBarLabelAction_ChildEvent(KToolBarLabelAction* self, QChildEvent* event) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->childEvent(event);
    } else {
        ((VirtualKToolBarLabelAction*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KToolBarLabelAction_QBaseChildEvent(KToolBarLabelAction* self, QChildEvent* event) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_ChildEvent_IsBase(true);
        vktoolbarlabelaction->childEvent(event);
    } else {
        ((VirtualKToolBarLabelAction*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnChildEvent(KToolBarLabelAction* self, intptr_t slot) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_ChildEvent_Callback(reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBarLabelAction_CustomEvent(KToolBarLabelAction* self, QEvent* event) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->customEvent(event);
    } else {
        ((VirtualKToolBarLabelAction*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KToolBarLabelAction_QBaseCustomEvent(KToolBarLabelAction* self, QEvent* event) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_CustomEvent_IsBase(true);
        vktoolbarlabelaction->customEvent(event);
    } else {
        ((VirtualKToolBarLabelAction*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnCustomEvent(KToolBarLabelAction* self, intptr_t slot) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_CustomEvent_Callback(reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBarLabelAction_ConnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->connectNotify(*signal);
    } else {
        ((VirtualKToolBarLabelAction*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KToolBarLabelAction_QBaseConnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_ConnectNotify_IsBase(true);
        vktoolbarlabelaction->connectNotify(*signal);
    } else {
        ((VirtualKToolBarLabelAction*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnConnectNotify(KToolBarLabelAction* self, intptr_t slot) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_ConnectNotify_Callback(reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KToolBarLabelAction_DisconnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->disconnectNotify(*signal);
    } else {
        ((VirtualKToolBarLabelAction*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KToolBarLabelAction_QBaseDisconnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_DisconnectNotify_IsBase(true);
        vktoolbarlabelaction->disconnectNotify(*signal);
    } else {
        ((VirtualKToolBarLabelAction*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnDisconnectNotify(KToolBarLabelAction* self, intptr_t slot) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_DisconnectNotify_Callback(reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QWidget* */ KToolBarLabelAction_CreatedWidgets(const KToolBarLabelAction* self) {
    auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self));
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        QList<QWidget*> _ret = vktoolbarlabelaction->createdWidgets();
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
        QList<QWidget*> _ret = ((VirtualKToolBarLabelAction*)self)->createdWidgets();
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
libqt_list /* of QWidget* */ KToolBarLabelAction_QBaseCreatedWidgets(const KToolBarLabelAction* self) {
    auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self));
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_CreatedWidgets_IsBase(true);
        QList<QWidget*> _ret = vktoolbarlabelaction->createdWidgets();
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
        QList<QWidget*> _ret = ((VirtualKToolBarLabelAction*)self)->createdWidgets();
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
void KToolBarLabelAction_OnCreatedWidgets(const KToolBarLabelAction* self, intptr_t slot) {
    auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self));
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_CreatedWidgets_Callback(reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_CreatedWidgets_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KToolBarLabelAction_Sender(const KToolBarLabelAction* self) {
    auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self));
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        return vktoolbarlabelaction->sender();
    } else {
        return ((VirtualKToolBarLabelAction*)self)->sender();
    }
}

// Base class handler implementation
QObject* KToolBarLabelAction_QBaseSender(const KToolBarLabelAction* self) {
    auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self));
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_Sender_IsBase(true);
        return vktoolbarlabelaction->sender();
    } else {
        return ((VirtualKToolBarLabelAction*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnSender(const KToolBarLabelAction* self, intptr_t slot) {
    auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self));
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_Sender_Callback(reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KToolBarLabelAction_SenderSignalIndex(const KToolBarLabelAction* self) {
    auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self));
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        return vktoolbarlabelaction->senderSignalIndex();
    } else {
        return ((VirtualKToolBarLabelAction*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KToolBarLabelAction_QBaseSenderSignalIndex(const KToolBarLabelAction* self) {
    auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self));
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_SenderSignalIndex_IsBase(true);
        return vktoolbarlabelaction->senderSignalIndex();
    } else {
        return ((VirtualKToolBarLabelAction*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnSenderSignalIndex(const KToolBarLabelAction* self, intptr_t slot) {
    auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self));
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_SenderSignalIndex_Callback(reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KToolBarLabelAction_Receivers(const KToolBarLabelAction* self, const char* signal) {
    auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self));
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        return vktoolbarlabelaction->receivers(signal);
    } else {
        return ((VirtualKToolBarLabelAction*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KToolBarLabelAction_QBaseReceivers(const KToolBarLabelAction* self, const char* signal) {
    auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self));
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_Receivers_IsBase(true);
        return vktoolbarlabelaction->receivers(signal);
    } else {
        return ((VirtualKToolBarLabelAction*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnReceivers(const KToolBarLabelAction* self, intptr_t slot) {
    auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self));
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_Receivers_Callback(reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KToolBarLabelAction_IsSignalConnected(const KToolBarLabelAction* self, const QMetaMethod* signal) {
    auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self));
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        return vktoolbarlabelaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKToolBarLabelAction*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KToolBarLabelAction_QBaseIsSignalConnected(const KToolBarLabelAction* self, const QMetaMethod* signal) {
    auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self));
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_IsSignalConnected_IsBase(true);
        return vktoolbarlabelaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKToolBarLabelAction*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnIsSignalConnected(const KToolBarLabelAction* self, intptr_t slot) {
    auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self));
    if (vktoolbarlabelaction && vktoolbarlabelaction->isVirtualKToolBarLabelAction) {
        vktoolbarlabelaction->setKToolBarLabelAction_IsSignalConnected_Callback(reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_IsSignalConnected_Callback>(slot));
    }
}

void KToolBarLabelAction_Delete(KToolBarLabelAction* self) {
    delete self;
}
