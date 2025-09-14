#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBVIRTUALKUISERVERJOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBVIRTUALKUISERVERJOBTRACKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KUiServerJobTracker so that we can call protected methods
class VirtualKUiServerJobTracker final : public KUiServerJobTracker {

  public:
    // Virtual class boolean flag
    bool isVirtualKUiServerJobTracker = true;

    // Virtual class public types (including callbacks)
    using KUiServerJobTracker_Metacall_Callback = int (*)(KUiServerJobTracker*, int, int, void**);
    using KUiServerJobTracker_RegisterJob_Callback = void (*)(KUiServerJobTracker*, KJob*);
    using KUiServerJobTracker_UnregisterJob_Callback = void (*)(KUiServerJobTracker*, KJob*);
    using KUiServerJobTracker_Finished_Callback = void (*)(KUiServerJobTracker*, KJob*);
    using KUiServerJobTracker_Suspended_Callback = void (*)(KUiServerJobTracker*, KJob*);
    using KUiServerJobTracker_Resumed_Callback = void (*)(KUiServerJobTracker*, KJob*);
    using KUiServerJobTracker_Description_Callback = void (*)(KUiServerJobTracker*, KJob*, libqt_string, libqt_pair /* tuple of libqt_string and libqt_string */, libqt_pair /* tuple of libqt_string and libqt_string */);
    using KUiServerJobTracker_InfoMessage_Callback = void (*)(KUiServerJobTracker*, KJob*, libqt_string);
    using KUiServerJobTracker_TotalAmount_Callback = void (*)(KUiServerJobTracker*, KJob*, int, unsigned long long);
    using KUiServerJobTracker_ProcessedAmount_Callback = void (*)(KUiServerJobTracker*, KJob*, int, unsigned long long);
    using KUiServerJobTracker_Percent_Callback = void (*)(KUiServerJobTracker*, KJob*, unsigned long);
    using KUiServerJobTracker_Speed_Callback = void (*)(KUiServerJobTracker*, KJob*, unsigned long);
    using KUiServerJobTracker_Warning_Callback = void (*)(KUiServerJobTracker*, KJob*, libqt_string);
    using KUiServerJobTracker_Event_Callback = bool (*)(KUiServerJobTracker*, QEvent*);
    using KUiServerJobTracker_EventFilter_Callback = bool (*)(KUiServerJobTracker*, QObject*, QEvent*);
    using KUiServerJobTracker_TimerEvent_Callback = void (*)(KUiServerJobTracker*, QTimerEvent*);
    using KUiServerJobTracker_ChildEvent_Callback = void (*)(KUiServerJobTracker*, QChildEvent*);
    using KUiServerJobTracker_CustomEvent_Callback = void (*)(KUiServerJobTracker*, QEvent*);
    using KUiServerJobTracker_ConnectNotify_Callback = void (*)(KUiServerJobTracker*, QMetaMethod*);
    using KUiServerJobTracker_DisconnectNotify_Callback = void (*)(KUiServerJobTracker*, QMetaMethod*);
    using KUiServerJobTracker_Sender_Callback = QObject* (*)();
    using KUiServerJobTracker_SenderSignalIndex_Callback = int (*)();
    using KUiServerJobTracker_Receivers_Callback = int (*)(const KUiServerJobTracker*, const char*);
    using KUiServerJobTracker_IsSignalConnected_Callback = bool (*)(const KUiServerJobTracker*, QMetaMethod*);

