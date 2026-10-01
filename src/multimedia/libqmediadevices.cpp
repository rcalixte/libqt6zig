#include <QAudioDevice>
#include <QCameraDevice>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMediaDevices>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qmediadevices.h>
#include "libqmediadevices.h"
#include "libqmediadevices.hxx"

QMediaDevices* QMediaDevices_new() {
    return new VirtualQMediaDevices();
}

QMediaDevices* QMediaDevices_new2(QObject* parent) {
    return new VirtualQMediaDevices(parent);
}

QMetaObject* QMediaDevices_MetaObject(const QMediaDevices* self) {
    return (QMetaObject*)self->metaObject();
}

void* QMediaDevices_Metacast(QMediaDevices* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QMediaDevices_Metacall(QMediaDevices* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QMediaDevices_Tr(const char* s) {
    auto _ret = QMediaDevices::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QAudioDevice* */ QMediaDevices_AudioInputs() {
    QList<QAudioDevice> _ret = QMediaDevices::audioInputs();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAudioDevice** _arr = static_cast<QAudioDevice**>(malloc(sizeof(QAudioDevice*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QAudioDevice(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QAudioDevice* */ QMediaDevices_AudioOutputs() {
    QList<QAudioDevice> _ret = QMediaDevices::audioOutputs();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAudioDevice** _arr = static_cast<QAudioDevice**>(malloc(sizeof(QAudioDevice*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QAudioDevice(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QCameraDevice* */ QMediaDevices_VideoInputs() {
    QList<QCameraDevice> _ret = QMediaDevices::videoInputs();
    // Convert QList<> from C++ memory to manually-managed C memory
    QCameraDevice** _arr = static_cast<QCameraDevice**>(malloc(sizeof(QCameraDevice*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QCameraDevice(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QAudioDevice* QMediaDevices_DefaultAudioInput() {
    return new QAudioDevice(QMediaDevices::defaultAudioInput());
}

QAudioDevice* QMediaDevices_DefaultAudioOutput() {
    return new QAudioDevice(QMediaDevices::defaultAudioOutput());
}

QCameraDevice* QMediaDevices_DefaultVideoInput() {
    return new QCameraDevice(QMediaDevices::defaultVideoInput());
}

void QMediaDevices_AudioInputsChanged(QMediaDevices* self) {
    self->audioInputsChanged();
}

void QMediaDevices_Connect_AudioInputsChanged(QMediaDevices* self, intptr_t slot) {
    void (*slotFunc)(QMediaDevices*) = reinterpret_cast<void (*)(QMediaDevices*)>(slot);
    QMediaDevices::connect(self,
                           static_cast<void (QMediaDevices::*)()>(&QMediaDevices::audioInputsChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QMediaDevices_AudioOutputsChanged(QMediaDevices* self) {
    self->audioOutputsChanged();
}

void QMediaDevices_Connect_AudioOutputsChanged(QMediaDevices* self, intptr_t slot) {
    void (*slotFunc)(QMediaDevices*) = reinterpret_cast<void (*)(QMediaDevices*)>(slot);
    QMediaDevices::connect(self,
                           static_cast<void (QMediaDevices::*)()>(&QMediaDevices::audioOutputsChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QMediaDevices_VideoInputsChanged(QMediaDevices* self) {
    self->videoInputsChanged();
}

void QMediaDevices_Connect_VideoInputsChanged(QMediaDevices* self, intptr_t slot) {
    void (*slotFunc)(QMediaDevices*) = reinterpret_cast<void (*)(QMediaDevices*)>(slot);
    QMediaDevices::connect(self,
                           static_cast<void (QMediaDevices::*)()>(&QMediaDevices::videoInputsChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QMediaDevices_ConnectNotify(QMediaDevices* self, const QMetaMethod* signal) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices) {
        vqmediadevices->connectNotify(*signal);
    }
}

libqt_string QMediaDevices_Tr2(const char* s, const char* c) {
    auto _ret = QMediaDevices::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMediaDevices_Tr3(const char* s, const char* c, int n) {
    auto _ret = QMediaDevices::tr(s, c, static_cast<int>(n));
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
QMetaObject* QMediaDevices_SuperMetaObject(const QMediaDevices* self) {
    return (QMetaObject*)self->QMediaDevices::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnMetaObject(QMediaDevices* self, intptr_t slot) {
    if (auto* vqmediadevices = const_cast<VirtualQMediaDevices*>(dynamic_cast<const VirtualQMediaDevices*>(self)))
        vqmediadevices->qmediadevices_metaobject_callback = reinterpret_cast<VirtualQMediaDevices::QMediaDevices_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QMediaDevices_SuperMetacast(QMediaDevices* self, const char* param1) {
    return self->QMediaDevices::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnMetacast(QMediaDevices* self, intptr_t slot) {
    if (auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self))
        vqmediadevices->qmediadevices_metacast_callback = reinterpret_cast<VirtualQMediaDevices::QMediaDevices_Metacast_Callback>(slot);
}

// Base class handler implementation
int QMediaDevices_SuperMetacall(QMediaDevices* self, int param1, int param2, void** param3) {
    return self->QMediaDevices::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnMetacall(QMediaDevices* self, intptr_t slot) {
    if (auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self))
        vqmediadevices->qmediadevices_metacall_callback = reinterpret_cast<VirtualQMediaDevices::QMediaDevices_Metacall_Callback>(slot);
}

// Base class handler implementation
void QMediaDevices_SuperConnectNotify(QMediaDevices* self, const QMetaMethod* signal) {
    if (auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self)) {
        vqmediadevices->QMediaDevices::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMediaDevices::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnConnectNotify(QMediaDevices* self, intptr_t slot) {
    if (auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self))
        vqmediadevices->qmediadevices_connectnotify_callback = reinterpret_cast<VirtualQMediaDevices::QMediaDevices_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
bool QMediaDevices_Event(QMediaDevices* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QMediaDevices_SuperEvent(QMediaDevices* self, QEvent* event) {
    return self->QMediaDevices::event(event);
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnEvent(QMediaDevices* self, intptr_t slot) {
    if (auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self))
        vqmediadevices->qmediadevices_event_callback = reinterpret_cast<VirtualQMediaDevices::QMediaDevices_Event_Callback>(slot);
}

// Derived class handler implementation
bool QMediaDevices_EventFilter(QMediaDevices* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QMediaDevices_SuperEventFilter(QMediaDevices* self, QObject* watched, QEvent* event) {
    return self->QMediaDevices::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnEventFilter(QMediaDevices* self, intptr_t slot) {
    if (auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self))
        vqmediadevices->qmediadevices_eventfilter_callback = reinterpret_cast<VirtualQMediaDevices::QMediaDevices_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QMediaDevices_TimerEvent(QMediaDevices* self, QTimerEvent* event) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices) {
        vqmediadevices->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMediaDevices::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMediaDevices_SuperTimerEvent(QMediaDevices* self, QTimerEvent* event) {
    if (auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self)) {
        vqmediadevices->QMediaDevices::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QMediaDevices::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnTimerEvent(QMediaDevices* self, intptr_t slot) {
    if (auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self))
        vqmediadevices->qmediadevices_timerevent_callback = reinterpret_cast<VirtualQMediaDevices::QMediaDevices_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QMediaDevices_ChildEvent(QMediaDevices* self, QChildEvent* event) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices) {
        vqmediadevices->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMediaDevices::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMediaDevices_SuperChildEvent(QMediaDevices* self, QChildEvent* event) {
    if (auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self)) {
        vqmediadevices->QMediaDevices::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QMediaDevices::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnChildEvent(QMediaDevices* self, intptr_t slot) {
    if (auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self))
        vqmediadevices->qmediadevices_childevent_callback = reinterpret_cast<VirtualQMediaDevices::QMediaDevices_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QMediaDevices_CustomEvent(QMediaDevices* self, QEvent* event) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices) {
        vqmediadevices->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMediaDevices::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMediaDevices_SuperCustomEvent(QMediaDevices* self, QEvent* event) {
    if (auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self)) {
        vqmediadevices->QMediaDevices::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QMediaDevices::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnCustomEvent(QMediaDevices* self, intptr_t slot) {
    if (auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self))
        vqmediadevices->qmediadevices_customevent_callback = reinterpret_cast<VirtualQMediaDevices::QMediaDevices_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QMediaDevices_DisconnectNotify(QMediaDevices* self, const QMetaMethod* signal) {
    auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self);
    if (vqmediadevices) {
        vqmediadevices->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMediaDevices::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMediaDevices_SuperDisconnectNotify(QMediaDevices* self, const QMetaMethod* signal) {
    if (auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self)) {
        vqmediadevices->QMediaDevices::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMediaDevices::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMediaDevices_OnDisconnectNotify(QMediaDevices* self, intptr_t slot) {
    if (auto* vqmediadevices = dynamic_cast<VirtualQMediaDevices*>(self))
        vqmediadevices->qmediadevices_disconnectnotify_callback = reinterpret_cast<VirtualQMediaDevices::QMediaDevices_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QMediaDevices_Sender(const QMediaDevices* self) {
    if (auto* vqmediadevices = const_cast<VirtualQMediaDevices*>(dynamic_cast<const VirtualQMediaDevices*>(self))) {
        return vqmediadevices->VirtualQMediaDevices::sender();
    } else
        qFatal("Error: Protected method QMediaDevices::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QMediaDevices_SenderSignalIndex(const QMediaDevices* self) {
    if (auto* vqmediadevices = const_cast<VirtualQMediaDevices*>(dynamic_cast<const VirtualQMediaDevices*>(self))) {
        return vqmediadevices->VirtualQMediaDevices::senderSignalIndex();
    } else
        qFatal("Error: Protected method QMediaDevices::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QMediaDevices_Receivers(const QMediaDevices* self, const char* signal) {
    if (auto* vqmediadevices = const_cast<VirtualQMediaDevices*>(dynamic_cast<const VirtualQMediaDevices*>(self))) {
        return vqmediadevices->VirtualQMediaDevices::receivers(signal);
    } else
        qFatal("Error: Protected method QMediaDevices::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMediaDevices_IsSignalConnected(const QMediaDevices* self, const QMetaMethod* signal) {
    if (auto* vqmediadevices = const_cast<VirtualQMediaDevices*>(dynamic_cast<const VirtualQMediaDevices*>(self))) {
        return vqmediadevices->VirtualQMediaDevices::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QMediaDevices::isSignalConnected called without a directly constructed type");
}

void QMediaDevices_Delete(QMediaDevices* self) {
    delete self;
}
