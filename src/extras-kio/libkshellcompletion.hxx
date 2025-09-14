#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKSHELLCOMPLETION_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKSHELLCOMPLETION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KShellCompletion so that we can call protected methods
class VirtualKShellCompletion final : public KShellCompletion {

  public:
    // Virtual class boolean flag
    bool isVirtualKShellCompletion = true;

    // Virtual class public types (including callbacks)
    using KShellCompletion_Metacall_Callback = int (*)(KShellCompletion*, int, int, void**);
    using KShellCompletion_MakeCompletion_Callback = const char* (*)(KShellCompletion*, libqt_string);
    using KShellCompletion_PostProcessMatches_Callback = void (*)(const KShellCompletion*, libqt_list /* of libqt_string */);
    using KShellCompletion_SetDir_Callback = void (*)(KShellCompletion*, QUrl*);
    using KShellCompletion_Dir_Callback = QUrl* (*)();
    using KShellCompletion_IsRunning_Callback = bool (*)();
    using KShellCompletion_Stop_Callback = void (*)();
    using KShellCompletion_Mode_Callback = int (*)();
    using KShellCompletion_SetMode_Callback = void (*)(KShellCompletion*, int);
    using KShellCompletion_ReplaceEnv_Callback = bool (*)();
    using KShellCompletion_SetReplaceEnv_Callback = void (*)(KShellCompletion*, bool);
    using KShellCompletion_ReplaceHome_Callback = bool (*)();
    using KShellCompletion_SetReplaceHome_Callback = void (*)(KShellCompletion*, bool);
    using KShellCompletion_LastMatch_Callback = const char* (*)();
    using KShellCompletion_SetCompletionMode_Callback = void (*)(KShellCompletion*, int);
    using KShellCompletion_SetOrder_Callback = void (*)(KShellCompletion*, int);
    using KShellCompletion_SetIgnoreCase_Callback = void (*)(KShellCompletion*, bool);
    using KShellCompletion_SetSoundsEnabled_Callback = void (*)(KShellCompletion*, bool);
    using KShellCompletion_SetItems_Callback = void (*)(KShellCompletion*, libqt_list /* of libqt_string */);
    using KShellCompletion_Clear_Callback = void (*)();
    using KShellCompletion_Event_Callback = bool (*)(KShellCompletion*, QEvent*);
    using KShellCompletion_EventFilter_Callback = bool (*)(KShellCompletion*, QObject*, QEvent*);
    using KShellCompletion_TimerEvent_Callback = void (*)(KShellCompletion*, QTimerEvent*);
    using KShellCompletion_ChildEvent_Callback = void (*)(KShellCompletion*, QChildEvent*);
    using KShellCompletion_CustomEvent_Callback = void (*)(KShellCompletion*, QEvent*);
    using KShellCompletion_ConnectNotify_Callback = void (*)(KShellCompletion*, QMetaMethod*);
    using KShellCompletion_DisconnectNotify_Callback = void (*)(KShellCompletion*, QMetaMethod*);
    using KShellCompletion_SetShouldAutoSuggest_Callback = void (*)(KShellCompletion*, bool);
    using KShellCompletion_Sender_Callback = QObject* (*)();
    using KShellCompletion_SenderSignalIndex_Callback = int (*)();
    using KShellCompletion_Receivers_Callback = int (*)(const KShellCompletion*, const char*);
    using KShellCompletion_IsSignalConnected_Callback = bool (*)(const KShellCompletion*, QMetaMethod*);

