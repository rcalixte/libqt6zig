#pragma once
#ifndef LIBQABSTRACTNATIVEEVENTFILTER_HXX
#define LIBQABSTRACTNATIVEEVENTFILTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractNativeEventFilter
class VirtualQAbstractNativeEventFilter : public QAbstractNativeEventFilter {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractNativeEventFilter_NativeEventFilter_Callback = bool (*)(QAbstractNativeEventFilter*, libqt_string, void*, intptr_t*);

    // Instance callback storage
    QAbstractNativeEventFilter_NativeEventFilter_Callback qabstractnativeeventfilter_nativeeventfilter_callback = nullptr;

    VirtualQAbstractNativeEventFilter() : QAbstractNativeEventFilter() {};

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEventFilter(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qabstractnativeeventfilter_nativeeventfilter_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qabstractnativeeventfilter_nativeeventfilter_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAbstractNativeEventFilter::nativeEventFilter called without being implemented");
    }
};

#endif
