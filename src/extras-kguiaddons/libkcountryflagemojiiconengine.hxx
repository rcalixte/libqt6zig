#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBVIRTUALKCOUNTRYFLAGEMOJIICONENGINE_H
#define SRC_EXTRAS_KGUIADDONSC_LIBVIRTUALKCOUNTRYFLAGEMOJIICONENGINE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCountryFlagEmojiIconEngine so that we can call protected methods
class VirtualKCountryFlagEmojiIconEngine final : public KCountryFlagEmojiIconEngine {

  public:
    // Virtual class boolean flag
    bool isVirtualKCountryFlagEmojiIconEngine = true;

    // Virtual class public types (including callbacks)
    using KCountryFlagEmojiIconEngine_Clone_Callback = QIconEngine* (*)();
    using KCountryFlagEmojiIconEngine_Key_Callback = const char* (*)();
    using KCountryFlagEmojiIconEngine_Paint_Callback = void (*)(KCountryFlagEmojiIconEngine*, QPainter*, QRect*, int, int);
    using KCountryFlagEmojiIconEngine_Pixmap_Callback = QPixmap* (*)(KCountryFlagEmojiIconEngine*, QSize*, int, int);
    using KCountryFlagEmojiIconEngine_ScaledPixmap_Callback = QPixmap* (*)(KCountryFlagEmojiIconEngine*, QSize*, int, int, double);
    using KCountryFlagEmojiIconEngine_IsNull_Callback = bool (*)();
    using KCountryFlagEmojiIconEngine_ActualSize_Callback = QSize* (*)(KCountryFlagEmojiIconEngine*, QSize*, int, int);
    using KCountryFlagEmojiIconEngine_AddPixmap_Callback = void (*)(KCountryFlagEmojiIconEngine*, QPixmap*, int, int);
    using KCountryFlagEmojiIconEngine_AddFile_Callback = void (*)(KCountryFlagEmojiIconEngine*, const char*, QSize*, int, int);
    using KCountryFlagEmojiIconEngine_Read_Callback = bool (*)(KCountryFlagEmojiIconEngine*, QDataStream*);
    using KCountryFlagEmojiIconEngine_Write_Callback = bool (*)(const KCountryFlagEmojiIconEngine*, QDataStream*);
    using KCountryFlagEmojiIconEngine_AvailableSizes_Callback = libqt_list /* of QSize* */ (*)(KCountryFlagEmojiIconEngine*, int, int);
    using KCountryFlagEmojiIconEngine_IconName_Callback = const char* (*)();
    using KCountryFlagEmojiIconEngine_VirtualHook_Callback = void (*)(KCountryFlagEmojiIconEngine*, int, void*);

  protected:
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

    // Instance base flags
    mutable bool kcountryflagemojiiconengine_clone_isbase = false;
    mutable bool kcountryflagemojiiconengine_key_isbase = false;
    mutable bool kcountryflagemojiiconengine_paint_isbase = false;
    mutable bool kcountryflagemojiiconengine_pixmap_isbase = false;
    mutable bool kcountryflagemojiiconengine_scaledpixmap_isbase = false;
    mutable bool kcountryflagemojiiconengine_isnull_isbase = false;
    mutable bool kcountryflagemojiiconengine_actualsize_isbase = false;
    mutable bool kcountryflagemojiiconengine_addpixmap_isbase = false;
    mutable bool kcountryflagemojiiconengine_addfile_isbase = false;
    mutable bool kcountryflagemojiiconengine_read_isbase = false;
    mutable bool kcountryflagemojiiconengine_write_isbase = false;
    mutable bool kcountryflagemojiiconengine_availablesizes_isbase = false;
    mutable bool kcountryflagemojiiconengine_iconname_isbase = false;
    mutable bool kcountryflagemojiiconengine_virtualhook_isbase = false;

  public:
    VirtualKCountryFlagEmojiIconEngine(const QString& regionOrCountry) : KCountryFlagEmojiIconEngine(regionOrCountry) {};

