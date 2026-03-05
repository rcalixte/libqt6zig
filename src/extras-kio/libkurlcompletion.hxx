#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKURLCOMPLETION_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKURLCOMPLETION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KUrlCompletion so that we can call protected methods
class VirtualKUrlCompletion final : public KUrlCompletion {

  public:
    // Virtual class boolean flag
    bool isVirtualKUrlCompletion = true;

    // Virtual class public types (including callbacks)
    using KUrlCompletion_MetaObject_Callback = QMetaObject* (*)();
    using KUrlCompletion_Metacast_Callback = void* (*)(KUrlCompletion*, const char*);
    using KUrlCompletion_Metacall_Callback = int (*)(KUrlCompletion*, int, int, void**);
    using KUrlCompletion_MakeCompletion_Callback = const char* (*)(KUrlCompletion*, const char*);
    using KUrlCompletion_SetDir_Callback = void (*)(KUrlCompletion*, QUrl*);
    using KUrlCompletion_Dir_Callback = QUrl* (*)();
    using KUrlCompletion_IsRunning_Callback = bool (*)();
    using KUrlCompletion_Stop_Callback = void (*)();
    using KUrlCompletion_Mode_Callback = int (*)();
    using KUrlCompletion_SetMode_Callback = void (*)(KUrlCompletion*, int);
    using KUrlCompletion_ReplaceEnv_Callback = bool (*)();
    using KUrlCompletion_SetReplaceEnv_Callback = void (*)(KUrlCompletion*, bool);
    using KUrlCompletion_ReplaceHome_Callback = bool (*)();
    using KUrlCompletion_SetReplaceHome_Callback = void (*)(KUrlCompletion*, bool);
    using KUrlCompletion_PostProcessMatches_Callback = void (*)(const KUrlCompletion*, const char**);
    using KUrlCompletion_PostProcessMatches2_Callback = void (*)(const KUrlCompletion*, KCompletionMatches*);
    using KUrlCompletion_LastMatch_Callback = const char* (*)();
    using KUrlCompletion_SetCompletionMode_Callback = void (*)(KUrlCompletion*, int);
    using KUrlCompletion_SetOrder_Callback = void (*)(KUrlCompletion*, int);
    using KUrlCompletion_SetIgnoreCase_Callback = void (*)(KUrlCompletion*, bool);
    using KUrlCompletion_SetSoundsEnabled_Callback = void (*)(KUrlCompletion*, bool);
    using KUrlCompletion_SetItems_Callback = void (*)(KUrlCompletion*, const char**);
    using KUrlCompletion_Clear_Callback = void (*)();
    using KUrlCompletion_Event_Callback = bool (*)(KUrlCompletion*, QEvent*);
    using KUrlCompletion_EventFilter_Callback = bool (*)(KUrlCompletion*, QObject*, QEvent*);
    using KUrlCompletion_TimerEvent_Callback = void (*)(KUrlCompletion*, QTimerEvent*);
    using KUrlCompletion_ChildEvent_Callback = void (*)(KUrlCompletion*, QChildEvent*);
    using KUrlCompletion_CustomEvent_Callback = void (*)(KUrlCompletion*, QEvent*);
    using KUrlCompletion_ConnectNotify_Callback = void (*)(KUrlCompletion*, QMetaMethod*);
    using KUrlCompletion_DisconnectNotify_Callback = void (*)(KUrlCompletion*, QMetaMethod*);
    using KUrlCompletion_SetShouldAutoSuggest_Callback = void (*)(KUrlCompletion*, bool);
    using KUrlCompletion_Sender_Callback = QObject* (*)();
    using KUrlCompletion_SenderSignalIndex_Callback = int (*)();
    using KUrlCompletion_Receivers_Callback = int (*)(const KUrlCompletion*, const char*);
    using KUrlCompletion_IsSignalConnected_Callback = bool (*)(const KUrlCompletion*, QMetaMethod*);

