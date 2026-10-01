#pragma once
#ifndef EXTRAS_KNEWSTUFF_LIBPROVIDER_HXX
#define EXTRAS_KNEWSTUFF_LIBPROVIDER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNSCore::Provider
class VirtualKNSCoreProvider : public KNSCore::Provider {
  public:
    // Virtual class public types (including callbacks and access types)
    using KNSCore__Provider_MetaObject_Callback = QMetaObject* (*)(const KNSCore__Provider*);
    using KNSCore__Provider_Metacast_Callback = void* (*)(KNSCore__Provider*, const char*);
    using KNSCore__Provider_Metacall_Callback = int (*)(KNSCore__Provider*, int, int, void**);
    using KNSCore__Provider_Id_Callback = const char* (*)(const KNSCore__Provider*);
    using KNSCore__Provider_SetProviderXML_Callback = bool (*)(KNSCore__Provider*, QDomElement*);
    using KNSCore__Provider_IsInitialized_Callback = bool (*)(const KNSCore__Provider*);
    using KNSCore__Provider_SetCachedEntries_Callback = void (*)(KNSCore__Provider*, libqt_list /* of KNSCore__Entry* */);
    using KNSCore__Provider_Name_Callback = const char* (*)(const KNSCore__Provider*);
    using KNSCore__Provider_Icon_Callback = QUrl* (*)(const KNSCore__Provider*);
    using KNSCore__Provider_LoadEntries_Callback = void (*)(KNSCore__Provider*, KNSCore__Provider__SearchRequest*);
    using KNSCore__Provider_LoadEntryDetails_Callback = void (*)(KNSCore__Provider*, KNSCore__Entry*);
    using KNSCore__Provider_LoadPayloadLink_Callback = void (*)(KNSCore__Provider*, KNSCore__Entry*, int);
    using KNSCore__Provider_LoadComments_Callback = void (*)(KNSCore__Provider*, KNSCore__Entry*, int, int);
    using KNSCore__Provider_LoadPerson_Callback = void (*)(KNSCore__Provider*, const char*);
    using KNSCore__Provider_LoadBasics_Callback = void (*)(KNSCore__Provider*);
    using KNSCore__Provider_UserCanVote_Callback = bool (*)(KNSCore__Provider*);
    using KNSCore__Provider_Vote_Callback = void (*)(KNSCore__Provider*, KNSCore__Entry*, unsigned int);
    using KNSCore__Provider_UserCanBecomeFan_Callback = bool (*)(KNSCore__Provider*);
    using KNSCore__Provider_BecomeFan_Callback = void (*)(KNSCore__Provider*, KNSCore__Entry*);
    using KNSCore__Provider_Event_Callback = bool (*)(KNSCore__Provider*, QEvent*);
    using KNSCore__Provider_EventFilter_Callback = bool (*)(KNSCore__Provider*, QObject*, QEvent*);
    using KNSCore__Provider_TimerEvent_Callback = void (*)(KNSCore__Provider*, QTimerEvent*);
    using KNSCore__Provider_ChildEvent_Callback = void (*)(KNSCore__Provider*, QChildEvent*);
    using KNSCore__Provider_CustomEvent_Callback = void (*)(KNSCore__Provider*, QEvent*);
    using KNSCore__Provider_ConnectNotify_Callback = void (*)(KNSCore__Provider*, QMetaMethod*);
    using KNSCore__Provider_DisconnectNotify_Callback = void (*)(KNSCore__Provider*, QMetaMethod*);
    using KNSCore::Provider::isSignalConnected;
    using KNSCore::Provider::receivers;
    using KNSCore::Provider::sender;
    using KNSCore::Provider::senderSignalIndex;
    using KNSCore::Provider::setIcon;
    using KNSCore::Provider::setName;

