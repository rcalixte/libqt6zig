#include <KLinkItemSelectionModel>
#include <QAbstractItemModel>
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
#include <klinkitemselectionmodel.h>
#include "libklinkitemselectionmodel.h"
#include "libklinkitemselectionmodel.hxx"

KLinkItemSelectionModel* KLinkItemSelectionModel_new(QAbstractItemModel* targetModel, QItemSelectionModel* linkedItemSelectionModel) {
    return new VirtualKLinkItemSelectionModel(targetModel, linkedItemSelectionModel);
}

KLinkItemSelectionModel* KLinkItemSelectionModel_new2() {
    return new VirtualKLinkItemSelectionModel();
}

KLinkItemSelectionModel* KLinkItemSelectionModel_new3(QAbstractItemModel* targetModel, QItemSelectionModel* linkedItemSelectionModel, QObject* parent) {
    return new VirtualKLinkItemSelectionModel(targetModel, linkedItemSelectionModel, parent);
}

KLinkItemSelectionModel* KLinkItemSelectionModel_new4(QObject* parent) {
    return new VirtualKLinkItemSelectionModel(parent);
}

QMetaObject* KLinkItemSelectionModel_MetaObject(const KLinkItemSelectionModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KLinkItemSelectionModel_Metacast(KLinkItemSelectionModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KLinkItemSelectionModel_Metacall(KLinkItemSelectionModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KLinkItemSelectionModel_Tr(const char* s) {
    auto _ret = KLinkItemSelectionModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QItemSelectionModel* KLinkItemSelectionModel_LinkedItemSelectionModel(const KLinkItemSelectionModel* self) {
    return self->linkedItemSelectionModel();
}

void KLinkItemSelectionModel_SetLinkedItemSelectionModel(KLinkItemSelectionModel* self, QItemSelectionModel* selectionModel) {
    self->setLinkedItemSelectionModel(selectionModel);
}

void KLinkItemSelectionModel_Select(KLinkItemSelectionModel* self, const QModelIndex* index, int command) {
    self->select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void KLinkItemSelectionModel_Select2(KLinkItemSelectionModel* self, const QItemSelection* selection, int command) {
    self->select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void KLinkItemSelectionModel_LinkedItemSelectionModelChanged(KLinkItemSelectionModel* self) {
    self->linkedItemSelectionModelChanged();
}

void KLinkItemSelectionModel_Connect_LinkedItemSelectionModelChanged(KLinkItemSelectionModel* self, intptr_t slot) {
    void (*slotFunc)(KLinkItemSelectionModel*) = reinterpret_cast<void (*)(KLinkItemSelectionModel*)>(slot);
    KLinkItemSelectionModel::connect(self,
                                     static_cast<void (KLinkItemSelectionModel::*)()>(&KLinkItemSelectionModel::linkedItemSelectionModelChanged),
                                     [self, slotFunc]() {
                                         slotFunc(self);
                                     });
}

libqt_string KLinkItemSelectionModel_Tr2(const char* s, const char* c) {
    auto _ret = KLinkItemSelectionModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLinkItemSelectionModel_Tr3(const char* s, const char* c, int n) {
    auto _ret = KLinkItemSelectionModel::tr(s, c, static_cast<int>(n));
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
QMetaObject* KLinkItemSelectionModel_SuperMetaObject(const KLinkItemSelectionModel* self) {
    return (QMetaObject*)self->KLinkItemSelectionModel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnMetaObject(KLinkItemSelectionModel* self, intptr_t slot) {
    if (auto* vklinkitemselectionmodel = const_cast<VirtualKLinkItemSelectionModel*>(dynamic_cast<const VirtualKLinkItemSelectionModel*>(self)))
        vklinkitemselectionmodel->klinkitemselectionmodel_metaobject_callback = reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KLinkItemSelectionModel_SuperMetacast(KLinkItemSelectionModel* self, const char* param1) {
    return self->KLinkItemSelectionModel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnMetacast(KLinkItemSelectionModel* self, intptr_t slot) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self))
        vklinkitemselectionmodel->klinkitemselectionmodel_metacast_callback = reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KLinkItemSelectionModel_SuperMetacall(KLinkItemSelectionModel* self, int param1, int param2, void** param3) {
    return self->KLinkItemSelectionModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnMetacall(KLinkItemSelectionModel* self, intptr_t slot) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self))
        vklinkitemselectionmodel->klinkitemselectionmodel_metacall_callback = reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_Metacall_Callback>(slot);
}

// Base class handler implementation
void KLinkItemSelectionModel_SuperSelect(KLinkItemSelectionModel* self, const QModelIndex* index, int command) {
    self->KLinkItemSelectionModel::select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnSelect(KLinkItemSelectionModel* self, intptr_t slot) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self))
        vklinkitemselectionmodel->klinkitemselectionmodel_select_callback = reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_Select_Callback>(slot);
}

// Base class handler implementation
void KLinkItemSelectionModel_SuperSelect2(KLinkItemSelectionModel* self, const QItemSelection* selection, int command) {
    self->KLinkItemSelectionModel::select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnSelect2(KLinkItemSelectionModel* self, intptr_t slot) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self))
        vklinkitemselectionmodel->klinkitemselectionmodel_select2_callback = reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_Select2_Callback>(slot);
}

// Derived class handler implementation
void KLinkItemSelectionModel_SetCurrentIndex(KLinkItemSelectionModel* self, const QModelIndex* index, int command) {
    self->setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

// Base class handler implementation
void KLinkItemSelectionModel_SuperSetCurrentIndex(KLinkItemSelectionModel* self, const QModelIndex* index, int command) {
    self->KLinkItemSelectionModel::setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnSetCurrentIndex(KLinkItemSelectionModel* self, intptr_t slot) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self))
        vklinkitemselectionmodel->klinkitemselectionmodel_setcurrentindex_callback = reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_SetCurrentIndex_Callback>(slot);
}

// Derived class handler implementation
void KLinkItemSelectionModel_Clear(KLinkItemSelectionModel* self) {
    self->clear();
}

// Base class handler implementation
void KLinkItemSelectionModel_SuperClear(KLinkItemSelectionModel* self) {
    self->KLinkItemSelectionModel::clear();
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnClear(KLinkItemSelectionModel* self, intptr_t slot) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self))
        vklinkitemselectionmodel->klinkitemselectionmodel_clear_callback = reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_Clear_Callback>(slot);
}

