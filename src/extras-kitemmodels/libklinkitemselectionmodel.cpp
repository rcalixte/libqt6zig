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
#include <QByteArray>
#include <cstring>
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
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKLinkItemSelectionModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KLinkItemSelectionModel_Tr(const char* s) {
    QString _ret = KLinkItemSelectionModel::tr(s);
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
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        self->select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        ((VirtualKLinkItemSelectionModel*)self)->select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

void KLinkItemSelectionModel_Select2(KLinkItemSelectionModel* self, const QItemSelection* selection, int command) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        self->select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        ((VirtualKLinkItemSelectionModel*)self)->select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

void KLinkItemSelectionModel_LinkedItemSelectionModelChanged(KLinkItemSelectionModel* self) {
    self->linkedItemSelectionModelChanged();
}

void KLinkItemSelectionModel_Connect_LinkedItemSelectionModelChanged(KLinkItemSelectionModel* self, intptr_t slot) {
    void (*slotFunc)(KLinkItemSelectionModel*) = reinterpret_cast<void (*)(KLinkItemSelectionModel*)>(slot);
    KLinkItemSelectionModel::connect(self, &KLinkItemSelectionModel::linkedItemSelectionModelChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KLinkItemSelectionModel_Tr2(const char* s, const char* c) {
    QString _ret = KLinkItemSelectionModel::tr(s, c);
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
    QString _ret = KLinkItemSelectionModel::tr(s, c, static_cast<int>(n));
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
int KLinkItemSelectionModel_QBaseMetacall(KLinkItemSelectionModel* self, int param1, int param2, void** param3) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_Metacall_IsBase(true);
        return vklinkitemselectionmodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KLinkItemSelectionModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnMetacall(KLinkItemSelectionModel* self, intptr_t slot) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_Metacall_Callback(reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KLinkItemSelectionModel_QBaseSelect(KLinkItemSelectionModel* self, const QModelIndex* index, int command) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_Select_IsBase(true);
        vklinkitemselectionmodel->select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        self->KLinkItemSelectionModel::select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnSelect(KLinkItemSelectionModel* self, intptr_t slot) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_Select_Callback(reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_Select_Callback>(slot));
    }
}

// Base class handler implementation
void KLinkItemSelectionModel_QBaseSelect2(KLinkItemSelectionModel* self, const QItemSelection* selection, int command) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_Select2_IsBase(true);
        vklinkitemselectionmodel->select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        self->KLinkItemSelectionModel::select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnSelect2(KLinkItemSelectionModel* self, intptr_t slot) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_Select2_Callback(reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_Select2_Callback>(slot));
    }
}

// Derived class handler implementation
void KLinkItemSelectionModel_SetCurrentIndex(KLinkItemSelectionModel* self, const QModelIndex* index, int command) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        self->KLinkItemSelectionModel::setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Base class handler implementation
void KLinkItemSelectionModel_QBaseSetCurrentIndex(KLinkItemSelectionModel* self, const QModelIndex* index, int command) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_SetCurrentIndex_IsBase(true);
        vklinkitemselectionmodel->setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        self->KLinkItemSelectionModel::setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnSetCurrentIndex(KLinkItemSelectionModel* self, intptr_t slot) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_SetCurrentIndex_Callback(reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_SetCurrentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KLinkItemSelectionModel_Clear(KLinkItemSelectionModel* self) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->clear();
    } else {
        self->KLinkItemSelectionModel::clear();
    }
}

// Base class handler implementation
void KLinkItemSelectionModel_QBaseClear(KLinkItemSelectionModel* self) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_Clear_IsBase(true);
        vklinkitemselectionmodel->clear();
    } else {
        self->KLinkItemSelectionModel::clear();
    }
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnClear(KLinkItemSelectionModel* self, intptr_t slot) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_Clear_Callback(reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
void KLinkItemSelectionModel_Reset(KLinkItemSelectionModel* self) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->reset();
    } else {
        self->KLinkItemSelectionModel::reset();
    }
}

// Base class handler implementation
void KLinkItemSelectionModel_QBaseReset(KLinkItemSelectionModel* self) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_Reset_IsBase(true);
        vklinkitemselectionmodel->reset();
    } else {
        self->KLinkItemSelectionModel::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnReset(KLinkItemSelectionModel* self, intptr_t slot) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_Reset_Callback(reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void KLinkItemSelectionModel_ClearCurrentIndex(KLinkItemSelectionModel* self) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->clearCurrentIndex();
    } else {
        self->KLinkItemSelectionModel::clearCurrentIndex();
    }
}

// Base class handler implementation
void KLinkItemSelectionModel_QBaseClearCurrentIndex(KLinkItemSelectionModel* self) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_ClearCurrentIndex_IsBase(true);
        vklinkitemselectionmodel->clearCurrentIndex();
    } else {
        self->KLinkItemSelectionModel::clearCurrentIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnClearCurrentIndex(KLinkItemSelectionModel* self, intptr_t slot) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_ClearCurrentIndex_Callback(reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_ClearCurrentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLinkItemSelectionModel_Event(KLinkItemSelectionModel* self, QEvent* event) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        return vklinkitemselectionmodel->event(event);
    } else {
        return self->KLinkItemSelectionModel::event(event);
    }
}

