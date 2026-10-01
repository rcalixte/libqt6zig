#pragma once
#ifndef LIBQITEMSELECTIONMODEL_HXX
#define LIBQITEMSELECTIONMODEL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QItemSelectionModel
class VirtualQItemSelectionModel final : public QItemSelectionModel {
  public:
    // Virtual class public types (including callbacks and access types)
    using QItemSelectionModel_MetaObject_Callback = QMetaObject* (*)(const QItemSelectionModel*);
    using QItemSelectionModel_Metacast_Callback = void* (*)(QItemSelectionModel*, const char*);
    using QItemSelectionModel_Metacall_Callback = int (*)(QItemSelectionModel*, int, int, void**);
    using QItemSelectionModel_SetCurrentIndex_Callback = void (*)(QItemSelectionModel*, QModelIndex*, int);
    using QItemSelectionModel_Select_Callback = void (*)(QItemSelectionModel*, QModelIndex*, int);
    using QItemSelectionModel_Select2_Callback = void (*)(QItemSelectionModel*, QItemSelection*, int);
    using QItemSelectionModel_Clear_Callback = void (*)(QItemSelectionModel*);
    using QItemSelectionModel_Reset_Callback = void (*)(QItemSelectionModel*);
    using QItemSelectionModel_ClearCurrentIndex_Callback = void (*)(QItemSelectionModel*);
    using QItemSelectionModel_Event_Callback = bool (*)(QItemSelectionModel*, QEvent*);
    using QItemSelectionModel_EventFilter_Callback = bool (*)(QItemSelectionModel*, QObject*, QEvent*);
    using QItemSelectionModel_TimerEvent_Callback = void (*)(QItemSelectionModel*, QTimerEvent*);
    using QItemSelectionModel_ChildEvent_Callback = void (*)(QItemSelectionModel*, QChildEvent*);
    using QItemSelectionModel_CustomEvent_Callback = void (*)(QItemSelectionModel*, QEvent*);
    using QItemSelectionModel_ConnectNotify_Callback = void (*)(QItemSelectionModel*, QMetaMethod*);
    using QItemSelectionModel_DisconnectNotify_Callback = void (*)(QItemSelectionModel*, QMetaMethod*);
    using QItemSelectionModel::emitSelectionChanged;
    using QItemSelectionModel::isSignalConnected;
    using QItemSelectionModel::receivers;
    using QItemSelectionModel::sender;
    using QItemSelectionModel::senderSignalIndex;

    // Instance callback storage
    QItemSelectionModel_MetaObject_Callback qitemselectionmodel_metaobject_callback = nullptr;
    QItemSelectionModel_Metacast_Callback qitemselectionmodel_metacast_callback = nullptr;
    QItemSelectionModel_Metacall_Callback qitemselectionmodel_metacall_callback = nullptr;
    QItemSelectionModel_SetCurrentIndex_Callback qitemselectionmodel_setcurrentindex_callback = nullptr;
    QItemSelectionModel_Select_Callback qitemselectionmodel_select_callback = nullptr;
    QItemSelectionModel_Select2_Callback qitemselectionmodel_select2_callback = nullptr;
    QItemSelectionModel_Clear_Callback qitemselectionmodel_clear_callback = nullptr;
    QItemSelectionModel_Reset_Callback qitemselectionmodel_reset_callback = nullptr;
    QItemSelectionModel_ClearCurrentIndex_Callback qitemselectionmodel_clearcurrentindex_callback = nullptr;
    QItemSelectionModel_Event_Callback qitemselectionmodel_event_callback = nullptr;
    QItemSelectionModel_EventFilter_Callback qitemselectionmodel_eventfilter_callback = nullptr;
    QItemSelectionModel_TimerEvent_Callback qitemselectionmodel_timerevent_callback = nullptr;
    QItemSelectionModel_ChildEvent_Callback qitemselectionmodel_childevent_callback = nullptr;
    QItemSelectionModel_CustomEvent_Callback qitemselectionmodel_customevent_callback = nullptr;
    QItemSelectionModel_ConnectNotify_Callback qitemselectionmodel_connectnotify_callback = nullptr;
    QItemSelectionModel_DisconnectNotify_Callback qitemselectionmodel_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QItemSelectionModel {
        using QItemSelectionModel::childEvent;
        using QItemSelectionModel::connectNotify;
        using QItemSelectionModel::customEvent;
        using QItemSelectionModel::disconnectNotify;
        using QItemSelectionModel::timerEvent;
    };

