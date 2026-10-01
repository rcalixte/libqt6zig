#pragma once
#ifndef EXTRAS_KCOMPLETION_LIBKCOMPLETION_HXX
#define EXTRAS_KCOMPLETION_LIBKCOMPLETION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCompletion
class VirtualKCompletion final : public KCompletion {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCompletion_MetaObject_Callback = QMetaObject* (*)(const KCompletion*);
    using KCompletion_Metacast_Callback = void* (*)(KCompletion*, const char*);
    using KCompletion_Metacall_Callback = int (*)(KCompletion*, int, int, void**);
    using KCompletion_LastMatch_Callback = const char* (*)(const KCompletion*);
    using KCompletion_SetCompletionMode_Callback = void (*)(KCompletion*, int);
    using KCompletion_SetOrder_Callback = void (*)(KCompletion*, int);
    using KCompletion_SetIgnoreCase_Callback = void (*)(KCompletion*, bool);
    using KCompletion_SetSoundsEnabled_Callback = void (*)(KCompletion*, bool);
    using KCompletion_MakeCompletion_Callback = const char* (*)(KCompletion*, const char*);
    using KCompletion_SetItems_Callback = void (*)(KCompletion*, const char**);
    using KCompletion_Clear_Callback = void (*)(KCompletion*);
    using KCompletion_PostProcessMatches_Callback = void (*)(const KCompletion*, const char**);
    using KCompletion_PostProcessMatches2_Callback = void (*)(const KCompletion*, KCompletionMatches*);
    using KCompletion_Event_Callback = bool (*)(KCompletion*, QEvent*);
    using KCompletion_EventFilter_Callback = bool (*)(KCompletion*, QObject*, QEvent*);
    using KCompletion_TimerEvent_Callback = void (*)(KCompletion*, QTimerEvent*);
    using KCompletion_ChildEvent_Callback = void (*)(KCompletion*, QChildEvent*);
    using KCompletion_CustomEvent_Callback = void (*)(KCompletion*, QEvent*);
    using KCompletion_ConnectNotify_Callback = void (*)(KCompletion*, QMetaMethod*);
    using KCompletion_DisconnectNotify_Callback = void (*)(KCompletion*, QMetaMethod*);
    using KCompletion::isSignalConnected;
    using KCompletion::receivers;
    using KCompletion::sender;
    using KCompletion::senderSignalIndex;
    using KCompletion::setShouldAutoSuggest;

    // Instance callback storage
    KCompletion_MetaObject_Callback kcompletion_metaobject_callback = nullptr;
    KCompletion_Metacast_Callback kcompletion_metacast_callback = nullptr;
    KCompletion_Metacall_Callback kcompletion_metacall_callback = nullptr;
    KCompletion_LastMatch_Callback kcompletion_lastmatch_callback = nullptr;
    KCompletion_SetCompletionMode_Callback kcompletion_setcompletionmode_callback = nullptr;
    KCompletion_SetOrder_Callback kcompletion_setorder_callback = nullptr;
    KCompletion_SetIgnoreCase_Callback kcompletion_setignorecase_callback = nullptr;
    KCompletion_SetSoundsEnabled_Callback kcompletion_setsoundsenabled_callback = nullptr;
    KCompletion_MakeCompletion_Callback kcompletion_makecompletion_callback = nullptr;
    KCompletion_SetItems_Callback kcompletion_setitems_callback = nullptr;
    KCompletion_Clear_Callback kcompletion_clear_callback = nullptr;
    KCompletion_PostProcessMatches_Callback kcompletion_postprocessmatches_callback = nullptr;
    KCompletion_PostProcessMatches2_Callback kcompletion_postprocessmatches2_callback = nullptr;
    KCompletion_Event_Callback kcompletion_event_callback = nullptr;
    KCompletion_EventFilter_Callback kcompletion_eventfilter_callback = nullptr;
    KCompletion_TimerEvent_Callback kcompletion_timerevent_callback = nullptr;
    KCompletion_ChildEvent_Callback kcompletion_childevent_callback = nullptr;
    KCompletion_CustomEvent_Callback kcompletion_customevent_callback = nullptr;
    KCompletion_ConnectNotify_Callback kcompletion_connectnotify_callback = nullptr;
    KCompletion_DisconnectNotify_Callback kcompletion_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KCompletion {
        using KCompletion::childEvent;
        using KCompletion::connectNotify;
        using KCompletion::customEvent;
        using KCompletion::disconnectNotify;
        using KCompletion::postProcessMatches;
        using KCompletion::timerEvent;
    };

