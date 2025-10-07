#pragma once
#ifndef SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKLINKITEMSELECTIONMODEL_H
#define SRC_EXTRAS_KITEMMODELSC_LIBVIRTUALKLINKITEMSELECTIONMODEL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KLinkItemSelectionModel so that we can call protected methods
class VirtualKLinkItemSelectionModel final : public KLinkItemSelectionModel {

  public:
    // Virtual class boolean flag
    bool isVirtualKLinkItemSelectionModel = true;

    // Virtual class public types (including callbacks)
    using KLinkItemSelectionModel_Metacall_Callback = int (*)(KLinkItemSelectionModel*, int, int, void**);
    using KLinkItemSelectionModel_Select_Callback = void (*)(KLinkItemSelectionModel*, QModelIndex*, int);
    using KLinkItemSelectionModel_Select2_Callback = void (*)(KLinkItemSelectionModel*, QItemSelection*, int);
    using KLinkItemSelectionModel_SetCurrentIndex_Callback = void (*)(KLinkItemSelectionModel*, QModelIndex*, int);
    using KLinkItemSelectionModel_Clear_Callback = void (*)();
    using KLinkItemSelectionModel_Reset_Callback = void (*)();
    using KLinkItemSelectionModel_ClearCurrentIndex_Callback = void (*)();
    using KLinkItemSelectionModel_Event_Callback = bool (*)(KLinkItemSelectionModel*, QEvent*);
    using KLinkItemSelectionModel_EventFilter_Callback = bool (*)(KLinkItemSelectionModel*, QObject*, QEvent*);
    using KLinkItemSelectionModel_TimerEvent_Callback = void (*)(KLinkItemSelectionModel*, QTimerEvent*);
    using KLinkItemSelectionModel_ChildEvent_Callback = void (*)(KLinkItemSelectionModel*, QChildEvent*);
    using KLinkItemSelectionModel_CustomEvent_Callback = void (*)(KLinkItemSelectionModel*, QEvent*);
    using KLinkItemSelectionModel_ConnectNotify_Callback = void (*)(KLinkItemSelectionModel*, QMetaMethod*);
    using KLinkItemSelectionModel_DisconnectNotify_Callback = void (*)(KLinkItemSelectionModel*, QMetaMethod*);
    using KLinkItemSelectionModel_EmitSelectionChanged_Callback = void (*)(KLinkItemSelectionModel*, QItemSelection*, QItemSelection*);
    using KLinkItemSelectionModel_Sender_Callback = QObject* (*)();
    using KLinkItemSelectionModel_SenderSignalIndex_Callback = int (*)();
    using KLinkItemSelectionModel_Receivers_Callback = int (*)(const KLinkItemSelectionModel*, const char*);
    using KLinkItemSelectionModel_IsSignalConnected_Callback = bool (*)(const KLinkItemSelectionModel*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    KLinkItemSelectionModel_EmitSelectionChanged_Callback klinkitemselectionmodel_emitselectionchanged_callback = nullptr;
    KLinkItemSelectionModel_Sender_Callback klinkitemselectionmodel_sender_callback = nullptr;
    KLinkItemSelectionModel_SenderSignalIndex_Callback klinkitemselectionmodel_sendersignalindex_callback = nullptr;
    KLinkItemSelectionModel_Receivers_Callback klinkitemselectionmodel_receivers_callback = nullptr;
    KLinkItemSelectionModel_IsSignalConnected_Callback klinkitemselectionmodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool klinkitemselectionmodel_metacall_isbase = false;
    mutable bool klinkitemselectionmodel_select_isbase = false;
    mutable bool klinkitemselectionmodel_select2_isbase = false;
    mutable bool klinkitemselectionmodel_setcurrentindex_isbase = false;
    mutable bool klinkitemselectionmodel_clear_isbase = false;
    mutable bool klinkitemselectionmodel_reset_isbase = false;
    mutable bool klinkitemselectionmodel_clearcurrentindex_isbase = false;
    mutable bool klinkitemselectionmodel_event_isbase = false;
    mutable bool klinkitemselectionmodel_eventfilter_isbase = false;
    mutable bool klinkitemselectionmodel_timerevent_isbase = false;
    mutable bool klinkitemselectionmodel_childevent_isbase = false;
    mutable bool klinkitemselectionmodel_customevent_isbase = false;
    mutable bool klinkitemselectionmodel_connectnotify_isbase = false;
    mutable bool klinkitemselectionmodel_disconnectnotify_isbase = false;
    mutable bool klinkitemselectionmodel_emitselectionchanged_isbase = false;
    mutable bool klinkitemselectionmodel_sender_isbase = false;
    mutable bool klinkitemselectionmodel_sendersignalindex_isbase = false;
    mutable bool klinkitemselectionmodel_receivers_isbase = false;
    mutable bool klinkitemselectionmodel_issignalconnected_isbase = false;

  public:
    VirtualKLinkItemSelectionModel(QAbstractItemModel* targetModel, QItemSelectionModel* linkedItemSelectionModel) : KLinkItemSelectionModel(targetModel, linkedItemSelectionModel) {};
    VirtualKLinkItemSelectionModel() : KLinkItemSelectionModel() {};
    VirtualKLinkItemSelectionModel(QAbstractItemModel* targetModel, QItemSelectionModel* linkedItemSelectionModel, QObject* parent) : KLinkItemSelectionModel(targetModel, linkedItemSelectionModel, parent) {};
    VirtualKLinkItemSelectionModel(QObject* parent) : KLinkItemSelectionModel(parent) {};

    ~VirtualKLinkItemSelectionModel() {
        klinkitemselectionmodel_metacall_callback = nullptr;
        klinkitemselectionmodel_select_callback = nullptr;
        klinkitemselectionmodel_select2_callback = nullptr;
        klinkitemselectionmodel_setcurrentindex_callback = nullptr;
        klinkitemselectionmodel_clear_callback = nullptr;
        klinkitemselectionmodel_reset_callback = nullptr;
        klinkitemselectionmodel_clearcurrentindex_callback = nullptr;
        klinkitemselectionmodel_event_callback = nullptr;
        klinkitemselectionmodel_eventfilter_callback = nullptr;
        klinkitemselectionmodel_timerevent_callback = nullptr;
        klinkitemselectionmodel_childevent_callback = nullptr;
        klinkitemselectionmodel_customevent_callback = nullptr;
        klinkitemselectionmodel_connectnotify_callback = nullptr;
        klinkitemselectionmodel_disconnectnotify_callback = nullptr;
        klinkitemselectionmodel_emitselectionchanged_callback = nullptr;
        klinkitemselectionmodel_sender_callback = nullptr;
        klinkitemselectionmodel_sendersignalindex_callback = nullptr;
        klinkitemselectionmodel_receivers_callback = nullptr;
        klinkitemselectionmodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKLinkItemSelectionModel_Metacall_Callback(KLinkItemSelectionModel_Metacall_Callback cb) { klinkitemselectionmodel_metacall_callback = cb; }
    inline void setKLinkItemSelectionModel_Select_Callback(KLinkItemSelectionModel_Select_Callback cb) { klinkitemselectionmodel_select_callback = cb; }
    inline void setKLinkItemSelectionModel_Select2_Callback(KLinkItemSelectionModel_Select2_Callback cb) { klinkitemselectionmodel_select2_callback = cb; }
    inline void setKLinkItemSelectionModel_SetCurrentIndex_Callback(KLinkItemSelectionModel_SetCurrentIndex_Callback cb) { klinkitemselectionmodel_setcurrentindex_callback = cb; }
    inline void setKLinkItemSelectionModel_Clear_Callback(KLinkItemSelectionModel_Clear_Callback cb) { klinkitemselectionmodel_clear_callback = cb; }
    inline void setKLinkItemSelectionModel_Reset_Callback(KLinkItemSelectionModel_Reset_Callback cb) { klinkitemselectionmodel_reset_callback = cb; }
    inline void setKLinkItemSelectionModel_ClearCurrentIndex_Callback(KLinkItemSelectionModel_ClearCurrentIndex_Callback cb) { klinkitemselectionmodel_clearcurrentindex_callback = cb; }
    inline void setKLinkItemSelectionModel_Event_Callback(KLinkItemSelectionModel_Event_Callback cb) { klinkitemselectionmodel_event_callback = cb; }
    inline void setKLinkItemSelectionModel_EventFilter_Callback(KLinkItemSelectionModel_EventFilter_Callback cb) { klinkitemselectionmodel_eventfilter_callback = cb; }
    inline void setKLinkItemSelectionModel_TimerEvent_Callback(KLinkItemSelectionModel_TimerEvent_Callback cb) { klinkitemselectionmodel_timerevent_callback = cb; }
    inline void setKLinkItemSelectionModel_ChildEvent_Callback(KLinkItemSelectionModel_ChildEvent_Callback cb) { klinkitemselectionmodel_childevent_callback = cb; }
    inline void setKLinkItemSelectionModel_CustomEvent_Callback(KLinkItemSelectionModel_CustomEvent_Callback cb) { klinkitemselectionmodel_customevent_callback = cb; }
    inline void setKLinkItemSelectionModel_ConnectNotify_Callback(KLinkItemSelectionModel_ConnectNotify_Callback cb) { klinkitemselectionmodel_connectnotify_callback = cb; }
    inline void setKLinkItemSelectionModel_DisconnectNotify_Callback(KLinkItemSelectionModel_DisconnectNotify_Callback cb) { klinkitemselectionmodel_disconnectnotify_callback = cb; }
    inline void setKLinkItemSelectionModel_EmitSelectionChanged_Callback(KLinkItemSelectionModel_EmitSelectionChanged_Callback cb) { klinkitemselectionmodel_emitselectionchanged_callback = cb; }
    inline void setKLinkItemSelectionModel_Sender_Callback(KLinkItemSelectionModel_Sender_Callback cb) { klinkitemselectionmodel_sender_callback = cb; }
    inline void setKLinkItemSelectionModel_SenderSignalIndex_Callback(KLinkItemSelectionModel_SenderSignalIndex_Callback cb) { klinkitemselectionmodel_sendersignalindex_callback = cb; }
    inline void setKLinkItemSelectionModel_Receivers_Callback(KLinkItemSelectionModel_Receivers_Callback cb) { klinkitemselectionmodel_receivers_callback = cb; }
    inline void setKLinkItemSelectionModel_IsSignalConnected_Callback(KLinkItemSelectionModel_IsSignalConnected_Callback cb) { klinkitemselectionmodel_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKLinkItemSelectionModel_Metacall_IsBase(bool value) const { klinkitemselectionmodel_metacall_isbase = value; }
    inline void setKLinkItemSelectionModel_Select_IsBase(bool value) const { klinkitemselectionmodel_select_isbase = value; }
    inline void setKLinkItemSelectionModel_Select2_IsBase(bool value) const { klinkitemselectionmodel_select2_isbase = value; }
    inline void setKLinkItemSelectionModel_SetCurrentIndex_IsBase(bool value) const { klinkitemselectionmodel_setcurrentindex_isbase = value; }
    inline void setKLinkItemSelectionModel_Clear_IsBase(bool value) const { klinkitemselectionmodel_clear_isbase = value; }
    inline void setKLinkItemSelectionModel_Reset_IsBase(bool value) const { klinkitemselectionmodel_reset_isbase = value; }
    inline void setKLinkItemSelectionModel_ClearCurrentIndex_IsBase(bool value) const { klinkitemselectionmodel_clearcurrentindex_isbase = value; }
    inline void setKLinkItemSelectionModel_Event_IsBase(bool value) const { klinkitemselectionmodel_event_isbase = value; }
    inline void setKLinkItemSelectionModel_EventFilter_IsBase(bool value) const { klinkitemselectionmodel_eventfilter_isbase = value; }
    inline void setKLinkItemSelectionModel_TimerEvent_IsBase(bool value) const { klinkitemselectionmodel_timerevent_isbase = value; }
    inline void setKLinkItemSelectionModel_ChildEvent_IsBase(bool value) const { klinkitemselectionmodel_childevent_isbase = value; }
    inline void setKLinkItemSelectionModel_CustomEvent_IsBase(bool value) const { klinkitemselectionmodel_customevent_isbase = value; }
    inline void setKLinkItemSelectionModel_ConnectNotify_IsBase(bool value) const { klinkitemselectionmodel_connectnotify_isbase = value; }
    inline void setKLinkItemSelectionModel_DisconnectNotify_IsBase(bool value) const { klinkitemselectionmodel_disconnectnotify_isbase = value; }
    inline void setKLinkItemSelectionModel_EmitSelectionChanged_IsBase(bool value) const { klinkitemselectionmodel_emitselectionchanged_isbase = value; }
    inline void setKLinkItemSelectionModel_Sender_IsBase(bool value) const { klinkitemselectionmodel_sender_isbase = value; }
    inline void setKLinkItemSelectionModel_SenderSignalIndex_IsBase(bool value) const { klinkitemselectionmodel_sendersignalindex_isbase = value; }
    inline void setKLinkItemSelectionModel_Receivers_IsBase(bool value) const { klinkitemselectionmodel_receivers_isbase = value; }
    inline void setKLinkItemSelectionModel_IsSignalConnected_IsBase(bool value) const { klinkitemselectionmodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (klinkitemselectionmodel_metacall_isbase) {
            klinkitemselectionmodel_metacall_isbase = false;
            return KLinkItemSelectionModel::qt_metacall(param1, param2, param3);
        } else if (klinkitemselectionmodel_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = klinkitemselectionmodel_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KLinkItemSelectionModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void select(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
        if (klinkitemselectionmodel_select_isbase) {
            klinkitemselectionmodel_select_isbase = false;
            KLinkItemSelectionModel::select(index, command);
        } else if (klinkitemselectionmodel_select_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(command);

            klinkitemselectionmodel_select_callback(this, cbval1, cbval2);
        } else {
            KLinkItemSelectionModel::select(index, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void select(const QItemSelection& selection, QItemSelectionModel::SelectionFlags command) override {
        if (klinkitemselectionmodel_select2_isbase) {
            klinkitemselectionmodel_select2_isbase = false;
            KLinkItemSelectionModel::select(selection, command);
        } else if (klinkitemselectionmodel_select2_callback != nullptr) {
            const QItemSelection& selection_ret = selection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&selection_ret);
            int cbval2 = static_cast<int>(command);

            klinkitemselectionmodel_select2_callback(this, cbval1, cbval2);
        } else {
            KLinkItemSelectionModel::select(selection, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCurrentIndex(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
        if (klinkitemselectionmodel_setcurrentindex_isbase) {
            klinkitemselectionmodel_setcurrentindex_isbase = false;
            KLinkItemSelectionModel::setCurrentIndex(index, command);
        } else if (klinkitemselectionmodel_setcurrentindex_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = static_cast<int>(command);

            klinkitemselectionmodel_setcurrentindex_callback(this, cbval1, cbval2);
        } else {
            KLinkItemSelectionModel::setCurrentIndex(index, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (klinkitemselectionmodel_clear_isbase) {
            klinkitemselectionmodel_clear_isbase = false;
            KLinkItemSelectionModel::clear();
        } else if (klinkitemselectionmodel_clear_callback != nullptr) {
            klinkitemselectionmodel_clear_callback();
        } else {
            KLinkItemSelectionModel::clear();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (klinkitemselectionmodel_reset_isbase) {
            klinkitemselectionmodel_reset_isbase = false;
            KLinkItemSelectionModel::reset();
        } else if (klinkitemselectionmodel_reset_callback != nullptr) {
            klinkitemselectionmodel_reset_callback();
        } else {
            KLinkItemSelectionModel::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clearCurrentIndex() override {
        if (klinkitemselectionmodel_clearcurrentindex_isbase) {
            klinkitemselectionmodel_clearcurrentindex_isbase = false;
            KLinkItemSelectionModel::clearCurrentIndex();
        } else if (klinkitemselectionmodel_clearcurrentindex_callback != nullptr) {
            klinkitemselectionmodel_clearcurrentindex_callback();
        } else {
            KLinkItemSelectionModel::clearCurrentIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (klinkitemselectionmodel_event_isbase) {
            klinkitemselectionmodel_event_isbase = false;
            return KLinkItemSelectionModel::event(event);
        } else if (klinkitemselectionmodel_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = klinkitemselectionmodel_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLinkItemSelectionModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (klinkitemselectionmodel_eventfilter_isbase) {
            klinkitemselectionmodel_eventfilter_isbase = false;
            return KLinkItemSelectionModel::eventFilter(watched, event);
        } else if (klinkitemselectionmodel_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = klinkitemselectionmodel_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KLinkItemSelectionModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (klinkitemselectionmodel_timerevent_isbase) {
            klinkitemselectionmodel_timerevent_isbase = false;
            KLinkItemSelectionModel::timerEvent(event);
        } else if (klinkitemselectionmodel_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            klinkitemselectionmodel_timerevent_callback(this, cbval1);
        } else {
            KLinkItemSelectionModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (klinkitemselectionmodel_childevent_isbase) {
            klinkitemselectionmodel_childevent_isbase = false;
            KLinkItemSelectionModel::childEvent(event);
        } else if (klinkitemselectionmodel_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            klinkitemselectionmodel_childevent_callback(this, cbval1);
        } else {
            KLinkItemSelectionModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (klinkitemselectionmodel_customevent_isbase) {
            klinkitemselectionmodel_customevent_isbase = false;
            KLinkItemSelectionModel::customEvent(event);
        } else if (klinkitemselectionmodel_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            klinkitemselectionmodel_customevent_callback(this, cbval1);
        } else {
            KLinkItemSelectionModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (klinkitemselectionmodel_connectnotify_isbase) {
            klinkitemselectionmodel_connectnotify_isbase = false;
            KLinkItemSelectionModel::connectNotify(signal);
        } else if (klinkitemselectionmodel_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            klinkitemselectionmodel_connectnotify_callback(this, cbval1);
        } else {
            KLinkItemSelectionModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (klinkitemselectionmodel_disconnectnotify_isbase) {
            klinkitemselectionmodel_disconnectnotify_isbase = false;
            KLinkItemSelectionModel::disconnectNotify(signal);
        } else if (klinkitemselectionmodel_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            klinkitemselectionmodel_disconnectnotify_callback(this, cbval1);
        } else {
            KLinkItemSelectionModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void emitSelectionChanged(const QItemSelection& newSelection, const QItemSelection& oldSelection) {
        if (klinkitemselectionmodel_emitselectionchanged_isbase) {
            klinkitemselectionmodel_emitselectionchanged_isbase = false;
            KLinkItemSelectionModel::emitSelectionChanged(newSelection, oldSelection);
        } else if (klinkitemselectionmodel_emitselectionchanged_callback != nullptr) {
            const QItemSelection& newSelection_ret = newSelection;
            // Cast returned reference into pointer
            QItemSelection* cbval1 = const_cast<QItemSelection*>(&newSelection_ret);
            const QItemSelection& oldSelection_ret = oldSelection;
            // Cast returned reference into pointer
            QItemSelection* cbval2 = const_cast<QItemSelection*>(&oldSelection_ret);

            klinkitemselectionmodel_emitselectionchanged_callback(this, cbval1, cbval2);
        } else {
            KLinkItemSelectionModel::emitSelectionChanged(newSelection, oldSelection);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (klinkitemselectionmodel_sender_isbase) {
            klinkitemselectionmodel_sender_isbase = false;
            return KLinkItemSelectionModel::sender();
        } else if (klinkitemselectionmodel_sender_callback != nullptr) {
            QObject* callback_ret = klinkitemselectionmodel_sender_callback();
            return callback_ret;
        } else {
            return KLinkItemSelectionModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (klinkitemselectionmodel_sendersignalindex_isbase) {
            klinkitemselectionmodel_sendersignalindex_isbase = false;
            return KLinkItemSelectionModel::senderSignalIndex();
        } else if (klinkitemselectionmodel_sendersignalindex_callback != nullptr) {
            int callback_ret = klinkitemselectionmodel_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KLinkItemSelectionModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (klinkitemselectionmodel_receivers_isbase) {
            klinkitemselectionmodel_receivers_isbase = false;
            return KLinkItemSelectionModel::receivers(signal);
        } else if (klinkitemselectionmodel_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = klinkitemselectionmodel_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KLinkItemSelectionModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (klinkitemselectionmodel_issignalconnected_isbase) {
            klinkitemselectionmodel_issignalconnected_isbase = false;
            return KLinkItemSelectionModel::isSignalConnected(signal);
        } else if (klinkitemselectionmodel_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = klinkitemselectionmodel_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KLinkItemSelectionModel::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KLinkItemSelectionModel_TimerEvent(KLinkItemSelectionModel* self, QTimerEvent* event);
    friend void KLinkItemSelectionModel_QBaseTimerEvent(KLinkItemSelectionModel* self, QTimerEvent* event);
    friend void KLinkItemSelectionModel_ChildEvent(KLinkItemSelectionModel* self, QChildEvent* event);
    friend void KLinkItemSelectionModel_QBaseChildEvent(KLinkItemSelectionModel* self, QChildEvent* event);
    friend void KLinkItemSelectionModel_CustomEvent(KLinkItemSelectionModel* self, QEvent* event);
    friend void KLinkItemSelectionModel_QBaseCustomEvent(KLinkItemSelectionModel* self, QEvent* event);
    friend void KLinkItemSelectionModel_ConnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal);
    friend void KLinkItemSelectionModel_QBaseConnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal);
    friend void KLinkItemSelectionModel_DisconnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal);
    friend void KLinkItemSelectionModel_QBaseDisconnectNotify(KLinkItemSelectionModel* self, const QMetaMethod* signal);
    friend void KLinkItemSelectionModel_EmitSelectionChanged(KLinkItemSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection);
    friend void KLinkItemSelectionModel_QBaseEmitSelectionChanged(KLinkItemSelectionModel* self, const QItemSelection* newSelection, const QItemSelection* oldSelection);
    friend QObject* KLinkItemSelectionModel_Sender(const KLinkItemSelectionModel* self);
    friend QObject* KLinkItemSelectionModel_QBaseSender(const KLinkItemSelectionModel* self);
    friend int KLinkItemSelectionModel_SenderSignalIndex(const KLinkItemSelectionModel* self);
    friend int KLinkItemSelectionModel_QBaseSenderSignalIndex(const KLinkItemSelectionModel* self);
    friend int KLinkItemSelectionModel_Receivers(const KLinkItemSelectionModel* self, const char* signal);
    friend int KLinkItemSelectionModel_QBaseReceivers(const KLinkItemSelectionModel* self, const char* signal);
    friend bool KLinkItemSelectionModel_IsSignalConnected(const KLinkItemSelectionModel* self, const QMetaMethod* signal);
    friend bool KLinkItemSelectionModel_QBaseIsSignalConnected(const KLinkItemSelectionModel* self, const QMetaMethod* signal);
};

#endif
