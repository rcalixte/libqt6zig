#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__WriteData
#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__WriterPlugin
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <writerplugin.h>
#include "libwriterplugin.h"
#include "libwriterplugin.hxx"

KFileMetaData__WriterPlugin* KFileMetaData__WriterPlugin_new(QObject* parent) {
    return new VirtualKFileMetaDataWriterPlugin(parent);
}

QMetaObject* KFileMetaData__WriterPlugin_MetaObject(const KFileMetaData__WriterPlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFileMetaData__WriterPlugin_Metacast(KFileMetaData__WriterPlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFileMetaData__WriterPlugin_Metacall(KFileMetaData__WriterPlugin* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KFileMetaData__WriterPlugin_Tr(const char* s) {
    auto _ret = KFileMetaData::WriterPlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KFileMetaData__WriterPlugin_WriteMimetypes(const KFileMetaData__WriterPlugin* self) {
    QList<QString> _ret = self->writeMimetypes();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KFileMetaData__WriterPlugin_Write(KFileMetaData__WriterPlugin* self, const KFileMetaData__WriteData* data) {
    self->write(*data);
}

libqt_string KFileMetaData__WriterPlugin_Tr2(const char* s, const char* c) {
    auto _ret = KFileMetaData::WriterPlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFileMetaData__WriterPlugin_Tr3(const char* s, const char* c, int n) {
    auto _ret = KFileMetaData::WriterPlugin::tr(s, c, static_cast<int>(n));
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
QMetaObject* KFileMetaData__WriterPlugin_SuperMetaObject(const KFileMetaData__WriterPlugin* self) {
    return (QMetaObject*)self->KFileMetaData::WriterPlugin::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnMetaObject(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self)))
        vkfilemetadatawriterplugin->kfilemetadata__writerplugin_metaobject_callback = reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KFileMetaData__WriterPlugin_SuperMetacast(KFileMetaData__WriterPlugin* self, const char* param1) {
    return self->KFileMetaData::WriterPlugin::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnMetacast(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self))
        vkfilemetadatawriterplugin->kfilemetadata__writerplugin_metacast_callback = reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_Metacast_Callback>(slot);
}

// Base class handler implementation
int KFileMetaData__WriterPlugin_SuperMetacall(KFileMetaData__WriterPlugin* self, int param1, int param2, void** param3) {
    return self->KFileMetaData::WriterPlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnMetacall(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self))
        vkfilemetadatawriterplugin->kfilemetadata__writerplugin_metacall_callback = reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnWriteMimetypes(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self)))
        vkfilemetadatawriterplugin->kfilemetadata__writerplugin_writemimetypes_callback = reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_WriteMimetypes_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnWrite(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self))
        vkfilemetadatawriterplugin->kfilemetadata__writerplugin_write_callback = reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_Write_Callback>(slot);
}

// Derived class handler implementation
bool KFileMetaData__WriterPlugin_Event(KFileMetaData__WriterPlugin* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KFileMetaData__WriterPlugin_SuperEvent(KFileMetaData__WriterPlugin* self, QEvent* event) {
    return self->KFileMetaData::WriterPlugin::event(event);
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnEvent(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self))
        vkfilemetadatawriterplugin->kfilemetadata__writerplugin_event_callback = reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_Event_Callback>(slot);
}

// Derived class handler implementation
bool KFileMetaData__WriterPlugin_EventFilter(KFileMetaData__WriterPlugin* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KFileMetaData__WriterPlugin_SuperEventFilter(KFileMetaData__WriterPlugin* self, QObject* watched, QEvent* event) {
    return self->KFileMetaData::WriterPlugin::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnEventFilter(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self))
        vkfilemetadatawriterplugin->kfilemetadata__writerplugin_eventfilter_callback = reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KFileMetaData__WriterPlugin_TimerEvent(KFileMetaData__WriterPlugin* self, QTimerEvent* event) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin) {
        vkfilemetadatawriterplugin->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileMetaData::WriterPlugin::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileMetaData__WriterPlugin_SuperTimerEvent(KFileMetaData__WriterPlugin* self, QTimerEvent* event) {
    if (auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self)) {
        vkfilemetadatawriterplugin->KFileMetaData::WriterPlugin::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileMetaData::WriterPlugin::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnTimerEvent(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self))
        vkfilemetadatawriterplugin->kfilemetadata__writerplugin_timerevent_callback = reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileMetaData__WriterPlugin_ChildEvent(KFileMetaData__WriterPlugin* self, QChildEvent* event) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin) {
        vkfilemetadatawriterplugin->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileMetaData::WriterPlugin::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileMetaData__WriterPlugin_SuperChildEvent(KFileMetaData__WriterPlugin* self, QChildEvent* event) {
    if (auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self)) {
        vkfilemetadatawriterplugin->KFileMetaData::WriterPlugin::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileMetaData::WriterPlugin::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnChildEvent(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self))
        vkfilemetadatawriterplugin->kfilemetadata__writerplugin_childevent_callback = reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileMetaData__WriterPlugin_CustomEvent(KFileMetaData__WriterPlugin* self, QEvent* event) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin) {
        vkfilemetadatawriterplugin->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileMetaData::WriterPlugin::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileMetaData__WriterPlugin_SuperCustomEvent(KFileMetaData__WriterPlugin* self, QEvent* event) {
    if (auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self)) {
        vkfilemetadatawriterplugin->KFileMetaData::WriterPlugin::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileMetaData::WriterPlugin::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnCustomEvent(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self))
        vkfilemetadatawriterplugin->kfilemetadata__writerplugin_customevent_callback = reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileMetaData__WriterPlugin_ConnectNotify(KFileMetaData__WriterPlugin* self, const QMetaMethod* signal) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin) {
        vkfilemetadatawriterplugin->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFileMetaData::WriterPlugin::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileMetaData__WriterPlugin_SuperConnectNotify(KFileMetaData__WriterPlugin* self, const QMetaMethod* signal) {
    if (auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self)) {
        vkfilemetadatawriterplugin->KFileMetaData::WriterPlugin::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFileMetaData::WriterPlugin::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnConnectNotify(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self))
        vkfilemetadatawriterplugin->kfilemetadata__writerplugin_connectnotify_callback = reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFileMetaData__WriterPlugin_DisconnectNotify(KFileMetaData__WriterPlugin* self, const QMetaMethod* signal) {
    auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self);
    if (vkfilemetadatawriterplugin) {
        vkfilemetadatawriterplugin->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFileMetaData::WriterPlugin::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileMetaData__WriterPlugin_SuperDisconnectNotify(KFileMetaData__WriterPlugin* self, const QMetaMethod* signal) {
    if (auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self)) {
        vkfilemetadatawriterplugin->KFileMetaData::WriterPlugin::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFileMetaData::WriterPlugin::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__WriterPlugin_OnDisconnectNotify(KFileMetaData__WriterPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadatawriterplugin = dynamic_cast<VirtualKFileMetaDataWriterPlugin*>(self))
        vkfilemetadatawriterplugin->kfilemetadata__writerplugin_disconnectnotify_callback = reinterpret_cast<VirtualKFileMetaDataWriterPlugin::KFileMetaData__WriterPlugin_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KFileMetaData__WriterPlugin_Sender(const KFileMetaData__WriterPlugin* self) {
    if (auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self))) {
        return vkfilemetadatawriterplugin->VirtualKFileMetaDataWriterPlugin::sender();
    } else
        qFatal("Error: Protected method KFileMetaData::WriterPlugin::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KFileMetaData__WriterPlugin_SenderSignalIndex(const KFileMetaData__WriterPlugin* self) {
    if (auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self))) {
        return vkfilemetadatawriterplugin->VirtualKFileMetaDataWriterPlugin::senderSignalIndex();
    } else
        qFatal("Error: Protected method KFileMetaData::WriterPlugin::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFileMetaData__WriterPlugin_Receivers(const KFileMetaData__WriterPlugin* self, const char* signal) {
    if (auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self))) {
        return vkfilemetadatawriterplugin->VirtualKFileMetaDataWriterPlugin::receivers(signal);
    } else
        qFatal("Error: Protected method KFileMetaData::WriterPlugin::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFileMetaData__WriterPlugin_IsSignalConnected(const KFileMetaData__WriterPlugin* self, const QMetaMethod* signal) {
    if (auto* vkfilemetadatawriterplugin = const_cast<VirtualKFileMetaDataWriterPlugin*>(dynamic_cast<const VirtualKFileMetaDataWriterPlugin*>(self))) {
        return vkfilemetadatawriterplugin->VirtualKFileMetaDataWriterPlugin::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KFileMetaData::WriterPlugin::isSignalConnected called without a directly constructed type");
}

void KFileMetaData__WriterPlugin_Delete(KFileMetaData__WriterPlugin* self) {
    delete self;
}