    // Callback setters
    inline void setKCountryFlagEmojiIconEngine_Clone_Callback(KCountryFlagEmojiIconEngine_Clone_Callback cb) { kcountryflagemojiiconengine_clone_callback = cb; }
    inline void setKCountryFlagEmojiIconEngine_Key_Callback(KCountryFlagEmojiIconEngine_Key_Callback cb) { kcountryflagemojiiconengine_key_callback = cb; }
    inline void setKCountryFlagEmojiIconEngine_Paint_Callback(KCountryFlagEmojiIconEngine_Paint_Callback cb) { kcountryflagemojiiconengine_paint_callback = cb; }
    inline void setKCountryFlagEmojiIconEngine_Pixmap_Callback(KCountryFlagEmojiIconEngine_Pixmap_Callback cb) { kcountryflagemojiiconengine_pixmap_callback = cb; }
    inline void setKCountryFlagEmojiIconEngine_ScaledPixmap_Callback(KCountryFlagEmojiIconEngine_ScaledPixmap_Callback cb) { kcountryflagemojiiconengine_scaledpixmap_callback = cb; }
    inline void setKCountryFlagEmojiIconEngine_IsNull_Callback(KCountryFlagEmojiIconEngine_IsNull_Callback cb) { kcountryflagemojiiconengine_isnull_callback = cb; }
    inline void setKCountryFlagEmojiIconEngine_ActualSize_Callback(KCountryFlagEmojiIconEngine_ActualSize_Callback cb) { kcountryflagemojiiconengine_actualsize_callback = cb; }
    inline void setKCountryFlagEmojiIconEngine_AddPixmap_Callback(KCountryFlagEmojiIconEngine_AddPixmap_Callback cb) { kcountryflagemojiiconengine_addpixmap_callback = cb; }
    inline void setKCountryFlagEmojiIconEngine_AddFile_Callback(KCountryFlagEmojiIconEngine_AddFile_Callback cb) { kcountryflagemojiiconengine_addfile_callback = cb; }
    inline void setKCountryFlagEmojiIconEngine_Read_Callback(KCountryFlagEmojiIconEngine_Read_Callback cb) { kcountryflagemojiiconengine_read_callback = cb; }
    inline void setKCountryFlagEmojiIconEngine_Write_Callback(KCountryFlagEmojiIconEngine_Write_Callback cb) { kcountryflagemojiiconengine_write_callback = cb; }
    inline void setKCountryFlagEmojiIconEngine_AvailableSizes_Callback(KCountryFlagEmojiIconEngine_AvailableSizes_Callback cb) { kcountryflagemojiiconengine_availablesizes_callback = cb; }
    inline void setKCountryFlagEmojiIconEngine_IconName_Callback(KCountryFlagEmojiIconEngine_IconName_Callback cb) { kcountryflagemojiiconengine_iconname_callback = cb; }
    inline void setKCountryFlagEmojiIconEngine_VirtualHook_Callback(KCountryFlagEmojiIconEngine_VirtualHook_Callback cb) { kcountryflagemojiiconengine_virtualhook_callback = cb; }

