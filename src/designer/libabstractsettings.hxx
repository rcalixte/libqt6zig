#pragma once
#ifndef DESIGNER_LIBABSTRACTSETTINGS_HXX
#define DESIGNER_LIBABSTRACTSETTINGS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerSettingsInterface
class VirtualQDesignerSettingsInterface : public QDesignerSettingsInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerSettingsInterface_BeginGroup_Callback = void (*)(QDesignerSettingsInterface*, const char*);
    using QDesignerSettingsInterface_EndGroup_Callback = void (*)(QDesignerSettingsInterface*);
    using QDesignerSettingsInterface_Contains_Callback = bool (*)(const QDesignerSettingsInterface*, const char*);
    using QDesignerSettingsInterface_SetValue_Callback = void (*)(QDesignerSettingsInterface*, const char*, QVariant*);
    using QDesignerSettingsInterface_Value_Callback = QVariant* (*)(const QDesignerSettingsInterface*, const char*, QVariant*);
    using QDesignerSettingsInterface_Remove_Callback = void (*)(QDesignerSettingsInterface*, const char*);

    // Instance callback storage
    QDesignerSettingsInterface_BeginGroup_Callback qdesignersettingsinterface_begingroup_callback = nullptr;
    QDesignerSettingsInterface_EndGroup_Callback qdesignersettingsinterface_endgroup_callback = nullptr;
    QDesignerSettingsInterface_Contains_Callback qdesignersettingsinterface_contains_callback = nullptr;
    QDesignerSettingsInterface_SetValue_Callback qdesignersettingsinterface_setvalue_callback = nullptr;
    QDesignerSettingsInterface_Value_Callback qdesignersettingsinterface_value_callback = nullptr;
    QDesignerSettingsInterface_Remove_Callback qdesignersettingsinterface_remove_callback = nullptr;

    VirtualQDesignerSettingsInterface() : QDesignerSettingsInterface() {};

    // Virtual method for C ABI access and custom callback
    virtual void beginGroup(const QString& prefix) override {
        if (qdesignersettingsinterface_begingroup_callback) {
            const auto prefix_ret = prefix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray prefix_b = prefix_ret.toUtf8();
            auto prefix_str_len = prefix_b.length();
            const char* prefix_str = static_cast<const char*>(malloc(prefix_str_len + 1));
            memcpy((void*)prefix_str, prefix_b.data(), prefix_str_len);
            ((char*)prefix_str)[prefix_str_len] = '\0';
            const char* cbval1 = prefix_str;
            qdesignersettingsinterface_begingroup_callback(this, cbval1);
            libqt_free(prefix_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerSettingsInterface::beginGroup called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void endGroup() override {
        if (qdesignersettingsinterface_endgroup_callback) {
            qdesignersettingsinterface_endgroup_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerSettingsInterface::endGroup called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QString& key) const override {
        if (qdesignersettingsinterface_contains_callback) {
            const auto key_ret = key;
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
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerSettingsInterface::contains called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setValue(const QString& key, const QVariant& value) override {
        if (qdesignersettingsinterface_setvalue_callback) {
            const auto key_ret = key;
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
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerSettingsInterface::setValue called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant value(const QString& key, const QVariant& defaultValue) const override {
        if (qdesignersettingsinterface_value_callback) {
            const auto key_ret = key;
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
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(key_str);
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerSettingsInterface::value called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void remove(const QString& key) override {
        if (qdesignersettingsinterface_remove_callback) {
            const auto key_ret = key;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray key_b = key_ret.toUtf8();
            auto key_str_len = key_b.length();
            const char* key_str = static_cast<const char*>(malloc(key_str_len + 1));
            memcpy((void*)key_str, key_b.data(), key_str_len);
            ((char*)key_str)[key_str_len] = '\0';
            const char* cbval1 = key_str;
            qdesignersettingsinterface_remove_callback(this, cbval1);
            libqt_free(key_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerSettingsInterface::remove called without being implemented");
    }
};

#endif
