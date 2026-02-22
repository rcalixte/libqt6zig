#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALABSTRACTSETTINGS_H
#define SRC_DESIGNERC_LIBVIRTUALABSTRACTSETTINGS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerSettingsInterface so that we can call protected methods
class VirtualQDesignerSettingsInterface : public QDesignerSettingsInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerSettingsInterface = true;

    // Virtual class public types (including callbacks)
    using QDesignerSettingsInterface_BeginGroup_Callback = void (*)(QDesignerSettingsInterface*, const char*);
    using QDesignerSettingsInterface_EndGroup_Callback = void (*)();
    using QDesignerSettingsInterface_Contains_Callback = bool (*)(const QDesignerSettingsInterface*, const char*);
    using QDesignerSettingsInterface_SetValue_Callback = void (*)(QDesignerSettingsInterface*, const char*, QVariant*);
    using QDesignerSettingsInterface_Value_Callback = QVariant* (*)(const QDesignerSettingsInterface*, const char*, QVariant*);
    using QDesignerSettingsInterface_Remove_Callback = void (*)(QDesignerSettingsInterface*, const char*);

  protected:
    // Instance callback storage
    QDesignerSettingsInterface_BeginGroup_Callback qdesignersettingsinterface_begingroup_callback = nullptr;
    QDesignerSettingsInterface_EndGroup_Callback qdesignersettingsinterface_endgroup_callback = nullptr;
    QDesignerSettingsInterface_Contains_Callback qdesignersettingsinterface_contains_callback = nullptr;
    QDesignerSettingsInterface_SetValue_Callback qdesignersettingsinterface_setvalue_callback = nullptr;
    QDesignerSettingsInterface_Value_Callback qdesignersettingsinterface_value_callback = nullptr;
    QDesignerSettingsInterface_Remove_Callback qdesignersettingsinterface_remove_callback = nullptr;

    // Instance base flags
    mutable bool qdesignersettingsinterface_begingroup_isbase = false;
    mutable bool qdesignersettingsinterface_endgroup_isbase = false;
    mutable bool qdesignersettingsinterface_contains_isbase = false;
    mutable bool qdesignersettingsinterface_setvalue_isbase = false;
    mutable bool qdesignersettingsinterface_value_isbase = false;
    mutable bool qdesignersettingsinterface_remove_isbase = false;

  public:
    VirtualQDesignerSettingsInterface() : QDesignerSettingsInterface() {};

    ~VirtualQDesignerSettingsInterface() {
        qdesignersettingsinterface_begingroup_callback = nullptr;
        qdesignersettingsinterface_endgroup_callback = nullptr;
        qdesignersettingsinterface_contains_callback = nullptr;
        qdesignersettingsinterface_setvalue_callback = nullptr;
        qdesignersettingsinterface_value_callback = nullptr;
        qdesignersettingsinterface_remove_callback = nullptr;
    }

    // Callback setters
    inline void setQDesignerSettingsInterface_BeginGroup_Callback(QDesignerSettingsInterface_BeginGroup_Callback cb) { qdesignersettingsinterface_begingroup_callback = cb; }
    inline void setQDesignerSettingsInterface_EndGroup_Callback(QDesignerSettingsInterface_EndGroup_Callback cb) { qdesignersettingsinterface_endgroup_callback = cb; }
    inline void setQDesignerSettingsInterface_Contains_Callback(QDesignerSettingsInterface_Contains_Callback cb) { qdesignersettingsinterface_contains_callback = cb; }
    inline void setQDesignerSettingsInterface_SetValue_Callback(QDesignerSettingsInterface_SetValue_Callback cb) { qdesignersettingsinterface_setvalue_callback = cb; }
    inline void setQDesignerSettingsInterface_Value_Callback(QDesignerSettingsInterface_Value_Callback cb) { qdesignersettingsinterface_value_callback = cb; }
    inline void setQDesignerSettingsInterface_Remove_Callback(QDesignerSettingsInterface_Remove_Callback cb) { qdesignersettingsinterface_remove_callback = cb; }

    // Base flag setters
    inline void setQDesignerSettingsInterface_BeginGroup_IsBase(bool value) const { qdesignersettingsinterface_begingroup_isbase = value; }
    inline void setQDesignerSettingsInterface_EndGroup_IsBase(bool value) const { qdesignersettingsinterface_endgroup_isbase = value; }
    inline void setQDesignerSettingsInterface_Contains_IsBase(bool value) const { qdesignersettingsinterface_contains_isbase = value; }
    inline void setQDesignerSettingsInterface_SetValue_IsBase(bool value) const { qdesignersettingsinterface_setvalue_isbase = value; }
    inline void setQDesignerSettingsInterface_Value_IsBase(bool value) const { qdesignersettingsinterface_value_isbase = value; }
    inline void setQDesignerSettingsInterface_Remove_IsBase(bool value) const { qdesignersettingsinterface_remove_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void beginGroup(const QString& prefix) override {
        if (qdesignersettingsinterface_begingroup_callback != nullptr) {
            const QString prefix_ret = prefix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray prefix_b = prefix_ret.toUtf8();
            auto prefix_str_len = prefix_b.length();
            const char* prefix_str = static_cast<const char*>(malloc(prefix_str_len + 1));
            memcpy((void*)prefix_str, prefix_b.data(), prefix_str_len);
            ((char*)prefix_str)[prefix_str_len] = '\0';
            const char* cbval1 = prefix_str;

            qdesignersettingsinterface_begingroup_callback(this, cbval1);
            libqt_free(prefix_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void endGroup() override {
        if (qdesignersettingsinterface_endgroup_callback != nullptr) {
            qdesignersettingsinterface_endgroup_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QString& key) const override {
        if (qdesignersettingsinterface_contains_callback != nullptr) {
            const QString key_ret = key;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray key_b = key_ret.toUtf8();
            auto key_str_len = key_b.length();
            const char* key_str = static_cast<const char*>(malloc(key_str_len + 1));
            memcpy((void*)key_str, key_b.data(), key_str_len);
            ((char*)key_str)[key_str_len] = '\0';
            const char* cbval1 = key_str;

            bool callback_ret = qdesignersettingsinterface_contains_callback(this, cbval1);
            libqt_free(key_str);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setValue(const QString& key, const QVariant& value) override {
        if (qdesignersettingsinterface_setvalue_callback != nullptr) {
            const QString key_ret = key;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray key_b = key_ret.toUtf8();
            auto key_str_len = key_b.length();
            const char* key_str = static_cast<const char*>(malloc(key_str_len + 1));
            memcpy((void*)key_str, key_b.data(), key_str_len);
            ((char*)key_str)[key_str_len] = '\0';
            const char* cbval1 = key_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            qdesignersettingsinterface_setvalue_callback(this, cbval1, cbval2);
            libqt_free(key_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant value(const QString& key, const QVariant& defaultValue) const override {
        if (qdesignersettingsinterface_value_callback != nullptr) {
            const QString key_ret = key;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray key_b = key_ret.toUtf8();
            auto key_str_len = key_b.length();
            const char* key_str = static_cast<const char*>(malloc(key_str_len + 1));
            memcpy((void*)key_str, key_b.data(), key_str_len);
            ((char*)key_str)[key_str_len] = '\0';
            const char* cbval1 = key_str;
            const QVariant& defaultValue_ret = defaultValue;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&defaultValue_ret);

            QVariant* callback_ret = qdesignersettingsinterface_value_callback(this, cbval1, cbval2);
            libqt_free(key_str);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void remove(const QString& key) override {
        if (qdesignersettingsinterface_remove_callback != nullptr) {
            const QString key_ret = key;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray key_b = key_ret.toUtf8();
            auto key_str_len = key_b.length();
            const char* key_str = static_cast<const char*>(malloc(key_str_len + 1));
            memcpy((void*)key_str, key_b.data(), key_str_len);
            ((char*)key_str)[key_str_len] = '\0';
            const char* cbval1 = key_str;

            qdesignersettingsinterface_remove_callback(this, cbval1);
            libqt_free(key_str);
        }
    }
};

#endif