// Derived class handler implementation
void KLinkItemSelectionModel_Reset(KLinkItemSelectionModel* self) {
    self->reset();
}

// Base class handler implementation
void KLinkItemSelectionModel_SuperReset(KLinkItemSelectionModel* self) {
    self->KLinkItemSelectionModel::reset();
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnReset(KLinkItemSelectionModel* self, intptr_t slot) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self))
        vklinkitemselectionmodel->klinkitemselectionmodel_reset_callback = reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_Reset_Callback>(slot);
}

// Derived class handler implementation
void KLinkItemSelectionModel_ClearCurrentIndex(KLinkItemSelectionModel* self) {
    self->clearCurrentIndex();
}

// Base class handler implementation
void KLinkItemSelectionModel_SuperClearCurrentIndex(KLinkItemSelectionModel* self) {
    self->KLinkItemSelectionModel::clearCurrentIndex();
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnClearCurrentIndex(KLinkItemSelectionModel* self, intptr_t slot) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self))
        vklinkitemselectionmodel->klinkitemselectionmodel_clearcurrentindex_callback = reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_ClearCurrentIndex_Callback>(slot);
}

// Derived class handler implementation
bool KLinkItemSelectionModel_Event(KLinkItemSelectionModel* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KLinkItemSelectionModel_SuperEvent(KLinkItemSelectionModel* self, QEvent* event) {
    return self->KLinkItemSelectionModel::event(event);
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnEvent(KLinkItemSelectionModel* self, intptr_t slot) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self))
        vklinkitemselectionmodel->klinkitemselectionmodel_event_callback = reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_Event_Callback>(slot);
}

