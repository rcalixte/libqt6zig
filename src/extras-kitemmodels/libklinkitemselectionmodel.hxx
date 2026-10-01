#pragma once
#ifndef EXTRAS_KITEMMODELS_LIBKLINKITEMSELECTIONMODEL_HXX
#define EXTRAS_KITEMMODELS_LIBKLINKITEMSELECTIONMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KLinkItemSelectionModel
class VirtualKLinkItemSelectionModel final : public KLinkItemSelectionModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using KLinkItemSelectionModel_MetaObject_Callback = QMetaObject* (*)(const KLinkItemSelectionModel*);
    using KLinkItemSelectionModel_Metacast_Callback = void* (*)(KLinkItemSelectionModel*, const char*);
    using KLinkItemSelectionModel_Metacall_Callback = int (*)(KLinkItemSelectionModel*, int, int, void**);
    using KLinkItemSelectionModel_Select_Callback = void (*)(KLinkItemSelectionModel*, QModelIndex*, int);
    using KLinkItemSelectionModel_Select2_Callback = void (*)(KLinkItemSelectionModel*, QItemSelection*, int);
    using KLinkItemSelectionModel_SetCurrentIndex_Callback = void (*)(KLinkItemSelectionModel*, QModelIndex*, int);
    using KLinkItemSelectionModel_Clear_Callback = void (*)(KLinkItemSelectionModel*);
    using KLinkItemSelectionModel_Reset_Callback = void (*)(KLinkItemSelectionModel*);
    using KLinkItemSelectionModel_ClearCurrentIndex_Callback = void (*)(KLinkItemSelectionModel*);
    using KLinkItemSelectionModel_Event_Callback = bool (*)(KLinkItemSelectionModel*, QEvent*);
    using KLinkItemSelectionModel_EventFilter_Callback = bool (*)(KLinkItemSelectionModel*, QObject*, QEvent*);
    using KLinkItemSelectionModel_TimerEvent_Callback = void (*)(KLinkItemSelectionModel*, QTimerEvent*);
    using KLinkItemSelectionModel_ChildEvent_Callback = void (*)(KLinkItemSelectionModel*, QChildEvent*);
    using KLinkItemSelectionModel_CustomEvent_Callback = void (*)(KLinkItemSelectionModel*, QEvent*);
    using KLinkItemSelectionModel_ConnectNotify_Callback = void (*)(KLinkItemSelectionModel*, QMetaMethod*);
    using KLinkItemSelectionModel_DisconnectNotify_Callback = void (*)(KLinkItemSelectionModel*, QMetaMethod*);
    using KLinkItemSelectionModel::emitSelectionChanged;
    using KLinkItemSelectionModel::isSignalConnected;
    using KLinkItemSelectionModel::receivers;
    using KLinkItemSelectionModel::sender;
    using KLinkItemSelectionModel::senderSignalIndex;

    // Instance callback storage
    KLinkItemSelectionModel_MetaObject_Callback klinkitemselectionmodel_metaobject_callback = nullptr;
    KLinkItemSelectionModel_Metacast_Callback klinkitemselectionmodel_metacast_callback = nullptr;
    KLinkItemSelectionModel_Metacall_Callback klinkitemselectionmodel_metacall_callback = nullptr;
    KLinkItemSelectionModel_Select_Callback klinkitemselectionmodel_select_callback = nullptr;
    KLinkItemSelectionModel_Select2_Callback klinkitemselectionmodel_select2_callback = nullptr;
    KLinkItemSelectionModel_SetCurrentIndex_Callback klinkitemselectionmodel_setcurrentindex_callback = nullptr;
    KLinkItemSelectionModel_Clear_Callback klinkitemselectionmodel_clear_callback = nullptr;
    KLinkItemSelectionModel_Reset_Callback klinkitemselectionmodel_reset_callback = nullptr;
    KLinkItemSelectionModel_ClearCurrentIndex_Callback klinkitemselectionmodel_clearcurrentindex_callback = nullptr;
    KLinkItemSelectionModel_Event_Callback klinkitemselectionmodel_event_callback = nullptr;
    KLinkItemSelectionModel_EventFilter_Callback klinkitemselectionmodel_eventfilter_callback = nullptr;
    KLinkItemSelectionModel_TimerEvent_Callback klinkitemselectionmodel_timerevent_callback = nullptr;
    KLinkItemSelectionModel_ChildEvent_Callback klinkitemselectionmodel_childevent_callback = nullptr;
    KLinkItemSelectionModel_CustomEvent_Callback klinkitemselectionmodel_customevent_callback = nullptr;
    KLinkItemSelectionModel_ConnectNotify_Callback klinkitemselectionmodel_connectnotify_callback = nullptr;
    KLinkItemSelectionModel_DisconnectNotify_Callback klinkitemselectionmodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KLinkItemSelectionModel {
        using KLinkItemSelectionModel::childEvent;
        using KLinkItemSelectionModel::connectNotify;
        using KLinkItemSelectionModel::customEvent;
        using KLinkItemSelectionModel::disconnectNotify;
        using KLinkItemSelectionModel::timerEvent;
    };

    VirtualKLinkItemSelectionModel(QAbstractItemModel* targetModel, QItemSelectionModel* linkedItemSelectionModel) : KLinkItemSelectionModel(targetModel, linkedItemSelectionModel) {};
    VirtualKLinkItemSelectionModel() : KLinkItemSelectionModel() {};
    VirtualKLinkItemSelectionModel(QAbstractItemModel* targetModel, QItemSelectionModel* linkedItemSelectionModel, QObject* parent) : KLinkItemSelectionModel(targetModel, linkedItemSelectionModel, parent) {};
    VirtualKLinkItemSelectionModel(QObject* parent) : KLinkItemSelectionModel(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (klinkitemselectionmodel_metaobject_callback) {
            QMetaObject* callback_ret = klinkitemselectionmodel_metaobject_callback(this);
            return callback_ret;
        }
        return KLinkItemSelectionModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (klinkitemselectionmodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = klinkitemselectionmodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KLinkItemSelectionModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klinkitemselectionmodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = klinkitemselectionmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KLinkItemSelectionModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void select(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
        if (klinkitemselectionmodel_select_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(command);
            klinkitemselectionmodel_select_callback(this, cbval1, cbval2);
            return;
        }
        KLinkItemSelectionModel::select(index, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual void select(const QItemSelection& selection, QItemSelectionModel::SelectionFlags command) override {
        if (klinkitemselectionmodel_select2_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            int cbval2 = static_cast<int>(command);
            klinkitemselectionmodel_select2_callback(this, cbval1, cbval2);
            return;
        }
        KLinkItemSelectionModel::select(selection, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCurrentIndex(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
        if (klinkitemselectionmodel_setcurrentindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(command);
            klinkitemselectionmodel_setcurrentindex_callback(this, cbval1, cbval2);
            return;
        }
        KLinkItemSelectionModel::setCurrentIndex(index, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (klinkitemselectionmodel_clear_callback) {
            klinkitemselectionmodel_clear_callback(this);
            return;
        }
        KLinkItemSelectionModel::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (klinkitemselectionmodel_reset_callback) {
            klinkitemselectionmodel_reset_callback(this);
            return;
        }
        KLinkItemSelectionModel::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void clearCurrentIndex() override {
        if (klinkitemselectionmodel_clearcurrentindex_callback) {
            klinkitemselectionmodel_clearcurrentindex_callback(this);
            return;
        }
        KLinkItemSelectionModel::clearCurrentIndex();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (klinkitemselectionmodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = klinkitemselectionmodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return KLinkItemSelectionModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (klinkitemselectionmodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = klinkitemselectionmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KLinkItemSelectionModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (klinkitemselectionmodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            klinkitemselectionmodel_timerevent_callback(this, cbval1);
            return;
        }
        KLinkItemSelectionModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klinkitemselectionmodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            klinkitemselectionmodel_childevent_callback(this, cbval1);
            return;
        }
        KLinkItemSelectionModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klinkitemselectionmodel_customevent_callback) {
            QEvent* cbval1 = event;
            klinkitemselectionmodel_customevent_callback(this, cbval1);
            return;
        }
        KLinkItemSelectionModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klinkitemselectionmodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            klinkitemselectionmodel_connectnotify_callback(this, cbval1);
            return;
        }
        KLinkItemSelectionModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klinkitemselectionmodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            klinkitemselectionmodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        KLinkItemSelectionModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void KLinkItemSelectionModel_SuperTimerEvent(KLinkItemSelectionModel* self, QTimerEvent* event);
    friend void KLinkItemSelectionModel_SuperChildEvent(KLinkItemSelectionModel* self, QChildEvent* event);
    friend void KLinkItemSelectionModel_SuperCustomEvent(KLinkItemSelectionModel* self, QEvent* event);
    friend void KLinkItemSelectionModel_SuperConnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal);
    friend void KLinkItemSelectionModel_SuperDisconnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal);
};

#endif
