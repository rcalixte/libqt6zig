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
    if (vqqmlpropertymap) {
        return new QVariant(vqqmlpropertymap->updateValue(key_QString, *input));
    }
    qFatal("Error: Protected method QQmlPropertyMap::updateValue called without a directly constructed type");
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
    return (QMetaObject*)self->QQmlPropertyMap::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnMetaObject(QQmlPropertyMap* self, intptr_t slot) {
    if (auto* vqqmlpropertymap = const_cast<VirtualQQmlPropertyMap*>(dynamic_cast<const VirtualQQmlPropertyMap*>(self)))
        vqqmlpropertymap->qqmlpropertymap_metaobject_callback = reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQmlPropertyMap_SuperMetacast(QQmlPropertyMap* self, const char* param1) {
    return self->QQmlPropertyMap::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnMetacast(QQmlPropertyMap* self, intptr_t slot) {
    if (auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self))
        vqqmlpropertymap->qqmlpropertymap_metacast_callback = reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQmlPropertyMap_SuperMetacall(QQmlPropertyMap* self, int param1, int param2, void** param3) {
    return self->QQmlPropertyMap::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnMetacall(QQmlPropertyMap* self, intptr_t slot) {
    if (auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self))
        vqqmlpropertymap->qqmlpropertymap_metacall_callback = reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_Metacall_Callback>(slot);
}

// Base class handler implementation
QVariant* QQmlPropertyMap_SuperUpdateValue(QQmlPropertyMap* self, const libqt_string key, const QVariant* input) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    if (auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self))
        return new QVariant(vqqmlpropertymap->QQmlPropertyMap::updateValue(key_QString, *input));
    qFatal("Error: Protected virtual method QQmlPropertyMap::updateValue called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnUpdateValue(QQmlPropertyMap* self, intptr_t slot) {
    if (auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self))
        vqqmlpropertymap->qqmlpropertymap_updatevalue_callback = reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_UpdateValue_Callback>(slot);
}

// Derived class handler implementation
bool QQmlPropertyMap_Event(QQmlPropertyMap* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QQmlPropertyMap_SuperEvent(QQmlPropertyMap* self, QEvent* event) {
    return self->QQmlPropertyMap::event(event);
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnEvent(QQmlPropertyMap* self, intptr_t slot) {
    if (auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self))
        vqqmlpropertymap->qqmlpropertymap_event_callback = reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQmlPropertyMap_EventFilter(QQmlPropertyMap* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQmlPropertyMap_SuperEventFilter(QQmlPropertyMap* self, QObject* watched, QEvent* event) {
    return self->QQmlPropertyMap::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnEventFilter(QQmlPropertyMap* self, intptr_t slot) {
    if (auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self))
        vqqmlpropertymap->qqmlpropertymap_eventfilter_callback = reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQmlPropertyMap_TimerEvent(QQmlPropertyMap* self, QTimerEvent* event) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap) {
        vqqmlpropertymap->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlPropertyMap::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlPropertyMap_SuperTimerEvent(QQmlPropertyMap* self, QTimerEvent* event) {
    if (auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self)) {
        vqqmlpropertymap->QQmlPropertyMap::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlPropertyMap::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnTimerEvent(QQmlPropertyMap* self, intptr_t slot) {
    if (auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self))
        vqqmlpropertymap->qqmlpropertymap_timerevent_callback = reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlPropertyMap_ChildEvent(QQmlPropertyMap* self, QChildEvent* event) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap) {
        vqqmlpropertymap->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlPropertyMap::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlPropertyMap_SuperChildEvent(QQmlPropertyMap* self, QChildEvent* event) {
    if (auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self)) {
        vqqmlpropertymap->QQmlPropertyMap::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlPropertyMap::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnChildEvent(QQmlPropertyMap* self, intptr_t slot) {
    if (auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self))
        vqqmlpropertymap->qqmlpropertymap_childevent_callback = reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlPropertyMap_CustomEvent(QQmlPropertyMap* self, QEvent* event) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap) {
        vqqmlpropertymap->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQmlPropertyMap::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlPropertyMap_SuperCustomEvent(QQmlPropertyMap* self, QEvent* event) {
    if (auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self)) {
        vqqmlpropertymap->QQmlPropertyMap::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQmlPropertyMap::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnCustomEvent(QQmlPropertyMap* self, intptr_t slot) {
    if (auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self))
        vqqmlpropertymap->qqmlpropertymap_customevent_callback = reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQmlPropertyMap_ConnectNotify(QQmlPropertyMap* self, const QMetaMethod* signal) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap) {
        vqqmlpropertymap->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQmlPropertyMap::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlPropertyMap_SuperConnectNotify(QQmlPropertyMap* self, const QMetaMethod* signal) {
    if (auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self)) {
        vqqmlpropertymap->QQmlPropertyMap::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQmlPropertyMap::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnConnectNotify(QQmlPropertyMap* self, intptr_t slot) {
    if (auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self))
        vqqmlpropertymap->qqmlpropertymap_connectnotify_callback = reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQmlPropertyMap_DisconnectNotify(QQmlPropertyMap* self, const QMetaMethod* signal) {
    auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self);
    if (vqqmlpropertymap) {
        vqqmlpropertymap->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQmlPropertyMap::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQmlPropertyMap_SuperDisconnectNotify(QQmlPropertyMap* self, const QMetaMethod* signal) {
    if (auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self)) {
        vqqmlpropertymap->QQmlPropertyMap::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQmlPropertyMap::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQmlPropertyMap_OnDisconnectNotify(QQmlPropertyMap* self, intptr_t slot) {
    if (auto* vqqmlpropertymap = dynamic_cast<VirtualQQmlPropertyMap*>(self))
        vqqmlpropertymap->qqmlpropertymap_disconnectnotify_callback = reinterpret_cast<VirtualQQmlPropertyMap::QQmlPropertyMap_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QQmlPropertyMap_Sender(const QQmlPropertyMap* self) {
    if (auto* vqqmlpropertymap = const_cast<VirtualQQmlPropertyMap*>(dynamic_cast<const VirtualQQmlPropertyMap*>(self))) {
        return vqqmlpropertymap->VirtualQQmlPropertyMap::sender();
    } else
        qFatal("Error: Protected method QQmlPropertyMap::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQmlPropertyMap_SenderSignalIndex(const QQmlPropertyMap* self) {
    if (auto* vqqmlpropertymap = const_cast<VirtualQQmlPropertyMap*>(dynamic_cast<const VirtualQQmlPropertyMap*>(self))) {
        return vqqmlpropertymap->VirtualQQmlPropertyMap::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQmlPropertyMap::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQmlPropertyMap_Receivers(const QQmlPropertyMap* self, const char* signal) {
    if (auto* vqqmlpropertymap = const_cast<VirtualQQmlPropertyMap*>(dynamic_cast<const VirtualQQmlPropertyMap*>(self))) {
        return vqqmlpropertymap->VirtualQQmlPropertyMap::receivers(signal);
    } else
        qFatal("Error: Protected method QQmlPropertyMap::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQmlPropertyMap_IsSignalConnected(const QQmlPropertyMap* self, const QMetaMethod* signal) {
    if (auto* vqqmlpropertymap = const_cast<VirtualQQmlPropertyMap*>(dynamic_cast<const VirtualQQmlPropertyMap*>(self))) {
        return vqqmlpropertymap->VirtualQQmlPropertyMap::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQmlPropertyMap::isSignalConnected called without a directly constructed type");
}

void QQmlPropertyMap_Delete(QQmlPropertyMap* self) {
    delete self;
}
