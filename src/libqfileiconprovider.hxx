#pragma once
#ifndef SRCC_LIBVIRTUALQFILEICONPROVIDER_H
#define SRCC_LIBVIRTUALQFILEICONPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFileIconProvider so that we can call protected methods
class VirtualQFileIconProvider final : public QFileIconProvider {

  public:
    // Virtual class boolean flag
    bool isVirtualQFileIconProvider = true;

    // Virtual class public types (including callbacks)
    using QFileIconProvider_Icon_Callback = QIcon* (*)(const QFileIconProvider*, int);
    using QFileIconProvider_Icon2_Callback = QIcon* (*)(const QFileIconProvider*, QFileInfo*);
    using QFileIconProvider_Type_Callback = const char* (*)(const QFileIconProvider*, QFileInfo*);
    using QFileIconProvider_SetOptions_Callback = void (*)(QFileIconProvider*, int);
    using QFileIconProvider_Options_Callback = int (*)();

  protected:
    // Instance callback storage
    QFileIconProvider_Icon_Callback qfileiconprovider_icon_callback = nullptr;
    QFileIconProvider_Icon2_Callback qfileiconprovider_icon2_callback = nullptr;
    QFileIconProvider_Type_Callback qfileiconprovider_type_callback = nullptr;
    QFileIconProvider_SetOptions_Callback qfileiconprovider_setoptions_callback = nullptr;
    QFileIconProvider_Options_Callback qfileiconprovider_options_callback = nullptr;

    // Instance base flags
    mutable bool qfileiconprovider_icon_isbase = false;
    mutable bool qfileiconprovider_icon2_isbase = false;
    mutable bool qfileiconprovider_type_isbase = false;
    mutable bool qfileiconprovider_setoptions_isbase = false;
    mutable bool qfileiconprovider_options_isbase = false;

  public:
    VirtualQFileIconProvider() : QFileIconProvider() {};

    // Callback setters
    inline void setQFileIconProvider_Icon_Callback(QFileIconProvider_Icon_Callback cb) { qfileiconprovider_icon_callback = cb; }
    inline void setQFileIconProvider_Icon2_Callback(QFileIconProvider_Icon2_Callback cb) { qfileiconprovider_icon2_callback = cb; }
    inline void setQFileIconProvider_Type_Callback(QFileIconProvider_Type_Callback cb) { qfileiconprovider_type_callback = cb; }
    inline void setQFileIconProvider_SetOptions_Callback(QFileIconProvider_SetOptions_Callback cb) { qfileiconprovider_setoptions_callback = cb; }
    inline void setQFileIconProvider_Options_Callback(QFileIconProvider_Options_Callback cb) { qfileiconprovider_options_callback = cb; }

    // Base flag setters
    inline void setQFileIconProvider_Icon_IsBase(bool value) const { qfileiconprovider_icon_isbase = value; }
    inline void setQFileIconProvider_Icon2_IsBase(bool value) const { qfileiconprovider_icon2_isbase = value; }
    inline void setQFileIconProvider_Type_IsBase(bool value) const { qfileiconprovider_type_isbase = value; }
    inline void setQFileIconProvider_SetOptions_IsBase(bool value) const { qfileiconprovider_setoptions_isbase = value; }
    inline void setQFileIconProvider_Options_IsBase(bool value) const { qfileiconprovider_options_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QIcon icon(QAbstractFileIconProvider::IconType typeVal) const override {
        if (qfileiconprovider_icon_isbase) {
            qfileiconprovider_icon_isbase = false;
            return QFileIconProvider::icon(typeVal);
        }
        auto icon_cb = qfileiconprovider_icon_callback;
        if (icon_cb) {
            int cbval1 = static_cast<int>(typeVal);

            QIcon* callback_ret = icon_cb(this, cbval1);
            return *callback_ret;
        }
        return QFileIconProvider::icon(typeVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QIcon icon(const QFileInfo& info) const override {
        if (qfileiconprovider_icon2_isbase) {
            qfileiconprovider_icon2_isbase = false;
            return QFileIconProvider::icon(info);
        }
        auto icon2_cb = qfileiconprovider_icon2_callback;
        if (icon2_cb) {
            const QFileInfo& info_ret = info;
            // Cast returned reference into pointer
            QFileInfo* cbval1 = const_cast<QFileInfo*>(&info_ret);

            QIcon* callback_ret = icon2_cb(this, cbval1);
            return *callback_ret;
        }
        return QFileIconProvider::icon(info);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString type(const QFileInfo& param1) const override {
        if (qfileiconprovider_type_isbase) {
            qfileiconprovider_type_isbase = false;
            return QFileIconProvider::type(param1);
        }
        auto type_cb = qfileiconprovider_type_callback;
        if (type_cb) {
            const QFileInfo& param1_ret = param1;
            // Cast returned reference into pointer
            QFileInfo* cbval1 = const_cast<QFileInfo*>(&param1_ret);

            const char* callback_ret = type_cb(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QFileIconProvider::type(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOptions(QAbstractFileIconProvider::Options options) override {
        if (qfileiconprovider_setoptions_isbase) {
            qfileiconprovider_setoptions_isbase = false;
            QFileIconProvider::setOptions(options);
            return;
        }
        auto setoptions_cb = qfileiconprovider_setoptions_callback;
        if (setoptions_cb) {
            int cbval1 = static_cast<int>(options);

            setoptions_cb(this, cbval1);
            return;
        }
        QFileIconProvider::setOptions(options);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractFileIconProvider::Options options() const override {
        if (qfileiconprovider_options_isbase) {
            qfileiconprovider_options_isbase = false;
            return QFileIconProvider::options();
        }
        auto options_cb = qfileiconprovider_options_callback;
        if (options_cb) {
            int callback_ret = options_cb();
            return static_cast<QAbstractFileIconProvider::Options>(callback_ret);
        }
        return QFileIconProvider::options();
    }
};

#endif
