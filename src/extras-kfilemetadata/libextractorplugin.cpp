#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__ExtractionResult
#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__ExtractorPlugin
#include <QChildEvent>
#include <QDateTime>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <extractorplugin.h>
#include "libextractorplugin.h"
#include "libextractorplugin.hxx"

KFileMetaData__ExtractorPlugin* KFileMetaData__ExtractorPlugin_new(QObject* parent) {
    return new VirtualKFileMetaDataExtractorPlugin(parent);
}

QMetaObject* KFileMetaData__ExtractorPlugin_MetaObject(const KFileMetaData__ExtractorPlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFileMetaData__ExtractorPlugin_Metacast(KFileMetaData__ExtractorPlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFileMetaData__ExtractorPlugin_Metacall(KFileMetaData__ExtractorPlugin* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KFileMetaData__ExtractorPlugin_Tr(const char* s) {
    auto _ret = KFileMetaData::ExtractorPlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KFileMetaData__ExtractorPlugin_Mimetypes(const KFileMetaData__ExtractorPlugin* self) {
    QList<QString> _ret = self->mimetypes();
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

void KFileMetaData__ExtractorPlugin_Extract(KFileMetaData__ExtractorPlugin* self, KFileMetaData__ExtractionResult* result) {
    self->extract(result);
}

QDateTime* KFileMetaData__ExtractorPlugin_DateTimeFromString(const libqt_string dateString) {
    QString dateString_QString = QString::fromUtf8(dateString.data, dateString.len);
    return new QDateTime(KFileMetaData::ExtractorPlugin::dateTimeFromString(dateString_QString));
}

libqt_list /* of libqt_string */ KFileMetaData__ExtractorPlugin_ContactsFromString(const libqt_string string) {
    QString string_QString = QString::fromUtf8(string.data, string.len);
    QList<QString> _ret = KFileMetaData::ExtractorPlugin::contactsFromString(string_QString);
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

libqt_string KFileMetaData__ExtractorPlugin_Tr2(const char* s, const char* c) {
    auto _ret = KFileMetaData::ExtractorPlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFileMetaData__ExtractorPlugin_Tr3(const char* s, const char* c, int n) {
    auto _ret = KFileMetaData::ExtractorPlugin::tr(s, c, static_cast<int>(n));
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
QMetaObject* KFileMetaData__ExtractorPlugin_SuperMetaObject(const KFileMetaData__ExtractorPlugin* self) {
    return (QMetaObject*)self->KFileMetaData::ExtractorPlugin::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnMetaObject(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self)))
        vkfilemetadataextractorplugin->kfilemetadata__extractorplugin_metaobject_callback = reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KFileMetaData__ExtractorPlugin_SuperMetacast(KFileMetaData__ExtractorPlugin* self, const char* param1) {
    return self->KFileMetaData::ExtractorPlugin::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnMetacast(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self))
        vkfilemetadataextractorplugin->kfilemetadata__extractorplugin_metacast_callback = reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_Metacast_Callback>(slot);
}

// Base class handler implementation
int KFileMetaData__ExtractorPlugin_SuperMetacall(KFileMetaData__ExtractorPlugin* self, int param1, int param2, void** param3) {
    return self->KFileMetaData::ExtractorPlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnMetacall(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self))
        vkfilemetadataextractorplugin->kfilemetadata__extractorplugin_metacall_callback = reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnMimetypes(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self)))
        vkfilemetadataextractorplugin->kfilemetadata__extractorplugin_mimetypes_callback = reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_Mimetypes_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnExtract(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self))
        vkfilemetadataextractorplugin->kfilemetadata__extractorplugin_extract_callback = reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_Extract_Callback>(slot);
}

// Derived class handler implementation
bool KFileMetaData__ExtractorPlugin_Event(KFileMetaData__ExtractorPlugin* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KFileMetaData__ExtractorPlugin_SuperEvent(KFileMetaData__ExtractorPlugin* self, QEvent* event) {
    return self->KFileMetaData::ExtractorPlugin::event(event);
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnEvent(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self))
        vkfilemetadataextractorplugin->kfilemetadata__extractorplugin_event_callback = reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_Event_Callback>(slot);
}

// Derived class handler implementation
bool KFileMetaData__ExtractorPlugin_EventFilter(KFileMetaData__ExtractorPlugin* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KFileMetaData__ExtractorPlugin_SuperEventFilter(KFileMetaData__ExtractorPlugin* self, QObject* watched, QEvent* event) {
    return self->KFileMetaData::ExtractorPlugin::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnEventFilter(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self))
        vkfilemetadataextractorplugin->kfilemetadata__extractorplugin_eventfilter_callback = reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KFileMetaData__ExtractorPlugin_TimerEvent(KFileMetaData__ExtractorPlugin* self, QTimerEvent* event) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin) {
        vkfilemetadataextractorplugin->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileMetaData::ExtractorPlugin::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileMetaData__ExtractorPlugin_SuperTimerEvent(KFileMetaData__ExtractorPlugin* self, QTimerEvent* event) {
    if (auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self)) {
        vkfilemetadataextractorplugin->KFileMetaData::ExtractorPlugin::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileMetaData::ExtractorPlugin::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnTimerEvent(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self))
        vkfilemetadataextractorplugin->kfilemetadata__extractorplugin_timerevent_callback = reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileMetaData__ExtractorPlugin_ChildEvent(KFileMetaData__ExtractorPlugin* self, QChildEvent* event) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin) {
        vkfilemetadataextractorplugin->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileMetaData::ExtractorPlugin::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileMetaData__ExtractorPlugin_SuperChildEvent(KFileMetaData__ExtractorPlugin* self, QChildEvent* event) {
    if (auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self)) {
        vkfilemetadataextractorplugin->KFileMetaData::ExtractorPlugin::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileMetaData::ExtractorPlugin::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnChildEvent(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self))
        vkfilemetadataextractorplugin->kfilemetadata__extractorplugin_childevent_callback = reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileMetaData__ExtractorPlugin_CustomEvent(KFileMetaData__ExtractorPlugin* self, QEvent* event) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin) {
        vkfilemetadataextractorplugin->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileMetaData::ExtractorPlugin::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileMetaData__ExtractorPlugin_SuperCustomEvent(KFileMetaData__ExtractorPlugin* self, QEvent* event) {
    if (auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self)) {
        vkfilemetadataextractorplugin->KFileMetaData::ExtractorPlugin::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileMetaData::ExtractorPlugin::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnCustomEvent(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self))
        vkfilemetadataextractorplugin->kfilemetadata__extractorplugin_customevent_callback = reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileMetaData__ExtractorPlugin_ConnectNotify(KFileMetaData__ExtractorPlugin* self, const QMetaMethod* signal) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin) {
        vkfilemetadataextractorplugin->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFileMetaData::ExtractorPlugin::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileMetaData__ExtractorPlugin_SuperConnectNotify(KFileMetaData__ExtractorPlugin* self, const QMetaMethod* signal) {
    if (auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self)) {
        vkfilemetadataextractorplugin->KFileMetaData::ExtractorPlugin::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFileMetaData::ExtractorPlugin::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnConnectNotify(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self))
        vkfilemetadataextractorplugin->kfilemetadata__extractorplugin_connectnotify_callback = reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFileMetaData__ExtractorPlugin_DisconnectNotify(KFileMetaData__ExtractorPlugin* self, const QMetaMethod* signal) {
    auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self);
    if (vkfilemetadataextractorplugin) {
        vkfilemetadataextractorplugin->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFileMetaData::ExtractorPlugin::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileMetaData__ExtractorPlugin_SuperDisconnectNotify(KFileMetaData__ExtractorPlugin* self, const QMetaMethod* signal) {
    if (auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self)) {
        vkfilemetadataextractorplugin->KFileMetaData::ExtractorPlugin::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFileMetaData::ExtractorPlugin::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileMetaData__ExtractorPlugin_OnDisconnectNotify(KFileMetaData__ExtractorPlugin* self, intptr_t slot) {
    if (auto* vkfilemetadataextractorplugin = dynamic_cast<VirtualKFileMetaDataExtractorPlugin*>(self))
        vkfilemetadataextractorplugin->kfilemetadata__extractorplugin_disconnectnotify_callback = reinterpret_cast<VirtualKFileMetaDataExtractorPlugin::KFileMetaData__ExtractorPlugin_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string KFileMetaData__ExtractorPlugin_GetSupportedMimeType(const KFileMetaData__ExtractorPlugin* self, const libqt_string mimetype) {
    if (auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self))) {
        QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
        auto _ret = vkfilemetadataextractorplugin->VirtualKFileMetaDataExtractorPlugin::getSupportedMimeType(mimetype_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method KFileMetaData::ExtractorPlugin::getSupportedMimeType called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KFileMetaData__ExtractorPlugin_Sender(const KFileMetaData__ExtractorPlugin* self) {
    if (auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self))) {
        return vkfilemetadataextractorplugin->VirtualKFileMetaDataExtractorPlugin::sender();
    } else
        qFatal("Error: Protected method KFileMetaData::ExtractorPlugin::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KFileMetaData__ExtractorPlugin_SenderSignalIndex(const KFileMetaData__ExtractorPlugin* self) {
    if (auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self))) {
        return vkfilemetadataextractorplugin->VirtualKFileMetaDataExtractorPlugin::senderSignalIndex();
    } else
        qFatal("Error: Protected method KFileMetaData::ExtractorPlugin::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFileMetaData__ExtractorPlugin_Receivers(const KFileMetaData__ExtractorPlugin* self, const char* signal) {
    if (auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self))) {
        return vkfilemetadataextractorplugin->VirtualKFileMetaDataExtractorPlugin::receivers(signal);
    } else
        qFatal("Error: Protected method KFileMetaData::ExtractorPlugin::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFileMetaData__ExtractorPlugin_IsSignalConnected(const KFileMetaData__ExtractorPlugin* self, const QMetaMethod* signal) {
    if (auto* vkfilemetadataextractorplugin = const_cast<VirtualKFileMetaDataExtractorPlugin*>(dynamic_cast<const VirtualKFileMetaDataExtractorPlugin*>(self))) {
        return vkfilemetadataextractorplugin->VirtualKFileMetaDataExtractorPlugin::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KFileMetaData::ExtractorPlugin::isSignalConnected called without a directly constructed type");
}

void KFileMetaData__ExtractorPlugin_Delete(KFileMetaData__ExtractorPlugin* self) {
    delete self;
}
