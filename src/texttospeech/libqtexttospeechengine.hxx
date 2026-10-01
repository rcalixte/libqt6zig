#pragma once
#ifndef TEXTTOSPEECH_LIBQTEXTTOSPEECHENGINE_HXX
#define TEXTTOSPEECH_LIBQTEXTTOSPEECHENGINE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QTextToSpeechEngine
class VirtualQTextToSpeechEngine : public QTextToSpeechEngine {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTextToSpeechEngine_MetaObject_Callback = QMetaObject* (*)(const QTextToSpeechEngine*);
    using QTextToSpeechEngine_Metacast_Callback = void* (*)(QTextToSpeechEngine*, const char*);
    using QTextToSpeechEngine_Metacall_Callback = int (*)(QTextToSpeechEngine*, int, int, void**);
    using QTextToSpeechEngine_Capabilities_Callback = int (*)(const QTextToSpeechEngine*);
    using QTextToSpeechEngine_AvailableLocales_Callback = libqt_list /* of QLocale* */ (*)(const QTextToSpeechEngine*);
    using QTextToSpeechEngine_AvailableVoices_Callback = libqt_list /* of QVoice* */ (*)(const QTextToSpeechEngine*);
    using QTextToSpeechEngine_Say_Callback = void (*)(QTextToSpeechEngine*, const char*);
    using QTextToSpeechEngine_Synthesize_Callback = void (*)(QTextToSpeechEngine*, const char*);
    using QTextToSpeechEngine_Stop_Callback = void (*)(QTextToSpeechEngine*, int);
    using QTextToSpeechEngine_Pause_Callback = void (*)(QTextToSpeechEngine*, int);
    using QTextToSpeechEngine_Resume_Callback = void (*)(QTextToSpeechEngine*);
    using QTextToSpeechEngine_Rate_Callback = double (*)(const QTextToSpeechEngine*);
    using QTextToSpeechEngine_SetRate_Callback = bool (*)(QTextToSpeechEngine*, double);
    using QTextToSpeechEngine_Pitch_Callback = double (*)(const QTextToSpeechEngine*);
    using QTextToSpeechEngine_SetPitch_Callback = bool (*)(QTextToSpeechEngine*, double);
    using QTextToSpeechEngine_Locale_Callback = QLocale* (*)(const QTextToSpeechEngine*);
    using QTextToSpeechEngine_SetLocale_Callback = bool (*)(QTextToSpeechEngine*, QLocale*);
    using QTextToSpeechEngine_Volume_Callback = double (*)(const QTextToSpeechEngine*);
    using QTextToSpeechEngine_SetVolume_Callback = bool (*)(QTextToSpeechEngine*, double);
    using QTextToSpeechEngine_Voice_Callback = QVoice* (*)(const QTextToSpeechEngine*);
    using QTextToSpeechEngine_SetVoice_Callback = bool (*)(QTextToSpeechEngine*, QVoice*);
    using QTextToSpeechEngine_State_Callback = int (*)(const QTextToSpeechEngine*);
    using QTextToSpeechEngine_ErrorReason_Callback = int (*)(const QTextToSpeechEngine*);
    using QTextToSpeechEngine_ErrorString_Callback = const char* (*)(const QTextToSpeechEngine*);
    using QTextToSpeechEngine_Event_Callback = bool (*)(QTextToSpeechEngine*, QEvent*);
    using QTextToSpeechEngine_EventFilter_Callback = bool (*)(QTextToSpeechEngine*, QObject*, QEvent*);
    using QTextToSpeechEngine_TimerEvent_Callback = void (*)(QTextToSpeechEngine*, QTimerEvent*);
    using QTextToSpeechEngine_ChildEvent_Callback = void (*)(QTextToSpeechEngine*, QChildEvent*);
    using QTextToSpeechEngine_CustomEvent_Callback = void (*)(QTextToSpeechEngine*, QEvent*);
    using QTextToSpeechEngine_ConnectNotify_Callback = void (*)(QTextToSpeechEngine*, QMetaMethod*);
    using QTextToSpeechEngine_DisconnectNotify_Callback = void (*)(QTextToSpeechEngine*, QMetaMethod*);
    using QTextToSpeechEngine::createVoice;
    using QTextToSpeechEngine::isSignalConnected;
    using QTextToSpeechEngine::receivers;
    using QTextToSpeechEngine::sender;
    using QTextToSpeechEngine::senderSignalIndex;
    using QTextToSpeechEngine::voiceData;

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

