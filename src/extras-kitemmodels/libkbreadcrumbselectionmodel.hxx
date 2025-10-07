#pragma once
#ifndef SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKBREADCRUMBSELECTIONMODEL_H
#define SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKBREADCRUMBSELECTIONMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KBreadcrumbSelectionModel so that we can call protected methods
class VirtualKBreadcrumbSelectionModel final : public KBreadcrumbSelectionModel {

  public:
    // Virtual class boolean flag
    bool isVirtualKBreadcrumbSelectionModel = true;

    // Virtual class public types (including callbacks)
    using KBreadcrumbSelectionModel_Metacall_Callback = int (*)(KBreadcrumbSelectionModel*, int, int, void**);
    using KBreadcrumbSelectionModel_Select_Callback = void (*)(KBreadcrumbSelectionModel*, QModelIndex*, int);
    using KBreadcrumbSelectionModel_Select2_Callback = void (*)(KBreadcrumbSelectionModel*, QItemSelection*, int);
    using KBreadcrumbSelectionModel_SetCurrentIndex_Callback = void (*)(KBreadcrumbSelectionModel*, QModelIndex*, int);
    using KBreadcrumbSelectionModel_Clear_Callback = void (*)();
    using KBreadcrumbSelectionModel_Reset_Callback = void (*)();
    using KBreadcrumbSelectionModel_ClearCurrentIndex_Callback = void (*)();
    using KBreadcrumbSelectionModel_Event_Callback = bool (*)(KBreadcrumbSelectionModel*, QEvent*);
    using KBreadcrumbSelectionModel_EventFilter_Callback = bool (*)(KBreadcrumbSelectionModel*, QObject*, QEvent*);
    using KBreadcrumbSelectionModel_TimerEvent_Callback = void (*)(KBreadcrumbSelectionModel*, QTimerEvent*);
    using KBreadcrumbSelectionModel_ChildEvent_Callback = void (*)(KBreadcrumbSelectionModel*, QChildEvent*);
    using KBreadcrumbSelectionModel_CustomEvent_Callback = void (*)(KBreadcrumbSelectionModel*, QEvent*);
    using KBreadcrumbSelectionModel_ConnectNotify_Callback = void (*)(KBreadcrumbSelectionModel*, QMetaMethod*);
    using KBreadcrumbSelectionModel_DisconnectNotify_Callback = void (*)(KBreadcrumbSelectionModel*, QMetaMethod*);
    using KBreadcrumbSelectionModel_EmitSelectionChanged_Callback = void (*)(KBreadcrumbSelectionModel*, QItemSelection*, QItemSelection*);
    using KBreadcrumbSelectionModel_Sender_Callback = QObject* (*)();
    using KBreadcrumbSelectionModel_SenderSignalIndex_Callback = int (*)();
    using KBreadcrumbSelectionModel_Receivers_Callback = int (*)(const KBreadcrumbSelectionModel*, const char*);
    using KBreadcrumbSelectionModel_IsSignalConnected_Callback = bool (*)(const KBreadcrumbSelectionModel*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    KBreadcrumbSelectionModel_EmitSelectionChanged_Callback kbreadcrumbselectionmodel_emitselectionchanged_callback = nullptr;
    KBreadcrumbSelectionModel_Sender_Callback kbreadcrumbselectionmodel_sender_callback = nullptr;
    KBreadcrumbSelectionModel_SenderSignalIndex_Callback kbreadcrumbselectionmodel_sendersignalindex_callback = nullptr;
    KBreadcrumbSelectionModel_Receivers_Callback kbreadcrumbselectionmodel_receivers_callback = nullptr;
    KBreadcrumbSelectionModel_IsSignalConnected_Callback kbreadcrumbselectionmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kbreadcrumbselectionmodel_metacall_isbase = false;
    mutable bool kbreadcrumbselectionmodel_select_isbase = false;
    mutable bool kbreadcrumbselectionmodel_select2_isbase = false;
    mutable bool kbreadcrumbselectionmodel_setcurrentindex_isbase = false;
    mutable bool kbreadcrumbselectionmodel_clear_isbase = false;
    mutable bool kbreadcrumbselectionmodel_reset_isbase = false;
    mutable bool kbreadcrumbselectionmodel_clearcurrentindex_isbase = false;
    mutable bool kbreadcrumbselectionmodel_event_isbase = false;
    mutable bool kbreadcrumbselectionmodel_eventfilter_isbase = false;
    mutable bool kbreadcrumbselectionmodel_timerevent_isbase = false;
    mutable bool kbreadcrumbselectionmodel_childevent_isbase = false;
    mutable bool kbreadcrumbselectionmodel_customevent_isbase = false;
    mutable bool kbreadcrumbselectionmodel_connectnotify_isbase = false;
    mutable bool kbreadcrumbselectionmodel_disconnectnotify_isbase = false;
    mutable bool kbreadcrumbselectionmodel_emitselectionchanged_isbase = false;
    mutable bool kbreadcrumbselectionmodel_sender_isbase = false;
    mutable bool kbreadcrumbselectionmodel_sendersignalindex_isbase = false;
    mutable bool kbreadcrumbselectionmodel_receivers_isbase = false;
    mutable bool kbreadcrumbselectionmodel_issignalconnected_isbase = false;

  public:
    VirtualKBreadcrumbSelectionModel(QItemSelectionModel* selectionModel) : KBreadcrumbSelectionModel(selectionModel) {};
    VirtualKBreadcrumbSelectionModel(QItemSelectionModel* selectionModel, KBreadcrumbSelectionModel::BreadcrumbTarget target) : KBreadcrumbSelectionModel(selectionModel, target) {};
    VirtualKBreadcrumbSelectionModel(QItemSelectionModel* selectionModel, QObject* parent) : KBreadcrumbSelectionModel(selectionModel, parent) {};
    VirtualKBreadcrumbSelectionModel(QItemSelectionModel* selectionModel, KBreadcrumbSelectionModel::BreadcrumbTarget target, QObject* parent) : KBreadcrumbSelectionModel(selectionModel, target, parent) {};

    ~VirtualKBreadcrumbSelectionModel() {
        kbreadcrumbselectionmodel_metacall_callback = nullptr;
        kbreadcrumbselectionmodel_select_callback = nullptr;
        kbreadcrumbselectionmodel_select2_callback = nullptr;
        kbreadcrumbselectionmodel_setcurrentindex_callback = nullptr;
        kbreadcrumbselectionmodel_clear_callback = nullptr;
        kbreadcrumbselectionmodel_reset_callback = nullptr;
        kbreadcrumbselectionmodel_clearcurrentindex_callback = nullptr;
        kbreadcrumbselectionmodel_event_callback = nullptr;
        kbreadcrumbselectionmodel_eventfilter_callback = nullptr;
        kbreadcrumbselectionmodel_timerevent_callback = nullptr;
        kbreadcrumbselectionmodel_childevent_callback = nullptr;
        kbreadcrumbselectionmodel_customevent_callback = nullptr;
        kbreadcrumbselectionmodel_connectnotify_callback = nullptr;
        kbreadcrumbselectionmodel_disconnectnotify_callback = nullptr;
        kbreadcrumbselectionmodel_emitselectionchanged_callback = nullptr;
        kbreadcrumbselectionmodel_sender_callback = nullptr;
        kbreadcrumbselectionmodel_sendersignalindex_callback = nullptr;
        kbreadcrumbselectionmodel_receivers_callback = nullptr;
        kbreadcrumbselectionmodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKBreadcrumbSelectionModel_Metacall_Callback(KBreadcrumbSelectionModel_Metacall_Callback cb) { kbreadcrumbselectionmodel_metacall_callback = cb; }
    inline void setKBreadcrumbSelectionModel_Select_Callback(KBreadcrumbSelectionModel_Select_Callback cb) { kbreadcrumbselectionmodel_select_callback = cb; }
    inline void setKBreadcrumbSelectionModel_Select2_Callback(KBreadcrumbSelectionModel_Select2_Callback cb) { kbreadcrumbselectionmodel_select2_callback = cb; }
    inline void setKBreadcrumbSelectionModel_SetCurrentIndex_Callback(KBreadcrumbSelectionModel_SetCurrentIndex_Callback cb) { kbreadcrumbselectionmodel_setcurrentindex_callback = cb; }
    inline void setKBreadcrumbSelectionModel_Clear_Callback(KBreadcrumbSelectionModel_Clear_Callback cb) { kbreadcrumbselectionmodel_clear_callback = cb; }
    inline void setKBreadcrumbSelectionModel_Reset_Callback(KBreadcrumbSelectionModel_Reset_Callback cb) { kbreadcrumbselectionmodel_reset_callback = cb; }
    inline void setKBreadcrumbSelectionModel_ClearCurrentIndex_Callback(KBreadcrumbSelectionModel_ClearCurrentIndex_Callback cb) { kbreadcrumbselectionmodel_clearcurrentindex_callback = cb; }
    inline void setKBreadcrumbSelectionModel_Event_Callback(KBreadcrumbSelectionModel_Event_Callback cb) { kbreadcrumbselectionmodel_event_callback = cb; }
    inline void setKBreadcrumbSelectionModel_EventFilter_Callback(KBreadcrumbSelectionModel_EventFilter_Callback cb) { kbreadcrumbselectionmodel_eventfilter_callback = cb; }
    inline void setKBreadcrumbSelectionModel_TimerEvent_Callback(KBreadcrumbSelectionModel_TimerEvent_Callback cb) { kbreadcrumbselectionmodel_timerevent_callback = cb; }
    inline void setKBreadcrumbSelectionModel_ChildEvent_Callback(KBreadcrumbSelectionModel_ChildEvent_Callback cb) { kbreadcrumbselectionmodel_childevent_callback = cb; }
    inline void setKBreadcrumbSelectionModel_CustomEvent_Callback(KBreadcrumbSelectionModel_CustomEvent_Callback cb) { kbreadcrumbselectionmodel_customevent_callback = cb; }
    inline void setKBreadcrumbSelectionModel_ConnectNotify_Callback(KBreadcrumbSelectionModel_ConnectNotify_Callback cb) { kbreadcrumbselectionmodel_connectnotify_callback = cb; }
    inline void setKBreadcrumbSelectionModel_DisconnectNotify_Callback(KBreadcrumbSelectionModel_DisconnectNotify_Callback cb) { kbreadcrumbselectionmodel_disconnectnotify_callback = cb; }
    inline void setKBreadcrumbSelectionModel_EmitSelectionChanged_Callback(KBreadcrumbSelectionModel_EmitSelectionChanged_Callback cb) { kbreadcrumbselectionmodel_emitselectionchanged_callback = cb; }
    inline void setKBreadcrumbSelectionModel_Sender_Callback(KBreadcrumbSelectionModel_Sender_Callback cb) { kbreadcrumbselectionmodel_sender_callback = cb; }
    inline void setKBreadcrumbSelectionModel_SenderSignalIndex_Callback(KBreadcrumbSelectionModel_SenderSignalIndex_Callback cb) { kbreadcrumbselectionmodel_sendersignalindex_callback = cb; }
    inline void setKBreadcrumbSelectionModel_Receivers_Callback(KBreadcrumbSelectionModel_Receivers_Callback cb) { kbreadcrumbselectionmodel_receivers_callback = cb; }
    inline void setKBreadcrumbSelectionModel_IsSignalConnected_Callback(KBreadcrumbSelectionModel_IsSignalConnected_Callback cb) { kbreadcrumbselectionmodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKBreadcrumbSelectionModel_Metacall_IsBase(bool value) const { kbreadcrumbselectionmodel_metacall_isbase = value; }
    inline void setKBreadcrumbSelectionModel_Select_IsBase(bool value) const { kbreadcrumbselectionmodel_select_isbase = value; }
    inline void setKBreadcrumbSelectionModel_Select2_IsBase(bool value) const { kbreadcrumbselectionmodel_select2_isbase = value; }
    inline void setKBreadcrumbSelectionModel_SetCurrentIndex_IsBase(bool value) const { kbreadcrumbselectionmodel_setcurrentindex_isbase = value; }
    inline void setKBreadcrumbSelectionModel_Clear_IsBase(bool value) const { kbreadcrumbselectionmodel_clear_isbase = value; }
    inline void setKBreadcrumbSelectionModel_Reset_IsBase(bool value) const { kbreadcrumbselectionmodel_reset_isbase = value; }
    inline void setKBreadcrumbSelectionModel_ClearCurrentIndex_IsBase(bool value) const { kbreadcrumbselectionmodel_clearcurrentindex_isbase = value; }
    inline void setKBreadcrumbSelectionModel_Event_IsBase(bool value) const { kbreadcrumbselectionmodel_event_isbase = value; }
    inline void setKBreadcrumbSelectionModel_EventFilter_IsBase(bool value) const { kbreadcrumbselectionmodel_eventfilter_isbase = value; }
    inline void setKBreadcrumbSelectionModel_TimerEvent_IsBase(bool value) const { kbreadcrumbselectionmodel_timerevent_isbase = value; }
    inline void setKBreadcrumbSelectionModel_ChildEvent_IsBase(bool value) const { kbreadcrumbselectionmodel_childevent_isbase = value; }
    inline void setKBreadcrumbSelectionModel_CustomEvent_IsBase(bool value) const { kbreadcrumbselectionmodel_customevent_isbase = value; }
    inline void setKBreadcrumbSelectionModel_ConnectNotify_IsBase(bool value) const { kbreadcrumbselectionmodel_connectnotify_isbase = value; }
    inline void setKBreadcrumbSelectionModel_DisconnectNotify_IsBase(bool value) const { kbreadcrumbselectionmodel_disconnectnotify_isbase = value; }
    inline void setKBreadcrumbSelectionModel_EmitSelectionChanged_IsBase(bool value) const { kbreadcrumbselectionmodel_emitselectionchanged_isbase = value; }
    inline void setKBreadcrumbSelectionModel_Sender_IsBase(bool value) const { kbreadcrumbselectionmodel_sender_isbase = value; }
    inline void setKBreadcrumbSelectionModel_SenderSignalIndex_IsBase(bool value) const { kbreadcrumbselectionmodel_sendersignalindex_isbase = value; }
    inline void setKBreadcrumbSelectionModel_Receivers_IsBase(bool value) const { kbreadcrumbselectionmodel_receivers_isbase = value; }
    inline void setKBreadcrumbSelectionModel_IsSignalConnected_IsBase(bool value) const { kbreadcrumbselectionmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kbreadcrumbselectionmodel_metacall_isbase) {
            kbreadcrumbselectionmodel_metacall_isbase = false;
            return KBreadcrumbSelectionModel::qt_metacall(param1, param2, param3);
        } else if (kbreadcrumbselectionmodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kbreadcrumbselectionmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KBreadcrumbSelectionModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void select(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
        if (kbreadcrumbselectionmodel_select_isbase) {
            kbreadcrumbselectionmodel_select_isbase = false;
            KBreadcrumbSelectionModel::select(index, command);
        } else if (kbreadcrumbselectionmodel_select_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(command);

            kbreadcrumbselectionmodel_select_callback(this, cbval1, cbval2);
        } else {
            KBreadcrumbSelectionModel::select(index, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void select(const QItemSelection& selection, QItemSelectionModel::SelectionFlags command) override {
        if (kbreadcrumbselectionmodel_select2_isbase) {
            kbreadcrumbselectionmodel_select2_isbase = false;
            KBreadcrumbSelectionModel::select(selection, command);
        } else if (kbreadcrumbselectionmodel_select2_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            int cbval2 = static_cast<int>(command);

            kbreadcrumbselectionmodel_select2_callback(this, cbval1, cbval2);
        } else {
            KBreadcrumbSelectionModel::select(selection, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCurrentIndex(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
        if (kbreadcrumbselectionmodel_setcurrentindex_isbase) {
            kbreadcrumbselectionmodel_setcurrentindex_isbase = false;
            KBreadcrumbSelectionModel::setCurrentIndex(index, command);
        } else if (kbreadcrumbselectionmodel_setcurrentindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(command);

            kbreadcrumbselectionmodel_setcurrentindex_callback(this, cbval1, cbval2);
        } else {
            KBreadcrumbSelectionModel::setCurrentIndex(index, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (kbreadcrumbselectionmodel_clear_isbase) {
            kbreadcrumbselectionmodel_clear_isbase = false;
            KBreadcrumbSelectionModel::clear();
        } else if (kbreadcrumbselectionmodel_clear_callback != nullptr) {
            kbreadcrumbselectionmodel_clear_callback();
        } else {
            KBreadcrumbSelectionModel::clear();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (kbreadcrumbselectionmodel_reset_isbase) {
            kbreadcrumbselectionmodel_reset_isbase = false;
            KBreadcrumbSelectionModel::reset();
        } else if (kbreadcrumbselectionmodel_reset_callback != nullptr) {
            kbreadcrumbselectionmodel_reset_callback();
        } else {
            KBreadcrumbSelectionModel::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clearCurrentIndex() override {
        if (kbreadcrumbselectionmodel_clearcurrentindex_isbase) {
            kbreadcrumbselectionmodel_clearcurrentindex_isbase = false;
            KBreadcrumbSelectionModel::clearCurrentIndex();
        } else if (kbreadcrumbselectionmodel_clearcurrentindex_callback != nullptr) {
            kbreadcrumbselectionmodel_clearcurrentindex_callback();
        } else {
            KBreadcrumbSelectionModel::clearCurrentIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kbreadcrumbselectionmodel_event_isbase) {
            kbreadcrumbselectionmodel_event_isbase = false;
            return KBreadcrumbSelectionModel::event(event);
        } else if (kbreadcrumbselectionmodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kbreadcrumbselectionmodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBreadcrumbSelectionModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kbreadcrumbselectionmodel_eventfilter_isbase) {
            kbreadcrumbselectionmodel_eventfilter_isbase = false;
            return KBreadcrumbSelectionModel::eventFilter(watched, event);
        } else if (kbreadcrumbselectionmodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kbreadcrumbselectionmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KBreadcrumbSelectionModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kbreadcrumbselectionmodel_timerevent_isbase) {
            kbreadcrumbselectionmodel_timerevent_isbase = false;
            KBreadcrumbSelectionModel::timerEvent(event);
        } else if (kbreadcrumbselectionmodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kbreadcrumbselectionmodel_timerevent_callback(this, cbval1);
        } else {
            KBreadcrumbSelectionModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kbreadcrumbselectionmodel_childevent_isbase) {
            kbreadcrumbselectionmodel_childevent_isbase = false;
            KBreadcrumbSelectionModel::childEvent(event);
        } else if (kbreadcrumbselectionmodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kbreadcrumbselectionmodel_childevent_callback(this, cbval1);
        } else {
            KBreadcrumbSelectionModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kbreadcrumbselectionmodel_customevent_isbase) {
            kbreadcrumbselectionmodel_customevent_isbase = false;
            KBreadcrumbSelectionModel::customEvent(event);
        } else if (kbreadcrumbselectionmodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kbreadcrumbselectionmodel_customevent_callback(this, cbval1);
        } else {
            KBreadcrumbSelectionModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kbreadcrumbselectionmodel_connectnotify_isbase) {
            kbreadcrumbselectionmodel_connectnotify_isbase = false;
            KBreadcrumbSelectionModel::connectNotify(signal);
        } else if (kbreadcrumbselectionmodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kbreadcrumbselectionmodel_connectnotify_callback(this, cbval1);
        } else {
            KBreadcrumbSelectionModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kbreadcrumbselectionmodel_disconnectnotify_isbase) {
            kbreadcrumbselectionmodel_disconnectnotify_isbase = false;
            KBreadcrumbSelectionModel::disconnectNotify(signal);
        } else if (kbreadcrumbselectionmodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kbreadcrumbselectionmodel_disconnectnotify_callback(this, cbval1);
        } else {
            KBreadcrumbSelectionModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitSelectionChanged(const QItemSelection& newSelection, const QItemSelection& oldSelection) {
        if (kbreadcrumbselectionmodel_emitselectionchanged_isbase) {
            kbreadcrumbselectionmodel_emitselectionchanged_isbase = false;
            KBreadcrumbSelectionModel::emitSelectionChanged(newSelection, oldSelection);
        } else if (kbreadcrumbselectionmodel_emitselectionchanged_callback != nullptr) {
            const QItemSelection& newSelection_ret = newSelection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&newSelection_ret);
            const QItemSelection& oldSelection_ret = oldSelection;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&oldSelection_ret);

            kbreadcrumbselectionmodel_emitselectionchanged_callback(this, cbval1, cbval2);
        } else {
            KBreadcrumbSelectionModel::emitSelectionChanged(newSelection, oldSelection);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kbreadcrumbselectionmodel_sender_isbase) {
            kbreadcrumbselectionmodel_sender_isbase = false;
            return KBreadcrumbSelectionModel::sender();
        } else if (kbreadcrumbselectionmodel_sender_callback != nullptr) {
            QObject* callback_ret = kbreadcrumbselectionmodel_sender_callback();
            return callback_ret;
        } else {
            return KBreadcrumbSelectionModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kbreadcrumbselectionmodel_sendersignalindex_isbase) {
            kbreadcrumbselectionmodel_sendersignalindex_isbase = false;
            return KBreadcrumbSelectionModel::senderSignalIndex();
        } else if (kbreadcrumbselectionmodel_sendersignalindex_callback != nullptr) {
            int callback_ret = kbreadcrumbselectionmodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KBreadcrumbSelectionModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kbreadcrumbselectionmodel_receivers_isbase) {
            kbreadcrumbselectionmodel_receivers_isbase = false;
            return KBreadcrumbSelectionModel::receivers(signal);
        } else if (kbreadcrumbselectionmodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kbreadcrumbselectionmodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KBreadcrumbSelectionModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kbreadcrumbselectionmodel_issignalconnected_isbase) {
            kbreadcrumbselectionmodel_issignalconnected_isbase = false;
            return KBreadcrumbSelectionModel::isSignalConnected(signal);
        } else if (kbreadcrumbselectionmodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kbreadcrumbselectionmodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KBreadcrumbSelectionModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KBreadcrumbSelectionModel_TimerEvent(KBreadcrumbSelectionModel* self, QTimerEvent* event);
    friend void KBreadcrumbSelectionModel_QBaseTimerEvent(KBreadcrumbSelectionModel* self, QTimerEvent* event);
    friend void KBreadcrumbSelectionModel_ChildEvent(KBreadcrumbSelectionModel* self, QChildEvent* event);
    friend void KBreadcrumbSelectionModel_QBaseChildEvent(KBreadcrumbSelectionModel* self, QChildEvent* event);
    friend void KBreadcrumbSelectionModel_CustomEvent(KBreadcrumbSelectionModel* self, QEvent* event);
    friend void KBreadcrumbSelectionModel_QBaseCustomEvent(KBreadcrumbSelectionModel* self, QEvent* event);
    friend void KBreadcrumbSelectionModel_ConnectNotify(KBreadcrumbSelectionModel* self, const QMetaMethod* signal);
    friend void KBreadcrumbSelectionModel_QBaseConnectNotify(KBreadcrumbSelectionModel* self, const QMetaMethod* signal);
    friend void KBreadcrumbSelectionModel_DisconnectNotify(KBreadcrumbSelectionModel* self, const QMetaMethod* signal);
    friend void KBreadcrumbSelectionModel_QBaseDisconnectNotify(KBreadcrumbSelectionModel* self, const QMetaMethod* signal);
    friend void KBreadcrumbSelectionModel_EmitSelectionChanged(KBreadcrumbSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection);
    friend void KBreadcrumbSelectionModel_QBaseEmitSelectionChanged(KBreadcrumbSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection);
    friend QObject* KBreadcrumbSelectionModel_Sender(const KBreadcrumbSelectionModel* self);
    friend QObject* KBreadcrumbSelectionModel_QBaseSender(const KBreadcrumbSelectionModel* self);
    friend int KBreadcrumbSelectionModel_SenderSignalIndex(const KBreadcrumbSelectionModel* self);
    friend int KBreadcrumbSelectionModel_QBaseSenderSignalIndex(const KBreadcrumbSelectionModel* self);
    friend int KBreadcrumbSelectionModel_Receivers(const KBreadcrumbSelectionModel* self, const char* signal);
    friend int KBreadcrumbSelectionModel_QBaseReceivers(const KBreadcrumbSelectionModel* self, const char* signal);
    friend bool KBreadcrumbSelectionModel_IsSignalConnected(const KBreadcrumbSelectionModel* self, const QMetaMethod* signal);
    friend bool KBreadcrumbSelectionModel_QBaseIsSignalConnected(const KBreadcrumbSelectionModel* self, const QMetaMethod* signal);
};

#endif
