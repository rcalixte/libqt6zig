#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBVIRTUALKWIDGETJOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBVIRTUALKWIDGETJOBTRACKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KWidgetJobTracker so that we can call protected methods
class VirtualKWidgetJobTracker final : public KWidgetJobTracker {

  public:
    // Virtual class boolean flag
    bool isVirtualKWidgetJobTracker = true;

    // Virtual class public types (including callbacks)
    using KWidgetJobTracker_Metacall_Callback = int (*)(KWidgetJobTracker*, int, int, void**);
    using KWidgetJobTracker_Widget_Callback = QWidget* (*)(KWidgetJobTracker*, KJob*);
    using KWidgetJobTracker_RegisterJob_Callback = void (*)(KWidgetJobTracker*, KJob*);
    using KWidgetJobTracker_UnregisterJob_Callback = void (*)(KWidgetJobTracker*, KJob*);
    using KWidgetJobTracker_InfoMessage_Callback = void (*)(KWidgetJobTracker*, KJob*, libqt_string);
    using KWidgetJobTracker_Description_Callback = void (*)(KWidgetJobTracker*, KJob*, libqt_string, libqt_pair /* tuple of libqt_string and libqt_string */, libqt_pair /* tuple of libqt_string and libqt_string */);
    using KWidgetJobTracker_TotalAmount_Callback = void (*)(KWidgetJobTracker*, KJob*, int, unsigned long long);
    using KWidgetJobTracker_ProcessedAmount_Callback = void (*)(KWidgetJobTracker*, KJob*, int, unsigned long long);
    using KWidgetJobTracker_Percent_Callback = void (*)(KWidgetJobTracker*, KJob*, unsigned long);
    using KWidgetJobTracker_Speed_Callback = void (*)(KWidgetJobTracker*, KJob*, unsigned long);
    using KWidgetJobTracker_SlotClean_Callback = void (*)(KWidgetJobTracker*, KJob*);
    using KWidgetJobTracker_Suspended_Callback = void (*)(KWidgetJobTracker*, KJob*);
    using KWidgetJobTracker_Resumed_Callback = void (*)(KWidgetJobTracker*, KJob*);
    using KWidgetJobTracker_Finished_Callback = void (*)(KWidgetJobTracker*, KJob*);
    using KWidgetJobTracker_SlotStop_Callback = void (*)(KWidgetJobTracker*, KJob*);
    using KWidgetJobTracker_SlotSuspend_Callback = void (*)(KWidgetJobTracker*, KJob*);
    using KWidgetJobTracker_SlotResume_Callback = void (*)(KWidgetJobTracker*, KJob*);
    using KWidgetJobTracker_Warning_Callback = void (*)(KWidgetJobTracker*, KJob*, libqt_string);
    using KWidgetJobTracker_Event_Callback = bool (*)(KWidgetJobTracker*, QEvent*);
    using KWidgetJobTracker_EventFilter_Callback = bool (*)(KWidgetJobTracker*, QObject*, QEvent*);
    using KWidgetJobTracker_TimerEvent_Callback = void (*)(KWidgetJobTracker*, QTimerEvent*);
    using KWidgetJobTracker_ChildEvent_Callback = void (*)(KWidgetJobTracker*, QChildEvent*);
    using KWidgetJobTracker_CustomEvent_Callback = void (*)(KWidgetJobTracker*, QEvent*);
    using KWidgetJobTracker_ConnectNotify_Callback = void (*)(KWidgetJobTracker*, QMetaMethod*);
    using KWidgetJobTracker_DisconnectNotify_Callback = void (*)(KWidgetJobTracker*, QMetaMethod*);
    using KWidgetJobTracker_Sender_Callback = QObject* (*)();
    using KWidgetJobTracker_SenderSignalIndex_Callback = int (*)();
    using KWidgetJobTracker_Receivers_Callback = int (*)(const KWidgetJobTracker*, const char*);
    using KWidgetJobTracker_IsSignalConnected_Callback = bool (*)(const KWidgetJobTracker*, QMetaMethod*);

