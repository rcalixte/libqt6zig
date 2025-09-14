#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKURIFILTER_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKURIFILTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KUriFilterSearchProvider so that we can call protected methods
class VirtualKUriFilterSearchProvider final : public KUriFilterSearchProvider {

  public:
    // Virtual class boolean flag
    bool isVirtualKUriFilterSearchProvider = true;

    // Virtual class public types (including callbacks)
    using KUriFilterSearchProvider_IconName_Callback = const char* (*)();
    using KUriFilterSearchProvider_SetDesktopEntryName_Callback = void (*)(KUriFilterSearchProvider*, libqt_string);
    using KUriFilterSearchProvider_SetIconName_Callback = void (*)(KUriFilterSearchProvider*, libqt_string);
    using KUriFilterSearchProvider_SetKeys_Callback = void (*)(KUriFilterSearchProvider*, libqt_list /* of libqt_string */);
    using KUriFilterSearchProvider_SetName_Callback = void (*)(KUriFilterSearchProvider*, libqt_string);

  protected:
    // Instance callback storage
    KUriFilterSearchProvider_IconName_Callback kurifiltersearchprovider_iconname_callback = nullptr;
    KUriFilterSearchProvider_SetDesktopEntryName_Callback kurifiltersearchprovider_setdesktopentryname_callback = nullptr;
    KUriFilterSearchProvider_SetIconName_Callback kurifiltersearchprovider_seticonname_callback = nullptr;
    KUriFilterSearchProvider_SetKeys_Callback kurifiltersearchprovider_setkeys_callback = nullptr;
    KUriFilterSearchProvider_SetName_Callback kurifiltersearchprovider_setname_callback = nullptr;

    // Instance base flags
    mutable bool kurifiltersearchprovider_iconname_isbase = false;
    mutable bool kurifiltersearchprovider_setdesktopentryname_isbase = false;
    mutable bool kurifiltersearchprovider_seticonname_isbase = false;
    mutable bool kurifiltersearchprovider_setkeys_isbase = false;
    mutable bool kurifiltersearchprovider_setname_isbase = false;

  public:
    VirtualKUriFilterSearchProvider() : KUriFilterSearchProvider() {};
    VirtualKUriFilterSearchProvider(const KUriFilterSearchProvider& param1) : KUriFilterSearchProvider(param1) {};

    ~VirtualKUriFilterSearchProvider() {
        kurifiltersearchprovider_iconname_callback = nullptr;
        kurifiltersearchprovider_setdesktopentryname_callback = nullptr;
        kurifiltersearchprovider_seticonname_callback = nullptr;
        kurifiltersearchprovider_setkeys_callback = nullptr;
        kurifiltersearchprovider_setname_callback = nullptr;
    }

    // Callback setters
    inline void setKUriFilterSearchProvider_IconName_Callback(KUriFilterSearchProvider_IconName_Callback cb) { kurifiltersearchprovider_iconname_callback = cb; }
    inline void setKUriFilterSearchProvider_SetDesktopEntryName_Callback(KUriFilterSearchProvider_SetDesktopEntryName_Callback cb) { kurifiltersearchprovider_setdesktopentryname_callback = cb; }
    inline void setKUriFilterSearchProvider_SetIconName_Callback(KUriFilterSearchProvider_SetIconName_Callback cb) { kurifiltersearchprovider_seticonname_callback = cb; }
    inline void setKUriFilterSearchProvider_SetKeys_Callback(KUriFilterSearchProvider_SetKeys_Callback cb) { kurifiltersearchprovider_setkeys_callback = cb; }
    inline void setKUriFilterSearchProvider_SetName_Callback(KUriFilterSearchProvider_SetName_Callback cb) { kurifiltersearchprovider_setname_callback = cb; }

