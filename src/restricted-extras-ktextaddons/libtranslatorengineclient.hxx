#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTRANSLATORENGINECLIENT_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALTRANSLATORENGINECLIENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextTranslator::TranslatorEngineClient so that we can call protected methods
class VirtualTextTranslatorTranslatorEngineClient : public TextTranslator::TranslatorEngineClient {

  public:
    // Virtual class boolean flag
    bool isVirtualTextTranslatorTranslatorEngineClient = true;

    // Virtual class public types (including callbacks)
    using TextTranslator__TranslatorEngineClient_MetaObject_Callback = QMetaObject* (*)();
    using TextTranslator__TranslatorEngineClient_Metacast_Callback = void* (*)(TextTranslator__TranslatorEngineClient*, const char*);
    using TextTranslator__TranslatorEngineClient_Metacall_Callback = int (*)(TextTranslator__TranslatorEngineClient*, int, int, void**);
    using TextTranslator__TranslatorEngineClient_Name_Callback = const char* (*)();
    using TextTranslator__TranslatorEngineClient_TranslatedName_Callback = const char* (*)();
    using TextTranslator__TranslatorEngineClient_CreateTranslator_Callback = TextTranslator__TranslatorEnginePlugin* (*)();
    using TextTranslator__TranslatorEngineClient_SupportedFromLanguages_Callback = libqt_map /* of int to libqt_string */ (*)();
    using TextTranslator__TranslatorEngineClient_SupportedToLanguages_Callback = libqt_map /* of int to libqt_string */ (*)();
    using TextTranslator__TranslatorEngineClient_UpdateListLanguages_Callback = void (*)();
    using TextTranslator__TranslatorEngineClient_HasConfigurationDialog_Callback = bool (*)();
    using TextTranslator__TranslatorEngineClient_ShowConfigureDialog_Callback = bool (*)(TextTranslator__TranslatorEngineClient*, QWidget*);
    using TextTranslator__TranslatorEngineClient_GenerateToListFromCurrentToLanguage_Callback = void (*)(TextTranslator__TranslatorEngineClient*, const char*);
    using TextTranslator__TranslatorEngineClient_HasInvertSupport_Callback = bool (*)();
    using TextTranslator__TranslatorEngineClient_EngineType_Callback = int (*)();
    using TextTranslator__TranslatorEngineClient_IsSupported_Callback = bool (*)(const TextTranslator__TranslatorEngineClient*, int);
    using TextTranslator__TranslatorEngineClient_Event_Callback = bool (*)(TextTranslator__TranslatorEngineClient*, QEvent*);
    using TextTranslator__TranslatorEngineClient_EventFilter_Callback = bool (*)(TextTranslator__TranslatorEngineClient*, QObject*, QEvent*);
    using TextTranslator__TranslatorEngineClient_TimerEvent_Callback = void (*)(TextTranslator__TranslatorEngineClient*, QTimerEvent*);
    using TextTranslator__TranslatorEngineClient_ChildEvent_Callback = void (*)(TextTranslator__TranslatorEngineClient*, QChildEvent*);
    using TextTranslator__TranslatorEngineClient_CustomEvent_Callback = void (*)(TextTranslator__TranslatorEngineClient*, QEvent*);
    using TextTranslator__TranslatorEngineClient_ConnectNotify_Callback = void (*)(TextTranslator__TranslatorEngineClient*, QMetaMethod*);
    using TextTranslator__TranslatorEngineClient_DisconnectNotify_Callback = void (*)(TextTranslator__TranslatorEngineClient*, QMetaMethod*);
    using TextTranslator__TranslatorEngineClient_FillLanguages_Callback = libqt_map /* of int to libqt_string */ (*)();
    using TextTranslator__TranslatorEngineClient_Sender_Callback = QObject* (*)();
    using TextTranslator__TranslatorEngineClient_SenderSignalIndex_Callback = int (*)();
    using TextTranslator__TranslatorEngineClient_Receivers_Callback = int (*)(const TextTranslator__TranslatorEngineClient*, const char*);
    using TextTranslator__TranslatorEngineClient_IsSignalConnected_Callback = bool (*)(const TextTranslator__TranslatorEngineClient*, QMetaMethod*);

