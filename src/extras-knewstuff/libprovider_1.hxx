#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALPROVIDER_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBVIRTUALPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KNSCore::Provider so that we can call protected methods
class VirtualKNSCoreProvider : public KNSCore::Provider {

  public:
    // Virtual class boolean flag
    bool isVirtualKNSCoreProvider = true;

    // Virtual class public types (including callbacks)
    using KNSCore__Provider_MetaObject_Callback = QMetaObject* (*)();
    using KNSCore__Provider_Metacast_Callback = void* (*)(KNSCore__Provider*, const char*);
    using KNSCore__Provider_Metacall_Callback = int (*)(KNSCore__Provider*, int, int, void**);
    using KNSCore__Provider_Id_Callback = const char* (*)();
    using KNSCore__Provider_SetProviderXML_Callback = bool (*)(KNSCore__Provider*, QDomElement*);
    using KNSCore__Provider_IsInitialized_Callback = bool (*)();
    using KNSCore__Provider_SetCachedEntries_Callback = void (*)(KNSCore__Provider*, libqt_list /* of KNSCore__Entry* */);
    using KNSCore__Provider_Name_Callback = const char* (*)();
    using KNSCore__Provider_Icon_Callback = QUrl* (*)();
    using KNSCore__Provider_LoadEntries_Callback = void (*)(KNSCore__Provider*, KNSCore__Provider__SearchRequest*);
    using KNSCore__Provider_LoadEntryDetails_Callback = void (*)(KNSCore__Provider*, KNSCore__Entry*);
    using KNSCore__Provider_LoadPayloadLink_Callback = void (*)(KNSCore__Provider*, KNSCore__Entry*, int);
    using KNSCore__Provider_LoadComments_Callback = void (*)(KNSCore__Provider*, KNSCore__Entry*, int, int);
    using KNSCore__Provider_LoadPerson_Callback = void (*)(KNSCore__Provider*, const char*);
    using KNSCore__Provider_LoadBasics_Callback = void (*)();
    using KNSCore__Provider_UserCanVote_Callback = bool (*)();
    using KNSCore__Provider_Vote_Callback = void (*)(KNSCore__Provider*, KNSCore__Entry*, unsigned int);
    using KNSCore__Provider_UserCanBecomeFan_Callback = bool (*)();
    using KNSCore__Provider_BecomeFan_Callback = void (*)(KNSCore__Provider*, KNSCore__Entry*);
    using KNSCore__Provider_Event_Callback = bool (*)(KNSCore__Provider*, QEvent*);
    using KNSCore__Provider_EventFilter_Callback = bool (*)(KNSCore__Provider*, QObject*, QEvent*);
    using KNSCore__Provider_TimerEvent_Callback = void (*)(KNSCore__Provider*, QTimerEvent*);
    using KNSCore__Provider_ChildEvent_Callback = void (*)(KNSCore__Provider*, QChildEvent*);
    using KNSCore__Provider_CustomEvent_Callback = void (*)(KNSCore__Provider*, QEvent*);
    using KNSCore__Provider_ConnectNotify_Callback = void (*)(KNSCore__Provider*, QMetaMethod*);
    using KNSCore__Provider_DisconnectNotify_Callback = void (*)(KNSCore__Provider*, QMetaMethod*);
    using KNSCore__Provider_SetName_Callback = void (*)(KNSCore__Provider*, const char*);
    using KNSCore__Provider_SetIcon_Callback = void (*)(KNSCore__Provider*, QUrl*);
    using KNSCore__Provider_Sender_Callback = QObject* (*)();
    using KNSCore__Provider_SenderSignalIndex_Callback = int (*)();
    using KNSCore__Provider_Receivers_Callback = int (*)(const KNSCore__Provider*, const char*);
    using KNSCore__Provider_IsSignalConnected_Callback = bool (*)(const KNSCore__Provider*, QMetaMethod*);

