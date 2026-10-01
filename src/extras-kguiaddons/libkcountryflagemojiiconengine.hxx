#pragma once
#ifndef EXTRAS_KGUIADDONS_LIBKCOUNTRYFLAGEMOJIICONENGINE_HXX
#define EXTRAS_KGUIADDONS_LIBKCOUNTRYFLAGEMOJIICONENGINE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCountryFlagEmojiIconEngine
class VirtualKCountryFlagEmojiIconEngine final : public KCountryFlagEmojiIconEngine {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCountryFlagEmojiIconEngine_Clone_Callback = QIconEngine* (*)(const KCountryFlagEmojiIconEngine*);
    using KCountryFlagEmojiIconEngine_Key_Callback = const char* (*)(const KCountryFlagEmojiIconEngine*);
    using KCountryFlagEmojiIconEngine_Paint_Callback = void (*)(KCountryFlagEmojiIconEngine*, QPainter*, QRect*, int, int);
    using KCountryFlagEmojiIconEngine_Pixmap_Callback = QPixmap* (*)(KCountryFlagEmojiIconEngine*, QSize*, int, int);
    using KCountryFlagEmojiIconEngine_ScaledPixmap_Callback = QPixmap* (*)(KCountryFlagEmojiIconEngine*, QSize*, int, int, double);
    using KCountryFlagEmojiIconEngine_IsNull_Callback = bool (*)(KCountryFlagEmojiIconEngine*);
    using KCountryFlagEmojiIconEngine_ActualSize_Callback = QSize* (*)(KCountryFlagEmojiIconEngine*, QSize*, int, int);
    using KCountryFlagEmojiIconEngine_AddPixmap_Callback = void (*)(KCountryFlagEmojiIconEngine*, QPixmap*, int, int);
    using KCountryFlagEmojiIconEngine_AddFile_Callback = void (*)(KCountryFlagEmojiIconEngine*, const char*, QSize*, int, int);
    using KCountryFlagEmojiIconEngine_Read_Callback = bool (*)(KCountryFlagEmojiIconEngine*, QDataStream*);
    using KCountryFlagEmojiIconEngine_Write_Callback = bool (*)(const KCountryFlagEmojiIconEngine*, QDataStream*);
    using KCountryFlagEmojiIconEngine_AvailableSizes_Callback = libqt_list /* of QSize* */ (*)(KCountryFlagEmojiIconEngine*, int, int);
    using KCountryFlagEmojiIconEngine_IconName_Callback = const char* (*)(KCountryFlagEmojiIconEngine*);
    using KCountryFlagEmojiIconEngine_VirtualHook_Callback = void (*)(KCountryFlagEmojiIconEngine*, int, void*);

    // Instance callback storage
    KCountryFlagEmojiIconEngine_Clone_Callback kcountryflagemojiiconengine_clone_callback = nullptr;
    KCountryFlagEmojiIconEngine_Key_Callback kcountryflagemojiiconengine_key_callback = nullptr;
    KCountryFlagEmojiIconEngine_Paint_Callback kcountryflagemojiiconengine_paint_callback = nullptr;
    KCountryFlagEmojiIconEngine_Pixmap_Callback kcountryflagemojiiconengine_pixmap_callback = nullptr;
    KCountryFlagEmojiIconEngine_ScaledPixmap_Callback kcountryflagemojiiconengine_scaledpixmap_callback = nullptr;
    KCountryFlagEmojiIconEngine_IsNull_Callback kcountryflagemojiiconengine_isnull_callback = nullptr;
    KCountryFlagEmojiIconEngine_ActualSize_Callback kcountryflagemojiiconengine_actualsize_callback = nullptr;
    KCountryFlagEmojiIconEngine_AddPixmap_Callback kcountryflagemojiiconengine_addpixmap_callback = nullptr;
    KCountryFlagEmojiIconEngine_AddFile_Callback kcountryflagemojiiconengine_addfile_callback = nullptr;
    KCountryFlagEmojiIconEngine_Read_Callback kcountryflagemojiiconengine_read_callback = nullptr;
    KCountryFlagEmojiIconEngine_Write_Callback kcountryflagemojiiconengine_write_callback = nullptr;
    KCountryFlagEmojiIconEngine_AvailableSizes_Callback kcountryflagemojiiconengine_availablesizes_callback = nullptr;
    KCountryFlagEmojiIconEngine_IconName_Callback kcountryflagemojiiconengine_iconname_callback = nullptr;
    KCountryFlagEmojiIconEngine_VirtualHook_Callback kcountryflagemojiiconengine_virtualhook_callback = nullptr;

    VirtualKCountryFlagEmojiIconEngine(const QString& regionOrCountry) : KCountryFlagEmojiIconEngine(regionOrCountry) {};

