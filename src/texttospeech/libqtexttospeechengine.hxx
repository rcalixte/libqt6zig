#pragma once
#ifndef SRC_TEXTTOSPEECHC_LIBVIRTUALQTEXTTOSPEECHENGINE_H
#define SRC_TEXTTOSPEECHC_LIBVIRTUALQTEXTTOSPEECHENGINE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QTextToSpeechEngine so that we can call protected methods
class VirtualQTextToSpeechEngine : public QTextToSpeechEngine {

  public:
    // Virtual class boolean flag
    bool isVirtualQTextToSpeechEngine = true;

    // Virtual class public types (including callbacks)
    using QTextToSpeechEngine_MetaObject_Callback = QMetaObject* (*)();
    using QTextToSpeechEngine_Metacast_Callback = void* (*)(QTextToSpeechEngine*, const char*);
    using QTextToSpeechEngine_Metacall_Callback = int (*)(QTextToSpeechEngine*, int, int, void**);
    using QTextToSpeechEngine_Capabilities_Callback = int (*)();
    using QTextToSpeechEngine_AvailableLocales_Callback = libqt_list /* of QLocale* */ (*)();
    using QTextToSpeechEngine_AvailableVoices_Callback = libqt_list /* of QVoice* */ (*)();
    using QTextToSpeechEngine_Say_Callback = void (*)(QTextToSpeechEngine*, const char*);
    using QTextToSpeechEngine_Synthesize_Callback = void (*)(QTextToSpeechEngine*, const char*);
    using QTextToSpeechEngine_Stop_Callback = void (*)(QTextToSpeechEngine*, int);
    using QTextToSpeechEngine_Pause_Callback = void (*)(QTextToSpeechEngine*, int);
    using QTextToSpeechEngine_Resume_Callback = void (*)();
    using QTextToSpeechEngine_Rate_Callback = double (*)();
    using QTextToSpeechEngine_SetRate_Callback = bool (*)(QTextToSpeechEngine*, double);
    using QTextToSpeechEngine_Pitch_Callback = double (*)();
    using QTextToSpeechEngine_SetPitch_Callback = bool (*)(QTextToSpeechEngine*, double);
    using QTextToSpeechEngine_Locale_Callback = QLocale* (*)();
    using QTextToSpeechEngine_SetLocale_Callback = bool (*)(QTextToSpeechEngine*, QLocale*);
    using QTextToSpeechEngine_Volume_Callback = double (*)();
    using QTextToSpeechEngine_SetVolume_Callback = bool (*)(QTextToSpeechEngine*, double);
    using QTextToSpeechEngine_Voice_Callback = QVoice* (*)();
    using QTextToSpeechEngine_SetVoice_Callback = bool (*)(QTextToSpeechEngine*, QVoice*);
    using QTextToSpeechEngine_State_Callback = int (*)();
    using QTextToSpeechEngine_ErrorReason_Callback = int (*)();
    using QTextToSpeechEngine_ErrorString_Callback = const char* (*)();
    using QTextToSpeechEngine_Event_Callback = bool (*)(QTextToSpeechEngine*, QEvent*);
    using QTextToSpeechEngine_EventFilter_Callback = bool (*)(QTextToSpeechEngine*, QObject*, QEvent*);
    using QTextToSpeechEngine_TimerEvent_Callback = void (*)(QTextToSpeechEngine*, QTimerEvent*);
    using QTextToSpeechEngine_ChildEvent_Callback = void (*)(QTextToSpeechEngine*, QChildEvent*);
    using QTextToSpeechEngine_CustomEvent_Callback = void (*)(QTextToSpeechEngine*, QEvent*);
    using QTextToSpeechEngine_ConnectNotify_Callback = void (*)(QTextToSpeechEngine*, QMetaMethod*);
    using QTextToSpeechEngine_DisconnectNotify_Callback = void (*)(QTextToSpeechEngine*, QMetaMethod*);
    using QTextToSpeechEngine_CreateVoice_Callback = QVoice* (*)(QTextToSpeechEngine*, const char*, QLocale*, int, int, QVariant*);
    using QTextToSpeechEngine_VoiceData_Callback = QVariant* (*)(QTextToSpeechEngine*, QVoice*);
    using QTextToSpeechEngine_Sender_Callback = QObject* (*)();
    using QTextToSpeechEngine_SenderSignalIndex_Callback = int (*)();
    using QTextToSpeechEngine_Receivers_Callback = int (*)(const QTextToSpeechEngine*, const char*);
    using QTextToSpeechEngine_IsSignalConnected_Callback = bool (*)(const QTextToSpeechEngine*, QMetaMethod*);

