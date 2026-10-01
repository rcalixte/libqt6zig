#include <QChildEvent>
#include <QEvent>
#include <QLibrary>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QLibrary_Tr(const char* s) {
    auto _ret = QLibrary::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

intptr_t QLibrary_Resolve(QLibrary* self, const char* symbol) {
    return reinterpret_cast<intptr_t>(self->resolve(symbol));
}

intptr_t QLibrary_Resolve2(const libqt_string fileName, const char* symbol) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return reinterpret_cast<intptr_t>(QLibrary::resolve(fileName_QString, symbol));
}

intptr_t QLibrary_Resolve3(const libqt_string fileName, int verNum, const char* symbol) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return reinterpret_cast<intptr_t>(QLibrary::resolve(fileName_QString, static_cast<int>(verNum), symbol));
}

intptr_t QLibrary_Resolve4(const libqt_string fileName, const libqt_string version, const char* symbol) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    return reinterpret_cast<intptr_t>(QLibrary::resolve(fileName_QString, version_QString, symbol));
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
    auto _ret = self->fileName();
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
    auto _ret = self->errorString();
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
    auto _ret = QLibrary::tr(s, c);
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
    auto _ret = QLibrary::tr(s, c, static_cast<int>(n));
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
QMetaObject* QLibrary_SuperMetaObject(const QLibrary* self) {
    return (QMetaObject*)self->QLibrary::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnMetaObject(QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self)))
        vqlibrary->qlibrary_metaobject_callback = reinterpret_cast<VirtualQLibrary::QLibrary_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QLibrary_SuperMetacast(QLibrary* self, const char* param1) {
    return self->QLibrary::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnMetacast(QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self))
        vqlibrary->qlibrary_metacast_callback = reinterpret_cast<VirtualQLibrary::QLibrary_Metacast_Callback>(slot);
}

// Base class handler implementation
int QLibrary_SuperMetacall(QLibrary* self, int param1, int param2, void** param3) {
    return self->QLibrary::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnMetacall(QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self))
        vqlibrary->qlibrary_metacall_callback = reinterpret_cast<VirtualQLibrary::QLibrary_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QLibrary_Event(QLibrary* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QLibrary_SuperEvent(QLibrary* self, QEvent* event) {
    return self->QLibrary::event(event);
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnEvent(QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self))
        vqlibrary->qlibrary_event_callback = reinterpret_cast<VirtualQLibrary::QLibrary_Event_Callback>(slot);
}

// Derived class handler implementation
bool QLibrary_EventFilter(QLibrary* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QLibrary_SuperEventFilter(QLibrary* self, QObject* watched, QEvent* event) {
    return self->QLibrary::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnEventFilter(QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self))
        vqlibrary->qlibrary_eventfilter_callback = reinterpret_cast<VirtualQLibrary::QLibrary_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QLibrary_TimerEvent(QLibrary* self, QTimerEvent* event) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary) {
        vqlibrary->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLibrary::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLibrary_SuperTimerEvent(QLibrary* self, QTimerEvent* event) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->QLibrary::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QLibrary::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnTimerEvent(QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self))
        vqlibrary->qlibrary_timerevent_callback = reinterpret_cast<VirtualQLibrary::QLibrary_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QLibrary_ChildEvent(QLibrary* self, QChildEvent* event) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary) {
        vqlibrary->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLibrary::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLibrary_SuperChildEvent(QLibrary* self, QChildEvent* event) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->QLibrary::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QLibrary::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnChildEvent(QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self))
        vqlibrary->qlibrary_childevent_callback = reinterpret_cast<VirtualQLibrary::QLibrary_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QLibrary_CustomEvent(QLibrary* self, QEvent* event) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary) {
        vqlibrary->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLibrary::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLibrary_SuperCustomEvent(QLibrary* self, QEvent* event) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->QLibrary::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QLibrary::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnCustomEvent(QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self))
        vqlibrary->qlibrary_customevent_callback = reinterpret_cast<VirtualQLibrary::QLibrary_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QLibrary_ConnectNotify(QLibrary* self, const QMetaMethod* signal) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary) {
        vqlibrary->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLibrary::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLibrary_SuperConnectNotify(QLibrary* self, const QMetaMethod* signal) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->QLibrary::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLibrary::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnConnectNotify(QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self))
        vqlibrary->qlibrary_connectnotify_callback = reinterpret_cast<VirtualQLibrary::QLibrary_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QLibrary_DisconnectNotify(QLibrary* self, const QMetaMethod* signal) {
    auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self);
    if (vqlibrary) {
        vqlibrary->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLibrary::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLibrary_SuperDisconnectNotify(QLibrary* self, const QMetaMethod* signal) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->QLibrary::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLibrary::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnDisconnectNotify(QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self))
        vqlibrary->qlibrary_disconnectnotify_callback = reinterpret_cast<VirtualQLibrary::QLibrary_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QLibrary_Sender(const QLibrary* self) {
    if (auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self))) {
        return vqlibrary->VirtualQLibrary::sender();
    } else
        qFatal("Error: Protected method QLibrary::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QLibrary_SenderSignalIndex(const QLibrary* self) {
    if (auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self))) {
        return vqlibrary->VirtualQLibrary::senderSignalIndex();
    } else
        qFatal("Error: Protected method QLibrary::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QLibrary_Receivers(const QLibrary* self, const char* signal) {
    if (auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self))) {
        return vqlibrary->VirtualQLibrary::receivers(signal);
    } else
        qFatal("Error: Protected method QLibrary::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QLibrary_IsSignalConnected(const QLibrary* self, const QMetaMethod* signal) {
    if (auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self))) {
        return vqlibrary->VirtualQLibrary::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QLibrary::isSignalConnected called without a directly constructed type");
}

void QLibrary_Delete(QLibrary* self) {
    delete self;
}
