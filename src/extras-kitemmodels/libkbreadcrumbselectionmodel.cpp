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
#include <QByteArray>
#include <cstring>
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
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKBreadcrumbSelectionModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KBreadcrumbSelectionModel_Tr(const char* s) {
    QString _ret = KBreadcrumbSelectionModel::tr(s);
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
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        self->select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        ((VirtualKBreadcrumbSelectionModel*)self)->select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

void KBreadcrumbSelectionModel_Select2(KBreadcrumbSelectionModel* self, const QItemSelection* selection, int command) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        self->select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        ((VirtualKBreadcrumbSelectionModel*)self)->select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

libqt_string KBreadcrumbSelectionModel_Tr2(const char* s, const char* c) {
    QString _ret = KBreadcrumbSelectionModel::tr(s, c);
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
    QString _ret = KBreadcrumbSelectionModel::tr(s, c, static_cast<int>(n));
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
int KBreadcrumbSelectionModel_QBaseMetacall(KBreadcrumbSelectionModel* self, int param1, int param2, void** param3) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_Metacall_IsBase(true);
        return vkbreadcrumbselectionmodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KBreadcrumbSelectionModel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnMetacall(KBreadcrumbSelectionModel* self, intptr_t slot) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_Metacall_Callback(reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KBreadcrumbSelectionModel_QBaseSelect(KBreadcrumbSelectionModel* self, const QModelIndex* index, int command) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_Select_IsBase(true);
        vkbreadcrumbselectionmodel->select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        self->KBreadcrumbSelectionModel::select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnSelect(KBreadcrumbSelectionModel* self, intptr_t slot) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_Select_Callback(reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_Select_Callback>(slot));
    }
}

// Base class handler implementation
void KBreadcrumbSelectionModel_QBaseSelect2(KBreadcrumbSelectionModel* self, const QItemSelection* selection, int command) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_Select2_IsBase(true);
        vkbreadcrumbselectionmodel->select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        self->KBreadcrumbSelectionModel::select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnSelect2(KBreadcrumbSelectionModel* self, intptr_t slot) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_Select2_Callback(reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_Select2_Callback>(slot));
    }
}

// Derived class handler implementation
void KBreadcrumbSelectionModel_SetCurrentIndex(KBreadcrumbSelectionModel* self, const QModelIndex* index, int command) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        self->KBreadcrumbSelectionModel::setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Base class handler implementation
void KBreadcrumbSelectionModel_QBaseSetCurrentIndex(KBreadcrumbSelectionModel* self, const QModelIndex* index, int command) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_SetCurrentIndex_IsBase(true);
        vkbreadcrumbselectionmodel->setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        self->KBreadcrumbSelectionModel::setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnSetCurrentIndex(KBreadcrumbSelectionModel* self, intptr_t slot) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_SetCurrentIndex_Callback(reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_SetCurrentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KBreadcrumbSelectionModel_Clear(KBreadcrumbSelectionModel* self) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->clear();
    } else {
        self->KBreadcrumbSelectionModel::clear();
    }
}

// Base class handler implementation
void KBreadcrumbSelectionModel_QBaseClear(KBreadcrumbSelectionModel* self) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_Clear_IsBase(true);
        vkbreadcrumbselectionmodel->clear();
    } else {
        self->KBreadcrumbSelectionModel::clear();
    }
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnClear(KBreadcrumbSelectionModel* self, intptr_t slot) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_Clear_Callback(reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
void KBreadcrumbSelectionModel_Reset(KBreadcrumbSelectionModel* self) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->reset();
    } else {
        self->KBreadcrumbSelectionModel::reset();
    }
}

// Base class handler implementation
void KBreadcrumbSelectionModel_QBaseReset(KBreadcrumbSelectionModel* self) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_Reset_IsBase(true);
        vkbreadcrumbselectionmodel->reset();
    } else {
        self->KBreadcrumbSelectionModel::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnReset(KBreadcrumbSelectionModel* self, intptr_t slot) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_Reset_Callback(reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void KBreadcrumbSelectionModel_ClearCurrentIndex(KBreadcrumbSelectionModel* self) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->clearCurrentIndex();
    } else {
        self->KBreadcrumbSelectionModel::clearCurrentIndex();
    }
}