  protected:
    // Instance callback storage
    TextTranslator__TranslatorEngineClient_MetaObject_Callback texttranslator__translatorengineclient_metaobject_callback = nullptr;
    TextTranslator__TranslatorEngineClient_Metacast_Callback texttranslator__translatorengineclient_metacast_callback = nullptr;
    TextTranslator__TranslatorEngineClient_Metacall_Callback texttranslator__translatorengineclient_metacall_callback = nullptr;
    TextTranslator__TranslatorEngineClient_Name_Callback texttranslator__translatorengineclient_name_callback = nullptr;
    TextTranslator__TranslatorEngineClient_TranslatedName_Callback texttranslator__translatorengineclient_translatedname_callback = nullptr;
    TextTranslator__TranslatorEngineClient_CreateTranslator_Callback texttranslator__translatorengineclient_createtranslator_callback = nullptr;
    TextTranslator__TranslatorEngineClient_SupportedFromLanguages_Callback texttranslator__translatorengineclient_supportedfromlanguages_callback = nullptr;
    TextTranslator__TranslatorEngineClient_SupportedToLanguages_Callback texttranslator__translatorengineclient_supportedtolanguages_callback = nullptr;
    TextTranslator__TranslatorEngineClient_UpdateListLanguages_Callback texttranslator__translatorengineclient_updatelistlanguages_callback = nullptr;
    TextTranslator__TranslatorEngineClient_HasConfigurationDialog_Callback texttranslator__translatorengineclient_hasconfigurationdialog_callback = nullptr;
    TextTranslator__TranslatorEngineClient_ShowConfigureDialog_Callback texttranslator__translatorengineclient_showconfiguredialog_callback = nullptr;
    TextTranslator__TranslatorEngineClient_GenerateToListFromCurrentToLanguage_Callback texttranslator__translatorengineclient_generatetolistfromcurrenttolanguage_callback = nullptr;
    TextTranslator__TranslatorEngineClient_HasInvertSupport_Callback texttranslator__translatorengineclient_hasinvertsupport_callback = nullptr;
    TextTranslator__TranslatorEngineClient_EngineType_Callback texttranslator__translatorengineclient_enginetype_callback = nullptr;
    TextTranslator__TranslatorEngineClient_IsSupported_Callback texttranslator__translatorengineclient_issupported_callback = nullptr;
    TextTranslator__TranslatorEngineClient_Event_Callback texttranslator__translatorengineclient_event_callback = nullptr;
    TextTranslator__TranslatorEngineClient_EventFilter_Callback texttranslator__translatorengineclient_eventfilter_callback = nullptr;
    TextTranslator__TranslatorEngineClient_TimerEvent_Callback texttranslator__translatorengineclient_timerevent_callback = nullptr;
    TextTranslator__TranslatorEngineClient_ChildEvent_Callback texttranslator__translatorengineclient_childevent_callback = nullptr;
    TextTranslator__TranslatorEngineClient_CustomEvent_Callback texttranslator__translatorengineclient_customevent_callback = nullptr;
    TextTranslator__TranslatorEngineClient_ConnectNotify_Callback texttranslator__translatorengineclient_connectnotify_callback = nullptr;
    TextTranslator__TranslatorEngineClient_DisconnectNotify_Callback texttranslator__translatorengineclient_disconnectnotify_callback = nullptr;
    TextTranslator__TranslatorEngineClient_FillLanguages_Callback texttranslator__translatorengineclient_filllanguages_callback = nullptr;
    TextTranslator__TranslatorEngineClient_Sender_Callback texttranslator__translatorengineclient_sender_callback = nullptr;
    TextTranslator__TranslatorEngineClient_SenderSignalIndex_Callback texttranslator__translatorengineclient_sendersignalindex_callback = nullptr;
    TextTranslator__TranslatorEngineClient_Receivers_Callback texttranslator__translatorengineclient_receivers_callback = nullptr;
    TextTranslator__TranslatorEngineClient_IsSignalConnected_Callback texttranslator__translatorengineclient_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool texttranslator__translatorengineclient_metaobject_isbase = false;
    mutable bool texttranslator__translatorengineclient_metacast_isbase = false;
    mutable bool texttranslator__translatorengineclient_metacall_isbase = false;
    mutable bool texttranslator__translatorengineclient_name_isbase = false;
    mutable bool texttranslator__translatorengineclient_translatedname_isbase = false;
    mutable bool texttranslator__translatorengineclient_createtranslator_isbase = false;
    mutable bool texttranslator__translatorengineclient_supportedfromlanguages_isbase = false;
    mutable bool texttranslator__translatorengineclient_supportedtolanguages_isbase = false;
    mutable bool texttranslator__translatorengineclient_updatelistlanguages_isbase = false;
    mutable bool texttranslator__translatorengineclient_hasconfigurationdialog_isbase = false;
    mutable bool texttranslator__translatorengineclient_showconfiguredialog_isbase = false;
    mutable bool texttranslator__translatorengineclient_generatetolistfromcurrenttolanguage_isbase = false;
    mutable bool texttranslator__translatorengineclient_hasinvertsupport_isbase = false;
    mutable bool texttranslator__translatorengineclient_enginetype_isbase = false;
    mutable bool texttranslator__translatorengineclient_issupported_isbase = false;
    mutable bool texttranslator__translatorengineclient_event_isbase = false;
    mutable bool texttranslator__translatorengineclient_eventfilter_isbase = false;
    mutable bool texttranslator__translatorengineclient_timerevent_isbase = false;
    mutable bool texttranslator__translatorengineclient_childevent_isbase = false;
    mutable bool texttranslator__translatorengineclient_customevent_isbase = false;
    mutable bool texttranslator__translatorengineclient_connectnotify_isbase = false;
    mutable bool texttranslator__translatorengineclient_disconnectnotify_isbase = false;
    mutable bool texttranslator__translatorengineclient_filllanguages_isbase = false;
    mutable bool texttranslator__translatorengineclient_sender_isbase = false;
    mutable bool texttranslator__translatorengineclient_sendersignalindex_isbase = false;
    mutable bool texttranslator__translatorengineclient_receivers_isbase = false;
    mutable bool texttranslator__translatorengineclient_issignalconnected_isbase = false;

