#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBTRANSLATORENGINECLIENT_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBTRANSLATORENGINECLIENT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextTranslator::TranslatorEngineClient
class VirtualTextTranslatorTranslatorEngineClient : public TextTranslator::TranslatorEngineClient {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextTranslator__TranslatorEngineClient_MetaObject_Callback = QMetaObject* (*)(const TextTranslator__TranslatorEngineClient*);
    using TextTranslator__TranslatorEngineClient_Metacast_Callback = void* (*)(TextTranslator__TranslatorEngineClient*, const char*);
    using TextTranslator__TranslatorEngineClient_Metacall_Callback = int (*)(TextTranslator__TranslatorEngineClient*, int, int, void**);
    using TextTranslator__TranslatorEngineClient_Name_Callback = const char* (*)(const TextTranslator__TranslatorEngineClient*);
    using TextTranslator__TranslatorEngineClient_TranslatedName_Callback = const char* (*)(const TextTranslator__TranslatorEngineClient*);
    using TextTranslator__TranslatorEngineClient_CreateTranslator_Callback = TextTranslator__TranslatorEnginePlugin* (*)(TextTranslator__TranslatorEngineClient*);
    using TextTranslator__TranslatorEngineClient_SupportedFromLanguages_Callback = libqt_map /* of int to libqt_string */ (*)(TextTranslator__TranslatorEngineClient*);
    using TextTranslator__TranslatorEngineClient_SupportedToLanguages_Callback = libqt_map /* of int to libqt_string */ (*)(TextTranslator__TranslatorEngineClient*);
    using TextTranslator__TranslatorEngineClient_UpdateListLanguages_Callback = void (*)(TextTranslator__TranslatorEngineClient*);
    using TextTranslator__TranslatorEngineClient_HasConfigurationDialog_Callback = bool (*)(const TextTranslator__TranslatorEngineClient*);
    using TextTranslator__TranslatorEngineClient_ShowConfigureDialog_Callback = bool (*)(TextTranslator__TranslatorEngineClient*, QWidget*);
    using TextTranslator__TranslatorEngineClient_GenerateToListFromCurrentToLanguage_Callback = void (*)(TextTranslator__TranslatorEngineClient*, const char*);
    using TextTranslator__TranslatorEngineClient_HasInvertSupport_Callback = bool (*)(const TextTranslator__TranslatorEngineClient*);
    using TextTranslator__TranslatorEngineClient_EngineType_Callback = int (*)(const TextTranslator__TranslatorEngineClient*);
    using TextTranslator__TranslatorEngineClient_IsSupported_Callback = bool (*)(const TextTranslator__TranslatorEngineClient*, int);
    using TextTranslator__TranslatorEngineClient_Event_Callback = bool (*)(TextTranslator__TranslatorEngineClient*, QEvent*);
    using TextTranslator__TranslatorEngineClient_EventFilter_Callback = bool (*)(TextTranslator__TranslatorEngineClient*, QObject*, QEvent*);
    using TextTranslator__TranslatorEngineClient_TimerEvent_Callback = void (*)(TextTranslator__TranslatorEngineClient*, QTimerEvent*);
    using TextTranslator__TranslatorEngineClient_ChildEvent_Callback = void (*)(TextTranslator__TranslatorEngineClient*, QChildEvent*);
    using TextTranslator__TranslatorEngineClient_CustomEvent_Callback = void (*)(TextTranslator__TranslatorEngineClient*, QEvent*);
    using TextTranslator__TranslatorEngineClient_ConnectNotify_Callback = void (*)(TextTranslator__TranslatorEngineClient*, QMetaMethod*);
    using TextTranslator__TranslatorEngineClient_DisconnectNotify_Callback = void (*)(TextTranslator__TranslatorEngineClient*, QMetaMethod*);
    using TextTranslator::TranslatorEngineClient::fillLanguages;
    using TextTranslator::TranslatorEngineClient::isSignalConnected;
    using TextTranslator::TranslatorEngineClient::receivers;
    using TextTranslator::TranslatorEngineClient::sender;
    using TextTranslator::TranslatorEngineClient::senderSignalIndex;

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

