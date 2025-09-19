#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQNETWORKPROXY_H
#define SRC_NETWORKC_LIBVIRTUALQNETWORKPROXY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QNetworkProxyFactory so that we can call protected methods
class VirtualQNetworkProxyFactory : public QNetworkProxyFactory {

  public:
    // Virtual class boolean flag
    bool isVirtualQNetworkProxyFactory = true;

    // Virtual class public types (including callbacks)
    using QNetworkProxyFactory_QueryProxy_Callback = QNetworkProxy** (*)(QNetworkProxyFactory*, QNetworkProxyQuery*);

  protected:
    // Instance callback storage
    QNetworkProxyFactory_QueryProxy_Callback qnetworkproxyfactory_queryproxy_callback = nullptr;

    // Instance base flags
    mutable bool qnetworkproxyfactory_queryproxy_isbase = false;

  public:
    VirtualQNetworkProxyFactory() : QNetworkProxyFactory() {};

    ~VirtualQNetworkProxyFactory() {
        qnetworkproxyfactory_queryproxy_callback = nullptr;
    }

    // Callback setters
    inline void setQNetworkProxyFactory_QueryProxy_Callback(QNetworkProxyFactory_QueryProxy_Callback cb) { qnetworkproxyfactory_queryproxy_callback = cb; }

    // Base flag setters
    inline void setQNetworkProxyFactory_QueryProxy_IsBase(bool value) const { qnetworkproxyfactory_queryproxy_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QList<QNetworkProxy> queryProxy(const QNetworkProxyQuery& query) override {
        if (qnetworkproxyfactory_queryproxy_callback != nullptr) {
            const QNetworkProxyQuery& query_ret = query;
            // Cast returned reference into pointer
            QNetworkProxyQuery* cbval1 = const_cast<QNetworkProxyQuery*>(&query_ret);

            QNetworkProxy** callback_ret = qnetworkproxyfactory_queryproxy_callback(this, cbval1);
            QList<QNetworkProxy> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QNetworkProxy** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return {};
        }
    }
};

#endif
