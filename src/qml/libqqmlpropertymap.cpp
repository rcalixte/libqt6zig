#include <QChildEvent>
#include <QEvent>
#include <QHash>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlPropertyMap>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qqmlpropertymap.h>
#include "libqqmlpropertymap.h"
#include "libqqmlpropertymap.hxx"

QQmlPropertyMap* QQmlPropertyMap_new() {
    return new VirtualQQmlPropertyMap();
}

QQmlPropertyMap* QQmlPropertyMap_new2(QObject* parent) {
    return new VirtualQQmlPropertyMap(parent);
}

QMetaObject* QQmlPropertyMap_MetaObject(const QQmlPropertyMap* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQmlPropertyMap_Metacast(QQmlPropertyMap* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQmlPropertyMap_Metacall(QQmlPropertyMap* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQmlPropertyMap_Tr(const char* s) {
    auto _ret = QQmlPropertyMap::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVariant* QQmlPropertyMap_Value(const QQmlPropertyMap* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QVariant(self->value(key_QString));
}

void QQmlPropertyMap_Insert(QQmlPropertyMap* self, const libqt_string key, const QVariant* value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->insert(key_QString, *value);
}

void QQmlPropertyMap_Insert2(QQmlPropertyMap* self, const libqt_map /* of libqt_string to QVariant* */ values) {
    QHash<QString, QVariant> values_QHash;
    values_QHash.reserve(values.len);
    libqt_string* values_karr = static_cast<libqt_string*>(values.keys);
    QVariant** values_varr = static_cast<QVariant**>(values.values);
    for (size_t i = 0; i < values.len; ++i) {
        QString values_karr_i_QString = QString::fromUtf8(values_karr[i].data, values_karr[i].len);
        values_QHash.insert(values_karr_i_QString, *(values_varr[i]));
    }
    self->insert(values_QHash);
}

void QQmlPropertyMap_Clear(QQmlPropertyMap* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->clear(key_QString);
}

void QQmlPropertyMap_Freeze(QQmlPropertyMap* self) {
    self->freeze();
}

libqt_list /* of libqt_string */ QQmlPropertyMap_Keys(const QQmlPropertyMap* self) {
    QList<QString> _ret = self->keys();
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

int QQmlPropertyMap_Count(const QQmlPropertyMap* self) {
    return self->count();
}

int QQmlPropertyMap_Size(const QQmlPropertyMap* self) {
    return self->size();
}

bool QQmlPropertyMap_IsEmpty(const QQmlPropertyMap* self) {
    return self->isEmpty();
}

bool QQmlPropertyMap_Contains(const QQmlPropertyMap* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->contains(key_QString);
}

QVariant* QQmlPropertyMap_OperatorSubscript(QQmlPropertyMap* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QVariant& _ret = self->operator[](key_QString);
    // Cast returned reference into pointer
    return &_ret;
}

QVariant* QQmlPropertyMap_OperatorSubscript2(const QQmlPropertyMap* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QVariant(self->operator[](key_QString));
}

void QQmlPropertyMap_ValueChanged(QQmlPropertyMap* self, const libqt_string key, const QVariant* value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->valueChanged(key_QString, *value);
}

void QQmlPropertyMap_Connect_ValueChanged(QQmlPropertyMap* self, intptr_t slot) {
    void (*slotFunc)(QQmlPropertyMap*, const char*, QVariant*) = reinterpret_cast<void (*)(QQmlPropertyMap*, const char*, QVariant*)>(slot);
    QQmlPropertyMap::connect(self,
                             static_cast<void (QQmlPropertyMap::*)(const QString&, const QVariant&)>(&QQmlPropertyMap::valueChanged),
                             [self, slotFunc](const QString& key, const QVariant& value) {
                                 const auto key_ret = key;
                                 // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                 QByteArray key_b = key_ret.toUtf8();
                                 auto key_str_len = key_b.length();
                                 const char* key_str = static_cast<const char*>(malloc(key_str_len + 1));
                                 memcpy((void*)key_str, key_b.data(), key_str_len);
                                 ((char*)key_str)[key_str_len] = '\0';
                                 const char* sigval1 = key_str;
                                 const QVariant& value_ret = value;
                                 // Cast returned reference into pointer
                                 QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
                                 slotFunc(self, sigval1, sigval2);
                                 libqt_free(key_str);
                             });
}

QVariant* QQmlPropertyMap_UpdateValue(QQmlPropertyMap* self, const libqt_string key, const QVariant* input) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        return new QVariant(vqqmlpropertymap->updateValue(key_QString, *input));
    }
    return {};
}

libqt_string QQmlPropertyMap_Tr2(const char* s, const char* c) {
    auto _ret = QQmlPropertyMap::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQmlPropertyMap_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQmlPropertyMap::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQmlPropertyMap_SuperMetaObject(const QQmlPropertyMap* self) {
    auto* vqqmlpropertymap = const_cast<VirtualQQmlPropertyMap*>(dynamic_cast<const VirtualQQmlPropertyMap*>(self));
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->setQQmlPropertyMap_MetaObject_IsBase(true);
        return (QMetaObject*)vqqmlpropertymap->metaObject();
    } else {
        return (QMetaObject*)self->QQmlPropertyMap::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnMetaObject(const QQmlPropertyMap* self, intptr_t slot) {
    auto* vqqmlpropertymap = const_cast<VirtualQQmlPropertyMap*>(dynamic_cast<const VirtualQQmlPropertyMap*>(self));
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap)
        vqqmlpropertymap->setQQmlPropertyMap_MetaObject_Callback(reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQmlPropertyMap_SuperMetacast(QQmlPropertyMap* self, const char* param1) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->setQQmlPropertyMap_Metacast_IsBase(true);
        return vqqmlpropertymap->qt_metacast(param1);
    } else {
        return self->QQmlPropertyMap::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnMetacast(QQmlPropertyMap* self, intptr_t slot) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap)
        vqqmlpropertymap->setQQmlPropertyMap_Metacast_Callback(reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQmlPropertyMap_SuperMetacall(QQmlPropertyMap* self, int param1, int param2, void** param3) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->setQQmlPropertyMap_Metacall_IsBase(true);
        return vqqmlpropertymap->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQmlPropertyMap::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnMetacall(QQmlPropertyMap* self, intptr_t slot) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap)
        vqqmlpropertymap->setQQmlPropertyMap_Metacall_Callback(reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_Metacall_Callback>(slot));
}

// Base class handler implementation
QVariant* QQmlPropertyMap_SuperUpdateValue(QQmlPropertyMap* self, const libqt_string key, const QVariant* input) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    QString key_QString = QString::fromUtf8(key.data, key.len);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->setQQmlPropertyMap_UpdateValue_IsBase(true);
        return new QVariant(vqqmlpropertymap->updateValue(key_QString, *input));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnUpdateValue(QQmlPropertyMap* self, intptr_t slot) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap)
        vqqmlpropertymap->setQQmlPropertyMap_UpdateValue_Callback(reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_UpdateValue_Callback>(slot));
}

// Derived class handler implementation
bool QQmlPropertyMap_Event(QQmlPropertyMap* self, QEvent* event) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        return vqqmlpropertymap->event(event);
    } else {
        return self->QQmlPropertyMap::event(event);
    }
}

