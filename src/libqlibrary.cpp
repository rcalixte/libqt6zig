#include <QChildEvent>
#include <QEvent>
#include <QLibrary>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qlibrary.h>
#include "libqlibrary.h"
#include "libqlibrary.hxx"

QLibrary* QLibrary_new() {
    return new VirtualQLibrary();
}

QLibrary* QLibrary_new2(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQLibrary(fileName_QString);
}

QLibrary* QLibrary_new3(const libqt_string fileName, int verNum) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQLibrary(fileName_QString, static_cast<int>(verNum));
}

QLibrary* QLibrary_new4(const libqt_string fileName, const libqt_string version) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    return new VirtualQLibrary(fileName_QString, version_QString);
}

QLibrary* QLibrary_new5(QObject* parent) {
    return new VirtualQLibrary(parent);
}

QLibrary* QLibrary_new6(const libqt_string fileName, QObject* parent) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQLibrary(fileName_QString, parent);
}

QLibrary* QLibrary_new7(const libqt_string fileName, int verNum, QObject* parent) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQLibrary(fileName_QString, static_cast<int>(verNum), parent);
}

QLibrary* QLibrary_new8(const libqt_string fileName, const libqt_string version, QObject* parent) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    return new VirtualQLibrary(fileName_QString, version_QString, parent);
}

