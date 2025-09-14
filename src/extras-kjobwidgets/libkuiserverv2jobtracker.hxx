#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBVIRTUALKUISERVERV2JOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBVIRTUALKUISERVERV2JOBTRACKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KUiServerV2JobTracker so that we can call protected methods
class VirtualKUiServerV2JobTracker final : public KUiServerV2JobTracker {

  public:
    // Virtual class boolean flag
    bool isVirtualKUiServerV2JobTracker = true;

    // Virtual class public types (including callbacks)
    using KUiServerV2JobTracker_Metacall_Callback = int (*)(KUiServerV2JobTracker*, int, int, void**);
    using KUiServerV2JobTracker_RegisterJob_Callback = void (*)(KUiServerV2JobTracker*, KJob*);
    using KUiServerV2JobTracker_UnregisterJob_Callback = void (*)(KUiServerV2JobTracker*, KJob*);
    using KUiServerV2JobTracker_Finished_Callback = void (*)(KUiServerV2JobTracker*, KJob*);
    using KUiServerV2JobTracker_Suspended_Callback = void (*)(KUiServerV2JobTracker*, KJob*);
    using KUiServerV2JobTracker_Resumed_Callback = void (*)(KUiServerV2JobTracker*, KJob*);
    using KUiServerV2JobTracker_Description_Callback = void (*)(KUiServerV2JobTracker*, KJob*, libqt_string, libqt_pair /* tuple of libqt_string and libqt_string */, libqt_pair /* tuple of libqt_string and libqt_string */);
    using KUiServerV2JobTracker_InfoMessage_Callback = void (*)(KUiServerV2JobTracker*, KJob*, libqt_string);
    using KUiServerV2JobTracker_TotalAmount_Callback = void (*)(KUiServerV2JobTracker*, KJob*, int, unsigned long long);
    using KUiServerV2JobTracker_ProcessedAmount_Callback = void (*)(KUiServerV2JobTracker*, KJob*, int, unsigned long long);
    using KUiServerV2JobTracker_Percent_Callback = void (*)(KUiServerV2JobTracker*, KJob*, unsigned long);
    using KUiServerV2JobTracker_Speed_Callback = void (*)(KUiServerV2JobTracker*, KJob*, unsigned long);
    using KUiServerV2JobTracker_Warning_Callback = void (*)(KUiServerV2JobTracker*, KJob*, libqt_string);
    using KUiServerV2JobTracker_Event_Callback = bool (*)(KUiServerV2JobTracker*, QEvent*);
    using KUiServerV2JobTracker_EventFilter_Callback = bool (*)(KUiServerV2JobTracker*, QObject*, QEvent*);
    using KUiServerV2JobTracker_TimerEvent_Callback = void (*)(KUiServerV2JobTracker*, QTimerEvent*);
    using KUiServerV2JobTracker_ChildEvent_Callback = void (*)(KUiServerV2JobTracker*, QChildEvent*);
    using KUiServerV2JobTracker_CustomEvent_Callback = void (*)(KUiServerV2JobTracker*, QEvent*);
    using KUiServerV2JobTracker_ConnectNotify_Callback = void (*)(KUiServerV2JobTracker*, QMetaMethod*);
    using KUiServerV2JobTracker_DisconnectNotify_Callback = void (*)(KUiServerV2JobTracker*, QMetaMethod*);
    using KUiServerV2JobTracker_Sender_Callback = QObject* (*)();
    using KUiServerV2JobTracker_SenderSignalIndex_Callback = int (*)();
    using KUiServerV2JobTracker_Receivers_Callback = int (*)(const KUiServerV2JobTracker*, const char*);
    using KUiServerV2JobTracker_IsSignalConnected_Callback = bool (*)(const KUiServerV2JobTracker*, QMetaMethod*);

