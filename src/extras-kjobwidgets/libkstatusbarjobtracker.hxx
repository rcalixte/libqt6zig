#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBVIRTUALKSTATUSBARJOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBVIRTUALKSTATUSBARJOBTRACKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KStatusBarJobTracker so that we can call protected methods
class VirtualKStatusBarJobTracker final : public KStatusBarJobTracker {

  public:
    // Virtual class boolean flag
    bool isVirtualKStatusBarJobTracker = true;

    // Virtual class public types (including callbacks)
    using KStatusBarJobTracker_Metacall_Callback = int (*)(KStatusBarJobTracker*, int, int, void**);
    using KStatusBarJobTracker_RegisterJob_Callback = void (*)(KStatusBarJobTracker*, KJob*);
    using KStatusBarJobTracker_UnregisterJob_Callback = void (*)(KStatusBarJobTracker*, KJob*);
    using KStatusBarJobTracker_Widget_Callback = QWidget* (*)(KStatusBarJobTracker*, KJob*);
    using KStatusBarJobTracker_Description_Callback = void (*)(KStatusBarJobTracker*, KJob*, libqt_string, libqt_pair /* tuple of libqt_string and libqt_string */, libqt_pair /* tuple of libqt_string and libqt_string */);
    using KStatusBarJobTracker_TotalAmount_Callback = void (*)(KStatusBarJobTracker*, KJob*, int, unsigned long long);
    using KStatusBarJobTracker_Percent_Callback = void (*)(KStatusBarJobTracker*, KJob*, unsigned long);
    using KStatusBarJobTracker_Speed_Callback = void (*)(KStatusBarJobTracker*, KJob*, unsigned long);
    using KStatusBarJobTracker_SlotClean_Callback = void (*)(KStatusBarJobTracker*, KJob*);
    using KStatusBarJobTracker_Finished_Callback = void (*)(KStatusBarJobTracker*, KJob*);
    using KStatusBarJobTracker_SlotStop_Callback = void (*)(KStatusBarJobTracker*, KJob*);
    using KStatusBarJobTracker_SlotSuspend_Callback = void (*)(KStatusBarJobTracker*, KJob*);
    using KStatusBarJobTracker_SlotResume_Callback = void (*)(KStatusBarJobTracker*, KJob*);
    using KStatusBarJobTracker_Suspended_Callback = void (*)(KStatusBarJobTracker*, KJob*);
    using KStatusBarJobTracker_Resumed_Callback = void (*)(KStatusBarJobTracker*, KJob*);
    using KStatusBarJobTracker_InfoMessage_Callback = void (*)(KStatusBarJobTracker*, KJob*, libqt_string);
    using KStatusBarJobTracker_Warning_Callback = void (*)(KStatusBarJobTracker*, KJob*, libqt_string);
    using KStatusBarJobTracker_ProcessedAmount_Callback = void (*)(KStatusBarJobTracker*, KJob*, int, unsigned long long);
    using KStatusBarJobTracker_Event_Callback = bool (*)(KStatusBarJobTracker*, QEvent*);
    using KStatusBarJobTracker_EventFilter_Callback = bool (*)(KStatusBarJobTracker*, QObject*, QEvent*);
    using KStatusBarJobTracker_TimerEvent_Callback = void (*)(KStatusBarJobTracker*, QTimerEvent*);
    using KStatusBarJobTracker_ChildEvent_Callback = void (*)(KStatusBarJobTracker*, QChildEvent*);
    using KStatusBarJobTracker_CustomEvent_Callback = void (*)(KStatusBarJobTracker*, QEvent*);
    using KStatusBarJobTracker_ConnectNotify_Callback = void (*)(KStatusBarJobTracker*, QMetaMethod*);
    using KStatusBarJobTracker_DisconnectNotify_Callback = void (*)(KStatusBarJobTracker*, QMetaMethod*);
    using KStatusBarJobTracker_Sender_Callback = QObject* (*)();
    using KStatusBarJobTracker_SenderSignalIndex_Callback = int (*)();
    using KStatusBarJobTracker_Receivers_Callback = int (*)(const KStatusBarJobTracker*, const char*);
    using KStatusBarJobTracker_IsSignalConnected_Callback = bool (*)(const KStatusBarJobTracker*, QMetaMethod*);

