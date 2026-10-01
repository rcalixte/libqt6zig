#pragma once
#ifndef LIBQABSTRACTFILEICONPROVIDER_HXX
#define LIBQABSTRACTFILEICONPROVIDER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractFileIconProvider
class VirtualQAbstractFileIconProvider final : public QAbstractFileIconProvider {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractFileIconProvider_Icon_Callback = QIcon* (*)(const QAbstractFileIconProvider*, int);
    using QAbstractFileIconProvider_Icon2_Callback = QIcon* (*)(const QAbstractFileIconProvider*, QFileInfo*);
    using QAbstractFileIconProvider_Type_Callback = const char* (*)(const QAbstractFileIconProvider*, QFileInfo*);
    using QAbstractFileIconProvider_SetOptions_Callback = void (*)(QAbstractFileIconProvider*, int);
    using QAbstractFileIconProvider_Options_Callback = int (*)(const QAbstractFileIconProvider*);

    // Instance callback storage
    QAbstractFileIconProvider_Icon_Callback qabstractfileiconprovider_icon_callback = nullptr;
    QAbstractFileIconProvider_Icon2_Callback qabstractfileiconprovider_icon2_callback = nullptr;
    QAbstractFileIconProvider_Type_Callback qabstractfileiconprovider_type_callback = nullptr;
    QAbstractFileIconProvider_SetOptions_Callback qabstractfileiconprovider_setoptions_callback = nullptr;
    QAbstractFileIconProvider_Options_Callback qabstractfileiconprovider_options_callback = nullptr;

    VirtualQAbstractFileIconProvider() : QAbstractFileIconProvider() {};

    // Virtual method for C ABI access and custom callback
    virtual QIcon icon(QAbstractFileIconProvider::IconType param1) const override {
        if (qabstractfileiconprovider_icon_callback) {
            int cbval1 = static_cast<int>(param1);
            QIcon* callback_ret = qabstractfileiconprovider_icon_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractFileIconProvider::icon(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QIcon icon(const QFileInfo& param1) const override {
        if (qabstractfileiconprovider_icon2_callback) {
            const QFileInfo& param1_ret = param1;
            // Cast returned reference into pointer
            QFileInfo* cbval1 = const_cast<QFileInfo*>(&param1_ret);
            QIcon* callback_ret = qabstractfileiconprovider_icon2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractFileIconProvider::icon(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString type(const QFileInfo& param1) const override {
        if (qabstractfileiconprovider_type_callback) {
            const QFileInfo& param1_ret = param1;
            // Cast returned reference into pointer
            QFileInfo* cbval1 = const_cast<QFileInfo*>(&param1_ret);
            const char* callback_ret = qabstractfileiconprovider_type_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QAbstractFileIconProvider::type(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOptions(QAbstractFileIconProvider::Options options) override {
        if (qabstractfileiconprovider_setoptions_callback) {
            int cbval1 = static_cast<int>(options);
            qabstractfileiconprovider_setoptions_callback(this, cbval1);
            return;
        }
        QAbstractFileIconProvider::setOptions(options);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractFileIconProvider::Options options() const override {
        if (qabstractfileiconprovider_options_callback) {
            int callback_ret = qabstractfileiconprovider_options_callback(this);
            return static_cast<QAbstractFileIconProvider::Options>(callback_ret);
        }
        return QAbstractFileIconProvider::options();
    }
};

#endif
