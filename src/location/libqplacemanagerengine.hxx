#pragma once
#ifndef SRC_LOCATIONC_LIBVIRTUALQPLACEMANAGERENGINE_H
#define SRC_LOCATIONC_LIBVIRTUALQPLACEMANAGERENGINE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPlaceManagerEngine so that we can call protected methods
class VirtualQPlaceManagerEngine final : public QPlaceManagerEngine {

  public:
    // Virtual class boolean flag
    bool isVirtualQPlaceManagerEngine = true;

    // Virtual class public types (including callbacks)
    using QPlaceManagerEngine_MetaObject_Callback = QMetaObject* (*)();
    using QPlaceManagerEngine_Metacast_Callback = void* (*)(QPlaceManagerEngine*, const char*);
    using QPlaceManagerEngine_Metacall_Callback = int (*)(QPlaceManagerEngine*, int, int, void**);
    using QPlaceManagerEngine_GetPlaceDetails_Callback = QPlaceDetailsReply* (*)(QPlaceManagerEngine*, const char*);
    using QPlaceManagerEngine_GetPlaceContent_Callback = QPlaceContentReply* (*)(QPlaceManagerEngine*, QPlaceContentRequest*);
    using QPlaceManagerEngine_Search_Callback = QPlaceSearchReply* (*)(QPlaceManagerEngine*, QPlaceSearchRequest*);
    using QPlaceManagerEngine_SearchSuggestions_Callback = QPlaceSearchSuggestionReply* (*)(QPlaceManagerEngine*, QPlaceSearchRequest*);
    using QPlaceManagerEngine_SavePlace_Callback = QPlaceIdReply* (*)(QPlaceManagerEngine*, QPlace*);
    using QPlaceManagerEngine_RemovePlace_Callback = QPlaceIdReply* (*)(QPlaceManagerEngine*, const char*);
    using QPlaceManagerEngine_SaveCategory_Callback = QPlaceIdReply* (*)(QPlaceManagerEngine*, QPlaceCategory*, const char*);
    using QPlaceManagerEngine_RemoveCategory_Callback = QPlaceIdReply* (*)(QPlaceManagerEngine*, const char*);
    using QPlaceManagerEngine_InitializeCategories_Callback = QPlaceReply* (*)();
    using QPlaceManagerEngine_ParentCategoryId_Callback = const char* (*)(const QPlaceManagerEngine*, const char*);
    using QPlaceManagerEngine_ChildCategoryIds_Callback = const char** (*)(const QPlaceManagerEngine*, const char*);
    using QPlaceManagerEngine_Category_Callback = QPlaceCategory* (*)(const QPlaceManagerEngine*, const char*);
    using QPlaceManagerEngine_ChildCategories_Callback = libqt_list /* of QPlaceCategory* */ (*)(const QPlaceManagerEngine*, const char*);
    using QPlaceManagerEngine_Locales_Callback = libqt_list /* of QLocale* */ (*)();
    using QPlaceManagerEngine_SetLocales_Callback = void (*)(QPlaceManagerEngine*, libqt_list /* of QLocale* */);
    using QPlaceManagerEngine_ConstructIconUrl_Callback = QUrl* (*)(const QPlaceManagerEngine*, QPlaceIcon*, QSize*);
    using QPlaceManagerEngine_CompatiblePlace_Callback = QPlace* (*)(const QPlaceManagerEngine*, QPlace*);
    using QPlaceManagerEngine_MatchingPlaces_Callback = QPlaceMatchReply* (*)(QPlaceManagerEngine*, QPlaceMatchRequest*);
    using QPlaceManagerEngine_Event_Callback = bool (*)(QPlaceManagerEngine*, QEvent*);
    using QPlaceManagerEngine_EventFilter_Callback = bool (*)(QPlaceManagerEngine*, QObject*, QEvent*);
    using QPlaceManagerEngine_TimerEvent_Callback = void (*)(QPlaceManagerEngine*, QTimerEvent*);
    using QPlaceManagerEngine_ChildEvent_Callback = void (*)(QPlaceManagerEngine*, QChildEvent*);
    using QPlaceManagerEngine_CustomEvent_Callback = void (*)(QPlaceManagerEngine*, QEvent*);
    using QPlaceManagerEngine_ConnectNotify_Callback = void (*)(QPlaceManagerEngine*, QMetaMethod*);
    using QPlaceManagerEngine_DisconnectNotify_Callback = void (*)(QPlaceManagerEngine*, QMetaMethod*);
    using QPlaceManagerEngine_Manager_Callback = QPlaceManager* (*)();
    using QPlaceManagerEngine_Sender_Callback = QObject* (*)();
    using QPlaceManagerEngine_SenderSignalIndex_Callback = int (*)();
    using QPlaceManagerEngine_Receivers_Callback = int (*)(const QPlaceManagerEngine*, const char*);
    using QPlaceManagerEngine_IsSignalConnected_Callback = bool (*)(const QPlaceManagerEngine*, QMetaMethod*);

