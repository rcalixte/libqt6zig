#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBVIRTUALKABSTRACTWIDGETJOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBVIRTUALKABSTRACTWIDGETJOBTRACKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KAbstractWidgetJobTracker so that we can call protected methods
class VirtualKAbstractWidgetJobTracker final : public KAbstractWidgetJobTracker {

  public:
    // Virtual class boolean flag
    bool isVirtualKAbstractWidgetJobTracker = true;

    // Virtual class public types (including callbacks)
    using KAbstractWidgetJobTracker_Metacall_Callback = int (*)(KAbstractWidgetJobTracker*, int, int, void**);
    using KAbstractWidgetJobTracker_RegisterJob_Callback = void (*)(KAbstractWidgetJobTracker*, KJob*);
    using KAbstractWidgetJobTracker_UnregisterJob_Callback = void (*)(KAbstractWidgetJobTracker*, KJob*);
    using KAbstractWidgetJobTracker_Widget_Callback = QWidget* (*)(KAbstractWidgetJobTracker*, KJob*);
    using KAbstractWidgetJobTracker_Finished_Callback = void (*)(KAbstractWidgetJobTracker*, KJob*);
    using KAbstractWidgetJobTracker_SlotStop_Callback = void (*)(KAbstractWidgetJobTracker*, KJob*);
    using KAbstractWidgetJobTracker_SlotSuspend_Callback = void (*)(KAbstractWidgetJobTracker*, KJob*);
    using KAbstractWidgetJobTracker_SlotResume_Callback = void (*)(KAbstractWidgetJobTracker*, KJob*);
    using KAbstractWidgetJobTracker_SlotClean_Callback = void (*)(KAbstractWidgetJobTracker*, KJob*);
    using KAbstractWidgetJobTracker_Suspended_Callback = void (*)(KAbstractWidgetJobTracker*, KJob*);
    using KAbstractWidgetJobTracker_Resumed_Callback = void (*)(KAbstractWidgetJobTracker*, KJob*);
    using KAbstractWidgetJobTracker_Description_Callback = void (*)(KAbstractWidgetJobTracker*, KJob*, libqt_string, libqt_pair /* tuple of libqt_string and libqt_string */, libqt_pair /* tuple of libqt_string and libqt_string */);
    using KAbstractWidgetJobTracker_InfoMessage_Callback = void (*)(KAbstractWidgetJobTracker*, KJob*, libqt_string);
    using KAbstractWidgetJobTracker_Warning_Callback = void (*)(KAbstractWidgetJobTracker*, KJob*, libqt_string);
    using KAbstractWidgetJobTracker_TotalAmount_Callback = void (*)(KAbstractWidgetJobTracker*, KJob*, int, unsigned long long);
    using KAbstractWidgetJobTracker_ProcessedAmount_Callback = void (*)(KAbstractWidgetJobTracker*, KJob*, int, unsigned long long);
    using KAbstractWidgetJobTracker_Percent_Callback = void (*)(KAbstractWidgetJobTracker*, KJob*, unsigned long);
    using KAbstractWidgetJobTracker_Speed_Callback = void (*)(KAbstractWidgetJobTracker*, KJob*, unsigned long);
    using KAbstractWidgetJobTracker_Event_Callback = bool (*)(KAbstractWidgetJobTracker*, QEvent*);
    using KAbstractWidgetJobTracker_EventFilter_Callback = bool (*)(KAbstractWidgetJobTracker*, QObject*, QEvent*);
    using KAbstractWidgetJobTracker_TimerEvent_Callback = void (*)(KAbstractWidgetJobTracker*, QTimerEvent*);
    using KAbstractWidgetJobTracker_ChildEvent_Callback = void (*)(KAbstractWidgetJobTracker*, QChildEvent*);
    using KAbstractWidgetJobTracker_CustomEvent_Callback = void (*)(KAbstractWidgetJobTracker*, QEvent*);
    using KAbstractWidgetJobTracker_ConnectNotify_Callback = void (*)(KAbstractWidgetJobTracker*, QMetaMethod*);
    using KAbstractWidgetJobTracker_DisconnectNotify_Callback = void (*)(KAbstractWidgetJobTracker*, QMetaMethod*);
    using KAbstractWidgetJobTracker_Sender_Callback = QObject* (*)();
    using KAbstractWidgetJobTracker_SenderSignalIndex_Callback = int (*)();
    using KAbstractWidgetJobTracker_Receivers_Callback = int (*)(const KAbstractWidgetJobTracker*, const char*);
    using KAbstractWidgetJobTracker_IsSignalConnected_Callback = bool (*)(const KAbstractWidgetJobTracker*, QMetaMethod*);