  protected:
    // Instance callback storage
    KUiServerV2JobTracker_Metacall_Callback kuiserverv2jobtracker_metacall_callback = nullptr;
    KUiServerV2JobTracker_RegisterJob_Callback kuiserverv2jobtracker_registerjob_callback = nullptr;
    KUiServerV2JobTracker_UnregisterJob_Callback kuiserverv2jobtracker_unregisterjob_callback = nullptr;
    KUiServerV2JobTracker_Finished_Callback kuiserverv2jobtracker_finished_callback = nullptr;
    KUiServerV2JobTracker_Suspended_Callback kuiserverv2jobtracker_suspended_callback = nullptr;
    KUiServerV2JobTracker_Resumed_Callback kuiserverv2jobtracker_resumed_callback = nullptr;
    KUiServerV2JobTracker_Description_Callback kuiserverv2jobtracker_description_callback = nullptr;
    KUiServerV2JobTracker_InfoMessage_Callback kuiserverv2jobtracker_infomessage_callback = nullptr;
    KUiServerV2JobTracker_TotalAmount_Callback kuiserverv2jobtracker_totalamount_callback = nullptr;
    KUiServerV2JobTracker_ProcessedAmount_Callback kuiserverv2jobtracker_processedamount_callback = nullptr;
    KUiServerV2JobTracker_Percent_Callback kuiserverv2jobtracker_percent_callback = nullptr;
    KUiServerV2JobTracker_Speed_Callback kuiserverv2jobtracker_speed_callback = nullptr;
    KUiServerV2JobTracker_Warning_Callback kuiserverv2jobtracker_warning_callback = nullptr;
    KUiServerV2JobTracker_Event_Callback kuiserverv2jobtracker_event_callback = nullptr;
    KUiServerV2JobTracker_EventFilter_Callback kuiserverv2jobtracker_eventfilter_callback = nullptr;
    KUiServerV2JobTracker_TimerEvent_Callback kuiserverv2jobtracker_timerevent_callback = nullptr;
    KUiServerV2JobTracker_ChildEvent_Callback kuiserverv2jobtracker_childevent_callback = nullptr;
    KUiServerV2JobTracker_CustomEvent_Callback kuiserverv2jobtracker_customevent_callback = nullptr;
    KUiServerV2JobTracker_ConnectNotify_Callback kuiserverv2jobtracker_connectnotify_callback = nullptr;
    KUiServerV2JobTracker_DisconnectNotify_Callback kuiserverv2jobtracker_disconnectnotify_callback = nullptr;
    KUiServerV2JobTracker_Sender_Callback kuiserverv2jobtracker_sender_callback = nullptr;
    KUiServerV2JobTracker_SenderSignalIndex_Callback kuiserverv2jobtracker_sendersignalindex_callback = nullptr;
    KUiServerV2JobTracker_Receivers_Callback kuiserverv2jobtracker_receivers_callback = nullptr;
    KUiServerV2JobTracker_IsSignalConnected_Callback kuiserverv2jobtracker_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kuiserverv2jobtracker_metacall_isbase = false;
    mutable bool kuiserverv2jobtracker_registerjob_isbase = false;
    mutable bool kuiserverv2jobtracker_unregisterjob_isbase = false;
    mutable bool kuiserverv2jobtracker_finished_isbase = false;
    mutable bool kuiserverv2jobtracker_suspended_isbase = false;
    mutable bool kuiserverv2jobtracker_resumed_isbase = false;
    mutable bool kuiserverv2jobtracker_description_isbase = false;
    mutable bool kuiserverv2jobtracker_infomessage_isbase = false;
    mutable bool kuiserverv2jobtracker_totalamount_isbase = false;
    mutable bool kuiserverv2jobtracker_processedamount_isbase = false;
    mutable bool kuiserverv2jobtracker_percent_isbase = false;
    mutable bool kuiserverv2jobtracker_speed_isbase = false;
    mutable bool kuiserverv2jobtracker_warning_isbase = false;
    mutable bool kuiserverv2jobtracker_event_isbase = false;
    mutable bool kuiserverv2jobtracker_eventfilter_isbase = false;
    mutable bool kuiserverv2jobtracker_timerevent_isbase = false;
    mutable bool kuiserverv2jobtracker_childevent_isbase = false;
    mutable bool kuiserverv2jobtracker_customevent_isbase = false;
    mutable bool kuiserverv2jobtracker_connectnotify_isbase = false;
    mutable bool kuiserverv2jobtracker_disconnectnotify_isbase = false;
    mutable bool kuiserverv2jobtracker_sender_isbase = false;
    mutable bool kuiserverv2jobtracker_sendersignalindex_isbase = false;
    mutable bool kuiserverv2jobtracker_receivers_isbase = false;
    mutable bool kuiserverv2jobtracker_issignalconnected_isbase = false;

