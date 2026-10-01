#include <KBreadcrumbSelectionModel>
#include <QChildEvent>
#include <QEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <kbreadcrumbselectionmodel.h>
#include "libkbreadcrumbselectionmodel.h"
#include "libkbreadcrumbselectionmodel.hxx"

KBreadcrumbSelectionModel* KBreadcrumbSelectionModel_new(QItemSelectionModel* selectionModel) {
    return new VirtualKBreadcrumbSelectionModel(selectionModel);
}

KBreadcrumbSelectionModel* KBreadcrumbSelectionModel_new2(QItemSelectionModel* selectionModel, int target) {
    return new VirtualKBreadcrumbSelectionModel(selectionModel, static_cast<KBreadcrumbSelectionModel::BreadcrumbTarget>(target));
}

KBreadcrumbSelectionModel* KBreadcrumbSelectionModel_new3(QItemSelectionModel* selectionModel, QObject* parent) {
    return new VirtualKBreadcrumbSelectionModel(selectionModel, parent);
}

KBreadcrumbSelectionModel* KBreadcrumbSelectionModel_new4(QItemSelectionModel* selectionModel, int target, QObject* parent) {
    return new VirtualKBreadcrumbSelectionModel(selectionModel, static_cast<KBreadcrumbSelectionModel::BreadcrumbTarget>(target), parent);
}

QMetaObject* KBreadcrumbSelectionModel_MetaObject(const KBreadcrumbSelectionModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KBreadcrumbSelectionModel_Metacast(KBreadcrumbSelectionModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KBreadcrumbSelectionModel_Metacall(KBreadcrumbSelectionModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KBreadcrumbSelectionModel_Tr(const char* s) {
    auto _ret = KBreadcrumbSelectionModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KBreadcrumbSelectionModel_IsActualSelectionIncluded(const KBreadcrumbSelectionModel* self) {
    return self->isActualSelectionIncluded();
}

void KBreadcrumbSelectionModel_SetActualSelectionIncluded(KBreadcrumbSelectionModel* self, bool isActualSelectionIncluded) {
    self->setActualSelectionIncluded(isActualSelectionIncluded);
}

int KBreadcrumbSelectionModel_BreadcrumbLength(const KBreadcrumbSelectionModel* self) {
    return self->breadcrumbLength();
}

void KBreadcrumbSelectionModel_SetBreadcrumbLength(KBreadcrumbSelectionModel* self, int breadcrumbLength) {
    self->setBreadcrumbLength(static_cast<int>(breadcrumbLength));
}

void KBreadcrumbSelectionModel_Select(KBreadcrumbSelectionModel* self, const QModelIndex* index, int command) {
    self->select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void KBreadcrumbSelectionModel_Select2(KBreadcrumbSelectionModel* self, const QItemSelection* selection, int command) {
    self->select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

libqt_string KBreadcrumbSelectionModel_Tr2(const char* s, const char* c) {
    auto _ret = KBreadcrumbSelectionModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KBreadcrumbSelectionModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = KBreadcrumbSelectionModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* KBreadcrumbSelectionModel_SuperMetaObject(const KBreadcrumbSelectionModel* self) {
    return (QMetaObject*)self->KBreadcrumbSelectionModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnMetaObject(KBreadcrumbSelectionModel* self, intptr_t slot) {
    if (auto* vkbreadcrumbselectionmodel = const_cast<VirtualKBreadcrumbSelectionModel*>(dynamic_cast<const VirtualKBreadcrumbSelectionModel*>(self)))
        vkbreadcrumbselectionmodel->kbreadcrumbselectionmodel_metaobject_callback = reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KBreadcrumbSelectionModel_SuperMetacast(KBreadcrumbSelectionModel* self, const char* param1) {
    return self->KBreadcrumbSelectionModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnMetacast(KBreadcrumbSelectionModel* self, intptr_t slot) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self))
        vkbreadcrumbselectionmodel->kbreadcrumbselectionmodel_metacast_callback = reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KBreadcrumbSelectionModel_SuperMetacall(KBreadcrumbSelectionModel* self, int param1, int param2, void** param3) {
    return self->KBreadcrumbSelectionModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnMetacall(KBreadcrumbSelectionModel* self, intptr_t slot) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self))
        vkbreadcrumbselectionmodel->kbreadcrumbselectionmodel_metacall_callback = reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_Metacall_Callback>(slot);
}

// Base class handler implementation
void KBreadcrumbSelectionModel_SuperSelect(KBreadcrumbSelectionModel* self, const QModelIndex* index, int command) {
    self->KBreadcrumbSelectionModel::select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnSelect(KBreadcrumbSelectionModel* self, intptr_t slot) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self))
        vkbreadcrumbselectionmodel->kbreadcrumbselectionmodel_select_callback = reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_Select_Callback>(slot);
}

// Base class handler implementation
void KBreadcrumbSelectionModel_SuperSelect2(KBreadcrumbSelectionModel* self, const QItemSelection* selection, int command) {
    self->KBreadcrumbSelectionModel::select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnSelect2(KBreadcrumbSelectionModel* self, intptr_t slot) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self))
        vkbreadcrumbselectionmodel->kbreadcrumbselectionmodel_select2_callback = reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_Select2_Callback>(slot);
}

// Derived class handler implementation
void KBreadcrumbSelectionModel_SetCurrentIndex(KBreadcrumbSelectionModel* self, const QModelIndex* index, int command) {
    self->setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

// Base class handler implementation
void KBreadcrumbSelectionModel_SuperSetCurrentIndex(KBreadcrumbSelectionModel* self, const QModelIndex* index, int command) {
    self->KBreadcrumbSelectionModel::setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnSetCurrentIndex(KBreadcrumbSelectionModel* self, intptr_t slot) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self))
        vkbreadcrumbselectionmodel->kbreadcrumbselectionmodel_setcurrentindex_callback = reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_SetCurrentIndex_Callback>(slot);
}

// Derived class handler implementation
void KBreadcrumbSelectionModel_Clear(KBreadcrumbSelectionModel* self) {
    self->clear();
}

// Base class handler implementation
void KBreadcrumbSelectionModel_SuperClear(KBreadcrumbSelectionModel* self) {
    self->KBreadcrumbSelectionModel::clear();
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnClear(KBreadcrumbSelectionModel* self, intptr_t slot) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self))
        vkbreadcrumbselectionmodel->kbreadcrumbselectionmodel_clear_callback = reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_Clear_Callback>(slot);
}

