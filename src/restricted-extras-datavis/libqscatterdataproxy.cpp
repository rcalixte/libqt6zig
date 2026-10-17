#include <QAbstractDataProxy>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QScatter3DSeries>
#include <QScatterDataItem>
#include <QScatterDataProxy>
#include <QString>
#include <QTimerEvent>
#include <qscatterdataproxy.h>
#include "libqscatterdataproxy.h"
#include "libqscatterdataproxy.hxx"

QScatterDataProxy* QScatterDataProxy_new() {
    return new VirtualQScatterDataProxy();
}

QScatterDataProxy* QScatterDataProxy_new2(QObject* parent) {
    return new VirtualQScatterDataProxy(parent);
}

QMetaObject* QScatterDataProxy_MetaObject(const QScatterDataProxy* self) {
    return (QMetaObject*)self->metaObject();
}

void* QScatterDataProxy_Metacast(QScatterDataProxy* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QScatterDataProxy_Metacall(QScatterDataProxy* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QScatterDataProxy_Tr(const char* s) {
    auto _ret = QScatterDataProxy::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QScatter3DSeries* QScatterDataProxy_Series(const QScatterDataProxy* self) {
    return self->series();
}

int QScatterDataProxy_ItemCount(const QScatterDataProxy* self) {
    return self->itemCount();
}

libqt_list /* of QScatterDataItem* */ QScatterDataProxy_Array(const QScatterDataProxy* self) {
    const QList<QScatterDataItem>* _ret = self->array();
    // Convert QList<> from C++ memory to manually-managed C memory
    QScatterDataItem** _arr = static_cast<QScatterDataItem**>(malloc(sizeof(QScatterDataItem*) * (_ret->size())));
    for (qsizetype i = 0; i < _ret->size(); ++i) {
        _arr[i] = new QScatterDataItem((*_ret)[i]);
    }
    libqt_list _out;
    _out.len = _ret->size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QScatterDataItem* QScatterDataProxy_ItemAt(const QScatterDataProxy* self, int index) {
    return (QScatterDataItem*)self->itemAt(static_cast<int>(index));
}

void QScatterDataProxy_ResetArray(QScatterDataProxy* self, libqt_list /* of QScatterDataItem* */ newArray) {
    QList<QScatterDataItem>* newArray_QList = new QList<QScatterDataItem>();
    newArray_QList->reserve(newArray.len);
    QScatterDataItem** newArray_arr = static_cast<QScatterDataItem**>(newArray.data);
    for (size_t i = 0; i < newArray.len; ++i) {
        newArray_QList->push_back(*(newArray_arr[i]));
    }
    self->resetArray(newArray_QList);
}

void QScatterDataProxy_SetItem(QScatterDataProxy* self, int index, const QScatterDataItem* item) {
    self->setItem(static_cast<int>(index), *item);
}

void QScatterDataProxy_SetItems(QScatterDataProxy* self, int index, const libqt_list /* of QScatterDataItem* */ items) {
    QList<QScatterDataItem> items_QList;
    items_QList.reserve(items.len);
    QScatterDataItem** items_arr = static_cast<QScatterDataItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(*(items_arr[i]));
    }
    self->setItems(static_cast<int>(index), items_QList);
}

int QScatterDataProxy_AddItem(QScatterDataProxy* self, const QScatterDataItem* item) {
    return self->addItem(*item);
}

int QScatterDataProxy_AddItems(QScatterDataProxy* self, const libqt_list /* of QScatterDataItem* */ items) {
    QList<QScatterDataItem> items_QList;
    items_QList.reserve(items.len);
    QScatterDataItem** items_arr = static_cast<QScatterDataItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(*(items_arr[i]));
    }
    return self->addItems(items_QList);
}

void QScatterDataProxy_InsertItem(QScatterDataProxy* self, int index, const QScatterDataItem* item) {
    self->insertItem(static_cast<int>(index), *item);
}

void QScatterDataProxy_InsertItems(QScatterDataProxy* self, int index, const libqt_list /* of QScatterDataItem* */ items) {
    QList<QScatterDataItem> items_QList;
    items_QList.reserve(items.len);
    QScatterDataItem** items_arr = static_cast<QScatterDataItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(*(items_arr[i]));
    }
    self->insertItems(static_cast<int>(index), items_QList);
}

void QScatterDataProxy_RemoveItems(QScatterDataProxy* self, int index, int removeCount) {
    self->removeItems(static_cast<int>(index), static_cast<int>(removeCount));
}

void QScatterDataProxy_ArrayReset(QScatterDataProxy* self) {
    self->arrayReset();
}

void QScatterDataProxy_Connect_ArrayReset(QScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QScatterDataProxy*) = reinterpret_cast<void (*)(QScatterDataProxy*)>(slot);
    QScatterDataProxy::connect(self,
                               static_cast<void (QScatterDataProxy::*)()>(&QScatterDataProxy::arrayReset),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void QScatterDataProxy_ItemsAdded(QScatterDataProxy* self, int startIndex, int count) {
    self->itemsAdded(static_cast<int>(startIndex), static_cast<int>(count));
}

void QScatterDataProxy_Connect_ItemsAdded(QScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QScatterDataProxy*, int, int) = reinterpret_cast<void (*)(QScatterDataProxy*, int, int)>(slot);
    QScatterDataProxy::connect(self,
                               static_cast<void (QScatterDataProxy::*)(int, int)>(&QScatterDataProxy::itemsAdded),
                               [self, slotFunc](int startIndex, int count) {
                                   int sigval1 = startIndex;
                                   int sigval2 = count;
                                   slotFunc(self, sigval1, sigval2);
                               });
}

void QScatterDataProxy_ItemsChanged(QScatterDataProxy* self, int startIndex, int count) {
    self->itemsChanged(static_cast<int>(startIndex), static_cast<int>(count));
}

void QScatterDataProxy_Connect_ItemsChanged(QScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QScatterDataProxy*, int, int) = reinterpret_cast<void (*)(QScatterDataProxy*, int, int)>(slot);
    QScatterDataProxy::connect(self,
                               static_cast<void (QScatterDataProxy::*)(int, int)>(&QScatterDataProxy::itemsChanged),
                               [self, slotFunc](int startIndex, int count) {
                                   int sigval1 = startIndex;
                                   int sigval2 = count;
                                   slotFunc(self, sigval1, sigval2);
                               });
}

