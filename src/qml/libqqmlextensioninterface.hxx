#pragma once
#ifndef QML_LIBQQMLEXTENSIONINTERFACE_HXX
#define QML_LIBQQMLEXTENSIONINTERFACE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlTypesExtensionInterface
class VirtualQQmlTypesExtensionInterface : public QQmlTypesExtensionInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQmlTypesExtensionInterface_RegisterTypes_Callback = void (*)(QQmlTypesExtensionInterface*, const char*);

    // Instance callback storage
    QQmlTypesExtensionInterface_RegisterTypes_Callback qqmltypesextensioninterface_registertypes_callback = nullptr;

    VirtualQQmlTypesExtensionInterface(const QQmlTypesExtensionInterface& param1) : QQmlTypesExtensionInterface(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual void registerTypes(const char* uri) override {
        if (qqmltypesextensioninterface_registertypes_callback) {
            const char* cbval1 = (const char*)uri;
            qqmltypesextensioninterface_registertypes_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QQmlTypesExtensionInterface::registerTypes called without being implemented");
    }
};

// This class is a subclass of QQmlExtensionInterface
class VirtualQQmlExtensionInterface : public QQmlExtensionInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQmlExtensionInterface_InitializeEngine_Callback = void (*)(QQmlExtensionInterface*, QQmlEngine*, const char*);
    using QQmlExtensionInterface_RegisterTypes_Callback = void (*)(QQmlExtensionInterface*, const char*);

    // Instance callback storage
    QQmlExtensionInterface_InitializeEngine_Callback qqmlextensioninterface_initializeengine_callback = nullptr;
    QQmlExtensionInterface_RegisterTypes_Callback qqmlextensioninterface_registertypes_callback = nullptr;

    VirtualQQmlExtensionInterface(const QQmlExtensionInterface& param1) : QQmlExtensionInterface(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual void initializeEngine(QQmlEngine* engine, const char* uri) override {
        if (qqmlextensioninterface_initializeengine_callback) {
            QQmlEngine* cbval1 = engine;
            const char* cbval2 = (const char*)uri;
            qqmlextensioninterface_initializeengine_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QQmlExtensionInterface::initializeEngine called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void registerTypes(const char* uri) override {
        if (qqmlextensioninterface_registertypes_callback) {
            const char* cbval1 = (const char*)uri;
            qqmlextensioninterface_registertypes_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QQmlExtensionInterface::registerTypes called without being implemented");
    }
};

#endif
