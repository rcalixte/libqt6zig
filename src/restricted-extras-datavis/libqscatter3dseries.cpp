#include <QAbstract3DSeries>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QScatter3DSeries>
#include <QScatterDataProxy>
#include <QString>
#include <QTimerEvent>
#include <qscatter3dseries.h>
#include "libqscatter3dseries.h"
#include "libqscatter3dseries.hxx"

QScatter3DSeries* QScatter3DSeries_new() {
    return new VirtualQScatter3DSeries();
}

QScatter3DSeries* QScatter3DSeries_new2(QScatterDataProxy* dataProxy) {
    return new VirtualQScatter3DSeries(dataProxy);
}

QScatter3DSeries* QScatter3DSeries_new3(QObject* parent) {
    return new VirtualQScatter3DSeries(parent);
}

QScatter3DSeries* QScatter3DSeries_new4(QScatterDataProxy* dataProxy, QObject* parent) {
    return new VirtualQScatter3DSeries(dataProxy, parent);
}

QMetaObject* QScatter3DSeries_MetaObject(const QScatter3DSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QScatter3DSeries_Metacast(QScatter3DSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QScatter3DSeries_Metacall(QScatter3DSeries* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QScatter3DSeries_Tr(const char* s) {
    auto _ret = QScatter3DSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QScatter3DSeries_SetDataProxy(QScatter3DSeries* self, QScatterDataProxy* proxy) {
    self->setDataProxy(proxy);
}

QScatterDataProxy* QScatter3DSeries_DataProxy(const QScatter3DSeries* self) {
    return self->dataProxy();
}

void QScatter3DSeries_SetSelectedItem(QScatter3DSeries* self, int index) {
    self->setSelectedItem(static_cast<int>(index));
}

int QScatter3DSeries_SelectedItem(const QScatter3DSeries* self) {
    return self->selectedItem();
}

int QScatter3DSeries_InvalidSelectionIndex() {
    return QScatter3DSeries::invalidSelectionIndex();
}

void QScatter3DSeries_SetItemSize(QScatter3DSeries* self, float size) {
    self->setItemSize(static_cast<float>(size));
}

float QScatter3DSeries_ItemSize(const QScatter3DSeries* self) {
    return self->itemSize();
}

void QScatter3DSeries_DataProxyChanged(QScatter3DSeries* self, QScatterDataProxy* proxy) {
    self->dataProxyChanged(proxy);
}

void QScatter3DSeries_Connect_DataProxyChanged(QScatter3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QScatter3DSeries*, QScatterDataProxy*) = reinterpret_cast<void (*)(QScatter3DSeries*, QScatterDataProxy*)>(slot);
    QScatter3DSeries::connect(self,
                              static_cast<void (QScatter3DSeries::*)(QScatterDataProxy*)>(&QScatter3DSeries::dataProxyChanged),
                              [self, slotFunc](QScatterDataProxy* proxy) {
                                  QScatterDataProxy* sigval1 = proxy;
                                  slotFunc(self, sigval1);
                              });
}

void QScatter3DSeries_SelectedItemChanged(QScatter3DSeries* self, int index) {
    self->selectedItemChanged(static_cast<int>(index));
}

void QScatter3DSeries_Connect_SelectedItemChanged(QScatter3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QScatter3DSeries*, int) = reinterpret_cast<void (*)(QScatter3DSeries*, int)>(slot);
    QScatter3DSeries::connect(self,
                              static_cast<void (QScatter3DSeries::*)(int)>(&QScatter3DSeries::selectedItemChanged),
                              [self, slotFunc](int index) {
                                  int sigval1 = index;
                                  slotFunc(self, sigval1);
                              });
}

void QScatter3DSeries_ItemSizeChanged(QScatter3DSeries* self, float size) {
    self->itemSizeChanged(static_cast<float>(size));
}

void QScatter3DSeries_Connect_ItemSizeChanged(QScatter3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QScatter3DSeries*, float) = reinterpret_cast<void (*)(QScatter3DSeries*, float)>(slot);
    QScatter3DSeries::connect(self,
                              static_cast<void (QScatter3DSeries::*)(float)>(&QScatter3DSeries::itemSizeChanged),
                              [self, slotFunc](float size) {
                                  float sigval1 = size;
                                  slotFunc(self, sigval1);
                              });
}

libqt_string QScatter3DSeries_Tr2(const char* s, const char* c) {
    auto _ret = QScatter3DSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QScatter3DSeries_Tr3(const char* s, const char* c, int n) {
    auto _ret = QScatter3DSeries::tr(s, c, static_cast<int>(n));
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
QMetaObject* QScatter3DSeries_SuperMetaObject(const QScatter3DSeries* self) {
    return (QMetaObject*)self->QScatter3DSeries::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QScatter3DSeries_OnMetaObject(QScatter3DSeries* self, intptr_t slot) {
    if (auto* vqscatter3dseries = const_cast<VirtualQScatter3DSeries*>(dynamic_cast<const VirtualQScatter3DSeries*>(self)))
        vqscatter3dseries->qscatter3dseries_metaobject_callback = reinterpret_cast<VirtualQScatter3DSeries::QScatter3DSeries_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QScatter3DSeries_SuperMetacast(QScatter3DSeries* self, const char* param1) {
    return self->QScatter3DSeries::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QScatter3DSeries_OnMetacast(QScatter3DSeries* self, intptr_t slot) {
    if (auto* vqscatter3dseries = dynamic_cast<VirtualQScatter3DSeries*>(self))
        vqscatter3dseries->qscatter3dseries_metacast_callback = reinterpret_cast<VirtualQScatter3DSeries::QScatter3DSeries_Metacast_Callback>(slot);
}

// Base class handler implementation
int QScatter3DSeries_SuperMetacall(QScatter3DSeries* self, int param1, int param2, void** param3) {
    return self->QScatter3DSeries::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QScatter3DSeries_OnMetacall(QScatter3DSeries* self, intptr_t slot) {
    if (auto* vqscatter3dseries = dynamic_cast<VirtualQScatter3DSeries*>(self))
        vqscatter3dseries->qscatter3dseries_metacall_callback = reinterpret_cast<VirtualQScatter3DSeries::QScatter3DSeries_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QScatter3DSeries_Event(QScatter3DSeries* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QScatter3DSeries_SuperEvent(QScatter3DSeries* self, QEvent* event) {
    return self->QScatter3DSeries::event(event);
}

// Auxiliary method to allow providing re-implementation
void QScatter3DSeries_OnEvent(QScatter3DSeries* self, intptr_t slot) {
    if (auto* vqscatter3dseries = dynamic_cast<VirtualQScatter3DSeries*>(self))
        vqscatter3dseries->qscatter3dseries_event_callback = reinterpret_cast<VirtualQScatter3DSeries::QScatter3DSeries_Event_Callback>(slot);
}

// Derived class handler implementation
bool QScatter3DSeries_EventFilter(QScatter3DSeries* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QScatter3DSeries_SuperEventFilter(QScatter3DSeries* self, QObject* watched, QEvent* event) {
    return self->QScatter3DSeries::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QScatter3DSeries_OnEventFilter(QScatter3DSeries* self, intptr_t slot) {
    if (auto* vqscatter3dseries = dynamic_cast<VirtualQScatter3DSeries*>(self))
        vqscatter3dseries->qscatter3dseries_eventfilter_callback = reinterpret_cast<VirtualQScatter3DSeries::QScatter3DSeries_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QScatter3DSeries_TimerEvent(QScatter3DSeries* self, QTimerEvent* event) {
    auto* vqscatter3dseries = dynamic_cast<VirtualQScatter3DSeries*>(self);
    if (vqscatter3dseries) {
        vqscatter3dseries->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScatter3DSeries::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScatter3DSeries_SuperTimerEvent(QScatter3DSeries* self, QTimerEvent* event) {
    if (auto* vqscatter3dseries = dynamic_cast<VirtualQScatter3DSeries*>(self)) {
        vqscatter3dseries->QScatter3DSeries::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QScatter3DSeries::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScatter3DSeries_OnTimerEvent(QScatter3DSeries* self, intptr_t slot) {
    if (auto* vqscatter3dseries = dynamic_cast<VirtualQScatter3DSeries*>(self))
        vqscatter3dseries->qscatter3dseries_timerevent_callback = reinterpret_cast<VirtualQScatter3DSeries::QScatter3DSeries_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QScatter3DSeries_ChildEvent(QScatter3DSeries* self, QChildEvent* event) {
    auto* vqscatter3dseries = dynamic_cast<VirtualQScatter3DSeries*>(self);
    if (vqscatter3dseries) {
        vqscatter3dseries->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScatter3DSeries::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScatter3DSeries_SuperChildEvent(QScatter3DSeries* self, QChildEvent* event) {
    if (auto* vqscatter3dseries = dynamic_cast<VirtualQScatter3DSeries*>(self)) {
        vqscatter3dseries->QScatter3DSeries::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QScatter3DSeries::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScatter3DSeries_OnChildEvent(QScatter3DSeries* self, intptr_t slot) {
    if (auto* vqscatter3dseries = dynamic_cast<VirtualQScatter3DSeries*>(self))
        vqscatter3dseries->qscatter3dseries_childevent_callback = reinterpret_cast<VirtualQScatter3DSeries::QScatter3DSeries_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QScatter3DSeries_CustomEvent(QScatter3DSeries* self, QEvent* event) {
    auto* vqscatter3dseries = dynamic_cast<VirtualQScatter3DSeries*>(self);
    if (vqscatter3dseries) {
        vqscatter3dseries->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScatter3DSeries::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScatter3DSeries_SuperCustomEvent(QScatter3DSeries* self, QEvent* event) {
    if (auto* vqscatter3dseries = dynamic_cast<VirtualQScatter3DSeries*>(self)) {
        vqscatter3dseries->QScatter3DSeries::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QScatter3DSeries::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScatter3DSeries_OnCustomEvent(QScatter3DSeries* self, intptr_t slot) {
    if (auto* vqscatter3dseries = dynamic_cast<VirtualQScatter3DSeries*>(self))
        vqscatter3dseries->qscatter3dseries_customevent_callback = reinterpret_cast<VirtualQScatter3DSeries::QScatter3DSeries_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QScatter3DSeries_ConnectNotify(QScatter3DSeries* self, const QMetaMethod* signal) {
    auto* vqscatter3dseries = dynamic_cast<VirtualQScatter3DSeries*>(self);
    if (vqscatter3dseries) {
        vqscatter3dseries->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QScatter3DSeries::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QScatter3DSeries_SuperConnectNotify(QScatter3DSeries* self, const QMetaMethod* signal) {
    if (auto* vqscatter3dseries = dynamic_cast<VirtualQScatter3DSeries*>(self)) {
        vqscatter3dseries->QScatter3DSeries::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QScatter3DSeries::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScatter3DSeries_OnConnectNotify(QScatter3DSeries* self, intptr_t slot) {
    if (auto* vqscatter3dseries = dynamic_cast<VirtualQScatter3DSeries*>(self))
        vqscatter3dseries->qscatter3dseries_connectnotify_callback = reinterpret_cast<VirtualQScatter3DSeries::QScatter3DSeries_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QScatter3DSeries_DisconnectNotify(QScatter3DSeries* self, const QMetaMethod* signal) {
    auto* vqscatter3dseries = dynamic_cast<VirtualQScatter3DSeries*>(self);
    if (vqscatter3dseries) {
        vqscatter3dseries->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QScatter3DSeries::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QScatter3DSeries_SuperDisconnectNotify(QScatter3DSeries* self, const QMetaMethod* signal) {
    if (auto* vqscatter3dseries = dynamic_cast<VirtualQScatter3DSeries*>(self)) {
        vqscatter3dseries->QScatter3DSeries::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QScatter3DSeries::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScatter3DSeries_OnDisconnectNotify(QScatter3DSeries* self, intptr_t slot) {
    if (auto* vqscatter3dseries = dynamic_cast<VirtualQScatter3DSeries*>(self))
        vqscatter3dseries->qscatter3dseries_disconnectnotify_callback = reinterpret_cast<VirtualQScatter3DSeries::QScatter3DSeries_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QScatter3DSeries_Sender(const QScatter3DSeries* self) {
    if (auto* vqscatter3dseries = const_cast<VirtualQScatter3DSeries*>(dynamic_cast<const VirtualQScatter3DSeries*>(self))) {
        return vqscatter3dseries->VirtualQScatter3DSeries::sender();
    } else
        qFatal("Error: Protected method QScatter3DSeries::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QScatter3DSeries_SenderSignalIndex(const QScatter3DSeries* self) {
    if (auto* vqscatter3dseries = const_cast<VirtualQScatter3DSeries*>(dynamic_cast<const VirtualQScatter3DSeries*>(self))) {
        return vqscatter3dseries->VirtualQScatter3DSeries::senderSignalIndex();
    } else
        qFatal("Error: Protected method QScatter3DSeries::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QScatter3DSeries_Receivers(const QScatter3DSeries* self, const char* signal) {
    if (auto* vqscatter3dseries = const_cast<VirtualQScatter3DSeries*>(dynamic_cast<const VirtualQScatter3DSeries*>(self))) {
        return vqscatter3dseries->VirtualQScatter3DSeries::receivers(signal);
    } else
        qFatal("Error: Protected method QScatter3DSeries::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QScatter3DSeries_IsSignalConnected(const QScatter3DSeries* self, const QMetaMethod* signal) {
    if (auto* vqscatter3dseries = const_cast<VirtualQScatter3DSeries*>(dynamic_cast<const VirtualQScatter3DSeries*>(self))) {
        return vqscatter3dseries->VirtualQScatter3DSeries::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QScatter3DSeries::isSignalConnected called without a directly constructed type");
}

void QScatter3DSeries_Delete(QScatter3DSeries* self) {
    delete self;
}