  protected:
    // Instance callback storage
    KStatusBarJobTracker_Metacall_Callback kstatusbarjobtracker_metacall_callback = nullptr;
    KStatusBarJobTracker_RegisterJob_Callback kstatusbarjobtracker_registerjob_callback = nullptr;
    KStatusBarJobTracker_UnregisterJob_Callback kstatusbarjobtracker_unregisterjob_callback = nullptr;
    KStatusBarJobTracker_Widget_Callback kstatusbarjobtracker_widget_callback = nullptr;
    KStatusBarJobTracker_Description_Callback kstatusbarjobtracker_description_callback = nullptr;
    KStatusBarJobTracker_TotalAmount_Callback kstatusbarjobtracker_totalamount_callback = nullptr;
    KStatusBarJobTracker_Percent_Callback kstatusbarjobtracker_percent_callback = nullptr;
    KStatusBarJobTracker_Speed_Callback kstatusbarjobtracker_speed_callback = nullptr;
    KStatusBarJobTracker_SlotClean_Callback kstatusbarjobtracker_slotclean_callback = nullptr;
    KStatusBarJobTracker_Finished_Callback kstatusbarjobtracker_finished_callback = nullptr;
    KStatusBarJobTracker_SlotStop_Callback kstatusbarjobtracker_slotstop_callback = nullptr;
    KStatusBarJobTracker_SlotSuspend_Callback kstatusbarjobtracker_slotsuspend_callback = nullptr;
    KStatusBarJobTracker_SlotResume_Callback kstatusbarjobtracker_slotresume_callback = nullptr;
    KStatusBarJobTracker_Suspended_Callback kstatusbarjobtracker_suspended_callback = nullptr;
    KStatusBarJobTracker_Resumed_Callback kstatusbarjobtracker_resumed_callback = nullptr;
    KStatusBarJobTracker_InfoMessage_Callback kstatusbarjobtracker_infomessage_callback = nullptr;
    KStatusBarJobTracker_Warning_Callback kstatusbarjobtracker_warning_callback = nullptr;
    KStatusBarJobTracker_ProcessedAmount_Callback kstatusbarjobtracker_processedamount_callback = nullptr;
    KStatusBarJobTracker_Event_Callback kstatusbarjobtracker_event_callback = nullptr;
    KStatusBarJobTracker_EventFilter_Callback kstatusbarjobtracker_eventfilter_callback = nullptr;
    KStatusBarJobTracker_TimerEvent_Callback kstatusbarjobtracker_timerevent_callback = nullptr;
    KStatusBarJobTracker_ChildEvent_Callback kstatusbarjobtracker_childevent_callback = nullptr;
    KStatusBarJobTracker_CustomEvent_Callback kstatusbarjobtracker_customevent_callback = nullptr;
    KStatusBarJobTracker_ConnectNotify_Callback kstatusbarjobtracker_connectnotify_callback = nullptr;
    KStatusBarJobTracker_DisconnectNotify_Callback kstatusbarjobtracker_disconnectnotify_callback = nullptr;
    KStatusBarJobTracker_Sender_Callback kstatusbarjobtracker_sender_callback = nullptr;
    KStatusBarJobTracker_SenderSignalIndex_Callback kstatusbarjobtracker_sendersignalindex_callback = nullptr;
    KStatusBarJobTracker_Receivers_Callback kstatusbarjobtracker_receivers_callback = nullptr;
    KStatusBarJobTracker_IsSignalConnected_Callback kstatusbarjobtracker_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kstatusbarjobtracker_metacall_isbase = false;
    mutable bool kstatusbarjobtracker_registerjob_isbase = false;
    mutable bool kstatusbarjobtracker_unregisterjob_isbase = false;
    mutable bool kstatusbarjobtracker_widget_isbase = false;
    mutable bool kstatusbarjobtracker_description_isbase = false;
    mutable bool kstatusbarjobtracker_totalamount_isbase = false;
    mutable bool kstatusbarjobtracker_percent_isbase = false;
    mutable bool kstatusbarjobtracker_speed_isbase = false;
    mutable bool kstatusbarjobtracker_slotclean_isbase = false;
    mutable bool kstatusbarjobtracker_finished_isbase = false;
    mutable bool kstatusbarjobtracker_slotstop_isbase = false;
    mutable bool kstatusbarjobtracker_slotsuspend_isbase = false;
    mutable bool kstatusbarjobtracker_slotresume_isbase = false;
    mutable bool kstatusbarjobtracker_suspended_isbase = false;
    mutable bool kstatusbarjobtracker_resumed_isbase = false;
    mutable bool kstatusbarjobtracker_infomessage_isbase = false;
    mutable bool kstatusbarjobtracker_warning_isbase = false;
    mutable bool kstatusbarjobtracker_processedamount_isbase = false;
    mutable bool kstatusbarjobtracker_event_isbase = false;
    mutable bool kstatusbarjobtracker_eventfilter_isbase = false;
    mutable bool kstatusbarjobtracker_timerevent_isbase = false;
    mutable bool kstatusbarjobtracker_childevent_isbase = false;
    mutable bool kstatusbarjobtracker_customevent_isbase = false;
    mutable bool kstatusbarjobtracker_connectnotify_isbase = false;
    mutable bool kstatusbarjobtracker_disconnectnotify_isbase = false;
    mutable bool kstatusbarjobtracker_sender_isbase = false;
    mutable bool kstatusbarjobtracker_sendersignalindex_isbase = false;
    mutable bool kstatusbarjobtracker_receivers_isbase = false;
    mutable bool kstatusbarjobtracker_issignalconnected_isbase = false;

