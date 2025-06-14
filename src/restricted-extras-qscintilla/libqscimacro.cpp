#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qscimacro.h>
#include "libqscimacro.h"
#include "libqscimacro.hxx"

QsciMacro* QsciMacro_new(QsciScintilla* parent) {
    return new VirtualQsciMacro(parent);
}

QsciMacro* QsciMacro_new2(const libqt_string asc, QsciScintilla* parent) {
    QString asc_QString = QString::fromUtf8(asc.data, asc.len);
    return new VirtualQsciMacro(asc_QString, parent);
}

QMetaObject* QsciMacro_MetaObject(const QsciMacro* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciMacro_Metacast(QsciMacro* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciMacro_Metacall(QsciMacro* self, int param1, int param2, void** param3) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciMacro*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciMacro_OnMetacall(QsciMacro* self, intptr_t slot) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_Metacall_Callback(reinterpret_cast<VirtualQsciMacro::QsciMacro_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciMacro_QBaseMetacall(QsciMacro* self, int param1, int param2, void** param3) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_Metacall_IsBase(true);
        return vqscimacro->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciMacro*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciMacro_Tr(const char* s) {
    QString _ret = QsciMacro::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QsciMacro_Clear(QsciMacro* self) {
    self->clear();
}

bool QsciMacro_Load(QsciMacro* self, const libqt_string asc) {
    QString asc_QString = QString::fromUtf8(asc.data, asc.len);
    return self->load(asc_QString);
}

libqt_string QsciMacro_Save(const QsciMacro* self) {
    QString _ret = self->save();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciMacro_Tr2(const char* s, const char* c) {
    QString _ret = QsciMacro::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciMacro_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciMacro::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QsciMacro_Play(QsciMacro* self) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->play();
    } else {
        self->QsciMacro::play();
    }
}

// Base class handler implementation
void QsciMacro_QBasePlay(QsciMacro* self) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_Play_IsBase(true);
        vqscimacro->play();
    } else {
        self->QsciMacro::play();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnPlay(QsciMacro* self, intptr_t slot) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_Play_Callback(reinterpret_cast<VirtualQsciMacro::QsciMacro_Play_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciMacro_StartRecording(QsciMacro* self) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->startRecording();
    } else {
        self->QsciMacro::startRecording();
    }
}

// Base class handler implementation
void QsciMacro_QBaseStartRecording(QsciMacro* self) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_StartRecording_IsBase(true);
        vqscimacro->startRecording();
    } else {
        self->QsciMacro::startRecording();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnStartRecording(QsciMacro* self, intptr_t slot) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_StartRecording_Callback(reinterpret_cast<VirtualQsciMacro::QsciMacro_StartRecording_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciMacro_EndRecording(QsciMacro* self) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->endRecording();
    } else {
        self->QsciMacro::endRecording();
    }
}

// Base class handler implementation
void QsciMacro_QBaseEndRecording(QsciMacro* self) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_EndRecording_IsBase(true);
        vqscimacro->endRecording();
    } else {
        self->QsciMacro::endRecording();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnEndRecording(QsciMacro* self, intptr_t slot) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_EndRecording_Callback(reinterpret_cast<VirtualQsciMacro::QsciMacro_EndRecording_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciMacro_Event(QsciMacro* self, QEvent* event) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        return vqscimacro->event(event);
    } else {
        return self->QsciMacro::event(event);
    }
}

// Base class handler implementation
bool QsciMacro_QBaseEvent(QsciMacro* self, QEvent* event) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_Event_IsBase(true);
        return vqscimacro->event(event);
    } else {
        return self->QsciMacro::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnEvent(QsciMacro* self, intptr_t slot) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_Event_Callback(reinterpret_cast<VirtualQsciMacro::QsciMacro_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciMacro_EventFilter(QsciMacro* self, QObject* watched, QEvent* event) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        return vqscimacro->eventFilter(watched, event);
    } else {
        return self->QsciMacro::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciMacro_QBaseEventFilter(QsciMacro* self, QObject* watched, QEvent* event) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_EventFilter_IsBase(true);
        return vqscimacro->eventFilter(watched, event);
    } else {
        return self->QsciMacro::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnEventFilter(QsciMacro* self, intptr_t slot) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_EventFilter_Callback(reinterpret_cast<VirtualQsciMacro::QsciMacro_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciMacro_TimerEvent(QsciMacro* self, QTimerEvent* event) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->timerEvent(event);
    } else {
        ((VirtualQsciMacro*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciMacro_QBaseTimerEvent(QsciMacro* self, QTimerEvent* event) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_TimerEvent_IsBase(true);
        vqscimacro->timerEvent(event);
    } else {
        ((VirtualQsciMacro*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnTimerEvent(QsciMacro* self, intptr_t slot) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_TimerEvent_Callback(reinterpret_cast<VirtualQsciMacro::QsciMacro_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciMacro_ChildEvent(QsciMacro* self, QChildEvent* event) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->childEvent(event);
    } else {
        ((VirtualQsciMacro*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciMacro_QBaseChildEvent(QsciMacro* self, QChildEvent* event) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_ChildEvent_IsBase(true);
        vqscimacro->childEvent(event);
    } else {
        ((VirtualQsciMacro*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnChildEvent(QsciMacro* self, intptr_t slot) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_ChildEvent_Callback(reinterpret_cast<VirtualQsciMacro::QsciMacro_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciMacro_CustomEvent(QsciMacro* self, QEvent* event) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->customEvent(event);
    } else {
        ((VirtualQsciMacro*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciMacro_QBaseCustomEvent(QsciMacro* self, QEvent* event) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_CustomEvent_IsBase(true);
        vqscimacro->customEvent(event);
    } else {
        ((VirtualQsciMacro*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnCustomEvent(QsciMacro* self, intptr_t slot) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_CustomEvent_Callback(reinterpret_cast<VirtualQsciMacro::QsciMacro_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciMacro_ConnectNotify(QsciMacro* self, const QMetaMethod* signal) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->connectNotify(*signal);
    } else {
        ((VirtualQsciMacro*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciMacro_QBaseConnectNotify(QsciMacro* self, const QMetaMethod* signal) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_ConnectNotify_IsBase(true);
        vqscimacro->connectNotify(*signal);
    } else {
        ((VirtualQsciMacro*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnConnectNotify(QsciMacro* self, intptr_t slot) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_ConnectNotify_Callback(reinterpret_cast<VirtualQsciMacro::QsciMacro_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciMacro_DisconnectNotify(QsciMacro* self, const QMetaMethod* signal) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->disconnectNotify(*signal);
    } else {
        ((VirtualQsciMacro*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciMacro_QBaseDisconnectNotify(QsciMacro* self, const QMetaMethod* signal) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_DisconnectNotify_IsBase(true);
        vqscimacro->disconnectNotify(*signal);
    } else {
        ((VirtualQsciMacro*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnDisconnectNotify(QsciMacro* self, intptr_t slot) {
    auto* vqscimacro = dynamic_cast<VirtualQsciMacro*>(self);
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciMacro::QsciMacro_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciMacro_Sender(const QsciMacro* self) {
    auto* vqscimacro = const_cast<VirtualQsciMacro*>(dynamic_cast<const VirtualQsciMacro*>(self));
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        return vqscimacro->sender();
    } else {
        return ((VirtualQsciMacro*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciMacro_QBaseSender(const QsciMacro* self) {
    auto* vqscimacro = const_cast<VirtualQsciMacro*>(dynamic_cast<const VirtualQsciMacro*>(self));
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_Sender_IsBase(true);
        return vqscimacro->sender();
    } else {
        return ((VirtualQsciMacro*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnSender(const QsciMacro* self, intptr_t slot) {
    auto* vqscimacro = const_cast<VirtualQsciMacro*>(dynamic_cast<const VirtualQsciMacro*>(self));
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_Sender_Callback(reinterpret_cast<VirtualQsciMacro::QsciMacro_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciMacro_SenderSignalIndex(const QsciMacro* self) {
    auto* vqscimacro = const_cast<VirtualQsciMacro*>(dynamic_cast<const VirtualQsciMacro*>(self));
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        return vqscimacro->senderSignalIndex();
    } else {
        return ((VirtualQsciMacro*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciMacro_QBaseSenderSignalIndex(const QsciMacro* self) {
    auto* vqscimacro = const_cast<VirtualQsciMacro*>(dynamic_cast<const VirtualQsciMacro*>(self));
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_SenderSignalIndex_IsBase(true);
        return vqscimacro->senderSignalIndex();
    } else {
        return ((VirtualQsciMacro*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnSenderSignalIndex(const QsciMacro* self, intptr_t slot) {
    auto* vqscimacro = const_cast<VirtualQsciMacro*>(dynamic_cast<const VirtualQsciMacro*>(self));
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciMacro::QsciMacro_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciMacro_Receivers(const QsciMacro* self, const char* signal) {
    auto* vqscimacro = const_cast<VirtualQsciMacro*>(dynamic_cast<const VirtualQsciMacro*>(self));
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        return vqscimacro->receivers(signal);
    } else {
        return ((VirtualQsciMacro*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciMacro_QBaseReceivers(const QsciMacro* self, const char* signal) {
    auto* vqscimacro = const_cast<VirtualQsciMacro*>(dynamic_cast<const VirtualQsciMacro*>(self));
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_Receivers_IsBase(true);
        return vqscimacro->receivers(signal);
    } else {
        return ((VirtualQsciMacro*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnReceivers(const QsciMacro* self, intptr_t slot) {
    auto* vqscimacro = const_cast<VirtualQsciMacro*>(dynamic_cast<const VirtualQsciMacro*>(self));
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_Receivers_Callback(reinterpret_cast<VirtualQsciMacro::QsciMacro_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciMacro_IsSignalConnected(const QsciMacro* self, const QMetaMethod* signal) {
    auto* vqscimacro = const_cast<VirtualQsciMacro*>(dynamic_cast<const VirtualQsciMacro*>(self));
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        return vqscimacro->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciMacro*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciMacro_QBaseIsSignalConnected(const QsciMacro* self, const QMetaMethod* signal) {
    auto* vqscimacro = const_cast<VirtualQsciMacro*>(dynamic_cast<const VirtualQsciMacro*>(self));
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_IsSignalConnected_IsBase(true);
        return vqscimacro->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciMacro*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciMacro_OnIsSignalConnected(const QsciMacro* self, intptr_t slot) {
    auto* vqscimacro = const_cast<VirtualQsciMacro*>(dynamic_cast<const VirtualQsciMacro*>(self));
    if (vqscimacro && vqscimacro->isVirtualQsciMacro) {
        vqscimacro->setQsciMacro_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciMacro::QsciMacro_IsSignalConnected_Callback>(slot));
    }
}

void QsciMacro_Delete(QsciMacro* self) {
    delete self;
}
