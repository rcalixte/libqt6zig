#include <KOverlayIconPlugin>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <koverlayiconplugin.h>
#include "libkoverlayiconplugin.h"
#include "libkoverlayiconplugin.hxx"

KOverlayIconPlugin* KOverlayIconPlugin_new() {
    return new VirtualKOverlayIconPlugin();
}

KOverlayIconPlugin* KOverlayIconPlugin_new2(QObject* parent) {
    return new VirtualKOverlayIconPlugin(parent);
}

QMetaObject* KOverlayIconPlugin_MetaObject(const KOverlayIconPlugin* self) {
    return (QMetaObject*)self->metaObject();
}

void* KOverlayIconPlugin_Metacast(KOverlayIconPlugin* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KOverlayIconPlugin_Metacall(KOverlayIconPlugin* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KOverlayIconPlugin_Tr(const char* s) {
    auto _ret = KOverlayIconPlugin::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KOverlayIconPlugin_GetOverlays(KOverlayIconPlugin* self, const QUrl* item) {
    QList<QString> _ret = self->getOverlays(*item);
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

void KOverlayIconPlugin_OverlaysChanged(KOverlayIconPlugin* self, const QUrl* url, const libqt_list /* of libqt_string */ overlays) {
    QList<QString> overlays_QList;
    overlays_QList.reserve(overlays.len);
    libqt_string* overlays_arr = static_cast<libqt_string*>(overlays.data);
    for (size_t i = 0; i < overlays.len; ++i) {
        QString overlays_arr_i_QString = QString::fromUtf8(overlays_arr[i].data, overlays_arr[i].len);
        overlays_QList.push_back(overlays_arr_i_QString);
    }
    self->overlaysChanged(*url, overlays_QList);
}

void KOverlayIconPlugin_Connect_OverlaysChanged(KOverlayIconPlugin* self, intptr_t slot) {
    void (*slotFunc)(KOverlayIconPlugin*, QUrl*, const char**) = reinterpret_cast<void (*)(KOverlayIconPlugin*, QUrl*, const char**)>(slot);
    KOverlayIconPlugin::connect(self,
                                static_cast<void (KOverlayIconPlugin::*)(const QUrl&, const QList<QString>&)>(&KOverlayIconPlugin::overlaysChanged),
                                [self, slotFunc](const QUrl& url, const QList<QString>& overlays) {
                                    const QUrl& url_ret = url;
                                    // Cast returned reference into pointer
                                    QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                                    const QList<QString>& overlays_ret = overlays;
                                    // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
                                    const char** overlays_arr = static_cast<const char**>(malloc(sizeof(const char*) * (overlays_ret.size() + 1)));
                                    for (qsizetype i = 0; i < overlays_ret.size(); ++i) {
                                        QByteArray overlays_b = overlays_ret[i].toUtf8();
                                        auto overlays_str_len = overlays_b.length();
                                        char* overlays_str = static_cast<char*>(malloc(overlays_str_len + 1));
                                        memcpy(overlays_str, overlays_b.data(), overlays_str_len);
                                        overlays_str[overlays_str_len] = '\0';
                                        overlays_arr[i] = overlays_str;
                                    }
                                    // Append sentinel null terminator to the list
                                    overlays_arr[overlays_ret.size()] = nullptr;
                                    const char** sigval2 = overlays_arr;
                                    slotFunc(self, sigval1, sigval2);
                                    libqt_free(overlays_arr);
                                });
}

libqt_string KOverlayIconPlugin_Tr2(const char* s, const char* c) {
    auto _ret = KOverlayIconPlugin::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KOverlayIconPlugin_Tr3(const char* s, const char* c, int n) {
    auto _ret = KOverlayIconPlugin::tr(s, c, static_cast<int>(n));
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
QMetaObject* KOverlayIconPlugin_SuperMetaObject(const KOverlayIconPlugin* self) {
    return (QMetaObject*)self->KOverlayIconPlugin::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnMetaObject(KOverlayIconPlugin* self, intptr_t slot) {
    if (auto* vkoverlayiconplugin = const_cast<VirtualKOverlayIconPlugin*>(dynamic_cast<const VirtualKOverlayIconPlugin*>(self)))
        vkoverlayiconplugin->koverlayiconplugin_metaobject_callback = reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KOverlayIconPlugin_SuperMetacast(KOverlayIconPlugin* self, const char* param1) {
    return self->KOverlayIconPlugin::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnMetacast(KOverlayIconPlugin* self, intptr_t slot) {
    if (auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self))
        vkoverlayiconplugin->koverlayiconplugin_metacast_callback = reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_Metacast_Callback>(slot);
}

// Base class handler implementation
int KOverlayIconPlugin_SuperMetacall(KOverlayIconPlugin* self, int param1, int param2, void** param3) {
    return self->KOverlayIconPlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnMetacall(KOverlayIconPlugin* self, intptr_t slot) {
    if (auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self))
        vkoverlayiconplugin->koverlayiconplugin_metacall_callback = reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnGetOverlays(KOverlayIconPlugin* self, intptr_t slot) {
    if (auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self))
        vkoverlayiconplugin->koverlayiconplugin_getoverlays_callback = reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_GetOverlays_Callback>(slot);
}

// Derived class handler implementation
bool KOverlayIconPlugin_Event(KOverlayIconPlugin* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KOverlayIconPlugin_SuperEvent(KOverlayIconPlugin* self, QEvent* event) {
    return self->KOverlayIconPlugin::event(event);
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnEvent(KOverlayIconPlugin* self, intptr_t slot) {
    if (auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self))
        vkoverlayiconplugin->koverlayiconplugin_event_callback = reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_Event_Callback>(slot);
}

// Derived class handler implementation
bool KOverlayIconPlugin_EventFilter(KOverlayIconPlugin* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KOverlayIconPlugin_SuperEventFilter(KOverlayIconPlugin* self, QObject* watched, QEvent* event) {
    return self->KOverlayIconPlugin::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnEventFilter(KOverlayIconPlugin* self, intptr_t slot) {
    if (auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self))
        vkoverlayiconplugin->koverlayiconplugin_eventfilter_callback = reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KOverlayIconPlugin_TimerEvent(KOverlayIconPlugin* self, QTimerEvent* event) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin) {
        vkoverlayiconplugin->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOverlayIconPlugin::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOverlayIconPlugin_SuperTimerEvent(KOverlayIconPlugin* self, QTimerEvent* event) {
    if (auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self)) {
        vkoverlayiconplugin->KOverlayIconPlugin::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KOverlayIconPlugin::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnTimerEvent(KOverlayIconPlugin* self, intptr_t slot) {
    if (auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self))
        vkoverlayiconplugin->koverlayiconplugin_timerevent_callback = reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KOverlayIconPlugin_ChildEvent(KOverlayIconPlugin* self, QChildEvent* event) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin) {
        vkoverlayiconplugin->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOverlayIconPlugin::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOverlayIconPlugin_SuperChildEvent(KOverlayIconPlugin* self, QChildEvent* event) {
    if (auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self)) {
        vkoverlayiconplugin->KOverlayIconPlugin::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KOverlayIconPlugin::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnChildEvent(KOverlayIconPlugin* self, intptr_t slot) {
    if (auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self))
        vkoverlayiconplugin->koverlayiconplugin_childevent_callback = reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KOverlayIconPlugin_CustomEvent(KOverlayIconPlugin* self, QEvent* event) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin) {
        vkoverlayiconplugin->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOverlayIconPlugin::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOverlayIconPlugin_SuperCustomEvent(KOverlayIconPlugin* self, QEvent* event) {
    if (auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self)) {
        vkoverlayiconplugin->KOverlayIconPlugin::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KOverlayIconPlugin::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnCustomEvent(KOverlayIconPlugin* self, intptr_t slot) {
    if (auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self))
        vkoverlayiconplugin->koverlayiconplugin_customevent_callback = reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KOverlayIconPlugin_ConnectNotify(KOverlayIconPlugin* self, const QMetaMethod* signal) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin) {
        vkoverlayiconplugin->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KOverlayIconPlugin::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KOverlayIconPlugin_SuperConnectNotify(KOverlayIconPlugin* self, const QMetaMethod* signal) {
    if (auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self)) {
        vkoverlayiconplugin->KOverlayIconPlugin::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KOverlayIconPlugin::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnConnectNotify(KOverlayIconPlugin* self, intptr_t slot) {
    if (auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self))
        vkoverlayiconplugin->koverlayiconplugin_connectnotify_callback = reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KOverlayIconPlugin_DisconnectNotify(KOverlayIconPlugin* self, const QMetaMethod* signal) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin) {
        vkoverlayiconplugin->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KOverlayIconPlugin::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KOverlayIconPlugin_SuperDisconnectNotify(KOverlayIconPlugin* self, const QMetaMethod* signal) {
    if (auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self)) {
        vkoverlayiconplugin->KOverlayIconPlugin::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KOverlayIconPlugin::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnDisconnectNotify(KOverlayIconPlugin* self, intptr_t slot) {
    if (auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self))
        vkoverlayiconplugin->koverlayiconplugin_disconnectnotify_callback = reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KOverlayIconPlugin_Sender(const KOverlayIconPlugin* self) {
    if (auto* vkoverlayiconplugin = const_cast<VirtualKOverlayIconPlugin*>(dynamic_cast<const VirtualKOverlayIconPlugin*>(self))) {
        return vkoverlayiconplugin->VirtualKOverlayIconPlugin::sender();
    } else
        qFatal("Error: Protected method KOverlayIconPlugin::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KOverlayIconPlugin_SenderSignalIndex(const KOverlayIconPlugin* self) {
    if (auto* vkoverlayiconplugin = const_cast<VirtualKOverlayIconPlugin*>(dynamic_cast<const VirtualKOverlayIconPlugin*>(self))) {
        return vkoverlayiconplugin->VirtualKOverlayIconPlugin::senderSignalIndex();
    } else
        qFatal("Error: Protected method KOverlayIconPlugin::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KOverlayIconPlugin_Receivers(const KOverlayIconPlugin* self, const char* signal) {
    if (auto* vkoverlayiconplugin = const_cast<VirtualKOverlayIconPlugin*>(dynamic_cast<const VirtualKOverlayIconPlugin*>(self))) {
        return vkoverlayiconplugin->VirtualKOverlayIconPlugin::receivers(signal);
    } else
        qFatal("Error: Protected method KOverlayIconPlugin::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KOverlayIconPlugin_IsSignalConnected(const KOverlayIconPlugin* self, const QMetaMethod* signal) {
    if (auto* vkoverlayiconplugin = const_cast<VirtualKOverlayIconPlugin*>(dynamic_cast<const VirtualKOverlayIconPlugin*>(self))) {
        return vkoverlayiconplugin->VirtualKOverlayIconPlugin::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KOverlayIconPlugin::isSignalConnected called without a directly constructed type");
}

void KOverlayIconPlugin_Delete(KOverlayIconPlugin* self) {
    delete self;
}
