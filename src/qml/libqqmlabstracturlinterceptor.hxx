#pragma once
#ifndef QML_LIBQQMLABSTRACTURLINTERCEPTOR_HXX
#define QML_LIBQQMLABSTRACTURLINTERCEPTOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QQmlAbstractUrlInterceptor so that we can call protected methods
class VirtualQQmlAbstractUrlInterceptor : public QQmlAbstractUrlInterceptor {

  public:
    // Virtual class boolean flag
    bool isVirtualQQmlAbstractUrlInterceptor = true;

    // Virtual class public types (including callbacks)
    using QQmlAbstractUrlInterceptor_Intercept_Callback = QUrl* (*)(QQmlAbstractUrlInterceptor*, QUrl*, int);

  protected:
    // Instance callback storage
    QQmlAbstractUrlInterceptor_Intercept_Callback qqmlabstracturlinterceptor_intercept_callback = nullptr;

    // Instance base flags
    mutable bool qqmlabstracturlinterceptor_intercept_isbase = false;

  public:
    VirtualQQmlAbstractUrlInterceptor() : QQmlAbstractUrlInterceptor() {};

    // Callback setters
    inline void setQQmlAbstractUrlInterceptor_Intercept_Callback(QQmlAbstractUrlInterceptor_Intercept_Callback cb) { qqmlabstracturlinterceptor_intercept_callback = cb; }

    // Base flag setters
    inline void setQQmlAbstractUrlInterceptor_Intercept_IsBase(bool value) const { qqmlabstracturlinterceptor_intercept_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QUrl intercept(const QUrl& path, QQmlAbstractUrlInterceptor::DataType typeVal) override {
        auto intercept_cb = qqmlabstracturlinterceptor_intercept_callback;
        if (intercept_cb) {
            const QUrl& path_ret = path;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&path_ret);
            int cbval2 = static_cast<int>(typeVal);
            QUrl* callback_ret = intercept_cb(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return {};
    }
};

#endif
