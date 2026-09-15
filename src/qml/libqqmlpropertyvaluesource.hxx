#pragma once
#ifndef QML_LIBQQMLPROPERTYVALUESOURCE_HXX
#define QML_LIBQQMLPROPERTYVALUESOURCE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlPropertyValueSource so that we can call protected methods
class VirtualQQmlPropertyValueSource : public QQmlPropertyValueSource {

  public:
    // Virtual class boolean flag
    bool isVirtualQQmlPropertyValueSource = true;

    // Virtual class public types (including callbacks)
    using QQmlPropertyValueSource_SetTarget_Callback = void (*)(QQmlPropertyValueSource*, QQmlProperty*);

  protected:
    // Instance callback storage
    QQmlPropertyValueSource_SetTarget_Callback qqmlpropertyvaluesource_settarget_callback = nullptr;

    // Instance base flags
    mutable bool qqmlpropertyvaluesource_settarget_isbase = false;

  public:
    VirtualQQmlPropertyValueSource() : QQmlPropertyValueSource() {};

    // Callback setters
    inline void setQQmlPropertyValueSource_SetTarget_Callback(QQmlPropertyValueSource_SetTarget_Callback cb) { qqmlpropertyvaluesource_settarget_callback = cb; }

    // Base flag setters
    inline void setQQmlPropertyValueSource_SetTarget_IsBase(bool value) const { qqmlpropertyvaluesource_settarget_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setTarget(const QQmlProperty& target) override {
        auto settarget_cb = qqmlpropertyvaluesource_settarget_callback;
        if (settarget_cb) {
            const QQmlProperty& target_ret = target;
            // Cast returned reference into pointer
            QQmlProperty* cbval1 = const_cast<QQmlProperty*>(&target_ret);
            settarget_cb(this, cbval1);
        }
    }
};

#endif