  public:
    VirtualTextTranslatorTranslatorEngineClient() : TextTranslator::TranslatorEngineClient() {};
    VirtualTextTranslatorTranslatorEngineClient(QObject* parent) : TextTranslator::TranslatorEngineClient(parent) {};

    // Callback setters
    inline void setTextTranslator__TranslatorEngineClient_MetaObject_Callback(TextTranslator__TranslatorEngineClient_MetaObject_Callback cb) { texttranslator__translatorengineclient_metaobject_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_Metacast_Callback(TextTranslator__TranslatorEngineClient_Metacast_Callback cb) { texttranslator__translatorengineclient_metacast_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_Metacall_Callback(TextTranslator__TranslatorEngineClient_Metacall_Callback cb) { texttranslator__translatorengineclient_metacall_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_Name_Callback(TextTranslator__TranslatorEngineClient_Name_Callback cb) { texttranslator__translatorengineclient_name_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_TranslatedName_Callback(TextTranslator__TranslatorEngineClient_TranslatedName_Callback cb) { texttranslator__translatorengineclient_translatedname_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_CreateTranslator_Callback(TextTranslator__TranslatorEngineClient_CreateTranslator_Callback cb) { texttranslator__translatorengineclient_createtranslator_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_SupportedFromLanguages_Callback(TextTranslator__TranslatorEngineClient_SupportedFromLanguages_Callback cb) { texttranslator__translatorengineclient_supportedfromlanguages_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_SupportedToLanguages_Callback(TextTranslator__TranslatorEngineClient_SupportedToLanguages_Callback cb) { texttranslator__translatorengineclient_supportedtolanguages_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_UpdateListLanguages_Callback(TextTranslator__TranslatorEngineClient_UpdateListLanguages_Callback cb) { texttranslator__translatorengineclient_updatelistlanguages_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_HasConfigurationDialog_Callback(TextTranslator__TranslatorEngineClient_HasConfigurationDialog_Callback cb) { texttranslator__translatorengineclient_hasconfigurationdialog_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_ShowConfigureDialog_Callback(TextTranslator__TranslatorEngineClient_ShowConfigureDialog_Callback cb) { texttranslator__translatorengineclient_showconfiguredialog_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_GenerateToListFromCurrentToLanguage_Callback(TextTranslator__TranslatorEngineClient_GenerateToListFromCurrentToLanguage_Callback cb) { texttranslator__translatorengineclient_generatetolistfromcurrenttolanguage_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_HasInvertSupport_Callback(TextTranslator__TranslatorEngineClient_HasInvertSupport_Callback cb) { texttranslator__translatorengineclient_hasinvertsupport_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_EngineType_Callback(TextTranslator__TranslatorEngineClient_EngineType_Callback cb) { texttranslator__translatorengineclient_enginetype_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_IsSupported_Callback(TextTranslator__TranslatorEngineClient_IsSupported_Callback cb) { texttranslator__translatorengineclient_issupported_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_Event_Callback(TextTranslator__TranslatorEngineClient_Event_Callback cb) { texttranslator__translatorengineclient_event_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_EventFilter_Callback(TextTranslator__TranslatorEngineClient_EventFilter_Callback cb) { texttranslator__translatorengineclient_eventfilter_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_TimerEvent_Callback(TextTranslator__TranslatorEngineClient_TimerEvent_Callback cb) { texttranslator__translatorengineclient_timerevent_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_ChildEvent_Callback(TextTranslator__TranslatorEngineClient_ChildEvent_Callback cb) { texttranslator__translatorengineclient_childevent_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_CustomEvent_Callback(TextTranslator__TranslatorEngineClient_CustomEvent_Callback cb) { texttranslator__translatorengineclient_customevent_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_ConnectNotify_Callback(TextTranslator__TranslatorEngineClient_ConnectNotify_Callback cb) { texttranslator__translatorengineclient_connectnotify_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_DisconnectNotify_Callback(TextTranslator__TranslatorEngineClient_DisconnectNotify_Callback cb) { texttranslator__translatorengineclient_disconnectnotify_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_FillLanguages_Callback(TextTranslator__TranslatorEngineClient_FillLanguages_Callback cb) { texttranslator__translatorengineclient_filllanguages_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_Sender_Callback(TextTranslator__TranslatorEngineClient_Sender_Callback cb) { texttranslator__translatorengineclient_sender_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_SenderSignalIndex_Callback(TextTranslator__TranslatorEngineClient_SenderSignalIndex_Callback cb) { texttranslator__translatorengineclient_sendersignalindex_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_Receivers_Callback(TextTranslator__TranslatorEngineClient_Receivers_Callback cb) { texttranslator__translatorengineclient_receivers_callback = cb; }
    inline void setTextTranslator__TranslatorEngineClient_IsSignalConnected_Callback(TextTranslator__TranslatorEngineClient_IsSignalConnected_Callback cb) { texttranslator__translatorengineclient_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setTextTranslator__TranslatorEngineClient_MetaObject_IsBase(bool value) const { texttranslator__translatorengineclient_metaobject_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_Metacast_IsBase(bool value) const { texttranslator__translatorengineclient_metacast_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_Metacall_IsBase(bool value) const { texttranslator__translatorengineclient_metacall_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_Name_IsBase(bool value) const { texttranslator__translatorengineclient_name_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_TranslatedName_IsBase(bool value) const { texttranslator__translatorengineclient_translatedname_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_CreateTranslator_IsBase(bool value) const { texttranslator__translatorengineclient_createtranslator_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_SupportedFromLanguages_IsBase(bool value) const { texttranslator__translatorengineclient_supportedfromlanguages_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_SupportedToLanguages_IsBase(bool value) const { texttranslator__translatorengineclient_supportedtolanguages_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_UpdateListLanguages_IsBase(bool value) const { texttranslator__translatorengineclient_updatelistlanguages_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_HasConfigurationDialog_IsBase(bool value) const { texttranslator__translatorengineclient_hasconfigurationdialog_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_ShowConfigureDialog_IsBase(bool value) const { texttranslator__translatorengineclient_showconfiguredialog_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_GenerateToListFromCurrentToLanguage_IsBase(bool value) const { texttranslator__translatorengineclient_generatetolistfromcurrenttolanguage_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_HasInvertSupport_IsBase(bool value) const { texttranslator__translatorengineclient_hasinvertsupport_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_EngineType_IsBase(bool value) const { texttranslator__translatorengineclient_enginetype_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_IsSupported_IsBase(bool value) const { texttranslator__translatorengineclient_issupported_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_Event_IsBase(bool value) const { texttranslator__translatorengineclient_event_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_EventFilter_IsBase(bool value) const { texttranslator__translatorengineclient_eventfilter_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_TimerEvent_IsBase(bool value) const { texttranslator__translatorengineclient_timerevent_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_ChildEvent_IsBase(bool value) const { texttranslator__translatorengineclient_childevent_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_CustomEvent_IsBase(bool value) const { texttranslator__translatorengineclient_customevent_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_ConnectNotify_IsBase(bool value) const { texttranslator__translatorengineclient_connectnotify_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_DisconnectNotify_IsBase(bool value) const { texttranslator__translatorengineclient_disconnectnotify_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_FillLanguages_IsBase(bool value) const { texttranslator__translatorengineclient_filllanguages_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_Sender_IsBase(bool value) const { texttranslator__translatorengineclient_sender_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_SenderSignalIndex_IsBase(bool value) const { texttranslator__translatorengineclient_sendersignalindex_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_Receivers_IsBase(bool value) const { texttranslator__translatorengineclient_receivers_isbase = value; }
    inline void setTextTranslator__TranslatorEngineClient_IsSignalConnected_IsBase(bool value) const { texttranslator__translatorengineclient_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (texttranslator__translatorengineclient_metaobject_isbase) {
            texttranslator__translatorengineclient_metaobject_isbase = false;
            return TextTranslator__TranslatorEngineClient::metaObject();
        }
        auto metaobject_cb = texttranslator__translatorengineclient_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineClient::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (texttranslator__translatorengineclient_metacast_isbase) {
            texttranslator__translatorengineclient_metacast_isbase = false;
            return TextTranslator__TranslatorEngineClient::qt_metacast(param1);
        }
        auto metacast_cb = texttranslator__translatorengineclient_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineClient::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (texttranslator__translatorengineclient_metacall_isbase) {
            texttranslator__translatorengineclient_metacall_isbase = false;
            return TextTranslator__TranslatorEngineClient::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = texttranslator__translatorengineclient_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorEngineClient::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString name() const override {
        auto name_cb = texttranslator__translatorengineclient_name_callback;
        if (name_cb) {
            const char* callback_ret = name_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QString translatedName() const override {
        auto translatedname_cb = texttranslator__translatorengineclient_translatedname_callback;
        if (translatedname_cb) {
            const char* callback_ret = translatedname_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual TextTranslator::TranslatorEnginePlugin* createTranslator() override {
        auto createtranslator_cb = texttranslator__translatorengineclient_createtranslator_callback;
        if (createtranslator_cb) {
            TextTranslator__TranslatorEnginePlugin* callback_ret = createtranslator_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<TextTranslator::TranslatorUtil::Language, QString> supportedFromLanguages() override {
        auto supportedfromlanguages_cb = texttranslator__translatorengineclient_supportedfromlanguages_callback;
        if (supportedfromlanguages_cb) {
            libqt_map /* of int to libqt_string */ callback_ret = supportedfromlanguages_cb();
            QMap<TextTranslator::TranslatorUtil::Language, QString> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            libqt_string* callback_ret_varr = static_cast<libqt_string*>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_varr_i_QString = QString::fromUtf8(callback_ret_varr[i].data, callback_ret_varr[i].len);
                callback_ret_QMap[static_cast<TextTranslator::TranslatorUtil::Language>(callback_ret_karr[i])] = callback_ret_varr_i_QString;
            }
            return callback_ret_QMap;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<TextTranslator::TranslatorUtil::Language, QString> supportedToLanguages() override {
        auto supportedtolanguages_cb = texttranslator__translatorengineclient_supportedtolanguages_callback;
        if (supportedtolanguages_cb) {
            libqt_map /* of int to libqt_string */ callback_ret = supportedtolanguages_cb();
            QMap<TextTranslator::TranslatorUtil::Language, QString> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            libqt_string* callback_ret_varr = static_cast<libqt_string*>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_varr_i_QString = QString::fromUtf8(callback_ret_varr[i].data, callback_ret_varr[i].len);
                callback_ret_QMap[static_cast<TextTranslator::TranslatorUtil::Language>(callback_ret_karr[i])] = callback_ret_varr_i_QString;
            }
            return callback_ret_QMap;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateListLanguages() override {
        if (texttranslator__translatorengineclient_updatelistlanguages_isbase) {
            texttranslator__translatorengineclient_updatelistlanguages_isbase = false;
            TextTranslator__TranslatorEngineClient::updateListLanguages();
            return;
        }
        auto updatelistlanguages_cb = texttranslator__translatorengineclient_updatelistlanguages_callback;
        if (updatelistlanguages_cb) {
            updatelistlanguages_cb();
            return;
        }
        TextTranslator__TranslatorEngineClient::updateListLanguages();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasConfigurationDialog() const override {
        if (texttranslator__translatorengineclient_hasconfigurationdialog_isbase) {
            texttranslator__translatorengineclient_hasconfigurationdialog_isbase = false;
            return TextTranslator__TranslatorEngineClient::hasConfigurationDialog();
        }
        auto hasconfigurationdialog_cb = texttranslator__translatorengineclient_hasconfigurationdialog_callback;
        if (hasconfigurationdialog_cb) {
            bool callback_ret = hasconfigurationdialog_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineClient::hasConfigurationDialog();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool showConfigureDialog(QWidget* parentWidget) override {
        if (texttranslator__translatorengineclient_showconfiguredialog_isbase) {
            texttranslator__translatorengineclient_showconfiguredialog_isbase = false;
            return TextTranslator__TranslatorEngineClient::showConfigureDialog(parentWidget);
        }
        auto showconfiguredialog_cb = texttranslator__translatorengineclient_showconfiguredialog_callback;
        if (showconfiguredialog_cb) {
            QWidget* cbval1 = parentWidget;
            bool callback_ret = showconfiguredialog_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineClient::showConfigureDialog(parentWidget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void generateToListFromCurrentToLanguage(const QString& languageCode) override {
        if (texttranslator__translatorengineclient_generatetolistfromcurrenttolanguage_isbase) {
            texttranslator__translatorengineclient_generatetolistfromcurrenttolanguage_isbase = false;
            TextTranslator__TranslatorEngineClient::generateToListFromCurrentToLanguage(languageCode);
            return;
        }
        auto generatetolistfromcurrenttolanguage_cb = texttranslator__translatorengineclient_generatetolistfromcurrenttolanguage_callback;
        if (generatetolistfromcurrenttolanguage_cb) {
            const auto languageCode_ret = languageCode;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray languageCode_b = languageCode_ret.toUtf8();
            auto languageCode_str_len = languageCode_b.length();
            const char* languageCode_str = static_cast<const char*>(malloc(languageCode_str_len + 1));
            memcpy((void*)languageCode_str, languageCode_b.data(), languageCode_str_len);
            ((char*)languageCode_str)[languageCode_str_len] = '\0';
            const char* cbval1 = languageCode_str;
            generatetolistfromcurrenttolanguage_cb(this, cbval1);
            libqt_free(languageCode_str);
            return;
        }
        TextTranslator__TranslatorEngineClient::generateToListFromCurrentToLanguage(languageCode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasInvertSupport() const override {
        if (texttranslator__translatorengineclient_hasinvertsupport_isbase) {
            texttranslator__translatorengineclient_hasinvertsupport_isbase = false;
            return TextTranslator__TranslatorEngineClient::hasInvertSupport();
        }
        auto hasinvertsupport_cb = texttranslator__translatorengineclient_hasinvertsupport_callback;
        if (hasinvertsupport_cb) {
            bool callback_ret = hasinvertsupport_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineClient::hasInvertSupport();
    }

    // Virtual method for C ABI access and custom callback
    virtual TextTranslator::TranslatorEngineClient::EngineType engineType() const override {
        auto enginetype_cb = texttranslator__translatorengineclient_enginetype_callback;
        if (enginetype_cb) {
            int callback_ret = enginetype_cb();
            return static_cast<TextTranslator::TranslatorEngineClient::EngineType>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSupported(TextTranslator::TranslatorUtil::Language lang) const override {
        auto issupported_cb = texttranslator__translatorengineclient_issupported_callback;
        if (issupported_cb) {
            int cbval1 = static_cast<int>(lang);
            bool callback_ret = issupported_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (texttranslator__translatorengineclient_event_isbase) {
            texttranslator__translatorengineclient_event_isbase = false;
            return TextTranslator__TranslatorEngineClient::event(event);
        }
        auto event_cb = texttranslator__translatorengineclient_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineClient::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (texttranslator__translatorengineclient_eventfilter_isbase) {
            texttranslator__translatorengineclient_eventfilter_isbase = false;
            return TextTranslator__TranslatorEngineClient::eventFilter(watched, event);
        }
        auto eventfilter_cb = texttranslator__translatorengineclient_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineClient::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (texttranslator__translatorengineclient_timerevent_isbase) {
            texttranslator__translatorengineclient_timerevent_isbase = false;
            TextTranslator__TranslatorEngineClient::timerEvent(event);
            return;
        }
        auto timerevent_cb = texttranslator__translatorengineclient_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineClient::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (texttranslator__translatorengineclient_childevent_isbase) {
            texttranslator__translatorengineclient_childevent_isbase = false;
            TextTranslator__TranslatorEngineClient::childEvent(event);
            return;
        }
        auto childevent_cb = texttranslator__translatorengineclient_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineClient::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (texttranslator__translatorengineclient_customevent_isbase) {
            texttranslator__translatorengineclient_customevent_isbase = false;
            TextTranslator__TranslatorEngineClient::customEvent(event);
            return;
        }
        auto customevent_cb = texttranslator__translatorengineclient_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineClient::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorengineclient_connectnotify_isbase) {
            texttranslator__translatorengineclient_connectnotify_isbase = false;
            TextTranslator__TranslatorEngineClient::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = texttranslator__translatorengineclient_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineClient::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorengineclient_disconnectnotify_isbase) {
            texttranslator__translatorengineclient_disconnectnotify_isbase = false;
            TextTranslator__TranslatorEngineClient::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = texttranslator__translatorengineclient_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineClient::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QMap<TextTranslator::TranslatorUtil::Language, QString> fillLanguages() {
        if (texttranslator__translatorengineclient_filllanguages_isbase) {
            texttranslator__translatorengineclient_filllanguages_isbase = false;
            return TextTranslator__TranslatorEngineClient::fillLanguages();
        }
        auto filllanguages_cb = texttranslator__translatorengineclient_filllanguages_callback;
        if (filllanguages_cb) {
            libqt_map /* of int to libqt_string */ callback_ret = filllanguages_cb();
            QMap<TextTranslator::TranslatorUtil::Language, QString> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            libqt_string* callback_ret_varr = static_cast<libqt_string*>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_varr_i_QString = QString::fromUtf8(callback_ret_varr[i].data, callback_ret_varr[i].len);
                callback_ret_QMap[static_cast<TextTranslator::TranslatorUtil::Language>(callback_ret_karr[i])] = callback_ret_varr_i_QString;
            }
            return callback_ret_QMap;
        }
        return TextTranslator__TranslatorEngineClient::fillLanguages();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (texttranslator__translatorengineclient_sender_isbase) {
            texttranslator__translatorengineclient_sender_isbase = false;
            return TextTranslator__TranslatorEngineClient::sender();
        }
        auto sender_cb = texttranslator__translatorengineclient_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineClient::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (texttranslator__translatorengineclient_sendersignalindex_isbase) {
            texttranslator__translatorengineclient_sendersignalindex_isbase = false;
            return TextTranslator__TranslatorEngineClient::senderSignalIndex();
        }
        auto sendersignalindex_cb = texttranslator__translatorengineclient_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorEngineClient::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (texttranslator__translatorengineclient_receivers_isbase) {
            texttranslator__translatorengineclient_receivers_isbase = false;
            return TextTranslator__TranslatorEngineClient::receivers(signal);
        }
        auto receivers_cb = texttranslator__translatorengineclient_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorEngineClient::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (texttranslator__translatorengineclient_issignalconnected_isbase) {
            texttranslator__translatorengineclient_issignalconnected_isbase = false;
            return TextTranslator__TranslatorEngineClient::isSignalConnected(signal);
        }
        auto issignalconnected_cb = texttranslator__translatorengineclient_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineClient::isSignalConnected(signal);
    }

    // Friend functions
    friend bool TextTranslator__TranslatorEngineClient_IsSupported(const TextTranslator::TranslatorEngineClient* self, int lang);
    friend bool TextTranslator__TranslatorEngineClient_SuperIsSupported(const TextTranslator::TranslatorEngineClient* self, int lang);
    friend void TextTranslator__TranslatorEngineClient_TimerEvent(TextTranslator::TranslatorEngineClient* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorEngineClient_SuperTimerEvent(TextTranslator::TranslatorEngineClient* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorEngineClient_ChildEvent(TextTranslator::TranslatorEngineClient* self, QChildEvent* event);
    friend void TextTranslator__TranslatorEngineClient_SuperChildEvent(TextTranslator::TranslatorEngineClient* self, QChildEvent* event);
    friend void TextTranslator__TranslatorEngineClient_CustomEvent(TextTranslator::TranslatorEngineClient* self, QEvent* event);
    friend void TextTranslator__TranslatorEngineClient_SuperCustomEvent(TextTranslator::TranslatorEngineClient* self, QEvent* event);
    friend void TextTranslator__TranslatorEngineClient_ConnectNotify(TextTranslator::TranslatorEngineClient* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorEngineClient_SuperConnectNotify(TextTranslator::TranslatorEngineClient* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorEngineClient_DisconnectNotify(TextTranslator::TranslatorEngineClient* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorEngineClient_SuperDisconnectNotify(TextTranslator::TranslatorEngineClient* self, const QMetaMethod* signal);
    friend libqt_map /* of int to libqt_string */ TextTranslator__TranslatorEngineClient_FillLanguages(TextTranslator::TranslatorEngineClient* self);
    friend libqt_map /* of int to libqt_string */ TextTranslator__TranslatorEngineClient_SuperFillLanguages(TextTranslator::TranslatorEngineClient* self);
    friend QObject* TextTranslator__TranslatorEngineClient_Sender(const TextTranslator::TranslatorEngineClient* self);
    friend QObject* TextTranslator__TranslatorEngineClient_SuperSender(const TextTranslator::TranslatorEngineClient* self);
    friend int TextTranslator__TranslatorEngineClient_SenderSignalIndex(const TextTranslator::TranslatorEngineClient* self);
    friend int TextTranslator__TranslatorEngineClient_SuperSenderSignalIndex(const TextTranslator::TranslatorEngineClient* self);
    friend int TextTranslator__TranslatorEngineClient_Receivers(const TextTranslator::TranslatorEngineClient* self, const char* signal);
    friend int TextTranslator__TranslatorEngineClient_SuperReceivers(const TextTranslator::TranslatorEngineClient* self, const char* signal);
    friend bool TextTranslator__TranslatorEngineClient_IsSignalConnected(const TextTranslator::TranslatorEngineClient* self, const QMetaMethod* signal);
    friend bool TextTranslator__TranslatorEngineClient_SuperIsSignalConnected(const TextTranslator::TranslatorEngineClient* self, const QMetaMethod* signal);
};

#endif
