#pragma once
#ifndef QML_LIBQQMLPARSERSTATUS_HXX
#define QML_LIBQQMLPARSERSTATUS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlParserStatus
class VirtualQQmlParserStatus : public QQmlParserStatus {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQmlParserStatus_ClassBegin_Callback = void (*)(QQmlParserStatus*);
    using QQmlParserStatus_ComponentComplete_Callback = void (*)(QQmlParserStatus*);

    // Instance callback storage
    QQmlParserStatus_ClassBegin_Callback qqmlparserstatus_classbegin_callback = nullptr;
    QQmlParserStatus_ComponentComplete_Callback qqmlparserstatus_componentcomplete_callback = nullptr;

    VirtualQQmlParserStatus() : QQmlParserStatus() {};

    // Virtual method for C ABI access and custom callback
    virtual void classBegin() override {
        if (qqmlparserstatus_classbegin_callback) {
            qqmlparserstatus_classbegin_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QQmlParserStatus::classBegin called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void componentComplete() override {
        if (qqmlparserstatus_componentcomplete_callback) {
            qqmlparserstatus_componentcomplete_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QQmlParserStatus::componentComplete called without being implemented");
    }
};

#endif