  protected:
    // Instance callback storage
    QPlaceManagerEngine_MetaObject_Callback qplacemanagerengine_metaobject_callback = nullptr;
    QPlaceManagerEngine_Metacast_Callback qplacemanagerengine_metacast_callback = nullptr;
    QPlaceManagerEngine_Metacall_Callback qplacemanagerengine_metacall_callback = nullptr;
    QPlaceManagerEngine_GetPlaceDetails_Callback qplacemanagerengine_getplacedetails_callback = nullptr;
    QPlaceManagerEngine_GetPlaceContent_Callback qplacemanagerengine_getplacecontent_callback = nullptr;
    QPlaceManagerEngine_Search_Callback qplacemanagerengine_search_callback = nullptr;
    QPlaceManagerEngine_SearchSuggestions_Callback qplacemanagerengine_searchsuggestions_callback = nullptr;
    QPlaceManagerEngine_SavePlace_Callback qplacemanagerengine_saveplace_callback = nullptr;
    QPlaceManagerEngine_RemovePlace_Callback qplacemanagerengine_removeplace_callback = nullptr;
    QPlaceManagerEngine_SaveCategory_Callback qplacemanagerengine_savecategory_callback = nullptr;
    QPlaceManagerEngine_RemoveCategory_Callback qplacemanagerengine_removecategory_callback = nullptr;
    QPlaceManagerEngine_InitializeCategories_Callback qplacemanagerengine_initializecategories_callback = nullptr;
    QPlaceManagerEngine_ParentCategoryId_Callback qplacemanagerengine_parentcategoryid_callback = nullptr;
    QPlaceManagerEngine_ChildCategoryIds_Callback qplacemanagerengine_childcategoryids_callback = nullptr;
    QPlaceManagerEngine_Category_Callback qplacemanagerengine_category_callback = nullptr;
    QPlaceManagerEngine_ChildCategories_Callback qplacemanagerengine_childcategories_callback = nullptr;
    QPlaceManagerEngine_Locales_Callback qplacemanagerengine_locales_callback = nullptr;
    QPlaceManagerEngine_SetLocales_Callback qplacemanagerengine_setlocales_callback = nullptr;
    QPlaceManagerEngine_ConstructIconUrl_Callback qplacemanagerengine_constructiconurl_callback = nullptr;
    QPlaceManagerEngine_CompatiblePlace_Callback qplacemanagerengine_compatibleplace_callback = nullptr;
    QPlaceManagerEngine_MatchingPlaces_Callback qplacemanagerengine_matchingplaces_callback = nullptr;
    QPlaceManagerEngine_Event_Callback qplacemanagerengine_event_callback = nullptr;
    QPlaceManagerEngine_EventFilter_Callback qplacemanagerengine_eventfilter_callback = nullptr;
    QPlaceManagerEngine_TimerEvent_Callback qplacemanagerengine_timerevent_callback = nullptr;
    QPlaceManagerEngine_ChildEvent_Callback qplacemanagerengine_childevent_callback = nullptr;
    QPlaceManagerEngine_CustomEvent_Callback qplacemanagerengine_customevent_callback = nullptr;
    QPlaceManagerEngine_ConnectNotify_Callback qplacemanagerengine_connectnotify_callback = nullptr;
    QPlaceManagerEngine_DisconnectNotify_Callback qplacemanagerengine_disconnectnotify_callback = nullptr;
    QPlaceManagerEngine_Manager_Callback qplacemanagerengine_manager_callback = nullptr;
    QPlaceManagerEngine_Sender_Callback qplacemanagerengine_sender_callback = nullptr;
    QPlaceManagerEngine_SenderSignalIndex_Callback qplacemanagerengine_sendersignalindex_callback = nullptr;
    QPlaceManagerEngine_Receivers_Callback qplacemanagerengine_receivers_callback = nullptr;
    QPlaceManagerEngine_IsSignalConnected_Callback qplacemanagerengine_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qplacemanagerengine_metaobject_isbase = false;
    mutable bool qplacemanagerengine_metacast_isbase = false;
    mutable bool qplacemanagerengine_metacall_isbase = false;
    mutable bool qplacemanagerengine_getplacedetails_isbase = false;
    mutable bool qplacemanagerengine_getplacecontent_isbase = false;
    mutable bool qplacemanagerengine_search_isbase = false;
    mutable bool qplacemanagerengine_searchsuggestions_isbase = false;
    mutable bool qplacemanagerengine_saveplace_isbase = false;
    mutable bool qplacemanagerengine_removeplace_isbase = false;
    mutable bool qplacemanagerengine_savecategory_isbase = false;
    mutable bool qplacemanagerengine_removecategory_isbase = false;
    mutable bool qplacemanagerengine_initializecategories_isbase = false;
    mutable bool qplacemanagerengine_parentcategoryid_isbase = false;
    mutable bool qplacemanagerengine_childcategoryids_isbase = false;
    mutable bool qplacemanagerengine_category_isbase = false;
    mutable bool qplacemanagerengine_childcategories_isbase = false;
    mutable bool qplacemanagerengine_locales_isbase = false;
    mutable bool qplacemanagerengine_setlocales_isbase = false;
    mutable bool qplacemanagerengine_constructiconurl_isbase = false;
    mutable bool qplacemanagerengine_compatibleplace_isbase = false;
    mutable bool qplacemanagerengine_matchingplaces_isbase = false;
    mutable bool qplacemanagerengine_event_isbase = false;
    mutable bool qplacemanagerengine_eventfilter_isbase = false;
    mutable bool qplacemanagerengine_timerevent_isbase = false;
    mutable bool qplacemanagerengine_childevent_isbase = false;
    mutable bool qplacemanagerengine_customevent_isbase = false;
    mutable bool qplacemanagerengine_connectnotify_isbase = false;
    mutable bool qplacemanagerengine_disconnectnotify_isbase = false;
    mutable bool qplacemanagerengine_manager_isbase = false;
    mutable bool qplacemanagerengine_sender_isbase = false;
    mutable bool qplacemanagerengine_sendersignalindex_isbase = false;
    mutable bool qplacemanagerengine_receivers_isbase = false;
    mutable bool qplacemanagerengine_issignalconnected_isbase = false;

  public:
    VirtualQPlaceManagerEngine(const QMap<QString, QVariant>& parameters) : QPlaceManagerEngine(parameters) {};
    VirtualQPlaceManagerEngine(const QMap<QString, QVariant>& parameters, QObject* parent) : QPlaceManagerEngine(parameters, parent) {};

