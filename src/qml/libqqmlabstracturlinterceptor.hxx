#pragma once
#ifndef QML_LIBQQMLABSTRACTURLINTERCEPTOR_HXX
#define QML_LIBQQMLABSTRACTURLINTERCEPTOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlAbstractUrlInterceptor
class VirtualQQmlAbstractUrlInterceptor : public QQmlAbstractUrlInterceptor {
  public:
    // Virtual class public types (including callbacks and access types)
    using QQmlAbstractUrlInterceptor_Intercept_Callback = QUrl* (*)(QQmlAbstractUrlInterceptor*, QUrl*, int);

    // Instance callback storage
    QQmlAbstractUrlInterceptor_Intercept_Callback qqmlabstracturlinterceptor_intercept_callback = nullptr;

    VirtualQQmlAbstractUrlInterceptor() : QQmlAbstractUrlInterceptor() {};

    // Virtual method for C ABI access and custom callback
    virtual QUrl intercept(const QUrl& path, QQmlAbstractUrlInterceptor::DataType typeVal) override {
        if (qqmlabstracturlinterceptor_intercept_callback) {
            const QUrl& path_ret = path;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&path_ret);
            int cbval2 = static_cast<int>(typeVal);
            QUrl* callback_ret = qqmlabstracturlinterceptor_intercept_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QQmlAbstractUrlInterceptor::intercept called without being implemented");
    }
};

#endif