  protected:
    // Instance callback storage
    KWidgetJobTracker_Metacall_Callback kwidgetjobtracker_metacall_callback = nullptr;
    KWidgetJobTracker_Widget_Callback kwidgetjobtracker_widget_callback = nullptr;
    KWidgetJobTracker_RegisterJob_Callback kwidgetjobtracker_registerjob_callback = nullptr;
    KWidgetJobTracker_UnregisterJob_Callback kwidgetjobtracker_unregisterjob_callback = nullptr;
    KWidgetJobTracker_InfoMessage_Callback kwidgetjobtracker_infomessage_callback = nullptr;
    KWidgetJobTracker_Description_Callback kwidgetjobtracker_description_callback = nullptr;
    KWidgetJobTracker_TotalAmount_Callback kwidgetjobtracker_totalamount_callback = nullptr;
    KWidgetJobTracker_ProcessedAmount_Callback kwidgetjobtracker_processedamount_callback = nullptr;
    KWidgetJobTracker_Percent_Callback kwidgetjobtracker_percent_callback = nullptr;
    KWidgetJobTracker_Speed_Callback kwidgetjobtracker_speed_callback = nullptr;
    KWidgetJobTracker_SlotClean_Callback kwidgetjobtracker_slotclean_callback = nullptr;
    KWidgetJobTracker_Suspended_Callback kwidgetjobtracker_suspended_callback = nullptr;
    KWidgetJobTracker_Resumed_Callback kwidgetjobtracker_resumed_callback = nullptr;
    KWidgetJobTracker_Finished_Callback kwidgetjobtracker_finished_callback = nullptr;
    KWidgetJobTracker_SlotStop_Callback kwidgetjobtracker_slotstop_callback = nullptr;
    KWidgetJobTracker_SlotSuspend_Callback kwidgetjobtracker_slotsuspend_callback = nullptr;
    KWidgetJobTracker_SlotResume_Callback kwidgetjobtracker_slotresume_callback = nullptr;
    KWidgetJobTracker_Warning_Callback kwidgetjobtracker_warning_callback = nullptr;
    KWidgetJobTracker_Event_Callback kwidgetjobtracker_event_callback = nullptr;
    KWidgetJobTracker_EventFilter_Callback kwidgetjobtracker_eventfilter_callback = nullptr;
    KWidgetJobTracker_TimerEvent_Callback kwidgetjobtracker_timerevent_callback = nullptr;
    KWidgetJobTracker_ChildEvent_Callback kwidgetjobtracker_childevent_callback = nullptr;
    KWidgetJobTracker_CustomEvent_Callback kwidgetjobtracker_customevent_callback = nullptr;
    KWidgetJobTracker_ConnectNotify_Callback kwidgetjobtracker_connectnotify_callback = nullptr;
    KWidgetJobTracker_DisconnectNotify_Callback kwidgetjobtracker_disconnectnotify_callback = nullptr;
    KWidgetJobTracker_Sender_Callback kwidgetjobtracker_sender_callback = nullptr;
    KWidgetJobTracker_SenderSignalIndex_Callback kwidgetjobtracker_sendersignalindex_callback = nullptr;
    KWidgetJobTracker_Receivers_Callback kwidgetjobtracker_receivers_callback = nullptr;
    KWidgetJobTracker_IsSignalConnected_Callback kwidgetjobtracker_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kwidgetjobtracker_metacall_isbase = false;
    mutable bool kwidgetjobtracker_widget_isbase = false;
    mutable bool kwidgetjobtracker_registerjob_isbase = false;
    mutable bool kwidgetjobtracker_unregisterjob_isbase = false;
    mutable bool kwidgetjobtracker_infomessage_isbase = false;
    mutable bool kwidgetjobtracker_description_isbase = false;
    mutable bool kwidgetjobtracker_totalamount_isbase = false;
    mutable bool kwidgetjobtracker_processedamount_isbase = false;
    mutable bool kwidgetjobtracker_percent_isbase = false;
    mutable bool kwidgetjobtracker_speed_isbase = false;
    mutable bool kwidgetjobtracker_slotclean_isbase = false;
    mutable bool kwidgetjobtracker_suspended_isbase = false;
    mutable bool kwidgetjobtracker_resumed_isbase = false;
    mutable bool kwidgetjobtracker_finished_isbase = false;
    mutable bool kwidgetjobtracker_slotstop_isbase = false;
    mutable bool kwidgetjobtracker_slotsuspend_isbase = false;
    mutable bool kwidgetjobtracker_slotresume_isbase = false;
    mutable bool kwidgetjobtracker_warning_isbase = false;
    mutable bool kwidgetjobtracker_event_isbase = false;
    mutable bool kwidgetjobtracker_eventfilter_isbase = false;
    mutable bool kwidgetjobtracker_timerevent_isbase = false;
    mutable bool kwidgetjobtracker_childevent_isbase = false;
    mutable bool kwidgetjobtracker_customevent_isbase = false;
    mutable bool kwidgetjobtracker_connectnotify_isbase = false;
    mutable bool kwidgetjobtracker_disconnectnotify_isbase = false;
    mutable bool kwidgetjobtracker_sender_isbase = false;
    mutable bool kwidgetjobtracker_sendersignalindex_isbase = false;
    mutable bool kwidgetjobtracker_receivers_isbase = false;
    mutable bool kwidgetjobtracker_issignalconnected_isbase = false;