  protected:
    // Instance callback storage
    KUrlCompletion_MetaObject_Callback kurlcompletion_metaobject_callback = nullptr;
    KUrlCompletion_Metacast_Callback kurlcompletion_metacast_callback = nullptr;
    KUrlCompletion_Metacall_Callback kurlcompletion_metacall_callback = nullptr;
    KUrlCompletion_MakeCompletion_Callback kurlcompletion_makecompletion_callback = nullptr;
    KUrlCompletion_SetDir_Callback kurlcompletion_setdir_callback = nullptr;
    KUrlCompletion_Dir_Callback kurlcompletion_dir_callback = nullptr;
    KUrlCompletion_IsRunning_Callback kurlcompletion_isrunning_callback = nullptr;
    KUrlCompletion_Stop_Callback kurlcompletion_stop_callback = nullptr;
    KUrlCompletion_Mode_Callback kurlcompletion_mode_callback = nullptr;
    KUrlCompletion_SetMode_Callback kurlcompletion_setmode_callback = nullptr;
    KUrlCompletion_ReplaceEnv_Callback kurlcompletion_replaceenv_callback = nullptr;
    KUrlCompletion_SetReplaceEnv_Callback kurlcompletion_setreplaceenv_callback = nullptr;
    KUrlCompletion_ReplaceHome_Callback kurlcompletion_replacehome_callback = nullptr;
    KUrlCompletion_SetReplaceHome_Callback kurlcompletion_setreplacehome_callback = nullptr;
    KUrlCompletion_PostProcessMatches_Callback kurlcompletion_postprocessmatches_callback = nullptr;
    KUrlCompletion_PostProcessMatches2_Callback kurlcompletion_postprocessmatches2_callback = nullptr;
    KUrlCompletion_LastMatch_Callback kurlcompletion_lastmatch_callback = nullptr;
    KUrlCompletion_SetCompletionMode_Callback kurlcompletion_setcompletionmode_callback = nullptr;
    KUrlCompletion_SetOrder_Callback kurlcompletion_setorder_callback = nullptr;
    KUrlCompletion_SetIgnoreCase_Callback kurlcompletion_setignorecase_callback = nullptr;
    KUrlCompletion_SetSoundsEnabled_Callback kurlcompletion_setsoundsenabled_callback = nullptr;
    KUrlCompletion_SetItems_Callback kurlcompletion_setitems_callback = nullptr;
    KUrlCompletion_Clear_Callback kurlcompletion_clear_callback = nullptr;
    KUrlCompletion_Event_Callback kurlcompletion_event_callback = nullptr;
    KUrlCompletion_EventFilter_Callback kurlcompletion_eventfilter_callback = nullptr;
    KUrlCompletion_TimerEvent_Callback kurlcompletion_timerevent_callback = nullptr;
    KUrlCompletion_ChildEvent_Callback kurlcompletion_childevent_callback = nullptr;
    KUrlCompletion_CustomEvent_Callback kurlcompletion_customevent_callback = nullptr;
    KUrlCompletion_ConnectNotify_Callback kurlcompletion_connectnotify_callback = nullptr;
    KUrlCompletion_DisconnectNotify_Callback kurlcompletion_disconnectnotify_callback = nullptr;
    KUrlCompletion_SetShouldAutoSuggest_Callback kurlcompletion_setshouldautosuggest_callback = nullptr;
    KUrlCompletion_Sender_Callback kurlcompletion_sender_callback = nullptr;
    KUrlCompletion_SenderSignalIndex_Callback kurlcompletion_sendersignalindex_callback = nullptr;
    KUrlCompletion_Receivers_Callback kurlcompletion_receivers_callback = nullptr;
    KUrlCompletion_IsSignalConnected_Callback kurlcompletion_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kurlcompletion_metaobject_isbase = false;
    mutable bool kurlcompletion_metacast_isbase = false;
    mutable bool kurlcompletion_metacall_isbase = false;
    mutable bool kurlcompletion_makecompletion_isbase = false;
    mutable bool kurlcompletion_setdir_isbase = false;
    mutable bool kurlcompletion_dir_isbase = false;
    mutable bool kurlcompletion_isrunning_isbase = false;
    mutable bool kurlcompletion_stop_isbase = false;
    mutable bool kurlcompletion_mode_isbase = false;
    mutable bool kurlcompletion_setmode_isbase = false;
    mutable bool kurlcompletion_replaceenv_isbase = false;
    mutable bool kurlcompletion_setreplaceenv_isbase = false;
    mutable bool kurlcompletion_replacehome_isbase = false;
    mutable bool kurlcompletion_setreplacehome_isbase = false;
    mutable bool kurlcompletion_postprocessmatches_isbase = false;
    mutable bool kurlcompletion_postprocessmatches2_isbase = false;
    mutable bool kurlcompletion_lastmatch_isbase = false;
    mutable bool kurlcompletion_setcompletionmode_isbase = false;
    mutable bool kurlcompletion_setorder_isbase = false;
    mutable bool kurlcompletion_setignorecase_isbase = false;
    mutable bool kurlcompletion_setsoundsenabled_isbase = false;
    mutable bool kurlcompletion_setitems_isbase = false;
    mutable bool kurlcompletion_clear_isbase = false;
    mutable bool kurlcompletion_event_isbase = false;
    mutable bool kurlcompletion_eventfilter_isbase = false;
    mutable bool kurlcompletion_timerevent_isbase = false;
    mutable bool kurlcompletion_childevent_isbase = false;
    mutable bool kurlcompletion_customevent_isbase = false;
    mutable bool kurlcompletion_connectnotify_isbase = false;
    mutable bool kurlcompletion_disconnectnotify_isbase = false;
    mutable bool kurlcompletion_setshouldautosuggest_isbase = false;
    mutable bool kurlcompletion_sender_isbase = false;
    mutable bool kurlcompletion_sendersignalindex_isbase = false;
    mutable bool kurlcompletion_receivers_isbase = false;
    mutable bool kurlcompletion_issignalconnected_isbase = false;