void QScatterDataProxy_ItemsRemoved(QScatterDataProxy* self, int startIndex, int count) {
    self->itemsRemoved(static_cast<int>(startIndex), static_cast<int>(count));
}

void QScatterDataProxy_Connect_ItemsRemoved(QScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QScatterDataProxy*, int, int) = reinterpret_cast<void (*)(QScatterDataProxy*, int, int)>(slot);
    QScatterDataProxy::connect(self,
                               static_cast<void (QScatterDataProxy::*)(int, int)>(&QScatterDataProxy::itemsRemoved),
                               [self, slotFunc](int startIndex, int count) {
                                   int sigval1 = startIndex;
                                   int sigval2 = count;
                                   slotFunc(self, sigval1, sigval2);
                               });
}

void QScatterDataProxy_ItemsInserted(QScatterDataProxy* self, int startIndex, int count) {
    self->itemsInserted(static_cast<int>(startIndex), static_cast<int>(count));
}

void QScatterDataProxy_Connect_ItemsInserted(QScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QScatterDataProxy*, int, int) = reinterpret_cast<void (*)(QScatterDataProxy*, int, int)>(slot);
    QScatterDataProxy::connect(self,
                               static_cast<void (QScatterDataProxy::*)(int, int)>(&QScatterDataProxy::itemsInserted),
                               [self, slotFunc](int startIndex, int count) {
                                   int sigval1 = startIndex;
                                   int sigval2 = count;
                                   slotFunc(self, sigval1, sigval2);
                               });
}

void QScatterDataProxy_ItemCountChanged(QScatterDataProxy* self, int count) {
    self->itemCountChanged(static_cast<int>(count));
}

void QScatterDataProxy_Connect_ItemCountChanged(QScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QScatterDataProxy*, int) = reinterpret_cast<void (*)(QScatterDataProxy*, int)>(slot);
    QScatterDataProxy::connect(self,
                               static_cast<void (QScatterDataProxy::*)(int)>(&QScatterDataProxy::itemCountChanged),
                               [self, slotFunc](int count) {
                                   int sigval1 = count;
                                   slotFunc(self, sigval1);
                               });
}

void QScatterDataProxy_SeriesChanged(QScatterDataProxy* self, QScatter3DSeries* series) {
    self->seriesChanged(series);
}

void QScatterDataProxy_Connect_SeriesChanged(QScatterDataProxy* self, intptr_t slot) {
    void (*slotFunc)(QScatterDataProxy*, QScatter3DSeries*) = reinterpret_cast<void (*)(QScatterDataProxy*, QScatter3DSeries*)>(slot);
    QScatterDataProxy::connect(self,
                               static_cast<void (QScatterDataProxy::*)(QScatter3DSeries*)>(&QScatterDataProxy::seriesChanged),
                               [self, slotFunc](QScatter3DSeries* series) {
                                   QScatter3DSeries* sigval1 = series;
                                   slotFunc(self, sigval1);
                               });
}

