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
#include <QByteArray>
#include <cstring>
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
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKViewStateSerializer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KViewStateSerializer_Tr(const char* s) {
    QString _ret = KViewStateSerializer::tr(s);
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

libqt_list /* of libqt_string */ KViewStateSerializer_ExpansionKeys(const KViewStateSerializer* self) {
    QList<QString> _ret = self->expansionKeys();
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

libqt_string KViewStateSerializer_CurrentIndexKey(const KViewStateSerializer* self) {
    QString _ret = self->currentIndexKey();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_pair /* tuple of int and int */ KViewStateSerializer_ScrollState(const KViewStateSerializer* self) {
    QPair<int, int> _ret = self->scrollState();
    // Convert QPair<> from C++ memory to manually-managed C memory
    int* _first = static_cast<int*>(malloc(sizeof(int)));
    int* _second = static_cast<int*>(malloc(sizeof(int)));
    *_first = _ret.first;
    *_second = _ret.second;
    libqt_pair _out;
    _out.first = static_cast<void*>(_first);
    _out.second = static_cast<void*>(_second);
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
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        return new QModelIndex(vkviewstateserializer->indexFromConfigString(model, key_QString));
    }
    return {};
}

libqt_string KViewStateSerializer_IndexToConfigString(const KViewStateSerializer* self, const QModelIndex* index) {
    auto* vkviewstateserializer = dynamic_cast<const VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        QString _ret = vkviewstateserializer->indexToConfigString(*index);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
    return {};
}

libqt_string KViewStateSerializer_Tr2(const char* s, const char* c) {
    QString _ret = KViewStateSerializer::tr(s, c);
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
    QString _ret = KViewStateSerializer::tr(s, c, static_cast<int>(n));
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
int KViewStateSerializer_QBaseMetacall(KViewStateSerializer* self, int param1, int param2, void** param3) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_Metacall_IsBase(true);
        return vkviewstateserializer->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KViewStateSerializer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnMetacall(KViewStateSerializer* self, intptr_t slot) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_Metacall_Callback(reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* KViewStateSerializer_QBaseIndexFromConfigString(const KViewStateSerializer* self, const QAbstractItemModel* model, const libqt_string key) {
    auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self));
    QString key_QString = QString::fromUtf8(key.data, key.len);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_IndexFromConfigString_IsBase(true);
        return new QModelIndex(vkviewstateserializer->indexFromConfigString(model, key_QString));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnIndexFromConfigString(const KViewStateSerializer* self, intptr_t slot) {
    auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self));
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_IndexFromConfigString_Callback(reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_IndexFromConfigString_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string KViewStateSerializer_QBaseIndexToConfigString(const KViewStateSerializer* self, const QModelIndex* index) {
    auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self));
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_IndexToConfigString_IsBase(true);
        QString _ret = vkviewstateserializer->indexToConfigString(*index);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKViewStateSerializer*)self)->indexToConfigString(*index);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnIndexToConfigString(const KViewStateSerializer* self, intptr_t slot) {
    auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self));
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_IndexToConfigString_Callback(reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_IndexToConfigString_Callback>(slot));
    }
}

// Derived class handler implementation
bool KViewStateSerializer_Event(KViewStateSerializer* self, QEvent* event) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        return vkviewstateserializer->event(event);
    } else {
        return self->KViewStateSerializer::event(event);
    }
}