  public:
    VirtualKUrlCompletion() : KUrlCompletion() {};
    VirtualKUrlCompletion(KUrlCompletion::Mode param1) : KUrlCompletion(param1) {};

    // Callback setters
    inline void setKUrlCompletion_MetaObject_Callback(KUrlCompletion_MetaObject_Callback cb) { kurlcompletion_metaobject_callback = cb; }
    inline void setKUrlCompletion_Metacast_Callback(KUrlCompletion_Metacast_Callback cb) { kurlcompletion_metacast_callback = cb; }
    inline void setKUrlCompletion_Metacall_Callback(KUrlCompletion_Metacall_Callback cb) { kurlcompletion_metacall_callback = cb; }
    inline void setKUrlCompletion_MakeCompletion_Callback(KUrlCompletion_MakeCompletion_Callback cb) { kurlcompletion_makecompletion_callback = cb; }
    inline void setKUrlCompletion_SetDir_Callback(KUrlCompletion_SetDir_Callback cb) { kurlcompletion_setdir_callback = cb; }
    inline void setKUrlCompletion_Dir_Callback(KUrlCompletion_Dir_Callback cb) { kurlcompletion_dir_callback = cb; }
    inline void setKUrlCompletion_IsRunning_Callback(KUrlCompletion_IsRunning_Callback cb) { kurlcompletion_isrunning_callback = cb; }
    inline void setKUrlCompletion_Stop_Callback(KUrlCompletion_Stop_Callback cb) { kurlcompletion_stop_callback = cb; }
    inline void setKUrlCompletion_Mode_Callback(KUrlCompletion_Mode_Callback cb) { kurlcompletion_mode_callback = cb; }
    inline void setKUrlCompletion_SetMode_Callback(KUrlCompletion_SetMode_Callback cb) { kurlcompletion_setmode_callback = cb; }
    inline void setKUrlCompletion_ReplaceEnv_Callback(KUrlCompletion_ReplaceEnv_Callback cb) { kurlcompletion_replaceenv_callback = cb; }
    inline void setKUrlCompletion_SetReplaceEnv_Callback(KUrlCompletion_SetReplaceEnv_Callback cb) { kurlcompletion_setreplaceenv_callback = cb; }
    inline void setKUrlCompletion_ReplaceHome_Callback(KUrlCompletion_ReplaceHome_Callback cb) { kurlcompletion_replacehome_callback = cb; }
    inline void setKUrlCompletion_SetReplaceHome_Callback(KUrlCompletion_SetReplaceHome_Callback cb) { kurlcompletion_setreplacehome_callback = cb; }
    inline void setKUrlCompletion_PostProcessMatches_Callback(KUrlCompletion_PostProcessMatches_Callback cb) { kurlcompletion_postprocessmatches_callback = cb; }
    inline void setKUrlCompletion_PostProcessMatches2_Callback(KUrlCompletion_PostProcessMatches2_Callback cb) { kurlcompletion_postprocessmatches2_callback = cb; }
    inline void setKUrlCompletion_LastMatch_Callback(KUrlCompletion_LastMatch_Callback cb) { kurlcompletion_lastmatch_callback = cb; }
    inline void setKUrlCompletion_SetCompletionMode_Callback(KUrlCompletion_SetCompletionMode_Callback cb) { kurlcompletion_setcompletionmode_callback = cb; }
    inline void setKUrlCompletion_SetOrder_Callback(KUrlCompletion_SetOrder_Callback cb) { kurlcompletion_setorder_callback = cb; }
    inline void setKUrlCompletion_SetIgnoreCase_Callback(KUrlCompletion_SetIgnoreCase_Callback cb) { kurlcompletion_setignorecase_callback = cb; }
    inline void setKUrlCompletion_SetSoundsEnabled_Callback(KUrlCompletion_SetSoundsEnabled_Callback cb) { kurlcompletion_setsoundsenabled_callback = cb; }
    inline void setKUrlCompletion_SetItems_Callback(KUrlCompletion_SetItems_Callback cb) { kurlcompletion_setitems_callback = cb; }
    inline void setKUrlCompletion_Clear_Callback(KUrlCompletion_Clear_Callback cb) { kurlcompletion_clear_callback = cb; }
    inline void setKUrlCompletion_Event_Callback(KUrlCompletion_Event_Callback cb) { kurlcompletion_event_callback = cb; }
    inline void setKUrlCompletion_EventFilter_Callback(KUrlCompletion_EventFilter_Callback cb) { kurlcompletion_eventfilter_callback = cb; }
    inline void setKUrlCompletion_TimerEvent_Callback(KUrlCompletion_TimerEvent_Callback cb) { kurlcompletion_timerevent_callback = cb; }
    inline void setKUrlCompletion_ChildEvent_Callback(KUrlCompletion_ChildEvent_Callback cb) { kurlcompletion_childevent_callback = cb; }
    inline void setKUrlCompletion_CustomEvent_Callback(KUrlCompletion_CustomEvent_Callback cb) { kurlcompletion_customevent_callback = cb; }
    inline void setKUrlCompletion_ConnectNotify_Callback(KUrlCompletion_ConnectNotify_Callback cb) { kurlcompletion_connectnotify_callback = cb; }
    inline void setKUrlCompletion_DisconnectNotify_Callback(KUrlCompletion_DisconnectNotify_Callback cb) { kurlcompletion_disconnectnotify_callback = cb; }
    inline void setKUrlCompletion_SetShouldAutoSuggest_Callback(KUrlCompletion_SetShouldAutoSuggest_Callback cb) { kurlcompletion_setshouldautosuggest_callback = cb; }
    inline void setKUrlCompletion_Sender_Callback(KUrlCompletion_Sender_Callback cb) { kurlcompletion_sender_callback = cb; }
    inline void setKUrlCompletion_SenderSignalIndex_Callback(KUrlCompletion_SenderSignalIndex_Callback cb) { kurlcompletion_sendersignalindex_callback = cb; }
    inline void setKUrlCompletion_Receivers_Callback(KUrlCompletion_Receivers_Callback cb) { kurlcompletion_receivers_callback = cb; }
    inline void setKUrlCompletion_IsSignalConnected_Callback(KUrlCompletion_IsSignalConnected_Callback cb) { kurlcompletion_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKUrlCompletion_MetaObject_IsBase(bool value) const { kurlcompletion_metaobject_isbase = value; }
    inline void setKUrlCompletion_Metacast_IsBase(bool value) const { kurlcompletion_metacast_isbase = value; }
    inline void setKUrlCompletion_Metacall_IsBase(bool value) const { kurlcompletion_metacall_isbase = value; }
    inline void setKUrlCompletion_MakeCompletion_IsBase(bool value) const { kurlcompletion_makecompletion_isbase = value; }
    inline void setKUrlCompletion_SetDir_IsBase(bool value) const { kurlcompletion_setdir_isbase = value; }
    inline void setKUrlCompletion_Dir_IsBase(bool value) const { kurlcompletion_dir_isbase = value; }
    inline void setKUrlCompletion_IsRunning_IsBase(bool value) const { kurlcompletion_isrunning_isbase = value; }
    inline void setKUrlCompletion_Stop_IsBase(bool value) const { kurlcompletion_stop_isbase = value; }
    inline void setKUrlCompletion_Mode_IsBase(bool value) const { kurlcompletion_mode_isbase = value; }
    inline void setKUrlCompletion_SetMode_IsBase(bool value) const { kurlcompletion_setmode_isbase = value; }
    inline void setKUrlCompletion_ReplaceEnv_IsBase(bool value) const { kurlcompletion_replaceenv_isbase = value; }
    inline void setKUrlCompletion_SetReplaceEnv_IsBase(bool value) const { kurlcompletion_setreplaceenv_isbase = value; }
    inline void setKUrlCompletion_ReplaceHome_IsBase(bool value) const { kurlcompletion_replacehome_isbase = value; }
    inline void setKUrlCompletion_SetReplaceHome_IsBase(bool value) const { kurlcompletion_setreplacehome_isbase = value; }
    inline void setKUrlCompletion_PostProcessMatches_IsBase(bool value) const { kurlcompletion_postprocessmatches_isbase = value; }
    inline void setKUrlCompletion_PostProcessMatches2_IsBase(bool value) const { kurlcompletion_postprocessmatches2_isbase = value; }
    inline void setKUrlCompletion_LastMatch_IsBase(bool value) const { kurlcompletion_lastmatch_isbase = value; }
    inline void setKUrlCompletion_SetCompletionMode_IsBase(bool value) const { kurlcompletion_setcompletionmode_isbase = value; }
    inline void setKUrlCompletion_SetOrder_IsBase(bool value) const { kurlcompletion_setorder_isbase = value; }
    inline void setKUrlCompletion_SetIgnoreCase_IsBase(bool value) const { kurlcompletion_setignorecase_isbase = value; }
    inline void setKUrlCompletion_SetSoundsEnabled_IsBase(bool value) const { kurlcompletion_setsoundsenabled_isbase = value; }
    inline void setKUrlCompletion_SetItems_IsBase(bool value) const { kurlcompletion_setitems_isbase = value; }
    inline void setKUrlCompletion_Clear_IsBase(bool value) const { kurlcompletion_clear_isbase = value; }
    inline void setKUrlCompletion_Event_IsBase(bool value) const { kurlcompletion_event_isbase = value; }
    inline void setKUrlCompletion_EventFilter_IsBase(bool value) const { kurlcompletion_eventfilter_isbase = value; }
    inline void setKUrlCompletion_TimerEvent_IsBase(bool value) const { kurlcompletion_timerevent_isbase = value; }
    inline void setKUrlCompletion_ChildEvent_IsBase(bool value) const { kurlcompletion_childevent_isbase = value; }
    inline void setKUrlCompletion_CustomEvent_IsBase(bool value) const { kurlcompletion_customevent_isbase = value; }
    inline void setKUrlCompletion_ConnectNotify_IsBase(bool value) const { kurlcompletion_connectnotify_isbase = value; }
    inline void setKUrlCompletion_DisconnectNotify_IsBase(bool value) const { kurlcompletion_disconnectnotify_isbase = value; }
    inline void setKUrlCompletion_SetShouldAutoSuggest_IsBase(bool value) const { kurlcompletion_setshouldautosuggest_isbase = value; }
    inline void setKUrlCompletion_Sender_IsBase(bool value) const { kurlcompletion_sender_isbase = value; }
    inline void setKUrlCompletion_SenderSignalIndex_IsBase(bool value) const { kurlcompletion_sendersignalindex_isbase = value; }
    inline void setKUrlCompletion_Receivers_IsBase(bool value) const { kurlcompletion_receivers_isbase = value; }
    inline void setKUrlCompletion_IsSignalConnected_IsBase(bool value) const { kurlcompletion_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kurlcompletion_metaobject_isbase) {
            kurlcompletion_metaobject_isbase = false;
            return KUrlCompletion::metaObject();
        }
        auto metaobject_cb = kurlcompletion_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KUrlCompletion::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kurlcompletion_metacast_isbase) {
            kurlcompletion_metacast_isbase = false;
            return KUrlCompletion::qt_metacast(param1);
        }
        auto metacast_cb = kurlcompletion_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KUrlCompletion::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kurlcompletion_metacall_isbase) {
            kurlcompletion_metacall_isbase = false;
            return KUrlCompletion::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kurlcompletion_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KUrlCompletion::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString makeCompletion(const QString& text) override {
        if (kurlcompletion_makecompletion_isbase) {
            kurlcompletion_makecompletion_isbase = false;
            return KUrlCompletion::makeCompletion(text);
        }
        auto makecompletion_cb = kurlcompletion_makecompletion_callback;
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
        return KUrlCompletion::makeCompletion(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDir(const QUrl& dir) override {
        if (kurlcompletion_setdir_isbase) {
            kurlcompletion_setdir_isbase = false;
            KUrlCompletion::setDir(dir);
            return;
        }
        auto setdir_cb = kurlcompletion_setdir_callback;
        if (setdir_cb) {
            const QUrl& dir_ret = dir;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&dir_ret);

            setdir_cb(this, cbval1);
            return;
        }
        KUrlCompletion::setDir(dir);
    }

    // Virtual method for C ABI access and custom callback
    virtual QUrl dir() const override {
        if (kurlcompletion_dir_isbase) {
            kurlcompletion_dir_isbase = false;
            return KUrlCompletion::dir();
        }
        auto dir_cb = kurlcompletion_dir_callback;
        if (dir_cb) {
            QUrl* callback_ret = dir_cb();
            return *callback_ret;
        }
        return KUrlCompletion::dir();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isRunning() const override {
        if (kurlcompletion_isrunning_isbase) {
            kurlcompletion_isrunning_isbase = false;
            return KUrlCompletion::isRunning();
        }
        auto isrunning_cb = kurlcompletion_isrunning_callback;
        if (isrunning_cb) {
            bool callback_ret = isrunning_cb();
            return callback_ret;
        }
        return KUrlCompletion::isRunning();
    }

    // Virtual method for C ABI access and custom callback
    virtual void stop() override {
        if (kurlcompletion_stop_isbase) {
            kurlcompletion_stop_isbase = false;
            KUrlCompletion::stop();
            return;
        }
        auto stop_cb = kurlcompletion_stop_callback;
        if (stop_cb) {
            stop_cb();
            return;
        }
        KUrlCompletion::stop();
    }

    // Virtual method for C ABI access and custom callback
    virtual KUrlCompletion::Mode mode() const override {
        if (kurlcompletion_mode_isbase) {
            kurlcompletion_mode_isbase = false;
            return KUrlCompletion::mode();
        }
        auto mode_cb = kurlcompletion_mode_callback;
        if (mode_cb) {
            int callback_ret = mode_cb();
            return static_cast<KUrlCompletion::Mode>(callback_ret);
        }
        return KUrlCompletion::mode();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMode(KUrlCompletion::Mode mode) override {
        if (kurlcompletion_setmode_isbase) {
            kurlcompletion_setmode_isbase = false;
            KUrlCompletion::setMode(mode);
            return;
        }
        auto setmode_cb = kurlcompletion_setmode_callback;
        if (setmode_cb) {
            int cbval1 = static_cast<int>(mode);

            setmode_cb(this, cbval1);
            return;
        }
        KUrlCompletion::setMode(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool replaceEnv() const override {
        if (kurlcompletion_replaceenv_isbase) {
            kurlcompletion_replaceenv_isbase = false;
            return KUrlCompletion::replaceEnv();
        }
        auto replaceenv_cb = kurlcompletion_replaceenv_callback;
        if (replaceenv_cb) {
            bool callback_ret = replaceenv_cb();
            return callback_ret;
        }
        return KUrlCompletion::replaceEnv();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReplaceEnv(bool replace) override {
        if (kurlcompletion_setreplaceenv_isbase) {
            kurlcompletion_setreplaceenv_isbase = false;
            KUrlCompletion::setReplaceEnv(replace);
            return;
        }
        auto setreplaceenv_cb = kurlcompletion_setreplaceenv_callback;
        if (setreplaceenv_cb) {
            bool cbval1 = replace;

            setreplaceenv_cb(this, cbval1);
            return;
        }
        KUrlCompletion::setReplaceEnv(replace);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool replaceHome() const override {
        if (kurlcompletion_replacehome_isbase) {
            kurlcompletion_replacehome_isbase = false;
            return KUrlCompletion::replaceHome();
        }
        auto replacehome_cb = kurlcompletion_replacehome_callback;
        if (replacehome_cb) {
            bool callback_ret = replacehome_cb();
            return callback_ret;
        }
        return KUrlCompletion::replaceHome();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReplaceHome(bool replace) override {
        if (kurlcompletion_setreplacehome_isbase) {
            kurlcompletion_setreplacehome_isbase = false;
            KUrlCompletion::setReplaceHome(replace);
            return;
        }
        auto setreplacehome_cb = kurlcompletion_setreplacehome_callback;
        if (setreplacehome_cb) {
            bool cbval1 = replace;

            setreplacehome_cb(this, cbval1);
            return;
        }
        KUrlCompletion::setReplaceHome(replace);
    }

    // Virtual method for C ABI access and custom callback
    virtual void postProcessMatches(QList<QString>* matches) const override {
        if (kurlcompletion_postprocessmatches_isbase) {
            kurlcompletion_postprocessmatches_isbase = false;
            KUrlCompletion::postProcessMatches(matches);
            return;
        }
        auto postprocessmatches_cb = kurlcompletion_postprocessmatches_callback;
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
        KUrlCompletion::postProcessMatches(matches);
    }

    // Virtual method for C ABI access and custom callback
    virtual void postProcessMatches(KCompletionMatches* matches) const override {
        if (kurlcompletion_postprocessmatches2_isbase) {
            kurlcompletion_postprocessmatches2_isbase = false;
            KUrlCompletion::postProcessMatches(matches);
            return;
        }
        auto postprocessmatches2_cb = kurlcompletion_postprocessmatches2_callback;
        if (postprocessmatches2_cb) {
            KCompletionMatches* cbval1 = matches;

            postprocessmatches2_cb(this, cbval1);
            return;
        }
        KUrlCompletion::postProcessMatches(matches);
    }

    // Virtual method for C ABI access and custom callback
    virtual const QString& lastMatch() const override {
        if (kurlcompletion_lastmatch_isbase) {
            kurlcompletion_lastmatch_isbase = false;
            return KUrlCompletion::lastMatch();
        }
        auto lastmatch_cb = kurlcompletion_lastmatch_callback;
        if (lastmatch_cb) {
            const char* callback_ret = lastmatch_cb();
            QString* callback_ret_QString = new QString(QString::fromUtf8(callback_ret));
            return *callback_ret_QString;
        }
        return KUrlCompletion::lastMatch();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionMode(KCompletion::CompletionMode mode) override {
        if (kurlcompletion_setcompletionmode_isbase) {
            kurlcompletion_setcompletionmode_isbase = false;
            KUrlCompletion::setCompletionMode(mode);
            return;
        }
        auto setcompletionmode_cb = kurlcompletion_setcompletionmode_callback;
        if (setcompletionmode_cb) {
            int cbval1 = static_cast<int>(mode);

            setcompletionmode_cb(this, cbval1);
            return;
        }
        KUrlCompletion::setCompletionMode(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOrder(KCompletion::CompOrder order) override {
        if (kurlcompletion_setorder_isbase) {
            kurlcompletion_setorder_isbase = false;
            KUrlCompletion::setOrder(order);
            return;
        }
        auto setorder_cb = kurlcompletion_setorder_callback;
        if (setorder_cb) {
            int cbval1 = static_cast<int>(order);

            setorder_cb(this, cbval1);
            return;
        }
        KUrlCompletion::setOrder(order);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIgnoreCase(bool ignoreCase) override {
        if (kurlcompletion_setignorecase_isbase) {
            kurlcompletion_setignorecase_isbase = false;
            KUrlCompletion::setIgnoreCase(ignoreCase);
            return;
        }
        auto setignorecase_cb = kurlcompletion_setignorecase_callback;
        if (setignorecase_cb) {
            bool cbval1 = ignoreCase;

            setignorecase_cb(this, cbval1);
            return;
        }
        KUrlCompletion::setIgnoreCase(ignoreCase);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSoundsEnabled(bool enable) override {
        if (kurlcompletion_setsoundsenabled_isbase) {
            kurlcompletion_setsoundsenabled_isbase = false;
            KUrlCompletion::setSoundsEnabled(enable);
            return;
        }
        auto setsoundsenabled_cb = kurlcompletion_setsoundsenabled_callback;
        if (setsoundsenabled_cb) {
            bool cbval1 = enable;

            setsoundsenabled_cb(this, cbval1);
            return;
        }
        KUrlCompletion::setSoundsEnabled(enable);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setItems(const QList<QString>& itemList) override {
        if (kurlcompletion_setitems_isbase) {
            kurlcompletion_setitems_isbase = false;
            KUrlCompletion::setItems(itemList);
            return;
        }
        auto setitems_cb = kurlcompletion_setitems_callback;
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
        KUrlCompletion::setItems(itemList);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (kurlcompletion_clear_isbase) {
            kurlcompletion_clear_isbase = false;
            KUrlCompletion::clear();
            return;
        }
        auto clear_cb = kurlcompletion_clear_callback;
        if (clear_cb) {
            clear_cb();
            return;
        }
        KUrlCompletion::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kurlcompletion_event_isbase) {
            kurlcompletion_event_isbase = false;
            return KUrlCompletion::event(event);
        }
        auto event_cb = kurlcompletion_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KUrlCompletion::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kurlcompletion_eventfilter_isbase) {
            kurlcompletion_eventfilter_isbase = false;
            return KUrlCompletion::eventFilter(watched, event);
        }
        auto eventfilter_cb = kurlcompletion_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KUrlCompletion::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kurlcompletion_timerevent_isbase) {
            kurlcompletion_timerevent_isbase = false;
            KUrlCompletion::timerEvent(event);
            return;
        }
        auto timerevent_cb = kurlcompletion_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KUrlCompletion::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kurlcompletion_childevent_isbase) {
            kurlcompletion_childevent_isbase = false;
            KUrlCompletion::childEvent(event);
            return;
        }
        auto childevent_cb = kurlcompletion_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KUrlCompletion::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kurlcompletion_customevent_isbase) {
            kurlcompletion_customevent_isbase = false;
            KUrlCompletion::customEvent(event);
            return;
        }
        auto customevent_cb = kurlcompletion_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KUrlCompletion::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kurlcompletion_connectnotify_isbase) {
            kurlcompletion_connectnotify_isbase = false;
            KUrlCompletion::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kurlcompletion_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KUrlCompletion::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kurlcompletion_disconnectnotify_isbase) {
            kurlcompletion_disconnectnotify_isbase = false;
            KUrlCompletion::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kurlcompletion_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KUrlCompletion::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setShouldAutoSuggest(bool shouldAutosuggest) {
        if (kurlcompletion_setshouldautosuggest_isbase) {
            kurlcompletion_setshouldautosuggest_isbase = false;
            KUrlCompletion::setShouldAutoSuggest(shouldAutosuggest);
            return;
        }
        auto setshouldautosuggest_cb = kurlcompletion_setshouldautosuggest_callback;
        if (setshouldautosuggest_cb) {
            bool cbval1 = shouldAutosuggest;

            setshouldautosuggest_cb(this, cbval1);
            return;
        }
        KUrlCompletion::setShouldAutoSuggest(shouldAutosuggest);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kurlcompletion_sender_isbase) {
            kurlcompletion_sender_isbase = false;
            return KUrlCompletion::sender();
        }
        auto sender_cb = kurlcompletion_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KUrlCompletion::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kurlcompletion_sendersignalindex_isbase) {
            kurlcompletion_sendersignalindex_isbase = false;
            return KUrlCompletion::senderSignalIndex();
        }
        auto sendersignalindex_cb = kurlcompletion_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KUrlCompletion::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kurlcompletion_receivers_isbase) {
            kurlcompletion_receivers_isbase = false;
            return KUrlCompletion::receivers(signal);
        }
        auto receivers_cb = kurlcompletion_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KUrlCompletion::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kurlcompletion_issignalconnected_isbase) {
            kurlcompletion_issignalconnected_isbase = false;
            return KUrlCompletion::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kurlcompletion_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KUrlCompletion::isSignalConnected(signal);
    }

    // Friend functions
    friend void KUrlCompletion_PostProcessMatches(const KUrlCompletion* self, libqt_list /* of libqt_string */ matches);
    friend void KUrlCompletion_SuperPostProcessMatches(const KUrlCompletion* self, libqt_list /* of libqt_string */ matches);
    friend void KUrlCompletion_PostProcessMatches2(const KUrlCompletion* self, KCompletionMatches* matches);
    friend void KUrlCompletion_SuperPostProcessMatches2(const KUrlCompletion* self, KCompletionMatches* matches);
    friend void KUrlCompletion_TimerEvent(KUrlCompletion* self, QTimerEvent* event);
    friend void KUrlCompletion_SuperTimerEvent(KUrlCompletion* self, QTimerEvent* event);
    friend void KUrlCompletion_ChildEvent(KUrlCompletion* self, QChildEvent* event);
    friend void KUrlCompletion_SuperChildEvent(KUrlCompletion* self, QChildEvent* event);
    friend void KUrlCompletion_CustomEvent(KUrlCompletion* self, QEvent* event);
    friend void KUrlCompletion_SuperCustomEvent(KUrlCompletion* self, QEvent* event);
    friend void KUrlCompletion_ConnectNotify(KUrlCompletion* self, const QMetaMethod* signal);
    friend void KUrlCompletion_SuperConnectNotify(KUrlCompletion* self, const QMetaMethod* signal);
    friend void KUrlCompletion_DisconnectNotify(KUrlCompletion* self, const QMetaMethod* signal);
    friend void KUrlCompletion_SuperDisconnectNotify(KUrlCompletion* self, const QMetaMethod* signal);
    friend void KUrlCompletion_SetShouldAutoSuggest(KUrlCompletion* self, bool shouldAutosuggest);
    friend void KUrlCompletion_SuperSetShouldAutoSuggest(KUrlCompletion* self, bool shouldAutosuggest);
    friend QObject* KUrlCompletion_Sender(const KUrlCompletion* self);
    friend QObject* KUrlCompletion_SuperSender(const KUrlCompletion* self);
    friend int KUrlCompletion_SenderSignalIndex(const KUrlCompletion* self);
    friend int KUrlCompletion_SuperSenderSignalIndex(const KUrlCompletion* self);
    friend int KUrlCompletion_Receivers(const KUrlCompletion* self, const char* signal);
    friend int KUrlCompletion_SuperReceivers(const KUrlCompletion* self, const char* signal);
    friend bool KUrlCompletion_IsSignalConnected(const KUrlCompletion* self, const QMetaMethod* signal);
    friend bool KUrlCompletion_SuperIsSignalConnected(const KUrlCompletion* self, const QMetaMethod* signal);
};

#endif