// Derived class handler implementation
bool KLinkItemSelectionModel_EventFilter(KLinkItemSelectionModel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KLinkItemSelectionModel_SuperEventFilter(KLinkItemSelectionModel* self, QObject* watched, QEvent* event) {
    return self->KLinkItemSelectionModel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnEventFilter(KLinkItemSelectionModel* self, intptr_t slot) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self))
        vklinkitemselectionmodel->klinkitemselectionmodel_eventfilter_callback = reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KLinkItemSelectionModel_TimerEvent(KLinkItemSelectionModel* self, QTimerEvent* event) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel) {
        vklinkitemselectionmodel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLinkItemSelectionModel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLinkItemSelectionModel_SuperTimerEvent(KLinkItemSelectionModel* self, QTimerEvent* event) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self)) {
        vklinkitemselectionmodel->KLinkItemSelectionModel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KLinkItemSelectionModel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnTimerEvent(KLinkItemSelectionModel* self, intptr_t slot) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self))
        vklinkitemselectionmodel->klinkitemselectionmodel_timerevent_callback = reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KLinkItemSelectionModel_ChildEvent(KLinkItemSelectionModel* self, QChildEvent* event) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel) {
        vklinkitemselectionmodel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLinkItemSelectionModel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLinkItemSelectionModel_SuperChildEvent(KLinkItemSelectionModel* self, QChildEvent* event) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self)) {
        vklinkitemselectionmodel->KLinkItemSelectionModel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KLinkItemSelectionModel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnChildEvent(KLinkItemSelectionModel* self, intptr_t slot) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self))
        vklinkitemselectionmodel->klinkitemselectionmodel_childevent_callback = reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KLinkItemSelectionModel_CustomEvent(KLinkItemSelectionModel* self, QEvent* event) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel) {
        vklinkitemselectionmodel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLinkItemSelectionModel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLinkItemSelectionModel_SuperCustomEvent(KLinkItemSelectionModel* self, QEvent* event) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self)) {
        vklinkitemselectionmodel->KLinkItemSelectionModel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KLinkItemSelectionModel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnCustomEvent(KLinkItemSelectionModel* self, intptr_t slot) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self))
        vklinkitemselectionmodel->klinkitemselectionmodel_customevent_callback = reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KLinkItemSelectionModel_ConnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel) {
        vklinkitemselectionmodel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KLinkItemSelectionModel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KLinkItemSelectionModel_SuperConnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self)) {
        vklinkitemselectionmodel->KLinkItemSelectionModel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KLinkItemSelectionModel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnConnectNotify(KLinkItemSelectionModel* self, intptr_t slot) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self))
        vklinkitemselectionmodel->klinkitemselectionmodel_connectnotify_callback = reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KLinkItemSelectionModel_DisconnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel) {
        vklinkitemselectionmodel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KLinkItemSelectionModel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KLinkItemSelectionModel_SuperDisconnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self)) {
        vklinkitemselectionmodel->KLinkItemSelectionModel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KLinkItemSelectionModel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnDisconnectNotify(KLinkItemSelectionModel* self, intptr_t slot) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self))
        vklinkitemselectionmodel->klinkitemselectionmodel_disconnectnotify_callback = reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KLinkItemSelectionModel_EmitSelectionChanged(KLinkItemSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection) {
    if (auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self)) {
        vklinkitemselectionmodel->VirtualKLinkItemSelectionModel::emitSelectionChanged(*newSelection, *oldSelection);
    } else
        qFatal("Error: Protected method KLinkItemSelectionModel::emitSelectionChanged called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KLinkItemSelectionModel_Sender(const KLinkItemSelectionModel* self) {
    if (auto* vklinkitemselectionmodel = const_cast<VirtualKLinkItemSelectionModel*>(dynamic_cast<const VirtualKLinkItemSelectionModel*>(self))) {
        return vklinkitemselectionmodel->VirtualKLinkItemSelectionModel::sender();
    } else
        qFatal("Error: Protected method KLinkItemSelectionModel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KLinkItemSelectionModel_SenderSignalIndex(const KLinkItemSelectionModel* self) {
    if (auto* vklinkitemselectionmodel = const_cast<VirtualKLinkItemSelectionModel*>(dynamic_cast<const VirtualKLinkItemSelectionModel*>(self))) {
        return vklinkitemselectionmodel->VirtualKLinkItemSelectionModel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KLinkItemSelectionModel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KLinkItemSelectionModel_Receivers(const KLinkItemSelectionModel* self, const char* signal) {
    if (auto* vklinkitemselectionmodel = const_cast<VirtualKLinkItemSelectionModel*>(dynamic_cast<const VirtualKLinkItemSelectionModel*>(self))) {
        return vklinkitemselectionmodel->VirtualKLinkItemSelectionModel::receivers(signal);
    } else
        qFatal("Error: Protected method KLinkItemSelectionModel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KLinkItemSelectionModel_IsSignalConnected(const KLinkItemSelectionModel* self, const QMetaMethod* signal) {
    if (auto* vklinkitemselectionmodel = const_cast<VirtualKLinkItemSelectionModel*>(dynamic_cast<const VirtualKLinkItemSelectionModel*>(self))) {
        return vklinkitemselectionmodel->VirtualKLinkItemSelectionModel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KLinkItemSelectionModel::isSignalConnected called without a directly constructed type");
}

void KLinkItemSelectionModel_Delete(KLinkItemSelectionModel* self) {
    delete self;
}