// Base class handler implementation
bool KLinkItemSelectionModel_QBaseEvent(KLinkItemSelectionModel* self, QEvent* event) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_Event_IsBase(true);
        return vklinkitemselectionmodel->event(event);
    } else {
        return self->KLinkItemSelectionModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnEvent(KLinkItemSelectionModel* self, intptr_t slot) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_Event_Callback(reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLinkItemSelectionModel_EventFilter(KLinkItemSelectionModel* self, QObject* watched, QEvent* event) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        return vklinkitemselectionmodel->eventFilter(watched, event);
    } else {
        return self->KLinkItemSelectionModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KLinkItemSelectionModel_QBaseEventFilter(KLinkItemSelectionModel* self, QObject* watched, QEvent* event) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_EventFilter_IsBase(true);
        return vklinkitemselectionmodel->eventFilter(watched, event);
    } else {
        return self->KLinkItemSelectionModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnEventFilter(KLinkItemSelectionModel* self, intptr_t slot) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_EventFilter_Callback(reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KLinkItemSelectionModel_TimerEvent(KLinkItemSelectionModel* self, QTimerEvent* event) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->timerEvent(event);
    } else {
        ((VirtualKLinkItemSelectionModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KLinkItemSelectionModel_QBaseTimerEvent(KLinkItemSelectionModel* self, QTimerEvent* event) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_TimerEvent_IsBase(true);
        vklinkitemselectionmodel->timerEvent(event);
    } else {
        ((VirtualKLinkItemSelectionModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnTimerEvent(KLinkItemSelectionModel* self, intptr_t slot) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_TimerEvent_Callback(reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLinkItemSelectionModel_ChildEvent(KLinkItemSelectionModel* self, QChildEvent* event) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->childEvent(event);
    } else {
        ((VirtualKLinkItemSelectionModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KLinkItemSelectionModel_QBaseChildEvent(KLinkItemSelectionModel* self, QChildEvent* event) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_ChildEvent_IsBase(true);
        vklinkitemselectionmodel->childEvent(event);
    } else {
        ((VirtualKLinkItemSelectionModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnChildEvent(KLinkItemSelectionModel* self, intptr_t slot) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_ChildEvent_Callback(reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLinkItemSelectionModel_CustomEvent(KLinkItemSelectionModel* self, QEvent* event) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->customEvent(event);
    } else {
        ((VirtualKLinkItemSelectionModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KLinkItemSelectionModel_QBaseCustomEvent(KLinkItemSelectionModel* self, QEvent* event) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_CustomEvent_IsBase(true);
        vklinkitemselectionmodel->customEvent(event);
    } else {
        ((VirtualKLinkItemSelectionModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnCustomEvent(KLinkItemSelectionModel* self, intptr_t slot) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_CustomEvent_Callback(reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLinkItemSelectionModel_ConnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->connectNotify(*signal);
    } else {
        ((VirtualKLinkItemSelectionModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KLinkItemSelectionModel_QBaseConnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_ConnectNotify_IsBase(true);
        vklinkitemselectionmodel->connectNotify(*signal);
    } else {
        ((VirtualKLinkItemSelectionModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnConnectNotify(KLinkItemSelectionModel* self, intptr_t slot) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_ConnectNotify_Callback(reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KLinkItemSelectionModel_DisconnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->disconnectNotify(*signal);
    } else {
        ((VirtualKLinkItemSelectionModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KLinkItemSelectionModel_QBaseDisconnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_DisconnectNotify_IsBase(true);
        vklinkitemselectionmodel->disconnectNotify(*signal);
    } else {
        ((VirtualKLinkItemSelectionModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnDisconnectNotify(KLinkItemSelectionModel* self, intptr_t slot) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_DisconnectNotify_Callback(reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KLinkItemSelectionModel_EmitSelectionChanged(KLinkItemSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->emitSelectionChanged(*newSelection, *oldSelection);
    } else {
        ((VirtualKLinkItemSelectionModel*)self)->emitSelectionChanged(*newSelection, *oldSelection);
    }
}

// Base class handler implementation
void KLinkItemSelectionModel_QBaseEmitSelectionChanged(KLinkItemSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_EmitSelectionChanged_IsBase(true);
        vklinkitemselectionmodel->emitSelectionChanged(*newSelection, *oldSelection);
    } else {
        ((VirtualKLinkItemSelectionModel*)self)->emitSelectionChanged(*newSelection, *oldSelection);
    }
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnEmitSelectionChanged(KLinkItemSelectionModel* self, intptr_t slot) {
    auto* vklinkitemselectionmodel = dynamic_cast<VirtualKLinkItemSelectionModel*>(self);
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_EmitSelectionChanged_Callback(reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_EmitSelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KLinkItemSelectionModel_Sender(const KLinkItemSelectionModel* self) {
    auto* vklinkitemselectionmodel = const_cast<VirtualKLinkItemSelectionModel*>(dynamic_cast<const VirtualKLinkItemSelectionModel*>(self));
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        return vklinkitemselectionmodel->sender();
    } else {
        return ((VirtualKLinkItemSelectionModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KLinkItemSelectionModel_QBaseSender(const KLinkItemSelectionModel* self) {
    auto* vklinkitemselectionmodel = const_cast<VirtualKLinkItemSelectionModel*>(dynamic_cast<const VirtualKLinkItemSelectionModel*>(self));
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_Sender_IsBase(true);
        return vklinkitemselectionmodel->sender();
    } else {
        return ((VirtualKLinkItemSelectionModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnSender(const KLinkItemSelectionModel* self, intptr_t slot) {
    auto* vklinkitemselectionmodel = const_cast<VirtualKLinkItemSelectionModel*>(dynamic_cast<const VirtualKLinkItemSelectionModel*>(self));
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_Sender_Callback(reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KLinkItemSelectionModel_SenderSignalIndex(const KLinkItemSelectionModel* self) {
    auto* vklinkitemselectionmodel = const_cast<VirtualKLinkItemSelectionModel*>(dynamic_cast<const VirtualKLinkItemSelectionModel*>(self));
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        return vklinkitemselectionmodel->senderSignalIndex();
    } else {
        return ((VirtualKLinkItemSelectionModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KLinkItemSelectionModel_QBaseSenderSignalIndex(const KLinkItemSelectionModel* self) {
    auto* vklinkitemselectionmodel = const_cast<VirtualKLinkItemSelectionModel*>(dynamic_cast<const VirtualKLinkItemSelectionModel*>(self));
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_SenderSignalIndex_IsBase(true);
        return vklinkitemselectionmodel->senderSignalIndex();
    } else {
        return ((VirtualKLinkItemSelectionModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnSenderSignalIndex(const KLinkItemSelectionModel* self, intptr_t slot) {
    auto* vklinkitemselectionmodel = const_cast<VirtualKLinkItemSelectionModel*>(dynamic_cast<const VirtualKLinkItemSelectionModel*>(self));
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KLinkItemSelectionModel_Receivers(const KLinkItemSelectionModel* self, const char* signal) {
    auto* vklinkitemselectionmodel = const_cast<VirtualKLinkItemSelectionModel*>(dynamic_cast<const VirtualKLinkItemSelectionModel*>(self));
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        return vklinkitemselectionmodel->receivers(signal);
    } else {
        return ((VirtualKLinkItemSelectionModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KLinkItemSelectionModel_QBaseReceivers(const KLinkItemSelectionModel* self, const char* signal) {
    auto* vklinkitemselectionmodel = const_cast<VirtualKLinkItemSelectionModel*>(dynamic_cast<const VirtualKLinkItemSelectionModel*>(self));
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_Receivers_IsBase(true);
        return vklinkitemselectionmodel->receivers(signal);
    } else {
        return ((VirtualKLinkItemSelectionModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnReceivers(const KLinkItemSelectionModel* self, intptr_t slot) {
    auto* vklinkitemselectionmodel = const_cast<VirtualKLinkItemSelectionModel*>(dynamic_cast<const VirtualKLinkItemSelectionModel*>(self));
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_Receivers_Callback(reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLinkItemSelectionModel_IsSignalConnected(const KLinkItemSelectionModel* self, const QMetaMethod* signal) {
    auto* vklinkitemselectionmodel = const_cast<VirtualKLinkItemSelectionModel*>(dynamic_cast<const VirtualKLinkItemSelectionModel*>(self));
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        return vklinkitemselectionmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKLinkItemSelectionModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KLinkItemSelectionModel_QBaseIsSignalConnected(const KLinkItemSelectionModel* self, const QMetaMethod* signal) {
    auto* vklinkitemselectionmodel = const_cast<VirtualKLinkItemSelectionModel*>(dynamic_cast<const VirtualKLinkItemSelectionModel*>(self));
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_IsSignalConnected_IsBase(true);
        return vklinkitemselectionmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKLinkItemSelectionModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLinkItemSelectionModel_OnIsSignalConnected(const KLinkItemSelectionModel* self, intptr_t slot) {
    auto* vklinkitemselectionmodel = const_cast<VirtualKLinkItemSelectionModel*>(dynamic_cast<const VirtualKLinkItemSelectionModel*>(self));
    if (vklinkitemselectionmodel && vklinkitemselectionmodel->isVirtualKLinkItemSelectionModel) {
        vklinkitemselectionmodel->setKLinkItemSelectionModel_IsSignalConnected_Callback(reinterpret_cast<VirtualKLinkItemSelectionModel::KLinkItemSelectionModel_IsSignalConnected_Callback>(slot));
    }
}

void KLinkItemSelectionModel_Delete(KLinkItemSelectionModel* self) {
    delete self;
}
