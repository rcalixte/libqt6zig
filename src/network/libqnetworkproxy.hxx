#pragma once
#ifndef NETWORK_LIBQNETWORKPROXY_HXX
#define NETWORK_LIBQNETWORKPROXY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QNetworkProxyFactory
class VirtualQNetworkProxyFactory : public QNetworkProxyFactory {
  public:
    // Virtual class public types (including callbacks and access types)
    using QNetworkProxyFactory_QueryProxy_Callback = libqt_list /* of QNetworkProxy* */ (*)(QNetworkProxyFactory*, QNetworkProxyQuery*);

    // Instance callback storage
    QNetworkProxyFactory_QueryProxy_Callback qnetworkproxyfactory_queryproxy_callback = nullptr;

    VirtualQNetworkProxyFactory() : QNetworkProxyFactory() {};

    // Virtual method for C ABI access and custom callback
    virtual QList<QNetworkProxy> queryProxy(const QNetworkProxyQuery& query) override {
        if (qnetworkproxyfactory_queryproxy_callback) {
            const QNetworkProxyQuery& query_ret = query;
            // Cast returned reference into pointer
            QNetworkProxyQuery* cbval1 = const_cast<QNetworkProxyQuery*>(&query_ret);
            libqt_list /* of QNetworkProxy* */ callback_ret = qnetworkproxyfactory_queryproxy_callback(this, cbval1);
            QList<QNetworkProxy> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QNetworkProxy** callback_ret_arr = static_cast<QNetworkProxy**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QNetworkProxyFactory::queryProxy called without being implemented");
    }
};

#endif