QMetaObject* QLibrary_MetaObject(const QLibrary* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLibrary_Metacast(QLibrary* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLibrary_Metacall(QLibrary* self, int param1, int param2, void** param3) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQLibrary*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QLibrary_OnMetacall(QLibrary* self, intptr_t slot) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_Metacall_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QLibrary_QBaseMetacall(QLibrary* self, int param1, int param2, void** param3) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_Metacall_IsBase(true);
        return vqlibrary->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQLibrary*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QLibrary_Tr(const char* s) {
    QString _ret = QLibrary::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QLibrary_Load(QLibrary* self) {
    return self->load();
}

bool QLibrary_Unload(QLibrary* self) {
    return self->unload();
}

bool QLibrary_IsLoaded(const QLibrary* self) {
    return self->isLoaded();
}

bool QLibrary_IsLibrary(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return QLibrary::isLibrary(fileName_QString);
}

void QLibrary_SetFileName(QLibrary* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setFileName(fileName_QString);
}

libqt_string QLibrary_FileName(const QLibrary* self) {
    QString _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QLibrary_SetFileNameAndVersion(QLibrary* self, const libqt_string fileName, int verNum) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setFileNameAndVersion(fileName_QString, static_cast<int>(verNum));
}

void QLibrary_SetFileNameAndVersion2(QLibrary* self, const libqt_string fileName, const libqt_string version) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    self->setFileNameAndVersion(fileName_QString, version_QString);
}

libqt_string QLibrary_ErrorString(const QLibrary* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QLibrary_SetLoadHints(QLibrary* self, int hints) {
    self->setLoadHints(static_cast<QLibrary::LoadHints>(hints));
}

int QLibrary_LoadHints(const QLibrary* self) {
    return static_cast<int>(self->loadHints());
}

libqt_string QLibrary_Tr2(const char* s, const char* c) {
    QString _ret = QLibrary::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QLibrary_Tr3(const char* s, const char* c, int n) {
    QString _ret = QLibrary::tr(s, c, static_cast<int>(n));
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
bool QLibrary_Event(QLibrary* self, QEvent* event) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        return vqlibrary->event(event);
    } else {
        return self->QLibrary::event(event);
    }
}

// Base class handler implementation
bool QLibrary_QBaseEvent(QLibrary* self, QEvent* event) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_Event_IsBase(true);
        return vqlibrary->event(event);
    } else {
        return self->QLibrary::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnEvent(QLibrary* self, intptr_t slot) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_Event_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLibrary_EventFilter(QLibrary* self, QObject* watched, QEvent* event) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        return vqlibrary->eventFilter(watched, event);
    } else {
        return self->QLibrary::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QLibrary_QBaseEventFilter(QLibrary* self, QObject* watched, QEvent* event) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_EventFilter_IsBase(true);
        return vqlibrary->eventFilter(watched, event);
    } else {
        return self->QLibrary::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnEventFilter(QLibrary* self, intptr_t slot) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_EventFilter_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QLibrary_TimerEvent(QLibrary* self, QTimerEvent* event) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->timerEvent(event);
    } else {
        ((VirtualQLibrary*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QLibrary_QBaseTimerEvent(QLibrary* self, QTimerEvent* event) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_TimerEvent_IsBase(true);
        vqlibrary->timerEvent(event);
    } else {
        ((VirtualQLibrary*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnTimerEvent(QLibrary* self, intptr_t slot) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_TimerEvent_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLibrary_ChildEvent(QLibrary* self, QChildEvent* event) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->childEvent(event);
    } else {
        ((VirtualQLibrary*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QLibrary_QBaseChildEvent(QLibrary* self, QChildEvent* event) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_ChildEvent_IsBase(true);
        vqlibrary->childEvent(event);
    } else {
        ((VirtualQLibrary*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnChildEvent(QLibrary* self, intptr_t slot) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_ChildEvent_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLibrary_CustomEvent(QLibrary* self, QEvent* event) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->customEvent(event);
    } else {
        ((VirtualQLibrary*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QLibrary_QBaseCustomEvent(QLibrary* self, QEvent* event) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_CustomEvent_IsBase(true);
        vqlibrary->customEvent(event);
    } else {
        ((VirtualQLibrary*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnCustomEvent(QLibrary* self, intptr_t slot) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_CustomEvent_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLibrary_ConnectNotify(QLibrary* self, const QMetaMethod* signal) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->connectNotify(*signal);
    } else {
        ((VirtualQLibrary*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QLibrary_QBaseConnectNotify(QLibrary* self, const QMetaMethod* signal) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_ConnectNotify_IsBase(true);
        vqlibrary->connectNotify(*signal);
    } else {
        ((VirtualQLibrary*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnConnectNotify(QLibrary* self, intptr_t slot) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_ConnectNotify_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QLibrary_DisconnectNotify(QLibrary* self, const QMetaMethod* signal) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->disconnectNotify(*signal);
    } else {
        ((VirtualQLibrary*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QLibrary_QBaseDisconnectNotify(QLibrary* self, const QMetaMethod* signal) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_DisconnectNotify_IsBase(true);
        vqlibrary->disconnectNotify(*signal);
    } else {
        ((VirtualQLibrary*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnDisconnectNotify(QLibrary* self, intptr_t slot) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_DisconnectNotify_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QLibrary_Sender(const QLibrary* self) {
    auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self));
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        return vqlibrary->sender();
    } else {
        return ((VirtualQLibrary*)self)->sender();
    }
}

// Base class handler implementation
QObject* QLibrary_QBaseSender(const QLibrary* self) {
    auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self));
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_Sender_IsBase(true);
        return vqlibrary->sender();
    } else {
        return ((VirtualQLibrary*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnSender(const QLibrary* self, intptr_t slot) {
    auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self));
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_Sender_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QLibrary_SenderSignalIndex(const QLibrary* self) {
    auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self));
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        return vqlibrary->senderSignalIndex();
    } else {
        return ((VirtualQLibrary*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QLibrary_QBaseSenderSignalIndex(const QLibrary* self) {
    auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self));
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_SenderSignalIndex_IsBase(true);
        return vqlibrary->senderSignalIndex();
    } else {
        return ((VirtualQLibrary*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnSenderSignalIndex(const QLibrary* self, intptr_t slot) {
    auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self));
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_SenderSignalIndex_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QLibrary_Receivers(const QLibrary* self, const char* signal) {
    auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self));
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        return vqlibrary->receivers(signal);
    } else {
        return ((VirtualQLibrary*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QLibrary_QBaseReceivers(const QLibrary* self, const char* signal) {
    auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self));
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_Receivers_IsBase(true);
        return vqlibrary->receivers(signal);
    } else {
        return ((VirtualQLibrary*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnReceivers(const QLibrary* self, intptr_t slot) {
    auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self));
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_Receivers_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLibrary_IsSignalConnected(const QLibrary* self, const QMetaMethod* signal) {
    auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self));
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        return vqlibrary->isSignalConnected(*signal);
    } else {
        return ((VirtualQLibrary*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QLibrary_QBaseIsSignalConnected(const QLibrary* self, const QMetaMethod* signal) {
    auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self));
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_IsSignalConnected_IsBase(true);
        return vqlibrary->isSignalConnected(*signal);
    } else {
        return ((VirtualQLibrary*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnIsSignalConnected(const QLibrary* self, intptr_t slot) {
    auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self));
    if (vqlibrary && vqlibrary->isVirtualQLibrary) {
        vqlibrary->setQLibrary_IsSignalConnected_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_IsSignalConnected_Callback>(slot));
    }
}

void QLibrary_Delete(QLibrary* self) {
    delete self;
}
