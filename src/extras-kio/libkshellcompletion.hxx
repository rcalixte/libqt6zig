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
    using KShellCompletion_MetaObject_Callback = QMetaObject* (*)();
    using KShellCompletion_Metacast_Callback = void* (*)(KShellCompletion*, const char*);
    using KShellCompletion_Metacall_Callback = int (*)(KShellCompletion*, int, int, void**);
    using KShellCompletion_MakeCompletion_Callback = const char* (*)(KShellCompletion*, const char*);
    using KShellCompletion_PostProcessMatches_Callback = void (*)(const KShellCompletion*, const char**);
    using KShellCompletion_PostProcessMatches2_Callback = void (*)(const KShellCompletion*, KCompletionMatches*);
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
    using KShellCompletion_SetItems_Callback = void (*)(KShellCompletion*, const char**);
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
    KShellCompletion_MetaObject_Callback kshellcompletion_metaobject_callback = nullptr;
    KShellCompletion_Metacast_Callback kshellcompletion_metacast_callback = nullptr;
    KShellCompletion_Metacall_Callback kshellcompletion_metacall_callback = nullptr;
    KShellCompletion_MakeCompletion_Callback kshellcompletion_makecompletion_callback = nullptr;
    KShellCompletion_PostProcessMatches_Callback kshellcompletion_postprocessmatches_callback = nullptr;
    KShellCompletion_PostProcessMatches2_Callback kshellcompletion_postprocessmatches2_callback = nullptr;
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
    mutable bool kshellcompletion_metaobject_isbase = false;
    mutable bool kshellcompletion_metacast_isbase = false;
    mutable bool kshellcompletion_metacall_isbase = false;
    mutable bool kshellcompletion_makecompletion_isbase = false;
    mutable bool kshellcompletion_postprocessmatches_isbase = false;
    mutable bool kshellcompletion_postprocessmatches2_isbase = false;
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

    // Callback setters
    inline void setKShellCompletion_MetaObject_Callback(KShellCompletion_MetaObject_Callback cb) { kshellcompletion_metaobject_callback = cb; }
    inline void setKShellCompletion_Metacast_Callback(KShellCompletion_Metacast_Callback cb) { kshellcompletion_metacast_callback = cb; }
    inline void setKShellCompletion_Metacall_Callback(KShellCompletion_Metacall_Callback cb) { kshellcompletion_metacall_callback = cb; }
    inline void setKShellCompletion_MakeCompletion_Callback(KShellCompletion_MakeCompletion_Callback cb) { kshellcompletion_makecompletion_callback = cb; }
    inline void setKShellCompletion_PostProcessMatches_Callback(KShellCompletion_PostProcessMatches_Callback cb) { kshellcompletion_postprocessmatches_callback = cb; }
    inline void setKShellCompletion_PostProcessMatches2_Callback(KShellCompletion_PostProcessMatches2_Callback cb) { kshellcompletion_postprocessmatches2_callback = cb; }
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
    inline void setKShellCompletion_MetaObject_IsBase(bool value) const { kshellcompletion_metaobject_isbase = value; }
    inline void setKShellCompletion_Metacast_IsBase(bool value) const { kshellcompletion_metacast_isbase = value; }
    inline void setKShellCompletion_Metacall_IsBase(bool value) const { kshellcompletion_metacall_isbase = value; }
    inline void setKShellCompletion_MakeCompletion_IsBase(bool value) const { kshellcompletion_makecompletion_isbase = value; }
    inline void setKShellCompletion_PostProcessMatches_IsBase(bool value) const { kshellcompletion_postprocessmatches_isbase = value; }
    inline void setKShellCompletion_PostProcessMatches2_IsBase(bool value) const { kshellcompletion_postprocessmatches2_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (kshellcompletion_metaobject_isbase) {
            kshellcompletion_metaobject_isbase = false;
            return KShellCompletion::metaObject();
        }
        auto metaobject_cb = kshellcompletion_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KShellCompletion::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kshellcompletion_metacast_isbase) {
            kshellcompletion_metacast_isbase = false;
            return KShellCompletion::qt_metacast(param1);
        }
        auto metacast_cb = kshellcompletion_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KShellCompletion::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kshellcompletion_metacall_isbase) {
            kshellcompletion_metacall_isbase = false;
            return KShellCompletion::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kshellcompletion_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KShellCompletion::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString makeCompletion(const QString& text) override {
        if (kshellcompletion_makecompletion_isbase) {
            kshellcompletion_makecompletion_isbase = false;
            return KShellCompletion::makeCompletion(text);
        }
        auto makecompletion_cb = kshellcompletion_makecompletion_callback;
        if (makecompletion_cb) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;

            const char* callback_ret = makecompletion_cb(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(text_str);
            return callback_ret_QString;
        }
        return KShellCompletion::makeCompletion(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void postProcessMatches(QList<QString>* matches) const override {
        if (kshellcompletion_postprocessmatches_isbase) {
            kshellcompletion_postprocessmatches_isbase = false;
            KShellCompletion::postProcessMatches(matches);
            return;
        }
        auto postprocessmatches_cb = kshellcompletion_postprocessmatches_callback;
        if (postprocessmatches_cb) {
            QList<QString>* matches_ret = matches;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** matches_arr = static_cast<const char**>(malloc(sizeof(const char*) * (matches_ret->size() + 1)));
            for (qsizetype i = 0; i < matches_ret->size(); ++i) {
                QByteArray matches_b = (*matches_ret)[i].toUtf8();
                auto matches_str_len = matches_b.length();
                char* matches_str = static_cast<char*>(malloc(matches_str_len + 1));
                memcpy(matches_str, matches_b.data(), matches_str_len);
                matches_str[matches_str_len] = '\0';
                matches_arr[i] = matches_str;
            }
            // Append sentinel null terminator to the list
            matches_arr[matches_ret->size()] = nullptr;
            const char** cbval1 = matches_arr;

            postprocessmatches_cb(this, cbval1);
            libqt_free(matches_arr);
            return;
        }
        KShellCompletion::postProcessMatches(matches);
    }

    // Virtual method for C ABI access and custom callback
    virtual void postProcessMatches(KCompletionMatches* matches) const override {
        if (kshellcompletion_postprocessmatches2_isbase) {
            kshellcompletion_postprocessmatches2_isbase = false;
            KShellCompletion::postProcessMatches(matches);
            return;
        }
        auto postprocessmatches2_cb = kshellcompletion_postprocessmatches2_callback;
        if (postprocessmatches2_cb) {
            KCompletionMatches* cbval1 = matches;

            postprocessmatches2_cb(this, cbval1);
            return;
        }
        KShellCompletion::postProcessMatches(matches);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDir(const QUrl& dir) override {
        if (kshellcompletion_setdir_isbase) {
            kshellcompletion_setdir_isbase = false;
            KShellCompletion::setDir(dir);
            return;
        }
        auto setdir_cb = kshellcompletion_setdir_callback;
        if (setdir_cb) {
            const QUrl& dir_ret = dir;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&dir_ret);

            setdir_cb(this, cbval1);
            return;
        }
        KShellCompletion::setDir(dir);
    }

    // Virtual method for C ABI access and custom callback
    virtual QUrl dir() const override {
        if (kshellcompletion_dir_isbase) {
            kshellcompletion_dir_isbase = false;
            return KShellCompletion::dir();
        }
        auto dir_cb = kshellcompletion_dir_callback;
        if (dir_cb) {
            QUrl* callback_ret = dir_cb();
            return *callback_ret;
        }
        return KShellCompletion::dir();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isRunning() const override {
        if (kshellcompletion_isrunning_isbase) {
            kshellcompletion_isrunning_isbase = false;
            return KShellCompletion::isRunning();
        }
        auto isrunning_cb = kshellcompletion_isrunning_callback;
        if (isrunning_cb) {
            bool callback_ret = isrunning_cb();
            return callback_ret;
        }
        return KShellCompletion::isRunning();
    }

    // Virtual method for C ABI access and custom callback
    virtual void stop() override {
        if (kshellcompletion_stop_isbase) {
            kshellcompletion_stop_isbase = false;
            KShellCompletion::stop();
            return;
        }
        auto stop_cb = kshellcompletion_stop_callback;
        if (stop_cb) {
            stop_cb();
            return;
        }
        KShellCompletion::stop();
    }

    // Virtual method for C ABI access and custom callback
    virtual KUrlCompletion::Mode mode() const override {
        if (kshellcompletion_mode_isbase) {
            kshellcompletion_mode_isbase = false;
            return KShellCompletion::mode();
        }
        auto mode_cb = kshellcompletion_mode_callback;
        if (mode_cb) {
            int callback_ret = mode_cb();
            return static_cast<KUrlCompletion::Mode>(callback_ret);
        }
        return KShellCompletion::mode();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMode(KUrlCompletion::Mode mode) override {
        if (kshellcompletion_setmode_isbase) {
            kshellcompletion_setmode_isbase = false;
            KShellCompletion::setMode(mode);
            return;
        }
        auto setmode_cb = kshellcompletion_setmode_callback;
        if (setmode_cb) {
            int cbval1 = static_cast<int>(mode);

            setmode_cb(this, cbval1);
            return;
        }
        KShellCompletion::setMode(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool replaceEnv() const override {
        if (kshellcompletion_replaceenv_isbase) {
            kshellcompletion_replaceenv_isbase = false;
            return KShellCompletion::replaceEnv();
        }
        auto replaceenv_cb = kshellcompletion_replaceenv_callback;
        if (replaceenv_cb) {
            bool callback_ret = replaceenv_cb();
            return callback_ret;
        }
        return KShellCompletion::replaceEnv();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReplaceEnv(bool replace) override {
        if (kshellcompletion_setreplaceenv_isbase) {
            kshellcompletion_setreplaceenv_isbase = false;
            KShellCompletion::setReplaceEnv(replace);
            return;
        }
        auto setreplaceenv_cb = kshellcompletion_setreplaceenv_callback;
        if (setreplaceenv_cb) {
            bool cbval1 = replace;

            setreplaceenv_cb(this, cbval1);
            return;
        }
        KShellCompletion::setReplaceEnv(replace);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool replaceHome() const override {
        if (kshellcompletion_replacehome_isbase) {
            kshellcompletion_replacehome_isbase = false;
            return KShellCompletion::replaceHome();
        }
        auto replacehome_cb = kshellcompletion_replacehome_callback;
        if (replacehome_cb) {
            bool callback_ret = replacehome_cb();
            return callback_ret;
        }
        return KShellCompletion::replaceHome();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReplaceHome(bool replace) override {
        if (kshellcompletion_setreplacehome_isbase) {
            kshellcompletion_setreplacehome_isbase = false;
            KShellCompletion::setReplaceHome(replace);
            return;
        }
        auto setreplacehome_cb = kshellcompletion_setreplacehome_callback;
        if (setreplacehome_cb) {
            bool cbval1 = replace;

            setreplacehome_cb(this, cbval1);
            return;
        }
        KShellCompletion::setReplaceHome(replace);
    }

    // Virtual method for C ABI access and custom callback
    virtual const QString& lastMatch() const override {
        if (kshellcompletion_lastmatch_isbase) {
            kshellcompletion_lastmatch_isbase = false;
            return KShellCompletion::lastMatch();
        }
        auto lastmatch_cb = kshellcompletion_lastmatch_callback;
        if (lastmatch_cb) {
            const char* callback_ret = lastmatch_cb();
            QString* callback_ret_QString = new QString(QString::fromUtf8(callback_ret));
            return *callback_ret_QString;
        }
        return KShellCompletion::lastMatch();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionMode(KCompletion::CompletionMode mode) override {
        if (kshellcompletion_setcompletionmode_isbase) {
            kshellcompletion_setcompletionmode_isbase = false;
            KShellCompletion::setCompletionMode(mode);
            return;
        }
        auto setcompletionmode_cb = kshellcompletion_setcompletionmode_callback;
        if (setcompletionmode_cb) {
            int cbval1 = static_cast<int>(mode);

            setcompletionmode_cb(this, cbval1);
            return;
        }
        KShellCompletion::setCompletionMode(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOrder(KCompletion::CompOrder order) override {
        if (kshellcompletion_setorder_isbase) {
            kshellcompletion_setorder_isbase = false;
            KShellCompletion::setOrder(order);
            return;
        }
        auto setorder_cb = kshellcompletion_setorder_callback;
        if (setorder_cb) {
            int cbval1 = static_cast<int>(order);

            setorder_cb(this, cbval1);
            return;
        }
        KShellCompletion::setOrder(order);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIgnoreCase(bool ignoreCase) override {
        if (kshellcompletion_setignorecase_isbase) {
            kshellcompletion_setignorecase_isbase = false;
            KShellCompletion::setIgnoreCase(ignoreCase);
            return;
        }
        auto setignorecase_cb = kshellcompletion_setignorecase_callback;
        if (setignorecase_cb) {
            bool cbval1 = ignoreCase;

            setignorecase_cb(this, cbval1);
            return;
        }
        KShellCompletion::setIgnoreCase(ignoreCase);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSoundsEnabled(bool enable) override {
        if (kshellcompletion_setsoundsenabled_isbase) {
            kshellcompletion_setsoundsenabled_isbase = false;
            KShellCompletion::setSoundsEnabled(enable);
            return;
        }
        auto setsoundsenabled_cb = kshellcompletion_setsoundsenabled_callback;
        if (setsoundsenabled_cb) {
            bool cbval1 = enable;

            setsoundsenabled_cb(this, cbval1);
            return;
        }
        KShellCompletion::setSoundsEnabled(enable);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setItems(const QList<QString>& itemList) override {
        if (kshellcompletion_setitems_isbase) {
            kshellcompletion_setitems_isbase = false;
            KShellCompletion::setItems(itemList);
            return;
        }
        auto setitems_cb = kshellcompletion_setitems_callback;
        if (setitems_cb) {
            const QList<QString>& itemList_ret = itemList;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** itemList_arr = static_cast<const char**>(malloc(sizeof(const char*) * (itemList_ret.size() + 1)));
            for (qsizetype i = 0; i < itemList_ret.size(); ++i) {
                QByteArray itemList_b = itemList_ret[i].toUtf8();
                auto itemList_str_len = itemList_b.length();
                char* itemList_str = static_cast<char*>(malloc(itemList_str_len + 1));
                memcpy(itemList_str, itemList_b.data(), itemList_str_len);
                itemList_str[itemList_str_len] = '\0';
                itemList_arr[i] = itemList_str;
            }
            // Append sentinel null terminator to the list
            itemList_arr[itemList_ret.size()] = nullptr;
            const char** cbval1 = itemList_arr;

            setitems_cb(this, cbval1);
            libqt_free(itemList_arr);
            return;
        }
        KShellCompletion::setItems(itemList);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (kshellcompletion_clear_isbase) {
            kshellcompletion_clear_isbase = false;
            KShellCompletion::clear();
            return;
        }
        auto clear_cb = kshellcompletion_clear_callback;
        if (clear_cb) {
            clear_cb();
            return;
        }
        KShellCompletion::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kshellcompletion_event_isbase) {
            kshellcompletion_event_isbase = false;
            return KShellCompletion::event(event);
        }
        auto event_cb = kshellcompletion_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KShellCompletion::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kshellcompletion_eventfilter_isbase) {
            kshellcompletion_eventfilter_isbase = false;
            return KShellCompletion::eventFilter(watched, event);
        }
        auto eventfilter_cb = kshellcompletion_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KShellCompletion::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kshellcompletion_timerevent_isbase) {
            kshellcompletion_timerevent_isbase = false;
            KShellCompletion::timerEvent(event);
            return;
        }
        auto timerevent_cb = kshellcompletion_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KShellCompletion::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kshellcompletion_childevent_isbase) {
            kshellcompletion_childevent_isbase = false;
            KShellCompletion::childEvent(event);
            return;
        }
        auto childevent_cb = kshellcompletion_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KShellCompletion::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kshellcompletion_customevent_isbase) {
            kshellcompletion_customevent_isbase = false;
            KShellCompletion::customEvent(event);
            return;
        }
        auto customevent_cb = kshellcompletion_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KShellCompletion::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kshellcompletion_connectnotify_isbase) {
            kshellcompletion_connectnotify_isbase = false;
            KShellCompletion::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kshellcompletion_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KShellCompletion::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kshellcompletion_disconnectnotify_isbase) {
            kshellcompletion_disconnectnotify_isbase = false;
            KShellCompletion::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kshellcompletion_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KShellCompletion::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setShouldAutoSuggest(bool shouldAutosuggest) {
        if (kshellcompletion_setshouldautosuggest_isbase) {
            kshellcompletion_setshouldautosuggest_isbase = false;
            KShellCompletion::setShouldAutoSuggest(shouldAutosuggest);
            return;
        }
        auto setshouldautosuggest_cb = kshellcompletion_setshouldautosuggest_callback;
        if (setshouldautosuggest_cb) {
            bool cbval1 = shouldAutosuggest;

            setshouldautosuggest_cb(this, cbval1);
            return;
        }
        KShellCompletion::setShouldAutoSuggest(shouldAutosuggest);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kshellcompletion_sender_isbase) {
            kshellcompletion_sender_isbase = false;
            return KShellCompletion::sender();
        }
        auto sender_cb = kshellcompletion_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KShellCompletion::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kshellcompletion_sendersignalindex_isbase) {
            kshellcompletion_sendersignalindex_isbase = false;
            return KShellCompletion::senderSignalIndex();
        }
        auto sendersignalindex_cb = kshellcompletion_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KShellCompletion::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kshellcompletion_receivers_isbase) {
            kshellcompletion_receivers_isbase = false;
            return KShellCompletion::receivers(signal);
        }
        auto receivers_cb = kshellcompletion_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KShellCompletion::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kshellcompletion_issignalconnected_isbase) {
            kshellcompletion_issignalconnected_isbase = false;
            return KShellCompletion::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kshellcompletion_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KShellCompletion::isSignalConnected(signal);
    }

    // Friend functions
    friend void KShellCompletion_PostProcessMatches(const KShellCompletion* self, libqt_list /* of libqt_string */ matches);
    friend void KShellCompletion_SuperPostProcessMatches(const KShellCompletion* self, libqt_list /* of libqt_string */ matches);
    friend void KShellCompletion_PostProcessMatches2(const KShellCompletion* self, KCompletionMatches* matches);
    friend void KShellCompletion_SuperPostProcessMatches2(const KShellCompletion* self, KCompletionMatches* matches);
    friend void KShellCompletion_TimerEvent(KShellCompletion* self, QTimerEvent* event);
    friend void KShellCompletion_SuperTimerEvent(KShellCompletion* self, QTimerEvent* event);
    friend void KShellCompletion_ChildEvent(KShellCompletion* self, QChildEvent* event);
    friend void KShellCompletion_SuperChildEvent(KShellCompletion* self, QChildEvent* event);
    friend void KShellCompletion_CustomEvent(KShellCompletion* self, QEvent* event);
    friend void KShellCompletion_SuperCustomEvent(KShellCompletion* self, QEvent* event);
    friend void KShellCompletion_ConnectNotify(KShellCompletion* self, const QMetaMethod* signal);
    friend void KShellCompletion_SuperConnectNotify(KShellCompletion* self, const QMetaMethod* signal);
    friend void KShellCompletion_DisconnectNotify(KShellCompletion* self, const QMetaMethod* signal);
    friend void KShellCompletion_SuperDisconnectNotify(KShellCompletion* self, const QMetaMethod* signal);
    friend void KShellCompletion_SetShouldAutoSuggest(KShellCompletion* self, bool shouldAutosuggest);
    friend void KShellCompletion_SuperSetShouldAutoSuggest(KShellCompletion* self, bool shouldAutosuggest);
    friend QObject* KShellCompletion_Sender(const KShellCompletion* self);
    friend QObject* KShellCompletion_SuperSender(const KShellCompletion* self);
    friend int KShellCompletion_SenderSignalIndex(const KShellCompletion* self);
    friend int KShellCompletion_SuperSenderSignalIndex(const KShellCompletion* self);
    friend int KShellCompletion_Receivers(const KShellCompletion* self, const char* signal);
    friend int KShellCompletion_SuperReceivers(const KShellCompletion* self, const char* signal);
    friend bool KShellCompletion_IsSignalConnected(const KShellCompletion* self, const QMetaMethod* signal);
    friend bool KShellCompletion_SuperIsSignalConnected(const KShellCompletion* self, const QMetaMethod* signal);
};

#endif