  protected:
    // Instance callback storage
    KShellCompletion_Metacall_Callback kshellcompletion_metacall_callback = nullptr;
    KShellCompletion_MakeCompletion_Callback kshellcompletion_makecompletion_callback = nullptr;
    KShellCompletion_PostProcessMatches_Callback kshellcompletion_postprocessmatches_callback = nullptr;
    KShellCompletion_SetDir_Callback kshellcompletion_setdir_callback = nullptr;
    KShellCompletion_Dir_Callback kshellcompletion_dir_callback = nullptr;
    KShellCompletion_IsRunning_Callback kshellcompletion_isrunning_callback = nullptr;
    KShellCompletion_Stop_Callback kshellcompletion_stop_callback = nullptr;
    KShellCompletion_Mode_Callback kshellcompletion_mode_callback = nullptr;
    KShellCompletion_SetMode_Callback kshellcompletion_setmode_callback = nullptr;
    KShellCompletion_ReplaceEnv_Callback kshellcompletion_replaceenv_callback = nullptr;
    KShellCompletion_SetReplaceEnv_Callback kshellcompletion_setreplaceenv_callback = nullptr;
    KShellCompletion_ReplaceHome_Callback kshellcompletion_replacehome_callback = nullptr;
    KShellCompletion_SetReplaceHome_Callback kshellcompletion_setreplacehome_callback = nullptr;
    KShellCompletion_LastMatch_Callback kshellcompletion_lastmatch_callback = nullptr;
    KShellCompletion_SetCompletionMode_Callback kshellcompletion_setcompletionmode_callback = nullptr;
    KShellCompletion_SetOrder_Callback kshellcompletion_setorder_callback = nullptr;
    KShellCompletion_SetIgnoreCase_Callback kshellcompletion_setignorecase_callback = nullptr;
    KShellCompletion_SetSoundsEnabled_Callback kshellcompletion_setsoundsenabled_callback = nullptr;
    KShellCompletion_SetItems_Callback kshellcompletion_setitems_callback = nullptr;
    KShellCompletion_Clear_Callback kshellcompletion_clear_callback = nullptr;
    KShellCompletion_Event_Callback kshellcompletion_event_callback = nullptr;
    KShellCompletion_EventFilter_Callback kshellcompletion_eventfilter_callback = nullptr;
    KShellCompletion_TimerEvent_Callback kshellcompletion_timerevent_callback = nullptr;
    KShellCompletion_ChildEvent_Callback kshellcompletion_childevent_callback = nullptr;
    KShellCompletion_CustomEvent_Callback kshellcompletion_customevent_callback = nullptr;
    KShellCompletion_ConnectNotify_Callback kshellcompletion_connectnotify_callback = nullptr;
    KShellCompletion_DisconnectNotify_Callback kshellcompletion_disconnectnotify_callback = nullptr;
    KShellCompletion_SetShouldAutoSuggest_Callback kshellcompletion_setshouldautosuggest_callback = nullptr;
    KShellCompletion_Sender_Callback kshellcompletion_sender_callback = nullptr;
    KShellCompletion_SenderSignalIndex_Callback kshellcompletion_sendersignalindex_callback = nullptr;
    KShellCompletion_Receivers_Callback kshellcompletion_receivers_callback = nullptr;
    KShellCompletion_IsSignalConnected_Callback kshellcompletion_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kshellcompletion_metacall_isbase = false;
    mutable bool kshellcompletion_makecompletion_isbase = false;
    mutable bool kshellcompletion_postprocessmatches_isbase = false;
    mutable bool kshellcompletion_setdir_isbase = false;
    mutable bool kshellcompletion_dir_isbase = false;
    mutable bool kshellcompletion_isrunning_isbase = false;
    mutable bool kshellcompletion_stop_isbase = false;
    mutable bool kshellcompletion_mode_isbase = false;
    mutable bool kshellcompletion_setmode_isbase = false;
    mutable bool kshellcompletion_replaceenv_isbase = false;
    mutable bool kshellcompletion_setreplaceenv_isbase = false;
    mutable bool kshellcompletion_replacehome_isbase = false;
    mutable bool kshellcompletion_setreplacehome_isbase = false;
    mutable bool kshellcompletion_lastmatch_isbase = false;
    mutable bool kshellcompletion_setcompletionmode_isbase = false;
    mutable bool kshellcompletion_setorder_isbase = false;
    mutable bool kshellcompletion_setignorecase_isbase = false;
    mutable bool kshellcompletion_setsoundsenabled_isbase = false;
    mutable bool kshellcompletion_setitems_isbase = false;
    mutable bool kshellcompletion_clear_isbase = false;
    mutable bool kshellcompletion_event_isbase = false;
    mutable bool kshellcompletion_eventfilter_isbase = false;
    mutable bool kshellcompletion_timerevent_isbase = false;
    mutable bool kshellcompletion_childevent_isbase = false;
    mutable bool kshellcompletion_customevent_isbase = false;
    mutable bool kshellcompletion_connectnotify_isbase = false;
    mutable bool kshellcompletion_disconnectnotify_isbase = false;
    mutable bool kshellcompletion_setshouldautosuggest_isbase = false;
    mutable bool kshellcompletion_sender_isbase = false;
    mutable bool kshellcompletion_sendersignalindex_isbase = false;
    mutable bool kshellcompletion_receivers_isbase = false;
    mutable bool kshellcompletion_issignalconnected_isbase = false;

  public:
    VirtualKShellCompletion() : KShellCompletion() {};

