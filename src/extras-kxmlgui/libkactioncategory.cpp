#include <KActionCategory>
#include <KActionCollection>
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
#include <kactioncategory.h>
#include "libkactioncategory.h"
#include "libkactioncategory.hxx"

KActionCategory* KActionCategory_new(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKActionCategory(text_QString);
}

KActionCategory* KActionCategory_new2(const libqt_string text, KActionCollection* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKActionCategory(text_QString, parent);
}

QMetaObject* KActionCategory_MetaObject(const KActionCategory* self) {
    return (QMetaObject*)self->metaObject();
}

void* KActionCategory_Metacast(KActionCategory* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KActionCategory_Metacall(KActionCategory* self, int param1, int param2, void** param3) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKActionCategory*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KActionCategory_Tr(const char* s) {
    QString _ret = KActionCategory::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAction* KActionCategory_AddAction(KActionCategory* self, const libqt_string name, QAction* action) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addAction(name_QString, action);
}

QAction* KActionCategory_AddAction2(KActionCategory* self, int actionType) {
    return self->addAction(static_cast<KStandardActions::StandardAction>(actionType));
}

libqt_list /* of QAction* */ KActionCategory_Actions(const KActionCategory* self) {
    const QList<QAction*> _ret = self->actions();
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

KActionCollection* KActionCategory_Collection(const KActionCategory* self) {
    return self->collection();
}

libqt_string KActionCategory_Text(const KActionCategory* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KActionCategory_SetText(KActionCategory* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

libqt_string KActionCategory_Tr2(const char* s, const char* c) {
    QString _ret = KActionCategory::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KActionCategory_Tr3(const char* s, const char* c, int n) {
    QString _ret = KActionCategory::tr(s, c, static_cast<int>(n));
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
int KActionCategory_QBaseMetacall(KActionCategory* self, int param1, int param2, void** param3) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_Metacall_IsBase(true);
        return vkactioncategory->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KActionCategory::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnMetacall(KActionCategory* self, intptr_t slot) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_Metacall_Callback(reinterpret_cast<VirtualKActionCategory::KActionCategory_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KActionCategory_Event(KActionCategory* self, QEvent* event) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        return vkactioncategory->event(event);
    } else {
        return self->KActionCategory::event(event);
    }
}

// Base class handler implementation
bool KActionCategory_QBaseEvent(KActionCategory* self, QEvent* event) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_Event_IsBase(true);
        return vkactioncategory->event(event);
    } else {
        return self->KActionCategory::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnEvent(KActionCategory* self, intptr_t slot) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_Event_Callback(reinterpret_cast<VirtualKActionCategory::KActionCategory_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KActionCategory_EventFilter(KActionCategory* self, QObject* watched, QEvent* event) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        return vkactioncategory->eventFilter(watched, event);
    } else {
        return self->KActionCategory::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KActionCategory_QBaseEventFilter(KActionCategory* self, QObject* watched, QEvent* event) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_EventFilter_IsBase(true);
        return vkactioncategory->eventFilter(watched, event);
    } else {
        return self->KActionCategory::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnEventFilter(KActionCategory* self, intptr_t slot) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_EventFilter_Callback(reinterpret_cast<VirtualKActionCategory::KActionCategory_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionCategory_TimerEvent(KActionCategory* self, QTimerEvent* event) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->timerEvent(event);
    } else {
        ((VirtualKActionCategory*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KActionCategory_QBaseTimerEvent(KActionCategory* self, QTimerEvent* event) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_TimerEvent_IsBase(true);
        vkactioncategory->timerEvent(event);
    } else {
        ((VirtualKActionCategory*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnTimerEvent(KActionCategory* self, intptr_t slot) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_TimerEvent_Callback(reinterpret_cast<VirtualKActionCategory::KActionCategory_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionCategory_ChildEvent(KActionCategory* self, QChildEvent* event) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->childEvent(event);
    } else {
        ((VirtualKActionCategory*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KActionCategory_QBaseChildEvent(KActionCategory* self, QChildEvent* event) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_ChildEvent_IsBase(true);
        vkactioncategory->childEvent(event);
    } else {
        ((VirtualKActionCategory*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnChildEvent(KActionCategory* self, intptr_t slot) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_ChildEvent_Callback(reinterpret_cast<VirtualKActionCategory::KActionCategory_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionCategory_CustomEvent(KActionCategory* self, QEvent* event) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->customEvent(event);
    } else {
        ((VirtualKActionCategory*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KActionCategory_QBaseCustomEvent(KActionCategory* self, QEvent* event) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_CustomEvent_IsBase(true);
        vkactioncategory->customEvent(event);
    } else {
        ((VirtualKActionCategory*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnCustomEvent(KActionCategory* self, intptr_t slot) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_CustomEvent_Callback(reinterpret_cast<VirtualKActionCategory::KActionCategory_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionCategory_ConnectNotify(KActionCategory* self, const QMetaMethod* signal) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->connectNotify(*signal);
    } else {
        ((VirtualKActionCategory*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KActionCategory_QBaseConnectNotify(KActionCategory* self, const QMetaMethod* signal) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_ConnectNotify_IsBase(true);
        vkactioncategory->connectNotify(*signal);
    } else {
        ((VirtualKActionCategory*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnConnectNotify(KActionCategory* self, intptr_t slot) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_ConnectNotify_Callback(reinterpret_cast<VirtualKActionCategory::KActionCategory_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KActionCategory_DisconnectNotify(KActionCategory* self, const QMetaMethod* signal) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->disconnectNotify(*signal);
    } else {
        ((VirtualKActionCategory*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KActionCategory_QBaseDisconnectNotify(KActionCategory* self, const QMetaMethod* signal) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_DisconnectNotify_IsBase(true);
        vkactioncategory->disconnectNotify(*signal);
    } else {
        ((VirtualKActionCategory*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnDisconnectNotify(KActionCategory* self, intptr_t slot) {
    auto* vkactioncategory = dynamic_cast<VirtualKActionCategory*>(self);
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_DisconnectNotify_Callback(reinterpret_cast<VirtualKActionCategory::KActionCategory_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KActionCategory_Sender(const KActionCategory* self) {
    auto* vkactioncategory = const_cast<VirtualKActionCategory*>(dynamic_cast<const VirtualKActionCategory*>(self));
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        return vkactioncategory->sender();
    } else {
        return ((VirtualKActionCategory*)self)->sender();
    }
}

// Base class handler implementation
QObject* KActionCategory_QBaseSender(const KActionCategory* self) {
    auto* vkactioncategory = const_cast<VirtualKActionCategory*>(dynamic_cast<const VirtualKActionCategory*>(self));
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_Sender_IsBase(true);
        return vkactioncategory->sender();
    } else {
        return ((VirtualKActionCategory*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnSender(const KActionCategory* self, intptr_t slot) {
    auto* vkactioncategory = const_cast<VirtualKActionCategory*>(dynamic_cast<const VirtualKActionCategory*>(self));
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_Sender_Callback(reinterpret_cast<VirtualKActionCategory::KActionCategory_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KActionCategory_SenderSignalIndex(const KActionCategory* self) {
    auto* vkactioncategory = const_cast<VirtualKActionCategory*>(dynamic_cast<const VirtualKActionCategory*>(self));
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        return vkactioncategory->senderSignalIndex();
    } else {
        return ((VirtualKActionCategory*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KActionCategory_QBaseSenderSignalIndex(const KActionCategory* self) {
    auto* vkactioncategory = const_cast<VirtualKActionCategory*>(dynamic_cast<const VirtualKActionCategory*>(self));
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_SenderSignalIndex_IsBase(true);
        return vkactioncategory->senderSignalIndex();
    } else {
        return ((VirtualKActionCategory*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnSenderSignalIndex(const KActionCategory* self, intptr_t slot) {
    auto* vkactioncategory = const_cast<VirtualKActionCategory*>(dynamic_cast<const VirtualKActionCategory*>(self));
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_SenderSignalIndex_Callback(reinterpret_cast<VirtualKActionCategory::KActionCategory_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KActionCategory_Receivers(const KActionCategory* self, const char* signal) {
    auto* vkactioncategory = const_cast<VirtualKActionCategory*>(dynamic_cast<const VirtualKActionCategory*>(self));
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        return vkactioncategory->receivers(signal);
    } else {
        return ((VirtualKActionCategory*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KActionCategory_QBaseReceivers(const KActionCategory* self, const char* signal) {
    auto* vkactioncategory = const_cast<VirtualKActionCategory*>(dynamic_cast<const VirtualKActionCategory*>(self));
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_Receivers_IsBase(true);
        return vkactioncategory->receivers(signal);
    } else {
        return ((VirtualKActionCategory*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnReceivers(const KActionCategory* self, intptr_t slot) {
    auto* vkactioncategory = const_cast<VirtualKActionCategory*>(dynamic_cast<const VirtualKActionCategory*>(self));
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_Receivers_Callback(reinterpret_cast<VirtualKActionCategory::KActionCategory_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KActionCategory_IsSignalConnected(const KActionCategory* self, const QMetaMethod* signal) {
    auto* vkactioncategory = const_cast<VirtualKActionCategory*>(dynamic_cast<const VirtualKActionCategory*>(self));
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        return vkactioncategory->isSignalConnected(*signal);
    } else {
        return ((VirtualKActionCategory*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KActionCategory_QBaseIsSignalConnected(const KActionCategory* self, const QMetaMethod* signal) {
    auto* vkactioncategory = const_cast<VirtualKActionCategory*>(dynamic_cast<const VirtualKActionCategory*>(self));
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_IsSignalConnected_IsBase(true);
        return vkactioncategory->isSignalConnected(*signal);
    } else {
        return ((VirtualKActionCategory*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KActionCategory_OnIsSignalConnected(const KActionCategory* self, intptr_t slot) {
    auto* vkactioncategory = const_cast<VirtualKActionCategory*>(dynamic_cast<const VirtualKActionCategory*>(self));
    if (vkactioncategory && vkactioncategory->isVirtualKActionCategory) {
        vkactioncategory->setKActionCategory_IsSignalConnected_Callback(reinterpret_cast<VirtualKActionCategory::KActionCategory_IsSignalConnected_Callback>(slot));
    }
}

void KActionCategory_Delete(KActionCategory* self) {
    delete self;
}