  protected:
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
    KNSCore__Provider_SetName_Callback knscore__provider_setname_callback = nullptr;
    KNSCore__Provider_SetIcon_Callback knscore__provider_seticon_callback = nullptr;
    KNSCore__Provider_Sender_Callback knscore__provider_sender_callback = nullptr;
    KNSCore__Provider_SenderSignalIndex_Callback knscore__provider_sendersignalindex_callback = nullptr;
    KNSCore__Provider_Receivers_Callback knscore__provider_receivers_callback = nullptr;
    KNSCore__Provider_IsSignalConnected_Callback knscore__provider_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool knscore__provider_metaobject_isbase = false;
    mutable bool knscore__provider_metacast_isbase = false;
    mutable bool knscore__provider_metacall_isbase = false;
    mutable bool knscore__provider_id_isbase = false;
    mutable bool knscore__provider_setproviderxml_isbase = false;
    mutable bool knscore__provider_isinitialized_isbase = false;
    mutable bool knscore__provider_setcachedentries_isbase = false;
    mutable bool knscore__provider_name_isbase = false;
    mutable bool knscore__provider_icon_isbase = false;
    mutable bool knscore__provider_loadentries_isbase = false;
    mutable bool knscore__provider_loadentrydetails_isbase = false;
    mutable bool knscore__provider_loadpayloadlink_isbase = false;
    mutable bool knscore__provider_loadcomments_isbase = false;
    mutable bool knscore__provider_loadperson_isbase = false;
    mutable bool knscore__provider_loadbasics_isbase = false;
    mutable bool knscore__provider_usercanvote_isbase = false;
    mutable bool knscore__provider_vote_isbase = false;
    mutable bool knscore__provider_usercanbecomefan_isbase = false;
    mutable bool knscore__provider_becomefan_isbase = false;
    mutable bool knscore__provider_event_isbase = false;
    mutable bool knscore__provider_eventfilter_isbase = false;
    mutable bool knscore__provider_timerevent_isbase = false;
    mutable bool knscore__provider_childevent_isbase = false;
    mutable bool knscore__provider_customevent_isbase = false;
    mutable bool knscore__provider_connectnotify_isbase = false;
    mutable bool knscore__provider_disconnectnotify_isbase = false;
    mutable bool knscore__provider_setname_isbase = false;
    mutable bool knscore__provider_seticon_isbase = false;
    mutable bool knscore__provider_sender_isbase = false;
    mutable bool knscore__provider_sendersignalindex_isbase = false;
    mutable bool knscore__provider_receivers_isbase = false;
    mutable bool knscore__provider_issignalconnected_isbase = false;

  public:
    VirtualKNSCoreProvider() : KNSCore::Provider() {};

