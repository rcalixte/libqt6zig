#include <KViewStateSerializer>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QChildEvent>
#include <QEvent>
#include <QItemSelectionModel>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QPair>
#include <QString>
#include <QTimerEvent>
#include <kviewstateserializer.h>
#include "libkviewstateserializer.h"
#include "libkviewstateserializer.hxx"

KViewStateSerializer* KViewStateSerializer_new() {
    return new VirtualKViewStateSerializer();
}

KViewStateSerializer* KViewStateSerializer_new2(QObject* parent) {
    return new VirtualKViewStateSerializer(parent);
}

QMetaObject* KViewStateSerializer_MetaObject(const KViewStateSerializer* self) {
    return (QMetaObject*)self->metaObject();
}

void* KViewStateSerializer_Metacast(KViewStateSerializer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KViewStateSerializer_Metacall(KViewStateSerializer* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KViewStateSerializer_Tr(const char* s) {
    auto _ret = KViewStateSerializer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAbstractItemView* KViewStateSerializer_View(const KViewStateSerializer* self) {
    return self->view();
}

void KViewStateSerializer_SetView(KViewStateSerializer* self, QAbstractItemView* view) {
    self->setView(view);
}

QItemSelectionModel* KViewStateSerializer_SelectionModel(const KViewStateSerializer* self) {
    return self->selectionModel();
}

void KViewStateSerializer_SetSelectionModel(KViewStateSerializer* self, QItemSelectionModel* selectionModel) {
    self->setSelectionModel(selectionModel);
}

libqt_list /* of libqt_string */ KViewStateSerializer_SelectionKeys(const KViewStateSerializer* self) {
    QList<QString> _ret = self->selectionKeys();
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

libqt_list /* of libqt_string */ KViewStateSerializer_ExpansionKeys(const KViewStateSerializer* self) {
    QList<QString> _ret = self->expansionKeys();
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

libqt_string KViewStateSerializer_CurrentIndexKey(const KViewStateSerializer* self) {
    auto _ret = self->currentIndexKey();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

pair_int_int /* tuple of int and int */ KViewStateSerializer_ScrollState(const KViewStateSerializer* self) {
    QPair<int, int> _ret = self->scrollState();
    // Convert QPair<> from C++ memory to manually-managed C memory
    pair_int_int /* tuple of int and int */ _out;
    _out.first = _ret.first;
    _out.second = _ret.second;
    return _out;
}

void KViewStateSerializer_RestoreSelection(KViewStateSerializer* self, const libqt_list /* of libqt_string */ indexStrings) {
    QList<QString> indexStrings_QList;
    indexStrings_QList.reserve(indexStrings.len);
    libqt_string* indexStrings_arr = static_cast<libqt_string*>(indexStrings.data);
    for (size_t i = 0; i < indexStrings.len; ++i) {
        QString indexStrings_arr_i_QString = QString::fromUtf8(indexStrings_arr[i].data, indexStrings_arr[i].len);
        indexStrings_QList.push_back(indexStrings_arr_i_QString);
    }
    self->restoreSelection(indexStrings_QList);
}

void KViewStateSerializer_RestoreCurrentItem(KViewStateSerializer* self, const libqt_string indexString) {
    QString indexString_QString = QString::fromUtf8(indexString.data, indexString.len);
    self->restoreCurrentItem(indexString_QString);
}

void KViewStateSerializer_RestoreExpanded(KViewStateSerializer* self, const libqt_list /* of libqt_string */ indexStrings) {
    QList<QString> indexStrings_QList;
    indexStrings_QList.reserve(indexStrings.len);
    libqt_string* indexStrings_arr = static_cast<libqt_string*>(indexStrings.data);
    for (size_t i = 0; i < indexStrings.len; ++i) {
        QString indexStrings_arr_i_QString = QString::fromUtf8(indexStrings_arr[i].data, indexStrings_arr[i].len);
        indexStrings_QList.push_back(indexStrings_arr_i_QString);
    }
    self->restoreExpanded(indexStrings_QList);
}

void KViewStateSerializer_RestoreScrollState(KViewStateSerializer* self, int verticalScoll, int horizontalScroll) {
    self->restoreScrollState(static_cast<int>(verticalScoll), static_cast<int>(horizontalScroll));
}

QModelIndex* KViewStateSerializer_IndexFromConfigString(const KViewStateSerializer* self, const QAbstractItemModel* model, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    auto* vkviewstateserializer = dynamic_cast<const VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer) {
        return new QModelIndex(vkviewstateserializer->indexFromConfigString(model, key_QString));
    }
    qFatal("Error: Protected method KViewStateSerializer::indexFromConfigString called without a directly constructed type");
}

libqt_string KViewStateSerializer_IndexToConfigString(const KViewStateSerializer* self, const QModelIndex* index) {
    auto* vkviewstateserializer = dynamic_cast<const VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer) {
        auto _ret = vkviewstateserializer->indexToConfigString(*index);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
    qFatal("Error: Protected method KViewStateSerializer::indexToConfigString called without a directly constructed type");
}

libqt_string KViewStateSerializer_Tr2(const char* s, const char* c) {
    auto _ret = KViewStateSerializer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KViewStateSerializer_Tr3(const char* s, const char* c, int n) {
    auto _ret = KViewStateSerializer::tr(s, c, static_cast<int>(n));
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
QMetaObject* KViewStateSerializer_SuperMetaObject(const KViewStateSerializer* self) {
    return (QMetaObject*)self->KViewStateSerializer::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnMetaObject(KViewStateSerializer* self, intptr_t slot) {
    if (auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self)))
        vkviewstateserializer->kviewstateserializer_metaobject_callback = reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KViewStateSerializer_SuperMetacast(KViewStateSerializer* self, const char* param1) {
    return self->KViewStateSerializer::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnMetacast(KViewStateSerializer* self, intptr_t slot) {
    if (auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self))
        vkviewstateserializer->kviewstateserializer_metacast_callback = reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_Metacast_Callback>(slot);
}

// Base class handler implementation
int KViewStateSerializer_SuperMetacall(KViewStateSerializer* self, int param1, int param2, void** param3) {
    return self->KViewStateSerializer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnMetacall(KViewStateSerializer* self, intptr_t slot) {
    if (auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self))
        vkviewstateserializer->kviewstateserializer_metacall_callback = reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnIndexFromConfigString(KViewStateSerializer* self, intptr_t slot) {
    if (auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self)))
        vkviewstateserializer->kviewstateserializer_indexfromconfigstring_callback = reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_IndexFromConfigString_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnIndexToConfigString(KViewStateSerializer* self, intptr_t slot) {
    if (auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self)))
        vkviewstateserializer->kviewstateserializer_indextoconfigstring_callback = reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_IndexToConfigString_Callback>(slot);
}

// Derived class handler implementation
bool KViewStateSerializer_Event(KViewStateSerializer* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KViewStateSerializer_SuperEvent(KViewStateSerializer* self, QEvent* event) {
    return self->KViewStateSerializer::event(event);
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnEvent(KViewStateSerializer* self, intptr_t slot) {
    if (auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self))
        vkviewstateserializer->kviewstateserializer_event_callback = reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_Event_Callback>(slot);
}

// Derived class handler implementation
bool KViewStateSerializer_EventFilter(KViewStateSerializer* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KViewStateSerializer_SuperEventFilter(KViewStateSerializer* self, QObject* watched, QEvent* event) {
    return self->KViewStateSerializer::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnEventFilter(KViewStateSerializer* self, intptr_t slot) {
    if (auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self))
        vkviewstateserializer->kviewstateserializer_eventfilter_callback = reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KViewStateSerializer_TimerEvent(KViewStateSerializer* self, QTimerEvent* event) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer) {
        vkviewstateserializer->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KViewStateSerializer::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KViewStateSerializer_SuperTimerEvent(KViewStateSerializer* self, QTimerEvent* event) {
    if (auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self)) {
        vkviewstateserializer->KViewStateSerializer::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KViewStateSerializer::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnTimerEvent(KViewStateSerializer* self, intptr_t slot) {
    if (auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self))
        vkviewstateserializer->kviewstateserializer_timerevent_callback = reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KViewStateSerializer_ChildEvent(KViewStateSerializer* self, QChildEvent* event) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer) {
        vkviewstateserializer->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KViewStateSerializer::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KViewStateSerializer_SuperChildEvent(KViewStateSerializer* self, QChildEvent* event) {
    if (auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self)) {
        vkviewstateserializer->KViewStateSerializer::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KViewStateSerializer::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnChildEvent(KViewStateSerializer* self, intptr_t slot) {
    if (auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self))
        vkviewstateserializer->kviewstateserializer_childevent_callback = reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KViewStateSerializer_CustomEvent(KViewStateSerializer* self, QEvent* event) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer) {
        vkviewstateserializer->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KViewStateSerializer::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KViewStateSerializer_SuperCustomEvent(KViewStateSerializer* self, QEvent* event) {
    if (auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self)) {
        vkviewstateserializer->KViewStateSerializer::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KViewStateSerializer::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnCustomEvent(KViewStateSerializer* self, intptr_t slot) {
    if (auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self))
        vkviewstateserializer->kviewstateserializer_customevent_callback = reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KViewStateSerializer_ConnectNotify(KViewStateSerializer* self, const QMetaMethod* signal) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer) {
        vkviewstateserializer->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KViewStateSerializer::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KViewStateSerializer_SuperConnectNotify(KViewStateSerializer* self, const QMetaMethod* signal) {
    if (auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self)) {
        vkviewstateserializer->KViewStateSerializer::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KViewStateSerializer::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnConnectNotify(KViewStateSerializer* self, intptr_t slot) {
    if (auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self))
        vkviewstateserializer->kviewstateserializer_connectnotify_callback = reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KViewStateSerializer_DisconnectNotify(KViewStateSerializer* self, const QMetaMethod* signal) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer) {
        vkviewstateserializer->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KViewStateSerializer::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KViewStateSerializer_SuperDisconnectNotify(KViewStateSerializer* self, const QMetaMethod* signal) {
    if (auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self)) {
        vkviewstateserializer->KViewStateSerializer::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KViewStateSerializer::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnDisconnectNotify(KViewStateSerializer* self, intptr_t slot) {
    if (auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self))
        vkviewstateserializer->kviewstateserializer_disconnectnotify_callback = reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KViewStateSerializer_RestoreState(KViewStateSerializer* self) {
    if (auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self)) {
        vkviewstateserializer->VirtualKViewStateSerializer::restoreState();
    } else
        qFatal("Error: Protected method KViewStateSerializer::restoreState called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KViewStateSerializer_Sender(const KViewStateSerializer* self) {
    if (auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self))) {
        return vkviewstateserializer->VirtualKViewStateSerializer::sender();
    } else
        qFatal("Error: Protected method KViewStateSerializer::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KViewStateSerializer_SenderSignalIndex(const KViewStateSerializer* self) {
    if (auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self))) {
        return vkviewstateserializer->VirtualKViewStateSerializer::senderSignalIndex();
    } else
        qFatal("Error: Protected method KViewStateSerializer::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KViewStateSerializer_Receivers(const KViewStateSerializer* self, const char* signal) {
    if (auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self))) {
        return vkviewstateserializer->VirtualKViewStateSerializer::receivers(signal);
    } else
        qFatal("Error: Protected method KViewStateSerializer::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KViewStateSerializer_IsSignalConnected(const KViewStateSerializer* self, const QMetaMethod* signal) {
    if (auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self))) {
        return vkviewstateserializer->VirtualKViewStateSerializer::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KViewStateSerializer::isSignalConnected called without a directly constructed type");
}

void KViewStateSerializer_Delete(KViewStateSerializer* self) {
    delete self;
}