    VirtualKCompletion() : KCompletion() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcompletion_metaobject_callback) {
            QMetaObject* callback_ret = kcompletion_metaobject_callback(this);
            return callback_ret;
        }
        return KCompletion::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcompletion_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcompletion_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KCompletion::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcompletion_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcompletion_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCompletion::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const QString& lastMatch() const override {
        if (kcompletion_lastmatch_callback) {
            const char* callback_ret = kcompletion_lastmatch_callback(this);
            QString* callback_ret_QString = new QString(QString::fromUtf8(callback_ret));
            return *callback_ret_QString;
        }
        return KCompletion::lastMatch();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionMode(KCompletion::CompletionMode mode) override {
        if (kcompletion_setcompletionmode_callback) {
            int cbval1 = static_cast<int>(mode);
            kcompletion_setcompletionmode_callback(this, cbval1);
            return;
        }
        KCompletion::setCompletionMode(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOrder(KCompletion::CompOrder order) override {
        if (kcompletion_setorder_callback) {
            int cbval1 = static_cast<int>(order);
            kcompletion_setorder_callback(this, cbval1);
            return;
        }
        KCompletion::setOrder(order);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIgnoreCase(bool ignoreCase) override {
        if (kcompletion_setignorecase_callback) {
            bool cbval1 = ignoreCase;
            kcompletion_setignorecase_callback(this, cbval1);
            return;
        }
        KCompletion::setIgnoreCase(ignoreCase);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSoundsEnabled(bool enable) override {
        if (kcompletion_setsoundsenabled_callback) {
            bool cbval1 = enable;
            kcompletion_setsoundsenabled_callback(this, cbval1);
            return;
        }
        KCompletion::setSoundsEnabled(enable);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString makeCompletion(const QString& string) override {
        if (kcompletion_makecompletion_callback) {
            const auto string_ret = string;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray string_b = string_ret.toUtf8();
            auto string_str_len = string_b.length();
            const char* string_str = static_cast<const char*>(malloc(string_str_len + 1));
            memcpy((void*)string_str, string_b.data(), string_str_len);
            ((char*)string_str)[string_str_len] = '\0';
            const char* cbval1 = string_str;
            const char* callback_ret = kcompletion_makecompletion_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(string_str);
            return callback_ret_QString;
        }
        return KCompletion::makeCompletion(string);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setItems(const QList<QString>& itemList) override {
        if (kcompletion_setitems_callback) {
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
            kcompletion_setitems_callback(this, cbval1);
            libqt_free(itemList_arr);
            return;
        }
        KCompletion::setItems(itemList);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (kcompletion_clear_callback) {
            kcompletion_clear_callback(this);
            return;
        }
        KCompletion::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual void postProcessMatches(QList<QString>* matchList) const override {
        if (kcompletion_postprocessmatches_callback) {
            QList<QString>* matchList_ret = matchList;
            // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
            const char** matchList_arr = static_cast<const char**>(malloc(sizeof(const char*) * (matchList_ret->size() + 1)));
            for (qsizetype i = 0; i < matchList_ret->size(); ++i) {
                QByteArray matchList_b = (*matchList_ret)[i].toUtf8();
                auto matchList_str_len = matchList_b.length();
                char* matchList_str = static_cast<char*>(malloc(matchList_str_len + 1));
                memcpy(matchList_str, matchList_b.data(), matchList_str_len);
                matchList_str[matchList_str_len] = '\0';
                matchList_arr[i] = matchList_str;
            }
            // Append sentinel null terminator to the list
            matchList_arr[matchList_ret->size()] = nullptr;
            const char** cbval1 = matchList_arr;
            kcompletion_postprocessmatches_callback(this, cbval1);
            libqt_free(matchList_arr);
            return;
        }
        KCompletion::postProcessMatches(matchList);
    }

    // Virtual method for C ABI access and custom callback
    virtual void postProcessMatches(KCompletionMatches* matches) const override {
        if (kcompletion_postprocessmatches2_callback) {
            KCompletionMatches* cbval1 = matches;
            kcompletion_postprocessmatches2_callback(this, cbval1);
            return;
        }
        KCompletion::postProcessMatches(matches);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcompletion_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcompletion_event_callback(this, cbval1);
            return callback_ret;
        }
        return KCompletion::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcompletion_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcompletion_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCompletion::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcompletion_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcompletion_timerevent_callback(this, cbval1);
            return;
        }
        KCompletion::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcompletion_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcompletion_childevent_callback(this, cbval1);
            return;
        }
        KCompletion::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcompletion_customevent_callback) {
            QEvent* cbval1 = event;
            kcompletion_customevent_callback(this, cbval1);
            return;
        }
        KCompletion::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcompletion_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcompletion_connectnotify_callback(this, cbval1);
            return;
        }
        KCompletion::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcompletion_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcompletion_disconnectnotify_callback(this, cbval1);
            return;
        }
        KCompletion::disconnectNotify(signal);
    }

    // Friend functions
    friend void KCompletion_SuperPostProcessMatches(const KCompletion* self, libqt_list /* of libqt_string */ matchList);
    friend void KCompletion_SuperPostProcessMatches2(const KCompletion* self, KCompletionMatches* matches);
    friend void KCompletion_SuperTimerEvent(KCompletion* self, QTimerEvent* event);
    friend void KCompletion_SuperChildEvent(KCompletion* self, QChildEvent* event);
    friend void KCompletion_SuperCustomEvent(KCompletion* self, QEvent* event);
    friend void KCompletion_SuperConnectNotify(KCompletion* self, const QMetaMethod* signal);
    friend void KCompletion_SuperDisconnectNotify(KCompletion* self, const QMetaMethod* signal);
};

#endif
