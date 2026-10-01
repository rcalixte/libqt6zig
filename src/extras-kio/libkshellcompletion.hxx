#pragma once
#ifndef EXTRAS_KIO_LIBKSHELLCOMPLETION_HXX
#define EXTRAS_KIO_LIBKSHELLCOMPLETION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KShellCompletion
class VirtualKShellCompletion final : public KShellCompletion {
  public:
    // Virtual class public types (including callbacks and access types)
    using KShellCompletion_MetaObject_Callback = QMetaObject* (*)(const KShellCompletion*);
    using KShellCompletion_Metacast_Callback = void* (*)(KShellCompletion*, const char*);
    using KShellCompletion_Metacall_Callback = int (*)(KShellCompletion*, int, int, void**);
    using KShellCompletion_MakeCompletion_Callback = const char* (*)(KShellCompletion*, const char*);
    using KShellCompletion_PostProcessMatches_Callback = void (*)(const KShellCompletion*, const char**);
    using KShellCompletion_PostProcessMatches2_Callback = void (*)(const KShellCompletion*, KCompletionMatches*);
    using KShellCompletion_SetDir_Callback = void (*)(KShellCompletion*, QUrl*);
    using KShellCompletion_Dir_Callback = QUrl* (*)(const KShellCompletion*);
    using KShellCompletion_IsRunning_Callback = bool (*)(const KShellCompletion*);
    using KShellCompletion_Stop_Callback = void (*)(KShellCompletion*);
    using KShellCompletion_Mode_Callback = int (*)(const KShellCompletion*);
    using KShellCompletion_SetMode_Callback = void (*)(KShellCompletion*, int);
    using KShellCompletion_ReplaceEnv_Callback = bool (*)(const KShellCompletion*);
    using KShellCompletion_SetReplaceEnv_Callback = void (*)(KShellCompletion*, bool);
    using KShellCompletion_ReplaceHome_Callback = bool (*)(const KShellCompletion*);
    using KShellCompletion_SetReplaceHome_Callback = void (*)(KShellCompletion*, bool);
    using KShellCompletion_LastMatch_Callback = const char* (*)(const KShellCompletion*);
    using KShellCompletion_SetCompletionMode_Callback = void (*)(KShellCompletion*, int);
    using KShellCompletion_SetOrder_Callback = void (*)(KShellCompletion*, int);
    using KShellCompletion_SetIgnoreCase_Callback = void (*)(KShellCompletion*, bool);
    using KShellCompletion_SetSoundsEnabled_Callback = void (*)(KShellCompletion*, bool);
    using KShellCompletion_SetItems_Callback = void (*)(KShellCompletion*, const char**);
    using KShellCompletion_Clear_Callback = void (*)(KShellCompletion*);
    using KShellCompletion_Event_Callback = bool (*)(KShellCompletion*, QEvent*);
    using KShellCompletion_EventFilter_Callback = bool (*)(KShellCompletion*, QObject*, QEvent*);
    using KShellCompletion_TimerEvent_Callback = void (*)(KShellCompletion*, QTimerEvent*);
    using KShellCompletion_ChildEvent_Callback = void (*)(KShellCompletion*, QChildEvent*);
    using KShellCompletion_CustomEvent_Callback = void (*)(KShellCompletion*, QEvent*);
    using KShellCompletion_ConnectNotify_Callback = void (*)(KShellCompletion*, QMetaMethod*);
    using KShellCompletion_DisconnectNotify_Callback = void (*)(KShellCompletion*, QMetaMethod*);
    using KShellCompletion::isSignalConnected;
    using KShellCompletion::receivers;
    using KShellCompletion::sender;
    using KShellCompletion::senderSignalIndex;
    using KShellCompletion::setShouldAutoSuggest;

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

    // Access struct
    struct Base : KShellCompletion {
        using KShellCompletion::childEvent;
        using KShellCompletion::connectNotify;
        using KShellCompletion::customEvent;
        using KShellCompletion::disconnectNotify;
        using KShellCompletion::postProcessMatches;
        using KShellCompletion::timerEvent;
    };

