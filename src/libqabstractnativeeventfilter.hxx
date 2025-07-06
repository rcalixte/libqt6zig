#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTNATIVEEVENTFILTER_H
#define SRCC_LIBVIRTUALQABSTRACTNATIVEEVENTFILTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractNativeEventFilter so that we can call protected methods
class VirtualQAbstractNativeEventFilter final : public QAbstractNativeEventFilter {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractNativeEventFilter = true;

    // Virtual class public types (including callbacks)
    using QAbstractNativeEventFilter_NativeEventFilter_Callback = bool (*)(QAbstractNativeEventFilter*, libqt_string, void*, intptr_t*);

  protected:
    // Instance callback storage
    QAbstractNativeEventFilter_NativeEventFilter_Callback qabstractnativeeventfilter_nativeeventfilter_callback = nullptr;

    // Instance base flags
    mutable bool qabstractnativeeventfilter_nativeeventfilter_isbase = false;

  public:
    VirtualQAbstractNativeEventFilter() : QAbstractNativeEventFilter() {};

    ~VirtualQAbstractNativeEventFilter() {
        qabstractnativeeventfilter_nativeeventfilter_callback = nullptr;
    }

    // Callback setters
    inline void setQAbstractNativeEventFilter_NativeEventFilter_Callback(QAbstractNativeEventFilter_NativeEventFilter_Callback cb) { qabstractnativeeventfilter_nativeeventfilter_callback = cb; }

    // Base flag setters
    inline void setQAbstractNativeEventFilter_NativeEventFilter_IsBase(bool value) const { qabstractnativeeventfilter_nativeeventfilter_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEventFilter(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qabstractnativeeventfilter_nativeeventfilter_callback != nullptr) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<const char*>(malloc((eventType_str.len + 1) * sizeof(char)));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            ((char*)eventType_str.data)[eventType_str.len] = '\0';
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);

            bool callback_ret = qabstractnativeeventfilter_nativeeventfilter_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return {};
        }
    }
};

#endif