  public:
    VirtualKWidgetJobTracker(QWidget* parent) : KWidgetJobTracker(parent) {};
    VirtualKWidgetJobTracker() : KWidgetJobTracker() {};

    ~VirtualKWidgetJobTracker() {
        kwidgetjobtracker_metacall_callback = nullptr;
        kwidgetjobtracker_widget_callback = nullptr;
        kwidgetjobtracker_registerjob_callback = nullptr;
        kwidgetjobtracker_unregisterjob_callback = nullptr;
        kwidgetjobtracker_infomessage_callback = nullptr;
        kwidgetjobtracker_description_callback = nullptr;
        kwidgetjobtracker_totalamount_callback = nullptr;
        kwidgetjobtracker_processedamount_callback = nullptr;
        kwidgetjobtracker_percent_callback = nullptr;
        kwidgetjobtracker_speed_callback = nullptr;
        kwidgetjobtracker_slotclean_callback = nullptr;
        kwidgetjobtracker_suspended_callback = nullptr;
        kwidgetjobtracker_resumed_callback = nullptr;
        kwidgetjobtracker_finished_callback = nullptr;
        kwidgetjobtracker_slotstop_callback = nullptr;
        kwidgetjobtracker_slotsuspend_callback = nullptr;
        kwidgetjobtracker_slotresume_callback = nullptr;
        kwidgetjobtracker_warning_callback = nullptr;
        kwidgetjobtracker_event_callback = nullptr;
        kwidgetjobtracker_eventfilter_callback = nullptr;
        kwidgetjobtracker_timerevent_callback = nullptr;
        kwidgetjobtracker_childevent_callback = nullptr;
        kwidgetjobtracker_customevent_callback = nullptr;
        kwidgetjobtracker_connectnotify_callback = nullptr;
        kwidgetjobtracker_disconnectnotify_callback = nullptr;
        kwidgetjobtracker_sender_callback = nullptr;
        kwidgetjobtracker_sendersignalindex_callback = nullptr;
        kwidgetjobtracker_receivers_callback = nullptr;
        kwidgetjobtracker_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKWidgetJobTracker_Metacall_Callback(KWidgetJobTracker_Metacall_Callback cb) { kwidgetjobtracker_metacall_callback = cb; }
    inline void setKWidgetJobTracker_Widget_Callback(KWidgetJobTracker_Widget_Callback cb) { kwidgetjobtracker_widget_callback = cb; }
    inline void setKWidgetJobTracker_RegisterJob_Callback(KWidgetJobTracker_RegisterJob_Callback cb) { kwidgetjobtracker_registerjob_callback = cb; }
    inline void setKWidgetJobTracker_UnregisterJob_Callback(KWidgetJobTracker_UnregisterJob_Callback cb) { kwidgetjobtracker_unregisterjob_callback = cb; }
    inline void setKWidgetJobTracker_InfoMessage_Callback(KWidgetJobTracker_InfoMessage_Callback cb) { kwidgetjobtracker_infomessage_callback = cb; }
    inline void setKWidgetJobTracker_Description_Callback(KWidgetJobTracker_Description_Callback cb) { kwidgetjobtracker_description_callback = cb; }
    inline void setKWidgetJobTracker_TotalAmount_Callback(KWidgetJobTracker_TotalAmount_Callback cb) { kwidgetjobtracker_totalamount_callback = cb; }
    inline void setKWidgetJobTracker_ProcessedAmount_Callback(KWidgetJobTracker_ProcessedAmount_Callback cb) { kwidgetjobtracker_processedamount_callback = cb; }
    inline void setKWidgetJobTracker_Percent_Callback(KWidgetJobTracker_Percent_Callback cb) { kwidgetjobtracker_percent_callback = cb; }
    inline void setKWidgetJobTracker_Speed_Callback(KWidgetJobTracker_Speed_Callback cb) { kwidgetjobtracker_speed_callback = cb; }
    inline void setKWidgetJobTracker_SlotClean_Callback(KWidgetJobTracker_SlotClean_Callback cb) { kwidgetjobtracker_slotclean_callback = cb; }
    inline void setKWidgetJobTracker_Suspended_Callback(KWidgetJobTracker_Suspended_Callback cb) { kwidgetjobtracker_suspended_callback = cb; }
    inline void setKWidgetJobTracker_Resumed_Callback(KWidgetJobTracker_Resumed_Callback cb) { kwidgetjobtracker_resumed_callback = cb; }
    inline void setKWidgetJobTracker_Finished_Callback(KWidgetJobTracker_Finished_Callback cb) { kwidgetjobtracker_finished_callback = cb; }
    inline void setKWidgetJobTracker_SlotStop_Callback(KWidgetJobTracker_SlotStop_Callback cb) { kwidgetjobtracker_slotstop_callback = cb; }
    inline void setKWidgetJobTracker_SlotSuspend_Callback(KWidgetJobTracker_SlotSuspend_Callback cb) { kwidgetjobtracker_slotsuspend_callback = cb; }
    inline void setKWidgetJobTracker_SlotResume_Callback(KWidgetJobTracker_SlotResume_Callback cb) { kwidgetjobtracker_slotresume_callback = cb; }
    inline void setKWidgetJobTracker_Warning_Callback(KWidgetJobTracker_Warning_Callback cb) { kwidgetjobtracker_warning_callback = cb; }
    inline void setKWidgetJobTracker_Event_Callback(KWidgetJobTracker_Event_Callback cb) { kwidgetjobtracker_event_callback = cb; }
    inline void setKWidgetJobTracker_EventFilter_Callback(KWidgetJobTracker_EventFilter_Callback cb) { kwidgetjobtracker_eventfilter_callback = cb; }
    inline void setKWidgetJobTracker_TimerEvent_Callback(KWidgetJobTracker_TimerEvent_Callback cb) { kwidgetjobtracker_timerevent_callback = cb; }
    inline void setKWidgetJobTracker_ChildEvent_Callback(KWidgetJobTracker_ChildEvent_Callback cb) { kwidgetjobtracker_childevent_callback = cb; }
    inline void setKWidgetJobTracker_CustomEvent_Callback(KWidgetJobTracker_CustomEvent_Callback cb) { kwidgetjobtracker_customevent_callback = cb; }
    inline void setKWidgetJobTracker_ConnectNotify_Callback(KWidgetJobTracker_ConnectNotify_Callback cb) { kwidgetjobtracker_connectnotify_callback = cb; }
    inline void setKWidgetJobTracker_DisconnectNotify_Callback(KWidgetJobTracker_DisconnectNotify_Callback cb) { kwidgetjobtracker_disconnectnotify_callback = cb; }
    inline void setKWidgetJobTracker_Sender_Callback(KWidgetJobTracker_Sender_Callback cb) { kwidgetjobtracker_sender_callback = cb; }
    inline void setKWidgetJobTracker_SenderSignalIndex_Callback(KWidgetJobTracker_SenderSignalIndex_Callback cb) { kwidgetjobtracker_sendersignalindex_callback = cb; }
    inline void setKWidgetJobTracker_Receivers_Callback(KWidgetJobTracker_Receivers_Callback cb) { kwidgetjobtracker_receivers_callback = cb; }
    inline void setKWidgetJobTracker_IsSignalConnected_Callback(KWidgetJobTracker_IsSignalConnected_Callback cb) { kwidgetjobtracker_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKWidgetJobTracker_Metacall_IsBase(bool value) const { kwidgetjobtracker_metacall_isbase = value; }
    inline void setKWidgetJobTracker_Widget_IsBase(bool value) const { kwidgetjobtracker_widget_isbase = value; }
    inline void setKWidgetJobTracker_RegisterJob_IsBase(bool value) const { kwidgetjobtracker_registerjob_isbase = value; }
    inline void setKWidgetJobTracker_UnregisterJob_IsBase(bool value) const { kwidgetjobtracker_unregisterjob_isbase = value; }
    inline void setKWidgetJobTracker_InfoMessage_IsBase(bool value) const { kwidgetjobtracker_infomessage_isbase = value; }
    inline void setKWidgetJobTracker_Description_IsBase(bool value) const { kwidgetjobtracker_description_isbase = value; }
    inline void setKWidgetJobTracker_TotalAmount_IsBase(bool value) const { kwidgetjobtracker_totalamount_isbase = value; }
    inline void setKWidgetJobTracker_ProcessedAmount_IsBase(bool value) const { kwidgetjobtracker_processedamount_isbase = value; }
    inline void setKWidgetJobTracker_Percent_IsBase(bool value) const { kwidgetjobtracker_percent_isbase = value; }
    inline void setKWidgetJobTracker_Speed_IsBase(bool value) const { kwidgetjobtracker_speed_isbase = value; }
    inline void setKWidgetJobTracker_SlotClean_IsBase(bool value) const { kwidgetjobtracker_slotclean_isbase = value; }
    inline void setKWidgetJobTracker_Suspended_IsBase(bool value) const { kwidgetjobtracker_suspended_isbase = value; }
    inline void setKWidgetJobTracker_Resumed_IsBase(bool value) const { kwidgetjobtracker_resumed_isbase = value; }
    inline void setKWidgetJobTracker_Finished_IsBase(bool value) const { kwidgetjobtracker_finished_isbase = value; }
    inline void setKWidgetJobTracker_SlotStop_IsBase(bool value) const { kwidgetjobtracker_slotstop_isbase = value; }
    inline void setKWidgetJobTracker_SlotSuspend_IsBase(bool value) const { kwidgetjobtracker_slotsuspend_isbase = value; }
    inline void setKWidgetJobTracker_SlotResume_IsBase(bool value) const { kwidgetjobtracker_slotresume_isbase = value; }
    inline void setKWidgetJobTracker_Warning_IsBase(bool value) const { kwidgetjobtracker_warning_isbase = value; }
    inline void setKWidgetJobTracker_Event_IsBase(bool value) const { kwidgetjobtracker_event_isbase = value; }
    inline void setKWidgetJobTracker_EventFilter_IsBase(bool value) const { kwidgetjobtracker_eventfilter_isbase = value; }
    inline void setKWidgetJobTracker_TimerEvent_IsBase(bool value) const { kwidgetjobtracker_timerevent_isbase = value; }
    inline void setKWidgetJobTracker_ChildEvent_IsBase(bool value) const { kwidgetjobtracker_childevent_isbase = value; }
    inline void setKWidgetJobTracker_CustomEvent_IsBase(bool value) const { kwidgetjobtracker_customevent_isbase = value; }
    inline void setKWidgetJobTracker_ConnectNotify_IsBase(bool value) const { kwidgetjobtracker_connectnotify_isbase = value; }
    inline void setKWidgetJobTracker_DisconnectNotify_IsBase(bool value) const { kwidgetjobtracker_disconnectnotify_isbase = value; }
    inline void setKWidgetJobTracker_Sender_IsBase(bool value) const { kwidgetjobtracker_sender_isbase = value; }
    inline void setKWidgetJobTracker_SenderSignalIndex_IsBase(bool value) const { kwidgetjobtracker_sendersignalindex_isbase = value; }
    inline void setKWidgetJobTracker_Receivers_IsBase(bool value) const { kwidgetjobtracker_receivers_isbase = value; }
    inline void setKWidgetJobTracker_IsSignalConnected_IsBase(bool value) const { kwidgetjobtracker_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kwidgetjobtracker_metacall_isbase) {
            kwidgetjobtracker_metacall_isbase = false;
            return KWidgetJobTracker::qt_metacall(param1, param2, param3);
        } else if (kwidgetjobtracker_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kwidgetjobtracker_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KWidgetJobTracker::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget(KJob* job) override {
        if (kwidgetjobtracker_widget_isbase) {
            kwidgetjobtracker_widget_isbase = false;
            return KWidgetJobTracker::widget(job);
        } else if (kwidgetjobtracker_widget_callback != nullptr) {
            KJob* cbval1 = job;

            QWidget* callback_ret = kwidgetjobtracker_widget_callback(this, cbval1);
            return callback_ret;
        } else {
            return KWidgetJobTracker::widget(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void registerJob(KJob* job) override {
        if (kwidgetjobtracker_registerjob_isbase) {
            kwidgetjobtracker_registerjob_isbase = false;
            KWidgetJobTracker::registerJob(job);
        } else if (kwidgetjobtracker_registerjob_callback != nullptr) {
            KJob* cbval1 = job;

            kwidgetjobtracker_registerjob_callback(this, cbval1);
        } else {
            KWidgetJobTracker::registerJob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unregisterJob(KJob* job) override {
        if (kwidgetjobtracker_unregisterjob_isbase) {
            kwidgetjobtracker_unregisterjob_isbase = false;
            KWidgetJobTracker::unregisterJob(job);
        } else if (kwidgetjobtracker_unregisterjob_callback != nullptr) {
            KJob* cbval1 = job;

            kwidgetjobtracker_unregisterjob_callback(this, cbval1);
        } else {
            KWidgetJobTracker::unregisterJob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void infoMessage(KJob* job, const QString& message) override {
        if (kwidgetjobtracker_infomessage_isbase) {
            kwidgetjobtracker_infomessage_isbase = false;
            KWidgetJobTracker::infoMessage(job, message);
        } else if (kwidgetjobtracker_infomessage_callback != nullptr) {
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

            kwidgetjobtracker_infomessage_callback(this, cbval1, cbval2);
        } else {
            KWidgetJobTracker::infoMessage(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void description(KJob* job, const QString& title, const QPair<QString, QString>& field1, const QPair<QString, QString>& field2) override {
        if (kwidgetjobtracker_description_isbase) {
            kwidgetjobtracker_description_isbase = false;
            KWidgetJobTracker::description(job, title, field1, field2);
        } else if (kwidgetjobtracker_description_callback != nullptr) {
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

            kwidgetjobtracker_description_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KWidgetJobTracker::description(job, title, field1, field2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void totalAmount(KJob* job, KJob::Unit unit, qulonglong amount) override {
        if (kwidgetjobtracker_totalamount_isbase) {
            kwidgetjobtracker_totalamount_isbase = false;
            KWidgetJobTracker::totalAmount(job, unit, amount);
        } else if (kwidgetjobtracker_totalamount_callback != nullptr) {
            KJob* cbval1 = job;
            int cbval2 = static_cast<int>(unit);
            unsigned long long cbval3 = static_cast<unsigned long long>(amount);

            kwidgetjobtracker_totalamount_callback(this, cbval1, cbval2, cbval3);
        } else {
            KWidgetJobTracker::totalAmount(job, unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void processedAmount(KJob* job, KJob::Unit unit, qulonglong amount) override {
        if (kwidgetjobtracker_processedamount_isbase) {
            kwidgetjobtracker_processedamount_isbase = false;
            KWidgetJobTracker::processedAmount(job, unit, amount);
        } else if (kwidgetjobtracker_processedamount_callback != nullptr) {
            KJob* cbval1 = job;
            int cbval2 = static_cast<int>(unit);
            unsigned long long cbval3 = static_cast<unsigned long long>(amount);

            kwidgetjobtracker_processedamount_callback(this, cbval1, cbval2, cbval3);
        } else {
            KWidgetJobTracker::processedAmount(job, unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void percent(KJob* job, unsigned long percent) override {
        if (kwidgetjobtracker_percent_isbase) {
            kwidgetjobtracker_percent_isbase = false;
            KWidgetJobTracker::percent(job, percent);
        } else if (kwidgetjobtracker_percent_callback != nullptr) {
            KJob* cbval1 = job;
            unsigned long cbval2 = percent;

            kwidgetjobtracker_percent_callback(this, cbval1, cbval2);
        } else {
            KWidgetJobTracker::percent(job, percent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void speed(KJob* job, unsigned long value) override {
        if (kwidgetjobtracker_speed_isbase) {
            kwidgetjobtracker_speed_isbase = false;
            KWidgetJobTracker::speed(job, value);
        } else if (kwidgetjobtracker_speed_callback != nullptr) {
            KJob* cbval1 = job;
            unsigned long cbval2 = value;

            kwidgetjobtracker_speed_callback(this, cbval1, cbval2);
        } else {
            KWidgetJobTracker::speed(job, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotClean(KJob* job) override {
        if (kwidgetjobtracker_slotclean_isbase) {
            kwidgetjobtracker_slotclean_isbase = false;
            KWidgetJobTracker::slotClean(job);
        } else if (kwidgetjobtracker_slotclean_callback != nullptr) {
            KJob* cbval1 = job;

            kwidgetjobtracker_slotclean_callback(this, cbval1);
        } else {
            KWidgetJobTracker::slotClean(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void suspended(KJob* job) override {
        if (kwidgetjobtracker_suspended_isbase) {
            kwidgetjobtracker_suspended_isbase = false;
            KWidgetJobTracker::suspended(job);
        } else if (kwidgetjobtracker_suspended_callback != nullptr) {
            KJob* cbval1 = job;

            kwidgetjobtracker_suspended_callback(this, cbval1);
        } else {
            KWidgetJobTracker::suspended(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resumed(KJob* job) override {
        if (kwidgetjobtracker_resumed_isbase) {
            kwidgetjobtracker_resumed_isbase = false;
            KWidgetJobTracker::resumed(job);
        } else if (kwidgetjobtracker_resumed_callback != nullptr) {
            KJob* cbval1 = job;

            kwidgetjobtracker_resumed_callback(this, cbval1);
        } else {
            KWidgetJobTracker::resumed(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void finished(KJob* job) override {
        if (kwidgetjobtracker_finished_isbase) {
            kwidgetjobtracker_finished_isbase = false;
            KWidgetJobTracker::finished(job);
        } else if (kwidgetjobtracker_finished_callback != nullptr) {
            KJob* cbval1 = job;

            kwidgetjobtracker_finished_callback(this, cbval1);
        } else {
            KWidgetJobTracker::finished(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotStop(KJob* job) override {
        if (kwidgetjobtracker_slotstop_isbase) {
            kwidgetjobtracker_slotstop_isbase = false;
            KWidgetJobTracker::slotStop(job);
        } else if (kwidgetjobtracker_slotstop_callback != nullptr) {
            KJob* cbval1 = job;

            kwidgetjobtracker_slotstop_callback(this, cbval1);
        } else {
            KWidgetJobTracker::slotStop(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotSuspend(KJob* job) override {
        if (kwidgetjobtracker_slotsuspend_isbase) {
            kwidgetjobtracker_slotsuspend_isbase = false;
            KWidgetJobTracker::slotSuspend(job);
        } else if (kwidgetjobtracker_slotsuspend_callback != nullptr) {
            KJob* cbval1 = job;

            kwidgetjobtracker_slotsuspend_callback(this, cbval1);
        } else {
            KWidgetJobTracker::slotSuspend(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void slotResume(KJob* job) override {
        if (kwidgetjobtracker_slotresume_isbase) {
            kwidgetjobtracker_slotresume_isbase = false;
            KWidgetJobTracker::slotResume(job);
        } else if (kwidgetjobtracker_slotresume_callback != nullptr) {
            KJob* cbval1 = job;

            kwidgetjobtracker_slotresume_callback(this, cbval1);
        } else {
            KWidgetJobTracker::slotResume(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void warning(KJob* job, const QString& message) override {
        if (kwidgetjobtracker_warning_isbase) {
            kwidgetjobtracker_warning_isbase = false;
            KWidgetJobTracker::warning(job, message);
        } else if (kwidgetjobtracker_warning_callback != nullptr) {
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

            kwidgetjobtracker_warning_callback(this, cbval1, cbval2);
        } else {
            KWidgetJobTracker::warning(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kwidgetjobtracker_event_isbase) {
            kwidgetjobtracker_event_isbase = false;
            return KWidgetJobTracker::event(event);
        } else if (kwidgetjobtracker_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kwidgetjobtracker_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KWidgetJobTracker::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kwidgetjobtracker_eventfilter_isbase) {
            kwidgetjobtracker_eventfilter_isbase = false;
            return KWidgetJobTracker::eventFilter(watched, event);
        } else if (kwidgetjobtracker_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kwidgetjobtracker_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KWidgetJobTracker::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kwidgetjobtracker_timerevent_isbase) {
            kwidgetjobtracker_timerevent_isbase = false;
            KWidgetJobTracker::timerEvent(event);
        } else if (kwidgetjobtracker_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kwidgetjobtracker_timerevent_callback(this, cbval1);
        } else {
            KWidgetJobTracker::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kwidgetjobtracker_childevent_isbase) {
            kwidgetjobtracker_childevent_isbase = false;
            KWidgetJobTracker::childEvent(event);
        } else if (kwidgetjobtracker_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kwidgetjobtracker_childevent_callback(this, cbval1);
        } else {
            KWidgetJobTracker::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kwidgetjobtracker_customevent_isbase) {
            kwidgetjobtracker_customevent_isbase = false;
            KWidgetJobTracker::customEvent(event);
        } else if (kwidgetjobtracker_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kwidgetjobtracker_customevent_callback(this, cbval1);
        } else {
            KWidgetJobTracker::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kwidgetjobtracker_connectnotify_isbase) {
            kwidgetjobtracker_connectnotify_isbase = false;
            KWidgetJobTracker::connectNotify(signal);
        } else if (kwidgetjobtracker_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kwidgetjobtracker_connectnotify_callback(this, cbval1);
        } else {
            KWidgetJobTracker::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kwidgetjobtracker_disconnectnotify_isbase) {
            kwidgetjobtracker_disconnectnotify_isbase = false;
            KWidgetJobTracker::disconnectNotify(signal);
        } else if (kwidgetjobtracker_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kwidgetjobtracker_disconnectnotify_callback(this, cbval1);
        } else {
            KWidgetJobTracker::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kwidgetjobtracker_sender_isbase) {
            kwidgetjobtracker_sender_isbase = false;
            return KWidgetJobTracker::sender();
        } else if (kwidgetjobtracker_sender_callback != nullptr) {
            QObject* callback_ret = kwidgetjobtracker_sender_callback();
            return callback_ret;
        } else {
            return KWidgetJobTracker::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kwidgetjobtracker_sendersignalindex_isbase) {
            kwidgetjobtracker_sendersignalindex_isbase = false;
            return KWidgetJobTracker::senderSignalIndex();
        } else if (kwidgetjobtracker_sendersignalindex_callback != nullptr) {
            int callback_ret = kwidgetjobtracker_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KWidgetJobTracker::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kwidgetjobtracker_receivers_isbase) {
            kwidgetjobtracker_receivers_isbase = false;
            return KWidgetJobTracker::receivers(signal);
        } else if (kwidgetjobtracker_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kwidgetjobtracker_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KWidgetJobTracker::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kwidgetjobtracker_issignalconnected_isbase) {
            kwidgetjobtracker_issignalconnected_isbase = false;
            return KWidgetJobTracker::isSignalConnected(signal);
        } else if (kwidgetjobtracker_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kwidgetjobtracker_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KWidgetJobTracker::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KWidgetJobTracker_InfoMessage(KWidgetJobTracker* self, KJob* job, const libqt_string message);
    friend void KWidgetJobTracker_QBaseInfoMessage(KWidgetJobTracker* self, KJob* job, const libqt_string message);
    friend void KWidgetJobTracker_Description(KWidgetJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
    friend void KWidgetJobTracker_QBaseDescription(KWidgetJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
    friend void KWidgetJobTracker_TotalAmount(KWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount);
    friend void KWidgetJobTracker_QBaseTotalAmount(KWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount);
    friend void KWidgetJobTracker_ProcessedAmount(KWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount);
    friend void KWidgetJobTracker_QBaseProcessedAmount(KWidgetJobTracker* self, KJob* job, int unit, unsigned long long amount);
    friend void KWidgetJobTracker_Percent(KWidgetJobTracker* self, KJob* job, unsigned long percent);
    friend void KWidgetJobTracker_QBasePercent(KWidgetJobTracker* self, KJob* job, unsigned long percent);
    friend void KWidgetJobTracker_Speed(KWidgetJobTracker* self, KJob* job, unsigned long value);
    friend void KWidgetJobTracker_QBaseSpeed(KWidgetJobTracker* self, KJob* job, unsigned long value);
    friend void KWidgetJobTracker_SlotClean(KWidgetJobTracker* self, KJob* job);
    friend void KWidgetJobTracker_QBaseSlotClean(KWidgetJobTracker* self, KJob* job);
    friend void KWidgetJobTracker_Suspended(KWidgetJobTracker* self, KJob* job);
    friend void KWidgetJobTracker_QBaseSuspended(KWidgetJobTracker* self, KJob* job);
    friend void KWidgetJobTracker_Resumed(KWidgetJobTracker* self, KJob* job);
    friend void KWidgetJobTracker_QBaseResumed(KWidgetJobTracker* self, KJob* job);
    friend void KWidgetJobTracker_Finished(KWidgetJobTracker* self, KJob* job);
    friend void KWidgetJobTracker_QBaseFinished(KWidgetJobTracker* self, KJob* job);
    friend void KWidgetJobTracker_SlotStop(KWidgetJobTracker* self, KJob* job);
    friend void KWidgetJobTracker_QBaseSlotStop(KWidgetJobTracker* self, KJob* job);
    friend void KWidgetJobTracker_SlotSuspend(KWidgetJobTracker* self, KJob* job);
    friend void KWidgetJobTracker_QBaseSlotSuspend(KWidgetJobTracker* self, KJob* job);
    friend void KWidgetJobTracker_SlotResume(KWidgetJobTracker* self, KJob* job);
    friend void KWidgetJobTracker_QBaseSlotResume(KWidgetJobTracker* self, KJob* job);
    friend void KWidgetJobTracker_Warning(KWidgetJobTracker* self, KJob* job, const libqt_string message);
    friend void KWidgetJobTracker_QBaseWarning(KWidgetJobTracker* self, KJob* job, const libqt_string message);
    friend void KWidgetJobTracker_TimerEvent(KWidgetJobTracker* self, QTimerEvent* event);
    friend void KWidgetJobTracker_QBaseTimerEvent(KWidgetJobTracker* self, QTimerEvent* event);
    friend void KWidgetJobTracker_ChildEvent(KWidgetJobTracker* self, QChildEvent* event);
    friend void KWidgetJobTracker_QBaseChildEvent(KWidgetJobTracker* self, QChildEvent* event);
    friend void KWidgetJobTracker_CustomEvent(KWidgetJobTracker* self, QEvent* event);
    friend void KWidgetJobTracker_QBaseCustomEvent(KWidgetJobTracker* self, QEvent* event);
    friend void KWidgetJobTracker_ConnectNotify(KWidgetJobTracker* self, const QMetaMethod* signal);
    friend void KWidgetJobTracker_QBaseConnectNotify(KWidgetJobTracker* self, const QMetaMethod* signal);
    friend void KWidgetJobTracker_DisconnectNotify(KWidgetJobTracker* self, const QMetaMethod* signal);
    friend void KWidgetJobTracker_QBaseDisconnectNotify(KWidgetJobTracker* self, const QMetaMethod* signal);
    friend QObject* KWidgetJobTracker_Sender(const KWidgetJobTracker* self);
    friend QObject* KWidgetJobTracker_QBaseSender(const KWidgetJobTracker* self);
    friend int KWidgetJobTracker_SenderSignalIndex(const KWidgetJobTracker* self);
    friend int KWidgetJobTracker_QBaseSenderSignalIndex(const KWidgetJobTracker* self);
    friend int KWidgetJobTracker_Receivers(const KWidgetJobTracker* self, const char* signal);
    friend int KWidgetJobTracker_QBaseReceivers(const KWidgetJobTracker* self, const char* signal);
    friend bool KWidgetJobTracker_IsSignalConnected(const KWidgetJobTracker* self, const QMetaMethod* signal);
    friend bool KWidgetJobTracker_QBaseIsSignalConnected(const KWidgetJobTracker* self, const QMetaMethod* signal);
};

#endif
