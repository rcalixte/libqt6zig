#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKJOBTRACKERINTERFACE_H
#define SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKJOBTRACKERINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KJobTrackerInterface so that we can call protected methods
class VirtualKJobTrackerInterface final : public KJobTrackerInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualKJobTrackerInterface = true;

    // Virtual class public types (including callbacks)
    using KJobTrackerInterface_Metacall_Callback = int (*)(KJobTrackerInterface*, int, int, void**);
    using KJobTrackerInterface_RegisterJob_Callback = void (*)(KJobTrackerInterface*, KJob*);
    using KJobTrackerInterface_UnregisterJob_Callback = void (*)(KJobTrackerInterface*, KJob*);
    using KJobTrackerInterface_Finished_Callback = void (*)(KJobTrackerInterface*, KJob*);
    using KJobTrackerInterface_Suspended_Callback = void (*)(KJobTrackerInterface*, KJob*);
    using KJobTrackerInterface_Resumed_Callback = void (*)(KJobTrackerInterface*, KJob*);
    using KJobTrackerInterface_Description_Callback = void (*)(KJobTrackerInterface*, KJob*, libqt_string, libqt_pair /* tuple of libqt_string and libqt_string */, libqt_pair /* tuple of libqt_string and libqt_string */);
    using KJobTrackerInterface_InfoMessage_Callback = void (*)(KJobTrackerInterface*, KJob*, libqt_string);
    using KJobTrackerInterface_Warning_Callback = void (*)(KJobTrackerInterface*, KJob*, libqt_string);
    using KJobTrackerInterface_TotalAmount_Callback = void (*)(KJobTrackerInterface*, KJob*, int, unsigned long long);
    using KJobTrackerInterface_ProcessedAmount_Callback = void (*)(KJobTrackerInterface*, KJob*, int, unsigned long long);
    using KJobTrackerInterface_Percent_Callback = void (*)(KJobTrackerInterface*, KJob*, unsigned long);
    using KJobTrackerInterface_Speed_Callback = void (*)(KJobTrackerInterface*, KJob*, unsigned long);
    using KJobTrackerInterface_Event_Callback = bool (*)(KJobTrackerInterface*, QEvent*);
    using KJobTrackerInterface_EventFilter_Callback = bool (*)(KJobTrackerInterface*, QObject*, QEvent*);
    using KJobTrackerInterface_TimerEvent_Callback = void (*)(KJobTrackerInterface*, QTimerEvent*);
    using KJobTrackerInterface_ChildEvent_Callback = void (*)(KJobTrackerInterface*, QChildEvent*);
    using KJobTrackerInterface_CustomEvent_Callback = void (*)(KJobTrackerInterface*, QEvent*);
    using KJobTrackerInterface_ConnectNotify_Callback = void (*)(KJobTrackerInterface*, QMetaMethod*);
    using KJobTrackerInterface_DisconnectNotify_Callback = void (*)(KJobTrackerInterface*, QMetaMethod*);
    using KJobTrackerInterface_Sender_Callback = QObject* (*)();
    using KJobTrackerInterface_SenderSignalIndex_Callback = int (*)();
    using KJobTrackerInterface_Receivers_Callback = int (*)(const KJobTrackerInterface*, const char*);
    using KJobTrackerInterface_IsSignalConnected_Callback = bool (*)(const KJobTrackerInterface*, QMetaMethod*);

  protected:
    // Instance callback storage
    KJobTrackerInterface_Metacall_Callback kjobtrackerinterface_metacall_callback = nullptr;
    KJobTrackerInterface_RegisterJob_Callback kjobtrackerinterface_registerjob_callback = nullptr;
    KJobTrackerInterface_UnregisterJob_Callback kjobtrackerinterface_unregisterjob_callback = nullptr;
    KJobTrackerInterface_Finished_Callback kjobtrackerinterface_finished_callback = nullptr;
    KJobTrackerInterface_Suspended_Callback kjobtrackerinterface_suspended_callback = nullptr;
    KJobTrackerInterface_Resumed_Callback kjobtrackerinterface_resumed_callback = nullptr;
    KJobTrackerInterface_Description_Callback kjobtrackerinterface_description_callback = nullptr;
    KJobTrackerInterface_InfoMessage_Callback kjobtrackerinterface_infomessage_callback = nullptr;
    KJobTrackerInterface_Warning_Callback kjobtrackerinterface_warning_callback = nullptr;
    KJobTrackerInterface_TotalAmount_Callback kjobtrackerinterface_totalamount_callback = nullptr;
    KJobTrackerInterface_ProcessedAmount_Callback kjobtrackerinterface_processedamount_callback = nullptr;
    KJobTrackerInterface_Percent_Callback kjobtrackerinterface_percent_callback = nullptr;
    KJobTrackerInterface_Speed_Callback kjobtrackerinterface_speed_callback = nullptr;
    KJobTrackerInterface_Event_Callback kjobtrackerinterface_event_callback = nullptr;
    KJobTrackerInterface_EventFilter_Callback kjobtrackerinterface_eventfilter_callback = nullptr;
    KJobTrackerInterface_TimerEvent_Callback kjobtrackerinterface_timerevent_callback = nullptr;
    KJobTrackerInterface_ChildEvent_Callback kjobtrackerinterface_childevent_callback = nullptr;
    KJobTrackerInterface_CustomEvent_Callback kjobtrackerinterface_customevent_callback = nullptr;
    KJobTrackerInterface_ConnectNotify_Callback kjobtrackerinterface_connectnotify_callback = nullptr;
    KJobTrackerInterface_DisconnectNotify_Callback kjobtrackerinterface_disconnectnotify_callback = nullptr;
    KJobTrackerInterface_Sender_Callback kjobtrackerinterface_sender_callback = nullptr;
    KJobTrackerInterface_SenderSignalIndex_Callback kjobtrackerinterface_sendersignalindex_callback = nullptr;
    KJobTrackerInterface_Receivers_Callback kjobtrackerinterface_receivers_callback = nullptr;
    KJobTrackerInterface_IsSignalConnected_Callback kjobtrackerinterface_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kjobtrackerinterface_metacall_isbase = false;
    mutable bool kjobtrackerinterface_registerjob_isbase = false;
    mutable bool kjobtrackerinterface_unregisterjob_isbase = false;
    mutable bool kjobtrackerinterface_finished_isbase = false;
    mutable bool kjobtrackerinterface_suspended_isbase = false;
    mutable bool kjobtrackerinterface_resumed_isbase = false;
    mutable bool kjobtrackerinterface_description_isbase = false;
    mutable bool kjobtrackerinterface_infomessage_isbase = false;
    mutable bool kjobtrackerinterface_warning_isbase = false;
    mutable bool kjobtrackerinterface_totalamount_isbase = false;
    mutable bool kjobtrackerinterface_processedamount_isbase = false;
    mutable bool kjobtrackerinterface_percent_isbase = false;
    mutable bool kjobtrackerinterface_speed_isbase = false;
    mutable bool kjobtrackerinterface_event_isbase = false;
    mutable bool kjobtrackerinterface_eventfilter_isbase = false;
    mutable bool kjobtrackerinterface_timerevent_isbase = false;
    mutable bool kjobtrackerinterface_childevent_isbase = false;
    mutable bool kjobtrackerinterface_customevent_isbase = false;
    mutable bool kjobtrackerinterface_connectnotify_isbase = false;
    mutable bool kjobtrackerinterface_disconnectnotify_isbase = false;
    mutable bool kjobtrackerinterface_sender_isbase = false;
    mutable bool kjobtrackerinterface_sendersignalindex_isbase = false;
    mutable bool kjobtrackerinterface_receivers_isbase = false;
    mutable bool kjobtrackerinterface_issignalconnected_isbase = false;

  public:
    VirtualKJobTrackerInterface() : KJobTrackerInterface() {};
    VirtualKJobTrackerInterface(QObject* parent) : KJobTrackerInterface(parent) {};

    ~VirtualKJobTrackerInterface() {
        kjobtrackerinterface_metacall_callback = nullptr;
        kjobtrackerinterface_registerjob_callback = nullptr;
        kjobtrackerinterface_unregisterjob_callback = nullptr;
        kjobtrackerinterface_finished_callback = nullptr;
        kjobtrackerinterface_suspended_callback = nullptr;
        kjobtrackerinterface_resumed_callback = nullptr;
        kjobtrackerinterface_description_callback = nullptr;
        kjobtrackerinterface_infomessage_callback = nullptr;
        kjobtrackerinterface_warning_callback = nullptr;
        kjobtrackerinterface_totalamount_callback = nullptr;
        kjobtrackerinterface_processedamount_callback = nullptr;
        kjobtrackerinterface_percent_callback = nullptr;
        kjobtrackerinterface_speed_callback = nullptr;
        kjobtrackerinterface_event_callback = nullptr;
        kjobtrackerinterface_eventfilter_callback = nullptr;
        kjobtrackerinterface_timerevent_callback = nullptr;
        kjobtrackerinterface_childevent_callback = nullptr;
        kjobtrackerinterface_customevent_callback = nullptr;
        kjobtrackerinterface_connectnotify_callback = nullptr;
        kjobtrackerinterface_disconnectnotify_callback = nullptr;
        kjobtrackerinterface_sender_callback = nullptr;
        kjobtrackerinterface_sendersignalindex_callback = nullptr;
        kjobtrackerinterface_receivers_callback = nullptr;
        kjobtrackerinterface_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKJobTrackerInterface_Metacall_Callback(KJobTrackerInterface_Metacall_Callback cb) { kjobtrackerinterface_metacall_callback = cb; }
    inline void setKJobTrackerInterface_RegisterJob_Callback(KJobTrackerInterface_RegisterJob_Callback cb) { kjobtrackerinterface_registerjob_callback = cb; }
    inline void setKJobTrackerInterface_UnregisterJob_Callback(KJobTrackerInterface_UnregisterJob_Callback cb) { kjobtrackerinterface_unregisterjob_callback = cb; }
    inline void setKJobTrackerInterface_Finished_Callback(KJobTrackerInterface_Finished_Callback cb) { kjobtrackerinterface_finished_callback = cb; }
    inline void setKJobTrackerInterface_Suspended_Callback(KJobTrackerInterface_Suspended_Callback cb) { kjobtrackerinterface_suspended_callback = cb; }
    inline void setKJobTrackerInterface_Resumed_Callback(KJobTrackerInterface_Resumed_Callback cb) { kjobtrackerinterface_resumed_callback = cb; }
    inline void setKJobTrackerInterface_Description_Callback(KJobTrackerInterface_Description_Callback cb) { kjobtrackerinterface_description_callback = cb; }
    inline void setKJobTrackerInterface_InfoMessage_Callback(KJobTrackerInterface_InfoMessage_Callback cb) { kjobtrackerinterface_infomessage_callback = cb; }
    inline void setKJobTrackerInterface_Warning_Callback(KJobTrackerInterface_Warning_Callback cb) { kjobtrackerinterface_warning_callback = cb; }
    inline void setKJobTrackerInterface_TotalAmount_Callback(KJobTrackerInterface_TotalAmount_Callback cb) { kjobtrackerinterface_totalamount_callback = cb; }
    inline void setKJobTrackerInterface_ProcessedAmount_Callback(KJobTrackerInterface_ProcessedAmount_Callback cb) { kjobtrackerinterface_processedamount_callback = cb; }
    inline void setKJobTrackerInterface_Percent_Callback(KJobTrackerInterface_Percent_Callback cb) { kjobtrackerinterface_percent_callback = cb; }
    inline void setKJobTrackerInterface_Speed_Callback(KJobTrackerInterface_Speed_Callback cb) { kjobtrackerinterface_speed_callback = cb; }
    inline void setKJobTrackerInterface_Event_Callback(KJobTrackerInterface_Event_Callback cb) { kjobtrackerinterface_event_callback = cb; }
    inline void setKJobTrackerInterface_EventFilter_Callback(KJobTrackerInterface_EventFilter_Callback cb) { kjobtrackerinterface_eventfilter_callback = cb; }
    inline void setKJobTrackerInterface_TimerEvent_Callback(KJobTrackerInterface_TimerEvent_Callback cb) { kjobtrackerinterface_timerevent_callback = cb; }
    inline void setKJobTrackerInterface_ChildEvent_Callback(KJobTrackerInterface_ChildEvent_Callback cb) { kjobtrackerinterface_childevent_callback = cb; }
    inline void setKJobTrackerInterface_CustomEvent_Callback(KJobTrackerInterface_CustomEvent_Callback cb) { kjobtrackerinterface_customevent_callback = cb; }
    inline void setKJobTrackerInterface_ConnectNotify_Callback(KJobTrackerInterface_ConnectNotify_Callback cb) { kjobtrackerinterface_connectnotify_callback = cb; }
    inline void setKJobTrackerInterface_DisconnectNotify_Callback(KJobTrackerInterface_DisconnectNotify_Callback cb) { kjobtrackerinterface_disconnectnotify_callback = cb; }
    inline void setKJobTrackerInterface_Sender_Callback(KJobTrackerInterface_Sender_Callback cb) { kjobtrackerinterface_sender_callback = cb; }
    inline void setKJobTrackerInterface_SenderSignalIndex_Callback(KJobTrackerInterface_SenderSignalIndex_Callback cb) { kjobtrackerinterface_sendersignalindex_callback = cb; }
    inline void setKJobTrackerInterface_Receivers_Callback(KJobTrackerInterface_Receivers_Callback cb) { kjobtrackerinterface_receivers_callback = cb; }
    inline void setKJobTrackerInterface_IsSignalConnected_Callback(KJobTrackerInterface_IsSignalConnected_Callback cb) { kjobtrackerinterface_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKJobTrackerInterface_Metacall_IsBase(bool value) const { kjobtrackerinterface_metacall_isbase = value; }
    inline void setKJobTrackerInterface_RegisterJob_IsBase(bool value) const { kjobtrackerinterface_registerjob_isbase = value; }
    inline void setKJobTrackerInterface_UnregisterJob_IsBase(bool value) const { kjobtrackerinterface_unregisterjob_isbase = value; }
    inline void setKJobTrackerInterface_Finished_IsBase(bool value) const { kjobtrackerinterface_finished_isbase = value; }
    inline void setKJobTrackerInterface_Suspended_IsBase(bool value) const { kjobtrackerinterface_suspended_isbase = value; }
    inline void setKJobTrackerInterface_Resumed_IsBase(bool value) const { kjobtrackerinterface_resumed_isbase = value; }
    inline void setKJobTrackerInterface_Description_IsBase(bool value) const { kjobtrackerinterface_description_isbase = value; }
    inline void setKJobTrackerInterface_InfoMessage_IsBase(bool value) const { kjobtrackerinterface_infomessage_isbase = value; }
    inline void setKJobTrackerInterface_Warning_IsBase(bool value) const { kjobtrackerinterface_warning_isbase = value; }
    inline void setKJobTrackerInterface_TotalAmount_IsBase(bool value) const { kjobtrackerinterface_totalamount_isbase = value; }
    inline void setKJobTrackerInterface_ProcessedAmount_IsBase(bool value) const { kjobtrackerinterface_processedamount_isbase = value; }
    inline void setKJobTrackerInterface_Percent_IsBase(bool value) const { kjobtrackerinterface_percent_isbase = value; }
    inline void setKJobTrackerInterface_Speed_IsBase(bool value) const { kjobtrackerinterface_speed_isbase = value; }
    inline void setKJobTrackerInterface_Event_IsBase(bool value) const { kjobtrackerinterface_event_isbase = value; }
    inline void setKJobTrackerInterface_EventFilter_IsBase(bool value) const { kjobtrackerinterface_eventfilter_isbase = value; }
    inline void setKJobTrackerInterface_TimerEvent_IsBase(bool value) const { kjobtrackerinterface_timerevent_isbase = value; }
    inline void setKJobTrackerInterface_ChildEvent_IsBase(bool value) const { kjobtrackerinterface_childevent_isbase = value; }
    inline void setKJobTrackerInterface_CustomEvent_IsBase(bool value) const { kjobtrackerinterface_customevent_isbase = value; }
    inline void setKJobTrackerInterface_ConnectNotify_IsBase(bool value) const { kjobtrackerinterface_connectnotify_isbase = value; }
    inline void setKJobTrackerInterface_DisconnectNotify_IsBase(bool value) const { kjobtrackerinterface_disconnectnotify_isbase = value; }
    inline void setKJobTrackerInterface_Sender_IsBase(bool value) const { kjobtrackerinterface_sender_isbase = value; }
    inline void setKJobTrackerInterface_SenderSignalIndex_IsBase(bool value) const { kjobtrackerinterface_sendersignalindex_isbase = value; }
    inline void setKJobTrackerInterface_Receivers_IsBase(bool value) const { kjobtrackerinterface_receivers_isbase = value; }
    inline void setKJobTrackerInterface_IsSignalConnected_IsBase(bool value) const { kjobtrackerinterface_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kjobtrackerinterface_metacall_isbase) {
            kjobtrackerinterface_metacall_isbase = false;
            return KJobTrackerInterface::qt_metacall(param1, param2, param3);
        } else if (kjobtrackerinterface_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kjobtrackerinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KJobTrackerInterface::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void registerJob(KJob* job) override {
        if (kjobtrackerinterface_registerjob_isbase) {
            kjobtrackerinterface_registerjob_isbase = false;
            KJobTrackerInterface::registerJob(job);
        } else if (kjobtrackerinterface_registerjob_callback != nullptr) {
            KJob* cbval1 = job;

            kjobtrackerinterface_registerjob_callback(this, cbval1);
        } else {
            KJobTrackerInterface::registerJob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unregisterJob(KJob* job) override {
        if (kjobtrackerinterface_unregisterjob_isbase) {
            kjobtrackerinterface_unregisterjob_isbase = false;
            KJobTrackerInterface::unregisterJob(job);
        } else if (kjobtrackerinterface_unregisterjob_callback != nullptr) {
            KJob* cbval1 = job;

            kjobtrackerinterface_unregisterjob_callback(this, cbval1);
        } else {
            KJobTrackerInterface::unregisterJob(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void finished(KJob* job) override {
        if (kjobtrackerinterface_finished_isbase) {
            kjobtrackerinterface_finished_isbase = false;
            KJobTrackerInterface::finished(job);
        } else if (kjobtrackerinterface_finished_callback != nullptr) {
            KJob* cbval1 = job;

            kjobtrackerinterface_finished_callback(this, cbval1);
        } else {
            KJobTrackerInterface::finished(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void suspended(KJob* job) override {
        if (kjobtrackerinterface_suspended_isbase) {
            kjobtrackerinterface_suspended_isbase = false;
            KJobTrackerInterface::suspended(job);
        } else if (kjobtrackerinterface_suspended_callback != nullptr) {
            KJob* cbval1 = job;

            kjobtrackerinterface_suspended_callback(this, cbval1);
        } else {
            KJobTrackerInterface::suspended(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resumed(KJob* job) override {
        if (kjobtrackerinterface_resumed_isbase) {
            kjobtrackerinterface_resumed_isbase = false;
            KJobTrackerInterface::resumed(job);
        } else if (kjobtrackerinterface_resumed_callback != nullptr) {
            KJob* cbval1 = job;

            kjobtrackerinterface_resumed_callback(this, cbval1);
        } else {
            KJobTrackerInterface::resumed(job);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void description(KJob* job, const QString& title, const QPair<QString, QString>& field1, const QPair<QString, QString>& field2) override {
        if (kjobtrackerinterface_description_isbase) {
            kjobtrackerinterface_description_isbase = false;
            KJobTrackerInterface::description(job, title, field1, field2);
        } else if (kjobtrackerinterface_description_callback != nullptr) {
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

            kjobtrackerinterface_description_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KJobTrackerInterface::description(job, title, field1, field2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void infoMessage(KJob* job, const QString& message) override {
        if (kjobtrackerinterface_infomessage_isbase) {
            kjobtrackerinterface_infomessage_isbase = false;
            KJobTrackerInterface::infoMessage(job, message);
        } else if (kjobtrackerinterface_infomessage_callback != nullptr) {
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

            kjobtrackerinterface_infomessage_callback(this, cbval1, cbval2);
        } else {
            KJobTrackerInterface::infoMessage(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void warning(KJob* job, const QString& message) override {
        if (kjobtrackerinterface_warning_isbase) {
            kjobtrackerinterface_warning_isbase = false;
            KJobTrackerInterface::warning(job, message);
        } else if (kjobtrackerinterface_warning_callback != nullptr) {
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

            kjobtrackerinterface_warning_callback(this, cbval1, cbval2);
        } else {
            KJobTrackerInterface::warning(job, message);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void totalAmount(KJob* job, KJob::Unit unit, qulonglong amount) override {
        if (kjobtrackerinterface_totalamount_isbase) {
            kjobtrackerinterface_totalamount_isbase = false;
            KJobTrackerInterface::totalAmount(job, unit, amount);
        } else if (kjobtrackerinterface_totalamount_callback != nullptr) {
            KJob* cbval1 = job;
            int cbval2 = static_cast<int>(unit);
            unsigned long long cbval3 = static_cast<unsigned long long>(amount);

            kjobtrackerinterface_totalamount_callback(this, cbval1, cbval2, cbval3);
        } else {
            KJobTrackerInterface::totalAmount(job, unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void processedAmount(KJob* job, KJob::Unit unit, qulonglong amount) override {
        if (kjobtrackerinterface_processedamount_isbase) {
            kjobtrackerinterface_processedamount_isbase = false;
            KJobTrackerInterface::processedAmount(job, unit, amount);
        } else if (kjobtrackerinterface_processedamount_callback != nullptr) {
            KJob* cbval1 = job;
            int cbval2 = static_cast<int>(unit);
            unsigned long long cbval3 = static_cast<unsigned long long>(amount);

            kjobtrackerinterface_processedamount_callback(this, cbval1, cbval2, cbval3);
        } else {
            KJobTrackerInterface::processedAmount(job, unit, amount);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void percent(KJob* job, unsigned long percent) override {
        if (kjobtrackerinterface_percent_isbase) {
            kjobtrackerinterface_percent_isbase = false;
            KJobTrackerInterface::percent(job, percent);
        } else if (kjobtrackerinterface_percent_callback != nullptr) {
            KJob* cbval1 = job;
            unsigned long cbval2 = percent;

            kjobtrackerinterface_percent_callback(this, cbval1, cbval2);
        } else {
            KJobTrackerInterface::percent(job, percent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void speed(KJob* job, unsigned long value) override {
        if (kjobtrackerinterface_speed_isbase) {
            kjobtrackerinterface_speed_isbase = false;
            KJobTrackerInterface::speed(job, value);
        } else if (kjobtrackerinterface_speed_callback != nullptr) {
            KJob* cbval1 = job;
            unsigned long cbval2 = value;

            kjobtrackerinterface_speed_callback(this, cbval1, cbval2);
        } else {
            KJobTrackerInterface::speed(job, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kjobtrackerinterface_event_isbase) {
            kjobtrackerinterface_event_isbase = false;
            return KJobTrackerInterface::event(event);
        } else if (kjobtrackerinterface_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kjobtrackerinterface_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KJobTrackerInterface::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kjobtrackerinterface_eventfilter_isbase) {
            kjobtrackerinterface_eventfilter_isbase = false;
            return KJobTrackerInterface::eventFilter(watched, event);
        } else if (kjobtrackerinterface_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kjobtrackerinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KJobTrackerInterface::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kjobtrackerinterface_timerevent_isbase) {
            kjobtrackerinterface_timerevent_isbase = false;
            KJobTrackerInterface::timerEvent(event);
        } else if (kjobtrackerinterface_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kjobtrackerinterface_timerevent_callback(this, cbval1);
        } else {
            KJobTrackerInterface::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kjobtrackerinterface_childevent_isbase) {
            kjobtrackerinterface_childevent_isbase = false;
            KJobTrackerInterface::childEvent(event);
        } else if (kjobtrackerinterface_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kjobtrackerinterface_childevent_callback(this, cbval1);
        } else {
            KJobTrackerInterface::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kjobtrackerinterface_customevent_isbase) {
            kjobtrackerinterface_customevent_isbase = false;
            KJobTrackerInterface::customEvent(event);
        } else if (kjobtrackerinterface_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kjobtrackerinterface_customevent_callback(this, cbval1);
        } else {
            KJobTrackerInterface::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kjobtrackerinterface_connectnotify_isbase) {
            kjobtrackerinterface_connectnotify_isbase = false;
            KJobTrackerInterface::connectNotify(signal);
        } else if (kjobtrackerinterface_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kjobtrackerinterface_connectnotify_callback(this, cbval1);
        } else {
            KJobTrackerInterface::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kjobtrackerinterface_disconnectnotify_isbase) {
            kjobtrackerinterface_disconnectnotify_isbase = false;
            KJobTrackerInterface::disconnectNotify(signal);
        } else if (kjobtrackerinterface_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kjobtrackerinterface_disconnectnotify_callback(this, cbval1);
        } else {
            KJobTrackerInterface::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kjobtrackerinterface_sender_isbase) {
            kjobtrackerinterface_sender_isbase = false;
            return KJobTrackerInterface::sender();
        } else if (kjobtrackerinterface_sender_callback != nullptr) {
            QObject* callback_ret = kjobtrackerinterface_sender_callback();
            return callback_ret;
        } else {
            return KJobTrackerInterface::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kjobtrackerinterface_sendersignalindex_isbase) {
            kjobtrackerinterface_sendersignalindex_isbase = false;
            return KJobTrackerInterface::senderSignalIndex();
        } else if (kjobtrackerinterface_sendersignalindex_callback != nullptr) {
            int callback_ret = kjobtrackerinterface_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KJobTrackerInterface::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kjobtrackerinterface_receivers_isbase) {
            kjobtrackerinterface_receivers_isbase = false;
            return KJobTrackerInterface::receivers(signal);
        } else if (kjobtrackerinterface_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kjobtrackerinterface_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KJobTrackerInterface::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kjobtrackerinterface_issignalconnected_isbase) {
            kjobtrackerinterface_issignalconnected_isbase = false;
            return KJobTrackerInterface::isSignalConnected(signal);
        } else if (kjobtrackerinterface_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kjobtrackerinterface_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KJobTrackerInterface::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KJobTrackerInterface_Finished(KJobTrackerInterface* self, KJob* job);
    friend void KJobTrackerInterface_QBaseFinished(KJobTrackerInterface* self, KJob* job);
    friend void KJobTrackerInterface_Suspended(KJobTrackerInterface* self, KJob* job);
    friend void KJobTrackerInterface_QBaseSuspended(KJobTrackerInterface* self, KJob* job);
    friend void KJobTrackerInterface_Resumed(KJobTrackerInterface* self, KJob* job);
    friend void KJobTrackerInterface_QBaseResumed(KJobTrackerInterface* self, KJob* job);
    friend void KJobTrackerInterface_Description(KJobTrackerInterface* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
    friend void KJobTrackerInterface_QBaseDescription(KJobTrackerInterface* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
    friend void KJobTrackerInterface_InfoMessage(KJobTrackerInterface* self, KJob* job, const libqt_string message);
    friend void KJobTrackerInterface_QBaseInfoMessage(KJobTrackerInterface* self, KJob* job, const libqt_string message);
    friend void KJobTrackerInterface_Warning(KJobTrackerInterface* self, KJob* job, const libqt_string message);
    friend void KJobTrackerInterface_QBaseWarning(KJobTrackerInterface* self, KJob* job, const libqt_string message);
    friend void KJobTrackerInterface_TotalAmount(KJobTrackerInterface* self, KJob* job, int unit, unsigned long long amount);
    friend void KJobTrackerInterface_QBaseTotalAmount(KJobTrackerInterface* self, KJob* job, int unit, unsigned long long amount);
    friend void KJobTrackerInterface_ProcessedAmount(KJobTrackerInterface* self, KJob* job, int unit, unsigned long long amount);
    friend void KJobTrackerInterface_QBaseProcessedAmount(KJobTrackerInterface* self, KJob* job, int unit, unsigned long long amount);
    friend void KJobTrackerInterface_Percent(KJobTrackerInterface* self, KJob* job, unsigned long percent);
    friend void KJobTrackerInterface_QBasePercent(KJobTrackerInterface* self, KJob* job, unsigned long percent);
    friend void KJobTrackerInterface_Speed(KJobTrackerInterface* self, KJob* job, unsigned long value);
    friend void KJobTrackerInterface_QBaseSpeed(KJobTrackerInterface* self, KJob* job, unsigned long value);
    friend void KJobTrackerInterface_TimerEvent(KJobTrackerInterface* self, QTimerEvent* event);
    friend void KJobTrackerInterface_QBaseTimerEvent(KJobTrackerInterface* self, QTimerEvent* event);
    friend void KJobTrackerInterface_ChildEvent(KJobTrackerInterface* self, QChildEvent* event);
    friend void KJobTrackerInterface_QBaseChildEvent(KJobTrackerInterface* self, QChildEvent* event);
    friend void KJobTrackerInterface_CustomEvent(KJobTrackerInterface* self, QEvent* event);
    friend void KJobTrackerInterface_QBaseCustomEvent(KJobTrackerInterface* self, QEvent* event);
    friend void KJobTrackerInterface_ConnectNotify(KJobTrackerInterface* self, const QMetaMethod* signal);
    friend void KJobTrackerInterface_QBaseConnectNotify(KJobTrackerInterface* self, const QMetaMethod* signal);
    friend void KJobTrackerInterface_DisconnectNotify(KJobTrackerInterface* self, const QMetaMethod* signal);
    friend void KJobTrackerInterface_QBaseDisconnectNotify(KJobTrackerInterface* self, const QMetaMethod* signal);
    friend QObject* KJobTrackerInterface_Sender(const KJobTrackerInterface* self);
    friend QObject* KJobTrackerInterface_QBaseSender(const KJobTrackerInterface* self);
    friend int KJobTrackerInterface_SenderSignalIndex(const KJobTrackerInterface* self);
    friend int KJobTrackerInterface_QBaseSenderSignalIndex(const KJobTrackerInterface* self);
    friend int KJobTrackerInterface_Receivers(const KJobTrackerInterface* self, const char* signal);
    friend int KJobTrackerInterface_QBaseReceivers(const KJobTrackerInterface* self, const char* signal);
    friend bool KJobTrackerInterface_IsSignalConnected(const KJobTrackerInterface* self, const QMetaMethod* signal);
    friend bool KJobTrackerInterface_QBaseIsSignalConnected(const KJobTrackerInterface* self, const QMetaMethod* signal);
};

#endif
