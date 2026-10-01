#pragma once
#ifndef LIBQFILEICONPROVIDER_HXX
#define LIBQFILEICONPROVIDER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFileIconProvider
class VirtualQFileIconProvider final : public QFileIconProvider {
  public:
    // Virtual class public types (including callbacks and access types)
    using QFileIconProvider_Icon_Callback = QIcon* (*)(const QFileIconProvider*, int);
    using QFileIconProvider_Icon2_Callback = QIcon* (*)(const QFileIconProvider*, QFileInfo*);
    using QFileIconProvider_Type_Callback = const char* (*)(const QFileIconProvider*, QFileInfo*);
    using QFileIconProvider_SetOptions_Callback = void (*)(QFileIconProvider*, int);
    using QFileIconProvider_Options_Callback = int (*)(const QFileIconProvider*);

    // Instance callback storage
    QFileIconProvider_Icon_Callback qfileiconprovider_icon_callback = nullptr;
    QFileIconProvider_Icon2_Callback qfileiconprovider_icon2_callback = nullptr;
    QFileIconProvider_Type_Callback qfileiconprovider_type_callback = nullptr;
    QFileIconProvider_SetOptions_Callback qfileiconprovider_setoptions_callback = nullptr;
    QFileIconProvider_Options_Callback qfileiconprovider_options_callback = nullptr;

    VirtualQFileIconProvider() : QFileIconProvider() {};

    // Virtual method for C ABI access and custom callback
    virtual QIcon icon(QAbstractFileIconProvider::IconType typeVal) const override {
        if (qfileiconprovider_icon_callback) {
            int cbval1 = static_cast<int>(typeVal);
            QIcon* callback_ret = qfileiconprovider_icon_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFileIconProvider::icon(typeVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QIcon icon(const QFileInfo& info) const override {
        if (qfileiconprovider_icon2_callback) {
            const QFileInfo& info_ret = info;
            // Cast returned reference into pointer
            QFileInfo* cbval1 = const_cast<QFileInfo*>(&info_ret);
            QIcon* callback_ret = qfileiconprovider_icon2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QFileIconProvider::icon(info);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString type(const QFileInfo& param1) const override {
        if (qfileiconprovider_type_callback) {
            const QFileInfo& param1_ret = param1;
            // Cast returned reference into pointer
            QFileInfo* cbval1 = const_cast<QFileInfo*>(&param1_ret);
            const char* callback_ret = qfileiconprovider_type_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QFileIconProvider::type(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOptions(QAbstractFileIconProvider::Options options) override {
        if (qfileiconprovider_setoptions_callback) {
            int cbval1 = static_cast<int>(options);
            qfileiconprovider_setoptions_callback(this, cbval1);
            return;
        }
        QFileIconProvider::setOptions(options);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractFileIconProvider::Options options() const override {
        if (qfileiconprovider_options_callback) {
            int callback_ret = qfileiconprovider_options_callback(this);
            return static_cast<QAbstractFileIconProvider::Options>(callback_ret);
        }
        return QFileIconProvider::options();
    }
};

#endif