  protected:
    // Instance callback storage
    KAbstractWidgetJobTracker_Metacall_Callback kabstractwidgetjobtracker_metacall_callback = nullptr;
    KAbstractWidgetJobTracker_RegisterJob_Callback kabstractwidgetjobtracker_registerjob_callback = nullptr;
    KAbstractWidgetJobTracker_UnregisterJob_Callback kabstractwidgetjobtracker_unregisterjob_callback = nullptr;
    KAbstractWidgetJobTracker_Widget_Callback kabstractwidgetjobtracker_widget_callback = nullptr;
    KAbstractWidgetJobTracker_Finished_Callback kabstractwidgetjobtracker_finished_callback = nullptr;
    KAbstractWidgetJobTracker_SlotStop_Callback kabstractwidgetjobtracker_slotstop_callback = nullptr;
    KAbstractWidgetJobTracker_SlotSuspend_Callback kabstractwidgetjobtracker_slotsuspend_callback = nullptr;
    KAbstractWidgetJobTracker_SlotResume_Callback kabstractwidgetjobtracker_slotresume_callback = nullptr;
    KAbstractWidgetJobTracker_SlotClean_Callback kabstractwidgetjobtracker_slotclean_callback = nullptr;
    KAbstractWidgetJobTracker_Suspended_Callback kabstractwidgetjobtracker_suspended_callback = nullptr;
    KAbstractWidgetJobTracker_Resumed_Callback kabstractwidgetjobtracker_resumed_callback = nullptr;
    KAbstractWidgetJobTracker_Description_Callback kabstractwidgetjobtracker_description_callback = nullptr;
    KAbstractWidgetJobTracker_InfoMessage_Callback kabstractwidgetjobtracker_infomessage_callback = nullptr;
    KAbstractWidgetJobTracker_Warning_Callback kabstractwidgetjobtracker_warning_callback = nullptr;
    KAbstractWidgetJobTracker_TotalAmount_Callback kabstractwidgetjobtracker_totalamount_callback = nullptr;
    KAbstractWidgetJobTracker_ProcessedAmount_Callback kabstractwidgetjobtracker_processedamount_callback = nullptr;
    KAbstractWidgetJobTracker_Percent_Callback kabstractwidgetjobtracker_percent_callback = nullptr;
    KAbstractWidgetJobTracker_Speed_Callback kabstractwidgetjobtracker_speed_callback = nullptr;
    KAbstractWidgetJobTracker_Event_Callback kabstractwidgetjobtracker_event_callback = nullptr;
    KAbstractWidgetJobTracker_EventFilter_Callback kabstractwidgetjobtracker_eventfilter_callback = nullptr;
    KAbstractWidgetJobTracker_TimerEvent_Callback kabstractwidgetjobtracker_timerevent_callback = nullptr;
    KAbstractWidgetJobTracker_ChildEvent_Callback kabstractwidgetjobtracker_childevent_callback = nullptr;
    KAbstractWidgetJobTracker_CustomEvent_Callback kabstractwidgetjobtracker_customevent_callback = nullptr;
    KAbstractWidgetJobTracker_ConnectNotify_Callback kabstractwidgetjobtracker_connectnotify_callback = nullptr;
    KAbstractWidgetJobTracker_DisconnectNotify_Callback kabstractwidgetjobtracker_disconnectnotify_callback = nullptr;
    KAbstractWidgetJobTracker_Sender_Callback kabstractwidgetjobtracker_sender_callback = nullptr;
    KAbstractWidgetJobTracker_SenderSignalIndex_Callback kabstractwidgetjobtracker_sendersignalindex_callback = nullptr;
    KAbstractWidgetJobTracker_Receivers_Callback kabstractwidgetjobtracker_receivers_callback = nullptr;
    KAbstractWidgetJobTracker_IsSignalConnected_Callback kabstractwidgetjobtracker_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kabstractwidgetjobtracker_metacall_isbase = false;
    mutable bool kabstractwidgetjobtracker_registerjob_isbase = false;
    mutable bool kabstractwidgetjobtracker_unregisterjob_isbase = false;
    mutable bool kabstractwidgetjobtracker_widget_isbase = false;
    mutable bool kabstractwidgetjobtracker_finished_isbase = false;
    mutable bool kabstractwidgetjobtracker_slotstop_isbase = false;
    mutable bool kabstractwidgetjobtracker_slotsuspend_isbase = false;
    mutable bool kabstractwidgetjobtracker_slotresume_isbase = false;
    mutable bool kabstractwidgetjobtracker_slotclean_isbase = false;
    mutable bool kabstractwidgetjobtracker_suspended_isbase = false;
    mutable bool kabstractwidgetjobtracker_resumed_isbase = false;
    mutable bool kabstractwidgetjobtracker_description_isbase = false;
    mutable bool kabstractwidgetjobtracker_infomessage_isbase = false;
    mutable bool kabstractwidgetjobtracker_warning_isbase = false;
    mutable bool kabstractwidgetjobtracker_totalamount_isbase = false;
    mutable bool kabstractwidgetjobtracker_processedamount_isbase = false;
    mutable bool kabstractwidgetjobtracker_percent_isbase = false;
    mutable bool kabstractwidgetjobtracker_speed_isbase = false;
    mutable bool kabstractwidgetjobtracker_event_isbase = false;
    mutable bool kabstractwidgetjobtracker_eventfilter_isbase = false;
    mutable bool kabstractwidgetjobtracker_timerevent_isbase = false;
    mutable bool kabstractwidgetjobtracker_childevent_isbase = false;
    mutable bool kabstractwidgetjobtracker_customevent_isbase = false;
    mutable bool kabstractwidgetjobtracker_connectnotify_isbase = false;
    mutable bool kabstractwidgetjobtracker_disconnectnotify_isbase = false;
    mutable bool kabstractwidgetjobtracker_sender_isbase = false;
    mutable bool kabstractwidgetjobtracker_sendersignalindex_isbase = false;
    mutable bool kabstractwidgetjobtracker_receivers_isbase = false;
    mutable bool kabstractwidgetjobtracker_issignalconnected_isbase = false;

  public:
    VirtualKAbstractWidgetJobTracker(QWidget* parent) : KAbstractWidgetJobTracker(parent) {};
    VirtualKAbstractWidgetJobTracker() : KAbstractWidgetJobTracker() {};