    // Callback setters
    inline void setKNSCore__Provider_MetaObject_Callback(KNSCore__Provider_MetaObject_Callback cb) { knscore__provider_metaobject_callback = cb; }
    inline void setKNSCore__Provider_Metacast_Callback(KNSCore__Provider_Metacast_Callback cb) { knscore__provider_metacast_callback = cb; }
    inline void setKNSCore__Provider_Metacall_Callback(KNSCore__Provider_Metacall_Callback cb) { knscore__provider_metacall_callback = cb; }
    inline void setKNSCore__Provider_Id_Callback(KNSCore__Provider_Id_Callback cb) { knscore__provider_id_callback = cb; }
    inline void setKNSCore__Provider_SetProviderXML_Callback(KNSCore__Provider_SetProviderXML_Callback cb) { knscore__provider_setproviderxml_callback = cb; }
    inline void setKNSCore__Provider_IsInitialized_Callback(KNSCore__Provider_IsInitialized_Callback cb) { knscore__provider_isinitialized_callback = cb; }
    inline void setKNSCore__Provider_SetCachedEntries_Callback(KNSCore__Provider_SetCachedEntries_Callback cb) { knscore__provider_setcachedentries_callback = cb; }
    inline void setKNSCore__Provider_Name_Callback(KNSCore__Provider_Name_Callback cb) { knscore__provider_name_callback = cb; }
    inline void setKNSCore__Provider_Icon_Callback(KNSCore__Provider_Icon_Callback cb) { knscore__provider_icon_callback = cb; }
    inline void setKNSCore__Provider_LoadEntries_Callback(KNSCore__Provider_LoadEntries_Callback cb) { knscore__provider_loadentries_callback = cb; }
    inline void setKNSCore__Provider_LoadEntryDetails_Callback(KNSCore__Provider_LoadEntryDetails_Callback cb) { knscore__provider_loadentrydetails_callback = cb; }
    inline void setKNSCore__Provider_LoadPayloadLink_Callback(KNSCore__Provider_LoadPayloadLink_Callback cb) { knscore__provider_loadpayloadlink_callback = cb; }
    inline void setKNSCore__Provider_LoadComments_Callback(KNSCore__Provider_LoadComments_Callback cb) { knscore__provider_loadcomments_callback = cb; }
    inline void setKNSCore__Provider_LoadPerson_Callback(KNSCore__Provider_LoadPerson_Callback cb) { knscore__provider_loadperson_callback = cb; }
    inline void setKNSCore__Provider_LoadBasics_Callback(KNSCore__Provider_LoadBasics_Callback cb) { knscore__provider_loadbasics_callback = cb; }
    inline void setKNSCore__Provider_UserCanVote_Callback(KNSCore__Provider_UserCanVote_Callback cb) { knscore__provider_usercanvote_callback = cb; }
    inline void setKNSCore__Provider_Vote_Callback(KNSCore__Provider_Vote_Callback cb) { knscore__provider_vote_callback = cb; }
    inline void setKNSCore__Provider_UserCanBecomeFan_Callback(KNSCore__Provider_UserCanBecomeFan_Callback cb) { knscore__provider_usercanbecomefan_callback = cb; }
    inline void setKNSCore__Provider_BecomeFan_Callback(KNSCore__Provider_BecomeFan_Callback cb) { knscore__provider_becomefan_callback = cb; }
    inline void setKNSCore__Provider_Event_Callback(KNSCore__Provider_Event_Callback cb) { knscore__provider_event_callback = cb; }
    inline void setKNSCore__Provider_EventFilter_Callback(KNSCore__Provider_EventFilter_Callback cb) { knscore__provider_eventfilter_callback = cb; }
    inline void setKNSCore__Provider_TimerEvent_Callback(KNSCore__Provider_TimerEvent_Callback cb) { knscore__provider_timerevent_callback = cb; }
    inline void setKNSCore__Provider_ChildEvent_Callback(KNSCore__Provider_ChildEvent_Callback cb) { knscore__provider_childevent_callback = cb; }
    inline void setKNSCore__Provider_CustomEvent_Callback(KNSCore__Provider_CustomEvent_Callback cb) { knscore__provider_customevent_callback = cb; }
    inline void setKNSCore__Provider_ConnectNotify_Callback(KNSCore__Provider_ConnectNotify_Callback cb) { knscore__provider_connectnotify_callback = cb; }
    inline void setKNSCore__Provider_DisconnectNotify_Callback(KNSCore__Provider_DisconnectNotify_Callback cb) { knscore__provider_disconnectnotify_callback = cb; }
    inline void setKNSCore__Provider_SetName_Callback(KNSCore__Provider_SetName_Callback cb) { knscore__provider_setname_callback = cb; }
    inline void setKNSCore__Provider_SetIcon_Callback(KNSCore__Provider_SetIcon_Callback cb) { knscore__provider_seticon_callback = cb; }
    inline void setKNSCore__Provider_Sender_Callback(KNSCore__Provider_Sender_Callback cb) { knscore__provider_sender_callback = cb; }
    inline void setKNSCore__Provider_SenderSignalIndex_Callback(KNSCore__Provider_SenderSignalIndex_Callback cb) { knscore__provider_sendersignalindex_callback = cb; }
    inline void setKNSCore__Provider_Receivers_Callback(KNSCore__Provider_Receivers_Callback cb) { knscore__provider_receivers_callback = cb; }
    inline void setKNSCore__Provider_IsSignalConnected_Callback(KNSCore__Provider_IsSignalConnected_Callback cb) { knscore__provider_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKNSCore__Provider_MetaObject_IsBase(bool value) const { knscore__provider_metaobject_isbase = value; }
    inline void setKNSCore__Provider_Metacast_IsBase(bool value) const { knscore__provider_metacast_isbase = value; }
    inline void setKNSCore__Provider_Metacall_IsBase(bool value) const { knscore__provider_metacall_isbase = value; }
    inline void setKNSCore__Provider_Id_IsBase(bool value) const { knscore__provider_id_isbase = value; }
    inline void setKNSCore__Provider_SetProviderXML_IsBase(bool value) const { knscore__provider_setproviderxml_isbase = value; }
    inline void setKNSCore__Provider_IsInitialized_IsBase(bool value) const { knscore__provider_isinitialized_isbase = value; }
    inline void setKNSCore__Provider_SetCachedEntries_IsBase(bool value) const { knscore__provider_setcachedentries_isbase = value; }
    inline void setKNSCore__Provider_Name_IsBase(bool value) const { knscore__provider_name_isbase = value; }
    inline void setKNSCore__Provider_Icon_IsBase(bool value) const { knscore__provider_icon_isbase = value; }
    inline void setKNSCore__Provider_LoadEntries_IsBase(bool value) const { knscore__provider_loadentries_isbase = value; }
    inline void setKNSCore__Provider_LoadEntryDetails_IsBase(bool value) const { knscore__provider_loadentrydetails_isbase = value; }
    inline void setKNSCore__Provider_LoadPayloadLink_IsBase(bool value) const { knscore__provider_loadpayloadlink_isbase = value; }
    inline void setKNSCore__Provider_LoadComments_IsBase(bool value) const { knscore__provider_loadcomments_isbase = value; }
    inline void setKNSCore__Provider_LoadPerson_IsBase(bool value) const { knscore__provider_loadperson_isbase = value; }
    inline void setKNSCore__Provider_LoadBasics_IsBase(bool value) const { knscore__provider_loadbasics_isbase = value; }
    inline void setKNSCore__Provider_UserCanVote_IsBase(bool value) const { knscore__provider_usercanvote_isbase = value; }
    inline void setKNSCore__Provider_Vote_IsBase(bool value) const { knscore__provider_vote_isbase = value; }
    inline void setKNSCore__Provider_UserCanBecomeFan_IsBase(bool value) const { knscore__provider_usercanbecomefan_isbase = value; }
    inline void setKNSCore__Provider_BecomeFan_IsBase(bool value) const { knscore__provider_becomefan_isbase = value; }
    inline void setKNSCore__Provider_Event_IsBase(bool value) const { knscore__provider_event_isbase = value; }
    inline void setKNSCore__Provider_EventFilter_IsBase(bool value) const { knscore__provider_eventfilter_isbase = value; }
    inline void setKNSCore__Provider_TimerEvent_IsBase(bool value) const { knscore__provider_timerevent_isbase = value; }
    inline void setKNSCore__Provider_ChildEvent_IsBase(bool value) const { knscore__provider_childevent_isbase = value; }
    inline void setKNSCore__Provider_CustomEvent_IsBase(bool value) const { knscore__provider_customevent_isbase = value; }
    inline void setKNSCore__Provider_ConnectNotify_IsBase(bool value) const { knscore__provider_connectnotify_isbase = value; }
    inline void setKNSCore__Provider_DisconnectNotify_IsBase(bool value) const { knscore__provider_disconnectnotify_isbase = value; }
    inline void setKNSCore__Provider_SetName_IsBase(bool value) const { knscore__provider_setname_isbase = value; }
    inline void setKNSCore__Provider_SetIcon_IsBase(bool value) const { knscore__provider_seticon_isbase = value; }
    inline void setKNSCore__Provider_Sender_IsBase(bool value) const { knscore__provider_sender_isbase = value; }
    inline void setKNSCore__Provider_SenderSignalIndex_IsBase(bool value) const { knscore__provider_sendersignalindex_isbase = value; }
    inline void setKNSCore__Provider_Receivers_IsBase(bool value) const { knscore__provider_receivers_isbase = value; }
    inline void setKNSCore__Provider_IsSignalConnected_IsBase(bool value) const { knscore__provider_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (knscore__provider_metaobject_isbase) {
            knscore__provider_metaobject_isbase = false;
            return KNSCore__Provider::metaObject();
        }
        auto metaobject_cb = knscore__provider_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KNSCore__Provider::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (knscore__provider_metacast_isbase) {
            knscore__provider_metacast_isbase = false;
            return KNSCore__Provider::qt_metacast(param1);
        }
        auto metacast_cb = knscore__provider_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KNSCore__Provider::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (knscore__provider_metacall_isbase) {
            knscore__provider_metacall_isbase = false;
            return KNSCore__Provider::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = knscore__provider_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KNSCore__Provider::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString id() const override {
        auto id_cb = knscore__provider_id_callback;
        if (id_cb) {
            const char* callback_ret = id_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setProviderXML(const QDomElement& xmldata) override {
        auto setproviderxml_cb = knscore__provider_setproviderxml_callback;
        if (setproviderxml_cb) {
            const QDomElement& xmldata_ret = xmldata;
            // Cast returned reference into pointer
            QDomElement* cbval1 = const_cast<QDomElement*>(&xmldata_ret);

            bool callback_ret = setproviderxml_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isInitialized() const override {
        auto isinitialized_cb = knscore__provider_isinitialized_callback;
        if (isinitialized_cb) {
            bool callback_ret = isinitialized_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCachedEntries(const QList<KNSCore::Entry>& cachedEntries) override {
        auto setcachedentries_cb = knscore__provider_setcachedentries_callback;
        if (setcachedentries_cb) {
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

            setcachedentries_cb(this, cbval1);
            free(cachedEntries_arr);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString name() const override {
        if (knscore__provider_name_isbase) {
            knscore__provider_name_isbase = false;
            return KNSCore__Provider::name();
        }
        auto name_cb = knscore__provider_name_callback;
        if (name_cb) {
            const char* callback_ret = name_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KNSCore__Provider::name();
    }

    // Virtual method for C ABI access and custom callback
    virtual QUrl icon() const override {
        if (knscore__provider_icon_isbase) {
            knscore__provider_icon_isbase = false;
            return KNSCore__Provider::icon();
        }
        auto icon_cb = knscore__provider_icon_callback;
        if (icon_cb) {
            QUrl* callback_ret = icon_cb();
            return *callback_ret;
        }
        return KNSCore__Provider::icon();
    }

    // Virtual method for C ABI access and custom callback
    virtual void loadEntries(const KNSCore::Provider::SearchRequest& request) override {
        auto loadentries_cb = knscore__provider_loadentries_callback;
        if (loadentries_cb) {
            const KNSCore::Provider::SearchRequest& request_ret = request;
            // Cast returned reference into pointer
            KNSCore__Provider__SearchRequest* cbval1 = const_cast<KNSCore::Provider::SearchRequest*>(&request_ret);

            loadentries_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void loadEntryDetails(const KNSCore::Entry& param1) override {
        if (knscore__provider_loadentrydetails_isbase) {
            knscore__provider_loadentrydetails_isbase = false;
            KNSCore__Provider::loadEntryDetails(param1);
            return;
        }
        auto loadentrydetails_cb = knscore__provider_loadentrydetails_callback;
        if (loadentrydetails_cb) {
            const KNSCore::Entry& param1_ret = param1;
            // Cast returned reference into pointer
            KNSCore__Entry* cbval1 = const_cast<KNSCore::Entry*>(&param1_ret);

            loadentrydetails_cb(this, cbval1);
            return;
        }
        KNSCore__Provider::loadEntryDetails(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void loadPayloadLink(const KNSCore::Entry& entry, int linkId) override {
        auto loadpayloadlink_cb = knscore__provider_loadpayloadlink_callback;
        if (loadpayloadlink_cb) {
            const KNSCore::Entry& entry_ret = entry;
            // Cast returned reference into pointer
            KNSCore__Entry* cbval1 = const_cast<KNSCore::Entry*>(&entry_ret);
            int cbval2 = linkId;

            loadpayloadlink_cb(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void loadComments(const KNSCore::Entry& param1, int param2, int param3) override {
        if (knscore__provider_loadcomments_isbase) {
            knscore__provider_loadcomments_isbase = false;
            KNSCore__Provider::loadComments(param1, param2, param3);
            return;
        }
        auto loadcomments_cb = knscore__provider_loadcomments_callback;
        if (loadcomments_cb) {
            const KNSCore::Entry& param1_ret = param1;
            // Cast returned reference into pointer
            KNSCore__Entry* cbval1 = const_cast<KNSCore::Entry*>(&param1_ret);
            int cbval2 = param2;
            int cbval3 = param3;

            loadcomments_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KNSCore__Provider::loadComments(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void loadPerson(const QString& param1) override {
        if (knscore__provider_loadperson_isbase) {
            knscore__provider_loadperson_isbase = false;
            KNSCore__Provider::loadPerson(param1);
            return;
        }
        auto loadperson_cb = knscore__provider_loadperson_callback;
        if (loadperson_cb) {
            const QString param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            auto param1_str_len = param1_b.length();
            const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
            memcpy((void*)param1_str, param1_b.data(), param1_str_len);
            ((char*)param1_str)[param1_str_len] = '\0';
            const char* cbval1 = param1_str;

            loadperson_cb(this, cbval1);
            libqt_free(param1_str);
            return;
        }
        KNSCore__Provider::loadPerson(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void loadBasics() override {
        if (knscore__provider_loadbasics_isbase) {
            knscore__provider_loadbasics_isbase = false;
            KNSCore__Provider::loadBasics();
            return;
        }
        auto loadbasics_cb = knscore__provider_loadbasics_callback;
        if (loadbasics_cb) {
            loadbasics_cb();
            return;
        }
        KNSCore__Provider::loadBasics();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool userCanVote() override {
        if (knscore__provider_usercanvote_isbase) {
            knscore__provider_usercanvote_isbase = false;
            return KNSCore__Provider::userCanVote();
        }
        auto usercanvote_cb = knscore__provider_usercanvote_callback;
        if (usercanvote_cb) {
            bool callback_ret = usercanvote_cb();
            return callback_ret;
        }
        return KNSCore__Provider::userCanVote();
    }

    // Virtual method for C ABI access and custom callback
    virtual void vote(const KNSCore::Entry& param1, uint param2) override {
        if (knscore__provider_vote_isbase) {
            knscore__provider_vote_isbase = false;
            KNSCore__Provider::vote(param1, param2);
            return;
        }
        auto vote_cb = knscore__provider_vote_callback;
        if (vote_cb) {
            const KNSCore::Entry& param1_ret = param1;
            // Cast returned reference into pointer
            KNSCore__Entry* cbval1 = const_cast<KNSCore::Entry*>(&param1_ret);
            unsigned int cbval2 = static_cast<unsigned int>(param2);

            vote_cb(this, cbval1, cbval2);
            return;
        }
        KNSCore__Provider::vote(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool userCanBecomeFan() override {
        if (knscore__provider_usercanbecomefan_isbase) {
            knscore__provider_usercanbecomefan_isbase = false;
            return KNSCore__Provider::userCanBecomeFan();
        }
        auto usercanbecomefan_cb = knscore__provider_usercanbecomefan_callback;
        if (usercanbecomefan_cb) {
            bool callback_ret = usercanbecomefan_cb();
            return callback_ret;
        }
        return KNSCore__Provider::userCanBecomeFan();
    }

    // Virtual method for C ABI access and custom callback
    virtual void becomeFan(const KNSCore::Entry& param1) override {
        if (knscore__provider_becomefan_isbase) {
            knscore__provider_becomefan_isbase = false;
            KNSCore__Provider::becomeFan(param1);
            return;
        }
        auto becomefan_cb = knscore__provider_becomefan_callback;
        if (becomefan_cb) {
            const KNSCore::Entry& param1_ret = param1;
            // Cast returned reference into pointer
            KNSCore__Entry* cbval1 = const_cast<KNSCore::Entry*>(&param1_ret);

            becomefan_cb(this, cbval1);
            return;
        }
        KNSCore__Provider::becomeFan(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (knscore__provider_event_isbase) {
            knscore__provider_event_isbase = false;
            return KNSCore__Provider::event(event);
        }
        auto event_cb = knscore__provider_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KNSCore__Provider::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (knscore__provider_eventfilter_isbase) {
            knscore__provider_eventfilter_isbase = false;
            return KNSCore__Provider::eventFilter(watched, event);
        }
        auto eventfilter_cb = knscore__provider_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KNSCore__Provider::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (knscore__provider_timerevent_isbase) {
            knscore__provider_timerevent_isbase = false;
            KNSCore__Provider::timerEvent(event);
            return;
        }
        auto timerevent_cb = knscore__provider_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KNSCore__Provider::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (knscore__provider_childevent_isbase) {
            knscore__provider_childevent_isbase = false;
            KNSCore__Provider::childEvent(event);
            return;
        }
        auto childevent_cb = knscore__provider_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KNSCore__Provider::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (knscore__provider_customevent_isbase) {
            knscore__provider_customevent_isbase = false;
            KNSCore__Provider::customEvent(event);
            return;
        }
        auto customevent_cb = knscore__provider_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KNSCore__Provider::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (knscore__provider_connectnotify_isbase) {
            knscore__provider_connectnotify_isbase = false;
            KNSCore__Provider::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = knscore__provider_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KNSCore__Provider::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (knscore__provider_disconnectnotify_isbase) {
            knscore__provider_disconnectnotify_isbase = false;
            KNSCore__Provider::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = knscore__provider_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KNSCore__Provider::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setName(const QString& name) {
        if (knscore__provider_setname_isbase) {
            knscore__provider_setname_isbase = false;
            KNSCore__Provider::setName(name);
            return;
        }
        auto setname_cb = knscore__provider_setname_callback;
        if (setname_cb) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;

            setname_cb(this, cbval1);
            libqt_free(name_str);
            return;
        }
        KNSCore__Provider::setName(name);
    }

    // Virtual method for C ABI access and custom callback
    void setIcon(const QUrl& icon) {
        if (knscore__provider_seticon_isbase) {
            knscore__provider_seticon_isbase = false;
            KNSCore__Provider::setIcon(icon);
            return;
        }
        auto seticon_cb = knscore__provider_seticon_callback;
        if (seticon_cb) {
            const QUrl& icon_ret = icon;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&icon_ret);

            seticon_cb(this, cbval1);
            return;
        }
        KNSCore__Provider::setIcon(icon);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (knscore__provider_sender_isbase) {
            knscore__provider_sender_isbase = false;
            return KNSCore__Provider::sender();
        }
        auto sender_cb = knscore__provider_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KNSCore__Provider::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (knscore__provider_sendersignalindex_isbase) {
            knscore__provider_sendersignalindex_isbase = false;
            return KNSCore__Provider::senderSignalIndex();
        }
        auto sendersignalindex_cb = knscore__provider_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KNSCore__Provider::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (knscore__provider_receivers_isbase) {
            knscore__provider_receivers_isbase = false;
            return KNSCore__Provider::receivers(signal);
        }
        auto receivers_cb = knscore__provider_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KNSCore__Provider::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (knscore__provider_issignalconnected_isbase) {
            knscore__provider_issignalconnected_isbase = false;
            return KNSCore__Provider::isSignalConnected(signal);
        }
        auto issignalconnected_cb = knscore__provider_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KNSCore__Provider::isSignalConnected(signal);
    }

    // Friend functions
    friend void KNSCore__Provider_TimerEvent(KNSCore::Provider* self, QTimerEvent* event);
    friend void KNSCore__Provider_SuperTimerEvent(KNSCore::Provider* self, QTimerEvent* event);
    friend void KNSCore__Provider_ChildEvent(KNSCore::Provider* self, QChildEvent* event);
    friend void KNSCore__Provider_SuperChildEvent(KNSCore::Provider* self, QChildEvent* event);
    friend void KNSCore__Provider_CustomEvent(KNSCore::Provider* self, QEvent* event);
    friend void KNSCore__Provider_SuperCustomEvent(KNSCore::Provider* self, QEvent* event);
    friend void KNSCore__Provider_ConnectNotify(KNSCore::Provider* self, const QMetaMethod* signal);
    friend void KNSCore__Provider_SuperConnectNotify(KNSCore::Provider* self, const QMetaMethod* signal);
    friend void KNSCore__Provider_DisconnectNotify(KNSCore::Provider* self, const QMetaMethod* signal);
    friend void KNSCore__Provider_SuperDisconnectNotify(KNSCore::Provider* self, const QMetaMethod* signal);
    friend void KNSCore__Provider_SetName(KNSCore::Provider* self, const libqt_string name);
    friend void KNSCore__Provider_SuperSetName(KNSCore::Provider* self, const libqt_string name);
    friend void KNSCore__Provider_SetIcon(KNSCore::Provider* self, const QUrl* icon);
    friend void KNSCore__Provider_SuperSetIcon(KNSCore::Provider* self, const QUrl* icon);
    friend QObject* KNSCore__Provider_Sender(const KNSCore::Provider* self);
    friend QObject* KNSCore__Provider_SuperSender(const KNSCore::Provider* self);
    friend int KNSCore__Provider_SenderSignalIndex(const KNSCore::Provider* self);
    friend int KNSCore__Provider_SuperSenderSignalIndex(const KNSCore::Provider* self);
    friend int KNSCore__Provider_Receivers(const KNSCore::Provider* self, const char* signal);
    friend int KNSCore__Provider_SuperReceivers(const KNSCore::Provider* self, const char* signal);
    friend bool KNSCore__Provider_IsSignalConnected(const KNSCore::Provider* self, const QMetaMethod* signal);
    friend bool KNSCore__Provider_SuperIsSignalConnected(const KNSCore::Provider* self, const QMetaMethod* signal);
};

#endif
