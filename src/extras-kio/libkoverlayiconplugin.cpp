#include <KOverlayIconPlugin>
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
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKOverlayIconPlugin*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KOverlayIconPlugin_Tr(const char* s) {
    QString _ret = KOverlayIconPlugin::tr(s);
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
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        QList<QString> _ret = vkoverlayiconplugin->getOverlays(*item);
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
    } else {
        QList<QString> _ret = ((VirtualKOverlayIconPlugin*)self)->getOverlays(*item);
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
    KOverlayIconPlugin::connect(self, &KOverlayIconPlugin::overlaysChanged, [self, slotFunc](const QUrl& url, const QList<QString>& overlays) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        const QList<QString>& overlays_ret = overlays;
        // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
        const char** overlays_arr = static_cast<const char**>(malloc(sizeof(const char*) * (overlays_ret.size() + 1)));
        for (qsizetype i = 0; i < overlays_ret.size(); ++i) {
            QByteArray overlays_b = overlays_ret[i].toUtf8();
            char* overlays_str = static_cast<char*>(malloc(overlays_b.length() + 1));
            memcpy(overlays_str, overlays_b.data(), overlays_b.length());
            overlays_str[overlays_b.length()] = '\0';
            overlays_arr[i] = overlays_str;
        }
        // Append sentinel null terminator to the list
        overlays_arr[overlays_ret.size()] = nullptr;
        const char** sigval2 = overlays_arr;
        slotFunc(self, sigval1, sigval2);
        free(overlays_arr);
    });
}

libqt_string KOverlayIconPlugin_Tr2(const char* s, const char* c) {
    QString _ret = KOverlayIconPlugin::tr(s, c);
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
    QString _ret = KOverlayIconPlugin::tr(s, c, static_cast<int>(n));
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
int KOverlayIconPlugin_QBaseMetacall(KOverlayIconPlugin* self, int param1, int param2, void** param3) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_Metacall_IsBase(true);
        return vkoverlayiconplugin->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KOverlayIconPlugin::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnMetacall(KOverlayIconPlugin* self, intptr_t slot) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_Metacall_Callback(reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ KOverlayIconPlugin_QBaseGetOverlays(KOverlayIconPlugin* self, const QUrl* item) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_GetOverlays_IsBase(true);
        QList<QString> _ret = vkoverlayiconplugin->getOverlays(*item);
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
    } else {
        QList<QString> _ret = ((VirtualKOverlayIconPlugin*)self)->getOverlays(*item);
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
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
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnGetOverlays(KOverlayIconPlugin* self, intptr_t slot) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_GetOverlays_Callback(reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_GetOverlays_Callback>(slot));
    }
}

// Derived class handler implementation
bool KOverlayIconPlugin_Event(KOverlayIconPlugin* self, QEvent* event) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        return vkoverlayiconplugin->event(event);
    } else {
        return self->KOverlayIconPlugin::event(event);
    }
}