  public:
    VirtualKStatusBarJobTracker(QWidget* parent) : KStatusBarJobTracker(parent) {};
    VirtualKStatusBarJobTracker() : KStatusBarJobTracker() {};
    VirtualKStatusBarJobTracker(QWidget* parent, bool button) : KStatusBarJobTracker(parent, button) {};

    ~VirtualKStatusBarJobTracker() {
        kstatusbarjobtracker_metacall_callback = nullptr;
        kstatusbarjobtracker_registerjob_callback = nullptr;
        kstatusbarjobtracker_unregisterjob_callback = nullptr;
        kstatusbarjobtracker_widget_callback = nullptr;
        kstatusbarjobtracker_description_callback = nullptr;
        kstatusbarjobtracker_totalamount_callback = nullptr;
        kstatusbarjobtracker_percent_callback = nullptr;
        kstatusbarjobtracker_speed_callback = nullptr;
        kstatusbarjobtracker_slotclean_callback = nullptr;
        kstatusbarjobtracker_finished_callback = nullptr;
        kstatusbarjobtracker_slotstop_callback = nullptr;
        kstatusbarjobtracker_slotsuspend_callback = nullptr;
        kstatusbarjobtracker_slotresume_callback = nullptr;
        kstatusbarjobtracker_suspended_callback = nullptr;
        kstatusbarjobtracker_resumed_callback = nullptr;
        kstatusbarjobtracker_infomessage_callback = nullptr;
        kstatusbarjobtracker_warning_callback = nullptr;
        kstatusbarjobtracker_processedamount_callback = nullptr;
        kstatusbarjobtracker_event_callback = nullptr;
        kstatusbarjobtracker_eventfilter_callback = nullptr;
        kstatusbarjobtracker_timerevent_callback = nullptr;
        kstatusbarjobtracker_childevent_callback = nullptr;
        kstatusbarjobtracker_customevent_callback = nullptr;
        kstatusbarjobtracker_connectnotify_callback = nullptr;
        kstatusbarjobtracker_disconnectnotify_callback = nullptr;
        kstatusbarjobtracker_sender_callback = nullptr;
        kstatusbarjobtracker_sendersignalindex_callback = nullptr;
        kstatusbarjobtracker_receivers_callback = nullptr;
        kstatusbarjobtracker_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKStatusBarJobTracker_Metacall_Callback(KStatusBarJobTracker_Metacall_Callback cb) { kstatusbarjobtracker_metacall_callback = cb; }
    inline void setKStatusBarJobTracker_RegisterJob_Callback(KStatusBarJobTracker_RegisterJob_Callback cb) { kstatusbarjobtracker_registerjob_callback = cb; }
    inline void setKStatusBarJobTracker_UnregisterJob_Callback(KStatusBarJobTracker_UnregisterJob_Callback cb) { kstatusbarjobtracker_unregisterjob_callback = cb; }
    inline void setKStatusBarJobTracker_Widget_Callback(KStatusBarJobTracker_Widget_Callback cb) { kstatusbarjobtracker_widget_callback = cb; }
    inline void setKStatusBarJobTracker_Description_Callback(KStatusBarJobTracker_Description_Callback cb) { kstatusbarjobtracker_description_callback = cb; }
    inline void setKStatusBarJobTracker_TotalAmount_Callback(KStatusBarJobTracker_TotalAmount_Callback cb) { kstatusbarjobtracker_totalamount_callback = cb; }
    inline void setKStatusBarJobTracker_Percent_Callback(KStatusBarJobTracker_Percent_Callback cb) { kstatusbarjobtracker_percent_callback = cb; }
    inline void setKStatusBarJobTracker_Speed_Callback(KStatusBarJobTracker_Speed_Callback cb) { kstatusbarjobtracker_speed_callback = cb; }
    inline void setKStatusBarJobTracker_SlotClean_Callback(KStatusBarJobTracker_SlotClean_Callback cb) { kstatusbarjobtracker_slotclean_callback = cb; }
    inline void setKStatusBarJobTracker_Finished_Callback(KStatusBarJobTracker_Finished_Callback cb) { kstatusbarjobtracker_finished_callback = cb; }
    inline void setKStatusBarJobTracker_SlotStop_Callback(KStatusBarJobTracker_SlotStop_Callback cb) { kstatusbarjobtracker_slotstop_callback = cb; }
    inline void setKStatusBarJobTracker_SlotSuspend_Callback(KStatusBarJobTracker_SlotSuspend_Callback cb) { kstatusbarjobtracker_slotsuspend_callback = cb; }
    inline void setKStatusBarJobTracker_SlotResume_Callback(KStatusBarJobTracker_SlotResume_Callback cb) { kstatusbarjobtracker_slotresume_callback = cb; }
    inline void setKStatusBarJobTracker_Suspended_Callback(KStatusBarJobTracker_Suspended_Callback cb) { kstatusbarjobtracker_suspended_callback = cb; }
    inline void setKStatusBarJobTracker_Resumed_Callback(KStatusBarJobTracker_Resumed_Callback cb) { kstatusbarjobtracker_resumed_callback = cb; }
    inline void setKStatusBarJobTracker_InfoMessage_Callback(KStatusBarJobTracker_InfoMessage_Callback cb) { kstatusbarjobtracker_infomessage_callback = cb; }
    inline void setKStatusBarJobTracker_Warning_Callback(KStatusBarJobTracker_Warning_Callback cb) { kstatusbarjobtracker_warning_callback = cb; }
    inline void setKStatusBarJobTracker_ProcessedAmount_Callback(KStatusBarJobTracker_ProcessedAmount_Callback cb) { kstatusbarjobtracker_processedamount_callback = cb; }
    inline void setKStatusBarJobTracker_Event_Callback(KStatusBarJobTracker_Event_Callback cb) { kstatusbarjobtracker_event_callback = cb; }
    inline void setKStatusBarJobTracker_EventFilter_Callback(KStatusBarJobTracker_EventFilter_Callback cb) { kstatusbarjobtracker_eventfilter_callback = cb; }
    inline void setKStatusBarJobTracker_TimerEvent_Callback(KStatusBarJobTracker_TimerEvent_Callback cb) { kstatusbarjobtracker_timerevent_callback = cb; }
    inline void setKStatusBarJobTracker_ChildEvent_Callback(KStatusBarJobTracker_ChildEvent_Callback cb) { kstatusbarjobtracker_childevent_callback = cb; }
    inline void setKStatusBarJobTracker_CustomEvent_Callback(KStatusBarJobTracker_CustomEvent_Callback cb) { kstatusbarjobtracker_customevent_callback = cb; }
    inline void setKStatusBarJobTracker_ConnectNotify_Callback(KStatusBarJobTracker_ConnectNotify_Callback cb) { kstatusbarjobtracker_connectnotify_callback = cb; }
    inline void setKStatusBarJobTracker_DisconnectNotify_Callback(KStatusBarJobTracker_DisconnectNotify_Callback cb) { kstatusbarjobtracker_disconnectnotify_callback = cb; }
    inline void setKStatusBarJobTracker_Sender_Callback(KStatusBarJobTracker_Sender_Callback cb) { kstatusbarjobtracker_sender_callback = cb; }
    inline void setKStatusBarJobTracker_SenderSignalIndex_Callback(KStatusBarJobTracker_SenderSignalIndex_Callback cb) { kstatusbarjobtracker_sendersignalindex_callback = cb; }
    inline void setKStatusBarJobTracker_Receivers_Callback(KStatusBarJobTracker_Receivers_Callback cb) { kstatusbarjobtracker_receivers_callback = cb; }
    inline void setKStatusBarJobTracker_IsSignalConnected_Callback(KStatusBarJobTracker_IsSignalConnected_Callback cb) { kstatusbarjobtracker_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKStatusBarJobTracker_Metacall_IsBase(bool value) const { kstatusbarjobtracker_metacall_isbase = value; }
    inline void setKStatusBarJobTracker_RegisterJob_IsBase(bool value) const { kstatusbarjobtracker_registerjob_isbase = value; }
    inline void setKStatusBarJobTracker_UnregisterJob_IsBase(bool value) const { kstatusbarjobtracker_unregisterjob_isbase = value; }
    inline void setKStatusBarJobTracker_Widget_IsBase(bool value) const { kstatusbarjobtracker_widget_isbase = value; }
    inline void setKStatusBarJobTracker_Description_IsBase(bool value) const { kstatusbarjobtracker_description_isbase = value; }
    inline void setKStatusBarJobTracker_TotalAmount_IsBase(bool value) const { kstatusbarjobtracker_totalamount_isbase = value; }
    inline void setKStatusBarJobTracker_Percent_IsBase(bool value) const { kstatusbarjobtracker_percent_isbase = value; }
    inline void setKStatusBarJobTracker_Speed_IsBase(bool value) const { kstatusbarjobtracker_speed_isbase = value; }
    inline void setKStatusBarJobTracker_SlotClean_IsBase(bool value) const { kstatusbarjobtracker_slotclean_isbase = value; }
    inline void setKStatusBarJobTracker_Finished_IsBase(bool value) const { kstatusbarjobtracker_finished_isbase = value; }
    inline void setKStatusBarJobTracker_SlotStop_IsBase(bool value) const { kstatusbarjobtracker_slotstop_isbase = value; }
    inline void setKStatusBarJobTracker_SlotSuspend_IsBase(bool value) const { kstatusbarjobtracker_slotsuspend_isbase = value; }
    inline void setKStatusBarJobTracker_SlotResume_IsBase(bool value) const { kstatusbarjobtracker_slotresume_isbase = value; }
    inline void setKStatusBarJobTracker_Suspended_IsBase(bool value) const { kstatusbarjobtracker_suspended_isbase = value; }
    inline void setKStatusBarJobTracker_Resumed_IsBase(bool value) const { kstatusbarjobtracker_resumed_isbase = value; }
    inline void setKStatusBarJobTracker_InfoMessage_IsBase(bool value) const { kstatusbarjobtracker_infomessage_isbase = value; }
    inline void setKStatusBarJobTracker_Warning_IsBase(bool value) const { kstatusbarjobtracker_warning_isbase = value; }
    inline void setKStatusBarJobTracker_ProcessedAmount_IsBase(bool value) const { kstatusbarjobtracker_processedamount_isbase = value; }
    inline void setKStatusBarJobTracker_Event_IsBase(bool value) const { kstatusbarjobtracker_event_isbase = value; }
    inline void setKStatusBarJobTracker_EventFilter_IsBase(bool value) const { kstatusbarjobtracker_eventfilter_isbase = value; }
    inline void setKStatusBarJobTracker_TimerEvent_IsBase(bool value) const { kstatusbarjobtracker_timerevent_isbase = value; }
    inline void setKStatusBarJobTracker_ChildEvent_IsBase(bool value) const { kstatusbarjobtracker_childevent_isbase = value; }
    inline void setKStatusBarJobTracker_CustomEvent_IsBase(bool value) const { kstatusbarjobtracker_customevent_isbase = value; }
    inline void setKStatusBarJobTracker_ConnectNotify_IsBase(bool value) const { kstatusbarjobtracker_connectnotify_isbase = value; }
    inline void setKStatusBarJobTracker_DisconnectNotify_IsBase(bool value) const { kstatusbarjobtracker_disconnectnotify_isbase = value; }
    inline void setKStatusBarJobTracker_Sender_IsBase(bool value) const { kstatusbarjobtracker_sender_isbase = value; }
    inline void setKStatusBarJobTracker_SenderSignalIndex_IsBase(bool value) const { kstatusbarjobtracker_sendersignalindex_isbase = value; }
    inline void setKStatusBarJobTracker_Receivers_IsBase(bool value) const { kstatusbarjobtracker_receivers_isbase = value; }
    inline void setKStatusBarJobTracker_IsSignalConnected_IsBase(bool value) const { kstatusbarjobtracker_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kstatusbarjobtracker_metacall_isbase) {
            kstatusbarjobtracker_metacall_isbase = false;
            return KStatusBarJobTracker::qt_metacall(param1, param2, param3);
        } else if (kstatusbarjobtracker_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kstatusbarjobtracker_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KStatusBarJobTracker::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void registerJob(KJob* job) override {
        if (kstatusbarjobtracker_registerjob_isbase) {
            kstatusbarjobtracker_registerjob_isbase = false;
            KStatusBarJobTracker::registerJob(job);
        } else if (kstatusbarjobtracker_registerjob_callback != nullptr) {
            KJob* cbval1 = job;

            kstatusbarjobtracker_registerjob_callback(this, cbval1);
        } else {
            KStatusBarJobTracker::registerJob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unregisterJob(KJob* job) override {
        if (kstatusbarjobtracker_unregisterjob_isbase) {
            kstatusbarjobtracker_unregisterjob_isbase = false;
            KStatusBarJobTracker::unregisterJob(job);
        } else if (kstatusbarjobtracker_unregisterjob_callback != nullptr) {
            KJob* cbval1 = job;

            kstatusbarjobtracker_unregisterjob_callback(this, cbval1);
        } else {
            KStatusBarJobTracker::unregisterJob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget(KJob* job) override {
        if (kstatusbarjobtracker_widget_isbase) {
            kstatusbarjobtracker_widget_isbase = false;
            return KStatusBarJobTracker::widget(job);
        } else if (kstatusbarjobtracker_widget_callback != nullptr) {
            KJob* cbval1 = job;

            QWidget* callback_ret = kstatusbarjobtracker_widget_callback(this, cbval1);
            return callback_ret;
        } else {
            return KStatusBarJobTracker::widget(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void description(KJob* job, const QString& title, const QPair<QString, QString>& field1, const QPair<QString, QString>& field2) override {
        if (kstatusbarjobtracker_description_isbase) {
            kstatusbarjobtracker_description_isbase = false;
            KStatusBarJobTracker::description(job, title, field1, field2);
        } else if (kstatusbarjobtracker_description_callback != nullptr) {
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

            kstatusbarjobtracker_description_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KStatusBarJobTracker::description(job, title, field1, field2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void totalAmount(KJob* job, KJob::Unit unit, qulonglong amount) override {
        if (kstatusbarjobtracker_totalamount_isbase) {
            kstatusbarjobtracker_totalamount_isbase = false;
            KStatusBarJobTracker::totalAmount(job, unit, amount);
        } else if (kstatusbarjobtracker_totalamount_callback != nullptr) {
            KJob* cbval1 = job;
            int cbval2 = static_cast<int>(unit);
            unsigned long long cbval3 = static_cast<unsigned long long>(amount);

            kstatusbarjobtracker_totalamount_callback(this, cbval1, cbval2, cbval3);
        } else {
            KStatusBarJobTracker::totalAmount(job, unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void percent(KJob* job, unsigned long percent) override {
        if (kstatusbarjobtracker_percent_isbase) {
            kstatusbarjobtracker_percent_isbase = false;
            KStatusBarJobTracker::percent(job, percent);
        } else if (kstatusbarjobtracker_percent_callback != nullptr) {
            KJob* cbval1 = job;
            unsigned long cbval2 = percent;

            kstatusbarjobtracker_percent_callback(this, cbval1, cbval2);
        } else {
            KStatusBarJobTracker::percent(job, percent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void speed(KJob* job, unsigned long value) override {
        if (kstatusbarjobtracker_speed_isbase) {
            kstatusbarjobtracker_speed_isbase = false;
            KStatusBarJobTracker::speed(job, value);
        } else if (kstatusbarjobtracker_speed_callback != nullptr) {
            KJob* cbval1 = job;
            unsigned long cbval2 = value;

            kstatusbarjobtracker_speed_callback(this, cbval1, cbval2);
        } else {
            KStatusBarJobTracker::speed(job, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotClean(KJob* job) override {
        if (kstatusbarjobtracker_slotclean_isbase) {
            kstatusbarjobtracker_slotclean_isbase = false;
            KStatusBarJobTracker::slotClean(job);
        } else if (kstatusbarjobtracker_slotclean_callback != nullptr) {
            KJob* cbval1 = job;

            kstatusbarjobtracker_slotclean_callback(this, cbval1);
        } else {
            KStatusBarJobTracker::slotClean(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void finished(KJob* job) override {
        if (kstatusbarjobtracker_finished_isbase) {
            kstatusbarjobtracker_finished_isbase = false;
            KStatusBarJobTracker::finished(job);
        } else if (kstatusbarjobtracker_finished_callback != nullptr) {
            KJob* cbval1 = job;

            kstatusbarjobtracker_finished_callback(this, cbval1);
        } else {
            KStatusBarJobTracker::finished(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotStop(KJob* job) override {
        if (kstatusbarjobtracker_slotstop_isbase) {
            kstatusbarjobtracker_slotstop_isbase = false;
            KStatusBarJobTracker::slotStop(job);
        } else if (kstatusbarjobtracker_slotstop_callback != nullptr) {
            KJob* cbval1 = job;

            kstatusbarjobtracker_slotstop_callback(this, cbval1);
        } else {
            KStatusBarJobTracker::slotStop(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotSuspend(KJob* job) override {
        if (kstatusbarjobtracker_slotsuspend_isbase) {
            kstatusbarjobtracker_slotsuspend_isbase = false;
            KStatusBarJobTracker::slotSuspend(job);
        } else if (kstatusbarjobtracker_slotsuspend_callback != nullptr) {
            KJob* cbval1 = job;

            kstatusbarjobtracker_slotsuspend_callback(this, cbval1);
        } else {
            KStatusBarJobTracker::slotSuspend(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotResume(KJob* job) override {
        if (kstatusbarjobtracker_slotresume_isbase) {
            kstatusbarjobtracker_slotresume_isbase = false;
            KStatusBarJobTracker::slotResume(job);
        } else if (kstatusbarjobtracker_slotresume_callback != nullptr) {
            KJob* cbval1 = job;

            kstatusbarjobtracker_slotresume_callback(this, cbval1);
        } else {
            KStatusBarJobTracker::slotResume(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void suspended(KJob* job) override {
        if (kstatusbarjobtracker_suspended_isbase) {
            kstatusbarjobtracker_suspended_isbase = false;
            KStatusBarJobTracker::suspended(job);
        } else if (kstatusbarjobtracker_suspended_callback != nullptr) {
            KJob* cbval1 = job;

            kstatusbarjobtracker_suspended_callback(this, cbval1);
        } else {
            KStatusBarJobTracker::suspended(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resumed(KJob* job) override {
        if (kstatusbarjobtracker_resumed_isbase) {
            kstatusbarjobtracker_resumed_isbase = false;
            KStatusBarJobTracker::resumed(job);
        } else if (kstatusbarjobtracker_resumed_callback != nullptr) {
            KJob* cbval1 = job;

            kstatusbarjobtracker_resumed_callback(this, cbval1);
        } else {
            KStatusBarJobTracker::resumed(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void infoMessage(KJob* job, const QString& message) override {
        if (kstatusbarjobtracker_infomessage_isbase) {
            kstatusbarjobtracker_infomessage_isbase = false;
            KStatusBarJobTracker::infoMessage(job, message);
        } else if (kstatusbarjobtracker_infomessage_callback != nullptr) {
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

            kstatusbarjobtracker_infomessage_callback(this, cbval1, cbval2);
        } else {
            KStatusBarJobTracker::infoMessage(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void warning(KJob* job, const QString& message) override {
        if (kstatusbarjobtracker_warning_isbase) {
            kstatusbarjobtracker_warning_isbase = false;
            KStatusBarJobTracker::warning(job, message);
        } else if (kstatusbarjobtracker_warning_callback != nullptr) {
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

            kstatusbarjobtracker_warning_callback(this, cbval1, cbval2);
        } else {
            KStatusBarJobTracker::warning(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void processedAmount(KJob* job, KJob::Unit unit, qulonglong amount) override {
        if (kstatusbarjobtracker_processedamount_isbase) {
            kstatusbarjobtracker_processedamount_isbase = false;
            KStatusBarJobTracker::processedAmount(job, unit, amount);
        } else if (kstatusbarjobtracker_processedamount_callback != nullptr) {
            KJob* cbval1 = job;
            int cbval2 = static_cast<int>(unit);
            unsigned long long cbval3 = static_cast<unsigned long long>(amount);

            kstatusbarjobtracker_processedamount_callback(this, cbval1, cbval2, cbval3);
        } else {
            KStatusBarJobTracker::processedAmount(job, unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kstatusbarjobtracker_event_isbase) {
            kstatusbarjobtracker_event_isbase = false;
            return KStatusBarJobTracker::event(event);
        } else if (kstatusbarjobtracker_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kstatusbarjobtracker_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KStatusBarJobTracker::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kstatusbarjobtracker_eventfilter_isbase) {
            kstatusbarjobtracker_eventfilter_isbase = false;
            return KStatusBarJobTracker::eventFilter(watched, event);
        } else if (kstatusbarjobtracker_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kstatusbarjobtracker_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KStatusBarJobTracker::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kstatusbarjobtracker_timerevent_isbase) {
            kstatusbarjobtracker_timerevent_isbase = false;
            KStatusBarJobTracker::timerEvent(event);
        } else if (kstatusbarjobtracker_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kstatusbarjobtracker_timerevent_callback(this, cbval1);
        } else {
            KStatusBarJobTracker::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kstatusbarjobtracker_childevent_isbase) {
            kstatusbarjobtracker_childevent_isbase = false;
            KStatusBarJobTracker::childEvent(event);
        } else if (kstatusbarjobtracker_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kstatusbarjobtracker_childevent_callback(this, cbval1);
        } else {
            KStatusBarJobTracker::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kstatusbarjobtracker_customevent_isbase) {
            kstatusbarjobtracker_customevent_isbase = false;
            KStatusBarJobTracker::customEvent(event);
        } else if (kstatusbarjobtracker_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kstatusbarjobtracker_customevent_callback(this, cbval1);
        } else {
            KStatusBarJobTracker::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kstatusbarjobtracker_connectnotify_isbase) {
            kstatusbarjobtracker_connectnotify_isbase = false;
            KStatusBarJobTracker::connectNotify(signal);
        } else if (kstatusbarjobtracker_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kstatusbarjobtracker_connectnotify_callback(this, cbval1);
        } else {
            KStatusBarJobTracker::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kstatusbarjobtracker_disconnectnotify_isbase) {
            kstatusbarjobtracker_disconnectnotify_isbase = false;
            KStatusBarJobTracker::disconnectNotify(signal);
        } else if (kstatusbarjobtracker_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kstatusbarjobtracker_disconnectnotify_callback(this, cbval1);
        } else {
            KStatusBarJobTracker::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kstatusbarjobtracker_sender_isbase) {
            kstatusbarjobtracker_sender_isbase = false;
            return KStatusBarJobTracker::sender();
        } else if (kstatusbarjobtracker_sender_callback != nullptr) {
            QObject* callback_ret = kstatusbarjobtracker_sender_callback();
            return callback_ret;
        } else {
            return KStatusBarJobTracker::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kstatusbarjobtracker_sendersignalindex_isbase) {
            kstatusbarjobtracker_sendersignalindex_isbase = false;
            return KStatusBarJobTracker::senderSignalIndex();
        } else if (kstatusbarjobtracker_sendersignalindex_callback != nullptr) {
            int callback_ret = kstatusbarjobtracker_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KStatusBarJobTracker::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kstatusbarjobtracker_receivers_isbase) {
            kstatusbarjobtracker_receivers_isbase = false;
            return KStatusBarJobTracker::receivers(signal);
        } else if (kstatusbarjobtracker_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kstatusbarjobtracker_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KStatusBarJobTracker::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kstatusbarjobtracker_issignalconnected_isbase) {
            kstatusbarjobtracker_issignalconnected_isbase = false;
            return KStatusBarJobTracker::isSignalConnected(signal);
        } else if (kstatusbarjobtracker_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kstatusbarjobtracker_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KStatusBarJobTracker::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KStatusBarJobTracker_Finished(KStatusBarJobTracker* self, KJob* job);
    friend void KStatusBarJobTracker_QBaseFinished(KStatusBarJobTracker* self, KJob* job);
    friend void KStatusBarJobTracker_SlotStop(KStatusBarJobTracker* self, KJob* job);
    friend void KStatusBarJobTracker_QBaseSlotStop(KStatusBarJobTracker* self, KJob* job);
    friend void KStatusBarJobTracker_SlotSuspend(KStatusBarJobTracker* self, KJob* job);
    friend void KStatusBarJobTracker_QBaseSlotSuspend(KStatusBarJobTracker* self, KJob* job);
    friend void KStatusBarJobTracker_SlotResume(KStatusBarJobTracker* self, KJob* job);
    friend void KStatusBarJobTracker_QBaseSlotResume(KStatusBarJobTracker* self, KJob* job);
    friend void KStatusBarJobTracker_Suspended(KStatusBarJobTracker* self, KJob* job);
    friend void KStatusBarJobTracker_QBaseSuspended(KStatusBarJobTracker* self, KJob* job);
    friend void KStatusBarJobTracker_Resumed(KStatusBarJobTracker* self, KJob* job);
    friend void KStatusBarJobTracker_QBaseResumed(KStatusBarJobTracker* self, KJob* job);
    friend void KStatusBarJobTracker_InfoMessage(KStatusBarJobTracker* self, KJob* job, const libqt_string message);
    friend void KStatusBarJobTracker_QBaseInfoMessage(KStatusBarJobTracker* self, KJob* job, const libqt_string message);
    friend void KStatusBarJobTracker_Warning(KStatusBarJobTracker* self, KJob* job, const libqt_string message);
    friend void KStatusBarJobTracker_QBaseWarning(KStatusBarJobTracker* self, KJob* job, const libqt_string message);
    friend void KStatusBarJobTracker_ProcessedAmount(KStatusBarJobTracker* self, KJob* job, int unit, unsigned long long amount);
    friend void KStatusBarJobTracker_QBaseProcessedAmount(KStatusBarJobTracker* self, KJob* job, int unit, unsigned long long amount);
    friend void KStatusBarJobTracker_TimerEvent(KStatusBarJobTracker* self, QTimerEvent* event);
    friend void KStatusBarJobTracker_QBaseTimerEvent(KStatusBarJobTracker* self, QTimerEvent* event);
    friend void KStatusBarJobTracker_ChildEvent(KStatusBarJobTracker* self, QChildEvent* event);
    friend void KStatusBarJobTracker_QBaseChildEvent(KStatusBarJobTracker* self, QChildEvent* event);
    friend void KStatusBarJobTracker_CustomEvent(KStatusBarJobTracker* self, QEvent* event);
    friend void KStatusBarJobTracker_QBaseCustomEvent(KStatusBarJobTracker* self, QEvent* event);
    friend void KStatusBarJobTracker_ConnectNotify(KStatusBarJobTracker* self, const QMetaMethod* signal);
    friend void KStatusBarJobTracker_QBaseConnectNotify(KStatusBarJobTracker* self, const QMetaMethod* signal);
    friend void KStatusBarJobTracker_DisconnectNotify(KStatusBarJobTracker* self, const QMetaMethod* signal);
    friend void KStatusBarJobTracker_QBaseDisconnectNotify(KStatusBarJobTracker* self, const QMetaMethod* signal);
    friend QObject* KStatusBarJobTracker_Sender(const KStatusBarJobTracker* self);
    friend QObject* KStatusBarJobTracker_QBaseSender(const KStatusBarJobTracker* self);
    friend int KStatusBarJobTracker_SenderSignalIndex(const KStatusBarJobTracker* self);
    friend int KStatusBarJobTracker_QBaseSenderSignalIndex(const KStatusBarJobTracker* self);
    friend int KStatusBarJobTracker_Receivers(const KStatusBarJobTracker* self, const char* signal);
    friend int KStatusBarJobTracker_QBaseReceivers(const KStatusBarJobTracker* self, const char* signal);
    friend bool KStatusBarJobTracker_IsSignalConnected(const KStatusBarJobTracker* self, const QMetaMethod* signal);
    friend bool KStatusBarJobTracker_QBaseIsSignalConnected(const KStatusBarJobTracker* self, const QMetaMethod* signal);
};

#endif