libqt_string QScatterDataProxy_Tr2(const char* s, const char* c) {
    auto _ret = QScatterDataProxy::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QScatterDataProxy_Tr3(const char* s, const char* c, int n) {
    auto _ret = QScatterDataProxy::tr(s, c, static_cast<int>(n));
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
QMetaObject* QScatterDataProxy_SuperMetaObject(const QScatterDataProxy* self) {
    return (QMetaObject*)self->QScatterDataProxy::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QScatterDataProxy_OnMetaObject(QScatterDataProxy* self, intptr_t slot) {
    if (auto* vqscatterdataproxy = const_cast<VirtualQScatterDataProxy*>(dynamic_cast<const VirtualQScatterDataProxy*>(self)))
        vqscatterdataproxy->qscatterdataproxy_metaobject_callback = reinterpret_cast<VirtualQScatterDataProxy::QScatterDataProxy_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QScatterDataProxy_SuperMetacast(QScatterDataProxy* self, const char* param1) {
    return self->QScatterDataProxy::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QScatterDataProxy_OnMetacast(QScatterDataProxy* self, intptr_t slot) {
    if (auto* vqscatterdataproxy = dynamic_cast<VirtualQScatterDataProxy*>(self))
        vqscatterdataproxy->qscatterdataproxy_metacast_callback = reinterpret_cast<VirtualQScatterDataProxy::QScatterDataProxy_Metacast_Callback>(slot);
}

// Base class handler implementation
int QScatterDataProxy_SuperMetacall(QScatterDataProxy* self, int param1, int param2, void** param3) {
    return self->QScatterDataProxy::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QScatterDataProxy_OnMetacall(QScatterDataProxy* self, intptr_t slot) {
    if (auto* vqscatterdataproxy = dynamic_cast<VirtualQScatterDataProxy*>(self))
        vqscatterdataproxy->qscatterdataproxy_metacall_callback = reinterpret_cast<VirtualQScatterDataProxy::QScatterDataProxy_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QScatterDataProxy_Event(QScatterDataProxy* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QScatterDataProxy_SuperEvent(QScatterDataProxy* self, QEvent* event) {
    return self->QScatterDataProxy::event(event);
}

// Auxiliary method to allow providing re-implementation
void QScatterDataProxy_OnEvent(QScatterDataProxy* self, intptr_t slot) {
    if (auto* vqscatterdataproxy = dynamic_cast<VirtualQScatterDataProxy*>(self))
        vqscatterdataproxy->qscatterdataproxy_event_callback = reinterpret_cast<VirtualQScatterDataProxy::QScatterDataProxy_Event_Callback>(slot);
}

// Derived class handler implementation
bool QScatterDataProxy_EventFilter(QScatterDataProxy* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QScatterDataProxy_SuperEventFilter(QScatterDataProxy* self, QObject* watched, QEvent* event) {
    return self->QScatterDataProxy::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QScatterDataProxy_OnEventFilter(QScatterDataProxy* self, intptr_t slot) {
    if (auto* vqscatterdataproxy = dynamic_cast<VirtualQScatterDataProxy*>(self))
        vqscatterdataproxy->qscatterdataproxy_eventfilter_callback = reinterpret_cast<VirtualQScatterDataProxy::QScatterDataProxy_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QScatterDataProxy_TimerEvent(QScatterDataProxy* self, QTimerEvent* event) {
    auto* vqscatterdataproxy = dynamic_cast<VirtualQScatterDataProxy*>(self);
    if (vqscatterdataproxy) {
        vqscatterdataproxy->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScatterDataProxy::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScatterDataProxy_SuperTimerEvent(QScatterDataProxy* self, QTimerEvent* event) {
    if (auto* vqscatterdataproxy = dynamic_cast<VirtualQScatterDataProxy*>(self)) {
        vqscatterdataproxy->QScatterDataProxy::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QScatterDataProxy::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScatterDataProxy_OnTimerEvent(QScatterDataProxy* self, intptr_t slot) {
    if (auto* vqscatterdataproxy = dynamic_cast<VirtualQScatterDataProxy*>(self))
        vqscatterdataproxy->qscatterdataproxy_timerevent_callback = reinterpret_cast<VirtualQScatterDataProxy::QScatterDataProxy_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QScatterDataProxy_ChildEvent(QScatterDataProxy* self, QChildEvent* event) {
    auto* vqscatterdataproxy = dynamic_cast<VirtualQScatterDataProxy*>(self);
    if (vqscatterdataproxy) {
        vqscatterdataproxy->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScatterDataProxy::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScatterDataProxy_SuperChildEvent(QScatterDataProxy* self, QChildEvent* event) {
    if (auto* vqscatterdataproxy = dynamic_cast<VirtualQScatterDataProxy*>(self)) {
        vqscatterdataproxy->QScatterDataProxy::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QScatterDataProxy::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScatterDataProxy_OnChildEvent(QScatterDataProxy* self, intptr_t slot) {
    if (auto* vqscatterdataproxy = dynamic_cast<VirtualQScatterDataProxy*>(self))
        vqscatterdataproxy->qscatterdataproxy_childevent_callback = reinterpret_cast<VirtualQScatterDataProxy::QScatterDataProxy_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QScatterDataProxy_CustomEvent(QScatterDataProxy* self, QEvent* event) {
    auto* vqscatterdataproxy = dynamic_cast<VirtualQScatterDataProxy*>(self);
    if (vqscatterdataproxy) {
        vqscatterdataproxy->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QScatterDataProxy::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QScatterDataProxy_SuperCustomEvent(QScatterDataProxy* self, QEvent* event) {
    if (auto* vqscatterdataproxy = dynamic_cast<VirtualQScatterDataProxy*>(self)) {
        vqscatterdataproxy->QScatterDataProxy::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QScatterDataProxy::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScatterDataProxy_OnCustomEvent(QScatterDataProxy* self, intptr_t slot) {
    if (auto* vqscatterdataproxy = dynamic_cast<VirtualQScatterDataProxy*>(self))
        vqscatterdataproxy->qscatterdataproxy_customevent_callback = reinterpret_cast<VirtualQScatterDataProxy::QScatterDataProxy_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QScatterDataProxy_ConnectNotify(QScatterDataProxy* self, const QMetaMethod* signal) {
    auto* vqscatterdataproxy = dynamic_cast<VirtualQScatterDataProxy*>(self);
    if (vqscatterdataproxy) {
        vqscatterdataproxy->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QScatterDataProxy::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QScatterDataProxy_SuperConnectNotify(QScatterDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqscatterdataproxy = dynamic_cast<VirtualQScatterDataProxy*>(self)) {
        vqscatterdataproxy->QScatterDataProxy::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QScatterDataProxy::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScatterDataProxy_OnConnectNotify(QScatterDataProxy* self, intptr_t slot) {
    if (auto* vqscatterdataproxy = dynamic_cast<VirtualQScatterDataProxy*>(self))
        vqscatterdataproxy->qscatterdataproxy_connectnotify_callback = reinterpret_cast<VirtualQScatterDataProxy::QScatterDataProxy_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QScatterDataProxy_DisconnectNotify(QScatterDataProxy* self, const QMetaMethod* signal) {
    auto* vqscatterdataproxy = dynamic_cast<VirtualQScatterDataProxy*>(self);
    if (vqscatterdataproxy) {
        vqscatterdataproxy->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QScatterDataProxy::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QScatterDataProxy_SuperDisconnectNotify(QScatterDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqscatterdataproxy = dynamic_cast<VirtualQScatterDataProxy*>(self)) {
        vqscatterdataproxy->QScatterDataProxy::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QScatterDataProxy::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QScatterDataProxy_OnDisconnectNotify(QScatterDataProxy* self, intptr_t slot) {
    if (auto* vqscatterdataproxy = dynamic_cast<VirtualQScatterDataProxy*>(self))
        vqscatterdataproxy->qscatterdataproxy_disconnectnotify_callback = reinterpret_cast<VirtualQScatterDataProxy::QScatterDataProxy_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QScatterDataProxy_Sender(const QScatterDataProxy* self) {
    if (auto* vqscatterdataproxy = const_cast<VirtualQScatterDataProxy*>(dynamic_cast<const VirtualQScatterDataProxy*>(self))) {
        return vqscatterdataproxy->VirtualQScatterDataProxy::sender();
    } else
        qFatal("Error: Protected method QScatterDataProxy::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QScatterDataProxy_SenderSignalIndex(const QScatterDataProxy* self) {
    if (auto* vqscatterdataproxy = const_cast<VirtualQScatterDataProxy*>(dynamic_cast<const VirtualQScatterDataProxy*>(self))) {
        return vqscatterdataproxy->VirtualQScatterDataProxy::senderSignalIndex();
    } else
        qFatal("Error: Protected method QScatterDataProxy::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QScatterDataProxy_Receivers(const QScatterDataProxy* self, const char* signal) {
    if (auto* vqscatterdataproxy = const_cast<VirtualQScatterDataProxy*>(dynamic_cast<const VirtualQScatterDataProxy*>(self))) {
        return vqscatterdataproxy->VirtualQScatterDataProxy::receivers(signal);
    } else
        qFatal("Error: Protected method QScatterDataProxy::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QScatterDataProxy_IsSignalConnected(const QScatterDataProxy* self, const QMetaMethod* signal) {
    if (auto* vqscatterdataproxy = const_cast<VirtualQScatterDataProxy*>(dynamic_cast<const VirtualQScatterDataProxy*>(self))) {
        return vqscatterdataproxy->VirtualQScatterDataProxy::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QScatterDataProxy::isSignalConnected called without a directly constructed type");
}

void QScatterDataProxy_Delete(QScatterDataProxy* self) {
    delete self;
}