    VirtualQItemSelectionModel() : QItemSelectionModel() {};
    VirtualQItemSelectionModel(QAbstractItemModel* model, QObject* parent) : QItemSelectionModel(model, parent) {};
    VirtualQItemSelectionModel(QAbstractItemModel* model) : QItemSelectionModel(model) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qitemselectionmodel_metaobject_callback) {
            QMetaObject* callback_ret = qitemselectionmodel_metaobject_callback(this);
            return callback_ret;
        }
        return QItemSelectionModel::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qitemselectionmodel_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qitemselectionmodel_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QItemSelectionModel::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qitemselectionmodel_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qitemselectionmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QItemSelectionModel::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCurrentIndex(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
        if (qitemselectionmodel_setcurrentindex_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(command);
            qitemselectionmodel_setcurrentindex_callback(this, cbval1, cbval2);
            return;
        }
        QItemSelectionModel::setCurrentIndex(index, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual void select(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
        if (qitemselectionmodel_select_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(command);
            qitemselectionmodel_select_callback(this, cbval1, cbval2);
            return;
        }
        QItemSelectionModel::select(index, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual void select(const QItemSelection& selection, QItemSelectionModel::SelectionFlags command) override {
        if (qitemselectionmodel_select2_callback) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            int cbval2 = static_cast<int>(command);
            qitemselectionmodel_select2_callback(this, cbval1, cbval2);
            return;
        }
        QItemSelectionModel::select(selection, command);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qitemselectionmodel_clear_callback) {
            qitemselectionmodel_clear_callback(this);
            return;
        }
        QItemSelectionModel::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qitemselectionmodel_reset_callback) {
            qitemselectionmodel_reset_callback(this);
            return;
        }
        QItemSelectionModel::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void clearCurrentIndex() override {
        if (qitemselectionmodel_clearcurrentindex_callback) {
            qitemselectionmodel_clearcurrentindex_callback(this);
            return;
        }
        QItemSelectionModel::clearCurrentIndex();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qitemselectionmodel_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qitemselectionmodel_event_callback(this, cbval1);
            return callback_ret;
        }
        return QItemSelectionModel::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qitemselectionmodel_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qitemselectionmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QItemSelectionModel::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qitemselectionmodel_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qitemselectionmodel_timerevent_callback(this, cbval1);
            return;
        }
        QItemSelectionModel::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qitemselectionmodel_childevent_callback) {
            QChildEvent* cbval1 = event;
            qitemselectionmodel_childevent_callback(this, cbval1);
            return;
        }
        QItemSelectionModel::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qitemselectionmodel_customevent_callback) {
            QEvent* cbval1 = event;
            qitemselectionmodel_customevent_callback(this, cbval1);
            return;
        }
        QItemSelectionModel::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qitemselectionmodel_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qitemselectionmodel_connectnotify_callback(this, cbval1);
            return;
        }
        QItemSelectionModel::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qitemselectionmodel_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qitemselectionmodel_disconnectnotify_callback(this, cbval1);
            return;
        }
        QItemSelectionModel::disconnectNotify(signal);
    }

    // Friend functions
    friend void QItemSelectionModel_SuperTimerEvent(QItemSelectionModel* self, QTimerEvent* event);
    friend void QItemSelectionModel_SuperChildEvent(QItemSelectionModel* self, QChildEvent* event);
    friend void QItemSelectionModel_SuperCustomEvent(QItemSelectionModel* self, QEvent* event);
    friend void QItemSelectionModel_SuperConnectNotify(QItemSelectionModel* self, const QMetaMethod* signal);
    friend void QItemSelectionModel_SuperDisconnectNotify(QItemSelectionModel* self, const QMetaMethod* signal);
};

#endif
