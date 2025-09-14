#include <KAbstractViewAdapter>
#include <KFilePreviewGenerator>
#include <QAbstractItemView>
#include <QAbstractProxyModel>
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
#include <kfilepreviewgenerator.h>
#include "libkfilepreviewgenerator.h"
#include "libkfilepreviewgenerator.hxx"

KFilePreviewGenerator* KFilePreviewGenerator_new(QAbstractItemView* parent) {
    return new VirtualKFilePreviewGenerator(parent);
}

KFilePreviewGenerator* KFilePreviewGenerator_new2(KAbstractViewAdapter* parent, QAbstractProxyModel* model) {
    return new VirtualKFilePreviewGenerator(parent, model);
}

QMetaObject* KFilePreviewGenerator_MetaObject(const KFilePreviewGenerator* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFilePreviewGenerator_Metacast(KFilePreviewGenerator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFilePreviewGenerator_Metacall(KFilePreviewGenerator* self, int param1, int param2, void** param3) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFilePreviewGenerator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KFilePreviewGenerator_Tr(const char* s) {
    QString _ret = KFilePreviewGenerator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFilePreviewGenerator_SetPreviewShown(KFilePreviewGenerator* self, bool show) {
    self->setPreviewShown(show);
}

bool KFilePreviewGenerator_IsPreviewShown(const KFilePreviewGenerator* self) {
    return self->isPreviewShown();
}

void KFilePreviewGenerator_SetEnabledPlugins(KFilePreviewGenerator* self, const libqt_list /* of libqt_string */ list) {
    QList<QString> list_QList;
    list_QList.reserve(list.len);
    libqt_string* list_arr = static_cast<libqt_string*>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
        list_QList.push_back(list_arr_i_QString);
    }
    self->setEnabledPlugins(list_QList);
}

libqt_list /* of libqt_string */ KFilePreviewGenerator_EnabledPlugins(const KFilePreviewGenerator* self) {
    QList<QString> _ret = self->enabledPlugins();
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

void KFilePreviewGenerator_UpdateIcons(KFilePreviewGenerator* self) {
    self->updateIcons();
}

void KFilePreviewGenerator_CancelPreviews(KFilePreviewGenerator* self) {
    self->cancelPreviews();
}

libqt_string KFilePreviewGenerator_Tr2(const char* s, const char* c) {
    QString _ret = KFilePreviewGenerator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFilePreviewGenerator_Tr3(const char* s, const char* c, int n) {
    QString _ret = KFilePreviewGenerator::tr(s, c, static_cast<int>(n));
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
int KFilePreviewGenerator_QBaseMetacall(KFilePreviewGenerator* self, int param1, int param2, void** param3) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_Metacall_IsBase(true);
        return vkfilepreviewgenerator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KFilePreviewGenerator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnMetacall(KFilePreviewGenerator* self, intptr_t slot) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_Metacall_Callback(reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePreviewGenerator_Event(KFilePreviewGenerator* self, QEvent* event) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        return vkfilepreviewgenerator->event(event);
    } else {
        return self->KFilePreviewGenerator::event(event);
    }
}

// Base class handler implementation
bool KFilePreviewGenerator_QBaseEvent(KFilePreviewGenerator* self, QEvent* event) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_Event_IsBase(true);
        return vkfilepreviewgenerator->event(event);
    } else {
        return self->KFilePreviewGenerator::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnEvent(KFilePreviewGenerator* self, intptr_t slot) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_Event_Callback(reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePreviewGenerator_EventFilter(KFilePreviewGenerator* self, QObject* watched, QEvent* event) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        return vkfilepreviewgenerator->eventFilter(watched, event);
    } else {
        return self->KFilePreviewGenerator::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KFilePreviewGenerator_QBaseEventFilter(KFilePreviewGenerator* self, QObject* watched, QEvent* event) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_EventFilter_IsBase(true);
        return vkfilepreviewgenerator->eventFilter(watched, event);
    } else {
        return self->KFilePreviewGenerator::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnEventFilter(KFilePreviewGenerator* self, intptr_t slot) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_EventFilter_Callback(reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePreviewGenerator_TimerEvent(KFilePreviewGenerator* self, QTimerEvent* event) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->timerEvent(event);
    } else {
        ((VirtualKFilePreviewGenerator*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KFilePreviewGenerator_QBaseTimerEvent(KFilePreviewGenerator* self, QTimerEvent* event) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_TimerEvent_IsBase(true);
        vkfilepreviewgenerator->timerEvent(event);
    } else {
        ((VirtualKFilePreviewGenerator*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnTimerEvent(KFilePreviewGenerator* self, intptr_t slot) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_TimerEvent_Callback(reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePreviewGenerator_ChildEvent(KFilePreviewGenerator* self, QChildEvent* event) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->childEvent(event);
    } else {
        ((VirtualKFilePreviewGenerator*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KFilePreviewGenerator_QBaseChildEvent(KFilePreviewGenerator* self, QChildEvent* event) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_ChildEvent_IsBase(true);
        vkfilepreviewgenerator->childEvent(event);
    } else {
        ((VirtualKFilePreviewGenerator*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnChildEvent(KFilePreviewGenerator* self, intptr_t slot) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_ChildEvent_Callback(reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePreviewGenerator_CustomEvent(KFilePreviewGenerator* self, QEvent* event) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->customEvent(event);
    } else {
        ((VirtualKFilePreviewGenerator*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KFilePreviewGenerator_QBaseCustomEvent(KFilePreviewGenerator* self, QEvent* event) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_CustomEvent_IsBase(true);
        vkfilepreviewgenerator->customEvent(event);
    } else {
        ((VirtualKFilePreviewGenerator*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnCustomEvent(KFilePreviewGenerator* self, intptr_t slot) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_CustomEvent_Callback(reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePreviewGenerator_ConnectNotify(KFilePreviewGenerator* self, const QMetaMethod* signal) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->connectNotify(*signal);
    } else {
        ((VirtualKFilePreviewGenerator*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KFilePreviewGenerator_QBaseConnectNotify(KFilePreviewGenerator* self, const QMetaMethod* signal) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_ConnectNotify_IsBase(true);
        vkfilepreviewgenerator->connectNotify(*signal);
    } else {
        ((VirtualKFilePreviewGenerator*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnConnectNotify(KFilePreviewGenerator* self, intptr_t slot) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_ConnectNotify_Callback(reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFilePreviewGenerator_DisconnectNotify(KFilePreviewGenerator* self, const QMetaMethod* signal) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->disconnectNotify(*signal);
    } else {
        ((VirtualKFilePreviewGenerator*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KFilePreviewGenerator_QBaseDisconnectNotify(KFilePreviewGenerator* self, const QMetaMethod* signal) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_DisconnectNotify_IsBase(true);
        vkfilepreviewgenerator->disconnectNotify(*signal);
    } else {
        ((VirtualKFilePreviewGenerator*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnDisconnectNotify(KFilePreviewGenerator* self, intptr_t slot) {
    auto* vkfilepreviewgenerator = dynamic_cast<VirtualKFilePreviewGenerator*>(self);
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_DisconnectNotify_Callback(reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KFilePreviewGenerator_Sender(const KFilePreviewGenerator* self) {
    auto* vkfilepreviewgenerator = const_cast<VirtualKFilePreviewGenerator*>(dynamic_cast<const VirtualKFilePreviewGenerator*>(self));
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        return vkfilepreviewgenerator->sender();
    } else {
        return ((VirtualKFilePreviewGenerator*)self)->sender();
    }
}

// Base class handler implementation
QObject* KFilePreviewGenerator_QBaseSender(const KFilePreviewGenerator* self) {
    auto* vkfilepreviewgenerator = const_cast<VirtualKFilePreviewGenerator*>(dynamic_cast<const VirtualKFilePreviewGenerator*>(self));
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_Sender_IsBase(true);
        return vkfilepreviewgenerator->sender();
    } else {
        return ((VirtualKFilePreviewGenerator*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnSender(const KFilePreviewGenerator* self, intptr_t slot) {
    auto* vkfilepreviewgenerator = const_cast<VirtualKFilePreviewGenerator*>(dynamic_cast<const VirtualKFilePreviewGenerator*>(self));
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_Sender_Callback(reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePreviewGenerator_SenderSignalIndex(const KFilePreviewGenerator* self) {
    auto* vkfilepreviewgenerator = const_cast<VirtualKFilePreviewGenerator*>(dynamic_cast<const VirtualKFilePreviewGenerator*>(self));
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        return vkfilepreviewgenerator->senderSignalIndex();
    } else {
        return ((VirtualKFilePreviewGenerator*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KFilePreviewGenerator_QBaseSenderSignalIndex(const KFilePreviewGenerator* self) {
    auto* vkfilepreviewgenerator = const_cast<VirtualKFilePreviewGenerator*>(dynamic_cast<const VirtualKFilePreviewGenerator*>(self));
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_SenderSignalIndex_IsBase(true);
        return vkfilepreviewgenerator->senderSignalIndex();
    } else {
        return ((VirtualKFilePreviewGenerator*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnSenderSignalIndex(const KFilePreviewGenerator* self, intptr_t slot) {
    auto* vkfilepreviewgenerator = const_cast<VirtualKFilePreviewGenerator*>(dynamic_cast<const VirtualKFilePreviewGenerator*>(self));
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_SenderSignalIndex_Callback(reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFilePreviewGenerator_Receivers(const KFilePreviewGenerator* self, const char* signal) {
    auto* vkfilepreviewgenerator = const_cast<VirtualKFilePreviewGenerator*>(dynamic_cast<const VirtualKFilePreviewGenerator*>(self));
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        return vkfilepreviewgenerator->receivers(signal);
    } else {
        return ((VirtualKFilePreviewGenerator*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KFilePreviewGenerator_QBaseReceivers(const KFilePreviewGenerator* self, const char* signal) {
    auto* vkfilepreviewgenerator = const_cast<VirtualKFilePreviewGenerator*>(dynamic_cast<const VirtualKFilePreviewGenerator*>(self));
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_Receivers_IsBase(true);
        return vkfilepreviewgenerator->receivers(signal);
    } else {
        return ((VirtualKFilePreviewGenerator*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnReceivers(const KFilePreviewGenerator* self, intptr_t slot) {
    auto* vkfilepreviewgenerator = const_cast<VirtualKFilePreviewGenerator*>(dynamic_cast<const VirtualKFilePreviewGenerator*>(self));
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_Receivers_Callback(reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFilePreviewGenerator_IsSignalConnected(const KFilePreviewGenerator* self, const QMetaMethod* signal) {
    auto* vkfilepreviewgenerator = const_cast<VirtualKFilePreviewGenerator*>(dynamic_cast<const VirtualKFilePreviewGenerator*>(self));
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        return vkfilepreviewgenerator->isSignalConnected(*signal);
    } else {
        return ((VirtualKFilePreviewGenerator*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KFilePreviewGenerator_QBaseIsSignalConnected(const KFilePreviewGenerator* self, const QMetaMethod* signal) {
    auto* vkfilepreviewgenerator = const_cast<VirtualKFilePreviewGenerator*>(dynamic_cast<const VirtualKFilePreviewGenerator*>(self));
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_IsSignalConnected_IsBase(true);
        return vkfilepreviewgenerator->isSignalConnected(*signal);
    } else {
        return ((VirtualKFilePreviewGenerator*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFilePreviewGenerator_OnIsSignalConnected(const KFilePreviewGenerator* self, intptr_t slot) {
    auto* vkfilepreviewgenerator = const_cast<VirtualKFilePreviewGenerator*>(dynamic_cast<const VirtualKFilePreviewGenerator*>(self));
    if (vkfilepreviewgenerator && vkfilepreviewgenerator->isVirtualKFilePreviewGenerator) {
        vkfilepreviewgenerator->setKFilePreviewGenerator_IsSignalConnected_Callback(reinterpret_cast<VirtualKFilePreviewGenerator::KFilePreviewGenerator_IsSignalConnected_Callback>(slot));
    }
}

void KFilePreviewGenerator_Delete(KFilePreviewGenerator* self) {
    delete self;
}
