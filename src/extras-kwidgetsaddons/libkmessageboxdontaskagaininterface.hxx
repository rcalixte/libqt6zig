#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKMESSAGEBOXDONTASKAGAININTERFACE_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKMESSAGEBOXDONTASKAGAININTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KMessageBoxDontAskAgainInterface so that we can call protected methods
class VirtualKMessageBoxDontAskAgainInterface : public KMessageBoxDontAskAgainInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualKMessageBoxDontAskAgainInterface = true;

    // Virtual class public types (including callbacks)
    using KMessageBoxDontAskAgainInterface_ShouldBeShownTwoActions_Callback = bool (*)(KMessageBoxDontAskAgainInterface*, libqt_string, int*);
    using KMessageBoxDontAskAgainInterface_ShouldBeShownContinue_Callback = bool (*)(KMessageBoxDontAskAgainInterface*, libqt_string);
    using KMessageBoxDontAskAgainInterface_SaveDontShowAgainTwoActions_Callback = void (*)(KMessageBoxDontAskAgainInterface*, libqt_string, int);
    using KMessageBoxDontAskAgainInterface_SaveDontShowAgainContinue_Callback = void (*)(KMessageBoxDontAskAgainInterface*, libqt_string);
    using KMessageBoxDontAskAgainInterface_EnableAllMessages_Callback = void (*)();
    using KMessageBoxDontAskAgainInterface_EnableMessage_Callback = void (*)(KMessageBoxDontAskAgainInterface*, libqt_string);
    using KMessageBoxDontAskAgainInterface_SetConfig_Callback = void (*)(KMessageBoxDontAskAgainInterface*, KConfig*);

  protected:
    // Instance callback storage
    KMessageBoxDontAskAgainInterface_ShouldBeShownTwoActions_Callback kmessageboxdontaskagaininterface_shouldbeshowntwoactions_callback = nullptr;
    KMessageBoxDontAskAgainInterface_ShouldBeShownContinue_Callback kmessageboxdontaskagaininterface_shouldbeshowncontinue_callback = nullptr;
    KMessageBoxDontAskAgainInterface_SaveDontShowAgainTwoActions_Callback kmessageboxdontaskagaininterface_savedontshowagaintwoactions_callback = nullptr;
    KMessageBoxDontAskAgainInterface_SaveDontShowAgainContinue_Callback kmessageboxdontaskagaininterface_savedontshowagaincontinue_callback = nullptr;
    KMessageBoxDontAskAgainInterface_EnableAllMessages_Callback kmessageboxdontaskagaininterface_enableallmessages_callback = nullptr;
    KMessageBoxDontAskAgainInterface_EnableMessage_Callback kmessageboxdontaskagaininterface_enablemessage_callback = nullptr;
    KMessageBoxDontAskAgainInterface_SetConfig_Callback kmessageboxdontaskagaininterface_setconfig_callback = nullptr;

    // Instance base flags
    mutable bool kmessageboxdontaskagaininterface_shouldbeshowntwoactions_isbase = false;
    mutable bool kmessageboxdontaskagaininterface_shouldbeshowncontinue_isbase = false;
    mutable bool kmessageboxdontaskagaininterface_savedontshowagaintwoactions_isbase = false;
    mutable bool kmessageboxdontaskagaininterface_savedontshowagaincontinue_isbase = false;
    mutable bool kmessageboxdontaskagaininterface_enableallmessages_isbase = false;
    mutable bool kmessageboxdontaskagaininterface_enablemessage_isbase = false;
    mutable bool kmessageboxdontaskagaininterface_setconfig_isbase = false;

  public:
    VirtualKMessageBoxDontAskAgainInterface() : KMessageBoxDontAskAgainInterface() {};

    ~VirtualKMessageBoxDontAskAgainInterface() {
        kmessageboxdontaskagaininterface_shouldbeshowntwoactions_callback = nullptr;
        kmessageboxdontaskagaininterface_shouldbeshowncontinue_callback = nullptr;
        kmessageboxdontaskagaininterface_savedontshowagaintwoactions_callback = nullptr;
        kmessageboxdontaskagaininterface_savedontshowagaincontinue_callback = nullptr;
        kmessageboxdontaskagaininterface_enableallmessages_callback = nullptr;
        kmessageboxdontaskagaininterface_enablemessage_callback = nullptr;
        kmessageboxdontaskagaininterface_setconfig_callback = nullptr;
    }

    // Callback setters
    inline void setKMessageBoxDontAskAgainInterface_ShouldBeShownTwoActions_Callback(KMessageBoxDontAskAgainInterface_ShouldBeShownTwoActions_Callback cb) { kmessageboxdontaskagaininterface_shouldbeshowntwoactions_callback = cb; }
    inline void setKMessageBoxDontAskAgainInterface_ShouldBeShownContinue_Callback(KMessageBoxDontAskAgainInterface_ShouldBeShownContinue_Callback cb) { kmessageboxdontaskagaininterface_shouldbeshowncontinue_callback = cb; }
    inline void setKMessageBoxDontAskAgainInterface_SaveDontShowAgainTwoActions_Callback(KMessageBoxDontAskAgainInterface_SaveDontShowAgainTwoActions_Callback cb) { kmessageboxdontaskagaininterface_savedontshowagaintwoactions_callback = cb; }
    inline void setKMessageBoxDontAskAgainInterface_SaveDontShowAgainContinue_Callback(KMessageBoxDontAskAgainInterface_SaveDontShowAgainContinue_Callback cb) { kmessageboxdontaskagaininterface_savedontshowagaincontinue_callback = cb; }
    inline void setKMessageBoxDontAskAgainInterface_EnableAllMessages_Callback(KMessageBoxDontAskAgainInterface_EnableAllMessages_Callback cb) { kmessageboxdontaskagaininterface_enableallmessages_callback = cb; }
    inline void setKMessageBoxDontAskAgainInterface_EnableMessage_Callback(KMessageBoxDontAskAgainInterface_EnableMessage_Callback cb) { kmessageboxdontaskagaininterface_enablemessage_callback = cb; }
    inline void setKMessageBoxDontAskAgainInterface_SetConfig_Callback(KMessageBoxDontAskAgainInterface_SetConfig_Callback cb) { kmessageboxdontaskagaininterface_setconfig_callback = cb; }

    // Base flag setters
    inline void setKMessageBoxDontAskAgainInterface_ShouldBeShownTwoActions_IsBase(bool value) const { kmessageboxdontaskagaininterface_shouldbeshowntwoactions_isbase = value; }
    inline void setKMessageBoxDontAskAgainInterface_ShouldBeShownContinue_IsBase(bool value) const { kmessageboxdontaskagaininterface_shouldbeshowncontinue_isbase = value; }
    inline void setKMessageBoxDontAskAgainInterface_SaveDontShowAgainTwoActions_IsBase(bool value) const { kmessageboxdontaskagaininterface_savedontshowagaintwoactions_isbase = value; }
    inline void setKMessageBoxDontAskAgainInterface_SaveDontShowAgainContinue_IsBase(bool value) const { kmessageboxdontaskagaininterface_savedontshowagaincontinue_isbase = value; }
    inline void setKMessageBoxDontAskAgainInterface_EnableAllMessages_IsBase(bool value) const { kmessageboxdontaskagaininterface_enableallmessages_isbase = value; }
    inline void setKMessageBoxDontAskAgainInterface_EnableMessage_IsBase(bool value) const { kmessageboxdontaskagaininterface_enablemessage_isbase = value; }
    inline void setKMessageBoxDontAskAgainInterface_SetConfig_IsBase(bool value) const { kmessageboxdontaskagaininterface_setconfig_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldBeShownTwoActions(const QString& dontShowAgainName, KMessageBox::ButtonCode& result) override {
        if (kmessageboxdontaskagaininterface_shouldbeshowntwoactions_callback != nullptr) {
            const QString dontShowAgainName_ret = dontShowAgainName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray dontShowAgainName_b = dontShowAgainName_ret.toUtf8();
            libqt_string dontShowAgainName_str;
            dontShowAgainName_str.len = dontShowAgainName_b.length();
            dontShowAgainName_str.data = static_cast<const char*>(malloc(dontShowAgainName_str.len + 1));
            memcpy((void*)dontShowAgainName_str.data, dontShowAgainName_b.data(), dontShowAgainName_str.len);
            ((char*)dontShowAgainName_str.data)[dontShowAgainName_str.len] = '\0';
            libqt_string cbval1 = dontShowAgainName_str;
            KMessageBox::ButtonCode& result_ret = result;
            int* cbval2 = reinterpret_cast<int*>(&result);

            bool callback_ret = kmessageboxdontaskagaininterface_shouldbeshowntwoactions_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool shouldBeShownContinue(const QString& dontShowAgainName) override {
        if (kmessageboxdontaskagaininterface_shouldbeshowncontinue_callback != nullptr) {
            const QString dontShowAgainName_ret = dontShowAgainName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray dontShowAgainName_b = dontShowAgainName_ret.toUtf8();
            libqt_string dontShowAgainName_str;
            dontShowAgainName_str.len = dontShowAgainName_b.length();
            dontShowAgainName_str.data = static_cast<const char*>(malloc(dontShowAgainName_str.len + 1));
            memcpy((void*)dontShowAgainName_str.data, dontShowAgainName_b.data(), dontShowAgainName_str.len);
            ((char*)dontShowAgainName_str.data)[dontShowAgainName_str.len] = '\0';
            libqt_string cbval1 = dontShowAgainName_str;

            bool callback_ret = kmessageboxdontaskagaininterface_shouldbeshowncontinue_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveDontShowAgainTwoActions(const QString& dontShowAgainName, KMessageBox::ButtonCode result) override {
        if (kmessageboxdontaskagaininterface_savedontshowagaintwoactions_callback != nullptr) {
            const QString dontShowAgainName_ret = dontShowAgainName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray dontShowAgainName_b = dontShowAgainName_ret.toUtf8();
            libqt_string dontShowAgainName_str;
            dontShowAgainName_str.len = dontShowAgainName_b.length();
            dontShowAgainName_str.data = static_cast<const char*>(malloc(dontShowAgainName_str.len + 1));
            memcpy((void*)dontShowAgainName_str.data, dontShowAgainName_b.data(), dontShowAgainName_str.len);
            ((char*)dontShowAgainName_str.data)[dontShowAgainName_str.len] = '\0';
            libqt_string cbval1 = dontShowAgainName_str;
            int cbval2 = static_cast<int>(result);

            kmessageboxdontaskagaininterface_savedontshowagaintwoactions_callback(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void saveDontShowAgainContinue(const QString& dontShowAgainName) override {
        if (kmessageboxdontaskagaininterface_savedontshowagaincontinue_callback != nullptr) {
            const QString dontShowAgainName_ret = dontShowAgainName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray dontShowAgainName_b = dontShowAgainName_ret.toUtf8();
            libqt_string dontShowAgainName_str;
            dontShowAgainName_str.len = dontShowAgainName_b.length();
            dontShowAgainName_str.data = static_cast<const char*>(malloc(dontShowAgainName_str.len + 1));
            memcpy((void*)dontShowAgainName_str.data, dontShowAgainName_b.data(), dontShowAgainName_str.len);
            ((char*)dontShowAgainName_str.data)[dontShowAgainName_str.len] = '\0';
            libqt_string cbval1 = dontShowAgainName_str;

            kmessageboxdontaskagaininterface_savedontshowagaincontinue_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enableAllMessages() override {
        if (kmessageboxdontaskagaininterface_enableallmessages_callback != nullptr) {
            kmessageboxdontaskagaininterface_enableallmessages_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enableMessage(const QString& dontShowAgainName) override {
        if (kmessageboxdontaskagaininterface_enablemessage_callback != nullptr) {
            const QString dontShowAgainName_ret = dontShowAgainName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray dontShowAgainName_b = dontShowAgainName_ret.toUtf8();
            libqt_string dontShowAgainName_str;
            dontShowAgainName_str.len = dontShowAgainName_b.length();
            dontShowAgainName_str.data = static_cast<const char*>(malloc(dontShowAgainName_str.len + 1));
            memcpy((void*)dontShowAgainName_str.data, dontShowAgainName_b.data(), dontShowAgainName_str.len);
            ((char*)dontShowAgainName_str.data)[dontShowAgainName_str.len] = '\0';
            libqt_string cbval1 = dontShowAgainName_str;

            kmessageboxdontaskagaininterface_enablemessage_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setConfig(KConfig* config) override {
        if (kmessageboxdontaskagaininterface_setconfig_callback != nullptr) {
            KConfig* cbval1 = config;

            kmessageboxdontaskagaininterface_setconfig_callback(this, cbval1);
        }
    }
};

#endif