    // Instance callback storage
    KNSCore__Provider_MetaObject_Callback knscore__provider_metaobject_callback = nullptr;
    KNSCore__Provider_Metacast_Callback knscore__provider_metacast_callback = nullptr;
    KNSCore__Provider_Metacall_Callback knscore__provider_metacall_callback = nullptr;
    KNSCore__Provider_Id_Callback knscore__provider_id_callback = nullptr;
    KNSCore__Provider_SetProviderXML_Callback knscore__provider_setproviderxml_callback = nullptr;
    KNSCore__Provider_IsInitialized_Callback knscore__provider_isinitialized_callback = nullptr;
    KNSCore__Provider_SetCachedEntries_Callback knscore__provider_setcachedentries_callback = nullptr;
    KNSCore__Provider_Name_Callback knscore__provider_name_callback = nullptr;
    KNSCore__Provider_Icon_Callback knscore__provider_icon_callback = nullptr;
    KNSCore__Provider_LoadEntries_Callback knscore__provider_loadentries_callback = nullptr;
    KNSCore__Provider_LoadEntryDetails_Callback knscore__provider_loadentrydetails_callback = nullptr;
    KNSCore__Provider_LoadPayloadLink_Callback knscore__provider_loadpayloadlink_callback = nullptr;
    KNSCore__Provider_LoadComments_Callback knscore__provider_loadcomments_callback = nullptr;
    KNSCore__Provider_LoadPerson_Callback knscore__provider_loadperson_callback = nullptr;
    KNSCore__Provider_LoadBasics_Callback knscore__provider_loadbasics_callback = nullptr;
    KNSCore__Provider_UserCanVote_Callback knscore__provider_usercanvote_callback = nullptr;
    KNSCore__Provider_Vote_Callback knscore__provider_vote_callback = nullptr;
    KNSCore__Provider_UserCanBecomeFan_Callback knscore__provider_usercanbecomefan_callback = nullptr;
    KNSCore__Provider_BecomeFan_Callback knscore__provider_becomefan_callback = nullptr;
    KNSCore__Provider_Event_Callback knscore__provider_event_callback = nullptr;
    KNSCore__Provider_EventFilter_Callback knscore__provider_eventfilter_callback = nullptr;
    KNSCore__Provider_TimerEvent_Callback knscore__provider_timerevent_callback = nullptr;
    KNSCore__Provider_ChildEvent_Callback knscore__provider_childevent_callback = nullptr;
    KNSCore__Provider_CustomEvent_Callback knscore__provider_customevent_callback = nullptr;
    KNSCore__Provider_ConnectNotify_Callback knscore__provider_connectnotify_callback = nullptr;
    KNSCore__Provider_DisconnectNotify_Callback knscore__provider_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KNSCore::Provider {
        using KNSCore::Provider::childEvent;
        using KNSCore::Provider::connectNotify;
        using KNSCore::Provider::customEvent;
        using KNSCore::Provider::disconnectNotify;
        using KNSCore::Provider::timerEvent;
    };