    ~VirtualKShellCompletion() {
        kshellcompletion_metacall_callback = nullptr;
        kshellcompletion_makecompletion_callback = nullptr;
        kshellcompletion_postprocessmatches_callback = nullptr;
        kshellcompletion_setdir_callback = nullptr;
        kshellcompletion_dir_callback = nullptr;
        kshellcompletion_isrunning_callback = nullptr;
        kshellcompletion_stop_callback = nullptr;
        kshellcompletion_mode_callback = nullptr;
        kshellcompletion_setmode_callback = nullptr;
        kshellcompletion_replaceenv_callback = nullptr;
        kshellcompletion_setreplaceenv_callback = nullptr;
        kshellcompletion_replacehome_callback = nullptr;
        kshellcompletion_setreplacehome_callback = nullptr;
        kshellcompletion_lastmatch_callback = nullptr;
        kshellcompletion_setcompletionmode_callback = nullptr;
        kshellcompletion_setorder_callback = nullptr;
        kshellcompletion_setignorecase_callback = nullptr;
        kshellcompletion_setsoundsenabled_callback = nullptr;
        kshellcompletion_setitems_callback = nullptr;
        kshellcompletion_clear_callback = nullptr;
        kshellcompletion_event_callback = nullptr;
        kshellcompletion_eventfilter_callback = nullptr;
        kshellcompletion_timerevent_callback = nullptr;
        kshellcompletion_childevent_callback = nullptr;
        kshellcompletion_customevent_callback = nullptr;
        kshellcompletion_connectnotify_callback = nullptr;
        kshellcompletion_disconnectnotify_callback = nullptr;
        kshellcompletion_setshouldautosuggest_callback = nullptr;
        kshellcompletion_sender_callback = nullptr;
        kshellcompletion_sendersignalindex_callback = nullptr;
        kshellcompletion_receivers_callback = nullptr;
        kshellcompletion_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKShellCompletion_Metacall_Callback(KShellCompletion_Metacall_Callback cb) { kshellcompletion_metacall_callback = cb; }
    inline void setKShellCompletion_MakeCompletion_Callback(KShellCompletion_MakeCompletion_Callback cb) { kshellcompletion_makecompletion_callback = cb; }
    inline void setKShellCompletion_PostProcessMatches_Callback(KShellCompletion_PostProcessMatches_Callback cb) { kshellcompletion_postprocessmatches_callback = cb; }
    inline void setKShellCompletion_SetDir_Callback(KShellCompletion_SetDir_Callback cb) { kshellcompletion_setdir_callback = cb; }
    inline void setKShellCompletion_Dir_Callback(KShellCompletion_Dir_Callback cb) { kshellcompletion_dir_callback = cb; }
    inline void setKShellCompletion_IsRunning_Callback(KShellCompletion_IsRunning_Callback cb) { kshellcompletion_isrunning_callback = cb; }
    inline void setKShellCompletion_Stop_Callback(KShellCompletion_Stop_Callback cb) { kshellcompletion_stop_callback = cb; }
    inline void setKShellCompletion_Mode_Callback(KShellCompletion_Mode_Callback cb) { kshellcompletion_mode_callback = cb; }
    inline void setKShellCompletion_SetMode_Callback(KShellCompletion_SetMode_Callback cb) { kshellcompletion_setmode_callback = cb; }
    inline void setKShellCompletion_ReplaceEnv_Callback(KShellCompletion_ReplaceEnv_Callback cb) { kshellcompletion_replaceenv_callback = cb; }
    inline void setKShellCompletion_SetReplaceEnv_Callback(KShellCompletion_SetReplaceEnv_Callback cb) { kshellcompletion_setreplaceenv_callback = cb; }
    inline void setKShellCompletion_ReplaceHome_Callback(KShellCompletion_ReplaceHome_Callback cb) { kshellcompletion_replacehome_callback = cb; }
    inline void setKShellCompletion_SetReplaceHome_Callback(KShellCompletion_SetReplaceHome_Callback cb) { kshellcompletion_setreplacehome_callback = cb; }
    inline void setKShellCompletion_LastMatch_Callback(KShellCompletion_LastMatch_Callback cb) { kshellcompletion_lastmatch_callback = cb; }
    inline void setKShellCompletion_SetCompletionMode_Callback(KShellCompletion_SetCompletionMode_Callback cb) { kshellcompletion_setcompletionmode_callback = cb; }
    inline void setKShellCompletion_SetOrder_Callback(KShellCompletion_SetOrder_Callback cb) { kshellcompletion_setorder_callback = cb; }
    inline void setKShellCompletion_SetIgnoreCase_Callback(KShellCompletion_SetIgnoreCase_Callback cb) { kshellcompletion_setignorecase_callback = cb; }
    inline void setKShellCompletion_SetSoundsEnabled_Callback(KShellCompletion_SetSoundsEnabled_Callback cb) { kshellcompletion_setsoundsenabled_callback = cb; }
    inline void setKShellCompletion_SetItems_Callback(KShellCompletion_SetItems_Callback cb) { kshellcompletion_setitems_callback = cb; }
    inline void setKShellCompletion_Clear_Callback(KShellCompletion_Clear_Callback cb) { kshellcompletion_clear_callback = cb; }
    inline void setKShellCompletion_Event_Callback(KShellCompletion_Event_Callback cb) { kshellcompletion_event_callback = cb; }
    inline void setKShellCompletion_EventFilter_Callback(KShellCompletion_EventFilter_Callback cb) { kshellcompletion_eventfilter_callback = cb; }
    inline void setKShellCompletion_TimerEvent_Callback(KShellCompletion_TimerEvent_Callback cb) { kshellcompletion_timerevent_callback = cb; }
    inline void setKShellCompletion_ChildEvent_Callback(KShellCompletion_ChildEvent_Callback cb) { kshellcompletion_childevent_callback = cb; }
    inline void setKShellCompletion_CustomEvent_Callback(KShellCompletion_CustomEvent_Callback cb) { kshellcompletion_customevent_callback = cb; }
    inline void setKShellCompletion_ConnectNotify_Callback(KShellCompletion_ConnectNotify_Callback cb) { kshellcompletion_connectnotify_callback = cb; }
    inline void setKShellCompletion_DisconnectNotify_Callback(KShellCompletion_DisconnectNotify_Callback cb) { kshellcompletion_disconnectnotify_callback = cb; }
    inline void setKShellCompletion_SetShouldAutoSuggest_Callback(KShellCompletion_SetShouldAutoSuggest_Callback cb) { kshellcompletion_setshouldautosuggest_callback = cb; }
    inline void setKShellCompletion_Sender_Callback(KShellCompletion_Sender_Callback cb) { kshellcompletion_sender_callback = cb; }
    inline void setKShellCompletion_SenderSignalIndex_Callback(KShellCompletion_SenderSignalIndex_Callback cb) { kshellcompletion_sendersignalindex_callback = cb; }
    inline void setKShellCompletion_Receivers_Callback(KShellCompletion_Receivers_Callback cb) { kshellcompletion_receivers_callback = cb; }
    inline void setKShellCompletion_IsSignalConnected_Callback(KShellCompletion_IsSignalConnected_Callback cb) { kshellcompletion_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKShellCompletion_Metacall_IsBase(bool value) const { kshellcompletion_metacall_isbase = value; }
    inline void setKShellCompletion_MakeCompletion_IsBase(bool value) const { kshellcompletion_makecompletion_isbase = value; }
    inline void setKShellCompletion_PostProcessMatches_IsBase(bool value) const { kshellcompletion_postprocessmatches_isbase = value; }
    inline void setKShellCompletion_SetDir_IsBase(bool value) const { kshellcompletion_setdir_isbase = value; }
    inline void setKShellCompletion_Dir_IsBase(bool value) const { kshellcompletion_dir_isbase = value; }
    inline void setKShellCompletion_IsRunning_IsBase(bool value) const { kshellcompletion_isrunning_isbase = value; }
    inline void setKShellCompletion_Stop_IsBase(bool value) const { kshellcompletion_stop_isbase = value; }
    inline void setKShellCompletion_Mode_IsBase(bool value) const { kshellcompletion_mode_isbase = value; }
    inline void setKShellCompletion_SetMode_IsBase(bool value) const { kshellcompletion_setmode_isbase = value; }
    inline void setKShellCompletion_ReplaceEnv_IsBase(bool value) const { kshellcompletion_replaceenv_isbase = value; }
    inline void setKShellCompletion_SetReplaceEnv_IsBase(bool value) const { kshellcompletion_setreplaceenv_isbase = value; }
    inline void setKShellCompletion_ReplaceHome_IsBase(bool value) const { kshellcompletion_replacehome_isbase = value; }
    inline void setKShellCompletion_SetReplaceHome_IsBase(bool value) const { kshellcompletion_setreplacehome_isbase = value; }
    inline void setKShellCompletion_LastMatch_IsBase(bool value) const { kshellcompletion_lastmatch_isbase = value; }
    inline void setKShellCompletion_SetCompletionMode_IsBase(bool value) const { kshellcompletion_setcompletionmode_isbase = value; }
    inline void setKShellCompletion_SetOrder_IsBase(bool value) const { kshellcompletion_setorder_isbase = value; }
    inline void setKShellCompletion_SetIgnoreCase_IsBase(bool value) const { kshellcompletion_setignorecase_isbase = value; }
    inline void setKShellCompletion_SetSoundsEnabled_IsBase(bool value) const { kshellcompletion_setsoundsenabled_isbase = value; }
    inline void setKShellCompletion_SetItems_IsBase(bool value) const { kshellcompletion_setitems_isbase = value; }
    inline void setKShellCompletion_Clear_IsBase(bool value) const { kshellcompletion_clear_isbase = value; }
    inline void setKShellCompletion_Event_IsBase(bool value) const { kshellcompletion_event_isbase = value; }
    inline void setKShellCompletion_EventFilter_IsBase(bool value) const { kshellcompletion_eventfilter_isbase = value; }
    inline void setKShellCompletion_TimerEvent_IsBase(bool value) const { kshellcompletion_timerevent_isbase = value; }
    inline void setKShellCompletion_ChildEvent_IsBase(bool value) const { kshellcompletion_childevent_isbase = value; }
    inline void setKShellCompletion_CustomEvent_IsBase(bool value) const { kshellcompletion_customevent_isbase = value; }
    inline void setKShellCompletion_ConnectNotify_IsBase(bool value) const { kshellcompletion_connectnotify_isbase = value; }
    inline void setKShellCompletion_DisconnectNotify_IsBase(bool value) const { kshellcompletion_disconnectnotify_isbase = value; }
    inline void setKShellCompletion_SetShouldAutoSuggest_IsBase(bool value) const { kshellcompletion_setshouldautosuggest_isbase = value; }
    inline void setKShellCompletion_Sender_IsBase(bool value) const { kshellcompletion_sender_isbase = value; }
    inline void setKShellCompletion_SenderSignalIndex_IsBase(bool value) const { kshellcompletion_sendersignalindex_isbase = value; }
    inline void setKShellCompletion_Receivers_IsBase(bool value) const { kshellcompletion_receivers_isbase = value; }
    inline void setKShellCompletion_IsSignalConnected_IsBase(bool value) const { kshellcompletion_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kshellcompletion_metacall_isbase) {
            kshellcompletion_metacall_isbase = false;
            return KShellCompletion::qt_metacall(param1, param2, param3);
        } else if (kshellcompletion_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kshellcompletion_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KShellCompletion::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString makeCompletion(const QString& text) override {
        if (kshellcompletion_makecompletion_isbase) {
            kshellcompletion_makecompletion_isbase = false;
            return KShellCompletion::makeCompletion(text);
        } else if (kshellcompletion_makecompletion_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            const char* callback_ret = kshellcompletion_makecompletion_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KShellCompletion::makeCompletion(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void postProcessMatches(QList<QString>* matches) const override {
        if (kshellcompletion_postprocessmatches_isbase) {
            kshellcompletion_postprocessmatches_isbase = false;
            KShellCompletion::postProcessMatches(matches);
        } else if (kshellcompletion_postprocessmatches_callback != nullptr) {
            QList<QString>* matches_ret = matches;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* matches_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (matches_ret->size() + 1)));
            for (qsizetype i = 0; i < matches_ret->size(); ++i) {
                QString matches_lv_ret = (*matches_ret)[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray matches_lv_b = matches_lv_ret.toUtf8();
                libqt_string matches_lv_str;
                matches_lv_str.len = matches_lv_b.length();
                matches_lv_str.data = static_cast<const char*>(malloc(matches_lv_str.len + 1));
                memcpy((void*)matches_lv_str.data, matches_lv_b.data(), matches_lv_str.len);
                ((char*)matches_lv_str.data)[matches_lv_str.len] = '\0';
                matches_arr[i] = matches_lv_str;
            }
            libqt_list matches_out;
            matches_out.len = matches_ret->size();
            matches_out.data = static_cast<void*>(matches_arr);
            libqt_list /* of libqt_string */ cbval1 = matches_out;

            kshellcompletion_postprocessmatches_callback(this, cbval1);
        } else {
            KShellCompletion::postProcessMatches(matches);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDir(const QUrl& dir) override {
        if (kshellcompletion_setdir_isbase) {
            kshellcompletion_setdir_isbase = false;
            KShellCompletion::setDir(dir);
        } else if (kshellcompletion_setdir_callback != nullptr) {
            const QUrl& dir_ret = dir;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&dir_ret);

            kshellcompletion_setdir_callback(this, cbval1);
        } else {
            KShellCompletion::setDir(dir);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QUrl dir() const override {
        if (kshellcompletion_dir_isbase) {
            kshellcompletion_dir_isbase = false;
            return KShellCompletion::dir();
        } else if (kshellcompletion_dir_callback != nullptr) {
            QUrl* callback_ret = kshellcompletion_dir_callback();
            return *callback_ret;
        } else {
            return KShellCompletion::dir();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isRunning() const override {
        if (kshellcompletion_isrunning_isbase) {
            kshellcompletion_isrunning_isbase = false;
            return KShellCompletion::isRunning();
        } else if (kshellcompletion_isrunning_callback != nullptr) {
            bool callback_ret = kshellcompletion_isrunning_callback();
            return callback_ret;
        } else {
            return KShellCompletion::isRunning();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stop() override {
        if (kshellcompletion_stop_isbase) {
            kshellcompletion_stop_isbase = false;
            KShellCompletion::stop();
        } else if (kshellcompletion_stop_callback != nullptr) {
            kshellcompletion_stop_callback();
        } else {
            KShellCompletion::stop();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KUrlCompletion::Mode mode() const override {
        if (kshellcompletion_mode_isbase) {
            kshellcompletion_mode_isbase = false;
            return KShellCompletion::mode();
        } else if (kshellcompletion_mode_callback != nullptr) {
            int callback_ret = kshellcompletion_mode_callback();
            return static_cast<KUrlCompletion::Mode>(callback_ret);
        } else {
            return KShellCompletion::mode();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMode(KUrlCompletion::Mode mode) override {
        if (kshellcompletion_setmode_isbase) {
            kshellcompletion_setmode_isbase = false;
            KShellCompletion::setMode(mode);
        } else if (kshellcompletion_setmode_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            kshellcompletion_setmode_callback(this, cbval1);
        } else {
            KShellCompletion::setMode(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool replaceEnv() const override {
        if (kshellcompletion_replaceenv_isbase) {
            kshellcompletion_replaceenv_isbase = false;
            return KShellCompletion::replaceEnv();
        } else if (kshellcompletion_replaceenv_callback != nullptr) {
            bool callback_ret = kshellcompletion_replaceenv_callback();
            return callback_ret;
        } else {
            return KShellCompletion::replaceEnv();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReplaceEnv(bool replace) override {
        if (kshellcompletion_setreplaceenv_isbase) {
            kshellcompletion_setreplaceenv_isbase = false;
            KShellCompletion::setReplaceEnv(replace);
        } else if (kshellcompletion_setreplaceenv_callback != nullptr) {
            bool cbval1 = replace;

            kshellcompletion_setreplaceenv_callback(this, cbval1);
        } else {
            KShellCompletion::setReplaceEnv(replace);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool replaceHome() const override {
        if (kshellcompletion_replacehome_isbase) {
            kshellcompletion_replacehome_isbase = false;
            return KShellCompletion::replaceHome();
        } else if (kshellcompletion_replacehome_callback != nullptr) {
            bool callback_ret = kshellcompletion_replacehome_callback();
            return callback_ret;
        } else {
            return KShellCompletion::replaceHome();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReplaceHome(bool replace) override {
        if (kshellcompletion_setreplacehome_isbase) {
            kshellcompletion_setreplacehome_isbase = false;
            KShellCompletion::setReplaceHome(replace);
        } else if (kshellcompletion_setreplacehome_callback != nullptr) {
            bool cbval1 = replace;

            kshellcompletion_setreplacehome_callback(this, cbval1);
        } else {
            KShellCompletion::setReplaceHome(replace);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const QString& lastMatch() const override {
        if (kshellcompletion_lastmatch_isbase) {
            kshellcompletion_lastmatch_isbase = false;
            return KShellCompletion::lastMatch();
        } else if (kshellcompletion_lastmatch_callback != nullptr) {
            const char* callback_ret = kshellcompletion_lastmatch_callback();
            QString* callback_ret_QString = new QString(QString::fromUtf8(callback_ret));
            return *callback_ret_QString;
        } else {
            return KShellCompletion::lastMatch();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionMode(KCompletion::CompletionMode mode) override {
        if (kshellcompletion_setcompletionmode_isbase) {
            kshellcompletion_setcompletionmode_isbase = false;
            KShellCompletion::setCompletionMode(mode);
        } else if (kshellcompletion_setcompletionmode_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            kshellcompletion_setcompletionmode_callback(this, cbval1);
        } else {
            KShellCompletion::setCompletionMode(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOrder(KCompletion::CompOrder order) override {
        if (kshellcompletion_setorder_isbase) {
            kshellcompletion_setorder_isbase = false;
            KShellCompletion::setOrder(order);
        } else if (kshellcompletion_setorder_callback != nullptr) {
            int cbval1 = static_cast<int>(order);

            kshellcompletion_setorder_callback(this, cbval1);
        } else {
            KShellCompletion::setOrder(order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIgnoreCase(bool ignoreCase) override {
        if (kshellcompletion_setignorecase_isbase) {
            kshellcompletion_setignorecase_isbase = false;
            KShellCompletion::setIgnoreCase(ignoreCase);
        } else if (kshellcompletion_setignorecase_callback != nullptr) {
            bool cbval1 = ignoreCase;

            kshellcompletion_setignorecase_callback(this, cbval1);
        } else {
            KShellCompletion::setIgnoreCase(ignoreCase);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSoundsEnabled(bool enable) override {
        if (kshellcompletion_setsoundsenabled_isbase) {
            kshellcompletion_setsoundsenabled_isbase = false;
            KShellCompletion::setSoundsEnabled(enable);
        } else if (kshellcompletion_setsoundsenabled_callback != nullptr) {
            bool cbval1 = enable;

            kshellcompletion_setsoundsenabled_callback(this, cbval1);
        } else {
            KShellCompletion::setSoundsEnabled(enable);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setItems(const QList<QString>& itemList) override {
        if (kshellcompletion_setitems_isbase) {
            kshellcompletion_setitems_isbase = false;
            KShellCompletion::setItems(itemList);
        } else if (kshellcompletion_setitems_callback != nullptr) {
            const QList<QString>& itemList_ret = itemList;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* itemList_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (itemList_ret.size() + 1)));
            for (qsizetype i = 0; i < itemList_ret.size(); ++i) {
                QString itemList_lv_ret = itemList_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray itemList_lv_b = itemList_lv_ret.toUtf8();
                libqt_string itemList_lv_str;
                itemList_lv_str.len = itemList_lv_b.length();
                itemList_lv_str.data = static_cast<const char*>(malloc(itemList_lv_str.len + 1));
                memcpy((void*)itemList_lv_str.data, itemList_lv_b.data(), itemList_lv_str.len);
                ((char*)itemList_lv_str.data)[itemList_lv_str.len] = '\0';
                itemList_arr[i] = itemList_lv_str;
            }
            libqt_list itemList_out;
            itemList_out.len = itemList_ret.size();
            itemList_out.data = static_cast<void*>(itemList_arr);
            libqt_list /* of libqt_string */ cbval1 = itemList_out;

            kshellcompletion_setitems_callback(this, cbval1);
        } else {
            KShellCompletion::setItems(itemList);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (kshellcompletion_clear_isbase) {
            kshellcompletion_clear_isbase = false;
            KShellCompletion::clear();
        } else if (kshellcompletion_clear_callback != nullptr) {
            kshellcompletion_clear_callback();
        } else {
            KShellCompletion::clear();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kshellcompletion_event_isbase) {
            kshellcompletion_event_isbase = false;
            return KShellCompletion::event(event);
        } else if (kshellcompletion_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kshellcompletion_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KShellCompletion::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kshellcompletion_eventfilter_isbase) {
            kshellcompletion_eventfilter_isbase = false;
            return KShellCompletion::eventFilter(watched, event);
        } else if (kshellcompletion_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kshellcompletion_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KShellCompletion::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kshellcompletion_timerevent_isbase) {
            kshellcompletion_timerevent_isbase = false;
            KShellCompletion::timerEvent(event);
        } else if (kshellcompletion_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kshellcompletion_timerevent_callback(this, cbval1);
        } else {
            KShellCompletion::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kshellcompletion_childevent_isbase) {
            kshellcompletion_childevent_isbase = false;
            KShellCompletion::childEvent(event);
        } else if (kshellcompletion_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kshellcompletion_childevent_callback(this, cbval1);
        } else {
            KShellCompletion::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kshellcompletion_customevent_isbase) {
            kshellcompletion_customevent_isbase = false;
            KShellCompletion::customEvent(event);
        } else if (kshellcompletion_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kshellcompletion_customevent_callback(this, cbval1);
        } else {
            KShellCompletion::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kshellcompletion_connectnotify_isbase) {
            kshellcompletion_connectnotify_isbase = false;
            KShellCompletion::connectNotify(signal);
        } else if (kshellcompletion_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kshellcompletion_connectnotify_callback(this, cbval1);
        } else {
            KShellCompletion::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kshellcompletion_disconnectnotify_isbase) {
            kshellcompletion_disconnectnotify_isbase = false;
            KShellCompletion::disconnectNotify(signal);
        } else if (kshellcompletion_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kshellcompletion_disconnectnotify_callback(this, cbval1);
        } else {
            KShellCompletion::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setShouldAutoSuggest(bool shouldAutosuggest) {
        if (kshellcompletion_setshouldautosuggest_isbase) {
            kshellcompletion_setshouldautosuggest_isbase = false;
            KShellCompletion::setShouldAutoSuggest(shouldAutosuggest);
        } else if (kshellcompletion_setshouldautosuggest_callback != nullptr) {
            bool cbval1 = shouldAutosuggest;

            kshellcompletion_setshouldautosuggest_callback(this, cbval1);
        } else {
            KShellCompletion::setShouldAutoSuggest(shouldAutosuggest);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kshellcompletion_sender_isbase) {
            kshellcompletion_sender_isbase = false;
            return KShellCompletion::sender();
        } else if (kshellcompletion_sender_callback != nullptr) {
            QObject* callback_ret = kshellcompletion_sender_callback();
            return callback_ret;
        } else {
            return KShellCompletion::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kshellcompletion_sendersignalindex_isbase) {
            kshellcompletion_sendersignalindex_isbase = false;
            return KShellCompletion::senderSignalIndex();
        } else if (kshellcompletion_sendersignalindex_callback != nullptr) {
            int callback_ret = kshellcompletion_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KShellCompletion::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kshellcompletion_receivers_isbase) {
            kshellcompletion_receivers_isbase = false;
            return KShellCompletion::receivers(signal);
        } else if (kshellcompletion_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kshellcompletion_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KShellCompletion::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kshellcompletion_issignalconnected_isbase) {
            kshellcompletion_issignalconnected_isbase = false;
            return KShellCompletion::isSignalConnected(signal);
        } else if (kshellcompletion_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kshellcompletion_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KShellCompletion::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KShellCompletion_PostProcessMatches(const KShellCompletion* self, libqt_list /* of libqt_string */ matches);
    friend void KShellCompletion_QBasePostProcessMatches(const KShellCompletion* self, libqt_list /* of libqt_string */ matches);
    friend void KShellCompletion_TimerEvent(KShellCompletion* self, QTimerEvent* event);
    friend void KShellCompletion_QBaseTimerEvent(KShellCompletion* self, QTimerEvent* event);
    friend void KShellCompletion_ChildEvent(KShellCompletion* self, QChildEvent* event);
    friend void KShellCompletion_QBaseChildEvent(KShellCompletion* self, QChildEvent* event);
    friend void KShellCompletion_CustomEvent(KShellCompletion* self, QEvent* event);
    friend void KShellCompletion_QBaseCustomEvent(KShellCompletion* self, QEvent* event);
    friend void KShellCompletion_ConnectNotify(KShellCompletion* self, const QMetaMethod* signal);
    friend void KShellCompletion_QBaseConnectNotify(KShellCompletion* self, const QMetaMethod* signal);
    friend void KShellCompletion_DisconnectNotify(KShellCompletion* self, const QMetaMethod* signal);
    friend void KShellCompletion_QBaseDisconnectNotify(KShellCompletion* self, const QMetaMethod* signal);
    friend void KShellCompletion_SetShouldAutoSuggest(KShellCompletion* self, bool shouldAutosuggest);
    friend void KShellCompletion_QBaseSetShouldAutoSuggest(KShellCompletion* self, bool shouldAutosuggest);
    friend QObject* KShellCompletion_Sender(const KShellCompletion* self);
    friend QObject* KShellCompletion_QBaseSender(const KShellCompletion* self);
    friend int KShellCompletion_SenderSignalIndex(const KShellCompletion* self);
    friend int KShellCompletion_QBaseSenderSignalIndex(const KShellCompletion* self);
    friend int KShellCompletion_Receivers(const KShellCompletion* self, const char* signal);
    friend int KShellCompletion_QBaseReceivers(const KShellCompletion* self, const char* signal);
    friend bool KShellCompletion_IsSignalConnected(const KShellCompletion* self, const QMetaMethod* signal);
    friend bool KShellCompletion_QBaseIsSignalConnected(const KShellCompletion* self, const QMetaMethod* signal);
};

#endif
