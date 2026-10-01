#pragma once
#ifndef EXTRAS_KICONTHEMES_LIBKICONENGINE_HXX
#define EXTRAS_KICONTHEMES_LIBKICONENGINE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIconEngine
class VirtualKIconEngine final : public KIconEngine {
  public:
    // Virtual class public types (including callbacks and access types)
    using KIconEngine_ActualSize_Callback = QSize* (*)(KIconEngine*, QSize*, int, int);
    using KIconEngine_Paint_Callback = void (*)(KIconEngine*, QPainter*, QRect*, int, int);
    using KIconEngine_Pixmap_Callback = QPixmap* (*)(KIconEngine*, QSize*, int, int);
    using KIconEngine_ScaledPixmap_Callback = QPixmap* (*)(KIconEngine*, QSize*, int, int, double);
    using KIconEngine_IconName_Callback = const char* (*)(KIconEngine*);
    using KIconEngine_AvailableSizes_Callback = libqt_list /* of QSize* */ (*)(KIconEngine*, int, int);
    using KIconEngine_IsNull_Callback = bool (*)(KIconEngine*);
    using KIconEngine_Key_Callback = const char* (*)(const KIconEngine*);
    using KIconEngine_Clone_Callback = QIconEngine* (*)(const KIconEngine*);
    using KIconEngine_Read_Callback = bool (*)(KIconEngine*, QDataStream*);
    using KIconEngine_Write_Callback = bool (*)(const KIconEngine*, QDataStream*);
    using KIconEngine_AddPixmap_Callback = void (*)(KIconEngine*, QPixmap*, int, int);
    using KIconEngine_AddFile_Callback = void (*)(KIconEngine*, const char*, QSize*, int, int);
    using KIconEngine_VirtualHook_Callback = void (*)(KIconEngine*, int, void*);

    // Instance callback storage
    KIconEngine_ActualSize_Callback kiconengine_actualsize_callback = nullptr;
    KIconEngine_Paint_Callback kiconengine_paint_callback = nullptr;
    KIconEngine_Pixmap_Callback kiconengine_pixmap_callback = nullptr;
    KIconEngine_ScaledPixmap_Callback kiconengine_scaledpixmap_callback = nullptr;
    KIconEngine_IconName_Callback kiconengine_iconname_callback = nullptr;
    KIconEngine_AvailableSizes_Callback kiconengine_availablesizes_callback = nullptr;
    KIconEngine_IsNull_Callback kiconengine_isnull_callback = nullptr;
    KIconEngine_Key_Callback kiconengine_key_callback = nullptr;
    KIconEngine_Clone_Callback kiconengine_clone_callback = nullptr;
    KIconEngine_Read_Callback kiconengine_read_callback = nullptr;
    KIconEngine_Write_Callback kiconengine_write_callback = nullptr;
    KIconEngine_AddPixmap_Callback kiconengine_addpixmap_callback = nullptr;
    KIconEngine_AddFile_Callback kiconengine_addfile_callback = nullptr;
    KIconEngine_VirtualHook_Callback kiconengine_virtualhook_callback = nullptr;

    VirtualKIconEngine(const QString& iconName, KIconLoader* iconLoader, const QList<QString>& overlays) : KIconEngine(iconName, iconLoader, overlays) {};
    VirtualKIconEngine(const QString& iconName, KIconLoader* iconLoader) : KIconEngine(iconName, iconLoader) {};
    VirtualKIconEngine(const QString& iconName, const KIconColors& colors, KIconLoader* iconLoader) : KIconEngine(iconName, colors, iconLoader) {};
    VirtualKIconEngine(const QString& iconName, const KIconColors& colors, KIconLoader* iconLoader, const QList<QString>& overlays) : KIconEngine(iconName, colors, iconLoader, overlays) {};
    VirtualKIconEngine(const KIconEngine& param1) : KIconEngine(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual QSize actualSize(const QSize& size, QIcon::Mode mode, QIcon::State state) override {
        if (kiconengine_actualsize_callback) {
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval1 = const_cast<QSize*>(&size_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);
            QSize* callback_ret = kiconengine_actualsize_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIconEngine::actualSize(size, mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QRect& rect, QIcon::Mode mode, QIcon::State state) override {
        if (kiconengine_paint_callback) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            int cbval3 = static_cast<int>(mode);
            int cbval4 = static_cast<int>(state);
            kiconengine_paint_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        KIconEngine::paint(painter, rect, mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap pixmap(const QSize& size, QIcon::Mode mode, QIcon::State state) override {
        if (kiconengine_pixmap_callback) {
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval1 = const_cast<QSize*>(&size_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);
            QPixmap* callback_ret = kiconengine_pixmap_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIconEngine::pixmap(size, mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap scaledPixmap(const QSize& size, QIcon::Mode mode, QIcon::State state, qreal scale) override {
        if (kiconengine_scaledpixmap_callback) {
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval1 = const_cast<QSize*>(&size_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);
            double cbval4 = static_cast<double>(scale);
            QPixmap* callback_ret = kiconengine_scaledpixmap_callback(this, cbval1, cbval2, cbval3, cbval4);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KIconEngine::scaledPixmap(size, mode, state, scale);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString iconName() override {
        if (kiconengine_iconname_callback) {
            const char* callback_ret = kiconengine_iconname_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KIconEngine::iconName();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QSize> availableSizes(QIcon::Mode mode, QIcon::State state) override {
        if (kiconengine_availablesizes_callback) {
            int cbval1 = static_cast<int>(mode);
            int cbval2 = static_cast<int>(state);
            libqt_list /* of QSize* */ callback_ret = kiconengine_availablesizes_callback(this, cbval1, cbval2);
            QList<QSize> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QSize** callback_ret_arr = static_cast<QSize**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KIconEngine::availableSizes(mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isNull() override {
        if (kiconengine_isnull_callback) {
            bool callback_ret = kiconengine_isnull_callback(this);
            return callback_ret;
        }
        return KIconEngine::isNull();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString key() const override {
        if (kiconengine_key_callback) {
            const char* callback_ret = kiconengine_key_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KIconEngine::key();
    }

    // Virtual method for C ABI access and custom callback
    virtual QIconEngine* clone() const override {
        if (kiconengine_clone_callback) {
            QIconEngine* callback_ret = kiconengine_clone_callback(this);
            return callback_ret;
        }
        return KIconEngine::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool read(QDataStream& in) override {
        if (kiconengine_read_callback) {
            QDataStream& in_ret = in;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &in_ret;
            bool callback_ret = kiconengine_read_callback(this, cbval1);
            return callback_ret;
        }
        return KIconEngine::read(in);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool write(QDataStream& out) const override {
        if (kiconengine_write_callback) {
            QDataStream& out_ret = out;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &out_ret;
            bool callback_ret = kiconengine_write_callback(this, cbval1);
            return callback_ret;
        }
        return KIconEngine::write(out);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addPixmap(const QPixmap& pixmap, QIcon::Mode mode, QIcon::State state) override {
        if (kiconengine_addpixmap_callback) {
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval1 = const_cast<QPixmap*>(&pixmap_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);
            kiconengine_addpixmap_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KIconEngine::addPixmap(pixmap, mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addFile(const QString& fileName, const QSize& size, QIcon::Mode mode, QIcon::State state) override {
        if (kiconengine_addfile_callback) {
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
            kiconengine_addfile_callback(this, cbval1, cbval2, cbval3, cbval4);
            libqt_free(fileName_str);
            return;
        }
        KIconEngine::addFile(fileName, size, mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kiconengine_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            kiconengine_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KIconEngine::virtual_hook(id, data);
    }
};

#endif