    // Access struct
    struct Base : QTextToSpeechEngine {
        using QTextToSpeechEngine::childEvent;
        using QTextToSpeechEngine::connectNotify;
        using QTextToSpeechEngine::customEvent;
        using QTextToSpeechEngine::disconnectNotify;
        using QTextToSpeechEngine::timerEvent;
    };

    VirtualQTextToSpeechEngine() : QTextToSpeechEngine() {};
    VirtualQTextToSpeechEngine(QObject* parent) : QTextToSpeechEngine(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtexttospeechengine_metaobject_callback) {
            QMetaObject* callback_ret = qtexttospeechengine_metaobject_callback(this);
            return callback_ret;
        }
        return QTextToSpeechEngine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtexttospeechengine_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtexttospeechengine_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTextToSpeechEngine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtexttospeechengine_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtexttospeechengine_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTextToSpeechEngine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QTextToSpeech::Capabilities capabilities() const override {
        if (qtexttospeechengine_capabilities_callback) {
            int callback_ret = qtexttospeechengine_capabilities_callback(this);
            return static_cast<QTextToSpeech::Capabilities>(callback_ret);
        }
        return QTextToSpeechEngine::capabilities();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QLocale> availableLocales() const override {
        if (qtexttospeechengine_availablelocales_callback) {
            libqt_list /* of QLocale* */ callback_ret = qtexttospeechengine_availablelocales_callback(this);
            QList<QLocale> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QLocale** callback_ret_arr = static_cast<QLocale**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::availableLocales called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QVoice> availableVoices() const override {
        if (qtexttospeechengine_availablevoices_callback) {
            libqt_list /* of QVoice* */ callback_ret = qtexttospeechengine_availablevoices_callback(this);
            QList<QVoice> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QVoice** callback_ret_arr = static_cast<QVoice**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::availableVoices called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void say(const QString& text) override {
        if (qtexttospeechengine_say_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            qtexttospeechengine_say_callback(this, cbval1);
            libqt_free(text_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::say called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void synthesize(const QString& text) override {
        if (qtexttospeechengine_synthesize_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            qtexttospeechengine_synthesize_callback(this, cbval1);
            libqt_free(text_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::synthesize called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void stop(QTextToSpeech::BoundaryHint boundaryHint) override {
        if (qtexttospeechengine_stop_callback) {
            int cbval1 = static_cast<int>(boundaryHint);
            qtexttospeechengine_stop_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::stop called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void pause(QTextToSpeech::BoundaryHint boundaryHint) override {
        if (qtexttospeechengine_pause_callback) {
            int cbval1 = static_cast<int>(boundaryHint);
            qtexttospeechengine_pause_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::pause called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void resume() override {
        if (qtexttospeechengine_resume_callback) {
            qtexttospeechengine_resume_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::resume called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual double rate() const override {
        if (qtexttospeechengine_rate_callback) {
            double callback_ret = qtexttospeechengine_rate_callback(this);
            return static_cast<double>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::rate called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setRate(double rate) override {
        if (qtexttospeechengine_setrate_callback) {
            double cbval1 = rate;
            bool callback_ret = qtexttospeechengine_setrate_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::setRate called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual double pitch() const override {
        if (qtexttospeechengine_pitch_callback) {
            double callback_ret = qtexttospeechengine_pitch_callback(this);
            return static_cast<double>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::pitch called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPitch(double pitch) override {
        if (qtexttospeechengine_setpitch_callback) {
            double cbval1 = pitch;
            bool callback_ret = qtexttospeechengine_setpitch_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::setPitch called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QLocale locale() const override {
        if (qtexttospeechengine_locale_callback) {
            QLocale* callback_ret = qtexttospeechengine_locale_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::locale called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setLocale(const QLocale& locale) override {
        if (qtexttospeechengine_setlocale_callback) {
            const QLocale& locale_ret = locale;
            // Cast returned reference into pointer
            QLocale* cbval1 = const_cast<QLocale*>(&locale_ret);
            bool callback_ret = qtexttospeechengine_setlocale_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::setLocale called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual double volume() const override {
        if (qtexttospeechengine_volume_callback) {
            double callback_ret = qtexttospeechengine_volume_callback(this);
            return static_cast<double>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::volume called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setVolume(double volume) override {
        if (qtexttospeechengine_setvolume_callback) {
            double cbval1 = volume;
            bool callback_ret = qtexttospeechengine_setvolume_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::setVolume called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QVoice voice() const override {
        if (qtexttospeechengine_voice_callback) {
            QVoice* callback_ret = qtexttospeechengine_voice_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::voice called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setVoice(const QVoice& voice) override {
        if (qtexttospeechengine_setvoice_callback) {
            const QVoice& voice_ret = voice;
            // Cast returned reference into pointer
            QVoice* cbval1 = const_cast<QVoice*>(&voice_ret);
            bool callback_ret = qtexttospeechengine_setvoice_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::setVoice called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QTextToSpeech::State state() const override {
        if (qtexttospeechengine_state_callback) {
            int callback_ret = qtexttospeechengine_state_callback(this);
            return static_cast<QTextToSpeech::State>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::state called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QTextToSpeech::ErrorReason errorReason() const override {
        if (qtexttospeechengine_errorreason_callback) {
            int callback_ret = qtexttospeechengine_errorreason_callback(this);
            return static_cast<QTextToSpeech::ErrorReason>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::errorReason called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString errorString() const override {
        if (qtexttospeechengine_errorstring_callback) {
            const char* callback_ret = qtexttospeechengine_errorstring_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QTextToSpeechEngine::errorString called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtexttospeechengine_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtexttospeechengine_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTextToSpeechEngine::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtexttospeechengine_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtexttospeechengine_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTextToSpeechEngine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtexttospeechengine_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtexttospeechengine_timerevent_callback(this, cbval1);
            return;
        }
        QTextToSpeechEngine::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtexttospeechengine_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtexttospeechengine_childevent_callback(this, cbval1);
            return;
        }
        QTextToSpeechEngine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtexttospeechengine_customevent_callback) {
            QEvent* cbval1 = event;
            qtexttospeechengine_customevent_callback(this, cbval1);
            return;
        }
        QTextToSpeechEngine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtexttospeechengine_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtexttospeechengine_connectnotify_callback(this, cbval1);
            return;
        }
        QTextToSpeechEngine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtexttospeechengine_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtexttospeechengine_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTextToSpeechEngine::disconnectNotify(signal);
    }

    // Friend functions
    friend void QTextToSpeechEngine_SuperTimerEvent(QTextToSpeechEngine* self, QTimerEvent* event);
    friend void QTextToSpeechEngine_SuperChildEvent(QTextToSpeechEngine* self, QChildEvent* event);
    friend void QTextToSpeechEngine_SuperCustomEvent(QTextToSpeechEngine* self, QEvent* event);
    friend void QTextToSpeechEngine_SuperConnectNotify(QTextToSpeechEngine* self, const QMetaMethod* signal);
    friend void QTextToSpeechEngine_SuperDisconnectNotify(QTextToSpeechEngine* self, const QMetaMethod* signal);
};

#endif
