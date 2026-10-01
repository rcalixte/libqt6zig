#pragma once
#ifndef LOCATION_LIBQPLACEMANAGERENGINE_HXX
#define LOCATION_LIBQPLACEMANAGERENGINE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPlaceManagerEngine
class VirtualQPlaceManagerEngine final : public QPlaceManagerEngine {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPlaceManagerEngine_MetaObject_Callback = QMetaObject* (*)(const QPlaceManagerEngine*);
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
    using QPlaceManagerEngine_InitializeCategories_Callback = QPlaceReply* (*)(QPlaceManagerEngine*);
    using QPlaceManagerEngine_ParentCategoryId_Callback = const char* (*)(const QPlaceManagerEngine*, const char*);
    using QPlaceManagerEngine_ChildCategoryIds_Callback = const char** (*)(const QPlaceManagerEngine*, const char*);
    using QPlaceManagerEngine_Category_Callback = QPlaceCategory* (*)(const QPlaceManagerEngine*, const char*);
    using QPlaceManagerEngine_ChildCategories_Callback = libqt_list /* of QPlaceCategory* */ (*)(const QPlaceManagerEngine*, const char*);
    using QPlaceManagerEngine_Locales_Callback = libqt_list /* of QLocale* */ (*)(const QPlaceManagerEngine*);
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
    using QPlaceManagerEngine::isSignalConnected;
    using QPlaceManagerEngine::manager;
    using QPlaceManagerEngine::receivers;
    using QPlaceManagerEngine::sender;
    using QPlaceManagerEngine::senderSignalIndex;

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

    // Access struct
    struct Base : QPlaceManagerEngine {
        using QPlaceManagerEngine::childEvent;
        using QPlaceManagerEngine::connectNotify;
        using QPlaceManagerEngine::customEvent;
        using QPlaceManagerEngine::disconnectNotify;
        using QPlaceManagerEngine::timerEvent;
    };

