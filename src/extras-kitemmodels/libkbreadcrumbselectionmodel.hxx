#pragma once
#ifndef EXTRAS_KITEMMODELS_LIBKBREADCRUMBSELECTIONMODEL_HXX
#define EXTRAS_KITEMMODELS_LIBKBREADCRUMBSELECTIONMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBreadcrumbSelectionModel
class VirtualKBreadcrumbSelectionModel final : public KBreadcrumbSelectionModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KBreadcrumbSelectionModel_MetaObject_Callback = QMetaObject* (*)(const KBreadcrumbSelectionModel*);
    using KBreadcrumbSelectionModel_Metacast_Callback = void* (*)(KBreadcrumbSelectionModel*, const char*);
    using KBreadcrumbSelectionModel_Metacall_Callback = int (*)(KBreadcrumbSelectionModel*, int, int, void**);
    using KBreadcrumbSelectionModel_Select_Callback = void (*)(KBreadcrumbSelectionModel*, QModelIndex*, int);
    using KBreadcrumbSelectionModel_Select2_Callback = void (*)(KBreadcrumbSelectionModel*, QItemSelection*, int);
    using KBreadcrumbSelectionModel_SetCurrentIndex_Callback = void (*)(KBreadcrumbSelectionModel*, QModelIndex*, int);
    using KBreadcrumbSelectionModel_Clear_Callback = void (*)(KBreadcrumbSelectionModel*);
    using KBreadcrumbSelectionModel_Reset_Callback = void (*)(KBreadcrumbSelectionModel*);
    using KBreadcrumbSelectionModel_ClearCurrentIndex_Callback = void (*)(KBreadcrumbSelectionModel*);
    using KBreadcrumbSelectionModel_Event_Callback = bool (*)(KBreadcrumbSelectionModel*, QEvent*);
    using KBreadcrumbSelectionModel_EventFilter_Callback = bool (*)(KBreadcrumbSelectionModel*, QObject*, QEvent*);
    using KBreadcrumbSelectionModel_TimerEvent_Callback = void (*)(KBreadcrumbSelectionModel*, QTimerEvent*);
    using KBreadcrumbSelectionModel_ChildEvent_Callback = void (*)(KBreadcrumbSelectionModel*, QChildEvent*);
    using KBreadcrumbSelectionModel_CustomEvent_Callback = void (*)(KBreadcrumbSelectionModel*, QEvent*);
    using KBreadcrumbSelectionModel_ConnectNotify_Callback = void (*)(KBreadcrumbSelectionModel*, QMetaMethod*);
    using KBreadcrumbSelectionModel_DisconnectNotify_Callback = void (*)(KBreadcrumbSelectionModel*, QMetaMethod*);
    using KBreadcrumbSelectionModel::emitSelectionChanged;
    using KBreadcrumbSelectionModel::isSignalConnected;
    using KBreadcrumbSelectionModel::receivers;
    using KBreadcrumbSelectionModel::sender;
    using KBreadcrumbSelectionModel::senderSignalIndex;

    // Instance callback storage
    KBreadcrumbSelectionModel_MetaObject_Callback kbreadcrumbselectionmodel_metaobject_callback = nullptr;
    KBreadcrumbSelectionModel_Metacast_Callback kbreadcrumbselectionmodel_metacast_callback = nullptr;
    KBreadcrumbSelectionModel_Metacall_Callback kbreadcrumbselectionmodel_metacall_callback = nullptr;
    KBreadcrumbSelectionModel_Select_Callback kbreadcrumbselectionmodel_select_callback = nullptr;
    KBreadcrumbSelectionModel_Select2_Callback kbreadcrumbselectionmodel_select2_callback = nullptr;
    KBreadcrumbSelectionModel_SetCurrentIndex_Callback kbreadcrumbselectionmodel_setcurrentindex_callback = nullptr;
    KBreadcrumbSelectionModel_Clear_Callback kbreadcrumbselectionmodel_clear_callback = nullptr;
    KBreadcrumbSelectionModel_Reset_Callback kbreadcrumbselectionmodel_reset_callback = nullptr;
    KBreadcrumbSelectionModel_ClearCurrentIndex_Callback kbreadcrumbselectionmodel_clearcurrentindex_callback = nullptr;
    KBreadcrumbSelectionModel_Event_Callback kbreadcrumbselectionmodel_event_callback = nullptr;
    KBreadcrumbSelectionModel_EventFilter_Callback kbreadcrumbselectionmodel_eventfilter_callback = nullptr;
    KBreadcrumbSelectionModel_TimerEvent_Callback kbreadcrumbselectionmodel_timerevent_callback = nullptr;
    KBreadcrumbSelectionModel_ChildEvent_Callback kbreadcrumbselectionmodel_childevent_callback = nullptr;
    KBreadcrumbSelectionModel_CustomEvent_Callback kbreadcrumbselectionmodel_customevent_callback = nullptr;
    KBreadcrumbSelectionModel_ConnectNotify_Callback kbreadcrumbselectionmodel_connectnotify_callback = nullptr;
    KBreadcrumbSelectionModel_DisconnectNotify_Callback kbreadcrumbselectionmodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KBreadcrumbSelectionModel {
        using KBreadcrumbSelectionModel::childEvent;
        using KBreadcrumbSelectionModel::connectNotify;
        using KBreadcrumbSelectionModel::customEvent;
        using KBreadcrumbSelectionModel::disconnectNotify;
        using KBreadcrumbSelectionModel::timerEvent;
    };

    VirtualKBreadcrumbSelectionModel(QItemSelectionModel* selectionModel) : KBreadcrumbSelectionModel(selectionModel) {};
    VirtualKBreadcrumbSelectionModel(QItemSelectionModel* selectionModel, KBreadcrumbSelectionModel::BreadcrumbTarget target) : KBreadcrumbSelectionModel(selectionModel, target) {};
    VirtualKBreadcrumbSelectionModel(QItemSelectionModel* selectionModel, QObject* parent) : KBreadcrumbSelectionModel(selectionModel, parent) {};
    VirtualKBreadcrumbSelectionModel(QItemSelectionModel* selectionModel, KBreadcrumbSelectionModel::BreadcrumbTarget target, QObject* parent) : KBreadcrumbSelectionModel(selectionModel, target, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kbreadcrumbselectionmodel_metaobject_callback) {
            QMetaObject* callback_ret = kbreadcrumbselectionmodel_metaobject_callback(this);
            return callback_ret;
        }
        return KBreadcrumbSelectionModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kbreadcrumbselectionmodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kbreadcrumbselectionmodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KBreadcrumbSelectionModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kbreadcrumbselectionmodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kbreadcrumbselectionmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KBreadcrumbSelectionModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void select(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
        if (kbreadcrumbselectionmodel_select_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(command);
            kbreadcrumbselectionmodel_select_callback(this, cbval1, cbval2);
            return;
        }
        KBreadcrumbSelectionModel::select(index, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual void select(const QItemSelection& selection, QItemSelectionModel::SelectionFlags command) override {
        if (kbreadcrumbselectionmodel_select2_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            int cbval2 = static_cast<int>(command);
            kbreadcrumbselectionmodel_select2_callback(this, cbval1, cbval2);
            return;
        }
        KBreadcrumbSelectionModel::select(selection, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCurrentIndex(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
        if (kbreadcrumbselectionmodel_setcurrentindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(command);
            kbreadcrumbselectionmodel_setcurrentindex_callback(this, cbval1, cbval2);
            return;
        }
        KBreadcrumbSelectionModel::setCurrentIndex(index, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (kbreadcrumbselectionmodel_clear_callback) {
            kbreadcrumbselectionmodel_clear_callback(this);
            return;
        }
        KBreadcrumbSelectionModel::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (kbreadcrumbselectionmodel_reset_callback) {
            kbreadcrumbselectionmodel_reset_callback(this);
            return;
        }
        KBreadcrumbSelectionModel::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void clearCurrentIndex() override {
        if (kbreadcrumbselectionmodel_clearcurrentindex_callback) {
            kbreadcrumbselectionmodel_clearcurrentindex_callback(this);
            return;
        }
        KBreadcrumbSelectionModel::clearCurrentIndex();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kbreadcrumbselectionmodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kbreadcrumbselectionmodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KBreadcrumbSelectionModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kbreadcrumbselectionmodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kbreadcrumbselectionmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KBreadcrumbSelectionModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kbreadcrumbselectionmodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kbreadcrumbselectionmodel_timerevent_callback(this, cbval1);
            return;
        }
        KBreadcrumbSelectionModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kbreadcrumbselectionmodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            kbreadcrumbselectionmodel_childevent_callback(this, cbval1);
            return;
        }
        KBreadcrumbSelectionModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kbreadcrumbselectionmodel_customevent_callback) {
            QEvent* cbval1 = event;
            kbreadcrumbselectionmodel_customevent_callback(this, cbval1);
            return;
        }
        KBreadcrumbSelectionModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kbreadcrumbselectionmodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kbreadcrumbselectionmodel_connectnotify_callback(this, cbval1);
            return;
        }
        KBreadcrumbSelectionModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kbreadcrumbselectionmodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kbreadcrumbselectionmodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KBreadcrumbSelectionModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void KBreadcrumbSelectionModel_SuperTimerEvent(KBreadcrumbSelectionModel* self, QTimerEvent* event);
    friend void KBreadcrumbSelectionModel_SuperChildEvent(KBreadcrumbSelectionModel* self, QChildEvent* event);
    friend void KBreadcrumbSelectionModel_SuperCustomEvent(KBreadcrumbSelectionModel* self, QEvent* event);
    friend void KBreadcrumbSelectionModel_SuperConnectNotify(KBreadcrumbSelectionModel* self, const QMetaMethod* signal);
    friend void KBreadcrumbSelectionModel_SuperDisconnectNotify(KBreadcrumbSelectionModel* self, const QMetaMethod* signal);
};

#endif