    // Base flag setters
    inline void setKCountryFlagEmojiIconEngine_Clone_IsBase(bool value) const { kcountryflagemojiiconengine_clone_isbase = value; }
    inline void setKCountryFlagEmojiIconEngine_Key_IsBase(bool value) const { kcountryflagemojiiconengine_key_isbase = value; }
    inline void setKCountryFlagEmojiIconEngine_Paint_IsBase(bool value) const { kcountryflagemojiiconengine_paint_isbase = value; }
    inline void setKCountryFlagEmojiIconEngine_Pixmap_IsBase(bool value) const { kcountryflagemojiiconengine_pixmap_isbase = value; }
    inline void setKCountryFlagEmojiIconEngine_ScaledPixmap_IsBase(bool value) const { kcountryflagemojiiconengine_scaledpixmap_isbase = value; }
    inline void setKCountryFlagEmojiIconEngine_IsNull_IsBase(bool value) const { kcountryflagemojiiconengine_isnull_isbase = value; }
    inline void setKCountryFlagEmojiIconEngine_ActualSize_IsBase(bool value) const { kcountryflagemojiiconengine_actualsize_isbase = value; }
    inline void setKCountryFlagEmojiIconEngine_AddPixmap_IsBase(bool value) const { kcountryflagemojiiconengine_addpixmap_isbase = value; }
    inline void setKCountryFlagEmojiIconEngine_AddFile_IsBase(bool value) const { kcountryflagemojiiconengine_addfile_isbase = value; }
    inline void setKCountryFlagEmojiIconEngine_Read_IsBase(bool value) const { kcountryflagemojiiconengine_read_isbase = value; }
    inline void setKCountryFlagEmojiIconEngine_Write_IsBase(bool value) const { kcountryflagemojiiconengine_write_isbase = value; }
    inline void setKCountryFlagEmojiIconEngine_AvailableSizes_IsBase(bool value) const { kcountryflagemojiiconengine_availablesizes_isbase = value; }
    inline void setKCountryFlagEmojiIconEngine_IconName_IsBase(bool value) const { kcountryflagemojiiconengine_iconname_isbase = value; }
    inline void setKCountryFlagEmojiIconEngine_VirtualHook_IsBase(bool value) const { kcountryflagemojiiconengine_virtualhook_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QIconEngine* clone() const override {
        if (kcountryflagemojiiconengine_clone_isbase) {
            kcountryflagemojiiconengine_clone_isbase = false;
            return KCountryFlagEmojiIconEngine::clone();
        }
        auto clone_cb = kcountryflagemojiiconengine_clone_callback;
        if (clone_cb) {
            QIconEngine* callback_ret = clone_cb();
            return callback_ret;
        }
        return KCountryFlagEmojiIconEngine::clone();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString key() const override {
        if (kcountryflagemojiiconengine_key_isbase) {
            kcountryflagemojiiconengine_key_isbase = false;
            return KCountryFlagEmojiIconEngine::key();
        }
        auto key_cb = kcountryflagemojiiconengine_key_callback;
        if (key_cb) {
            const char* callback_ret = key_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KCountryFlagEmojiIconEngine::key();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QRect& rect, QIcon::Mode mode, QIcon::State state) override {
        if (kcountryflagemojiiconengine_paint_isbase) {
            kcountryflagemojiiconengine_paint_isbase = false;
            KCountryFlagEmojiIconEngine::paint(painter, rect, mode, state);
            return;
        }
        auto paint_cb = kcountryflagemojiiconengine_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            int cbval3 = static_cast<int>(mode);
            int cbval4 = static_cast<int>(state);

            paint_cb(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        KCountryFlagEmojiIconEngine::paint(painter, rect, mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap pixmap(const QSize& size, QIcon::Mode mode, QIcon::State state) override {
        if (kcountryflagemojiiconengine_pixmap_isbase) {
            kcountryflagemojiiconengine_pixmap_isbase = false;
            return KCountryFlagEmojiIconEngine::pixmap(size, mode, state);
        }
        auto pixmap_cb = kcountryflagemojiiconengine_pixmap_callback;
        if (pixmap_cb) {
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval1 = const_cast<QSize*>(&size_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);

            QPixmap* callback_ret = pixmap_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KCountryFlagEmojiIconEngine::pixmap(size, mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap scaledPixmap(const QSize& size, QIcon::Mode mode, QIcon::State state, qreal scale) override {
        if (kcountryflagemojiiconengine_scaledpixmap_isbase) {
            kcountryflagemojiiconengine_scaledpixmap_isbase = false;
            return KCountryFlagEmojiIconEngine::scaledPixmap(size, mode, state, scale);
        }
        auto scaledpixmap_cb = kcountryflagemojiiconengine_scaledpixmap_callback;
        if (scaledpixmap_cb) {
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval1 = const_cast<QSize*>(&size_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);
            double cbval4 = static_cast<double>(scale);

            QPixmap* callback_ret = scaledpixmap_cb(this, cbval1, cbval2, cbval3, cbval4);
            return *callback_ret;
        }
        return KCountryFlagEmojiIconEngine::scaledPixmap(size, mode, state, scale);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isNull() override {
        if (kcountryflagemojiiconengine_isnull_isbase) {
            kcountryflagemojiiconengine_isnull_isbase = false;
            return KCountryFlagEmojiIconEngine::isNull();
        }
        auto isnull_cb = kcountryflagemojiiconengine_isnull_callback;
        if (isnull_cb) {
            bool callback_ret = isnull_cb();
            return callback_ret;
        }
        return KCountryFlagEmojiIconEngine::isNull();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize actualSize(const QSize& size, QIcon::Mode mode, QIcon::State state) override {
        if (kcountryflagemojiiconengine_actualsize_isbase) {
            kcountryflagemojiiconengine_actualsize_isbase = false;
            return KCountryFlagEmojiIconEngine::actualSize(size, mode, state);
        }
        auto actualsize_cb = kcountryflagemojiiconengine_actualsize_callback;
        if (actualsize_cb) {
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval1 = const_cast<QSize*>(&size_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);

            QSize* callback_ret = actualsize_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KCountryFlagEmojiIconEngine::actualSize(size, mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addPixmap(const QPixmap& pixmap, QIcon::Mode mode, QIcon::State state) override {
        if (kcountryflagemojiiconengine_addpixmap_isbase) {
            kcountryflagemojiiconengine_addpixmap_isbase = false;
            KCountryFlagEmojiIconEngine::addPixmap(pixmap, mode, state);
            return;
        }
        auto addpixmap_cb = kcountryflagemojiiconengine_addpixmap_callback;
        if (addpixmap_cb) {
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval1 = const_cast<QPixmap*>(&pixmap_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);

            addpixmap_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KCountryFlagEmojiIconEngine::addPixmap(pixmap, mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addFile(const QString& fileName, const QSize& size, QIcon::Mode mode, QIcon::State state) override {
        if (kcountryflagemojiiconengine_addfile_isbase) {
            kcountryflagemojiiconengine_addfile_isbase = false;
            KCountryFlagEmojiIconEngine::addFile(fileName, size, mode, state);
            return;
        }
        auto addfile_cb = kcountryflagemojiiconengine_addfile_callback;
        if (addfile_cb) {
            const QString fileName_ret = fileName;
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

            addfile_cb(this, cbval1, cbval2, cbval3, cbval4);
            libqt_free(fileName_str);
            return;
        }
        KCountryFlagEmojiIconEngine::addFile(fileName, size, mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool read(QDataStream& in) override {
        if (kcountryflagemojiiconengine_read_isbase) {
            kcountryflagemojiiconengine_read_isbase = false;
            return KCountryFlagEmojiIconEngine::read(in);
        }
        auto read_cb = kcountryflagemojiiconengine_read_callback;
        if (read_cb) {
            QDataStream& in_ret = in;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &in_ret;

            bool callback_ret = read_cb(this, cbval1);
            return callback_ret;
        }
        return KCountryFlagEmojiIconEngine::read(in);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool write(QDataStream& out) const override {
        if (kcountryflagemojiiconengine_write_isbase) {
            kcountryflagemojiiconengine_write_isbase = false;
            return KCountryFlagEmojiIconEngine::write(out);
        }
        auto write_cb = kcountryflagemojiiconengine_write_callback;
        if (write_cb) {
            QDataStream& out_ret = out;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &out_ret;

            bool callback_ret = write_cb(this, cbval1);
            return callback_ret;
        }
        return KCountryFlagEmojiIconEngine::write(out);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QSize> availableSizes(QIcon::Mode mode, QIcon::State state) override {
        if (kcountryflagemojiiconengine_availablesizes_isbase) {
            kcountryflagemojiiconengine_availablesizes_isbase = false;
            return KCountryFlagEmojiIconEngine::availableSizes(mode, state);
        }
        auto availablesizes_cb = kcountryflagemojiiconengine_availablesizes_callback;
        if (availablesizes_cb) {
            int cbval1 = static_cast<int>(mode);
            int cbval2 = static_cast<int>(state);

            libqt_list /* of QSize* */ callback_ret = availablesizes_cb(this, cbval1, cbval2);
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
        if (kcountryflagemojiiconengine_iconname_isbase) {
            kcountryflagemojiiconengine_iconname_isbase = false;
            return KCountryFlagEmojiIconEngine::iconName();
        }
        auto iconname_cb = kcountryflagemojiiconengine_iconname_callback;
        if (iconname_cb) {
            const char* callback_ret = iconname_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KCountryFlagEmojiIconEngine::iconName();
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kcountryflagemojiiconengine_virtualhook_isbase) {
            kcountryflagemojiiconengine_virtualhook_isbase = false;
            KCountryFlagEmojiIconEngine::virtual_hook(id, data);
            return;
        }
        auto virtualhook_cb = kcountryflagemojiiconengine_virtualhook_callback;
        if (virtualhook_cb) {
            int cbval1 = id;
            void* cbval2 = data;

            virtualhook_cb(this, cbval1, cbval2);
            return;
        }
        KCountryFlagEmojiIconEngine::virtual_hook(id, data);
    }
};

#endif