// Base class handler implementation
bool KViewStateSerializer_QBaseEvent(KViewStateSerializer* self, QEvent* event) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_Event_IsBase(true);
        return vkviewstateserializer->event(event);
    } else {
        return self->KViewStateSerializer::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnEvent(KViewStateSerializer* self, intptr_t slot) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_Event_Callback(reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KViewStateSerializer_EventFilter(KViewStateSerializer* self, QObject* watched, QEvent* event) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        return vkviewstateserializer->eventFilter(watched, event);
    } else {
        return self->KViewStateSerializer::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KViewStateSerializer_QBaseEventFilter(KViewStateSerializer* self, QObject* watched, QEvent* event) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_EventFilter_IsBase(true);
        return vkviewstateserializer->eventFilter(watched, event);
    } else {
        return self->KViewStateSerializer::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnEventFilter(KViewStateSerializer* self, intptr_t slot) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_EventFilter_Callback(reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KViewStateSerializer_TimerEvent(KViewStateSerializer* self, QTimerEvent* event) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->timerEvent(event);
    } else {
        ((VirtualKViewStateSerializer*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KViewStateSerializer_QBaseTimerEvent(KViewStateSerializer* self, QTimerEvent* event) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_TimerEvent_IsBase(true);
        vkviewstateserializer->timerEvent(event);
    } else {
        ((VirtualKViewStateSerializer*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnTimerEvent(KViewStateSerializer* self, intptr_t slot) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_TimerEvent_Callback(reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KViewStateSerializer_ChildEvent(KViewStateSerializer* self, QChildEvent* event) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->childEvent(event);
    } else {
        ((VirtualKViewStateSerializer*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KViewStateSerializer_QBaseChildEvent(KViewStateSerializer* self, QChildEvent* event) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_ChildEvent_IsBase(true);
        vkviewstateserializer->childEvent(event);
    } else {
        ((VirtualKViewStateSerializer*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnChildEvent(KViewStateSerializer* self, intptr_t slot) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_ChildEvent_Callback(reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KViewStateSerializer_CustomEvent(KViewStateSerializer* self, QEvent* event) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->customEvent(event);
    } else {
        ((VirtualKViewStateSerializer*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KViewStateSerializer_QBaseCustomEvent(KViewStateSerializer* self, QEvent* event) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_CustomEvent_IsBase(true);
        vkviewstateserializer->customEvent(event);
    } else {
        ((VirtualKViewStateSerializer*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnCustomEvent(KViewStateSerializer* self, intptr_t slot) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_CustomEvent_Callback(reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KViewStateSerializer_ConnectNotify(KViewStateSerializer* self, const QMetaMethod* signal) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->connectNotify(*signal);
    } else {
        ((VirtualKViewStateSerializer*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KViewStateSerializer_QBaseConnectNotify(KViewStateSerializer* self, const QMetaMethod* signal) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_ConnectNotify_IsBase(true);
        vkviewstateserializer->connectNotify(*signal);
    } else {
        ((VirtualKViewStateSerializer*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnConnectNotify(KViewStateSerializer* self, intptr_t slot) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_ConnectNotify_Callback(reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KViewStateSerializer_DisconnectNotify(KViewStateSerializer* self, const QMetaMethod* signal) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->disconnectNotify(*signal);
    } else {
        ((VirtualKViewStateSerializer*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KViewStateSerializer_QBaseDisconnectNotify(KViewStateSerializer* self, const QMetaMethod* signal) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_DisconnectNotify_IsBase(true);
        vkviewstateserializer->disconnectNotify(*signal);
    } else {
        ((VirtualKViewStateSerializer*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnDisconnectNotify(KViewStateSerializer* self, intptr_t slot) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_DisconnectNotify_Callback(reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KViewStateSerializer_RestoreState(KViewStateSerializer* self) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->restoreState();
    } else {
        ((VirtualKViewStateSerializer*)self)->restoreState();
    }
}

// Base class handler implementation
void KViewStateSerializer_QBaseRestoreState(KViewStateSerializer* self) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_RestoreState_IsBase(true);
        vkviewstateserializer->restoreState();
    } else {
        ((VirtualKViewStateSerializer*)self)->restoreState();
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnRestoreState(KViewStateSerializer* self, intptr_t slot) {
    auto* vkviewstateserializer = dynamic_cast<VirtualKViewStateSerializer*>(self);
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_RestoreState_Callback(reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_RestoreState_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KViewStateSerializer_Sender(const KViewStateSerializer* self) {
    auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self));
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        return vkviewstateserializer->sender();
    } else {
        return ((VirtualKViewStateSerializer*)self)->sender();
    }
}

// Base class handler implementation
QObject* KViewStateSerializer_QBaseSender(const KViewStateSerializer* self) {
    auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self));
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_Sender_IsBase(true);
        return vkviewstateserializer->sender();
    } else {
        return ((VirtualKViewStateSerializer*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnSender(const KViewStateSerializer* self, intptr_t slot) {
    auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self));
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_Sender_Callback(reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KViewStateSerializer_SenderSignalIndex(const KViewStateSerializer* self) {
    auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self));
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        return vkviewstateserializer->senderSignalIndex();
    } else {
        return ((VirtualKViewStateSerializer*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KViewStateSerializer_QBaseSenderSignalIndex(const KViewStateSerializer* self) {
    auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self));
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_SenderSignalIndex_IsBase(true);
        return vkviewstateserializer->senderSignalIndex();
    } else {
        return ((VirtualKViewStateSerializer*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnSenderSignalIndex(const KViewStateSerializer* self, intptr_t slot) {
    auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self));
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_SenderSignalIndex_Callback(reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KViewStateSerializer_Receivers(const KViewStateSerializer* self, const char* signal) {
    auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self));
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        return vkviewstateserializer->receivers(signal);
    } else {
        return ((VirtualKViewStateSerializer*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KViewStateSerializer_QBaseReceivers(const KViewStateSerializer* self, const char* signal) {
    auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self));
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_Receivers_IsBase(true);
        return vkviewstateserializer->receivers(signal);
    } else {
        return ((VirtualKViewStateSerializer*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnReceivers(const KViewStateSerializer* self, intptr_t slot) {
    auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self));
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_Receivers_Callback(reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KViewStateSerializer_IsSignalConnected(const KViewStateSerializer* self, const QMetaMethod* signal) {
    auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self));
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        return vkviewstateserializer->isSignalConnected(*signal);
    } else {
        return ((VirtualKViewStateSerializer*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KViewStateSerializer_QBaseIsSignalConnected(const KViewStateSerializer* self, const QMetaMethod* signal) {
    auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self));
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_IsSignalConnected_IsBase(true);
        return vkviewstateserializer->isSignalConnected(*signal);
    } else {
        return ((VirtualKViewStateSerializer*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KViewStateSerializer_OnIsSignalConnected(const KViewStateSerializer* self, intptr_t slot) {
    auto* vkviewstateserializer = const_cast<VirtualKViewStateSerializer*>(dynamic_cast<const VirtualKViewStateSerializer*>(self));
    if (vkviewstateserializer && vkviewstateserializer->isVirtualKViewStateSerializer) {
        vkviewstateserializer->setKViewStateSerializer_IsSignalConnected_Callback(reinterpret_cast<VirtualKViewStateSerializer::KViewStateSerializer_IsSignalConnected_Callback>(slot));
    }
}

void KViewStateSerializer_Delete(KViewStateSerializer* self) {
    delete self;
}
