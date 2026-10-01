#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKMESSAGEBOXDONTASKAGAININTERFACE_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKMESSAGEBOXDONTASKAGAININTERFACE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KMessageBoxDontAskAgainInterface
class VirtualKMessageBoxDontAskAgainInterface : public KMessageBoxDontAskAgainInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using KMessageBoxDontAskAgainInterface_ShouldBeShownTwoActions_Callback = bool (*)(KMessageBoxDontAskAgainInterface*, const char*, int*);
    using KMessageBoxDontAskAgainInterface_ShouldBeShownContinue_Callback = bool (*)(KMessageBoxDontAskAgainInterface*, const char*);
    using KMessageBoxDontAskAgainInterface_SaveDontShowAgainTwoActions_Callback = void (*)(KMessageBoxDontAskAgainInterface*, const char*, int);
    using KMessageBoxDontAskAgainInterface_SaveDontShowAgainContinue_Callback = void (*)(KMessageBoxDontAskAgainInterface*, const char*);
    using KMessageBoxDontAskAgainInterface_EnableAllMessages_Callback = void (*)(KMessageBoxDontAskAgainInterface*);
    using KMessageBoxDontAskAgainInterface_EnableMessage_Callback = void (*)(KMessageBoxDontAskAgainInterface*, const char*);
    using KMessageBoxDontAskAgainInterface_SetConfig_Callback = void (*)(KMessageBoxDontAskAgainInterface*, KConfig*);

    // Instance callback storage
    KMessageBoxDontAskAgainInterface_ShouldBeShownTwoActions_Callback kmessageboxdontaskagaininterface_shouldbeshowntwoactions_callback = nullptr;
    KMessageBoxDontAskAgainInterface_ShouldBeShownContinue_Callback kmessageboxdontaskagaininterface_shouldbeshowncontinue_callback = nullptr;
    KMessageBoxDontAskAgainInterface_SaveDontShowAgainTwoActions_Callback kmessageboxdontaskagaininterface_savedontshowagaintwoactions_callback = nullptr;
    KMessageBoxDontAskAgainInterface_SaveDontShowAgainContinue_Callback kmessageboxdontaskagaininterface_savedontshowagaincontinue_callback = nullptr;
    KMessageBoxDontAskAgainInterface_EnableAllMessages_Callback kmessageboxdontaskagaininterface_enableallmessages_callback = nullptr;
    KMessageBoxDontAskAgainInterface_EnableMessage_Callback kmessageboxdontaskagaininterface_enablemessage_callback = nullptr;
    KMessageBoxDontAskAgainInterface_SetConfig_Callback kmessageboxdontaskagaininterface_setconfig_callback = nullptr;

    VirtualKMessageBoxDontAskAgainInterface() : KMessageBoxDontAskAgainInterface() {};

    // Virtual method for C ABI access and custom callback
    virtual bool shouldBeShownTwoActions(const QString& dontShowAgainName, KMessageBox::ButtonCode& result) override {
        if (kmessageboxdontaskagaininterface_shouldbeshowntwoactions_callback) {
            const auto dontShowAgainName_ret = dontShowAgainName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray dontShowAgainName_b = dontShowAgainName_ret.toUtf8();
            auto dontShowAgainName_str_len = dontShowAgainName_b.length();
            const char* dontShowAgainName_str = static_cast<const char*>(malloc(dontShowAgainName_str_len + 1));
            memcpy((void*)dontShowAgainName_str, dontShowAgainName_b.data(), dontShowAgainName_str_len);
            ((char*)dontShowAgainName_str)[dontShowAgainName_str_len] = '\0';
            const char* cbval1 = dontShowAgainName_str;
            KMessageBox::ButtonCode& result_ret = result;
            int* cbval2 = reinterpret_cast<int*>(&result_ret);
            bool callback_ret = kmessageboxdontaskagaininterface_shouldbeshowntwoactions_callback(this, cbval1, cbval2);
            libqt_free(dontShowAgainName_str);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KMessageBoxDontAskAgainInterface::shouldBeShownTwoActions called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldBeShownContinue(const QString& dontShowAgainName) override {
        if (kmessageboxdontaskagaininterface_shouldbeshowncontinue_callback) {
            const auto dontShowAgainName_ret = dontShowAgainName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray dontShowAgainName_b = dontShowAgainName_ret.toUtf8();
            auto dontShowAgainName_str_len = dontShowAgainName_b.length();
            const char* dontShowAgainName_str = static_cast<const char*>(malloc(dontShowAgainName_str_len + 1));
            memcpy((void*)dontShowAgainName_str, dontShowAgainName_b.data(), dontShowAgainName_str_len);
            ((char*)dontShowAgainName_str)[dontShowAgainName_str_len] = '\0';
            const char* cbval1 = dontShowAgainName_str;
            bool callback_ret = kmessageboxdontaskagaininterface_shouldbeshowncontinue_callback(this, cbval1);
            libqt_free(dontShowAgainName_str);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KMessageBoxDontAskAgainInterface::shouldBeShownContinue called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveDontShowAgainTwoActions(const QString& dontShowAgainName, KMessageBox::ButtonCode result) override {
        if (kmessageboxdontaskagaininterface_savedontshowagaintwoactions_callback) {
            const auto dontShowAgainName_ret = dontShowAgainName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray dontShowAgainName_b = dontShowAgainName_ret.toUtf8();
            auto dontShowAgainName_str_len = dontShowAgainName_b.length();
            const char* dontShowAgainName_str = static_cast<const char*>(malloc(dontShowAgainName_str_len + 1));
            memcpy((void*)dontShowAgainName_str, dontShowAgainName_b.data(), dontShowAgainName_str_len);
            ((char*)dontShowAgainName_str)[dontShowAgainName_str_len] = '\0';
            const char* cbval1 = dontShowAgainName_str;
            int cbval2 = static_cast<int>(result);
            kmessageboxdontaskagaininterface_savedontshowagaintwoactions_callback(this, cbval1, cbval2);
            libqt_free(dontShowAgainName_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KMessageBoxDontAskAgainInterface::saveDontShowAgainTwoActions called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveDontShowAgainContinue(const QString& dontShowAgainName) override {
        if (kmessageboxdontaskagaininterface_savedontshowagaincontinue_callback) {
            const auto dontShowAgainName_ret = dontShowAgainName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray dontShowAgainName_b = dontShowAgainName_ret.toUtf8();
            auto dontShowAgainName_str_len = dontShowAgainName_b.length();
            const char* dontShowAgainName_str = static_cast<const char*>(malloc(dontShowAgainName_str_len + 1));
            memcpy((void*)dontShowAgainName_str, dontShowAgainName_b.data(), dontShowAgainName_str_len);
            ((char*)dontShowAgainName_str)[dontShowAgainName_str_len] = '\0';
            const char* cbval1 = dontShowAgainName_str;
            kmessageboxdontaskagaininterface_savedontshowagaincontinue_callback(this, cbval1);
            libqt_free(dontShowAgainName_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KMessageBoxDontAskAgainInterface::saveDontShowAgainContinue called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void enableAllMessages() override {
        if (kmessageboxdontaskagaininterface_enableallmessages_callback) {
            kmessageboxdontaskagaininterface_enableallmessages_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KMessageBoxDontAskAgainInterface::enableAllMessages called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void enableMessage(const QString& dontShowAgainName) override {
        if (kmessageboxdontaskagaininterface_enablemessage_callback) {
            const auto dontShowAgainName_ret = dontShowAgainName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray dontShowAgainName_b = dontShowAgainName_ret.toUtf8();
            auto dontShowAgainName_str_len = dontShowAgainName_b.length();
            const char* dontShowAgainName_str = static_cast<const char*>(malloc(dontShowAgainName_str_len + 1));
            memcpy((void*)dontShowAgainName_str, dontShowAgainName_b.data(), dontShowAgainName_str_len);
            ((char*)dontShowAgainName_str)[dontShowAgainName_str_len] = '\0';
            const char* cbval1 = dontShowAgainName_str;
            kmessageboxdontaskagaininterface_enablemessage_callback(this, cbval1);
            libqt_free(dontShowAgainName_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KMessageBoxDontAskAgainInterface::enableMessage called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setConfig(KConfig* config) override {
        if (kmessageboxdontaskagaininterface_setconfig_callback) {
            KConfig* cbval1 = config;
            kmessageboxdontaskagaininterface_setconfig_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KMessageBoxDontAskAgainInterface::setConfig called without being implemented");
    }
};

#endif