// Base class handler implementation
bool QQmlPropertyMap_SuperEvent(QQmlPropertyMap* self, QEvent* event) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->setQQmlPropertyMap_Event_IsBase(true);
        return vqqmlpropertymap->event(event);
    } else {
        return self->QQmlPropertyMap::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnEvent(QQmlPropertyMap* self, intptr_t slot) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap)
        vqqmlpropertymap->setQQmlPropertyMap_Event_Callback(reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQmlPropertyMap_EventFilter(QQmlPropertyMap* self, QObject* watched, QEvent* event) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        return vqqmlpropertymap->eventFilter(watched, event);
    } else {
        return self->QQmlPropertyMap::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQmlPropertyMap_SuperEventFilter(QQmlPropertyMap* self, QObject* watched, QEvent* event) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->setQQmlPropertyMap_EventFilter_IsBase(true);
        return vqqmlpropertymap->eventFilter(watched, event);
    } else {
        return self->QQmlPropertyMap::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnEventFilter(QQmlPropertyMap* self, intptr_t slot) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap)
        vqqmlpropertymap->setQQmlPropertyMap_EventFilter_Callback(reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQmlPropertyMap_TimerEvent(QQmlPropertyMap* self, QTimerEvent* event) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->timerEvent(event);
    } else {
        ((VirtualQQmlPropertyMap*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQmlPropertyMap_SuperTimerEvent(QQmlPropertyMap* self, QTimerEvent* event) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->setQQmlPropertyMap_TimerEvent_IsBase(true);
        vqqmlpropertymap->timerEvent(event);
    } else {
        ((VirtualQQmlPropertyMap*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnTimerEvent(QQmlPropertyMap* self, intptr_t slot) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap)
        vqqmlpropertymap->setQQmlPropertyMap_TimerEvent_Callback(reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlPropertyMap_ChildEvent(QQmlPropertyMap* self, QChildEvent* event) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->childEvent(event);
    } else {
        ((VirtualQQmlPropertyMap*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQmlPropertyMap_SuperChildEvent(QQmlPropertyMap* self, QChildEvent* event) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->setQQmlPropertyMap_ChildEvent_IsBase(true);
        vqqmlpropertymap->childEvent(event);
    } else {
        ((VirtualQQmlPropertyMap*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnChildEvent(QQmlPropertyMap* self, intptr_t slot) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap)
        vqqmlpropertymap->setQQmlPropertyMap_ChildEvent_Callback(reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlPropertyMap_CustomEvent(QQmlPropertyMap* self, QEvent* event) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->customEvent(event);
    } else {
        ((VirtualQQmlPropertyMap*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQmlPropertyMap_SuperCustomEvent(QQmlPropertyMap* self, QEvent* event) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->setQQmlPropertyMap_CustomEvent_IsBase(true);
        vqqmlpropertymap->customEvent(event);
    } else {
        ((VirtualQQmlPropertyMap*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnCustomEvent(QQmlPropertyMap* self, intptr_t slot) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap)
        vqqmlpropertymap->setQQmlPropertyMap_CustomEvent_Callback(reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlPropertyMap_ConnectNotify(QQmlPropertyMap* self, const QMetaMethod* signal) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->connectNotify(*signal);
    } else {
        ((VirtualQQmlPropertyMap*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlPropertyMap_SuperConnectNotify(QQmlPropertyMap* self, const QMetaMethod* signal) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->setQQmlPropertyMap_ConnectNotify_IsBase(true);
        vqqmlpropertymap->connectNotify(*signal);
    } else {
        ((VirtualQQmlPropertyMap*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnConnectNotify(QQmlPropertyMap* self, intptr_t slot) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap)
        vqqmlpropertymap->setQQmlPropertyMap_ConnectNotify_Callback(reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQmlPropertyMap_DisconnectNotify(QQmlPropertyMap* self, const QMetaMethod* signal) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->disconnectNotify(*signal);
    } else {
        ((VirtualQQmlPropertyMap*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlPropertyMap_SuperDisconnectNotify(QQmlPropertyMap* self, const QMetaMethod* signal) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->setQQmlPropertyMap_DisconnectNotify_IsBase(true);
        vqqmlpropertymap->disconnectNotify(*signal);
    } else {
        ((VirtualQQmlPropertyMap*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnDisconnectNotify(QQmlPropertyMap* self, intptr_t slot) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap)
        vqqmlpropertymap->setQQmlPropertyMap_DisconnectNotify_Callback(reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* QQmlPropertyMap_Sender(const QQmlPropertyMap* self) {
    auto* vqqmlpropertymap = const_cast<VirtualQQmlPropertyMap*>(dynamic_cast<const VirtualQQmlPropertyMap*>(self));
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        return vqqmlpropertymap->sender();
    } else {
        return ((VirtualQQmlPropertyMap*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQmlPropertyMap_SuperSender(const QQmlPropertyMap* self) {
    auto* vqqmlpropertymap = const_cast<VirtualQQmlPropertyMap*>(dynamic_cast<const VirtualQQmlPropertyMap*>(self));
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->setQQmlPropertyMap_Sender_IsBase(true);
        return vqqmlpropertymap->sender();
    } else {
        return ((VirtualQQmlPropertyMap*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnSender(const QQmlPropertyMap* self, intptr_t slot) {
    auto* vqqmlpropertymap = const_cast<VirtualQQmlPropertyMap*>(dynamic_cast<const VirtualQQmlPropertyMap*>(self));
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap)
        vqqmlpropertymap->setQQmlPropertyMap_Sender_Callback(reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQmlPropertyMap_SenderSignalIndex(const QQmlPropertyMap* self) {
    auto* vqqmlpropertymap = const_cast<VirtualQQmlPropertyMap*>(dynamic_cast<const VirtualQQmlPropertyMap*>(self));
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        return vqqmlpropertymap->senderSignalIndex();
    } else {
        return ((VirtualQQmlPropertyMap*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQmlPropertyMap_SuperSenderSignalIndex(const QQmlPropertyMap* self) {
    auto* vqqmlpropertymap = const_cast<VirtualQQmlPropertyMap*>(dynamic_cast<const VirtualQQmlPropertyMap*>(self));
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->setQQmlPropertyMap_SenderSignalIndex_IsBase(true);
        return vqqmlpropertymap->senderSignalIndex();
    } else {
        return ((VirtualQQmlPropertyMap*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnSenderSignalIndex(const QQmlPropertyMap* self, intptr_t slot) {
    auto* vqqmlpropertymap = const_cast<VirtualQQmlPropertyMap*>(dynamic_cast<const VirtualQQmlPropertyMap*>(self));
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap)
        vqqmlpropertymap->setQQmlPropertyMap_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQmlPropertyMap_Receivers(const QQmlPropertyMap* self, const char* signal) {
    auto* vqqmlpropertymap = const_cast<VirtualQQmlPropertyMap*>(dynamic_cast<const VirtualQQmlPropertyMap*>(self));
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        return vqqmlpropertymap->receivers(signal);
    } else {
        return ((VirtualQQmlPropertyMap*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQmlPropertyMap_SuperReceivers(const QQmlPropertyMap* self, const char* signal) {
    auto* vqqmlpropertymap = const_cast<VirtualQQmlPropertyMap*>(dynamic_cast<const VirtualQQmlPropertyMap*>(self));
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->setQQmlPropertyMap_Receivers_IsBase(true);
        return vqqmlpropertymap->receivers(signal);
    } else {
        return ((VirtualQQmlPropertyMap*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnReceivers(const QQmlPropertyMap* self, intptr_t slot) {
    auto* vqqmlpropertymap = const_cast<VirtualQQmlPropertyMap*>(dynamic_cast<const VirtualQQmlPropertyMap*>(self));
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap)
        vqqmlpropertymap->setQQmlPropertyMap_Receivers_Callback(reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQmlPropertyMap_IsSignalConnected(const QQmlPropertyMap* self, const QMetaMethod* signal) {
    auto* vqqmlpropertymap = const_cast<VirtualQQmlPropertyMap*>(dynamic_cast<const VirtualQQmlPropertyMap*>(self));
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        return vqqmlpropertymap->isSignalConnected(*signal);
    } else {
        return ((VirtualQQmlPropertyMap*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQmlPropertyMap_SuperIsSignalConnected(const QQmlPropertyMap* self, const QMetaMethod* signal) {
    auto* vqqmlpropertymap = const_cast<VirtualQQmlPropertyMap*>(dynamic_cast<const VirtualQQmlPropertyMap*>(self));
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap) {
        vqqmlpropertymap->setQQmlPropertyMap_IsSignalConnected_IsBase(true);
        return vqqmlpropertymap->isSignalConnected(*signal);
    } else {
        return ((VirtualQQmlPropertyMap*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnIsSignalConnected(const QQmlPropertyMap* self, intptr_t slot) {
    auto* vqqmlpropertymap = const_cast<VirtualQQmlPropertyMap*>(dynamic_cast<const VirtualQQmlPropertyMap*>(self));
    if (vqqmlpropertymap && vqqmlpropertymap->isVirtualQQmlPropertyMap)
        vqqmlpropertymap->setQQmlPropertyMap_IsSignalConnected_Callback(reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_IsSignalConnected_Callback>(slot));
}

void QQmlPropertyMap_Delete(QQmlPropertyMap* self) {
    delete self;
}
