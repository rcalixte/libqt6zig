#pragma once
#ifndef QML_LIBQQMLEXTENSIONINTERFACE_HXX
#define QML_LIBQQMLEXTENSIONINTERFACE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlTypesExtensionInterface so that we can call protected methods
class VirtualQQmlTypesExtensionInterface : public QQmlTypesExtensionInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQQmlTypesExtensionInterface = true;

    // Virtual class public types (including callbacks)
    using QQmlTypesExtensionInterface_RegisterTypes_Callback = void (*)(QQmlTypesExtensionInterface*, const char*);

  protected:
    // Instance callback storage
    QQmlTypesExtensionInterface_RegisterTypes_Callback qqmltypesextensioninterface_registertypes_callback = nullptr;

    // Instance base flags
    mutable bool qqmltypesextensioninterface_registertypes_isbase = false;

  public:
    VirtualQQmlTypesExtensionInterface(const QQmlTypesExtensionInterface& param1) : QQmlTypesExtensionInterface(param1) {};

    // Callback setters
    inline void setQQmlTypesExtensionInterface_RegisterTypes_Callback(QQmlTypesExtensionInterface_RegisterTypes_Callback cb) { qqmltypesextensioninterface_registertypes_callback = cb; }

    // Base flag setters
    inline void setQQmlTypesExtensionInterface_RegisterTypes_IsBase(bool value) const { qqmltypesextensioninterface_registertypes_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void registerTypes(const char* uri) override {
        auto registertypes_cb = qqmltypesextensioninterface_registertypes_callback;
        if (registertypes_cb) {
            const char* cbval1 = (const char*)uri;
            registertypes_cb(this, cbval1);
        }
    }
};

// This class is a subclass of QQmlExtensionInterface so that we can call protected methods
class VirtualQQmlExtensionInterface : public QQmlExtensionInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQQmlExtensionInterface = true;

    // Virtual class public types (including callbacks)
    using QQmlExtensionInterface_InitializeEngine_Callback = void (*)(QQmlExtensionInterface*, QQmlEngine*, const char*);
    using QQmlExtensionInterface_RegisterTypes_Callback = void (*)(QQmlExtensionInterface*, const char*);

  protected:
    // Instance callback storage
    QQmlExtensionInterface_InitializeEngine_Callback qqmlextensioninterface_initializeengine_callback = nullptr;
    QQmlExtensionInterface_RegisterTypes_Callback qqmlextensioninterface_registertypes_callback = nullptr;

    // Instance base flags
    mutable bool qqmlextensioninterface_initializeengine_isbase = false;
    mutable bool qqmlextensioninterface_registertypes_isbase = false;

  public:
    VirtualQQmlExtensionInterface(const QQmlExtensionInterface& param1) : QQmlExtensionInterface(param1) {};

    // Callback setters
    inline void setQQmlExtensionInterface_InitializeEngine_Callback(QQmlExtensionInterface_InitializeEngine_Callback cb) { qqmlextensioninterface_initializeengine_callback = cb; }
    inline void setQQmlExtensionInterface_RegisterTypes_Callback(QQmlExtensionInterface_RegisterTypes_Callback cb) { qqmlextensioninterface_registertypes_callback = cb; }

    // Base flag setters
    inline void setQQmlExtensionInterface_InitializeEngine_IsBase(bool value) const { qqmlextensioninterface_initializeengine_isbase = value; }
    inline void setQQmlExtensionInterface_RegisterTypes_IsBase(bool value) const { qqmlextensioninterface_registertypes_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void initializeEngine(QQmlEngine* engine, const char* uri) override {
        auto initializeengine_cb = qqmlextensioninterface_initializeengine_callback;
        if (initializeengine_cb) {
            QQmlEngine* cbval1 = engine;
            const char* cbval2 = (const char*)uri;
            initializeengine_cb(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void registerTypes(const char* uri) override {
        auto registertypes_cb = qqmlextensioninterface_registertypes_callback;
        if (registertypes_cb) {
            const char* cbval1 = (const char*)uri;
            registertypes_cb(this, cbval1);
        }
    }
};

#endif
