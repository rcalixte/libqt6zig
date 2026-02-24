#pragma once
#ifndef SRC_EXTRAS_KCOMPLETIONC_LIBVIRTUALKCOMPLETION_H
#define SRC_EXTRAS_KCOMPLETIONC_LIBVIRTUALKCOMPLETION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCompletion so that we can call protected methods
class VirtualKCompletion final : public KCompletion {

  public:
    // Virtual class boolean flag
    bool isVirtualKCompletion = true;

    // Virtual class public types (including callbacks)
    using KCompletion_MetaObject_Callback = QMetaObject* (*)();
    using KCompletion_Metacast_Callback = void* (*)(KCompletion*, const char*);
    using KCompletion_Metacall_Callback = int (*)(KCompletion*, int, int, void**);
    using KCompletion_LastMatch_Callback = const char* (*)();
    using KCompletion_SetCompletionMode_Callback = void (*)(KCompletion*, int);
    using KCompletion_SetOrder_Callback = void (*)(KCompletion*, int);
    using KCompletion_SetIgnoreCase_Callback = void (*)(KCompletion*, bool);
    using KCompletion_SetSoundsEnabled_Callback = void (*)(KCompletion*, bool);
    using KCompletion_MakeCompletion_Callback = const char* (*)(KCompletion*, const char*);
    using KCompletion_SetItems_Callback = void (*)(KCompletion*, const char**);
    using KCompletion_Clear_Callback = void (*)();
    using KCompletion_PostProcessMatches_Callback = void (*)(const KCompletion*, const char**);
    using KCompletion_PostProcessMatches2_Callback = void (*)(const KCompletion*, KCompletionMatches*);
    using KCompletion_Event_Callback = bool (*)(KCompletion*, QEvent*);
    using KCompletion_EventFilter_Callback = bool (*)(KCompletion*, QObject*, QEvent*);
    using KCompletion_TimerEvent_Callback = void (*)(KCompletion*, QTimerEvent*);
    using KCompletion_ChildEvent_Callback = void (*)(KCompletion*, QChildEvent*);
    using KCompletion_CustomEvent_Callback = void (*)(KCompletion*, QEvent*);
    using KCompletion_ConnectNotify_Callback = void (*)(KCompletion*, QMetaMethod*);
    using KCompletion_DisconnectNotify_Callback = void (*)(KCompletion*, QMetaMethod*);
    using KCompletion_SetShouldAutoSuggest_Callback = void (*)(KCompletion*, bool);
    using KCompletion_Sender_Callback = QObject* (*)();
    using KCompletion_SenderSignalIndex_Callback = int (*)();
    using KCompletion_Receivers_Callback = int (*)(const KCompletion*, const char*);
    using KCompletion_IsSignalConnected_Callback = bool (*)(const KCompletion*, QMetaMethod*);

  protected:
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
    KCompletion_SetShouldAutoSuggest_Callback kcompletion_setshouldautosuggest_callback = nullptr;
    KCompletion_Sender_Callback kcompletion_sender_callback = nullptr;
    KCompletion_SenderSignalIndex_Callback kcompletion_sendersignalindex_callback = nullptr;
    KCompletion_Receivers_Callback kcompletion_receivers_callback = nullptr;
    KCompletion_IsSignalConnected_Callback kcompletion_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kcompletion_metaobject_isbase = false;
    mutable bool kcompletion_metacast_isbase = false;
    mutable bool kcompletion_metacall_isbase = false;
    mutable bool kcompletion_lastmatch_isbase = false;
    mutable bool kcompletion_setcompletionmode_isbase = false;
    mutable bool kcompletion_setorder_isbase = false;
    mutable bool kcompletion_setignorecase_isbase = false;
    mutable bool kcompletion_setsoundsenabled_isbase = false;
    mutable bool kcompletion_makecompletion_isbase = false;
    mutable bool kcompletion_setitems_isbase = false;
    mutable bool kcompletion_clear_isbase = false;
    mutable bool kcompletion_postprocessmatches_isbase = false;
    mutable bool kcompletion_postprocessmatches2_isbase = false;
    mutable bool kcompletion_event_isbase = false;
    mutable bool kcompletion_eventfilter_isbase = false;
    mutable bool kcompletion_timerevent_isbase = false;
    mutable bool kcompletion_childevent_isbase = false;
    mutable bool kcompletion_customevent_isbase = false;
    mutable bool kcompletion_connectnotify_isbase = false;
    mutable bool kcompletion_disconnectnotify_isbase = false;
    mutable bool kcompletion_setshouldautosuggest_isbase = false;
    mutable bool kcompletion_sender_isbase = false;
    mutable bool kcompletion_sendersignalindex_isbase = false;
    mutable bool kcompletion_receivers_isbase = false;
    mutable bool kcompletion_issignalconnected_isbase = false;