  protected:
    // Instance callback storage
    KUiServerJobTracker_Metacall_Callback kuiserverjobtracker_metacall_callback = nullptr;
    KUiServerJobTracker_RegisterJob_Callback kuiserverjobtracker_registerjob_callback = nullptr;
    KUiServerJobTracker_UnregisterJob_Callback kuiserverjobtracker_unregisterjob_callback = nullptr;
    KUiServerJobTracker_Finished_Callback kuiserverjobtracker_finished_callback = nullptr;
    KUiServerJobTracker_Suspended_Callback kuiserverjobtracker_suspended_callback = nullptr;
    KUiServerJobTracker_Resumed_Callback kuiserverjobtracker_resumed_callback = nullptr;
    KUiServerJobTracker_Description_Callback kuiserverjobtracker_description_callback = nullptr;
    KUiServerJobTracker_InfoMessage_Callback kuiserverjobtracker_infomessage_callback = nullptr;
    KUiServerJobTracker_TotalAmount_Callback kuiserverjobtracker_totalamount_callback = nullptr;
    KUiServerJobTracker_ProcessedAmount_Callback kuiserverjobtracker_processedamount_callback = nullptr;
    KUiServerJobTracker_Percent_Callback kuiserverjobtracker_percent_callback = nullptr;
    KUiServerJobTracker_Speed_Callback kuiserverjobtracker_speed_callback = nullptr;
    KUiServerJobTracker_Warning_Callback kuiserverjobtracker_warning_callback = nullptr;
    KUiServerJobTracker_Event_Callback kuiserverjobtracker_event_callback = nullptr;
    KUiServerJobTracker_EventFilter_Callback kuiserverjobtracker_eventfilter_callback = nullptr;
    KUiServerJobTracker_TimerEvent_Callback kuiserverjobtracker_timerevent_callback = nullptr;
    KUiServerJobTracker_ChildEvent_Callback kuiserverjobtracker_childevent_callback = nullptr;
    KUiServerJobTracker_CustomEvent_Callback kuiserverjobtracker_customevent_callback = nullptr;
    KUiServerJobTracker_ConnectNotify_Callback kuiserverjobtracker_connectnotify_callback = nullptr;
    KUiServerJobTracker_DisconnectNotify_Callback kuiserverjobtracker_disconnectnotify_callback = nullptr;
    KUiServerJobTracker_Sender_Callback kuiserverjobtracker_sender_callback = nullptr;
    KUiServerJobTracker_SenderSignalIndex_Callback kuiserverjobtracker_sendersignalindex_callback = nullptr;
    KUiServerJobTracker_Receivers_Callback kuiserverjobtracker_receivers_callback = nullptr;
    KUiServerJobTracker_IsSignalConnected_Callback kuiserverjobtracker_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kuiserverjobtracker_metacall_isbase = false;
    mutable bool kuiserverjobtracker_registerjob_isbase = false;
    mutable bool kuiserverjobtracker_unregisterjob_isbase = false;
    mutable bool kuiserverjobtracker_finished_isbase = false;
    mutable bool kuiserverjobtracker_suspended_isbase = false;
    mutable bool kuiserverjobtracker_resumed_isbase = false;
    mutable bool kuiserverjobtracker_description_isbase = false;
    mutable bool kuiserverjobtracker_infomessage_isbase = false;
    mutable bool kuiserverjobtracker_totalamount_isbase = false;
    mutable bool kuiserverjobtracker_processedamount_isbase = false;
    mutable bool kuiserverjobtracker_percent_isbase = false;
    mutable bool kuiserverjobtracker_speed_isbase = false;
    mutable bool kuiserverjobtracker_warning_isbase = false;
    mutable bool kuiserverjobtracker_event_isbase = false;
    mutable bool kuiserverjobtracker_eventfilter_isbase = false;
    mutable bool kuiserverjobtracker_timerevent_isbase = false;
    mutable bool kuiserverjobtracker_childevent_isbase = false;
    mutable bool kuiserverjobtracker_customevent_isbase = false;
    mutable bool kuiserverjobtracker_connectnotify_isbase = false;
    mutable bool kuiserverjobtracker_disconnectnotify_isbase = false;
    mutable bool kuiserverjobtracker_sender_isbase = false;
    mutable bool kuiserverjobtracker_sendersignalindex_isbase = false;
    mutable bool kuiserverjobtracker_receivers_isbase = false;
    mutable bool kuiserverjobtracker_issignalconnected_isbase = false;