  protected:
    // Instance callback storage
    QTextToSpeechEngine_MetaObject_Callback qtexttospeechengine_metaobject_callback = nullptr;
    QTextToSpeechEngine_Metacast_Callback qtexttospeechengine_metacast_callback = nullptr;
    QTextToSpeechEngine_Metacall_Callback qtexttospeechengine_metacall_callback = nullptr;
    QTextToSpeechEngine_Capabilities_Callback qtexttospeechengine_capabilities_callback = nullptr;
    QTextToSpeechEngine_AvailableLocales_Callback qtexttospeechengine_availablelocales_callback = nullptr;
    QTextToSpeechEngine_AvailableVoices_Callback qtexttospeechengine_availablevoices_callback = nullptr;
    QTextToSpeechEngine_Say_Callback qtexttospeechengine_say_callback = nullptr;
    QTextToSpeechEngine_Synthesize_Callback qtexttospeechengine_synthesize_callback = nullptr;
    QTextToSpeechEngine_Stop_Callback qtexttospeechengine_stop_callback = nullptr;
    QTextToSpeechEngine_Pause_Callback qtexttospeechengine_pause_callback = nullptr;
    QTextToSpeechEngine_Resume_Callback qtexttospeechengine_resume_callback = nullptr;
    QTextToSpeechEngine_Rate_Callback qtexttospeechengine_rate_callback = nullptr;
    QTextToSpeechEngine_SetRate_Callback qtexttospeechengine_setrate_callback = nullptr;
    QTextToSpeechEngine_Pitch_Callback qtexttospeechengine_pitch_callback = nullptr;
    QTextToSpeechEngine_SetPitch_Callback qtexttospeechengine_setpitch_callback = nullptr;
    QTextToSpeechEngine_Locale_Callback qtexttospeechengine_locale_callback = nullptr;
    QTextToSpeechEngine_SetLocale_Callback qtexttospeechengine_setlocale_callback = nullptr;
    QTextToSpeechEngine_Volume_Callback qtexttospeechengine_volume_callback = nullptr;
    QTextToSpeechEngine_SetVolume_Callback qtexttospeechengine_setvolume_callback = nullptr;
    QTextToSpeechEngine_Voice_Callback qtexttospeechengine_voice_callback = nullptr;
    QTextToSpeechEngine_SetVoice_Callback qtexttospeechengine_setvoice_callback = nullptr;
    QTextToSpeechEngine_State_Callback qtexttospeechengine_state_callback = nullptr;
    QTextToSpeechEngine_ErrorReason_Callback qtexttospeechengine_errorreason_callback = nullptr;
    QTextToSpeechEngine_ErrorString_Callback qtexttospeechengine_errorstring_callback = nullptr;
    QTextToSpeechEngine_Event_Callback qtexttospeechengine_event_callback = nullptr;
    QTextToSpeechEngine_EventFilter_Callback qtexttospeechengine_eventfilter_callback = nullptr;
    QTextToSpeechEngine_TimerEvent_Callback qtexttospeechengine_timerevent_callback = nullptr;
    QTextToSpeechEngine_ChildEvent_Callback qtexttospeechengine_childevent_callback = nullptr;
    QTextToSpeechEngine_CustomEvent_Callback qtexttospeechengine_customevent_callback = nullptr;
    QTextToSpeechEngine_ConnectNotify_Callback qtexttospeechengine_connectnotify_callback = nullptr;
    QTextToSpeechEngine_DisconnectNotify_Callback qtexttospeechengine_disconnectnotify_callback = nullptr;
    QTextToSpeechEngine_CreateVoice_Callback qtexttospeechengine_createvoice_callback = nullptr;
    QTextToSpeechEngine_VoiceData_Callback qtexttospeechengine_voicedata_callback = nullptr;
    QTextToSpeechEngine_Sender_Callback qtexttospeechengine_sender_callback = nullptr;
    QTextToSpeechEngine_SenderSignalIndex_Callback qtexttospeechengine_sendersignalindex_callback = nullptr;
    QTextToSpeechEngine_Receivers_Callback qtexttospeechengine_receivers_callback = nullptr;
    QTextToSpeechEngine_IsSignalConnected_Callback qtexttospeechengine_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtexttospeechengine_metaobject_isbase = false;
    mutable bool qtexttospeechengine_metacast_isbase = false;
    mutable bool qtexttospeechengine_metacall_isbase = false;
    mutable bool qtexttospeechengine_capabilities_isbase = false;
    mutable bool qtexttospeechengine_availablelocales_isbase = false;
    mutable bool qtexttospeechengine_availablevoices_isbase = false;
    mutable bool qtexttospeechengine_say_isbase = false;
    mutable bool qtexttospeechengine_synthesize_isbase = false;
    mutable bool qtexttospeechengine_stop_isbase = false;
    mutable bool qtexttospeechengine_pause_isbase = false;
    mutable bool qtexttospeechengine_resume_isbase = false;
    mutable bool qtexttospeechengine_rate_isbase = false;
    mutable bool qtexttospeechengine_setrate_isbase = false;
    mutable bool qtexttospeechengine_pitch_isbase = false;
    mutable bool qtexttospeechengine_setpitch_isbase = false;
    mutable bool qtexttospeechengine_locale_isbase = false;
    mutable bool qtexttospeechengine_setlocale_isbase = false;
    mutable bool qtexttospeechengine_volume_isbase = false;
    mutable bool qtexttospeechengine_setvolume_isbase = false;
    mutable bool qtexttospeechengine_voice_isbase = false;
    mutable bool qtexttospeechengine_setvoice_isbase = false;
    mutable bool qtexttospeechengine_state_isbase = false;
    mutable bool qtexttospeechengine_errorreason_isbase = false;
    mutable bool qtexttospeechengine_errorstring_isbase = false;
    mutable bool qtexttospeechengine_event_isbase = false;
    mutable bool qtexttospeechengine_eventfilter_isbase = false;
    mutable bool qtexttospeechengine_timerevent_isbase = false;
    mutable bool qtexttospeechengine_childevent_isbase = false;
    mutable bool qtexttospeechengine_customevent_isbase = false;
    mutable bool qtexttospeechengine_connectnotify_isbase = false;
    mutable bool qtexttospeechengine_disconnectnotify_isbase = false;
    mutable bool qtexttospeechengine_createvoice_isbase = false;
    mutable bool qtexttospeechengine_voicedata_isbase = false;
    mutable bool qtexttospeechengine_sender_isbase = false;
    mutable bool qtexttospeechengine_sendersignalindex_isbase = false;
    mutable bool qtexttospeechengine_receivers_isbase = false;
    mutable bool qtexttospeechengine_issignalconnected_isbase = false;