    // Virtual method for C ABI access and custom callback
    virtual QIconEngine* clone() const override {
        if (kcountryflagemojiiconengine_clone_callback) {
            QIconEngine* callback_ret = kcountryflagemojiiconengine_clone_callback(this);
            return callback_ret;
        }
        return KCountryFlagEmojiIconEngine::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString key() const override {
        if (kcountryflagemojiiconengine_key_callback) {
            const char* callback_ret = kcountryflagemojiiconengine_key_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KCountryFlagEmojiIconEngine::key();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QRect& rect, QIcon::Mode mode, QIcon::State state) override {
        if (kcountryflagemojiiconengine_paint_callback) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            int cbval3 = static_cast<int>(mode);
            int cbval4 = static_cast<int>(state);
            kcountryflagemojiiconengine_paint_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        KCountryFlagEmojiIconEngine::paint(painter, rect, mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap pixmap(const QSize& size, QIcon::Mode mode, QIcon::State state) override {
        if (kcountryflagemojiiconengine_pixmap_callback) {
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval1 = const_cast<QSize*>(&size_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);
            QPixmap* callback_ret = kcountryflagemojiiconengine_pixmap_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCountryFlagEmojiIconEngine::pixmap(size, mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap scaledPixmap(const QSize& size, QIcon::Mode mode, QIcon::State state, qreal scale) override {
        if (kcountryflagemojiiconengine_scaledpixmap_callback) {
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval1 = const_cast<QSize*>(&size_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);
            double cbval4 = static_cast<double>(scale);
            QPixmap* callback_ret = kcountryflagemojiiconengine_scaledpixmap_callback(this, cbval1, cbval2, cbval3, cbval4);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCountryFlagEmojiIconEngine::scaledPixmap(size, mode, state, scale);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isNull() override {
        if (kcountryflagemojiiconengine_isnull_callback) {
            bool callback_ret = kcountryflagemojiiconengine_isnull_callback(this);
            return callback_ret;
        }
        return KCountryFlagEmojiIconEngine::isNull();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize actualSize(const QSize& size, QIcon::Mode mode, QIcon::State state) override {
        if (kcountryflagemojiiconengine_actualsize_callback) {
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval1 = const_cast<QSize*>(&size_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);
            QSize* callback_ret = kcountryflagemojiiconengine_actualsize_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCountryFlagEmojiIconEngine::actualSize(size, mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addPixmap(const QPixmap& pixmap, QIcon::Mode mode, QIcon::State state) override {
        if (kcountryflagemojiiconengine_addpixmap_callback) {
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval1 = const_cast<QPixmap*>(&pixmap_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);
            kcountryflagemojiiconengine_addpixmap_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KCountryFlagEmojiIconEngine::addPixmap(pixmap, mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addFile(const QString& fileName, const QSize& size, QIcon::Mode mode, QIcon::State state) override {
        if (kcountryflagemojiiconengine_addfile_callback) {
            const auto fileName_ret = fileName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray fileName_b = fileName_ret.toUtf8();
            auto fileName_str_len = fileName_b.length();
            const char* fileName_str = static_cast<const char*>(malloc(fileName_str_len + 1));
            memcpy((void*)fileName_str, fileName_b.data(), fileName_str_len);
            ((char*)fileName_str)[fileName_str_len] = '\0';
            const char* cbval1 = fileName_str;
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval2 = const_cast<QSize*>(&size_ret);
            int cbval3 = static_cast<int>(mode);
            int cbval4 = static_cast<int>(state);
            kcountryflagemojiiconengine_addfile_callback(this, cbval1, cbval2, cbval3, cbval4);
            libqt_free(fileName_str);
            return;
        }
        KCountryFlagEmojiIconEngine::addFile(fileName, size, mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool read(QDataStream& in) override {
        if (kcountryflagemojiiconengine_read_callback) {
            QDataStream& in_ret = in;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &in_ret;
            bool callback_ret = kcountryflagemojiiconengine_read_callback(this, cbval1);
            return callback_ret;
        }
        return KCountryFlagEmojiIconEngine::read(in);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool write(QDataStream& out) const override {
        if (kcountryflagemojiiconengine_write_callback) {
            QDataStream& out_ret = out;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &out_ret;
            bool callback_ret = kcountryflagemojiiconengine_write_callback(this, cbval1);
            return callback_ret;
        }
        return KCountryFlagEmojiIconEngine::write(out);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QSize> availableSizes(QIcon::Mode mode, QIcon::State state) override {
        if (kcountryflagemojiiconengine_availablesizes_callback) {
            int cbval1 = static_cast<int>(mode);
            int cbval2 = static_cast<int>(state);
            libqt_list /* of QSize* */ callback_ret = kcountryflagemojiiconengine_availablesizes_callback(this, cbval1, cbval2);
            QList<QSize> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QSize** callback_ret_arr = static_cast<QSize**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KCountryFlagEmojiIconEngine::availableSizes(mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString iconName() override {
        if (kcountryflagemojiiconengine_iconname_callback) {
            const char* callback_ret = kcountryflagemojiiconengine_iconname_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KCountryFlagEmojiIconEngine::iconName();
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kcountryflagemojiiconengine_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            kcountryflagemojiiconengine_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KCountryFlagEmojiIconEngine::virtual_hook(id, data);
    }
};

#endif