  public:
    VirtualKUiServerJobTracker() : KUiServerJobTracker() {};
    VirtualKUiServerJobTracker(QObject* parent) : KUiServerJobTracker(parent) {};

    ~VirtualKUiServerJobTracker() {
        kuiserverjobtracker_metacall_callback = nullptr;
        kuiserverjobtracker_registerjob_callback = nullptr;
        kuiserverjobtracker_unregisterjob_callback = nullptr;
        kuiserverjobtracker_finished_callback = nullptr;
        kuiserverjobtracker_suspended_callback = nullptr;
        kuiserverjobtracker_resumed_callback = nullptr;
        kuiserverjobtracker_description_callback = nullptr;
        kuiserverjobtracker_infomessage_callback = nullptr;
        kuiserverjobtracker_totalamount_callback = nullptr;
        kuiserverjobtracker_processedamount_callback = nullptr;
        kuiserverjobtracker_percent_callback = nullptr;
        kuiserverjobtracker_speed_callback = nullptr;
        kuiserverjobtracker_warning_callback = nullptr;
        kuiserverjobtracker_event_callback = nullptr;
        kuiserverjobtracker_eventfilter_callback = nullptr;
        kuiserverjobtracker_timerevent_callback = nullptr;
        kuiserverjobtracker_childevent_callback = nullptr;
        kuiserverjobtracker_customevent_callback = nullptr;
        kuiserverjobtracker_connectnotify_callback = nullptr;
        kuiserverjobtracker_disconnectnotify_callback = nullptr;
        kuiserverjobtracker_sender_callback = nullptr;
        kuiserverjobtracker_sendersignalindex_callback = nullptr;
        kuiserverjobtracker_receivers_callback = nullptr;
        kuiserverjobtracker_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKUiServerJobTracker_Metacall_Callback(KUiServerJobTracker_Metacall_Callback cb) { kuiserverjobtracker_metacall_callback = cb; }
    inline void setKUiServerJobTracker_RegisterJob_Callback(KUiServerJobTracker_RegisterJob_Callback cb) { kuiserverjobtracker_registerjob_callback = cb; }
    inline void setKUiServerJobTracker_UnregisterJob_Callback(KUiServerJobTracker_UnregisterJob_Callback cb) { kuiserverjobtracker_unregisterjob_callback = cb; }
    inline void setKUiServerJobTracker_Finished_Callback(KUiServerJobTracker_Finished_Callback cb) { kuiserverjobtracker_finished_callback = cb; }
    inline void setKUiServerJobTracker_Suspended_Callback(KUiServerJobTracker_Suspended_Callback cb) { kuiserverjobtracker_suspended_callback = cb; }
    inline void setKUiServerJobTracker_Resumed_Callback(KUiServerJobTracker_Resumed_Callback cb) { kuiserverjobtracker_resumed_callback = cb; }
    inline void setKUiServerJobTracker_Description_Callback(KUiServerJobTracker_Description_Callback cb) { kuiserverjobtracker_description_callback = cb; }
    inline void setKUiServerJobTracker_InfoMessage_Callback(KUiServerJobTracker_InfoMessage_Callback cb) { kuiserverjobtracker_infomessage_callback = cb; }
    inline void setKUiServerJobTracker_TotalAmount_Callback(KUiServerJobTracker_TotalAmount_Callback cb) { kuiserverjobtracker_totalamount_callback = cb; }
    inline void setKUiServerJobTracker_ProcessedAmount_Callback(KUiServerJobTracker_ProcessedAmount_Callback cb) { kuiserverjobtracker_processedamount_callback = cb; }
    inline void setKUiServerJobTracker_Percent_Callback(KUiServerJobTracker_Percent_Callback cb) { kuiserverjobtracker_percent_callback = cb; }
    inline void setKUiServerJobTracker_Speed_Callback(KUiServerJobTracker_Speed_Callback cb) { kuiserverjobtracker_speed_callback = cb; }
    inline void setKUiServerJobTracker_Warning_Callback(KUiServerJobTracker_Warning_Callback cb) { kuiserverjobtracker_warning_callback = cb; }
    inline void setKUiServerJobTracker_Event_Callback(KUiServerJobTracker_Event_Callback cb) { kuiserverjobtracker_event_callback = cb; }
    inline void setKUiServerJobTracker_EventFilter_Callback(KUiServerJobTracker_EventFilter_Callback cb) { kuiserverjobtracker_eventfilter_callback = cb; }
    inline void setKUiServerJobTracker_TimerEvent_Callback(KUiServerJobTracker_TimerEvent_Callback cb) { kuiserverjobtracker_timerevent_callback = cb; }
    inline void setKUiServerJobTracker_ChildEvent_Callback(KUiServerJobTracker_ChildEvent_Callback cb) { kuiserverjobtracker_childevent_callback = cb; }
    inline void setKUiServerJobTracker_CustomEvent_Callback(KUiServerJobTracker_CustomEvent_Callback cb) { kuiserverjobtracker_customevent_callback = cb; }
    inline void setKUiServerJobTracker_ConnectNotify_Callback(KUiServerJobTracker_ConnectNotify_Callback cb) { kuiserverjobtracker_connectnotify_callback = cb; }
    inline void setKUiServerJobTracker_DisconnectNotify_Callback(KUiServerJobTracker_DisconnectNotify_Callback cb) { kuiserverjobtracker_disconnectnotify_callback = cb; }
    inline void setKUiServerJobTracker_Sender_Callback(KUiServerJobTracker_Sender_Callback cb) { kuiserverjobtracker_sender_callback = cb; }
    inline void setKUiServerJobTracker_SenderSignalIndex_Callback(KUiServerJobTracker_SenderSignalIndex_Callback cb) { kuiserverjobtracker_sendersignalindex_callback = cb; }
    inline void setKUiServerJobTracker_Receivers_Callback(KUiServerJobTracker_Receivers_Callback cb) { kuiserverjobtracker_receivers_callback = cb; }
    inline void setKUiServerJobTracker_IsSignalConnected_Callback(KUiServerJobTracker_IsSignalConnected_Callback cb) { kuiserverjobtracker_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKUiServerJobTracker_Metacall_IsBase(bool value) const { kuiserverjobtracker_metacall_isbase = value; }
    inline void setKUiServerJobTracker_RegisterJob_IsBase(bool value) const { kuiserverjobtracker_registerjob_isbase = value; }
    inline void setKUiServerJobTracker_UnregisterJob_IsBase(bool value) const { kuiserverjobtracker_unregisterjob_isbase = value; }
    inline void setKUiServerJobTracker_Finished_IsBase(bool value) const { kuiserverjobtracker_finished_isbase = value; }
    inline void setKUiServerJobTracker_Suspended_IsBase(bool value) const { kuiserverjobtracker_suspended_isbase = value; }
    inline void setKUiServerJobTracker_Resumed_IsBase(bool value) const { kuiserverjobtracker_resumed_isbase = value; }
    inline void setKUiServerJobTracker_Description_IsBase(bool value) const { kuiserverjobtracker_description_isbase = value; }
    inline void setKUiServerJobTracker_InfoMessage_IsBase(bool value) const { kuiserverjobtracker_infomessage_isbase = value; }
    inline void setKUiServerJobTracker_TotalAmount_IsBase(bool value) const { kuiserverjobtracker_totalamount_isbase = value; }
    inline void setKUiServerJobTracker_ProcessedAmount_IsBase(bool value) const { kuiserverjobtracker_processedamount_isbase = value; }
    inline void setKUiServerJobTracker_Percent_IsBase(bool value) const { kuiserverjobtracker_percent_isbase = value; }
    inline void setKUiServerJobTracker_Speed_IsBase(bool value) const { kuiserverjobtracker_speed_isbase = value; }
    inline void setKUiServerJobTracker_Warning_IsBase(bool value) const { kuiserverjobtracker_warning_isbase = value; }
    inline void setKUiServerJobTracker_Event_IsBase(bool value) const { kuiserverjobtracker_event_isbase = value; }
    inline void setKUiServerJobTracker_EventFilter_IsBase(bool value) const { kuiserverjobtracker_eventfilter_isbase = value; }
    inline void setKUiServerJobTracker_TimerEvent_IsBase(bool value) const { kuiserverjobtracker_timerevent_isbase = value; }
    inline void setKUiServerJobTracker_ChildEvent_IsBase(bool value) const { kuiserverjobtracker_childevent_isbase = value; }
    inline void setKUiServerJobTracker_CustomEvent_IsBase(bool value) const { kuiserverjobtracker_customevent_isbase = value; }
    inline void setKUiServerJobTracker_ConnectNotify_IsBase(bool value) const { kuiserverjobtracker_connectnotify_isbase = value; }
    inline void setKUiServerJobTracker_DisconnectNotify_IsBase(bool value) const { kuiserverjobtracker_disconnectnotify_isbase = value; }
    inline void setKUiServerJobTracker_Sender_IsBase(bool value) const { kuiserverjobtracker_sender_isbase = value; }
    inline void setKUiServerJobTracker_SenderSignalIndex_IsBase(bool value) const { kuiserverjobtracker_sendersignalindex_isbase = value; }
    inline void setKUiServerJobTracker_Receivers_IsBase(bool value) const { kuiserverjobtracker_receivers_isbase = value; }
    inline void setKUiServerJobTracker_IsSignalConnected_IsBase(bool value) const { kuiserverjobtracker_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kuiserverjobtracker_metacall_isbase) {
            kuiserverjobtracker_metacall_isbase = false;
            return KUiServerJobTracker::qt_metacall(param1, param2, param3);
        } else if (kuiserverjobtracker_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kuiserverjobtracker_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KUiServerJobTracker::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void registerJob(KJob* job) override {
        if (kuiserverjobtracker_registerjob_isbase) {
            kuiserverjobtracker_registerjob_isbase = false;
            KUiServerJobTracker::registerJob(job);
        } else if (kuiserverjobtracker_registerjob_callback != nullptr) {
            KJob* cbval1 = job;

            kuiserverjobtracker_registerjob_callback(this, cbval1);
        } else {
            KUiServerJobTracker::registerJob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unregisterJob(KJob* job) override {
        if (kuiserverjobtracker_unregisterjob_isbase) {
            kuiserverjobtracker_unregisterjob_isbase = false;
            KUiServerJobTracker::unregisterJob(job);
        } else if (kuiserverjobtracker_unregisterjob_callback != nullptr) {
            KJob* cbval1 = job;

            kuiserverjobtracker_unregisterjob_callback(this, cbval1);
        } else {
            KUiServerJobTracker::unregisterJob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void finished(KJob* job) override {
        if (kuiserverjobtracker_finished_isbase) {
            kuiserverjobtracker_finished_isbase = false;
            KUiServerJobTracker::finished(job);
        } else if (kuiserverjobtracker_finished_callback != nullptr) {
            KJob* cbval1 = job;

            kuiserverjobtracker_finished_callback(this, cbval1);
        } else {
            KUiServerJobTracker::finished(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void suspended(KJob* job) override {
        if (kuiserverjobtracker_suspended_isbase) {
            kuiserverjobtracker_suspended_isbase = false;
            KUiServerJobTracker::suspended(job);
        } else if (kuiserverjobtracker_suspended_callback != nullptr) {
            KJob* cbval1 = job;

            kuiserverjobtracker_suspended_callback(this, cbval1);
        } else {
            KUiServerJobTracker::suspended(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resumed(KJob* job) override {
        if (kuiserverjobtracker_resumed_isbase) {
            kuiserverjobtracker_resumed_isbase = false;
            KUiServerJobTracker::resumed(job);
        } else if (kuiserverjobtracker_resumed_callback != nullptr) {
            KJob* cbval1 = job;

            kuiserverjobtracker_resumed_callback(this, cbval1);
        } else {
            KUiServerJobTracker::resumed(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void description(KJob* job, const QString& title, const QPair<QString, QString>& field1, const QPair<QString, QString>& field2) override {
        if (kuiserverjobtracker_description_isbase) {
            kuiserverjobtracker_description_isbase = false;
            KUiServerJobTracker::description(job, title, field1, field2);
        } else if (kuiserverjobtracker_description_callback != nullptr) {
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

            kuiserverjobtracker_description_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KUiServerJobTracker::description(job, title, field1, field2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void infoMessage(KJob* job, const QString& message) override {
        if (kuiserverjobtracker_infomessage_isbase) {
            kuiserverjobtracker_infomessage_isbase = false;
            KUiServerJobTracker::infoMessage(job, message);
        } else if (kuiserverjobtracker_infomessage_callback != nullptr) {
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

            kuiserverjobtracker_infomessage_callback(this, cbval1, cbval2);
        } else {
            KUiServerJobTracker::infoMessage(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void totalAmount(KJob* job, KJob::Unit unit, qulonglong amount) override {
        if (kuiserverjobtracker_totalamount_isbase) {
            kuiserverjobtracker_totalamount_isbase = false;
            KUiServerJobTracker::totalAmount(job, unit, amount);
        } else if (kuiserverjobtracker_totalamount_callback != nullptr) {
            KJob* cbval1 = job;
            int cbval2 = static_cast<int>(unit);
            unsigned long long cbval3 = static_cast<unsigned long long>(amount);

            kuiserverjobtracker_totalamount_callback(this, cbval1, cbval2, cbval3);
        } else {
            KUiServerJobTracker::totalAmount(job, unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void processedAmount(KJob* job, KJob::Unit unit, qulonglong amount) override {
        if (kuiserverjobtracker_processedamount_isbase) {
            kuiserverjobtracker_processedamount_isbase = false;
            KUiServerJobTracker::processedAmount(job, unit, amount);
        } else if (kuiserverjobtracker_processedamount_callback != nullptr) {
            KJob* cbval1 = job;
            int cbval2 = static_cast<int>(unit);
            unsigned long long cbval3 = static_cast<unsigned long long>(amount);

            kuiserverjobtracker_processedamount_callback(this, cbval1, cbval2, cbval3);
        } else {
            KUiServerJobTracker::processedAmount(job, unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void percent(KJob* job, unsigned long percent) override {
        if (kuiserverjobtracker_percent_isbase) {
            kuiserverjobtracker_percent_isbase = false;
            KUiServerJobTracker::percent(job, percent);
        } else if (kuiserverjobtracker_percent_callback != nullptr) {
            KJob* cbval1 = job;
            unsigned long cbval2 = percent;

            kuiserverjobtracker_percent_callback(this, cbval1, cbval2);
        } else {
            KUiServerJobTracker::percent(job, percent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void speed(KJob* job, unsigned long value) override {
        if (kuiserverjobtracker_speed_isbase) {
            kuiserverjobtracker_speed_isbase = false;
            KUiServerJobTracker::speed(job, value);
        } else if (kuiserverjobtracker_speed_callback != nullptr) {
            KJob* cbval1 = job;
            unsigned long cbval2 = value;

            kuiserverjobtracker_speed_callback(this, cbval1, cbval2);
        } else {
            KUiServerJobTracker::speed(job, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void warning(KJob* job, const QString& message) override {
        if (kuiserverjobtracker_warning_isbase) {
            kuiserverjobtracker_warning_isbase = false;
            KUiServerJobTracker::warning(job, message);
        } else if (kuiserverjobtracker_warning_callback != nullptr) {
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

            kuiserverjobtracker_warning_callback(this, cbval1, cbval2);
        } else {
            KUiServerJobTracker::warning(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kuiserverjobtracker_event_isbase) {
            kuiserverjobtracker_event_isbase = false;
            return KUiServerJobTracker::event(event);
        } else if (kuiserverjobtracker_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kuiserverjobtracker_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUiServerJobTracker::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kuiserverjobtracker_eventfilter_isbase) {
            kuiserverjobtracker_eventfilter_isbase = false;
            return KUiServerJobTracker::eventFilter(watched, event);
        } else if (kuiserverjobtracker_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kuiserverjobtracker_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KUiServerJobTracker::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kuiserverjobtracker_timerevent_isbase) {
            kuiserverjobtracker_timerevent_isbase = false;
            KUiServerJobTracker::timerEvent(event);
        } else if (kuiserverjobtracker_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kuiserverjobtracker_timerevent_callback(this, cbval1);
        } else {
            KUiServerJobTracker::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kuiserverjobtracker_childevent_isbase) {
            kuiserverjobtracker_childevent_isbase = false;
            KUiServerJobTracker::childEvent(event);
        } else if (kuiserverjobtracker_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kuiserverjobtracker_childevent_callback(this, cbval1);
        } else {
            KUiServerJobTracker::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kuiserverjobtracker_customevent_isbase) {
            kuiserverjobtracker_customevent_isbase = false;
            KUiServerJobTracker::customEvent(event);
        } else if (kuiserverjobtracker_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kuiserverjobtracker_customevent_callback(this, cbval1);
        } else {
            KUiServerJobTracker::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kuiserverjobtracker_connectnotify_isbase) {
            kuiserverjobtracker_connectnotify_isbase = false;
            KUiServerJobTracker::connectNotify(signal);
        } else if (kuiserverjobtracker_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kuiserverjobtracker_connectnotify_callback(this, cbval1);
        } else {
            KUiServerJobTracker::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kuiserverjobtracker_disconnectnotify_isbase) {
            kuiserverjobtracker_disconnectnotify_isbase = false;
            KUiServerJobTracker::disconnectNotify(signal);
        } else if (kuiserverjobtracker_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kuiserverjobtracker_disconnectnotify_callback(this, cbval1);
        } else {
            KUiServerJobTracker::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kuiserverjobtracker_sender_isbase) {
            kuiserverjobtracker_sender_isbase = false;
            return KUiServerJobTracker::sender();
        } else if (kuiserverjobtracker_sender_callback != nullptr) {
            QObject* callback_ret = kuiserverjobtracker_sender_callback();
            return callback_ret;
        } else {
            return KUiServerJobTracker::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kuiserverjobtracker_sendersignalindex_isbase) {
            kuiserverjobtracker_sendersignalindex_isbase = false;
            return KUiServerJobTracker::senderSignalIndex();
        } else if (kuiserverjobtracker_sendersignalindex_callback != nullptr) {
            int callback_ret = kuiserverjobtracker_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KUiServerJobTracker::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kuiserverjobtracker_receivers_isbase) {
            kuiserverjobtracker_receivers_isbase = false;
            return KUiServerJobTracker::receivers(signal);
        } else if (kuiserverjobtracker_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kuiserverjobtracker_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KUiServerJobTracker::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kuiserverjobtracker_issignalconnected_isbase) {
            kuiserverjobtracker_issignalconnected_isbase = false;
            return KUiServerJobTracker::isSignalConnected(signal);
        } else if (kuiserverjobtracker_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kuiserverjobtracker_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUiServerJobTracker::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KUiServerJobTracker_Finished(KUiServerJobTracker* self, KJob* job);
    friend void KUiServerJobTracker_QBaseFinished(KUiServerJobTracker* self, KJob* job);
    friend void KUiServerJobTracker_Suspended(KUiServerJobTracker* self, KJob* job);
    friend void KUiServerJobTracker_QBaseSuspended(KUiServerJobTracker* self, KJob* job);
    friend void KUiServerJobTracker_Resumed(KUiServerJobTracker* self, KJob* job);
    friend void KUiServerJobTracker_QBaseResumed(KUiServerJobTracker* self, KJob* job);
    friend void KUiServerJobTracker_Description(KUiServerJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
    friend void KUiServerJobTracker_QBaseDescription(KUiServerJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
    friend void KUiServerJobTracker_InfoMessage(KUiServerJobTracker* self, KJob* job, const libqt_string message);
    friend void KUiServerJobTracker_QBaseInfoMessage(KUiServerJobTracker* self, KJob* job, const libqt_string message);
    friend void KUiServerJobTracker_TotalAmount(KUiServerJobTracker* self, KJob* job, int unit, unsigned long long amount);
    friend void KUiServerJobTracker_QBaseTotalAmount(KUiServerJobTracker* self, KJob* job, int unit, unsigned long long amount);
    friend void KUiServerJobTracker_ProcessedAmount(KUiServerJobTracker* self, KJob* job, int unit, unsigned long long amount);
    friend void KUiServerJobTracker_QBaseProcessedAmount(KUiServerJobTracker* self, KJob* job, int unit, unsigned long long amount);
    friend void KUiServerJobTracker_Percent(KUiServerJobTracker* self, KJob* job, unsigned long percent);
    friend void KUiServerJobTracker_QBasePercent(KUiServerJobTracker* self, KJob* job, unsigned long percent);
    friend void KUiServerJobTracker_Speed(KUiServerJobTracker* self, KJob* job, unsigned long value);
    friend void KUiServerJobTracker_QBaseSpeed(KUiServerJobTracker* self, KJob* job, unsigned long value);
    friend void KUiServerJobTracker_Warning(KUiServerJobTracker* self, KJob* job, const libqt_string message);
    friend void KUiServerJobTracker_QBaseWarning(KUiServerJobTracker* self, KJob* job, const libqt_string message);
    friend void KUiServerJobTracker_TimerEvent(KUiServerJobTracker* self, QTimerEvent* event);
    friend void KUiServerJobTracker_QBaseTimerEvent(KUiServerJobTracker* self, QTimerEvent* event);
    friend void KUiServerJobTracker_ChildEvent(KUiServerJobTracker* self, QChildEvent* event);
    friend void KUiServerJobTracker_QBaseChildEvent(KUiServerJobTracker* self, QChildEvent* event);
    friend void KUiServerJobTracker_CustomEvent(KUiServerJobTracker* self, QEvent* event);
    friend void KUiServerJobTracker_QBaseCustomEvent(KUiServerJobTracker* self, QEvent* event);
    friend void KUiServerJobTracker_ConnectNotify(KUiServerJobTracker* self, const QMetaMethod* signal);
    friend void KUiServerJobTracker_QBaseConnectNotify(KUiServerJobTracker* self, const QMetaMethod* signal);
    friend void KUiServerJobTracker_DisconnectNotify(KUiServerJobTracker* self, const QMetaMethod* signal);
    friend void KUiServerJobTracker_QBaseDisconnectNotify(KUiServerJobTracker* self, const QMetaMethod* signal);
    friend QObject* KUiServerJobTracker_Sender(const KUiServerJobTracker* self);
    friend QObject* KUiServerJobTracker_QBaseSender(const KUiServerJobTracker* self);
    friend int KUiServerJobTracker_SenderSignalIndex(const KUiServerJobTracker* self);
    friend int KUiServerJobTracker_QBaseSenderSignalIndex(const KUiServerJobTracker* self);
    friend int KUiServerJobTracker_Receivers(const KUiServerJobTracker* self, const char* signal);
    friend int KUiServerJobTracker_QBaseReceivers(const KUiServerJobTracker* self, const char* signal);
    friend bool KUiServerJobTracker_IsSignalConnected(const KUiServerJobTracker* self, const QMetaMethod* signal);
    friend bool KUiServerJobTracker_QBaseIsSignalConnected(const KUiServerJobTracker* self, const QMetaMethod* signal);
};

#endif
