#pragma once
#ifndef QML_LIBQQMLPARSERSTATUS_HXX
#define QML_LIBQQMLPARSERSTATUS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlParserStatus so that we can call protected methods
class VirtualQQmlParserStatus : public QQmlParserStatus {

  public:
    // Virtual class boolean flag
    bool isVirtualQQmlParserStatus = true;

    // Virtual class public types (including callbacks)
    using QQmlParserStatus_ClassBegin_Callback = void (*)();
    using QQmlParserStatus_ComponentComplete_Callback = void (*)();

  protected:
    // Instance callback storage
    QQmlParserStatus_ClassBegin_Callback qqmlparserstatus_classbegin_callback = nullptr;
    QQmlParserStatus_ComponentComplete_Callback qqmlparserstatus_componentcomplete_callback = nullptr;

    // Instance base flags
    mutable bool qqmlparserstatus_classbegin_isbase = false;
    mutable bool qqmlparserstatus_componentcomplete_isbase = false;

  public:
    VirtualQQmlParserStatus() : QQmlParserStatus() {};

    // Callback setters
    inline void setQQmlParserStatus_ClassBegin_Callback(QQmlParserStatus_ClassBegin_Callback cb) { qqmlparserstatus_classbegin_callback = cb; }
    inline void setQQmlParserStatus_ComponentComplete_Callback(QQmlParserStatus_ComponentComplete_Callback cb) { qqmlparserstatus_componentcomplete_callback = cb; }

    // Base flag setters
    inline void setQQmlParserStatus_ClassBegin_IsBase(bool value) const { qqmlparserstatus_classbegin_isbase = value; }
    inline void setQQmlParserStatus_ComponentComplete_IsBase(bool value) const { qqmlparserstatus_componentcomplete_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void classBegin() override {
        auto classbegin_cb = qqmlparserstatus_classbegin_callback;
        if (classbegin_cb) {
            classbegin_cb();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void componentComplete() override {
        auto componentcomplete_cb = qqmlparserstatus_componentcomplete_callback;
        if (componentcomplete_cb) {
            componentcomplete_cb();
        }
    }
};

#endif