  public:
    VirtualKCompletion() : KCompletion() {};

    ~VirtualKCompletion() {
        kcompletion_metaobject_callback = nullptr;
        kcompletion_metacast_callback = nullptr;
        kcompletion_metacall_callback = nullptr;
        kcompletion_lastmatch_callback = nullptr;
        kcompletion_setcompletionmode_callback = nullptr;
        kcompletion_setorder_callback = nullptr;
        kcompletion_setignorecase_callback = nullptr;
        kcompletion_setsoundsenabled_callback = nullptr;
        kcompletion_makecompletion_callback = nullptr;
        kcompletion_setitems_callback = nullptr;
        kcompletion_clear_callback = nullptr;
        kcompletion_postprocessmatches_callback = nullptr;
        kcompletion_postprocessmatches2_callback = nullptr;
        kcompletion_event_callback = nullptr;
        kcompletion_eventfilter_callback = nullptr;
        kcompletion_timerevent_callback = nullptr;
        kcompletion_childevent_callback = nullptr;
        kcompletion_customevent_callback = nullptr;
        kcompletion_connectnotify_callback = nullptr;
        kcompletion_disconnectnotify_callback = nullptr;
        kcompletion_setshouldautosuggest_callback = nullptr;
        kcompletion_sender_callback = nullptr;
        kcompletion_sendersignalindex_callback = nullptr;
        kcompletion_receivers_callback = nullptr;
        kcompletion_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKCompletion_MetaObject_Callback(KCompletion_MetaObject_Callback cb) { kcompletion_metaobject_callback = cb; }
    inline void setKCompletion_Metacast_Callback(KCompletion_Metacast_Callback cb) { kcompletion_metacast_callback = cb; }
    inline void setKCompletion_Metacall_Callback(KCompletion_Metacall_Callback cb) { kcompletion_metacall_callback = cb; }
    inline void setKCompletion_LastMatch_Callback(KCompletion_LastMatch_Callback cb) { kcompletion_lastmatch_callback = cb; }
    inline void setKCompletion_SetCompletionMode_Callback(KCompletion_SetCompletionMode_Callback cb) { kcompletion_setcompletionmode_callback = cb; }
    inline void setKCompletion_SetOrder_Callback(KCompletion_SetOrder_Callback cb) { kcompletion_setorder_callback = cb; }
    inline void setKCompletion_SetIgnoreCase_Callback(KCompletion_SetIgnoreCase_Callback cb) { kcompletion_setignorecase_callback = cb; }
    inline void setKCompletion_SetSoundsEnabled_Callback(KCompletion_SetSoundsEnabled_Callback cb) { kcompletion_setsoundsenabled_callback = cb; }
    inline void setKCompletion_MakeCompletion_Callback(KCompletion_MakeCompletion_Callback cb) { kcompletion_makecompletion_callback = cb; }
    inline void setKCompletion_SetItems_Callback(KCompletion_SetItems_Callback cb) { kcompletion_setitems_callback = cb; }
    inline void setKCompletion_Clear_Callback(KCompletion_Clear_Callback cb) { kcompletion_clear_callback = cb; }
    inline void setKCompletion_PostProcessMatches_Callback(KCompletion_PostProcessMatches_Callback cb) { kcompletion_postprocessmatches_callback = cb; }
    inline void setKCompletion_PostProcessMatches2_Callback(KCompletion_PostProcessMatches2_Callback cb) { kcompletion_postprocessmatches2_callback = cb; }
    inline void setKCompletion_Event_Callback(KCompletion_Event_Callback cb) { kcompletion_event_callback = cb; }
    inline void setKCompletion_EventFilter_Callback(KCompletion_EventFilter_Callback cb) { kcompletion_eventfilter_callback = cb; }
    inline void setKCompletion_TimerEvent_Callback(KCompletion_TimerEvent_Callback cb) { kcompletion_timerevent_callback = cb; }
    inline void setKCompletion_ChildEvent_Callback(KCompletion_ChildEvent_Callback cb) { kcompletion_childevent_callback = cb; }
    inline void setKCompletion_CustomEvent_Callback(KCompletion_CustomEvent_Callback cb) { kcompletion_customevent_callback = cb; }
    inline void setKCompletion_ConnectNotify_Callback(KCompletion_ConnectNotify_Callback cb) { kcompletion_connectnotify_callback = cb; }
    inline void setKCompletion_DisconnectNotify_Callback(KCompletion_DisconnectNotify_Callback cb) { kcompletion_disconnectnotify_callback = cb; }
    inline void setKCompletion_SetShouldAutoSuggest_Callback(KCompletion_SetShouldAutoSuggest_Callback cb) { kcompletion_setshouldautosuggest_callback = cb; }
    inline void setKCompletion_Sender_Callback(KCompletion_Sender_Callback cb) { kcompletion_sender_callback = cb; }
    inline void setKCompletion_SenderSignalIndex_Callback(KCompletion_SenderSignalIndex_Callback cb) { kcompletion_sendersignalindex_callback = cb; }
    inline void setKCompletion_Receivers_Callback(KCompletion_Receivers_Callback cb) { kcompletion_receivers_callback = cb; }
    inline void setKCompletion_IsSignalConnected_Callback(KCompletion_IsSignalConnected_Callback cb) { kcompletion_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKCompletion_MetaObject_IsBase(bool value) const { kcompletion_metaobject_isbase = value; }
    inline void setKCompletion_Metacast_IsBase(bool value) const { kcompletion_metacast_isbase = value; }
    inline void setKCompletion_Metacall_IsBase(bool value) const { kcompletion_metacall_isbase = value; }
    inline void setKCompletion_LastMatch_IsBase(bool value) const { kcompletion_lastmatch_isbase = value; }
    inline void setKCompletion_SetCompletionMode_IsBase(bool value) const { kcompletion_setcompletionmode_isbase = value; }
    inline void setKCompletion_SetOrder_IsBase(bool value) const { kcompletion_setorder_isbase = value; }
    inline void setKCompletion_SetIgnoreCase_IsBase(bool value) const { kcompletion_setignorecase_isbase = value; }
    inline void setKCompletion_SetSoundsEnabled_IsBase(bool value) const { kcompletion_setsoundsenabled_isbase = value; }
    inline void setKCompletion_MakeCompletion_IsBase(bool value) const { kcompletion_makecompletion_isbase = value; }
    inline void setKCompletion_SetItems_IsBase(bool value) const { kcompletion_setitems_isbase = value; }
    inline void setKCompletion_Clear_IsBase(bool value) const { kcompletion_clear_isbase = value; }
    inline void setKCompletion_PostProcessMatches_IsBase(bool value) const { kcompletion_postprocessmatches_isbase = value; }
    inline void setKCompletion_PostProcessMatches2_IsBase(bool value) const { kcompletion_postprocessmatches2_isbase = value; }
    inline void setKCompletion_Event_IsBase(bool value) const { kcompletion_event_isbase = value; }
    inline void setKCompletion_EventFilter_IsBase(bool value) const { kcompletion_eventfilter_isbase = value; }
    inline void setKCompletion_TimerEvent_IsBase(bool value) const { kcompletion_timerevent_isbase = value; }
    inline void setKCompletion_ChildEvent_IsBase(bool value) const { kcompletion_childevent_isbase = value; }
    inline void setKCompletion_CustomEvent_IsBase(bool value) const { kcompletion_customevent_isbase = value; }
    inline void setKCompletion_ConnectNotify_IsBase(bool value) const { kcompletion_connectnotify_isbase = value; }
    inline void setKCompletion_DisconnectNotify_IsBase(bool value) const { kcompletion_disconnectnotify_isbase = value; }
    inline void setKCompletion_SetShouldAutoSuggest_IsBase(bool value) const { kcompletion_setshouldautosuggest_isbase = value; }
    inline void setKCompletion_Sender_IsBase(bool value) const { kcompletion_sender_isbase = value; }
    inline void setKCompletion_SenderSignalIndex_IsBase(bool value) const { kcompletion_sendersignalindex_isbase = value; }
    inline void setKCompletion_Receivers_IsBase(bool value) const { kcompletion_receivers_isbase = value; }
    inline void setKCompletion_IsSignalConnected_IsBase(bool value) const { kcompletion_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcompletion_metaobject_isbase) {
            kcompletion_metaobject_isbase = false;
            return KCompletion::metaObject();
        } else if (kcompletion_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = kcompletion_metaobject_callback();
            return callback_ret;
        } else {
            return KCompletion::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcompletion_metacast_isbase) {
            kcompletion_metacast_isbase = false;
            return KCompletion::qt_metacast(param1);
        } else if (kcompletion_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = kcompletion_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCompletion::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcompletion_metacall_isbase) {
            kcompletion_metacall_isbase = false;
            return KCompletion::qt_metacall(param1, param2, param3);
        } else if (kcompletion_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcompletion_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KCompletion::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const QString& lastMatch() const override {
        if (kcompletion_lastmatch_isbase) {
            kcompletion_lastmatch_isbase = false;
            return KCompletion::lastMatch();
        } else if (kcompletion_lastmatch_callback != nullptr) {
            const char* callback_ret = kcompletion_lastmatch_callback();
            QString* callback_ret_QString = new QString(QString::fromUtf8(callback_ret));
            return *callback_ret_QString;
        } else {
            return KCompletion::lastMatch();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompletionMode(KCompletion::CompletionMode mode) override {
        if (kcompletion_setcompletionmode_isbase) {
            kcompletion_setcompletionmode_isbase = false;
            KCompletion::setCompletionMode(mode);
        } else if (kcompletion_setcompletionmode_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            kcompletion_setcompletionmode_callback(this, cbval1);
        } else {
            KCompletion::setCompletionMode(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOrder(KCompletion::CompOrder order) override {
        if (kcompletion_setorder_isbase) {
            kcompletion_setorder_isbase = false;
            KCompletion::setOrder(order);
        } else if (kcompletion_setorder_callback != nullptr) {
            int cbval1 = static_cast<int>(order);

            kcompletion_setorder_callback(this, cbval1);
        } else {
            KCompletion::setOrder(order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIgnoreCase(bool ignoreCase) override {
        if (kcompletion_setignorecase_isbase) {
            kcompletion_setignorecase_isbase = false;
            KCompletion::setIgnoreCase(ignoreCase);
        } else if (kcompletion_setignorecase_callback != nullptr) {
            bool cbval1 = ignoreCase;

            kcompletion_setignorecase_callback(this, cbval1);
        } else {
            KCompletion::setIgnoreCase(ignoreCase);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSoundsEnabled(bool enable) override {
        if (kcompletion_setsoundsenabled_isbase) {
            kcompletion_setsoundsenabled_isbase = false;
            KCompletion::setSoundsEnabled(enable);
        } else if (kcompletion_setsoundsenabled_callback != nullptr) {
            bool cbval1 = enable;

            kcompletion_setsoundsenabled_callback(this, cbval1);
        } else {
            KCompletion::setSoundsEnabled(enable);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString makeCompletion(const QString& stringVal) override {
        if (kcompletion_makecompletion_isbase) {
            kcompletion_makecompletion_isbase = false;
            return KCompletion::makeCompletion(stringVal);
        } else if (kcompletion_makecompletion_callback != nullptr) {
            const QString stringVal_ret = stringVal;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray stringVal_b = stringVal_ret.toUtf8();
            auto stringVal_str_len = stringVal_b.length();
            const char* stringVal_str = static_cast<const char*>(malloc(stringVal_str_len + 1));
            memcpy((void*)stringVal_str, stringVal_b.data(), stringVal_str_len);
            ((char*)stringVal_str)[stringVal_str_len] = '\0';
            const char* cbval1 = stringVal_str;

            const char* callback_ret = kcompletion_makecompletion_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(stringVal_str);
            return callback_ret_QString;
        } else {
            return KCompletion::makeCompletion(stringVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setItems(const QList<QString>& itemList) override {
        if (kcompletion_setitems_isbase) {
            kcompletion_setitems_isbase = false;
            KCompletion::setItems(itemList);
        } else if (kcompletion_setitems_callback != nullptr) {
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
        } else {
            KCompletion::setItems(itemList);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (kcompletion_clear_isbase) {
            kcompletion_clear_isbase = false;
            KCompletion::clear();
        } else if (kcompletion_clear_callback != nullptr) {
            kcompletion_clear_callback();
        } else {
            KCompletion::clear();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void postProcessMatches(QList<QString>* matchList) const override {
        if (kcompletion_postprocessmatches_isbase) {
            kcompletion_postprocessmatches_isbase = false;
            KCompletion::postProcessMatches(matchList);
        } else if (kcompletion_postprocessmatches_callback != nullptr) {
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
        } else {
            KCompletion::postProcessMatches(matchList);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void postProcessMatches(KCompletionMatches* matches) const override {
        if (kcompletion_postprocessmatches2_isbase) {
            kcompletion_postprocessmatches2_isbase = false;
            KCompletion::postProcessMatches(matches);
        } else if (kcompletion_postprocessmatches2_callback != nullptr) {
            KCompletionMatches* cbval1 = matches;

            kcompletion_postprocessmatches2_callback(this, cbval1);
        } else {
            KCompletion::postProcessMatches(matches);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcompletion_event_isbase) {
            kcompletion_event_isbase = false;
            return KCompletion::event(event);
        } else if (kcompletion_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kcompletion_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCompletion::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcompletion_eventfilter_isbase) {
            kcompletion_eventfilter_isbase = false;
            return KCompletion::eventFilter(watched, event);
        } else if (kcompletion_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kcompletion_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KCompletion::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcompletion_timerevent_isbase) {
            kcompletion_timerevent_isbase = false;
            KCompletion::timerEvent(event);
        } else if (kcompletion_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kcompletion_timerevent_callback(this, cbval1);
        } else {
            KCompletion::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcompletion_childevent_isbase) {
            kcompletion_childevent_isbase = false;
            KCompletion::childEvent(event);
        } else if (kcompletion_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcompletion_childevent_callback(this, cbval1);
        } else {
            KCompletion::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcompletion_customevent_isbase) {
            kcompletion_customevent_isbase = false;
            KCompletion::customEvent(event);
        } else if (kcompletion_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcompletion_customevent_callback(this, cbval1);
        } else {
            KCompletion::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcompletion_connectnotify_isbase) {
            kcompletion_connectnotify_isbase = false;
            KCompletion::connectNotify(signal);
        } else if (kcompletion_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcompletion_connectnotify_callback(this, cbval1);
        } else {
            KCompletion::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcompletion_disconnectnotify_isbase) {
            kcompletion_disconnectnotify_isbase = false;
            KCompletion::disconnectNotify(signal);
        } else if (kcompletion_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcompletion_disconnectnotify_callback(this, cbval1);
        } else {
            KCompletion::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setShouldAutoSuggest(bool shouldAutosuggest) {
        if (kcompletion_setshouldautosuggest_isbase) {
            kcompletion_setshouldautosuggest_isbase = false;
            KCompletion::setShouldAutoSuggest(shouldAutosuggest);
        } else if (kcompletion_setshouldautosuggest_callback != nullptr) {
            bool cbval1 = shouldAutosuggest;

            kcompletion_setshouldautosuggest_callback(this, cbval1);
        } else {
            KCompletion::setShouldAutoSuggest(shouldAutosuggest);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcompletion_sender_isbase) {
            kcompletion_sender_isbase = false;
            return KCompletion::sender();
        } else if (kcompletion_sender_callback != nullptr) {
            QObject* callback_ret = kcompletion_sender_callback();
            return callback_ret;
        } else {
            return KCompletion::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcompletion_sendersignalindex_isbase) {
            kcompletion_sendersignalindex_isbase = false;
            return KCompletion::senderSignalIndex();
        } else if (kcompletion_sendersignalindex_callback != nullptr) {
            int callback_ret = kcompletion_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCompletion::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcompletion_receivers_isbase) {
            kcompletion_receivers_isbase = false;
            return KCompletion::receivers(signal);
        } else if (kcompletion_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcompletion_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCompletion::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcompletion_issignalconnected_isbase) {
            kcompletion_issignalconnected_isbase = false;
            return KCompletion::isSignalConnected(signal);
        } else if (kcompletion_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcompletion_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCompletion::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KCompletion_PostProcessMatches(const KCompletion* self, libqt_list /* of libqt_string */ matchList);
    friend void KCompletion_SuperPostProcessMatches(const KCompletion* self, libqt_list /* of libqt_string */ matchList);
    friend void KCompletion_PostProcessMatches2(const KCompletion* self, KCompletionMatches* matches);
    friend void KCompletion_SuperPostProcessMatches2(const KCompletion* self, KCompletionMatches* matches);
    friend void KCompletion_TimerEvent(KCompletion* self, QTimerEvent* event);
    friend void KCompletion_SuperTimerEvent(KCompletion* self, QTimerEvent* event);
    friend void KCompletion_ChildEvent(KCompletion* self, QChildEvent* event);
    friend void KCompletion_SuperChildEvent(KCompletion* self, QChildEvent* event);
    friend void KCompletion_CustomEvent(KCompletion* self, QEvent* event);
    friend void KCompletion_SuperCustomEvent(KCompletion* self, QEvent* event);
    friend void KCompletion_ConnectNotify(KCompletion* self, const QMetaMethod* signal);
    friend void KCompletion_SuperConnectNotify(KCompletion* self, const QMetaMethod* signal);
    friend void KCompletion_DisconnectNotify(KCompletion* self, const QMetaMethod* signal);
    friend void KCompletion_SuperDisconnectNotify(KCompletion* self, const QMetaMethod* signal);
    friend void KCompletion_SetShouldAutoSuggest(KCompletion* self, bool shouldAutosuggest);
    friend void KCompletion_SuperSetShouldAutoSuggest(KCompletion* self, bool shouldAutosuggest);
    friend QObject* KCompletion_Sender(const KCompletion* self);
    friend QObject* KCompletion_SuperSender(const KCompletion* self);
    friend int KCompletion_SenderSignalIndex(const KCompletion* self);
    friend int KCompletion_SuperSenderSignalIndex(const KCompletion* self);
    friend int KCompletion_Receivers(const KCompletion* self, const char* signal);
    friend int KCompletion_SuperReceivers(const KCompletion* self, const char* signal);
    friend bool KCompletion_IsSignalConnected(const KCompletion* self, const QMetaMethod* signal);
    friend bool KCompletion_SuperIsSignalConnected(const KCompletion* self, const QMetaMethod* signal);
};

#endif