    VirtualKNSCoreProvider() : KNSCore::Provider() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knscore__provider_metaobject_callback) {
            QMetaObject* callback_ret = knscore__provider_metaobject_callback(this);
            return callback_ret;
        }
        return KNSCore__Provider::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knscore__provider_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = knscore__provider_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KNSCore__Provider::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knscore__provider_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = knscore__provider_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNSCore__Provider::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString id() const override {
        if (knscore__provider_id_callback) {
            const char* callback_ret = knscore__provider_id_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KNSCore::Provider::id called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setProviderXML(const QDomElement& xmldata) override {
        if (knscore__provider_setproviderxml_callback) {
            const QDomElement& xmldata_ret = xmldata;
            // Cast returned reference into pointer
            QDomElement* cbval1 = const_cast<QDomElement*>(&xmldata_ret);
            bool callback_ret = knscore__provider_setproviderxml_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KNSCore::Provider::setProviderXML called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isInitialized() const override {
        if (knscore__provider_isinitialized_callback) {
            bool callback_ret = knscore__provider_isinitialized_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KNSCore::Provider::isInitialized called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCachedEntries(const QList<KNSCore::Entry>& cachedEntries) override {
        if (knscore__provider_setcachedentries_callback) {
            const QList<KNSCore::Entry>& cachedEntries_ret = cachedEntries;
            // Convert QList<> from C++ memory to manually-managed C memory
            KNSCore__Entry** cachedEntries_arr = static_cast<KNSCore__Entry**>(malloc(sizeof(KNSCore__Entry*) * (cachedEntries_ret.size())));
            for (qsizetype i = 0; i < cachedEntries_ret.size(); ++i) {
                cachedEntries_arr[i] = new KNSCore::Entry(cachedEntries_ret[i]);
            }
            libqt_list cachedEntries_out;
            cachedEntries_out.len = cachedEntries_ret.size();
            cachedEntries_out.data = static_cast<void*>(cachedEntries_arr);
            libqt_list /* of KNSCore__Entry* */ cbval1 = cachedEntries_out;
            knscore__provider_setcachedentries_callback(this, cbval1);
            free(cachedEntries_arr);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KNSCore::Provider::setCachedEntries called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString name() const override {
        if (knscore__provider_name_callback) {
            const char* callback_ret = knscore__provider_name_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KNSCore__Provider::name();
    }

    // Virtual method for C ABI access and custom callback
    virtual QUrl icon() const override {
        if (knscore__provider_icon_callback) {
            QUrl* callback_ret = knscore__provider_icon_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KNSCore__Provider::icon();
    }

    // Virtual method for C ABI access and custom callback
    virtual void loadEntries(const KNSCore::Provider::SearchRequest& request) override {
        if (knscore__provider_loadentries_callback) {
            const KNSCore::Provider::SearchRequest& request_ret = request;
            // Cast returned reference into pointer
            KNSCore__Provider__SearchRequest* cbval1 = const_cast<KNSCore::Provider::SearchRequest*>(&request_ret);
            knscore__provider_loadentries_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KNSCore::Provider::loadEntries called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void loadEntryDetails(const KNSCore::Entry& param1) override {
        if (knscore__provider_loadentrydetails_callback) {
            const KNSCore::Entry& param1_ret = param1;
            // Cast returned reference into pointer
            KNSCore__Entry* cbval1 = const_cast<KNSCore::Entry*>(&param1_ret);
            knscore__provider_loadentrydetails_callback(this, cbval1);
            return;
        }
        KNSCore__Provider::loadEntryDetails(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void loadPayloadLink(const KNSCore::Entry& entry, int linkId) override {
        if (knscore__provider_loadpayloadlink_callback) {
            const KNSCore::Entry& entry_ret = entry;
            // Cast returned reference into pointer
            KNSCore__Entry* cbval1 = const_cast<KNSCore::Entry*>(&entry_ret);
            int cbval2 = linkId;
            knscore__provider_loadpayloadlink_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KNSCore::Provider::loadPayloadLink called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void loadComments(const KNSCore::Entry& param1, int param2, int param3) override {
        if (knscore__provider_loadcomments_callback) {
            const KNSCore::Entry& param1_ret = param1;
            // Cast returned reference into pointer
            KNSCore__Entry* cbval1 = const_cast<KNSCore::Entry*>(&param1_ret);
            int cbval2 = param2;
            int cbval3 = param3;
            knscore__provider_loadcomments_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KNSCore__Provider::loadComments(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void loadPerson(const QString& param1) override {
        if (knscore__provider_loadperson_callback) {
            const auto param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            auto param1_str_len = param1_b.length();
            const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
            memcpy((void*)param1_str, param1_b.data(), param1_str_len);
            ((char*)param1_str)[param1_str_len] = '\0';
            const char* cbval1 = param1_str;
            knscore__provider_loadperson_callback(this, cbval1);
            libqt_free(param1_str);
            return;
        }
        KNSCore__Provider::loadPerson(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void loadBasics() override {
        if (knscore__provider_loadbasics_callback) {
            knscore__provider_loadbasics_callback(this);
            return;
        }
        KNSCore__Provider::loadBasics();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool userCanVote() override {
        if (knscore__provider_usercanvote_callback) {
            bool callback_ret = knscore__provider_usercanvote_callback(this);
            return callback_ret;
        }
        return KNSCore__Provider::userCanVote();
    }

    // Virtual method for C ABI access and custom callback
    virtual void vote(const KNSCore::Entry& param1, uint param2) override {
        if (knscore__provider_vote_callback) {
            const KNSCore::Entry& param1_ret = param1;
            // Cast returned reference into pointer
            KNSCore__Entry* cbval1 = const_cast<KNSCore::Entry*>(&param1_ret);
            unsigned int cbval2 = static_cast<unsigned int>(param2);
            knscore__provider_vote_callback(this, cbval1, cbval2);
            return;
        }
        KNSCore__Provider::vote(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool userCanBecomeFan() override {
        if (knscore__provider_usercanbecomefan_callback) {
            bool callback_ret = knscore__provider_usercanbecomefan_callback(this);
            return callback_ret;
        }
        return KNSCore__Provider::userCanBecomeFan();
    }

    // Virtual method for C ABI access and custom callback
    virtual void becomeFan(const KNSCore::Entry& param1) override {
        if (knscore__provider_becomefan_callback) {
            const KNSCore::Entry& param1_ret = param1;
            // Cast returned reference into pointer
            KNSCore__Entry* cbval1 = const_cast<KNSCore::Entry*>(&param1_ret);
            knscore__provider_becomefan_callback(this, cbval1);
            return;
        }
        KNSCore__Provider::becomeFan(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knscore__provider_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = knscore__provider_event_callback(this, cbval1);
            return callback_ret;
        }
        return KNSCore__Provider::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knscore__provider_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = knscore__provider_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNSCore__Provider::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knscore__provider_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            knscore__provider_timerevent_callback(this, cbval1);
            return;
        }
        KNSCore__Provider::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knscore__provider_childevent_callback) {
            QChildEvent* cbval1 = event;
            knscore__provider_childevent_callback(this, cbval1);
            return;
        }
        KNSCore__Provider::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knscore__provider_customevent_callback) {
            QEvent* cbval1 = event;
            knscore__provider_customevent_callback(this, cbval1);
            return;
        }
        KNSCore__Provider::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knscore__provider_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knscore__provider_connectnotify_callback(this, cbval1);
            return;
        }
        KNSCore__Provider::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knscore__provider_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            knscore__provider_disconnectnotify_callback(this, cbval1);
            return;
        }
        KNSCore__Provider::disconnectNotify(signal);
    }

    // Friend functions
    friend void KNSCore__Provider_SuperTimerEvent(KNSCore::Provider* self, QTimerEvent* event);
    friend void KNSCore__Provider_SuperChildEvent(KNSCore::Provider* self, QChildEvent* event);
    friend void KNSCore__Provider_SuperCustomEvent(KNSCore::Provider* self, QEvent* event);
    friend void KNSCore__Provider_SuperConnectNotify(KNSCore::Provider* self, const QMetaMethod* signal);
    friend void KNSCore__Provider_SuperDisconnectNotify(KNSCore::Provider* self, const QMetaMethod* signal);
};

#endif