// Derived class handler implementation
void KBreadcrumbSelectionModel_Reset(KBreadcrumbSelectionModel* self) {
    self->reset();
}

// Base class handler implementation
void KBreadcrumbSelectionModel_SuperReset(KBreadcrumbSelectionModel* self) {
    self->KBreadcrumbSelectionModel::reset();
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnReset(KBreadcrumbSelectionModel* self, intptr_t slot) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self))
        vkbreadcrumbselectionmodel->kbreadcrumbselectionmodel_reset_callback = reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_Reset_Callback>(slot);
}

// Derived class handler implementation
void KBreadcrumbSelectionModel_ClearCurrentIndex(KBreadcrumbSelectionModel* self) {
    self->clearCurrentIndex();
}

// Base class handler implementation
void KBreadcrumbSelectionModel_SuperClearCurrentIndex(KBreadcrumbSelectionModel* self) {
    self->KBreadcrumbSelectionModel::clearCurrentIndex();
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnClearCurrentIndex(KBreadcrumbSelectionModel* self, intptr_t slot) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self))
        vkbreadcrumbselectionmodel->kbreadcrumbselectionmodel_clearcurrentindex_callback = reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_ClearCurrentIndex_Callback>(slot);
}

// Derived class handler implementation
bool KBreadcrumbSelectionModel_Event(KBreadcrumbSelectionModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KBreadcrumbSelectionModel_SuperEvent(KBreadcrumbSelectionModel* self, QEvent* event) {
    return self->KBreadcrumbSelectionModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnEvent(KBreadcrumbSelectionModel* self, intptr_t slot) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self))
        vkbreadcrumbselectionmodel->kbreadcrumbselectionmodel_event_callback = reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool KBreadcrumbSelectionModel_EventFilter(KBreadcrumbSelectionModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KBreadcrumbSelectionModel_SuperEventFilter(KBreadcrumbSelectionModel* self, QObject* watched, QEvent* event) {
    return self->KBreadcrumbSelectionModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnEventFilter(KBreadcrumbSelectionModel* self, intptr_t slot) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self))
        vkbreadcrumbselectionmodel->kbreadcrumbselectionmodel_eventfilter_callback = reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KBreadcrumbSelectionModel_TimerEvent(KBreadcrumbSelectionModel* self, QTimerEvent* event) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel) {
        vkbreadcrumbselectionmodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBreadcrumbSelectionModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBreadcrumbSelectionModel_SuperTimerEvent(KBreadcrumbSelectionModel* self, QTimerEvent* event) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self)) {
        vkbreadcrumbselectionmodel->KBreadcrumbSelectionModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KBreadcrumbSelectionModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnTimerEvent(KBreadcrumbSelectionModel* self, intptr_t slot) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self))
        vkbreadcrumbselectionmodel->kbreadcrumbselectionmodel_timerevent_callback = reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KBreadcrumbSelectionModel_ChildEvent(KBreadcrumbSelectionModel* self, QChildEvent* event) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel) {
        vkbreadcrumbselectionmodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBreadcrumbSelectionModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBreadcrumbSelectionModel_SuperChildEvent(KBreadcrumbSelectionModel* self, QChildEvent* event) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self)) {
        vkbreadcrumbselectionmodel->KBreadcrumbSelectionModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KBreadcrumbSelectionModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnChildEvent(KBreadcrumbSelectionModel* self, intptr_t slot) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self))
        vkbreadcrumbselectionmodel->kbreadcrumbselectionmodel_childevent_callback = reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KBreadcrumbSelectionModel_CustomEvent(KBreadcrumbSelectionModel* self, QEvent* event) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel) {
        vkbreadcrumbselectionmodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBreadcrumbSelectionModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBreadcrumbSelectionModel_SuperCustomEvent(KBreadcrumbSelectionModel* self, QEvent* event) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self)) {
        vkbreadcrumbselectionmodel->KBreadcrumbSelectionModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KBreadcrumbSelectionModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnCustomEvent(KBreadcrumbSelectionModel* self, intptr_t slot) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self))
        vkbreadcrumbselectionmodel->kbreadcrumbselectionmodel_customevent_callback = reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KBreadcrumbSelectionModel_ConnectNotify(KBreadcrumbSelectionModel* self, const QMetaMethod* signal) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel) {
        vkbreadcrumbselectionmodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KBreadcrumbSelectionModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KBreadcrumbSelectionModel_SuperConnectNotify(KBreadcrumbSelectionModel* self, const QMetaMethod* signal) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self)) {
        vkbreadcrumbselectionmodel->KBreadcrumbSelectionModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KBreadcrumbSelectionModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnConnectNotify(KBreadcrumbSelectionModel* self, intptr_t slot) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self))
        vkbreadcrumbselectionmodel->kbreadcrumbselectionmodel_connectnotify_callback = reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KBreadcrumbSelectionModel_DisconnectNotify(KBreadcrumbSelectionModel* self, const QMetaMethod* signal) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel) {
        vkbreadcrumbselectionmodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KBreadcrumbSelectionModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KBreadcrumbSelectionModel_SuperDisconnectNotify(KBreadcrumbSelectionModel* self, const QMetaMethod* signal) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self)) {
        vkbreadcrumbselectionmodel->KBreadcrumbSelectionModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KBreadcrumbSelectionModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnDisconnectNotify(KBreadcrumbSelectionModel* self, intptr_t slot) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self))
        vkbreadcrumbselectionmodel->kbreadcrumbselectionmodel_disconnectnotify_callback = reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KBreadcrumbSelectionModel_EmitSelectionChanged(KBreadcrumbSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection) {
    if (auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self)) {
        vkbreadcrumbselectionmodel->VirtualKBreadcrumbSelectionModel::emitSelectionChanged(*newSelection, *oldSelection);
    } else
        qFatal("Error: Protected method KBreadcrumbSelectionModel::emitSelectionChanged called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KBreadcrumbSelectionModel_Sender(const KBreadcrumbSelectionModel* self) {
    if (auto* vkbreadcrumbselectionmodel = const_cast<VirtualKBreadcrumbSelectionModel*>(dynamic_cast<const VirtualKBreadcrumbSelectionModel*>(self))) {
        return vkbreadcrumbselectionmodel->VirtualKBreadcrumbSelectionModel::sender();
    } else
        qFatal("Error: Protected method KBreadcrumbSelectionModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KBreadcrumbSelectionModel_SenderSignalIndex(const KBreadcrumbSelectionModel* self) {
    if (auto* vkbreadcrumbselectionmodel = const_cast<VirtualKBreadcrumbSelectionModel*>(dynamic_cast<const VirtualKBreadcrumbSelectionModel*>(self))) {
        return vkbreadcrumbselectionmodel->VirtualKBreadcrumbSelectionModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KBreadcrumbSelectionModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KBreadcrumbSelectionModel_Receivers(const KBreadcrumbSelectionModel* self, const char* signal) {
    if (auto* vkbreadcrumbselectionmodel = const_cast<VirtualKBreadcrumbSelectionModel*>(dynamic_cast<const VirtualKBreadcrumbSelectionModel*>(self))) {
        return vkbreadcrumbselectionmodel->VirtualKBreadcrumbSelectionModel::receivers(signal);
    } else
        qFatal("Error: Protected method KBreadcrumbSelectionModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KBreadcrumbSelectionModel_IsSignalConnected(const KBreadcrumbSelectionModel* self, const QMetaMethod* signal) {
    if (auto* vkbreadcrumbselectionmodel = const_cast<VirtualKBreadcrumbSelectionModel*>(dynamic_cast<const VirtualKBreadcrumbSelectionModel*>(self))) {
        return vkbreadcrumbselectionmodel->VirtualKBreadcrumbSelectionModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KBreadcrumbSelectionModel::isSignalConnected called without a directly constructed type");
}

void KBreadcrumbSelectionModel_Delete(KBreadcrumbSelectionModel* self) {
    delete self;
}