  public:
    VirtualKUiServerV2JobTracker() : KUiServerV2JobTracker() {};
    VirtualKUiServerV2JobTracker(QObject* parent) : KUiServerV2JobTracker(parent) {};

    ~VirtualKUiServerV2JobTracker() {
        kuiserverv2jobtracker_metacall_callback = nullptr;
        kuiserverv2jobtracker_registerjob_callback = nullptr;
        kuiserverv2jobtracker_unregisterjob_callback = nullptr;
        kuiserverv2jobtracker_finished_callback = nullptr;
        kuiserverv2jobtracker_suspended_callback = nullptr;
        kuiserverv2jobtracker_resumed_callback = nullptr;
        kuiserverv2jobtracker_description_callback = nullptr;
        kuiserverv2jobtracker_infomessage_callback = nullptr;
        kuiserverv2jobtracker_totalamount_callback = nullptr;
        kuiserverv2jobtracker_processedamount_callback = nullptr;
        kuiserverv2jobtracker_percent_callback = nullptr;
        kuiserverv2jobtracker_speed_callback = nullptr;
        kuiserverv2jobtracker_warning_callback = nullptr;
        kuiserverv2jobtracker_event_callback = nullptr;
        kuiserverv2jobtracker_eventfilter_callback = nullptr;
        kuiserverv2jobtracker_timerevent_callback = nullptr;
        kuiserverv2jobtracker_childevent_callback = nullptr;
        kuiserverv2jobtracker_customevent_callback = nullptr;
        kuiserverv2jobtracker_connectnotify_callback = nullptr;
        kuiserverv2jobtracker_disconnectnotify_callback = nullptr;
        kuiserverv2jobtracker_sender_callback = nullptr;
        kuiserverv2jobtracker_sendersignalindex_callback = nullptr;
        kuiserverv2jobtracker_receivers_callback = nullptr;
        kuiserverv2jobtracker_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKUiServerV2JobTracker_Metacall_Callback(KUiServerV2JobTracker_Metacall_Callback cb) { kuiserverv2jobtracker_metacall_callback = cb; }
    inline void setKUiServerV2JobTracker_RegisterJob_Callback(KUiServerV2JobTracker_RegisterJob_Callback cb) { kuiserverv2jobtracker_registerjob_callback = cb; }
    inline void setKUiServerV2JobTracker_UnregisterJob_Callback(KUiServerV2JobTracker_UnregisterJob_Callback cb) { kuiserverv2jobtracker_unregisterjob_callback = cb; }
    inline void setKUiServerV2JobTracker_Finished_Callback(KUiServerV2JobTracker_Finished_Callback cb) { kuiserverv2jobtracker_finished_callback = cb; }
    inline void setKUiServerV2JobTracker_Suspended_Callback(KUiServerV2JobTracker_Suspended_Callback cb) { kuiserverv2jobtracker_suspended_callback = cb; }
    inline void setKUiServerV2JobTracker_Resumed_Callback(KUiServerV2JobTracker_Resumed_Callback cb) { kuiserverv2jobtracker_resumed_callback = cb; }
    inline void setKUiServerV2JobTracker_Description_Callback(KUiServerV2JobTracker_Description_Callback cb) { kuiserverv2jobtracker_description_callback = cb; }
    inline void setKUiServerV2JobTracker_InfoMessage_Callback(KUiServerV2JobTracker_InfoMessage_Callback cb) { kuiserverv2jobtracker_infomessage_callback = cb; }
    inline void setKUiServerV2JobTracker_TotalAmount_Callback(KUiServerV2JobTracker_TotalAmount_Callback cb) { kuiserverv2jobtracker_totalamount_callback = cb; }
    inline void setKUiServerV2JobTracker_ProcessedAmount_Callback(KUiServerV2JobTracker_ProcessedAmount_Callback cb) { kuiserverv2jobtracker_processedamount_callback = cb; }
    inline void setKUiServerV2JobTracker_Percent_Callback(KUiServerV2JobTracker_Percent_Callback cb) { kuiserverv2jobtracker_percent_callback = cb; }
    inline void setKUiServerV2JobTracker_Speed_Callback(KUiServerV2JobTracker_Speed_Callback cb) { kuiserverv2jobtracker_speed_callback = cb; }
    inline void setKUiServerV2JobTracker_Warning_Callback(KUiServerV2JobTracker_Warning_Callback cb) { kuiserverv2jobtracker_warning_callback = cb; }
    inline void setKUiServerV2JobTracker_Event_Callback(KUiServerV2JobTracker_Event_Callback cb) { kuiserverv2jobtracker_event_callback = cb; }
    inline void setKUiServerV2JobTracker_EventFilter_Callback(KUiServerV2JobTracker_EventFilter_Callback cb) { kuiserverv2jobtracker_eventfilter_callback = cb; }
    inline void setKUiServerV2JobTracker_TimerEvent_Callback(KUiServerV2JobTracker_TimerEvent_Callback cb) { kuiserverv2jobtracker_timerevent_callback = cb; }
    inline void setKUiServerV2JobTracker_ChildEvent_Callback(KUiServerV2JobTracker_ChildEvent_Callback cb) { kuiserverv2jobtracker_childevent_callback = cb; }
    inline void setKUiServerV2JobTracker_CustomEvent_Callback(KUiServerV2JobTracker_CustomEvent_Callback cb) { kuiserverv2jobtracker_customevent_callback = cb; }
    inline void setKUiServerV2JobTracker_ConnectNotify_Callback(KUiServerV2JobTracker_ConnectNotify_Callback cb) { kuiserverv2jobtracker_connectnotify_callback = cb; }
    inline void setKUiServerV2JobTracker_DisconnectNotify_Callback(KUiServerV2JobTracker_DisconnectNotify_Callback cb) { kuiserverv2jobtracker_disconnectnotify_callback = cb; }
    inline void setKUiServerV2JobTracker_Sender_Callback(KUiServerV2JobTracker_Sender_Callback cb) { kuiserverv2jobtracker_sender_callback = cb; }
    inline void setKUiServerV2JobTracker_SenderSignalIndex_Callback(KUiServerV2JobTracker_SenderSignalIndex_Callback cb) { kuiserverv2jobtracker_sendersignalindex_callback = cb; }
    inline void setKUiServerV2JobTracker_Receivers_Callback(KUiServerV2JobTracker_Receivers_Callback cb) { kuiserverv2jobtracker_receivers_callback = cb; }
    inline void setKUiServerV2JobTracker_IsSignalConnected_Callback(KUiServerV2JobTracker_IsSignalConnected_Callback cb) { kuiserverv2jobtracker_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKUiServerV2JobTracker_Metacall_IsBase(bool value) const { kuiserverv2jobtracker_metacall_isbase = value; }
    inline void setKUiServerV2JobTracker_RegisterJob_IsBase(bool value) const { kuiserverv2jobtracker_registerjob_isbase = value; }
    inline void setKUiServerV2JobTracker_UnregisterJob_IsBase(bool value) const { kuiserverv2jobtracker_unregisterjob_isbase = value; }
    inline void setKUiServerV2JobTracker_Finished_IsBase(bool value) const { kuiserverv2jobtracker_finished_isbase = value; }
    inline void setKUiServerV2JobTracker_Suspended_IsBase(bool value) const { kuiserverv2jobtracker_suspended_isbase = value; }
    inline void setKUiServerV2JobTracker_Resumed_IsBase(bool value) const { kuiserverv2jobtracker_resumed_isbase = value; }
    inline void setKUiServerV2JobTracker_Description_IsBase(bool value) const { kuiserverv2jobtracker_description_isbase = value; }
    inline void setKUiServerV2JobTracker_InfoMessage_IsBase(bool value) const { kuiserverv2jobtracker_infomessage_isbase = value; }
    inline void setKUiServerV2JobTracker_TotalAmount_IsBase(bool value) const { kuiserverv2jobtracker_totalamount_isbase = value; }
    inline void setKUiServerV2JobTracker_ProcessedAmount_IsBase(bool value) const { kuiserverv2jobtracker_processedamount_isbase = value; }
    inline void setKUiServerV2JobTracker_Percent_IsBase(bool value) const { kuiserverv2jobtracker_percent_isbase = value; }
    inline void setKUiServerV2JobTracker_Speed_IsBase(bool value) const { kuiserverv2jobtracker_speed_isbase = value; }
    inline void setKUiServerV2JobTracker_Warning_IsBase(bool value) const { kuiserverv2jobtracker_warning_isbase = value; }
    inline void setKUiServerV2JobTracker_Event_IsBase(bool value) const { kuiserverv2jobtracker_event_isbase = value; }
    inline void setKUiServerV2JobTracker_EventFilter_IsBase(bool value) const { kuiserverv2jobtracker_eventfilter_isbase = value; }
    inline void setKUiServerV2JobTracker_TimerEvent_IsBase(bool value) const { kuiserverv2jobtracker_timerevent_isbase = value; }
    inline void setKUiServerV2JobTracker_ChildEvent_IsBase(bool value) const { kuiserverv2jobtracker_childevent_isbase = value; }
    inline void setKUiServerV2JobTracker_CustomEvent_IsBase(bool value) const { kuiserverv2jobtracker_customevent_isbase = value; }
    inline void setKUiServerV2JobTracker_ConnectNotify_IsBase(bool value) const { kuiserverv2jobtracker_connectnotify_isbase = value; }
    inline void setKUiServerV2JobTracker_DisconnectNotify_IsBase(bool value) const { kuiserverv2jobtracker_disconnectnotify_isbase = value; }
    inline void setKUiServerV2JobTracker_Sender_IsBase(bool value) const { kuiserverv2jobtracker_sender_isbase = value; }
    inline void setKUiServerV2JobTracker_SenderSignalIndex_IsBase(bool value) const { kuiserverv2jobtracker_sendersignalindex_isbase = value; }
    inline void setKUiServerV2JobTracker_Receivers_IsBase(bool value) const { kuiserverv2jobtracker_receivers_isbase = value; }
    inline void setKUiServerV2JobTracker_IsSignalConnected_IsBase(bool value) const { kuiserverv2jobtracker_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kuiserverv2jobtracker_metacall_isbase) {
            kuiserverv2jobtracker_metacall_isbase = false;
            return KUiServerV2JobTracker::qt_metacall(param1, param2, param3);
        } else if (kuiserverv2jobtracker_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kuiserverv2jobtracker_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KUiServerV2JobTracker::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void registerJob(KJob* job) override {
        if (kuiserverv2jobtracker_registerjob_isbase) {
            kuiserverv2jobtracker_registerjob_isbase = false;
            KUiServerV2JobTracker::registerJob(job);
        } else if (kuiserverv2jobtracker_registerjob_callback != nullptr) {
            KJob* cbval1 = job;

            kuiserverv2jobtracker_registerjob_callback(this, cbval1);
        } else {
            KUiServerV2JobTracker::registerJob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unregisterJob(KJob* job) override {
        if (kuiserverv2jobtracker_unregisterjob_isbase) {
            kuiserverv2jobtracker_unregisterjob_isbase = false;
            KUiServerV2JobTracker::unregisterJob(job);
        } else if (kuiserverv2jobtracker_unregisterjob_callback != nullptr) {
            KJob* cbval1 = job;

            kuiserverv2jobtracker_unregisterjob_callback(this, cbval1);
        } else {
            KUiServerV2JobTracker::unregisterJob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void finished(KJob* job) override {
        if (kuiserverv2jobtracker_finished_isbase) {
            kuiserverv2jobtracker_finished_isbase = false;
            KUiServerV2JobTracker::finished(job);
        } else if (kuiserverv2jobtracker_finished_callback != nullptr) {
            KJob* cbval1 = job;

            kuiserverv2jobtracker_finished_callback(this, cbval1);
        } else {
            KUiServerV2JobTracker::finished(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void suspended(KJob* job) override {
        if (kuiserverv2jobtracker_suspended_isbase) {
            kuiserverv2jobtracker_suspended_isbase = false;
            KUiServerV2JobTracker::suspended(job);
        } else if (kuiserverv2jobtracker_suspended_callback != nullptr) {
            KJob* cbval1 = job;

            kuiserverv2jobtracker_suspended_callback(this, cbval1);
        } else {
            KUiServerV2JobTracker::suspended(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resumed(KJob* job) override {
        if (kuiserverv2jobtracker_resumed_isbase) {
            kuiserverv2jobtracker_resumed_isbase = false;
            KUiServerV2JobTracker::resumed(job);
        } else if (kuiserverv2jobtracker_resumed_callback != nullptr) {
            KJob* cbval1 = job;

            kuiserverv2jobtracker_resumed_callback(this, cbval1);
        } else {
            KUiServerV2JobTracker::resumed(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void description(KJob* job, const QString& title, const QPair<QString, QString>& field1, const QPair<QString, QString>& field2) override {
        if (kuiserverv2jobtracker_description_isbase) {
            kuiserverv2jobtracker_description_isbase = false;
            KUiServerV2JobTracker::description(job, title, field1, field2);
        } else if (kuiserverv2jobtracker_description_callback != nullptr) {
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

            kuiserverv2jobtracker_description_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KUiServerV2JobTracker::description(job, title, field1, field2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void infoMessage(KJob* job, const QString& message) override {
        if (kuiserverv2jobtracker_infomessage_isbase) {
            kuiserverv2jobtracker_infomessage_isbase = false;
            KUiServerV2JobTracker::infoMessage(job, message);
        } else if (kuiserverv2jobtracker_infomessage_callback != nullptr) {
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

            kuiserverv2jobtracker_infomessage_callback(this, cbval1, cbval2);
        } else {
            KUiServerV2JobTracker::infoMessage(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void totalAmount(KJob* job, KJob::Unit unit, qulonglong amount) override {
        if (kuiserverv2jobtracker_totalamount_isbase) {
            kuiserverv2jobtracker_totalamount_isbase = false;
            KUiServerV2JobTracker::totalAmount(job, unit, amount);
        } else if (kuiserverv2jobtracker_totalamount_callback != nullptr) {
            KJob* cbval1 = job;
            int cbval2 = static_cast<int>(unit);
            unsigned long long cbval3 = static_cast<unsigned long long>(amount);

            kuiserverv2jobtracker_totalamount_callback(this, cbval1, cbval2, cbval3);
        } else {
            KUiServerV2JobTracker::totalAmount(job, unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void processedAmount(KJob* job, KJob::Unit unit, qulonglong amount) override {
        if (kuiserverv2jobtracker_processedamount_isbase) {
            kuiserverv2jobtracker_processedamount_isbase = false;
            KUiServerV2JobTracker::processedAmount(job, unit, amount);
        } else if (kuiserverv2jobtracker_processedamount_callback != nullptr) {
            KJob* cbval1 = job;
            int cbval2 = static_cast<int>(unit);
            unsigned long long cbval3 = static_cast<unsigned long long>(amount);

            kuiserverv2jobtracker_processedamount_callback(this, cbval1, cbval2, cbval3);
        } else {
            KUiServerV2JobTracker::processedAmount(job, unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void percent(KJob* job, unsigned long percent) override {
        if (kuiserverv2jobtracker_percent_isbase) {
            kuiserverv2jobtracker_percent_isbase = false;
            KUiServerV2JobTracker::percent(job, percent);
        } else if (kuiserverv2jobtracker_percent_callback != nullptr) {
            KJob* cbval1 = job;
            unsigned long cbval2 = percent;

            kuiserverv2jobtracker_percent_callback(this, cbval1, cbval2);
        } else {
            KUiServerV2JobTracker::percent(job, percent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void speed(KJob* job, unsigned long value) override {
        if (kuiserverv2jobtracker_speed_isbase) {
            kuiserverv2jobtracker_speed_isbase = false;
            KUiServerV2JobTracker::speed(job, value);
        } else if (kuiserverv2jobtracker_speed_callback != nullptr) {
            KJob* cbval1 = job;
            unsigned long cbval2 = value;

            kuiserverv2jobtracker_speed_callback(this, cbval1, cbval2);
        } else {
            KUiServerV2JobTracker::speed(job, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void warning(KJob* job, const QString& message) override {
        if (kuiserverv2jobtracker_warning_isbase) {
            kuiserverv2jobtracker_warning_isbase = false;
            KUiServerV2JobTracker::warning(job, message);
        } else if (kuiserverv2jobtracker_warning_callback != nullptr) {
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

            kuiserverv2jobtracker_warning_callback(this, cbval1, cbval2);
        } else {
            KUiServerV2JobTracker::warning(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kuiserverv2jobtracker_event_isbase) {
            kuiserverv2jobtracker_event_isbase = false;
            return KUiServerV2JobTracker::event(event);
        } else if (kuiserverv2jobtracker_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kuiserverv2jobtracker_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUiServerV2JobTracker::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kuiserverv2jobtracker_eventfilter_isbase) {
            kuiserverv2jobtracker_eventfilter_isbase = false;
            return KUiServerV2JobTracker::eventFilter(watched, event);
        } else if (kuiserverv2jobtracker_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kuiserverv2jobtracker_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KUiServerV2JobTracker::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kuiserverv2jobtracker_timerevent_isbase) {
            kuiserverv2jobtracker_timerevent_isbase = false;
            KUiServerV2JobTracker::timerEvent(event);
        } else if (kuiserverv2jobtracker_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kuiserverv2jobtracker_timerevent_callback(this, cbval1);
        } else {
            KUiServerV2JobTracker::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kuiserverv2jobtracker_childevent_isbase) {
            kuiserverv2jobtracker_childevent_isbase = false;
            KUiServerV2JobTracker::childEvent(event);
        } else if (kuiserverv2jobtracker_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kuiserverv2jobtracker_childevent_callback(this, cbval1);
        } else {
            KUiServerV2JobTracker::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kuiserverv2jobtracker_customevent_isbase) {
            kuiserverv2jobtracker_customevent_isbase = false;
            KUiServerV2JobTracker::customEvent(event);
        } else if (kuiserverv2jobtracker_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kuiserverv2jobtracker_customevent_callback(this, cbval1);
        } else {
            KUiServerV2JobTracker::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kuiserverv2jobtracker_connectnotify_isbase) {
            kuiserverv2jobtracker_connectnotify_isbase = false;
            KUiServerV2JobTracker::connectNotify(signal);
        } else if (kuiserverv2jobtracker_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kuiserverv2jobtracker_connectnotify_callback(this, cbval1);
        } else {
            KUiServerV2JobTracker::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kuiserverv2jobtracker_disconnectnotify_isbase) {
            kuiserverv2jobtracker_disconnectnotify_isbase = false;
            KUiServerV2JobTracker::disconnectNotify(signal);
        } else if (kuiserverv2jobtracker_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kuiserverv2jobtracker_disconnectnotify_callback(this, cbval1);
        } else {
            KUiServerV2JobTracker::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kuiserverv2jobtracker_sender_isbase) {
            kuiserverv2jobtracker_sender_isbase = false;
            return KUiServerV2JobTracker::sender();
        } else if (kuiserverv2jobtracker_sender_callback != nullptr) {
            QObject* callback_ret = kuiserverv2jobtracker_sender_callback();
            return callback_ret;
        } else {
            return KUiServerV2JobTracker::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kuiserverv2jobtracker_sendersignalindex_isbase) {
            kuiserverv2jobtracker_sendersignalindex_isbase = false;
            return KUiServerV2JobTracker::senderSignalIndex();
        } else if (kuiserverv2jobtracker_sendersignalindex_callback != nullptr) {
            int callback_ret = kuiserverv2jobtracker_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KUiServerV2JobTracker::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kuiserverv2jobtracker_receivers_isbase) {
            kuiserverv2jobtracker_receivers_isbase = false;
            return KUiServerV2JobTracker::receivers(signal);
        } else if (kuiserverv2jobtracker_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kuiserverv2jobtracker_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KUiServerV2JobTracker::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kuiserverv2jobtracker_issignalconnected_isbase) {
            kuiserverv2jobtracker_issignalconnected_isbase = false;
            return KUiServerV2JobTracker::isSignalConnected(signal);
        } else if (kuiserverv2jobtracker_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kuiserverv2jobtracker_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KUiServerV2JobTracker::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KUiServerV2JobTracker_Finished(KUiServerV2JobTracker* self, KJob* job);
    friend void KUiServerV2JobTracker_QBaseFinished(KUiServerV2JobTracker* self, KJob* job);
    friend void KUiServerV2JobTracker_Suspended(KUiServerV2JobTracker* self, KJob* job);
    friend void KUiServerV2JobTracker_QBaseSuspended(KUiServerV2JobTracker* self, KJob* job);
    friend void KUiServerV2JobTracker_Resumed(KUiServerV2JobTracker* self, KJob* job);
    friend void KUiServerV2JobTracker_QBaseResumed(KUiServerV2JobTracker* self, KJob* job);
    friend void KUiServerV2JobTracker_Description(KUiServerV2JobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
    friend void KUiServerV2JobTracker_QBaseDescription(KUiServerV2JobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
    friend void KUiServerV2JobTracker_InfoMessage(KUiServerV2JobTracker* self, KJob* job, const libqt_string message);
    friend void KUiServerV2JobTracker_QBaseInfoMessage(KUiServerV2JobTracker* self, KJob* job, const libqt_string message);
    friend void KUiServerV2JobTracker_TotalAmount(KUiServerV2JobTracker* self, KJob* job, int unit, unsigned long long amount);
    friend void KUiServerV2JobTracker_QBaseTotalAmount(KUiServerV2JobTracker* self, KJob* job, int unit, unsigned long long amount);
    friend void KUiServerV2JobTracker_ProcessedAmount(KUiServerV2JobTracker* self, KJob* job, int unit, unsigned long long amount);
    friend void KUiServerV2JobTracker_QBaseProcessedAmount(KUiServerV2JobTracker* self, KJob* job, int unit, unsigned long long amount);
    friend void KUiServerV2JobTracker_Percent(KUiServerV2JobTracker* self, KJob* job, unsigned long percent);
    friend void KUiServerV2JobTracker_QBasePercent(KUiServerV2JobTracker* self, KJob* job, unsigned long percent);
    friend void KUiServerV2JobTracker_Speed(KUiServerV2JobTracker* self, KJob* job, unsigned long value);
    friend void KUiServerV2JobTracker_QBaseSpeed(KUiServerV2JobTracker* self, KJob* job, unsigned long value);
    friend void KUiServerV2JobTracker_Warning(KUiServerV2JobTracker* self, KJob* job, const libqt_string message);
    friend void KUiServerV2JobTracker_QBaseWarning(KUiServerV2JobTracker* self, KJob* job, const libqt_string message);
    friend void KUiServerV2JobTracker_TimerEvent(KUiServerV2JobTracker* self, QTimerEvent* event);
    friend void KUiServerV2JobTracker_QBaseTimerEvent(KUiServerV2JobTracker* self, QTimerEvent* event);
    friend void KUiServerV2JobTracker_ChildEvent(KUiServerV2JobTracker* self, QChildEvent* event);
    friend void KUiServerV2JobTracker_QBaseChildEvent(KUiServerV2JobTracker* self, QChildEvent* event);
    friend void KUiServerV2JobTracker_CustomEvent(KUiServerV2JobTracker* self, QEvent* event);
    friend void KUiServerV2JobTracker_QBaseCustomEvent(KUiServerV2JobTracker* self, QEvent* event);
    friend void KUiServerV2JobTracker_ConnectNotify(KUiServerV2JobTracker* self, const QMetaMethod* signal);
    friend void KUiServerV2JobTracker_QBaseConnectNotify(KUiServerV2JobTracker* self, const QMetaMethod* signal);
    friend void KUiServerV2JobTracker_DisconnectNotify(KUiServerV2JobTracker* self, const QMetaMethod* signal);
    friend void KUiServerV2JobTracker_QBaseDisconnectNotify(KUiServerV2JobTracker* self, const QMetaMethod* signal);
    friend QObject* KUiServerV2JobTracker_Sender(const KUiServerV2JobTracker* self);
    friend QObject* KUiServerV2JobTracker_QBaseSender(const KUiServerV2JobTracker* self);
    friend int KUiServerV2JobTracker_SenderSignalIndex(const KUiServerV2JobTracker* self);
    friend int KUiServerV2JobTracker_QBaseSenderSignalIndex(const KUiServerV2JobTracker* self);
    friend int KUiServerV2JobTracker_Receivers(const KUiServerV2JobTracker* self, const char* signal);
    friend int KUiServerV2JobTracker_QBaseReceivers(const KUiServerV2JobTracker* self, const char* signal);
    friend bool KUiServerV2JobTracker_IsSignalConnected(const KUiServerV2JobTracker* self, const QMetaMethod* signal);
    friend bool KUiServerV2JobTracker_QBaseIsSignalConnected(const KUiServerV2JobTracker* self, const QMetaMethod* signal);
};

#endif