    // Access struct
    struct Base : TextTranslator::TranslatorEngineClient {
        using TextTranslator::TranslatorEngineClient::childEvent;
        using TextTranslator::TranslatorEngineClient::connectNotify;
        using TextTranslator::TranslatorEngineClient::customEvent;
        using TextTranslator::TranslatorEngineClient::disconnectNotify;
        using TextTranslator::TranslatorEngineClient::isSupported;
        using TextTranslator::TranslatorEngineClient::timerEvent;
    };

    VirtualTextTranslatorTranslatorEngineClient() : TextTranslator::TranslatorEngineClient() {};
    VirtualTextTranslatorTranslatorEngineClient(QObject* parent) : TextTranslator::TranslatorEngineClient(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (texttranslator__translatorengineclient_metaobject_callback) {
            QMetaObject* callback_ret = texttranslator__translatorengineclient_metaobject_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineClient::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (texttranslator__translatorengineclient_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = texttranslator__translatorengineclient_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineClient::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (texttranslator__translatorengineclient_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = texttranslator__translatorengineclient_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorEngineClient::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString name() const override {
        if (texttranslator__translatorengineclient_name_callback) {
            const char* callback_ret = texttranslator__translatorengineclient_name_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method TextTranslator::TranslatorEngineClient::name called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString translatedName() const override {
        if (texttranslator__translatorengineclient_translatedname_callback) {
            const char* callback_ret = texttranslator__translatorengineclient_translatedname_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method TextTranslator::TranslatorEngineClient::translatedName called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual TextTranslator::TranslatorEnginePlugin* createTranslator() override {
        if (texttranslator__translatorengineclient_createtranslator_callback) {
            TextTranslator__TranslatorEnginePlugin* callback_ret = texttranslator__translatorengineclient_createtranslator_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method TextTranslator::TranslatorEngineClient::createTranslator called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<TextTranslator::TranslatorUtil::Language, QString> supportedFromLanguages() override {
        if (texttranslator__translatorengineclient_supportedfromlanguages_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = texttranslator__translatorengineclient_supportedfromlanguages_callback(this);
            QMap<TextTranslator::TranslatorUtil::Language, QString> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            libqt_string* callback_ret_varr = static_cast<libqt_string*>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_varr_i_QString = QString::fromUtf8(callback_ret_varr[i].data, callback_ret_varr[i].len);
                callback_ret_QMap.insert(static_cast<TextTranslator::TranslatorUtil::Language>(callback_ret_karr[i]), callback_ret_varr_i_QString);
            }
            return callback_ret_QMap;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method TextTranslator::TranslatorEngineClient::supportedFromLanguages called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<TextTranslator::TranslatorUtil::Language, QString> supportedToLanguages() override {
        if (texttranslator__translatorengineclient_supportedtolanguages_callback) {
            libqt_map /* of int to libqt_string */ callback_ret = texttranslator__translatorengineclient_supportedtolanguages_callback(this);
            QMap<TextTranslator::TranslatorUtil::Language, QString> callback_ret_QMap;
            int* callback_ret_karr = static_cast<int*>(callback_ret.keys);
            libqt_string* callback_ret_varr = static_cast<libqt_string*>(callback_ret.values);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_varr_i_QString = QString::fromUtf8(callback_ret_varr[i].data, callback_ret_varr[i].len);
                callback_ret_QMap.insert(static_cast<TextTranslator::TranslatorUtil::Language>(callback_ret_karr[i]), callback_ret_varr_i_QString);
            }
            return callback_ret_QMap;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method TextTranslator::TranslatorEngineClient::supportedToLanguages called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateListLanguages() override {
        if (texttranslator__translatorengineclient_updatelistlanguages_callback) {
            texttranslator__translatorengineclient_updatelistlanguages_callback(this);
            return;
        }
        TextTranslator__TranslatorEngineClient::updateListLanguages();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasConfigurationDialog() const override {
        if (texttranslator__translatorengineclient_hasconfigurationdialog_callback) {
            bool callback_ret = texttranslator__translatorengineclient_hasconfigurationdialog_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineClient::hasConfigurationDialog();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool showConfigureDialog(QWidget* parentWidget) override {
        if (texttranslator__translatorengineclient_showconfiguredialog_callback) {
            QWidget* cbval1 = parentWidget;
            bool callback_ret = texttranslator__translatorengineclient_showconfiguredialog_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineClient::showConfigureDialog(parentWidget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void generateToListFromCurrentToLanguage(const QString& languageCode) override {
        if (texttranslator__translatorengineclient_generatetolistfromcurrenttolanguage_callback) {
            const auto languageCode_ret = languageCode;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray languageCode_b = languageCode_ret.toUtf8();
            auto languageCode_str_len = languageCode_b.length();
            const char* languageCode_str = static_cast<const char*>(malloc(languageCode_str_len + 1));
            memcpy((void*)languageCode_str, languageCode_b.data(), languageCode_str_len);
            ((char*)languageCode_str)[languageCode_str_len] = '\0';
            const char* cbval1 = languageCode_str;
            texttranslator__translatorengineclient_generatetolistfromcurrenttolanguage_callback(this, cbval1);
            libqt_free(languageCode_str);
            return;
        }
        TextTranslator__TranslatorEngineClient::generateToListFromCurrentToLanguage(languageCode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasInvertSupport() const override {
        if (texttranslator__translatorengineclient_hasinvertsupport_callback) {
            bool callback_ret = texttranslator__translatorengineclient_hasinvertsupport_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineClient::hasInvertSupport();
    }

    // Virtual method for C ABI access and custom callback
    virtual TextTranslator::TranslatorEngineClient::EngineType engineType() const override {
        if (texttranslator__translatorengineclient_enginetype_callback) {
            int callback_ret = texttranslator__translatorengineclient_enginetype_callback(this);
            return static_cast<TextTranslator::TranslatorEngineClient::EngineType>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method TextTranslator::TranslatorEngineClient::engineType called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSupported(TextTranslator::TranslatorUtil::Language lang) const override {
        if (texttranslator__translatorengineclient_issupported_callback) {
            int cbval1 = static_cast<int>(lang);
            bool callback_ret = texttranslator__translatorengineclient_issupported_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method TextTranslator::TranslatorEngineClient::isSupported called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (texttranslator__translatorengineclient_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = texttranslator__translatorengineclient_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineClient::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (texttranslator__translatorengineclient_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = texttranslator__translatorengineclient_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextTranslator__TranslatorEngineClient::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (texttranslator__translatorengineclient_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            texttranslator__translatorengineclient_timerevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineClient::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (texttranslator__translatorengineclient_childevent_callback) {
            QChildEvent* cbval1 = event;
            texttranslator__translatorengineclient_childevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineClient::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (texttranslator__translatorengineclient_customevent_callback) {
            QEvent* cbval1 = event;
            texttranslator__translatorengineclient_customevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineClient::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorengineclient_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatorengineclient_connectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineClient::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorengineclient_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatorengineclient_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorEngineClient::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextTranslator__TranslatorEngineClient_SuperTimerEvent(TextTranslator::TranslatorEngineClient* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorEngineClient_SuperChildEvent(TextTranslator::TranslatorEngineClient* self, QChildEvent* event);
    friend void TextTranslator__TranslatorEngineClient_SuperCustomEvent(TextTranslator::TranslatorEngineClient* self, QEvent* event);
    friend void TextTranslator__TranslatorEngineClient_SuperConnectNotify(TextTranslator::TranslatorEngineClient* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorEngineClient_SuperDisconnectNotify(TextTranslator::TranslatorEngineClient* self, const QMetaMethod* signal);
};

#endif
