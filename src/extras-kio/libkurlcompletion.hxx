#pragma once
#ifndef EXTRAS_KIO_LIBKURLCOMPLETION_HXX
#define EXTRAS_KIO_LIBKURLCOMPLETION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KUrlCompletion
class VirtualKUrlCompletion final : public KUrlCompletion {
  public:
    // Virtual class public types (including callbacks and access types)
    using KUrlCompletion_MetaObject_Callback = QMetaObject* (*)(const KUrlCompletion*);
    using KUrlCompletion_Metacast_Callback = void* (*)(KUrlCompletion*, const char*);
    using KUrlCompletion_Metacall_Callback = int (*)(KUrlCompletion*, int, int, void**);
    using KUrlCompletion_MakeCompletion_Callback = const char* (*)(KUrlCompletion*, const char*);
    using KUrlCompletion_SetDir_Callback = void (*)(KUrlCompletion*, QUrl*);
    using KUrlCompletion_Dir_Callback = QUrl* (*)(const KUrlCompletion*);
    using KUrlCompletion_IsRunning_Callback = bool (*)(const KUrlCompletion*);
    using KUrlCompletion_Stop_Callback = void (*)(KUrlCompletion*);
    using KUrlCompletion_Mode_Callback = int (*)(const KUrlCompletion*);
    using KUrlCompletion_SetMode_Callback = void (*)(KUrlCompletion*, int);
    using KUrlCompletion_ReplaceEnv_Callback = bool (*)(const KUrlCompletion*);
    using KUrlCompletion_SetReplaceEnv_Callback = void (*)(KUrlCompletion*, bool);
    using KUrlCompletion_ReplaceHome_Callback = bool (*)(const KUrlCompletion*);
    using KUrlCompletion_SetReplaceHome_Callback = void (*)(KUrlCompletion*, bool);
    using KUrlCompletion_PostProcessMatches_Callback = void (*)(const KUrlCompletion*, const char**);
    using KUrlCompletion_PostProcessMatches2_Callback = void (*)(const KUrlCompletion*, KCompletionMatches*);
    using KUrlCompletion_LastMatch_Callback = const char* (*)(const KUrlCompletion*);
    using KUrlCompletion_SetCompletionMode_Callback = void (*)(KUrlCompletion*, int);
    using KUrlCompletion_SetOrder_Callback = void (*)(KUrlCompletion*, int);
    using KUrlCompletion_SetIgnoreCase_Callback = void (*)(KUrlCompletion*, bool);
    using KUrlCompletion_SetSoundsEnabled_Callback = void (*)(KUrlCompletion*, bool);
    using KUrlCompletion_SetItems_Callback = void (*)(KUrlCompletion*, const char**);
    using KUrlCompletion_Clear_Callback = void (*)(KUrlCompletion*);
    using KUrlCompletion_Event_Callback = bool (*)(KUrlCompletion*, QEvent*);
    using KUrlCompletion_EventFilter_Callback = bool (*)(KUrlCompletion*, QObject*, QEvent*);
    using KUrlCompletion_TimerEvent_Callback = void (*)(KUrlCompletion*, QTimerEvent*);
    using KUrlCompletion_ChildEvent_Callback = void (*)(KUrlCompletion*, QChildEvent*);
    using KUrlCompletion_CustomEvent_Callback = void (*)(KUrlCompletion*, QEvent*);
    using KUrlCompletion_ConnectNotify_Callback = void (*)(KUrlCompletion*, QMetaMethod*);
    using KUrlCompletion_DisconnectNotify_Callback = void (*)(KUrlCompletion*, QMetaMethod*);
    using KUrlCompletion::isSignalConnected;
    using KUrlCompletion::receivers;
    using KUrlCompletion::sender;
    using KUrlCompletion::senderSignalIndex;
    using KUrlCompletion::setShouldAutoSuggest;

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

    // Access struct
    struct Base : KUrlCompletion {
        using KUrlCompletion::childEvent;
        using KUrlCompletion::connectNotify;
        using KUrlCompletion::customEvent;
        using KUrlCompletion::disconnectNotify;
        using KUrlCompletion::postProcessMatches;
        using KUrlCompletion::timerEvent;
    };

