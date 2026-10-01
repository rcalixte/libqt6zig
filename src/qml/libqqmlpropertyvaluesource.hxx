#pragma once
#ifndef QML_LIBQQMLPROPERTYVALUESOURCE_HXX
#define QML_LIBQQMLPROPERTYVALUESOURCE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlPropertyValueSource
class VirtualQQmlPropertyValueSource : public QQmlPropertyValueSource {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQmlPropertyValueSource_SetTarget_Callback = void (*)(QQmlPropertyValueSource*, QQmlProperty*);

    // Instance callback storage
    QQmlPropertyValueSource_SetTarget_Callback qqmlpropertyvaluesource_settarget_callback = nullptr;

    VirtualQQmlPropertyValueSource() : QQmlPropertyValueSource() {};

    // Virtual method for C ABI access and custom callback
    virtual void setTarget(const QQmlProperty& target) override {
        if (qqmlpropertyvaluesource_settarget_callback) {
            const QQmlProperty& target_ret = target;
            // Cast returned reference into pointer
            QQmlProperty* cbval1 = const_cast<QQmlProperty*>(&target_ret);
            qqmlpropertyvaluesource_settarget_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QQmlPropertyValueSource::setTarget called without being implemented");
    }
};

#endif