    VirtualQPlaceManagerEngine(const QMap<QString, QVariant>& parameters) : QPlaceManagerEngine(parameters) {};
    VirtualQPlaceManagerEngine(const QMap<QString, QVariant>& parameters, QObject* parent) : QPlaceManagerEngine(parameters, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qplacemanagerengine_metaobject_callback) {
            QMetaObject* callback_ret = qplacemanagerengine_metaobject_callback(this);
            return callback_ret;
        }
        return QPlaceManagerEngine::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qplacemanagerengine_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qplacemanagerengine_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceManagerEngine::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplacemanagerengine_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qplacemanagerengine_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPlaceManagerEngine::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceDetailsReply* getPlaceDetails(const QString& placeId) override {
        if (qplacemanagerengine_getplacedetails_callback) {
            const auto placeId_ret = placeId;
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
        }
        return QPlaceManagerEngine::getPlaceDetails(placeId);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceContentReply* getPlaceContent(const QPlaceContentRequest& request) override {
        if (qplacemanagerengine_getplacecontent_callback) {
            const QPlaceContentRequest& request_ret = request;
            // Cast returned reference into pointer
            QPlaceContentRequest* cbval1 = const_cast<QPlaceContentRequest*>(&request_ret);
            QPlaceContentReply* callback_ret = qplacemanagerengine_getplacecontent_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceManagerEngine::getPlaceContent(request);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceSearchReply* search(const QPlaceSearchRequest& request) override {
        if (qplacemanagerengine_search_callback) {
            const QPlaceSearchRequest& request_ret = request;
            // Cast returned reference into pointer
            QPlaceSearchRequest* cbval1 = const_cast<QPlaceSearchRequest*>(&request_ret);
            QPlaceSearchReply* callback_ret = qplacemanagerengine_search_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceManagerEngine::search(request);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceSearchSuggestionReply* searchSuggestions(const QPlaceSearchRequest& request) override {
        if (qplacemanagerengine_searchsuggestions_callback) {
            const QPlaceSearchRequest& request_ret = request;
            // Cast returned reference into pointer
            QPlaceSearchRequest* cbval1 = const_cast<QPlaceSearchRequest*>(&request_ret);
            QPlaceSearchSuggestionReply* callback_ret = qplacemanagerengine_searchsuggestions_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceManagerEngine::searchSuggestions(request);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceIdReply* savePlace(const QPlace& place) override {
        if (qplacemanagerengine_saveplace_callback) {
            const QPlace& place_ret = place;
            // Cast returned reference into pointer
            QPlace* cbval1 = const_cast<QPlace*>(&place_ret);
            QPlaceIdReply* callback_ret = qplacemanagerengine_saveplace_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceManagerEngine::savePlace(place);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceIdReply* removePlace(const QString& placeId) override {
        if (qplacemanagerengine_removeplace_callback) {
            const auto placeId_ret = placeId;
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
        }
        return QPlaceManagerEngine::removePlace(placeId);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceIdReply* saveCategory(const QPlaceCategory& category, const QString& parentId) override {
        if (qplacemanagerengine_savecategory_callback) {
            const QPlaceCategory& category_ret = category;
            // Cast returned reference into pointer
            QPlaceCategory* cbval1 = const_cast<QPlaceCategory*>(&category_ret);
            const auto parentId_ret = parentId;
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
        }
        return QPlaceManagerEngine::saveCategory(category, parentId);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceIdReply* removeCategory(const QString& categoryId) override {
        if (qplacemanagerengine_removecategory_callback) {
            const auto categoryId_ret = categoryId;
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
        }
        return QPlaceManagerEngine::removeCategory(categoryId);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceReply* initializeCategories() override {
        if (qplacemanagerengine_initializecategories_callback) {
            QPlaceReply* callback_ret = qplacemanagerengine_initializecategories_callback(this);
            return callback_ret;
        }
        return QPlaceManagerEngine::initializeCategories();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString parentCategoryId(const QString& categoryId) const override {
        if (qplacemanagerengine_parentcategoryid_callback) {
            const auto categoryId_ret = categoryId;
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
        }
        return QPlaceManagerEngine::parentCategoryId(categoryId);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> childCategoryIds(const QString& categoryId) const override {
        if (qplacemanagerengine_childcategoryids_callback) {
            const auto categoryId_ret = categoryId;
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
        }
        return QPlaceManagerEngine::childCategoryIds(categoryId);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceCategory category(const QString& categoryId) const override {
        if (qplacemanagerengine_category_callback) {
            const auto categoryId_ret = categoryId;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray categoryId_b = categoryId_ret.toUtf8();
            auto categoryId_str_len = categoryId_b.length();
            const char* categoryId_str = static_cast<const char*>(malloc(categoryId_str_len + 1));
            memcpy((void*)categoryId_str, categoryId_b.data(), categoryId_str_len);
            ((char*)categoryId_str)[categoryId_str_len] = '\0';
            const char* cbval1 = categoryId_str;
            QPlaceCategory* callback_ret = qplacemanagerengine_category_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(categoryId_str);
            return callback_ret_Value;
        }
        return QPlaceManagerEngine::category(categoryId);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QPlaceCategory> childCategories(const QString& parentId) const override {
        if (qplacemanagerengine_childcategories_callback) {
            const auto parentId_ret = parentId;
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
        }
        return QPlaceManagerEngine::childCategories(parentId);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QLocale> locales() const override {
        if (qplacemanagerengine_locales_callback) {
            libqt_list /* of QLocale* */ callback_ret = qplacemanagerengine_locales_callback(this);
            QList<QLocale> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QLocale** callback_ret_arr = static_cast<QLocale**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QPlaceManagerEngine::locales();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLocales(const QList<QLocale>& locales) override {
        if (qplacemanagerengine_setlocales_callback) {
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
            return;
        }
        QPlaceManagerEngine::setLocales(locales);
    }

    // Virtual method for C ABI access and custom callback
    virtual QUrl constructIconUrl(const QPlaceIcon& icon, const QSize& size) const override {
        if (qplacemanagerengine_constructiconurl_callback) {
            const QPlaceIcon& icon_ret = icon;
            // Cast returned reference into pointer
            QPlaceIcon* cbval1 = const_cast<QPlaceIcon*>(&icon_ret);
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval2 = const_cast<QSize*>(&size_ret);
            QUrl* callback_ret = qplacemanagerengine_constructiconurl_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPlaceManagerEngine::constructIconUrl(icon, size);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlace compatiblePlace(const QPlace& original) const override {
        if (qplacemanagerengine_compatibleplace_callback) {
            const QPlace& original_ret = original;
            // Cast returned reference into pointer
            QPlace* cbval1 = const_cast<QPlace*>(&original_ret);
            QPlace* callback_ret = qplacemanagerengine_compatibleplace_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPlaceManagerEngine::compatiblePlace(original);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPlaceMatchReply* matchingPlaces(const QPlaceMatchRequest& request) override {
        if (qplacemanagerengine_matchingplaces_callback) {
            const QPlaceMatchRequest& request_ret = request;
            // Cast returned reference into pointer
            QPlaceMatchRequest* cbval1 = const_cast<QPlaceMatchRequest*>(&request_ret);
            QPlaceMatchReply* callback_ret = qplacemanagerengine_matchingplaces_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceManagerEngine::matchingPlaces(request);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplacemanagerengine_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qplacemanagerengine_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPlaceManagerEngine::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplacemanagerengine_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qplacemanagerengine_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPlaceManagerEngine::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplacemanagerengine_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qplacemanagerengine_timerevent_callback(this, cbval1);
            return;
        }
        QPlaceManagerEngine::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplacemanagerengine_childevent_callback) {
            QChildEvent* cbval1 = event;
            qplacemanagerengine_childevent_callback(this, cbval1);
            return;
        }
        QPlaceManagerEngine::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplacemanagerengine_customevent_callback) {
            QEvent* cbval1 = event;
            qplacemanagerengine_customevent_callback(this, cbval1);
            return;
        }
        QPlaceManagerEngine::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplacemanagerengine_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplacemanagerengine_connectnotify_callback(this, cbval1);
            return;
        }
        QPlaceManagerEngine::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplacemanagerengine_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qplacemanagerengine_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPlaceManagerEngine::disconnectNotify(signal);
    }

    // Friend functions
    friend void QPlaceManagerEngine_SuperTimerEvent(QPlaceManagerEngine* self, QTimerEvent* event);
    friend void QPlaceManagerEngine_SuperChildEvent(QPlaceManagerEngine* self, QChildEvent* event);
    friend void QPlaceManagerEngine_SuperCustomEvent(QPlaceManagerEngine* self, QEvent* event);
    friend void QPlaceManagerEngine_SuperConnectNotify(QPlaceManagerEngine* self, const QMetaMethod* signal);
    friend void QPlaceManagerEngine_SuperDisconnectNotify(QPlaceManagerEngine* self, const QMetaMethod* signal);
};

#endif