    VirtualKUrlCompletion() : KUrlCompletion() {};
    VirtualKUrlCompletion(KUrlCompletion::Mode param1) : KUrlCompletion(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kurlcompletion_metaobject_callback) {
            QMetaObject* callback_ret = kurlcompletion_metaobject_callback(this);
            return callback_ret;
        }
        return KUrlCompletion::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kurlcompletion_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kurlcompletion_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlCompletion::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kurlcompletion_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kurlcompletion_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KUrlCompletion::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString makeCompletion(const QString& text) override {
        if (kurlcompletion_makecompletion_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            const char* callback_ret = kurlcompletion_makecompletion_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(text_str);
            return callback_ret_QString;
        }
        return KUrlCompletion::makeCompletion(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDir(const QUrl& dir) override {
        if (kurlcompletion_setdir_callback) {
            const QUrl& dir_ret = dir;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&dir_ret);
            kurlcompletion_setdir_callback(this, cbval1);
            return;
        }
        KUrlCompletion::setDir(dir);
    }

    // Virtual method for C ABI access and custom callback
    virtual QUrl dir() const override {
        if (kurlcompletion_dir_callback) {
            QUrl* callback_ret = kurlcompletion_dir_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KUrlCompletion::dir();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isRunning() const override {
        if (kurlcompletion_isrunning_callback) {
            bool callback_ret = kurlcompletion_isrunning_callback(this);
            return callback_ret;
        }
        return KUrlCompletion::isRunning();
    }

    // Virtual method for C ABI access and custom callback
    virtual void stop() override {
        if (kurlcompletion_stop_callback) {
            kurlcompletion_stop_callback(this);
            return;
        }
        KUrlCompletion::stop();
    }

    // Virtual method for C ABI access and custom callback
    virtual KUrlCompletion::Mode mode() const override {
        if (kurlcompletion_mode_callback) {
            int callback_ret = kurlcompletion_mode_callback(this);
            return static_cast<KUrlCompletion::Mode>(callback_ret);
        }
        return KUrlCompletion::mode();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMode(KUrlCompletion::Mode mode) override {
        if (kurlcompletion_setmode_callback) {
            int cbval1 = static_cast<int>(mode);
            kurlcompletion_setmode_callback(this, cbval1);
            return;
        }
        KUrlCompletion::setMode(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool replaceEnv() const override {
        if (kurlcompletion_replaceenv_callback) {
            bool callback_ret = kurlcompletion_replaceenv_callback(this);
            return callback_ret;
        }
        return KUrlCompletion::replaceEnv();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReplaceEnv(bool replace) override {
        if (kurlcompletion_setreplaceenv_callback) {
            bool cbval1 = replace;
            kurlcompletion_setreplaceenv_callback(this, cbval1);
            return;
        }
        KUrlCompletion::setReplaceEnv(replace);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool replaceHome() const override {
        if (kurlcompletion_replacehome_callback) {
            bool callback_ret = kurlcompletion_replacehome_callback(this);
            return callback_ret;
        }
        return KUrlCompletion::replaceHome();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReplaceHome(bool replace) override {
        if (kurlcompletion_setreplacehome_callback) {
            bool cbval1 = replace;
            kurlcompletion_setreplacehome_callback(this, cbval1);
            return;
        }
        KUrlCompletion::setReplaceHome(replace);
    }

    // Virtual method for C ABI access and custom callback
    virtual void postProcessMatches(QList<QString>* matches) const override {
        if (kurlcompletion_postprocessmatches_callback) {
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
            kurlcompletion_postprocessmatches_callback(this, cbval1);
            libqt_free(matches_arr);
            return;
        }
        KUrlCompletion::postProcessMatches(matches);
    }

    // Virtual method for C ABI access and custom callback
    virtual void postProcessMatches(KCompletionMatches* matches) const override {
        if (kurlcompletion_postprocessmatches2_callback) {
            KCompletionMatches* cbval1 = matches;
            kurlcompletion_postprocessmatches2_callback(this, cbval1);
            return;
        }
        KUrlCompletion::postProcessMatches(matches);
    }

    // Virtual method for C ABI access and custom callback
    virtual const QString& lastMatch() const override {
        if (kurlcompletion_lastmatch_callback) {
            const char* callback_ret = kurlcompletion_lastmatch_callback(this);
            QString* callback_ret_QString = new QString(QString::fromUtf8(callback_ret));
            return *callback_ret_QString;
        }
        return KUrlCompletion::lastMatch();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionMode(KCompletion::CompletionMode mode) override {
        if (kurlcompletion_setcompletionmode_callback) {
            int cbval1 = static_cast<int>(mode);
            kurlcompletion_setcompletionmode_callback(this, cbval1);
            return;
        }
        KUrlCompletion::setCompletionMode(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOrder(KCompletion::CompOrder order) override {
        if (kurlcompletion_setorder_callback) {
            int cbval1 = static_cast<int>(order);
            kurlcompletion_setorder_callback(this, cbval1);
            return;
        }
        KUrlCompletion::setOrder(order);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIgnoreCase(bool ignoreCase) override {
        if (kurlcompletion_setignorecase_callback) {
            bool cbval1 = ignoreCase;
            kurlcompletion_setignorecase_callback(this, cbval1);
            return;
        }
        KUrlCompletion::setIgnoreCase(ignoreCase);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSoundsEnabled(bool enable) override {
        if (kurlcompletion_setsoundsenabled_callback) {
            bool cbval1 = enable;
            kurlcompletion_setsoundsenabled_callback(this, cbval1);
            return;
        }
        KUrlCompletion::setSoundsEnabled(enable);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setItems(const QList<QString>& itemList) override {
        if (kurlcompletion_setitems_callback) {
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
            kurlcompletion_setitems_callback(this, cbval1);
            libqt_free(itemList_arr);
            return;
        }
        KUrlCompletion::setItems(itemList);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (kurlcompletion_clear_callback) {
            kurlcompletion_clear_callback(this);
            return;
        }
        KUrlCompletion::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kurlcompletion_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kurlcompletion_event_callback(this, cbval1);
            return callback_ret;
        }
        return KUrlCompletion::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kurlcompletion_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kurlcompletion_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KUrlCompletion::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kurlcompletion_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kurlcompletion_timerevent_callback(this, cbval1);
            return;
        }
        KUrlCompletion::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kurlcompletion_childevent_callback) {
            QChildEvent* cbval1 = event;
            kurlcompletion_childevent_callback(this, cbval1);
            return;
        }
        KUrlCompletion::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kurlcompletion_customevent_callback) {
            QEvent* cbval1 = event;
            kurlcompletion_customevent_callback(this, cbval1);
            return;
        }
        KUrlCompletion::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kurlcompletion_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kurlcompletion_connectnotify_callback(this, cbval1);
            return;
        }
        KUrlCompletion::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kurlcompletion_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kurlcompletion_disconnectnotify_callback(this, cbval1);
            return;
        }
        KUrlCompletion::disconnectNotify(signal);
    }

    // Friend functions
    friend void KUrlCompletion_SuperPostProcessMatches(const KUrlCompletion* self, libqt_list /* of libqt_string */ matches);
    friend void KUrlCompletion_SuperPostProcessMatches2(const KUrlCompletion* self, KCompletionMatches* matches);
    friend void KUrlCompletion_SuperTimerEvent(KUrlCompletion* self, QTimerEvent* event);
    friend void KUrlCompletion_SuperChildEvent(KUrlCompletion* self, QChildEvent* event);
    friend void KUrlCompletion_SuperCustomEvent(KUrlCompletion* self, QEvent* event);
    friend void KUrlCompletion_SuperConnectNotify(KUrlCompletion* self, const QMetaMethod* signal);
    friend void KUrlCompletion_SuperDisconnectNotify(KUrlCompletion* self, const QMetaMethod* signal);
};

#endif