    VirtualKShellCompletion() : KShellCompletion() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kshellcompletion_metaobject_callback) {
            QMetaObject* callback_ret = kshellcompletion_metaobject_callback(this);
            return callback_ret;
        }
        return KShellCompletion::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kshellcompletion_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kshellcompletion_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KShellCompletion::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kshellcompletion_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kshellcompletion_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KShellCompletion::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString makeCompletion(const QString& text) override {
        if (kshellcompletion_makecompletion_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            const char* callback_ret = kshellcompletion_makecompletion_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(text_str);
            return callback_ret_QString;
        }
        return KShellCompletion::makeCompletion(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void postProcessMatches(QList<QString>* matches) const override {
        if (kshellcompletion_postprocessmatches_callback) {
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
            kshellcompletion_postprocessmatches_callback(this, cbval1);
            libqt_free(matches_arr);
            return;
        }
        KShellCompletion::postProcessMatches(matches);
    }

    // Virtual method for C ABI access and custom callback
    virtual void postProcessMatches(KCompletionMatches* matches) const override {
        if (kshellcompletion_postprocessmatches2_callback) {
            KCompletionMatches* cbval1 = matches;
            kshellcompletion_postprocessmatches2_callback(this, cbval1);
            return;
        }
        KShellCompletion::postProcessMatches(matches);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDir(const QUrl& dir) override {
        if (kshellcompletion_setdir_callback) {
            const QUrl& dir_ret = dir;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&dir_ret);
            kshellcompletion_setdir_callback(this, cbval1);
            return;
        }
        KShellCompletion::setDir(dir);
    }

    // Virtual method for C ABI access and custom callback
    virtual QUrl dir() const override {
        if (kshellcompletion_dir_callback) {
            QUrl* callback_ret = kshellcompletion_dir_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KShellCompletion::dir();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isRunning() const override {
        if (kshellcompletion_isrunning_callback) {
            bool callback_ret = kshellcompletion_isrunning_callback(this);
            return callback_ret;
        }
        return KShellCompletion::isRunning();
    }

    // Virtual method for C ABI access and custom callback
    virtual void stop() override {
        if (kshellcompletion_stop_callback) {
            kshellcompletion_stop_callback(this);
            return;
        }
        KShellCompletion::stop();
    }

    // Virtual method for C ABI access and custom callback
    virtual KUrlCompletion::Mode mode() const override {
        if (kshellcompletion_mode_callback) {
            int callback_ret = kshellcompletion_mode_callback(this);
            return static_cast<KUrlCompletion::Mode>(callback_ret);
        }
        return KShellCompletion::mode();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMode(KUrlCompletion::Mode mode) override {
        if (kshellcompletion_setmode_callback) {
            int cbval1 = static_cast<int>(mode);
            kshellcompletion_setmode_callback(this, cbval1);
            return;
        }
        KShellCompletion::setMode(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool replaceEnv() const override {
        if (kshellcompletion_replaceenv_callback) {
            bool callback_ret = kshellcompletion_replaceenv_callback(this);
            return callback_ret;
        }
        return KShellCompletion::replaceEnv();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReplaceEnv(bool replace) override {
        if (kshellcompletion_setreplaceenv_callback) {
            bool cbval1 = replace;
            kshellcompletion_setreplaceenv_callback(this, cbval1);
            return;
        }
        KShellCompletion::setReplaceEnv(replace);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool replaceHome() const override {
        if (kshellcompletion_replacehome_callback) {
            bool callback_ret = kshellcompletion_replacehome_callback(this);
            return callback_ret;
        }
        return KShellCompletion::replaceHome();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReplaceHome(bool replace) override {
        if (kshellcompletion_setreplacehome_callback) {
            bool cbval1 = replace;
            kshellcompletion_setreplacehome_callback(this, cbval1);
            return;
        }
        KShellCompletion::setReplaceHome(replace);
    }

    // Virtual method for C ABI access and custom callback
    virtual const QString& lastMatch() const override {
        if (kshellcompletion_lastmatch_callback) {
            const char* callback_ret = kshellcompletion_lastmatch_callback(this);
            QString* callback_ret_QString = new QString(QString::fromUtf8(callback_ret));
            return *callback_ret_QString;
        }
        return KShellCompletion::lastMatch();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionMode(KCompletion::CompletionMode mode) override {
        if (kshellcompletion_setcompletionmode_callback) {
            int cbval1 = static_cast<int>(mode);
            kshellcompletion_setcompletionmode_callback(this, cbval1);
            return;
        }
        KShellCompletion::setCompletionMode(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOrder(KCompletion::CompOrder order) override {
        if (kshellcompletion_setorder_callback) {
            int cbval1 = static_cast<int>(order);
            kshellcompletion_setorder_callback(this, cbval1);
            return;
        }
        KShellCompletion::setOrder(order);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIgnoreCase(bool ignoreCase) override {
        if (kshellcompletion_setignorecase_callback) {
            bool cbval1 = ignoreCase;
            kshellcompletion_setignorecase_callback(this, cbval1);
            return;
        }
        KShellCompletion::setIgnoreCase(ignoreCase);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSoundsEnabled(bool enable) override {
        if (kshellcompletion_setsoundsenabled_callback) {
            bool cbval1 = enable;
            kshellcompletion_setsoundsenabled_callback(this, cbval1);
            return;
        }
        KShellCompletion::setSoundsEnabled(enable);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setItems(const QList<QString>& itemList) override {
        if (kshellcompletion_setitems_callback) {
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
            kshellcompletion_setitems_callback(this, cbval1);
            libqt_free(itemList_arr);
            return;
        }
        KShellCompletion::setItems(itemList);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (kshellcompletion_clear_callback) {
            kshellcompletion_clear_callback(this);
            return;
        }
        KShellCompletion::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kshellcompletion_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kshellcompletion_event_callback(this, cbval1);
            return callback_ret;
        }
        return KShellCompletion::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kshellcompletion_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kshellcompletion_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KShellCompletion::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kshellcompletion_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kshellcompletion_timerevent_callback(this, cbval1);
            return;
        }
        KShellCompletion::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kshellcompletion_childevent_callback) {
            QChildEvent* cbval1 = event;
            kshellcompletion_childevent_callback(this, cbval1);
            return;
        }
        KShellCompletion::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kshellcompletion_customevent_callback) {
            QEvent* cbval1 = event;
            kshellcompletion_customevent_callback(this, cbval1);
            return;
        }
        KShellCompletion::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kshellcompletion_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kshellcompletion_connectnotify_callback(this, cbval1);
            return;
        }
        KShellCompletion::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kshellcompletion_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kshellcompletion_disconnectnotify_callback(this, cbval1);
            return;
        }
        KShellCompletion::disconnectNotify(signal);
    }

    // Friend functions
    friend void KShellCompletion_SuperPostProcessMatches(const KShellCompletion* self, libqt_list /* of libqt_string */ matches);
    friend void KShellCompletion_SuperPostProcessMatches2(const KShellCompletion* self, KCompletionMatches* matches);
    friend void KShellCompletion_SuperTimerEvent(KShellCompletion* self, QTimerEvent* event);
    friend void KShellCompletion_SuperChildEvent(KShellCompletion* self, QChildEvent* event);
    friend void KShellCompletion_SuperCustomEvent(KShellCompletion* self, QEvent* event);
    friend void KShellCompletion_SuperConnectNotify(KShellCompletion* self, const QMetaMethod* signal);
    friend void KShellCompletion_SuperDisconnectNotify(KShellCompletion* self, const QMetaMethod* signal);
};

#endif