// Base class handler implementation
bool KOverlayIconPlugin_QBaseEvent(KOverlayIconPlugin* self, QEvent* event) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_Event_IsBase(true);
        return vkoverlayiconplugin->event(event);
    } else {
        return self->KOverlayIconPlugin::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnEvent(KOverlayIconPlugin* self, intptr_t slot) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_Event_Callback(reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KOverlayIconPlugin_EventFilter(KOverlayIconPlugin* self, QObject* watched, QEvent* event) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        return vkoverlayiconplugin->eventFilter(watched, event);
    } else {
        return self->KOverlayIconPlugin::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KOverlayIconPlugin_QBaseEventFilter(KOverlayIconPlugin* self, QObject* watched, QEvent* event) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_EventFilter_IsBase(true);
        return vkoverlayiconplugin->eventFilter(watched, event);
    } else {
        return self->KOverlayIconPlugin::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnEventFilter(KOverlayIconPlugin* self, intptr_t slot) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_EventFilter_Callback(reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KOverlayIconPlugin_TimerEvent(KOverlayIconPlugin* self, QTimerEvent* event) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->timerEvent(event);
    } else {
        ((VirtualKOverlayIconPlugin*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KOverlayIconPlugin_QBaseTimerEvent(KOverlayIconPlugin* self, QTimerEvent* event) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_TimerEvent_IsBase(true);
        vkoverlayiconplugin->timerEvent(event);
    } else {
        ((VirtualKOverlayIconPlugin*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnTimerEvent(KOverlayIconPlugin* self, intptr_t slot) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_TimerEvent_Callback(reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOverlayIconPlugin_ChildEvent(KOverlayIconPlugin* self, QChildEvent* event) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->childEvent(event);
    } else {
        ((VirtualKOverlayIconPlugin*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KOverlayIconPlugin_QBaseChildEvent(KOverlayIconPlugin* self, QChildEvent* event) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_ChildEvent_IsBase(true);
        vkoverlayiconplugin->childEvent(event);
    } else {
        ((VirtualKOverlayIconPlugin*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnChildEvent(KOverlayIconPlugin* self, intptr_t slot) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_ChildEvent_Callback(reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOverlayIconPlugin_CustomEvent(KOverlayIconPlugin* self, QEvent* event) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->customEvent(event);
    } else {
        ((VirtualKOverlayIconPlugin*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KOverlayIconPlugin_QBaseCustomEvent(KOverlayIconPlugin* self, QEvent* event) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_CustomEvent_IsBase(true);
        vkoverlayiconplugin->customEvent(event);
    } else {
        ((VirtualKOverlayIconPlugin*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnCustomEvent(KOverlayIconPlugin* self, intptr_t slot) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_CustomEvent_Callback(reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOverlayIconPlugin_ConnectNotify(KOverlayIconPlugin* self, const QMetaMethod* signal) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->connectNotify(*signal);
    } else {
        ((VirtualKOverlayIconPlugin*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KOverlayIconPlugin_QBaseConnectNotify(KOverlayIconPlugin* self, const QMetaMethod* signal) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_ConnectNotify_IsBase(true);
        vkoverlayiconplugin->connectNotify(*signal);
    } else {
        ((VirtualKOverlayIconPlugin*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnConnectNotify(KOverlayIconPlugin* self, intptr_t slot) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_ConnectNotify_Callback(reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KOverlayIconPlugin_DisconnectNotify(KOverlayIconPlugin* self, const QMetaMethod* signal) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->disconnectNotify(*signal);
    } else {
        ((VirtualKOverlayIconPlugin*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KOverlayIconPlugin_QBaseDisconnectNotify(KOverlayIconPlugin* self, const QMetaMethod* signal) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_DisconnectNotify_IsBase(true);
        vkoverlayiconplugin->disconnectNotify(*signal);
    } else {
        ((VirtualKOverlayIconPlugin*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnDisconnectNotify(KOverlayIconPlugin* self, intptr_t slot) {
    auto* vkoverlayiconplugin = dynamic_cast<VirtualKOverlayIconPlugin*>(self);
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_DisconnectNotify_Callback(reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KOverlayIconPlugin_Sender(const KOverlayIconPlugin* self) {
    auto* vkoverlayiconplugin = const_cast<VirtualKOverlayIconPlugin*>(dynamic_cast<const VirtualKOverlayIconPlugin*>(self));
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        return vkoverlayiconplugin->sender();
    } else {
        return ((VirtualKOverlayIconPlugin*)self)->sender();
    }
}

// Base class handler implementation
QObject* KOverlayIconPlugin_QBaseSender(const KOverlayIconPlugin* self) {
    auto* vkoverlayiconplugin = const_cast<VirtualKOverlayIconPlugin*>(dynamic_cast<const VirtualKOverlayIconPlugin*>(self));
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_Sender_IsBase(true);
        return vkoverlayiconplugin->sender();
    } else {
        return ((VirtualKOverlayIconPlugin*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnSender(const KOverlayIconPlugin* self, intptr_t slot) {
    auto* vkoverlayiconplugin = const_cast<VirtualKOverlayIconPlugin*>(dynamic_cast<const VirtualKOverlayIconPlugin*>(self));
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_Sender_Callback(reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KOverlayIconPlugin_SenderSignalIndex(const KOverlayIconPlugin* self) {
    auto* vkoverlayiconplugin = const_cast<VirtualKOverlayIconPlugin*>(dynamic_cast<const VirtualKOverlayIconPlugin*>(self));
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        return vkoverlayiconplugin->senderSignalIndex();
    } else {
        return ((VirtualKOverlayIconPlugin*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KOverlayIconPlugin_QBaseSenderSignalIndex(const KOverlayIconPlugin* self) {
    auto* vkoverlayiconplugin = const_cast<VirtualKOverlayIconPlugin*>(dynamic_cast<const VirtualKOverlayIconPlugin*>(self));
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_SenderSignalIndex_IsBase(true);
        return vkoverlayiconplugin->senderSignalIndex();
    } else {
        return ((VirtualKOverlayIconPlugin*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnSenderSignalIndex(const KOverlayIconPlugin* self, intptr_t slot) {
    auto* vkoverlayiconplugin = const_cast<VirtualKOverlayIconPlugin*>(dynamic_cast<const VirtualKOverlayIconPlugin*>(self));
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_SenderSignalIndex_Callback(reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KOverlayIconPlugin_Receivers(const KOverlayIconPlugin* self, const char* signal) {
    auto* vkoverlayiconplugin = const_cast<VirtualKOverlayIconPlugin*>(dynamic_cast<const VirtualKOverlayIconPlugin*>(self));
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        return vkoverlayiconplugin->receivers(signal);
    } else {
        return ((VirtualKOverlayIconPlugin*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KOverlayIconPlugin_QBaseReceivers(const KOverlayIconPlugin* self, const char* signal) {
    auto* vkoverlayiconplugin = const_cast<VirtualKOverlayIconPlugin*>(dynamic_cast<const VirtualKOverlayIconPlugin*>(self));
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_Receivers_IsBase(true);
        return vkoverlayiconplugin->receivers(signal);
    } else {
        return ((VirtualKOverlayIconPlugin*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnReceivers(const KOverlayIconPlugin* self, intptr_t slot) {
    auto* vkoverlayiconplugin = const_cast<VirtualKOverlayIconPlugin*>(dynamic_cast<const VirtualKOverlayIconPlugin*>(self));
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_Receivers_Callback(reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KOverlayIconPlugin_IsSignalConnected(const KOverlayIconPlugin* self, const QMetaMethod* signal) {
    auto* vkoverlayiconplugin = const_cast<VirtualKOverlayIconPlugin*>(dynamic_cast<const VirtualKOverlayIconPlugin*>(self));
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        return vkoverlayiconplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualKOverlayIconPlugin*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KOverlayIconPlugin_QBaseIsSignalConnected(const KOverlayIconPlugin* self, const QMetaMethod* signal) {
    auto* vkoverlayiconplugin = const_cast<VirtualKOverlayIconPlugin*>(dynamic_cast<const VirtualKOverlayIconPlugin*>(self));
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_IsSignalConnected_IsBase(true);
        return vkoverlayiconplugin->isSignalConnected(*signal);
    } else {
        return ((VirtualKOverlayIconPlugin*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KOverlayIconPlugin_OnIsSignalConnected(const KOverlayIconPlugin* self, intptr_t slot) {
    auto* vkoverlayiconplugin = const_cast<VirtualKOverlayIconPlugin*>(dynamic_cast<const VirtualKOverlayIconPlugin*>(self));
    if (vkoverlayiconplugin && vkoverlayiconplugin->isVirtualKOverlayIconPlugin) {
        vkoverlayiconplugin->setKOverlayIconPlugin_IsSignalConnected_Callback(reinterpret_cast<VirtualKOverlayIconPlugin::KOverlayIconPlugin_IsSignalConnected_Callback>(slot));
    }
}

void KOverlayIconPlugin_Delete(KOverlayIconPlugin* self) {
    delete self;
}