    ~VirtualQPlaceManagerEngine() {
        qplacemanagerengine_metaobject_callback = nullptr;
        qplacemanagerengine_metacast_callback = nullptr;
        qplacemanagerengine_metacall_callback = nullptr;
        qplacemanagerengine_getplacedetails_callback = nullptr;
        qplacemanagerengine_getplacecontent_callback = nullptr;
        qplacemanagerengine_search_callback = nullptr;
        qplacemanagerengine_searchsuggestions_callback = nullptr;
        qplacemanagerengine_saveplace_callback = nullptr;
        qplacemanagerengine_removeplace_callback = nullptr;
        qplacemanagerengine_savecategory_callback = nullptr;
        qplacemanagerengine_removecategory_callback = nullptr;
        qplacemanagerengine_initializecategories_callback = nullptr;
        qplacemanagerengine_parentcategoryid_callback = nullptr;
        qplacemanagerengine_childcategoryids_callback = nullptr;
        qplacemanagerengine_category_callback = nullptr;
        qplacemanagerengine_childcategories_callback = nullptr;
        qplacemanagerengine_locales_callback = nullptr;
        qplacemanagerengine_setlocales_callback = nullptr;
        qplacemanagerengine_constructiconurl_callback = nullptr;
        qplacemanagerengine_compatibleplace_callback = nullptr;
        qplacemanagerengine_matchingplaces_callback = nullptr;
        qplacemanagerengine_event_callback = nullptr;
        qplacemanagerengine_eventfilter_callback = nullptr;
        qplacemanagerengine_timerevent_callback = nullptr;
        qplacemanagerengine_childevent_callback = nullptr;
        qplacemanagerengine_customevent_callback = nullptr;
        qplacemanagerengine_connectnotify_callback = nullptr;
        qplacemanagerengine_disconnectnotify_callback = nullptr;
        qplacemanagerengine_manager_callback = nullptr;
        qplacemanagerengine_sender_callback = nullptr;
        qplacemanagerengine_sendersignalindex_callback = nullptr;
        qplacemanagerengine_receivers_callback = nullptr;
        qplacemanagerengine_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQPlaceManagerEngine_MetaObject_Callback(QPlaceManagerEngine_MetaObject_Callback cb) { qplacemanagerengine_metaobject_callback = cb; }
    inline void setQPlaceManagerEngine_Metacast_Callback(QPlaceManagerEngine_Metacast_Callback cb) { qplacemanagerengine_metacast_callback = cb; }
    inline void setQPlaceManagerEngine_Metacall_Callback(QPlaceManagerEngine_Metacall_Callback cb) { qplacemanagerengine_metacall_callback = cb; }
    inline void setQPlaceManagerEngine_GetPlaceDetails_Callback(QPlaceManagerEngine_GetPlaceDetails_Callback cb) { qplacemanagerengine_getplacedetails_callback = cb; }
    inline void setQPlaceManagerEngine_GetPlaceContent_Callback(QPlaceManagerEngine_GetPlaceContent_Callback cb) { qplacemanagerengine_getplacecontent_callback = cb; }
    inline void setQPlaceManagerEngine_Search_Callback(QPlaceManagerEngine_Search_Callback cb) { qplacemanagerengine_search_callback = cb; }
    inline void setQPlaceManagerEngine_SearchSuggestions_Callback(QPlaceManagerEngine_SearchSuggestions_Callback cb) { qplacemanagerengine_searchsuggestions_callback = cb; }
    inline void setQPlaceManagerEngine_SavePlace_Callback(QPlaceManagerEngine_SavePlace_Callback cb) { qplacemanagerengine_saveplace_callback = cb; }
    inline void setQPlaceManagerEngine_RemovePlace_Callback(QPlaceManagerEngine_RemovePlace_Callback cb) { qplacemanagerengine_removeplace_callback = cb; }
    inline void setQPlaceManagerEngine_SaveCategory_Callback(QPlaceManagerEngine_SaveCategory_Callback cb) { qplacemanagerengine_savecategory_callback = cb; }
    inline void setQPlaceManagerEngine_RemoveCategory_Callback(QPlaceManagerEngine_RemoveCategory_Callback cb) { qplacemanagerengine_removecategory_callback = cb; }
    inline void setQPlaceManagerEngine_InitializeCategories_Callback(QPlaceManagerEngine_InitializeCategories_Callback cb) { qplacemanagerengine_initializecategories_callback = cb; }
    inline void setQPlaceManagerEngine_ParentCategoryId_Callback(QPlaceManagerEngine_ParentCategoryId_Callback cb) { qplacemanagerengine_parentcategoryid_callback = cb; }
    inline void setQPlaceManagerEngine_ChildCategoryIds_Callback(QPlaceManagerEngine_ChildCategoryIds_Callback cb) { qplacemanagerengine_childcategoryids_callback = cb; }
    inline void setQPlaceManagerEngine_Category_Callback(QPlaceManagerEngine_Category_Callback cb) { qplacemanagerengine_category_callback = cb; }
    inline void setQPlaceManagerEngine_ChildCategories_Callback(QPlaceManagerEngine_ChildCategories_Callback cb) { qplacemanagerengine_childcategories_callback = cb; }
    inline void setQPlaceManagerEngine_Locales_Callback(QPlaceManagerEngine_Locales_Callback cb) { qplacemanagerengine_locales_callback = cb; }
    inline void setQPlaceManagerEngine_SetLocales_Callback(QPlaceManagerEngine_SetLocales_Callback cb) { qplacemanagerengine_setlocales_callback = cb; }
    inline void setQPlaceManagerEngine_ConstructIconUrl_Callback(QPlaceManagerEngine_ConstructIconUrl_Callback cb) { qplacemanagerengine_constructiconurl_callback = cb; }
    inline void setQPlaceManagerEngine_CompatiblePlace_Callback(QPlaceManagerEngine_CompatiblePlace_Callback cb) { qplacemanagerengine_compatibleplace_callback = cb; }
    inline void setQPlaceManagerEngine_MatchingPlaces_Callback(QPlaceManagerEngine_MatchingPlaces_Callback cb) { qplacemanagerengine_matchingplaces_callback = cb; }
    inline void setQPlaceManagerEngine_Event_Callback(QPlaceManagerEngine_Event_Callback cb) { qplacemanagerengine_event_callback = cb; }
    inline void setQPlaceManagerEngine_EventFilter_Callback(QPlaceManagerEngine_EventFilter_Callback cb) { qplacemanagerengine_eventfilter_callback = cb; }
    inline void setQPlaceManagerEngine_TimerEvent_Callback(QPlaceManagerEngine_TimerEvent_Callback cb) { qplacemanagerengine_timerevent_callback = cb; }
    inline void setQPlaceManagerEngine_ChildEvent_Callback(QPlaceManagerEngine_ChildEvent_Callback cb) { qplacemanagerengine_childevent_callback = cb; }
    inline void setQPlaceManagerEngine_CustomEvent_Callback(QPlaceManagerEngine_CustomEvent_Callback cb) { qplacemanagerengine_customevent_callback = cb; }
    inline void setQPlaceManagerEngine_ConnectNotify_Callback(QPlaceManagerEngine_ConnectNotify_Callback cb) { qplacemanagerengine_connectnotify_callback = cb; }
    inline void setQPlaceManagerEngine_DisconnectNotify_Callback(QPlaceManagerEngine_DisconnectNotify_Callback cb) { qplacemanagerengine_disconnectnotify_callback = cb; }
    inline void setQPlaceManagerEngine_Manager_Callback(QPlaceManagerEngine_Manager_Callback cb) { qplacemanagerengine_manager_callback = cb; }
    inline void setQPlaceManagerEngine_Sender_Callback(QPlaceManagerEngine_Sender_Callback cb) { qplacemanagerengine_sender_callback = cb; }
    inline void setQPlaceManagerEngine_SenderSignalIndex_Callback(QPlaceManagerEngine_SenderSignalIndex_Callback cb) { qplacemanagerengine_sendersignalindex_callback = cb; }
    inline void setQPlaceManagerEngine_Receivers_Callback(QPlaceManagerEngine_Receivers_Callback cb) { qplacemanagerengine_receivers_callback = cb; }
    inline void setQPlaceManagerEngine_IsSignalConnected_Callback(QPlaceManagerEngine_IsSignalConnected_Callback cb) { qplacemanagerengine_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQPlaceManagerEngine_MetaObject_IsBase(bool value) const { qplacemanagerengine_metaobject_isbase = value; }
    inline void setQPlaceManagerEngine_Metacast_IsBase(bool value) const { qplacemanagerengine_metacast_isbase = value; }
    inline void setQPlaceManagerEngine_Metacall_IsBase(bool value) const { qplacemanagerengine_metacall_isbase = value; }
    inline void setQPlaceManagerEngine_GetPlaceDetails_IsBase(bool value) const { qplacemanagerengine_getplacedetails_isbase = value; }
    inline void setQPlaceManagerEngine_GetPlaceContent_IsBase(bool value) const { qplacemanagerengine_getplacecontent_isbase = value; }
    inline void setQPlaceManagerEngine_Search_IsBase(bool value) const { qplacemanagerengine_search_isbase = value; }
    inline void setQPlaceManagerEngine_SearchSuggestions_IsBase(bool value) const { qplacemanagerengine_searchsuggestions_isbase = value; }
    inline void setQPlaceManagerEngine_SavePlace_IsBase(bool value) const { qplacemanagerengine_saveplace_isbase = value; }
    inline void setQPlaceManagerEngine_RemovePlace_IsBase(bool value) const { qplacemanagerengine_removeplace_isbase = value; }
    inline void setQPlaceManagerEngine_SaveCategory_IsBase(bool value) const { qplacemanagerengine_savecategory_isbase = value; }
    inline void setQPlaceManagerEngine_RemoveCategory_IsBase(bool value) const { qplacemanagerengine_removecategory_isbase = value; }
    inline void setQPlaceManagerEngine_InitializeCategories_IsBase(bool value) const { qplacemanagerengine_initializecategories_isbase = value; }
    inline void setQPlaceManagerEngine_ParentCategoryId_IsBase(bool value) const { qplacemanagerengine_parentcategoryid_isbase = value; }
    inline void setQPlaceManagerEngine_ChildCategoryIds_IsBase(bool value) const { qplacemanagerengine_childcategoryids_isbase = value; }
    inline void setQPlaceManagerEngine_Category_IsBase(bool value) const { qplacemanagerengine_category_isbase = value; }
    inline void setQPlaceManagerEngine_ChildCategories_IsBase(bool value) const { qplacemanagerengine_childcategories_isbase = value; }
    inline void setQPlaceManagerEngine_Locales_IsBase(bool value) const { qplacemanagerengine_locales_isbase = value; }
    inline void setQPlaceManagerEngine_SetLocales_IsBase(bool value) const { qplacemanagerengine_setlocales_isbase = value; }
    inline void setQPlaceManagerEngine_ConstructIconUrl_IsBase(bool value) const { qplacemanagerengine_constructiconurl_isbase = value; }
    inline void setQPlaceManagerEngine_CompatiblePlace_IsBase(bool value) const { qplacemanagerengine_compatibleplace_isbase = value; }
    inline void setQPlaceManagerEngine_MatchingPlaces_IsBase(bool value) const { qplacemanagerengine_matchingplaces_isbase = value; }
    inline void setQPlaceManagerEngine_Event_IsBase(bool value) const { qplacemanagerengine_event_isbase = value; }
    inline void setQPlaceManagerEngine_EventFilter_IsBase(bool value) const { qplacemanagerengine_eventfilter_isbase = value; }
    inline void setQPlaceManagerEngine_TimerEvent_IsBase(bool value) const { qplacemanagerengine_timerevent_isbase = value; }
    inline void setQPlaceManagerEngine_ChildEvent_IsBase(bool value) const { qplacemanagerengine_childevent_isbase = value; }
    inline void setQPlaceManagerEngine_CustomEvent_IsBase(bool value) const { qplacemanagerengine_customevent_isbase = value; }
    inline void setQPlaceManagerEngine_ConnectNotify_IsBase(bool value) const { qplacemanagerengine_connectnotify_isbase = value; }
    inline void setQPlaceManagerEngine_DisconnectNotify_IsBase(bool value) const { qplacemanagerengine_disconnectnotify_isbase = value; }
    inline void setQPlaceManagerEngine_Manager_IsBase(bool value) const { qplacemanagerengine_manager_isbase = value; }
    inline void setQPlaceManagerEngine_Sender_IsBase(bool value) const { qplacemanagerengine_sender_isbase = value; }
    inline void setQPlaceManagerEngine_SenderSignalIndex_IsBase(bool value) const { qplacemanagerengine_sendersignalindex_isbase = value; }
    inline void setQPlaceManagerEngine_Receivers_IsBase(bool value) const { qplacemanagerengine_receivers_isbase = value; }
    inline void setQPlaceManagerEngine_IsSignalConnected_IsBase(bool value) const { qplacemanagerengine_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qplacemanagerengine_metaobject_isbase) {
            qplacemanagerengine_metaobject_isbase = false;
            return QPlaceManagerEngine::metaObject();
        } else if (qplacemanagerengine_metaobject_callback != nullptr) {
            QMetaObject* callback_ret = qplacemanagerengine_metaobject_callback();
            return callback_ret;
        } else {
            return QPlaceManagerEngine::metaObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplacemanagerengine_metacast_isbase) {
            qplacemanagerengine_metacast_isbase = false;
            return QPlaceManagerEngine::qt_metacast(param1);
        } else if (qplacemanagerengine_metacast_callback != nullptr) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = qplacemanagerengine_metacast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceManagerEngine::qt_metacast(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplacemanagerengine_metacall_isbase) {
            qplacemanagerengine_metacall_isbase = false;
            return QPlaceManagerEngine::qt_metacall(param1, param2, param3);
        } else if (qplacemanagerengine_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qplacemanagerengine_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceManagerEngine::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceDetailsReply* getPlaceDetails(const QString& placeId) override {
        if (qplacemanagerengine_getplacedetails_isbase) {
            qplacemanagerengine_getplacedetails_isbase = false;
            return QPlaceManagerEngine::getPlaceDetails(placeId);
        } else if (qplacemanagerengine_getplacedetails_callback != nullptr) {
            const QString placeId_ret = placeId;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray placeId_b = placeId_ret.toUtf8();
            auto placeId_str_len = placeId_b.length();
            const char* placeId_str = static_cast<const char*>(malloc(placeId_str_len + 1));
            memcpy((void*)placeId_str, placeId_b.data(), placeId_str_len);
            ((char*)placeId_str)[placeId_str_len] = '\0';
            const char* cbval1 = placeId_str;

            QPlaceDetailsReply* callback_ret = qplacemanagerengine_getplacedetails_callback(this, cbval1);
            libqt_free(placeId_str);
            return callback_ret;
        } else {
            return QPlaceManagerEngine::getPlaceDetails(placeId);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceContentReply* getPlaceContent(const QPlaceContentRequest& request) override {
        if (qplacemanagerengine_getplacecontent_isbase) {
            qplacemanagerengine_getplacecontent_isbase = false;
            return QPlaceManagerEngine::getPlaceContent(request);
        } else if (qplacemanagerengine_getplacecontent_callback != nullptr) {
            const QPlaceContentRequest& request_ret = request;
            // Cast returned reference into pointer
            QPlaceContentRequest* cbval1 = const_cast<QPlaceContentRequest*>(&request_ret);

            QPlaceContentReply* callback_ret = qplacemanagerengine_getplacecontent_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceManagerEngine::getPlaceContent(request);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceSearchReply* search(const QPlaceSearchRequest& request) override {
        if (qplacemanagerengine_search_isbase) {
            qplacemanagerengine_search_isbase = false;
            return QPlaceManagerEngine::search(request);
        } else if (qplacemanagerengine_search_callback != nullptr) {
            const QPlaceSearchRequest& request_ret = request;
            // Cast returned reference into pointer
            QPlaceSearchRequest* cbval1 = const_cast<QPlaceSearchRequest*>(&request_ret);

            QPlaceSearchReply* callback_ret = qplacemanagerengine_search_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceManagerEngine::search(request);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceSearchSuggestionReply* searchSuggestions(const QPlaceSearchRequest& request) override {
        if (qplacemanagerengine_searchsuggestions_isbase) {
            qplacemanagerengine_searchsuggestions_isbase = false;
            return QPlaceManagerEngine::searchSuggestions(request);
        } else if (qplacemanagerengine_searchsuggestions_callback != nullptr) {
            const QPlaceSearchRequest& request_ret = request;
            // Cast returned reference into pointer
            QPlaceSearchRequest* cbval1 = const_cast<QPlaceSearchRequest*>(&request_ret);

            QPlaceSearchSuggestionReply* callback_ret = qplacemanagerengine_searchsuggestions_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceManagerEngine::searchSuggestions(request);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceIdReply* savePlace(const QPlace& place) override {
        if (qplacemanagerengine_saveplace_isbase) {
            qplacemanagerengine_saveplace_isbase = false;
            return QPlaceManagerEngine::savePlace(place);
        } else if (qplacemanagerengine_saveplace_callback != nullptr) {
            const QPlace& place_ret = place;
            // Cast returned reference into pointer
            QPlace* cbval1 = const_cast<QPlace*>(&place_ret);

            QPlaceIdReply* callback_ret = qplacemanagerengine_saveplace_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceManagerEngine::savePlace(place);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceIdReply* removePlace(const QString& placeId) override {
        if (qplacemanagerengine_removeplace_isbase) {
            qplacemanagerengine_removeplace_isbase = false;
            return QPlaceManagerEngine::removePlace(placeId);
        } else if (qplacemanagerengine_removeplace_callback != nullptr) {
            const QString placeId_ret = placeId;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray placeId_b = placeId_ret.toUtf8();
            auto placeId_str_len = placeId_b.length();
            const char* placeId_str = static_cast<const char*>(malloc(placeId_str_len + 1));
            memcpy((void*)placeId_str, placeId_b.data(), placeId_str_len);
            ((char*)placeId_str)[placeId_str_len] = '\0';
            const char* cbval1 = placeId_str;

            QPlaceIdReply* callback_ret = qplacemanagerengine_removeplace_callback(this, cbval1);
            libqt_free(placeId_str);
            return callback_ret;
        } else {
            return QPlaceManagerEngine::removePlace(placeId);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceIdReply* saveCategory(const QPlaceCategory& category, const QString& parentId) override {
        if (qplacemanagerengine_savecategory_isbase) {
            qplacemanagerengine_savecategory_isbase = false;
            return QPlaceManagerEngine::saveCategory(category, parentId);
        } else if (qplacemanagerengine_savecategory_callback != nullptr) {
            const QPlaceCategory& category_ret = category;
            // Cast returned reference into pointer
            QPlaceCategory* cbval1 = const_cast<QPlaceCategory*>(&category_ret);
            const QString parentId_ret = parentId;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray parentId_b = parentId_ret.toUtf8();
            auto parentId_str_len = parentId_b.length();
            const char* parentId_str = static_cast<const char*>(malloc(parentId_str_len + 1));
            memcpy((void*)parentId_str, parentId_b.data(), parentId_str_len);
            ((char*)parentId_str)[parentId_str_len] = '\0';
            const char* cbval2 = parentId_str;

            QPlaceIdReply* callback_ret = qplacemanagerengine_savecategory_callback(this, cbval1, cbval2);
            libqt_free(parentId_str);
            return callback_ret;
        } else {
            return QPlaceManagerEngine::saveCategory(category, parentId);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceIdReply* removeCategory(const QString& categoryId) override {
        if (qplacemanagerengine_removecategory_isbase) {
            qplacemanagerengine_removecategory_isbase = false;
            return QPlaceManagerEngine::removeCategory(categoryId);
        } else if (qplacemanagerengine_removecategory_callback != nullptr) {
            const QString categoryId_ret = categoryId;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray categoryId_b = categoryId_ret.toUtf8();
            auto categoryId_str_len = categoryId_b.length();
            const char* categoryId_str = static_cast<const char*>(malloc(categoryId_str_len + 1));
            memcpy((void*)categoryId_str, categoryId_b.data(), categoryId_str_len);
            ((char*)categoryId_str)[categoryId_str_len] = '\0';
            const char* cbval1 = categoryId_str;

            QPlaceIdReply* callback_ret = qplacemanagerengine_removecategory_callback(this, cbval1);
            libqt_free(categoryId_str);
            return callback_ret;
        } else {
            return QPlaceManagerEngine::removeCategory(categoryId);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceReply* initializeCategories() override {
        if (qplacemanagerengine_initializecategories_isbase) {
            qplacemanagerengine_initializecategories_isbase = false;
            return QPlaceManagerEngine::initializeCategories();
        } else if (qplacemanagerengine_initializecategories_callback != nullptr) {
            QPlaceReply* callback_ret = qplacemanagerengine_initializecategories_callback();
            return callback_ret;
        } else {
            return QPlaceManagerEngine::initializeCategories();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString parentCategoryId(const QString& categoryId) const override {
        if (qplacemanagerengine_parentcategoryid_isbase) {
            qplacemanagerengine_parentcategoryid_isbase = false;
            return QPlaceManagerEngine::parentCategoryId(categoryId);
        } else if (qplacemanagerengine_parentcategoryid_callback != nullptr) {
            const QString categoryId_ret = categoryId;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray categoryId_b = categoryId_ret.toUtf8();
            auto categoryId_str_len = categoryId_b.length();
            const char* categoryId_str = static_cast<const char*>(malloc(categoryId_str_len + 1));
            memcpy((void*)categoryId_str, categoryId_b.data(), categoryId_str_len);
            ((char*)categoryId_str)[categoryId_str_len] = '\0';
            const char* cbval1 = categoryId_str;

            const char* callback_ret = qplacemanagerengine_parentcategoryid_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(categoryId_str);
            return callback_ret_QString;
        } else {
            return QPlaceManagerEngine::parentCategoryId(categoryId);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> childCategoryIds(const QString& categoryId) const override {
        if (qplacemanagerengine_childcategoryids_isbase) {
            qplacemanagerengine_childcategoryids_isbase = false;
            return QPlaceManagerEngine::childCategoryIds(categoryId);
        } else if (qplacemanagerengine_childcategoryids_callback != nullptr) {
            const QString categoryId_ret = categoryId;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray categoryId_b = categoryId_ret.toUtf8();
            auto categoryId_str_len = categoryId_b.length();
            const char* categoryId_str = static_cast<const char*>(malloc(categoryId_str_len + 1));
            memcpy((void*)categoryId_str, categoryId_b.data(), categoryId_str_len);
            ((char*)categoryId_str)[categoryId_str_len] = '\0';
            const char* cbval1 = categoryId_str;

            const char** callback_ret = qplacemanagerengine_childcategoryids_callback(this, cbval1);
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            libqt_free(categoryId_str);
            return callback_ret_QList;
        } else {
            return QPlaceManagerEngine::childCategoryIds(categoryId);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceCategory category(const QString& categoryId) const override {
        if (qplacemanagerengine_category_isbase) {
            qplacemanagerengine_category_isbase = false;
            return QPlaceManagerEngine::category(categoryId);
        } else if (qplacemanagerengine_category_callback != nullptr) {
            const QString categoryId_ret = categoryId;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray categoryId_b = categoryId_ret.toUtf8();
            auto categoryId_str_len = categoryId_b.length();
            const char* categoryId_str = static_cast<const char*>(malloc(categoryId_str_len + 1));
            memcpy((void*)categoryId_str, categoryId_b.data(), categoryId_str_len);
            ((char*)categoryId_str)[categoryId_str_len] = '\0';
            const char* cbval1 = categoryId_str;

            QPlaceCategory* callback_ret = qplacemanagerengine_category_callback(this, cbval1);
            libqt_free(categoryId_str);
            return *callback_ret;
        } else {
            return QPlaceManagerEngine::category(categoryId);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QPlaceCategory> childCategories(const QString& parentId) const override {
        if (qplacemanagerengine_childcategories_isbase) {
            qplacemanagerengine_childcategories_isbase = false;
            return QPlaceManagerEngine::childCategories(parentId);
        } else if (qplacemanagerengine_childcategories_callback != nullptr) {
            const QString parentId_ret = parentId;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray parentId_b = parentId_ret.toUtf8();
            auto parentId_str_len = parentId_b.length();
            const char* parentId_str = static_cast<const char*>(malloc(parentId_str_len + 1));
            memcpy((void*)parentId_str, parentId_b.data(), parentId_str_len);
            ((char*)parentId_str)[parentId_str_len] = '\0';
            const char* cbval1 = parentId_str;

            libqt_list /* of QPlaceCategory* */ callback_ret = qplacemanagerengine_childcategories_callback(this, cbval1);
            QList<QPlaceCategory> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QPlaceCategory** callback_ret_arr = static_cast<QPlaceCategory**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            libqt_free(parentId_str);
            return callback_ret_QList;
        } else {
            return QPlaceManagerEngine::childCategories(parentId);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QLocale> locales() const override {
        if (qplacemanagerengine_locales_isbase) {
            qplacemanagerengine_locales_isbase = false;
            return QPlaceManagerEngine::locales();
        } else if (qplacemanagerengine_locales_callback != nullptr) {
            libqt_list /* of QLocale* */ callback_ret = qplacemanagerengine_locales_callback();
            QList<QLocale> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QLocale** callback_ret_arr = static_cast<QLocale**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        } else {
            return QPlaceManagerEngine::locales();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLocales(const QList<QLocale>& locales) override {
        if (qplacemanagerengine_setlocales_isbase) {
            qplacemanagerengine_setlocales_isbase = false;
            QPlaceManagerEngine::setLocales(locales);
        } else if (qplacemanagerengine_setlocales_callback != nullptr) {
            const QList<QLocale>& locales_ret = locales;
            // Convert QList<> from C++ memory to manually-managed C memory
            QLocale** locales_arr = static_cast<QLocale**>(malloc(sizeof(QLocale*) * (locales_ret.size())));
            for (qsizetype i = 0; i < locales_ret.size(); ++i) {
                locales_arr[i] = new QLocale(locales_ret[i]);
            }
            libqt_list locales_out;
            locales_out.len = locales_ret.size();
            locales_out.data = static_cast<void*>(locales_arr);
            libqt_list /* of QLocale* */ cbval1 = locales_out;

            qplacemanagerengine_setlocales_callback(this, cbval1);
            free(locales_arr);
        } else {
            QPlaceManagerEngine::setLocales(locales);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QUrl constructIconUrl(const QPlaceIcon& icon, const QSize& size) const override {
        if (qplacemanagerengine_constructiconurl_isbase) {
            qplacemanagerengine_constructiconurl_isbase = false;
            return QPlaceManagerEngine::constructIconUrl(icon, size);
        } else if (qplacemanagerengine_constructiconurl_callback != nullptr) {
            const QPlaceIcon& icon_ret = icon;
            // Cast returned reference into pointer
            QPlaceIcon* cbval1 = const_cast<QPlaceIcon*>(&icon_ret);
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval2 = const_cast<QSize*>(&size_ret);

            QUrl* callback_ret = qplacemanagerengine_constructiconurl_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return QPlaceManagerEngine::constructIconUrl(icon, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlace compatiblePlace(const QPlace& original) const override {
        if (qplacemanagerengine_compatibleplace_isbase) {
            qplacemanagerengine_compatibleplace_isbase = false;
            return QPlaceManagerEngine::compatiblePlace(original);
        } else if (qplacemanagerengine_compatibleplace_callback != nullptr) {
            const QPlace& original_ret = original;
            // Cast returned reference into pointer
            QPlace* cbval1 = const_cast<QPlace*>(&original_ret);

            QPlace* callback_ret = qplacemanagerengine_compatibleplace_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QPlaceManagerEngine::compatiblePlace(original);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceMatchReply* matchingPlaces(const QPlaceMatchRequest& request) override {
        if (qplacemanagerengine_matchingplaces_isbase) {
            qplacemanagerengine_matchingplaces_isbase = false;
            return QPlaceManagerEngine::matchingPlaces(request);
        } else if (qplacemanagerengine_matchingplaces_callback != nullptr) {
            const QPlaceMatchRequest& request_ret = request;
            // Cast returned reference into pointer
            QPlaceMatchRequest* cbval1 = const_cast<QPlaceMatchRequest*>(&request_ret);

            QPlaceMatchReply* callback_ret = qplacemanagerengine_matchingplaces_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceManagerEngine::matchingPlaces(request);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplacemanagerengine_event_isbase) {
            qplacemanagerengine_event_isbase = false;
            return QPlaceManagerEngine::event(event);
        } else if (qplacemanagerengine_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qplacemanagerengine_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceManagerEngine::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplacemanagerengine_eventfilter_isbase) {
            qplacemanagerengine_eventfilter_isbase = false;
            return QPlaceManagerEngine::eventFilter(watched, event);
        } else if (qplacemanagerengine_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qplacemanagerengine_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QPlaceManagerEngine::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplacemanagerengine_timerevent_isbase) {
            qplacemanagerengine_timerevent_isbase = false;
            QPlaceManagerEngine::timerEvent(event);
        } else if (qplacemanagerengine_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qplacemanagerengine_timerevent_callback(this, cbval1);
        } else {
            QPlaceManagerEngine::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplacemanagerengine_childevent_isbase) {
            qplacemanagerengine_childevent_isbase = false;
            QPlaceManagerEngine::childEvent(event);
        } else if (qplacemanagerengine_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qplacemanagerengine_childevent_callback(this, cbval1);
        } else {
            QPlaceManagerEngine::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplacemanagerengine_customevent_isbase) {
            qplacemanagerengine_customevent_isbase = false;
            QPlaceManagerEngine::customEvent(event);
        } else if (qplacemanagerengine_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qplacemanagerengine_customevent_callback(this, cbval1);
        } else {
            QPlaceManagerEngine::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplacemanagerengine_connectnotify_isbase) {
            qplacemanagerengine_connectnotify_isbase = false;
            QPlaceManagerEngine::connectNotify(signal);
        } else if (qplacemanagerengine_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qplacemanagerengine_connectnotify_callback(this, cbval1);
        } else {
            QPlaceManagerEngine::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplacemanagerengine_disconnectnotify_isbase) {
            qplacemanagerengine_disconnectnotify_isbase = false;
            QPlaceManagerEngine::disconnectNotify(signal);
        } else if (qplacemanagerengine_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qplacemanagerengine_disconnectnotify_callback(this, cbval1);
        } else {
            QPlaceManagerEngine::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPlaceManager* manager() const {
        if (qplacemanagerengine_manager_isbase) {
            qplacemanagerengine_manager_isbase = false;
            return QPlaceManagerEngine::manager();
        } else if (qplacemanagerengine_manager_callback != nullptr) {
            QPlaceManager* callback_ret = qplacemanagerengine_manager_callback();
            return callback_ret;
        } else {
            return QPlaceManagerEngine::manager();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qplacemanagerengine_sender_isbase) {
            qplacemanagerengine_sender_isbase = false;
            return QPlaceManagerEngine::sender();
        } else if (qplacemanagerengine_sender_callback != nullptr) {
            QObject* callback_ret = qplacemanagerengine_sender_callback();
            return callback_ret;
        } else {
            return QPlaceManagerEngine::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qplacemanagerengine_sendersignalindex_isbase) {
            qplacemanagerengine_sendersignalindex_isbase = false;
            return QPlaceManagerEngine::senderSignalIndex();
        } else if (qplacemanagerengine_sendersignalindex_callback != nullptr) {
            int callback_ret = qplacemanagerengine_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceManagerEngine::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qplacemanagerengine_receivers_isbase) {
            qplacemanagerengine_receivers_isbase = false;
            return QPlaceManagerEngine::receivers(signal);
        } else if (qplacemanagerengine_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qplacemanagerengine_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QPlaceManagerEngine::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qplacemanagerengine_issignalconnected_isbase) {
            qplacemanagerengine_issignalconnected_isbase = false;
            return QPlaceManagerEngine::isSignalConnected(signal);
        } else if (qplacemanagerengine_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qplacemanagerengine_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QPlaceManagerEngine::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QPlaceManagerEngine_TimerEvent(QPlaceManagerEngine* self, QTimerEvent* event);
    friend void QPlaceManagerEngine_QBaseTimerEvent(QPlaceManagerEngine* self, QTimerEvent* event);
    friend void QPlaceManagerEngine_ChildEvent(QPlaceManagerEngine* self, QChildEvent* event);
    friend void QPlaceManagerEngine_QBaseChildEvent(QPlaceManagerEngine* self, QChildEvent* event);
    friend void QPlaceManagerEngine_CustomEvent(QPlaceManagerEngine* self, QEvent* event);
    friend void QPlaceManagerEngine_QBaseCustomEvent(QPlaceManagerEngine* self, QEvent* event);
    friend void QPlaceManagerEngine_ConnectNotify(QPlaceManagerEngine* self, const QMetaMethod* signal);
    friend void QPlaceManagerEngine_QBaseConnectNotify(QPlaceManagerEngine* self, const QMetaMethod* signal);
    friend void QPlaceManagerEngine_DisconnectNotify(QPlaceManagerEngine* self, const QMetaMethod* signal);
    friend void QPlaceManagerEngine_QBaseDisconnectNotify(QPlaceManagerEngine* self, const QMetaMethod* signal);
    friend QPlaceManager* QPlaceManagerEngine_Manager(const QPlaceManagerEngine* self);
    friend QPlaceManager* QPlaceManagerEngine_QBaseManager(const QPlaceManagerEngine* self);
    friend QObject* QPlaceManagerEngine_Sender(const QPlaceManagerEngine* self);
    friend QObject* QPlaceManagerEngine_QBaseSender(const QPlaceManagerEngine* self);
    friend int QPlaceManagerEngine_SenderSignalIndex(const QPlaceManagerEngine* self);
    friend int QPlaceManagerEngine_QBaseSenderSignalIndex(const QPlaceManagerEngine* self);
    friend int QPlaceManagerEngine_Receivers(const QPlaceManagerEngine* self, const char* signal);
    friend int QPlaceManagerEngine_QBaseReceivers(const QPlaceManagerEngine* self, const char* signal);
    friend bool QPlaceManagerEngine_IsSignalConnected(const QPlaceManagerEngine* self, const QMetaMethod* signal);
    friend bool QPlaceManagerEngine_QBaseIsSignalConnected(const QPlaceManagerEngine* self, const QMetaMethod* signal);
};

#endif