    // Base flag setters
    inline void setKUriFilterSearchProvider_IconName_IsBase(bool value) const { kurifiltersearchprovider_iconname_isbase = value; }
    inline void setKUriFilterSearchProvider_SetDesktopEntryName_IsBase(bool value) const { kurifiltersearchprovider_setdesktopentryname_isbase = value; }
    inline void setKUriFilterSearchProvider_SetIconName_IsBase(bool value) const { kurifiltersearchprovider_seticonname_isbase = value; }
    inline void setKUriFilterSearchProvider_SetKeys_IsBase(bool value) const { kurifiltersearchprovider_setkeys_isbase = value; }
    inline void setKUriFilterSearchProvider_SetName_IsBase(bool value) const { kurifiltersearchprovider_setname_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QString iconName() const override {
        if (kurifiltersearchprovider_iconname_isbase) {
            kurifiltersearchprovider_iconname_isbase = false;
            return KUriFilterSearchProvider::iconName();
        } else if (kurifiltersearchprovider_iconname_callback != nullptr) {
            const char* callback_ret = kurifiltersearchprovider_iconname_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KUriFilterSearchProvider::iconName();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDesktopEntryName(const QString& desktopEntryName) {
        if (kurifiltersearchprovider_setdesktopentryname_isbase) {
            kurifiltersearchprovider_setdesktopentryname_isbase = false;
            KUriFilterSearchProvider::setDesktopEntryName(desktopEntryName);
        } else if (kurifiltersearchprovider_setdesktopentryname_callback != nullptr) {
            const QString desktopEntryName_ret = desktopEntryName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray desktopEntryName_b = desktopEntryName_ret.toUtf8();
            libqt_string desktopEntryName_str;
            desktopEntryName_str.len = desktopEntryName_b.length();
            desktopEntryName_str.data = static_cast<const char*>(malloc(desktopEntryName_str.len + 1));
            memcpy((void*)desktopEntryName_str.data, desktopEntryName_b.data(), desktopEntryName_str.len);
            ((char*)desktopEntryName_str.data)[desktopEntryName_str.len] = '\0';
            libqt_string cbval1 = desktopEntryName_str;

            kurifiltersearchprovider_setdesktopentryname_callback(this, cbval1);
        } else {
            KUriFilterSearchProvider::setDesktopEntryName(desktopEntryName);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setIconName(const QString& iconName) {
        if (kurifiltersearchprovider_seticonname_isbase) {
            kurifiltersearchprovider_seticonname_isbase = false;
            KUriFilterSearchProvider::setIconName(iconName);
        } else if (kurifiltersearchprovider_seticonname_callback != nullptr) {
            const QString iconName_ret = iconName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray iconName_b = iconName_ret.toUtf8();
            libqt_string iconName_str;
            iconName_str.len = iconName_b.length();
            iconName_str.data = static_cast<const char*>(malloc(iconName_str.len + 1));
            memcpy((void*)iconName_str.data, iconName_b.data(), iconName_str.len);
            ((char*)iconName_str.data)[iconName_str.len] = '\0';
            libqt_string cbval1 = iconName_str;

            kurifiltersearchprovider_seticonname_callback(this, cbval1);
        } else {
            KUriFilterSearchProvider::setIconName(iconName);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setKeys(const QList<QString>& keys) {
        if (kurifiltersearchprovider_setkeys_isbase) {
            kurifiltersearchprovider_setkeys_isbase = false;
            KUriFilterSearchProvider::setKeys(keys);
        } else if (kurifiltersearchprovider_setkeys_callback != nullptr) {
            const QList<QString>& keys_ret = keys;
            // Convert QList<> from C++ memory to manually-managed C memory
            libqt_string* keys_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (keys_ret.size() + 1)));
            for (qsizetype i = 0; i < keys_ret.size(); ++i) {
                QString keys_lv_ret = keys_ret[i];
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray keys_lv_b = keys_lv_ret.toUtf8();
                libqt_string keys_lv_str;
                keys_lv_str.len = keys_lv_b.length();
                keys_lv_str.data = static_cast<const char*>(malloc(keys_lv_str.len + 1));
                memcpy((void*)keys_lv_str.data, keys_lv_b.data(), keys_lv_str.len);
                ((char*)keys_lv_str.data)[keys_lv_str.len] = '\0';
                keys_arr[i] = keys_lv_str;
            }
            libqt_list keys_out;
            keys_out.len = keys_ret.size();
            keys_out.data = static_cast<void*>(keys_arr);
            libqt_list /* of libqt_string */ cbval1 = keys_out;

            kurifiltersearchprovider_setkeys_callback(this, cbval1);
        } else {
            KUriFilterSearchProvider::setKeys(keys);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setName(const QString& name) {
        if (kurifiltersearchprovider_setname_isbase) {
            kurifiltersearchprovider_setname_isbase = false;
            KUriFilterSearchProvider::setName(name);
        } else if (kurifiltersearchprovider_setname_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval1 = name_str;

            kurifiltersearchprovider_setname_callback(this, cbval1);
        } else {
            KUriFilterSearchProvider::setName(name);
        }
    }

    // Friend functions
    friend void KUriFilterSearchProvider_SetDesktopEntryName(KUriFilterSearchProvider* self, const libqt_string desktopEntryName);
    friend void KUriFilterSearchProvider_QBaseSetDesktopEntryName(KUriFilterSearchProvider* self, const libqt_string desktopEntryName);
    friend void KUriFilterSearchProvider_SetIconName(KUriFilterSearchProvider* self, const libqt_string iconName);
    friend void KUriFilterSearchProvider_QBaseSetIconName(KUriFilterSearchProvider* self, const libqt_string iconName);
    friend void KUriFilterSearchProvider_SetKeys(KUriFilterSearchProvider* self, const libqt_list /* of libqt_string */ keys);
    friend void KUriFilterSearchProvider_QBaseSetKeys(KUriFilterSearchProvider* self, const libqt_list /* of libqt_string */ keys);
    friend void KUriFilterSearchProvider_SetName(KUriFilterSearchProvider* self, const libqt_string name);
    friend void KUriFilterSearchProvider_QBaseSetName(KUriFilterSearchProvider* self, const libqt_string name);
};

#endif