  public:
    VirtualQTextToSpeechEngine() : QTextToSpeechEngine() {};
    VirtualQTextToSpeechEngine(QObject* parent) : QTextToSpeechEngine(parent) {};

    // Callback setters
    inline void setQTextToSpeechEngine_MetaObject_Callback(QTextToSpeechEngine_MetaObject_Callback cb) { qtexttospeechengine_metaobject_callback = cb; }
    inline void setQTextToSpeechEngine_Metacast_Callback(QTextToSpeechEngine_Metacast_Callback cb) { qtexttospeechengine_metacast_callback = cb; }
    inline void setQTextToSpeechEngine_Metacall_Callback(QTextToSpeechEngine_Metacall_Callback cb) { qtexttospeechengine_metacall_callback = cb; }
    inline void setQTextToSpeechEngine_Capabilities_Callback(QTextToSpeechEngine_Capabilities_Callback cb) { qtexttospeechengine_capabilities_callback = cb; }
    inline void setQTextToSpeechEngine_AvailableLocales_Callback(QTextToSpeechEngine_AvailableLocales_Callback cb) { qtexttospeechengine_availablelocales_callback = cb; }
    inline void setQTextToSpeechEngine_AvailableVoices_Callback(QTextToSpeechEngine_AvailableVoices_Callback cb) { qtexttospeechengine_availablevoices_callback = cb; }
    inline void setQTextToSpeechEngine_Say_Callback(QTextToSpeechEngine_Say_Callback cb) { qtexttospeechengine_say_callback = cb; }
    inline void setQTextToSpeechEngine_Synthesize_Callback(QTextToSpeechEngine_Synthesize_Callback cb) { qtexttospeechengine_synthesize_callback = cb; }
    inline void setQTextToSpeechEngine_Stop_Callback(QTextToSpeechEngine_Stop_Callback cb) { qtexttospeechengine_stop_callback = cb; }
    inline void setQTextToSpeechEngine_Pause_Callback(QTextToSpeechEngine_Pause_Callback cb) { qtexttospeechengine_pause_callback = cb; }
    inline void setQTextToSpeechEngine_Resume_Callback(QTextToSpeechEngine_Resume_Callback cb) { qtexttospeechengine_resume_callback = cb; }
    inline void setQTextToSpeechEngine_Rate_Callback(QTextToSpeechEngine_Rate_Callback cb) { qtexttospeechengine_rate_callback = cb; }
    inline void setQTextToSpeechEngine_SetRate_Callback(QTextToSpeechEngine_SetRate_Callback cb) { qtexttospeechengine_setrate_callback = cb; }
    inline void setQTextToSpeechEngine_Pitch_Callback(QTextToSpeechEngine_Pitch_Callback cb) { qtexttospeechengine_pitch_callback = cb; }
    inline void setQTextToSpeechEngine_SetPitch_Callback(QTextToSpeechEngine_SetPitch_Callback cb) { qtexttospeechengine_setpitch_callback = cb; }
    inline void setQTextToSpeechEngine_Locale_Callback(QTextToSpeechEngine_Locale_Callback cb) { qtexttospeechengine_locale_callback = cb; }
    inline void setQTextToSpeechEngine_SetLocale_Callback(QTextToSpeechEngine_SetLocale_Callback cb) { qtexttospeechengine_setlocale_callback = cb; }
    inline void setQTextToSpeechEngine_Volume_Callback(QTextToSpeechEngine_Volume_Callback cb) { qtexttospeechengine_volume_callback = cb; }
    inline void setQTextToSpeechEngine_SetVolume_Callback(QTextToSpeechEngine_SetVolume_Callback cb) { qtexttospeechengine_setvolume_callback = cb; }
    inline void setQTextToSpeechEngine_Voice_Callback(QTextToSpeechEngine_Voice_Callback cb) { qtexttospeechengine_voice_callback = cb; }
    inline void setQTextToSpeechEngine_SetVoice_Callback(QTextToSpeechEngine_SetVoice_Callback cb) { qtexttospeechengine_setvoice_callback = cb; }
    inline void setQTextToSpeechEngine_State_Callback(QTextToSpeechEngine_State_Callback cb) { qtexttospeechengine_state_callback = cb; }
    inline void setQTextToSpeechEngine_ErrorReason_Callback(QTextToSpeechEngine_ErrorReason_Callback cb) { qtexttospeechengine_errorreason_callback = cb; }
    inline void setQTextToSpeechEngine_ErrorString_Callback(QTextToSpeechEngine_ErrorString_Callback cb) { qtexttospeechengine_errorstring_callback = cb; }
    inline void setQTextToSpeechEngine_Event_Callback(QTextToSpeechEngine_Event_Callback cb) { qtexttospeechengine_event_callback = cb; }
    inline void setQTextToSpeechEngine_EventFilter_Callback(QTextToSpeechEngine_EventFilter_Callback cb) { qtexttospeechengine_eventfilter_callback = cb; }
    inline void setQTextToSpeechEngine_TimerEvent_Callback(QTextToSpeechEngine_TimerEvent_Callback cb) { qtexttospeechengine_timerevent_callback = cb; }
    inline void setQTextToSpeechEngine_ChildEvent_Callback(QTextToSpeechEngine_ChildEvent_Callback cb) { qtexttospeechengine_childevent_callback = cb; }
    inline void setQTextToSpeechEngine_CustomEvent_Callback(QTextToSpeechEngine_CustomEvent_Callback cb) { qtexttospeechengine_customevent_callback = cb; }
    inline void setQTextToSpeechEngine_ConnectNotify_Callback(QTextToSpeechEngine_ConnectNotify_Callback cb) { qtexttospeechengine_connectnotify_callback = cb; }
    inline void setQTextToSpeechEngine_DisconnectNotify_Callback(QTextToSpeechEngine_DisconnectNotify_Callback cb) { qtexttospeechengine_disconnectnotify_callback = cb; }
    inline void setQTextToSpeechEngine_CreateVoice_Callback(QTextToSpeechEngine_CreateVoice_Callback cb) { qtexttospeechengine_createvoice_callback = cb; }
    inline void setQTextToSpeechEngine_VoiceData_Callback(QTextToSpeechEngine_VoiceData_Callback cb) { qtexttospeechengine_voicedata_callback = cb; }
    inline void setQTextToSpeechEngine_Sender_Callback(QTextToSpeechEngine_Sender_Callback cb) { qtexttospeechengine_sender_callback = cb; }
    inline void setQTextToSpeechEngine_SenderSignalIndex_Callback(QTextToSpeechEngine_SenderSignalIndex_Callback cb) { qtexttospeechengine_sendersignalindex_callback = cb; }
    inline void setQTextToSpeechEngine_Receivers_Callback(QTextToSpeechEngine_Receivers_Callback cb) { qtexttospeechengine_receivers_callback = cb; }
    inline void setQTextToSpeechEngine_IsSignalConnected_Callback(QTextToSpeechEngine_IsSignalConnected_Callback cb) { qtexttospeechengine_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQTextToSpeechEngine_MetaObject_IsBase(bool value) const { qtexttospeechengine_metaobject_isbase = value; }
    inline void setQTextToSpeechEngine_Metacast_IsBase(bool value) const { qtexttospeechengine_metacast_isbase = value; }
    inline void setQTextToSpeechEngine_Metacall_IsBase(bool value) const { qtexttospeechengine_metacall_isbase = value; }
    inline void setQTextToSpeechEngine_Capabilities_IsBase(bool value) const { qtexttospeechengine_capabilities_isbase = value; }
    inline void setQTextToSpeechEngine_AvailableLocales_IsBase(bool value) const { qtexttospeechengine_availablelocales_isbase = value; }
    inline void setQTextToSpeechEngine_AvailableVoices_IsBase(bool value) const { qtexttospeechengine_availablevoices_isbase = value; }
    inline void setQTextToSpeechEngine_Say_IsBase(bool value) const { qtexttospeechengine_say_isbase = value; }
    inline void setQTextToSpeechEngine_Synthesize_IsBase(bool value) const { qtexttospeechengine_synthesize_isbase = value; }
    inline void setQTextToSpeechEngine_Stop_IsBase(bool value) const { qtexttospeechengine_stop_isbase = value; }
    inline void setQTextToSpeechEngine_Pause_IsBase(bool value) const { qtexttospeechengine_pause_isbase = value; }
    inline void setQTextToSpeechEngine_Resume_IsBase(bool value) const { qtexttospeechengine_resume_isbase = value; }
    inline void setQTextToSpeechEngine_Rate_IsBase(bool value) const { qtexttospeechengine_rate_isbase = value; }
    inline void setQTextToSpeechEngine_SetRate_IsBase(bool value) const { qtexttospeechengine_setrate_isbase = value; }
    inline void setQTextToSpeechEngine_Pitch_IsBase(bool value) const { qtexttospeechengine_pitch_isbase = value; }
    inline void setQTextToSpeechEngine_SetPitch_IsBase(bool value) const { qtexttospeechengine_setpitch_isbase = value; }
    inline void setQTextToSpeechEngine_Locale_IsBase(bool value) const { qtexttospeechengine_locale_isbase = value; }
    inline void setQTextToSpeechEngine_SetLocale_IsBase(bool value) const { qtexttospeechengine_setlocale_isbase = value; }
    inline void setQTextToSpeechEngine_Volume_IsBase(bool value) const { qtexttospeechengine_volume_isbase = value; }
    inline void setQTextToSpeechEngine_SetVolume_IsBase(bool value) const { qtexttospeechengine_setvolume_isbase = value; }
    inline void setQTextToSpeechEngine_Voice_IsBase(bool value) const { qtexttospeechengine_voice_isbase = value; }
    inline void setQTextToSpeechEngine_SetVoice_IsBase(bool value) const { qtexttospeechengine_setvoice_isbase = value; }
    inline void setQTextToSpeechEngine_State_IsBase(bool value) const { qtexttospeechengine_state_isbase = value; }
    inline void setQTextToSpeechEngine_ErrorReason_IsBase(bool value) const { qtexttospeechengine_errorreason_isbase = value; }
    inline void setQTextToSpeechEngine_ErrorString_IsBase(bool value) const { qtexttospeechengine_errorstring_isbase = value; }
    inline void setQTextToSpeechEngine_Event_IsBase(bool value) const { qtexttospeechengine_event_isbase = value; }
    inline void setQTextToSpeechEngine_EventFilter_IsBase(bool value) const { qtexttospeechengine_eventfilter_isbase = value; }
    inline void setQTextToSpeechEngine_TimerEvent_IsBase(bool value) const { qtexttospeechengine_timerevent_isbase = value; }
    inline void setQTextToSpeechEngine_ChildEvent_IsBase(bool value) const { qtexttospeechengine_childevent_isbase = value; }
    inline void setQTextToSpeechEngine_CustomEvent_IsBase(bool value) const { qtexttospeechengine_customevent_isbase = value; }
    inline void setQTextToSpeechEngine_ConnectNotify_IsBase(bool value) const { qtexttospeechengine_connectnotify_isbase = value; }
    inline void setQTextToSpeechEngine_DisconnectNotify_IsBase(bool value) const { qtexttospeechengine_disconnectnotify_isbase = value; }
    inline void setQTextToSpeechEngine_CreateVoice_IsBase(bool value) const { qtexttospeechengine_createvoice_isbase = value; }
    inline void setQTextToSpeechEngine_VoiceData_IsBase(bool value) const { qtexttospeechengine_voicedata_isbase = value; }
    inline void setQTextToSpeechEngine_Sender_IsBase(bool value) const { qtexttospeechengine_sender_isbase = value; }
    inline void setQTextToSpeechEngine_SenderSignalIndex_IsBase(bool value) const { qtexttospeechengine_sendersignalindex_isbase = value; }
    inline void setQTextToSpeechEngine_Receivers_IsBase(bool value) const { qtexttospeechengine_receivers_isbase = value; }
    inline void setQTextToSpeechEngine_IsSignalConnected_IsBase(bool value) const { qtexttospeechengine_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtexttospeechengine_metaobject_isbase) {
            qtexttospeechengine_metaobject_isbase = false;
            return QTextToSpeechEngine::metaObject();
        }
        auto metaobject_cb = qtexttospeechengine_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QTextToSpeechEngine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtexttospeechengine_metacast_isbase) {
            qtexttospeechengine_metacast_isbase = false;
            return QTextToSpeechEngine::qt_metacast(param1);
        }
        auto metacast_cb = qtexttospeechengine_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QTextToSpeechEngine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtexttospeechengine_metacall_isbase) {
            qtexttospeechengine_metacall_isbase = false;
            return QTextToSpeechEngine::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qtexttospeechengine_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTextToSpeechEngine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QTextToSpeech::Capabilities capabilities() const override {
        if (qtexttospeechengine_capabilities_isbase) {
            qtexttospeechengine_capabilities_isbase = false;
            return QTextToSpeechEngine::capabilities();
        }
        auto capabilities_cb = qtexttospeechengine_capabilities_callback;
        if (capabilities_cb) {
            int callback_ret = capabilities_cb();
            return static_cast<QTextToSpeech::Capabilities>(callback_ret);
        }
        return QTextToSpeechEngine::capabilities();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QLocale> availableLocales() const override {
        auto availablelocales_cb = qtexttospeechengine_availablelocales_callback;
        if (availablelocales_cb) {
            libqt_list /* of QLocale* */ callback_ret = availablelocales_cb();
            QList<QLocale> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QLocale** callback_ret_arr = static_cast<QLocale**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QVoice> availableVoices() const override {
        auto availablevoices_cb = qtexttospeechengine_availablevoices_callback;
        if (availablevoices_cb) {
            libqt_list /* of QVoice* */ callback_ret = availablevoices_cb();
            QList<QVoice> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QVoice** callback_ret_arr = static_cast<QVoice**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void say(const QString& text) override {
        auto say_cb = qtexttospeechengine_say_callback;
        if (say_cb) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;

            say_cb(this, cbval1);
            libqt_free(text_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void synthesize(const QString& text) override {
        auto synthesize_cb = qtexttospeechengine_synthesize_callback;
        if (synthesize_cb) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;

            synthesize_cb(this, cbval1);
            libqt_free(text_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stop(QTextToSpeech::BoundaryHint boundaryHint) override {
        auto stop_cb = qtexttospeechengine_stop_callback;
        if (stop_cb) {
            int cbval1 = static_cast<int>(boundaryHint);

            stop_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void pause(QTextToSpeech::BoundaryHint boundaryHint) override {
        auto pause_cb = qtexttospeechengine_pause_callback;
        if (pause_cb) {
            int cbval1 = static_cast<int>(boundaryHint);

            pause_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resume() override {
        auto resume_cb = qtexttospeechengine_resume_callback;
        if (resume_cb) {
            resume_cb();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual double rate() const override {
        auto rate_cb = qtexttospeechengine_rate_callback;
        if (rate_cb) {
            double callback_ret = rate_cb();
            return static_cast<double>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setRate(double rate) override {
        auto setrate_cb = qtexttospeechengine_setrate_callback;
        if (setrate_cb) {
            double cbval1 = rate;

            bool callback_ret = setrate_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual double pitch() const override {
        auto pitch_cb = qtexttospeechengine_pitch_callback;
        if (pitch_cb) {
            double callback_ret = pitch_cb();
            return static_cast<double>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPitch(double pitch) override {
        auto setpitch_cb = qtexttospeechengine_setpitch_callback;
        if (setpitch_cb) {
            double cbval1 = pitch;

            bool callback_ret = setpitch_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QLocale locale() const override {
        auto locale_cb = qtexttospeechengine_locale_callback;
        if (locale_cb) {
            QLocale* callback_ret = locale_cb();
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setLocale(const QLocale& locale) override {
        auto setlocale_cb = qtexttospeechengine_setlocale_callback;
        if (setlocale_cb) {
            const QLocale& locale_ret = locale;
            // Cast returned reference into pointer
            QLocale* cbval1 = const_cast<QLocale*>(&locale_ret);

            bool callback_ret = setlocale_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual double volume() const override {
        auto volume_cb = qtexttospeechengine_volume_callback;
        if (volume_cb) {
            double callback_ret = volume_cb();
            return static_cast<double>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setVolume(double volume) override {
        auto setvolume_cb = qtexttospeechengine_setvolume_callback;
        if (setvolume_cb) {
            double cbval1 = volume;

            bool callback_ret = setvolume_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QVoice voice() const override {
        auto voice_cb = qtexttospeechengine_voice_callback;
        if (voice_cb) {
            QVoice* callback_ret = voice_cb();
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setVoice(const QVoice& voice) override {
        auto setvoice_cb = qtexttospeechengine_setvoice_callback;
        if (setvoice_cb) {
            const QVoice& voice_ret = voice;
            // Cast returned reference into pointer
            QVoice* cbval1 = const_cast<QVoice*>(&voice_ret);

            bool callback_ret = setvoice_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QTextToSpeech::State state() const override {
        auto state_cb = qtexttospeechengine_state_callback;
        if (state_cb) {
            int callback_ret = state_cb();
            return static_cast<QTextToSpeech::State>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QTextToSpeech::ErrorReason errorReason() const override {
        auto errorreason_cb = qtexttospeechengine_errorreason_callback;
        if (errorreason_cb) {
            int callback_ret = errorreason_cb();
            return static_cast<QTextToSpeech::ErrorReason>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        auto errorstring_cb = qtexttospeechengine_errorstring_callback;
        if (errorstring_cb) {
            const char* callback_ret = errorstring_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtexttospeechengine_event_isbase) {
            qtexttospeechengine_event_isbase = false;
            return QTextToSpeechEngine::event(event);
        }
        auto event_cb = qtexttospeechengine_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QTextToSpeechEngine::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtexttospeechengine_eventfilter_isbase) {
            qtexttospeechengine_eventfilter_isbase = false;
            return QTextToSpeechEngine::eventFilter(watched, event);
        }
        auto eventfilter_cb = qtexttospeechengine_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTextToSpeechEngine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtexttospeechengine_timerevent_isbase) {
            qtexttospeechengine_timerevent_isbase = false;
            QTextToSpeechEngine::timerEvent(event);
            return;
        }
        auto timerevent_cb = qtexttospeechengine_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QTextToSpeechEngine::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtexttospeechengine_childevent_isbase) {
            qtexttospeechengine_childevent_isbase = false;
            QTextToSpeechEngine::childEvent(event);
            return;
        }
        auto childevent_cb = qtexttospeechengine_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QTextToSpeechEngine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtexttospeechengine_customevent_isbase) {
            qtexttospeechengine_customevent_isbase = false;
            QTextToSpeechEngine::customEvent(event);
            return;
        }
        auto customevent_cb = qtexttospeechengine_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QTextToSpeechEngine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtexttospeechengine_connectnotify_isbase) {
            qtexttospeechengine_connectnotify_isbase = false;
            QTextToSpeechEngine::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qtexttospeechengine_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QTextToSpeechEngine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtexttospeechengine_disconnectnotify_isbase) {
            qtexttospeechengine_disconnectnotify_isbase = false;
            QTextToSpeechEngine::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qtexttospeechengine_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QTextToSpeechEngine::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QVoice createVoice(const QString& name, const QLocale& locale, QVoice::Gender gender, QVoice::Age age, const QVariant& data) {
        if (qtexttospeechengine_createvoice_isbase) {
            qtexttospeechengine_createvoice_isbase = false;
            return QTextToSpeechEngine::createVoice(name, locale, gender, age, data);
        }
        auto createvoice_cb = qtexttospeechengine_createvoice_callback;
        if (createvoice_cb) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const QLocale& locale_ret = locale;
            // Cast returned reference into pointer
            QLocale* cbval2 = const_cast<QLocale*>(&locale_ret);
            int cbval3 = static_cast<int>(gender);
            int cbval4 = static_cast<int>(age);
            const QVariant& data_ret = data;
            // Cast returned reference into pointer
            QVariant* cbval5 = const_cast<QVariant*>(&data_ret);

            QVoice* callback_ret = createvoice_cb(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            libqt_free(name_str);
            return *callback_ret;
        }
        return QTextToSpeechEngine::createVoice(name, locale, gender, age, data);
    }

    // Virtual method for C ABI access and custom callback
    QVariant voiceData(const QVoice& voice) {
        if (qtexttospeechengine_voicedata_isbase) {
            qtexttospeechengine_voicedata_isbase = false;
            return QTextToSpeechEngine::voiceData(voice);
        }
        auto voicedata_cb = qtexttospeechengine_voicedata_callback;
        if (voicedata_cb) {
            const QVoice& voice_ret = voice;
            // Cast returned reference into pointer
            QVoice* cbval1 = const_cast<QVoice*>(&voice_ret);

            QVariant* callback_ret = voicedata_cb(this, cbval1);
            return *callback_ret;
        }
        return QTextToSpeechEngine::voiceData(voice);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtexttospeechengine_sender_isbase) {
            qtexttospeechengine_sender_isbase = false;
            return QTextToSpeechEngine::sender();
        }
        auto sender_cb = qtexttospeechengine_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QTextToSpeechEngine::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtexttospeechengine_sendersignalindex_isbase) {
            qtexttospeechengine_sendersignalindex_isbase = false;
            return QTextToSpeechEngine::senderSignalIndex();
        }
        auto sendersignalindex_cb = qtexttospeechengine_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QTextToSpeechEngine::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtexttospeechengine_receivers_isbase) {
            qtexttospeechengine_receivers_isbase = false;
            return QTextToSpeechEngine::receivers(signal);
        }
        auto receivers_cb = qtexttospeechengine_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTextToSpeechEngine::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtexttospeechengine_issignalconnected_isbase) {
            qtexttospeechengine_issignalconnected_isbase = false;
            return QTextToSpeechEngine::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qtexttospeechengine_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QTextToSpeechEngine::isSignalConnected(signal);
    }

    // Friend functions
    friend void QTextToSpeechEngine_TimerEvent(QTextToSpeechEngine* self, QTimerEvent* event);
    friend void QTextToSpeechEngine_SuperTimerEvent(QTextToSpeechEngine* self, QTimerEvent* event);
    friend void QTextToSpeechEngine_ChildEvent(QTextToSpeechEngine* self, QChildEvent* event);
    friend void QTextToSpeechEngine_SuperChildEvent(QTextToSpeechEngine* self, QChildEvent* event);
    friend void QTextToSpeechEngine_CustomEvent(QTextToSpeechEngine* self, QEvent* event);
    friend void QTextToSpeechEngine_SuperCustomEvent(QTextToSpeechEngine* self, QEvent* event);
    friend void QTextToSpeechEngine_ConnectNotify(QTextToSpeechEngine* self, const QMetaMethod* signal);
    friend void QTextToSpeechEngine_SuperConnectNotify(QTextToSpeechEngine* self, const QMetaMethod* signal);
    friend void QTextToSpeechEngine_DisconnectNotify(QTextToSpeechEngine* self, const QMetaMethod* signal);
    friend void QTextToSpeechEngine_SuperDisconnectNotify(QTextToSpeechEngine* self, const QMetaMethod* signal);
    friend QVoice* QTextToSpeechEngine_CreateVoice(QTextToSpeechEngine* self, const libqt_string name, const QLocale* locale, int gender, int age, const QVariant* data);
    friend QVoice* QTextToSpeechEngine_SuperCreateVoice(QTextToSpeechEngine* self, const libqt_string name, const QLocale* locale, int gender, int age, const QVariant* data);
    friend QVariant* QTextToSpeechEngine_VoiceData(QTextToSpeechEngine* self, const QVoice* voice);
    friend QVariant* QTextToSpeechEngine_SuperVoiceData(QTextToSpeechEngine* self, const QVoice* voice);
    friend QObject* QTextToSpeechEngine_Sender(const QTextToSpeechEngine* self);
    friend QObject* QTextToSpeechEngine_SuperSender(const QTextToSpeechEngine* self);
    friend int QTextToSpeechEngine_SenderSignalIndex(const QTextToSpeechEngine* self);
    friend int QTextToSpeechEngine_SuperSenderSignalIndex(const QTextToSpeechEngine* self);
    friend int QTextToSpeechEngine_Receivers(const QTextToSpeechEngine* self, const char* signal);
    friend int QTextToSpeechEngine_SuperReceivers(const QTextToSpeechEngine* self, const char* signal);
    friend bool QTextToSpeechEngine_IsSignalConnected(const QTextToSpeechEngine* self, const QMetaMethod* signal);
    friend bool QTextToSpeechEngine_SuperIsSignalConnected(const QTextToSpeechEngine* self, const QMetaMethod* signal);
};

#endif