// Base class handler implementation
void KBreadcrumbSelectionModel_QBaseClearCurrentIndex(KBreadcrumbSelectionModel* self) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_ClearCurrentIndex_IsBase(true);
        vkbreadcrumbselectionmodel->clearCurrentIndex();
    } else {
        self->KBreadcrumbSelectionModel::clearCurrentIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnClearCurrentIndex(KBreadcrumbSelectionModel* self, intptr_t slot) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_ClearCurrentIndex_Callback(reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_ClearCurrentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBreadcrumbSelectionModel_Event(KBreadcrumbSelectionModel* self, QEvent* event) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        return vkbreadcrumbselectionmodel->event(event);
    } else {
        return self->KBreadcrumbSelectionModel::event(event);
    }
}

// Base class handler implementation
bool KBreadcrumbSelectionModel_QBaseEvent(KBreadcrumbSelectionModel* self, QEvent* event) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_Event_IsBase(true);
        return vkbreadcrumbselectionmodel->event(event);
    } else {
        return self->KBreadcrumbSelectionModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnEvent(KBreadcrumbSelectionModel* self, intptr_t slot) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_Event_Callback(reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBreadcrumbSelectionModel_EventFilter(KBreadcrumbSelectionModel* self, QObject* watched, QEvent* event) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        return vkbreadcrumbselectionmodel->eventFilter(watched, event);
    } else {
        return self->KBreadcrumbSelectionModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KBreadcrumbSelectionModel_QBaseEventFilter(KBreadcrumbSelectionModel* self, QObject* watched, QEvent* event) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_EventFilter_IsBase(true);
        return vkbreadcrumbselectionmodel->eventFilter(watched, event);
    } else {
        return self->KBreadcrumbSelectionModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnEventFilter(KBreadcrumbSelectionModel* self, intptr_t slot) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_EventFilter_Callback(reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KBreadcrumbSelectionModel_TimerEvent(KBreadcrumbSelectionModel* self, QTimerEvent* event) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->timerEvent(event);
    } else {
        ((VirtualKBreadcrumbSelectionModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KBreadcrumbSelectionModel_QBaseTimerEvent(KBreadcrumbSelectionModel* self, QTimerEvent* event) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_TimerEvent_IsBase(true);
        vkbreadcrumbselectionmodel->timerEvent(event);
    } else {
        ((VirtualKBreadcrumbSelectionModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnTimerEvent(KBreadcrumbSelectionModel* self, intptr_t slot) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_TimerEvent_Callback(reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBreadcrumbSelectionModel_ChildEvent(KBreadcrumbSelectionModel* self, QChildEvent* event) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->childEvent(event);
    } else {
        ((VirtualKBreadcrumbSelectionModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KBreadcrumbSelectionModel_QBaseChildEvent(KBreadcrumbSelectionModel* self, QChildEvent* event) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_ChildEvent_IsBase(true);
        vkbreadcrumbselectionmodel->childEvent(event);
    } else {
        ((VirtualKBreadcrumbSelectionModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnChildEvent(KBreadcrumbSelectionModel* self, intptr_t slot) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_ChildEvent_Callback(reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBreadcrumbSelectionModel_CustomEvent(KBreadcrumbSelectionModel* self, QEvent* event) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->customEvent(event);
    } else {
        ((VirtualKBreadcrumbSelectionModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KBreadcrumbSelectionModel_QBaseCustomEvent(KBreadcrumbSelectionModel* self, QEvent* event) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_CustomEvent_IsBase(true);
        vkbreadcrumbselectionmodel->customEvent(event);
    } else {
        ((VirtualKBreadcrumbSelectionModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnCustomEvent(KBreadcrumbSelectionModel* self, intptr_t slot) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_CustomEvent_Callback(reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBreadcrumbSelectionModel_ConnectNotify(KBreadcrumbSelectionModel* self, const QMetaMethod* signal) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->connectNotify(*signal);
    } else {
        ((VirtualKBreadcrumbSelectionModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KBreadcrumbSelectionModel_QBaseConnectNotify(KBreadcrumbSelectionModel* self, const QMetaMethod* signal) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_ConnectNotify_IsBase(true);
        vkbreadcrumbselectionmodel->connectNotify(*signal);
    } else {
        ((VirtualKBreadcrumbSelectionModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnConnectNotify(KBreadcrumbSelectionModel* self, intptr_t slot) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_ConnectNotify_Callback(reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KBreadcrumbSelectionModel_DisconnectNotify(KBreadcrumbSelectionModel* self, const QMetaMethod* signal) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->disconnectNotify(*signal);
    } else {
        ((VirtualKBreadcrumbSelectionModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KBreadcrumbSelectionModel_QBaseDisconnectNotify(KBreadcrumbSelectionModel* self, const QMetaMethod* signal) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_DisconnectNotify_IsBase(true);
        vkbreadcrumbselectionmodel->disconnectNotify(*signal);
    } else {
        ((VirtualKBreadcrumbSelectionModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnDisconnectNotify(KBreadcrumbSelectionModel* self, intptr_t slot) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_DisconnectNotify_Callback(reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KBreadcrumbSelectionModel_EmitSelectionChanged(KBreadcrumbSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->emitSelectionChanged(*newSelection, *oldSelection);
    } else {
        ((VirtualKBreadcrumbSelectionModel*)self)->emitSelectionChanged(*newSelection, *oldSelection);
    }
}

// Base class handler implementation
void KBreadcrumbSelectionModel_QBaseEmitSelectionChanged(KBreadcrumbSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_EmitSelectionChanged_IsBase(true);
        vkbreadcrumbselectionmodel->emitSelectionChanged(*newSelection, *oldSelection);
    } else {
        ((VirtualKBreadcrumbSelectionModel*)self)->emitSelectionChanged(*newSelection, *oldSelection);
    }
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnEmitSelectionChanged(KBreadcrumbSelectionModel* self, intptr_t slot) {
    auto* vkbreadcrumbselectionmodel = dynamic_cast<VirtualKBreadcrumbSelectionModel*>(self);
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_EmitSelectionChanged_Callback(reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_EmitSelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KBreadcrumbSelectionModel_Sender(const KBreadcrumbSelectionModel* self) {
    auto* vkbreadcrumbselectionmodel = const_cast<VirtualKBreadcrumbSelectionModel*>(dynamic_cast<const VirtualKBreadcrumbSelectionModel*>(self));
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        return vkbreadcrumbselectionmodel->sender();
    } else {
        return ((VirtualKBreadcrumbSelectionModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KBreadcrumbSelectionModel_QBaseSender(const KBreadcrumbSelectionModel* self) {
    auto* vkbreadcrumbselectionmodel = const_cast<VirtualKBreadcrumbSelectionModel*>(dynamic_cast<const VirtualKBreadcrumbSelectionModel*>(self));
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_Sender_IsBase(true);
        return vkbreadcrumbselectionmodel->sender();
    } else {
        return ((VirtualKBreadcrumbSelectionModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnSender(const KBreadcrumbSelectionModel* self, intptr_t slot) {
    auto* vkbreadcrumbselectionmodel = const_cast<VirtualKBreadcrumbSelectionModel*>(dynamic_cast<const VirtualKBreadcrumbSelectionModel*>(self));
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_Sender_Callback(reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KBreadcrumbSelectionModel_SenderSignalIndex(const KBreadcrumbSelectionModel* self) {
    auto* vkbreadcrumbselectionmodel = const_cast<VirtualKBreadcrumbSelectionModel*>(dynamic_cast<const VirtualKBreadcrumbSelectionModel*>(self));
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        return vkbreadcrumbselectionmodel->senderSignalIndex();
    } else {
        return ((VirtualKBreadcrumbSelectionModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KBreadcrumbSelectionModel_QBaseSenderSignalIndex(const KBreadcrumbSelectionModel* self) {
    auto* vkbreadcrumbselectionmodel = const_cast<VirtualKBreadcrumbSelectionModel*>(dynamic_cast<const VirtualKBreadcrumbSelectionModel*>(self));
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_SenderSignalIndex_IsBase(true);
        return vkbreadcrumbselectionmodel->senderSignalIndex();
    } else {
        return ((VirtualKBreadcrumbSelectionModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnSenderSignalIndex(const KBreadcrumbSelectionModel* self, intptr_t slot) {
    auto* vkbreadcrumbselectionmodel = const_cast<VirtualKBreadcrumbSelectionModel*>(dynamic_cast<const VirtualKBreadcrumbSelectionModel*>(self));
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KBreadcrumbSelectionModel_Receivers(const KBreadcrumbSelectionModel* self, const char* signal) {
    auto* vkbreadcrumbselectionmodel = const_cast<VirtualKBreadcrumbSelectionModel*>(dynamic_cast<const VirtualKBreadcrumbSelectionModel*>(self));
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        return vkbreadcrumbselectionmodel->receivers(signal);
    } else {
        return ((VirtualKBreadcrumbSelectionModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KBreadcrumbSelectionModel_QBaseReceivers(const KBreadcrumbSelectionModel* self, const char* signal) {
    auto* vkbreadcrumbselectionmodel = const_cast<VirtualKBreadcrumbSelectionModel*>(dynamic_cast<const VirtualKBreadcrumbSelectionModel*>(self));
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_Receivers_IsBase(true);
        return vkbreadcrumbselectionmodel->receivers(signal);
    } else {
        return ((VirtualKBreadcrumbSelectionModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnReceivers(const KBreadcrumbSelectionModel* self, intptr_t slot) {
    auto* vkbreadcrumbselectionmodel = const_cast<VirtualKBreadcrumbSelectionModel*>(dynamic_cast<const VirtualKBreadcrumbSelectionModel*>(self));
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_Receivers_Callback(reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBreadcrumbSelectionModel_IsSignalConnected(const KBreadcrumbSelectionModel* self, const QMetaMethod* signal) {
    auto* vkbreadcrumbselectionmodel = const_cast<VirtualKBreadcrumbSelectionModel*>(dynamic_cast<const VirtualKBreadcrumbSelectionModel*>(self));
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        return vkbreadcrumbselectionmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKBreadcrumbSelectionModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KBreadcrumbSelectionModel_QBaseIsSignalConnected(const KBreadcrumbSelectionModel* self, const QMetaMethod* signal) {
    auto* vkbreadcrumbselectionmodel = const_cast<VirtualKBreadcrumbSelectionModel*>(dynamic_cast<const VirtualKBreadcrumbSelectionModel*>(self));
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_IsSignalConnected_IsBase(true);
        return vkbreadcrumbselectionmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKBreadcrumbSelectionModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBreadcrumbSelectionModel_OnIsSignalConnected(const KBreadcrumbSelectionModel* self, intptr_t slot) {
    auto* vkbreadcrumbselectionmodel = const_cast<VirtualKBreadcrumbSelectionModel*>(dynamic_cast<const VirtualKBreadcrumbSelectionModel*>(self));
    if (vkbreadcrumbselectionmodel && vkbreadcrumbselectionmodel->isVirtualKBreadcrumbSelectionModel) {
        vkbreadcrumbselectionmodel->setKBreadcrumbSelectionModel_IsSignalConnected_Callback(reinterpret_cast<VirtualKBreadcrumbSelectionModel::KBreadcrumbSelectionModel_IsSignalConnected_Callback>(slot));
    }
}

void KBreadcrumbSelectionModel_Delete(KBreadcrumbSelectionModel* self) {
    delete self;
}