    ~VirtualKAbstractWidgetJobTracker() {
        kabstractwidgetjobtracker_metacall_callback = nullptr;
        kabstractwidgetjobtracker_registerjob_callback = nullptr;
        kabstractwidgetjobtracker_unregisterjob_callback = nullptr;
        kabstractwidgetjobtracker_widget_callback = nullptr;
        kabstractwidgetjobtracker_finished_callback = nullptr;
        kabstractwidgetjobtracker_slotstop_callback = nullptr;
        kabstractwidgetjobtracker_slotsuspend_callback = nullptr;
        kabstractwidgetjobtracker_slotresume_callback = nullptr;
        kabstractwidgetjobtracker_slotclean_callback = nullptr;
        kabstractwidgetjobtracker_suspended_callback = nullptr;
        kabstractwidgetjobtracker_resumed_callback = nullptr;
        kabstractwidgetjobtracker_description_callback = nullptr;
        kabstractwidgetjobtracker_infomessage_callback = nullptr;
        kabstractwidgetjobtracker_warning_callback = nullptr;
        kabstractwidgetjobtracker_totalamount_callback = nullptr;
        kabstractwidgetjobtracker_processedamount_callback = nullptr;
        kabstractwidgetjobtracker_percent_callback = nullptr;
        kabstractwidgetjobtracker_speed_callback = nullptr;
        kabstractwidgetjobtracker_event_callback = nullptr;
        kabstractwidgetjobtracker_eventfilter_callback = nullptr;
        kabstractwidgetjobtracker_timerevent_callback = nullptr;
        kabstractwidgetjobtracker_childevent_callback = nullptr;
        kabstractwidgetjobtracker_customevent_callback = nullptr;
        kabstractwidgetjobtracker_connectnotify_callback = nullptr;
        kabstractwidgetjobtracker_disconnectnotify_callback = nullptr;
        kabstractwidgetjobtracker_sender_callback = nullptr;
        kabstractwidgetjobtracker_sendersignalindex_callback = nullptr;
        kabstractwidgetjobtracker_receivers_callback = nullptr;
        kabstractwidgetjobtracker_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKAbstractWidgetJobTracker_Metacall_Callback(KAbstractWidgetJobTracker_Metacall_Callback cb) { kabstractwidgetjobtracker_metacall_callback = cb; }
    inline void setKAbstractWidgetJobTracker_RegisterJob_Callback(KAbstractWidgetJobTracker_RegisterJob_Callback cb) { kabstractwidgetjobtracker_registerjob_callback = cb; }
    inline void setKAbstractWidgetJobTracker_UnregisterJob_Callback(KAbstractWidgetJobTracker_UnregisterJob_Callback cb) { kabstractwidgetjobtracker_unregisterjob_callback = cb; }
    inline void setKAbstractWidgetJobTracker_Widget_Callback(KAbstractWidgetJobTracker_Widget_Callback cb) { kabstractwidgetjobtracker_widget_callback = cb; }
    inline void setKAbstractWidgetJobTracker_Finished_Callback(KAbstractWidgetJobTracker_Finished_Callback cb) { kabstractwidgetjobtracker_finished_callback = cb; }
    inline void setKAbstractWidgetJobTracker_SlotStop_Callback(KAbstractWidgetJobTracker_SlotStop_Callback cb) { kabstractwidgetjobtracker_slotstop_callback = cb; }
    inline void setKAbstractWidgetJobTracker_SlotSuspend_Callback(KAbstractWidgetJobTracker_SlotSuspend_Callback cb) { kabstractwidgetjobtracker_slotsuspend_callback = cb; }
    inline void setKAbstractWidgetJobTracker_SlotResume_Callback(KAbstractWidgetJobTracker_SlotResume_Callback cb) { kabstractwidgetjobtracker_slotresume_callback = cb; }
    inline void setKAbstractWidgetJobTracker_SlotClean_Callback(KAbstractWidgetJobTracker_SlotClean_Callback cb) { kabstractwidgetjobtracker_slotclean_callback = cb; }
    inline void setKAbstractWidgetJobTracker_Suspended_Callback(KAbstractWidgetJobTracker_Suspended_Callback cb) { kabstractwidgetjobtracker_suspended_callback = cb; }
    inline void setKAbstractWidgetJobTracker_Resumed_Callback(KAbstractWidgetJobTracker_Resumed_Callback cb) { kabstractwidgetjobtracker_resumed_callback = cb; }
    inline void setKAbstractWidgetJobTracker_Description_Callback(KAbstractWidgetJobTracker_Description_Callback cb) { kabstractwidgetjobtracker_description_callback = cb; }
    inline void setKAbstractWidgetJobTracker_InfoMessage_Callback(KAbstractWidgetJobTracker_InfoMessage_Callback cb) { kabstractwidgetjobtracker_infomessage_callback = cb; }
    inline void setKAbstractWidgetJobTracker_Warning_Callback(KAbstractWidgetJobTracker_Warning_Callback cb) { kabstractwidgetjobtracker_warning_callback = cb; }
    inline void setKAbstractWidgetJobTracker_TotalAmount_Callback(KAbstractWidgetJobTracker_TotalAmount_Callback cb) { kabstractwidgetjobtracker_totalamount_callback = cb; }
    inline void setKAbstractWidgetJobTracker_ProcessedAmount_Callback(KAbstractWidgetJobTracker_ProcessedAmount_Callback cb) { kabstractwidgetjobtracker_processedamount_callback = cb; }
    inline void setKAbstractWidgetJobTracker_Percent_Callback(KAbstractWidgetJobTracker_Percent_Callback cb) { kabstractwidgetjobtracker_percent_callback = cb; }
    inline void setKAbstractWidgetJobTracker_Speed_Callback(KAbstractWidgetJobTracker_Speed_Callback cb) { kabstractwidgetjobtracker_speed_callback = cb; }
    inline void setKAbstractWidgetJobTracker_Event_Callback(KAbstractWidgetJobTracker_Event_Callback cb) { kabstractwidgetjobtracker_event_callback = cb; }
    inline void setKAbstractWidgetJobTracker_EventFilter_Callback(KAbstractWidgetJobTracker_EventFilter_Callback cb) { kabstractwidgetjobtracker_eventfilter_callback = cb; }
    inline void setKAbstractWidgetJobTracker_TimerEvent_Callback(KAbstractWidgetJobTracker_TimerEvent_Callback cb) { kabstractwidgetjobtracker_timerevent_callback = cb; }
    inline void setKAbstractWidgetJobTracker_ChildEvent_Callback(KAbstractWidgetJobTracker_ChildEvent_Callback cb) { kabstractwidgetjobtracker_childevent_callback = cb; }
    inline void setKAbstractWidgetJobTracker_CustomEvent_Callback(KAbstractWidgetJobTracker_CustomEvent_Callback cb) { kabstractwidgetjobtracker_customevent_callback = cb; }
    inline void setKAbstractWidgetJobTracker_ConnectNotify_Callback(KAbstractWidgetJobTracker_ConnectNotify_Callback cb) { kabstractwidgetjobtracker_connectnotify_callback = cb; }
    inline void setKAbstractWidgetJobTracker_DisconnectNotify_Callback(KAbstractWidgetJobTracker_DisconnectNotify_Callback cb) { kabstractwidgetjobtracker_disconnectnotify_callback = cb; }
    inline void setKAbstractWidgetJobTracker_Sender_Callback(KAbstractWidgetJobTracker_Sender_Callback cb) { kabstractwidgetjobtracker_sender_callback = cb; }
    inline void setKAbstractWidgetJobTracker_SenderSignalIndex_Callback(KAbstractWidgetJobTracker_SenderSignalIndex_Callback cb) { kabstractwidgetjobtracker_sendersignalindex_callback = cb; }
    inline void setKAbstractWidgetJobTracker_Receivers_Callback(KAbstractWidgetJobTracker_Receivers_Callback cb) { kabstractwidgetjobtracker_receivers_callback = cb; }
    inline void setKAbstractWidgetJobTracker_IsSignalConnected_Callback(KAbstractWidgetJobTracker_IsSignalConnected_Callback cb) { kabstractwidgetjobtracker_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKAbstractWidgetJobTracker_Metacall_IsBase(bool value) const { kabstractwidgetjobtracker_metacall_isbase = value; }
    inline void setKAbstractWidgetJobTracker_RegisterJob_IsBase(bool value) const { kabstractwidgetjobtracker_registerjob_isbase = value; }
    inline void setKAbstractWidgetJobTracker_UnregisterJob_IsBase(bool value) const { kabstractwidgetjobtracker_unregisterjob_isbase = value; }
    inline void setKAbstractWidgetJobTracker_Widget_IsBase(bool value) const { kabstractwidgetjobtracker_widget_isbase = value; }
    inline void setKAbstractWidgetJobTracker_Finished_IsBase(bool value) const { kabstractwidgetjobtracker_finished_isbase = value; }
    inline void setKAbstractWidgetJobTracker_SlotStop_IsBase(bool value) const { kabstractwidgetjobtracker_slotstop_isbase = value; }
    inline void setKAbstractWidgetJobTracker_SlotSuspend_IsBase(bool value) const { kabstractwidgetjobtracker_slotsuspend_isbase = value; }
    inline void setKAbstractWidgetJobTracker_SlotResume_IsBase(bool value) const { kabstractwidgetjobtracker_slotresume_isbase = value; }
    inline void setKAbstractWidgetJobTracker_SlotClean_IsBase(bool value) const { kabstractwidgetjobtracker_slotclean_isbase = value; }
    inline void setKAbstractWidgetJobTracker_Suspended_IsBase(bool value) const { kabstractwidgetjobtracker_suspended_isbase = value; }
    inline void setKAbstractWidgetJobTracker_Resumed_IsBase(bool value) const { kabstractwidgetjobtracker_resumed_isbase = value; }
    inline void setKAbstractWidgetJobTracker_Description_IsBase(bool value) const { kabstractwidgetjobtracker_description_isbase = value; }
    inline void setKAbstractWidgetJobTracker_InfoMessage_IsBase(bool value) const { kabstractwidgetjobtracker_infomessage_isbase = value; }
    inline void setKAbstractWidgetJobTracker_Warning_IsBase(bool value) const { kabstractwidgetjobtracker_warning_isbase = value; }
    inline void setKAbstractWidgetJobTracker_TotalAmount_IsBase(bool value) const { kabstractwidgetjobtracker_totalamount_isbase = value; }
    inline void setKAbstractWidgetJobTracker_ProcessedAmount_IsBase(bool value) const { kabstractwidgetjobtracker_processedamount_isbase = value; }
    inline void setKAbstractWidgetJobTracker_Percent_IsBase(bool value) const { kabstractwidgetjobtracker_percent_isbase = value; }
    inline void setKAbstractWidgetJobTracker_Speed_IsBase(bool value) const { kabstractwidgetjobtracker_speed_isbase = value; }
    inline void setKAbstractWidgetJobTracker_Event_IsBase(bool value) const { kabstractwidgetjobtracker_event_isbase = value; }
    inline void setKAbstractWidgetJobTracker_EventFilter_IsBase(bool value) const { kabstractwidgetjobtracker_eventfilter_isbase = value; }
    inline void setKAbstractWidgetJobTracker_TimerEvent_IsBase(bool value) const { kabstractwidgetjobtracker_timerevent_isbase = value; }
    inline void setKAbstractWidgetJobTracker_ChildEvent_IsBase(bool value) const { kabstractwidgetjobtracker_childevent_isbase = value; }
    inline void setKAbstractWidgetJobTracker_CustomEvent_IsBase(bool value) const { kabstractwidgetjobtracker_customevent_isbase = value; }
    inline void setKAbstractWidgetJobTracker_ConnectNotify_IsBase(bool value) const { kabstractwidgetjobtracker_connectnotify_isbase = value; }
    inline void setKAbstractWidgetJobTracker_DisconnectNotify_IsBase(bool value) const { kabstractwidgetjobtracker_disconnectnotify_isbase = value; }
    inline void setKAbstractWidgetJobTracker_Sender_IsBase(bool value) const { kabstractwidgetjobtracker_sender_isbase = value; }
    inline void setKAbstractWidgetJobTracker_SenderSignalIndex_IsBase(bool value) const { kabstractwidgetjobtracker_sendersignalindex_isbase = value; }
    inline void setKAbstractWidgetJobTracker_Receivers_IsBase(bool value) const { kabstractwidgetjobtracker_receivers_isbase = value; }
    inline void setKAbstractWidgetJobTracker_IsSignalConnected_IsBase(bool value) const { kabstractwidgetjobtracker_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kabstractwidgetjobtracker_metacall_isbase) {
            kabstractwidgetjobtracker_metacall_isbase = false;
            return KAbstractWidgetJobTracker::qt_metacall(param1, param2, param3);
        } else if (kabstractwidgetjobtracker_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kabstractwidgetjobtracker_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KAbstractWidgetJobTracker::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void registerJob(KJob* job) override {
        if (kabstractwidgetjobtracker_registerjob_isbase) {
            kabstractwidgetjobtracker_registerjob_isbase = false;
            KAbstractWidgetJobTracker::registerJob(job);
        } else if (kabstractwidgetjobtracker_registerjob_callback != nullptr) {
            KJob* cbval1 = job;

            kabstractwidgetjobtracker_registerjob_callback(this, cbval1);
        } else {
            KAbstractWidgetJobTracker::registerJob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unregisterJob(KJob* job) override {
        if (kabstractwidgetjobtracker_unregisterjob_isbase) {
            kabstractwidgetjobtracker_unregisterjob_isbase = false;
            KAbstractWidgetJobTracker::unregisterJob(job);
        } else if (kabstractwidgetjobtracker_unregisterjob_callback != nullptr) {
            KJob* cbval1 = job;

            kabstractwidgetjobtracker_unregisterjob_callback(this, cbval1);
        } else {
            KAbstractWidgetJobTracker::unregisterJob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget(KJob* job) override {
        if (kabstractwidgetjobtracker_widget_callback != nullptr) {
            KJob* cbval1 = job;

            QWidget* callback_ret = kabstractwidgetjobtracker_widget_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void finished(KJob* job) override {
        if (kabstractwidgetjobtracker_finished_isbase) {
            kabstractwidgetjobtracker_finished_isbase = false;
            KAbstractWidgetJobTracker::finished(job);
        } else if (kabstractwidgetjobtracker_finished_callback != nullptr) {
            KJob* cbval1 = job;

            kabstractwidgetjobtracker_finished_callback(this, cbval1);
        } else {
            KAbstractWidgetJobTracker::finished(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotStop(KJob* job) override {
        if (kabstractwidgetjobtracker_slotstop_isbase) {
            kabstractwidgetjobtracker_slotstop_isbase = false;
            KAbstractWidgetJobTracker::slotStop(job);
        } else if (kabstractwidgetjobtracker_slotstop_callback != nullptr) {
            KJob* cbval1 = job;

            kabstractwidgetjobtracker_slotstop_callback(this, cbval1);
        } else {
            KAbstractWidgetJobTracker::slotStop(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotSuspend(KJob* job) override {
        if (kabstractwidgetjobtracker_slotsuspend_isbase) {
            kabstractwidgetjobtracker_slotsuspend_isbase = false;
            KAbstractWidgetJobTracker::slotSuspend(job);
        } else if (kabstractwidgetjobtracker_slotsuspend_callback != nullptr) {
            KJob* cbval1 = job;

            kabstractwidgetjobtracker_slotsuspend_callback(this, cbval1);
        } else {
            KAbstractWidgetJobTracker::slotSuspend(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotResume(KJob* job) override {
        if (kabstractwidgetjobtracker_slotresume_isbase) {
            kabstractwidgetjobtracker_slotresume_isbase = false;
            KAbstractWidgetJobTracker::slotResume(job);
        } else if (kabstractwidgetjobtracker_slotresume_callback != nullptr) {
            KJob* cbval1 = job;

            kabstractwidgetjobtracker_slotresume_callback(this, cbval1);
        } else {
            KAbstractWidgetJobTracker::slotResume(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotClean(KJob* job) override {
        if (kabstractwidgetjobtracker_slotclean_isbase) {
            kabstractwidgetjobtracker_slotclean_isbase = false;
            KAbstractWidgetJobTracker::slotClean(job);
        } else if (kabstractwidgetjobtracker_slotclean_callback != nullptr) {
            KJob* cbval1 = job;

            kabstractwidgetjobtracker_slotclean_callback(this, cbval1);
        } else {
            KAbstractWidgetJobTracker::slotClean(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void suspended(KJob* job) override {
        if (kabstractwidgetjobtracker_suspended_isbase) {
            kabstractwidgetjobtracker_suspended_isbase = false;
            KAbstractWidgetJobTracker::suspended(job);
        } else if (kabstractwidgetjobtracker_suspended_callback != nullptr) {
            KJob* cbval1 = job;

            kabstractwidgetjobtracker_suspended_callback(this, cbval1);
        } else {
            KAbstractWidgetJobTracker::suspended(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resumed(KJob* job) override {
        if (kabstractwidgetjobtracker_resumed_isbase) {
            kabstractwidgetjobtracker_resumed_isbase = false;
            KAbstractWidgetJobTracker::resumed(job);
        } else if (kabstractwidgetjobtracker_resumed_callback != nullptr) {
            KJob* cbval1 = job;

            kabstractwidgetjobtracker_resumed_callback(this, cbval1);
        } else {
            KAbstractWidgetJobTracker::resumed(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void description(KJob* job, const QString& title, const QPair<QString, QString>& field1, const QPair<QString, QString>& field2) override {
        if (kabstractwidgetjobtracker_description_isbase) {
            kabstractwidgetjobtracker_description_isbase = false;
            KAbstractWidgetJobTracker::description(job, title, field1, field2);
        } else if (kabstractwidgetjobtracker_description_callback != nullptr) {
            KJob* cbval1 = job;
            const QString title_ret = title;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray title_b = title_ret.toUtf8();
            libqt_string title_str;
            title_str.len = title_b.length();
            title_str.data = static_cast<const char*>(malloc(title_str.len + 1));
            memcpy((void*)title_str.data, title_b.data(), title_str.len);
            ((char*)title_str.data)[title_str.len] = '\0';
            libqt_string cbval2 = title_str;
            const QPair<QString, QString>& field1_ret = field1;
            // Convert QPair<> from C++ memory to manually-managed C memory
            libqt_string* field1_first = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
            libqt_string* field1_second = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
            QString field1_first_ret = field1_ret.first;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray field1_first_b = field1_first_ret.toUtf8();
            libqt_string field1_first_str;
            field1_first_str.len = field1_first_b.length();
            field1_first_str.data = static_cast<const char*>(malloc(field1_first_str.len + 1));
            memcpy((void*)field1_first_str.data, field1_first_b.data(), field1_first_str.len);
            ((char*)field1_first_str.data)[field1_first_str.len] = '\0';
            *field1_first = field1_first_str;
            QString field1_second_ret = field1_ret.second;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray field1_second_b = field1_second_ret.toUtf8();
            libqt_string field1_second_str;
            field1_second_str.len = field1_second_b.length();
            field1_second_str.data = static_cast<const char*>(malloc(field1_second_str.len + 1));
            memcpy((void*)field1_second_str.data, field1_second_b.data(), field1_second_str.len);
            ((char*)field1_second_str.data)[field1_second_str.len] = '\0';
            *field1_second = field1_second_str;
            libqt_pair field1_out;
            field1_out.first = static_cast<void*>(field1_first);
            field1_out.second = static_cast<void*>(field1_second);
            libqt_pair /* tuple of libqt_string and libqt_string */ cbval3 = field1_out;
            const QPair<QString, QString>& field2_ret = field2;
            // Convert QPair<> from C++ memory to manually-managed C memory
            libqt_string* field2_first = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
            libqt_string* field2_second = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
            QString field2_first_ret = field2_ret.first;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray field2_first_b = field2_first_ret.toUtf8();
            libqt_string field2_first_str;
            field2_first_str.len = field2_first_b.length();
            field2_first_str.data = static_cast<const char*>(malloc(field2_first_str.len + 1));
            memcpy((void*)field2_first_str.data, field2_first_b.data(), field2_first_str.len);
            ((char*)field2_first_str.data)[field2_first_str.len] = '\0';
            *field2_first = field2_first_str;
            QString field2_second_ret = field2_ret.second;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray field2_second_b = field2_second_ret.toUtf8();
            libqt_string field2_second_str;
            field2_second_str.len = field2_second_b.length();
            field2_second_str.data = static_cast<const char*>(malloc(field2_second_str.len + 1));
            memcpy((void*)field2_second_str.data, field2_second_b.data(), field2_second_str.len);
            ((char*)field2_second_str.data)[field2_second_str.len] = '\0';
            *field2_second = field2_second_str;
            libqt_pair field2_out;
            field2_out.first = static_cast<void*>(field2_first);
            field2_out.second = static_cast<void*>(field2_second);
            libqt_pair /* tuple of libqt_string and libqt_string */ cbval4 = field2_out;

            kabstractwidgetjobtracker_description_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KAbstractWidgetJobTracker::description(job, title, field1, field2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void infoMessage(KJob* job, const QString& message) override {
        if (kabstractwidgetjobtracker_infomessage_isbase) {
            kabstractwidgetjobtracker_infomessage_isbase = false;
            KAbstractWidgetJobTracker::infoMessage(job, message);
        } else if (kabstractwidgetjobtracker_infomessage_callback != nullptr) {
            KJob* cbval1 = job;
            const QString message_ret = message;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray message_b = message_ret.toUtf8();
            libqt_string message_str;
            message_str.len = message_b.length();
            message_str.data = static_cast<const char*>(malloc(message_str.len + 1));
            memcpy((void*)message_str.data, message_b.data(), message_str.len);
            ((char*)message_str.data)[message_str.len] = '\0';
            libqt_string cbval2 = message_str;

            kabstractwidgetjobtracker_infomessage_callback(this, cbval1, cbval2);
        } else {
            KAbstractWidgetJobTracker::infoMessage(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void warning(KJob* job, const QString& message) override {
        if (kabstractwidgetjobtracker_warning_isbase) {
            kabstractwidgetjobtracker_warning_isbase = false;
            KAbstractWidgetJobTracker::warning(job, message);
        } else if (kabstractwidgetjobtracker_warning_callback != nullptr) {
            KJob* cbval1 = job;
            const QString message_ret = message;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray message_b = message_ret.toUtf8();
            libqt_string message_str;
            message_str.len = message_b.length();
            message_str.data = static_cast<const char*>(malloc(message_str.len + 1));
            memcpy((void*)message_str.data, message_b.data(), message_str.len);
            ((char*)message_str.data)[message_str.len] = '\0';
            libqt_string cbval2 = message_str;

            kabstractwidgetjobtracker_warning_callback(this, cbval1, cbval2);
        } else {
            KAbstractWidgetJobTracker::warning(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void totalAmount(KJob* job, KJob::Unit unit, qulonglong amount) override {
        if (kabstractwidgetjobtracker_totalamount_isbase) {
            kabstractwidgetjobtracker_totalamount_isbase = false;
            KAbstractWidgetJobTracker::totalAmount(job, unit, amount);
        } else if (kabstractwidgetjobtracker_totalamount_callback != nullptr) {
            KJob* cbval1 = job;
            int cbval2 = static_cast<int>(unit);
            unsigned long long cbval3 = static_cast<unsigned long long>(amount);

            kabstractwidgetjobtracker_totalamount_callback(this, cbval1, cbval2, cbval3);
        } else {
            KAbstractWidgetJobTracker::totalAmount(job, unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void processedAmount(KJob* job, KJob::Unit unit, qulonglong amount) override {
        if (kabstractwidgetjobtracker_processedamount_isbase) {
            kabstractwidgetjobtracker_processedamount_isbase = false;
            KAbstractWidgetJobTracker::processedAmount(job, unit, amount);
        } else if (kabstractwidgetjobtracker_processedamount_callback != nullptr) {
            KJob* cbval1 = job;
            int cbval2 = static_cast<int>(unit);
            unsigned long long cbval3 = static_cast<unsigned long long>(amount);

            kabstractwidgetjobtracker_processedamount_callback(this, cbval1, cbval2, cbval3);
        } else {
            KAbstractWidgetJobTracker::processedAmount(job, unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void percent(KJob* job, unsigned long percent) override {
        if (kabstractwidgetjobtracker_percent_isbase) {
            kabstractwidgetjobtracker_percent_isbase = false;
            KAbstractWidgetJobTracker::percent(job, percent);
        } else if (kabstractwidgetjobtracker_percent_callback != nullptr) {
            KJob* cbval1 = job;
            unsigned long cbval2 = percent;

            kabstractwidgetjobtracker_percent_callback(this, cbval1, cbval2);
        } else {
            KAbstractWidgetJobTracker::percent(job, percent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void speed(KJob* job, unsigned long value) override {
        if (kabstractwidgetjobtracker_speed_isbase) {
            kabstractwidgetjobtracker_speed_isbase = false;
            KAbstractWidgetJobTracker::speed(job, value);
        } else if (kabstractwidgetjobtracker_speed_callback != nullptr) {
            KJob* cbval1 = job;
            unsigned long cbval2 = value;

            kabstractwidgetjobtracker_speed_callback(this, cbval1, cbval2);
        } else {
            KAbstractWidgetJobTracker::speed(job, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kabstractwidgetjobtracker_event_isbase) {
            kabstractwidgetjobtracker_event_isbase = false;
            return KAbstractWidgetJobTracker::event(event);
        } else if (kabstractwidgetjobtracker_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kabstractwidgetjobtracker_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAbstractWidgetJobTracker::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kabstractwidgetjobtracker_eventfilter_isbase) {
            kabstractwidgetjobtracker_eventfilter_isbase = false;
            return KAbstractWidgetJobTracker::eventFilter(watched, event);
        } else if (kabstractwidgetjobtracker_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kabstractwidgetjobtracker_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KAbstractWidgetJobTracker::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kabstractwidgetjobtracker_timerevent_isbase) {
            kabstractwidgetjobtracker_timerevent_isbase = false;
            KAbstractWidgetJobTracker::timerEvent(event);
        } else if (kabstractwidgetjobtracker_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kabstractwidgetjobtracker_timerevent_callback(this, cbval1);
        } else {
            KAbstractWidgetJobTracker::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kabstractwidgetjobtracker_childevent_isbase) {
            kabstractwidgetjobtracker_childevent_isbase = false;
            KAbstractWidgetJobTracker::childEvent(event);
        } else if (kabstractwidgetjobtracker_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kabstractwidgetjobtracker_childevent_callback(this, cbval1);
        } else {
            KAbstractWidgetJobTracker::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kabstractwidgetjobtracker_customevent_isbase) {
            kabstractwidgetjobtracker_customevent_isbase = false;
            KAbstractWidgetJobTracker::customEvent(event);
        } else if (kabstractwidgetjobtracker_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kabstractwidgetjobtracker_customevent_callback(this, cbval1);
        } else {
            KAbstractWidgetJobTracker::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kabstractwidgetjobtracker_connectnotify_isbase) {
            kabstractwidgetjobtracker_connectnotify_isbase = false;
            KAbstractWidgetJobTracker::connectNotify(signal);
        } else if (kabstractwidgetjobtracker_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kabstractwidgetjobtracker_connectnotify_callback(this, cbval1);
        } else {
            KAbstractWidgetJobTracker::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kabstractwidgetjobtracker_disconnectnotify_isbase) {
            kabstractwidgetjobtracker_disconnectnotify_isbase = false;
            KAbstractWidgetJobTracker::disconnectNotify(signal);
        } else if (kabstractwidgetjobtracker_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kabstractwidgetjobtracker_disconnectnotify_callback(this, cbval1);
        } else {
            KAbstractWidgetJobTracker::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kabstractwidgetjobtracker_sender_isbase) {
            kabstractwidgetjobtracker_sender_isbase = false;
            return KAbstractWidgetJobTracker::sender();
        } else if (kabstractwidgetjobtracker_sender_callback != nullptr) {
            QObject* callback_ret = kabstractwidgetjobtracker_sender_callback();
            return callback_ret;
        } else {
            return KAbstractWidgetJobTracker::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kabstractwidgetjobtracker_sendersignalindex_isbase) {
            kabstractwidgetjobtracker_sendersignalindex_isbase = false;
            return KAbstractWidgetJobTracker::senderSignalIndex();
        } else if (kabstractwidgetjobtracker_sendersignalindex_callback != nullptr) {
            int callback_ret = kabstractwidgetjobtracker_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KAbstractWidgetJobTracker::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kabstractwidgetjobtracker_receivers_isbase) {
            kabstractwidgetjobtracker_receivers_isbase = false;
            return KAbstractWidgetJobTracker::receivers(signal);
        } else if (kabstractwidgetjobtracker_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kabstractwidgetjobtracker_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KAbstractWidgetJobTracker::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kabstractwidgetjobtracker_issignalconnected_isbase) {
            kabstractwidgetjobtracker_issignalconnected_isbase = false;
            return KAbstractWidgetJobTracker::isSignalConnected(signal);
        } else if (kabstractwidgetjobtracker_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kabstractwidgetjobtracker_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAbstractWidgetJobTracker::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KAbstractWidgetJobTracker_Finished(KAbstractWidgetJobTracker* self, KJob* job);
    friend void KAbstractWidgetJobTracker_QBaseFinished(KAbstractWidgetJobTracker* self, KJob* job);
    friend void KAbstractWidgetJobTracker_SlotStop(KAbstractWidgetJobTracker* self, KJob* job);
    friend void KAbstractWidgetJobTracker_QBaseSlotStop(KAbstractWidgetJobTracker* self, KJob* job);
    friend void KAbstractWidgetJobTracker_SlotSuspend(KAbstractWidgetJobTracker* self, KJob* job);
    friend void KAbstractWidgetJobTracker_QBaseSlotSuspend(KAbstractWidgetJobTracker* self, KJob* job);
    friend void KAbstractWidgetJobTracker_SlotResume(KAbstractWidgetJobTracker* self, KJob* job);
    friend void KAbstractWidgetJobTracker_QBaseSlotResume(KAbstractWidgetJobTracker* self, KJob* job);
    friend void KAbstractWidgetJobTracker_SlotClean(KAbstractWidgetJobTracker* self, KJob* job);
    friend void KAbstractWidgetJobTracker_QBaseSlotClean(KAbstractWidgetJobTracker* self, KJob* job);
    friend void KAbstractWidgetJobTracker_Suspended(KAbstractWidgetJobTracker* self, KJob* job);
    friend void KAbstractWidgetJobTracker_QBaseSuspended(KAbstractWidgetJobTracker* self, KJob* job);
    friend void KAbstractWidgetJobTracker_Resumed(KAbstractWidgetJobTracker* self, KJob* job);
    friend void KAbstractWidgetJobTracker_QBaseResumed(KAbstractWidgetJobTracker* self, KJob* job);
    friend void KAbstractWidgetJobTracker_Description(KAbstractWidgetJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
    friend void KAbstractWidgetJobTracker_QBaseDescription(KAbstractWidgetJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
    friend void KAbstractWidgetJobTracker_InfoMessage(KAbstractWidgetJobTracker* self, KJob* job, const libqt_string message);
    friend void KAbstractWidgetJobTracker_QBaseInfoMessage(KAbstractWidgetJobTracker* self, KJob* job, const libqt_string message);
    friend void KAbstractWidgetJobTracker_Warning(KAbstractWidgetJobTracker* self, KJob* job, const libqt_string message);
    friend void KAbstractWidgetJobTracker_QBaseWarning(KAbstractWidgetJobTracker* self, KJob* job, const libqt_string message);
    friend void KAbstractWidgetJobTracker_TotalAmount(KAbstractWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount);
    friend void KAbstractWidgetJobTracker_QBaseTotalAmount(KAbstractWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount);
    friend void KAbstractWidgetJobTracker_ProcessedAmount(KAbstractWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount);
    friend void KAbstractWidgetJobTracker_QBaseProcessedAmount(KAbstractWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount);
    friend void KAbstractWidgetJobTracker_Percent(KAbstractWidgetJobTracker* self, KJob* job, unsigned long percent);
    friend void KAbstractWidgetJobTracker_QBasePercent(KAbstractWidgetJobTracker* self, KJob* job, unsigned long percent);
    friend void KAbstractWidgetJobTracker_Speed(KAbstractWidgetJobTracker* self, KJob* job, unsigned long value);
    friend void KAbstractWidgetJobTracker_QBaseSpeed(KAbstractWidgetJobTracker* self, KJob* job, unsigned long value);
    friend void KAbstractWidgetJobTracker_TimerEvent(KAbstractWidgetJobTracker* self, QTimerEvent* event);
    friend void KAbstractWidgetJobTracker_QBaseTimerEvent(KAbstractWidgetJobTracker* self, QTimerEvent* event);
    friend void KAbstractWidgetJobTracker_ChildEvent(KAbstractWidgetJobTracker* self, QChildEvent* event);
    friend void KAbstractWidgetJobTracker_QBaseChildEvent(KAbstractWidgetJobTracker* self, QChildEvent* event);
    friend void KAbstractWidgetJobTracker_CustomEvent(KAbstractWidgetJobTracker* self, QEvent* event);
    friend void KAbstractWidgetJobTracker_QBaseCustomEvent(KAbstractWidgetJobTracker* self, QEvent* event);
    friend void KAbstractWidgetJobTracker_ConnectNotify(KAbstractWidgetJobTracker* self, const QMetaMethod* signal);
    friend void KAbstractWidgetJobTracker_QBaseConnectNotify(KAbstractWidgetJobTracker* self, const QMetaMethod* signal);
    friend void KAbstractWidgetJobTracker_DisconnectNotify(KAbstractWidgetJobTracker* self, const QMetaMethod* signal);
    friend void KAbstractWidgetJobTracker_QBaseDisconnectNotify(KAbstractWidgetJobTracker* self, const QMetaMethod* signal);
    friend QObject* KAbstractWidgetJobTracker_Sender(const KAbstractWidgetJobTracker* self);
    friend QObject* KAbstractWidgetJobTracker_QBaseSender(const KAbstractWidgetJobTracker* self);
    friend int KAbstractWidgetJobTracker_SenderSignalIndex(const KAbstractWidgetJobTracker* self);
    friend int KAbstractWidgetJobTracker_QBaseSenderSignalIndex(const KAbstractWidgetJobTracker* self);
    friend int KAbstractWidgetJobTracker_Receivers(const KAbstractWidgetJobTracker* self, const char* signal);
    friend int KAbstractWidgetJobTracker_QBaseReceivers(const KAbstractWidgetJobTracker* self, const char* signal);
    friend bool KAbstractWidgetJobTracker_IsSignalConnected(const KAbstractWidgetJobTracker* self, const QMetaMethod* signal);
    friend bool KAbstractWidgetJobTracker_QBaseIsSignalConnected(const KAbstractWidgetJobTracker* self, const QMetaMethod* signal);
};

#endif
