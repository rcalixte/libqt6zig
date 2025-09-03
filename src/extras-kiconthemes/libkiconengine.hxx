#pragma once
#ifndef SRC_EXTRAS_KICONTHEMESC_LIBVIRTUALKICONENGINE_H
#define SRC_EXTRAS_KICONTHEMESC_LIBVIRTUALKICONENGINE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIconEngine so that we can call protected methods
class VirtualKIconEngine final : public KIconEngine {

  public:
    // Virtual class boolean flag
    bool isVirtualKIconEngine = true;

    // Virtual class public types (including callbacks)
    using KIconEngine_ActualSize_Callback = QSize* (*)(KIconEngine*, QSize*, int, int);
    using KIconEngine_Paint_Callback = void (*)(KIconEngine*, QPainter*, QRect*, int, int);
    using KIconEngine_Pixmap_Callback = QPixmap* (*)(KIconEngine*, QSize*, int, int);
    using KIconEngine_ScaledPixmap_Callback = QPixmap* (*)(KIconEngine*, QSize*, int, int, double);
    using KIconEngine_IconName_Callback = const char* (*)();
    using KIconEngine_AvailableSizes_Callback = QSize** (*)(KIconEngine*, int, int);
    using KIconEngine_IsNull_Callback = bool (*)();
    using KIconEngine_Key_Callback = const char* (*)();
    using KIconEngine_Clone_Callback = QIconEngine* (*)();
    using KIconEngine_Read_Callback = bool (*)(KIconEngine*, QDataStream*);
    using KIconEngine_Write_Callback = bool (*)(const KIconEngine*, QDataStream*);
    using KIconEngine_AddPixmap_Callback = void (*)(KIconEngine*, QPixmap*, int, int);
    using KIconEngine_AddFile_Callback = void (*)(KIconEngine*, libqt_string, QSize*, int, int);
    using KIconEngine_VirtualHook_Callback = void (*)(KIconEngine*, int, void*);

  protected:
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

    // Instance base flags
    mutable bool kiconengine_actualsize_isbase = false;
    mutable bool kiconengine_paint_isbase = false;
    mutable bool kiconengine_pixmap_isbase = false;
    mutable bool kiconengine_scaledpixmap_isbase = false;
    mutable bool kiconengine_iconname_isbase = false;
    mutable bool kiconengine_availablesizes_isbase = false;
    mutable bool kiconengine_isnull_isbase = false;
    mutable bool kiconengine_key_isbase = false;
    mutable bool kiconengine_clone_isbase = false;
    mutable bool kiconengine_read_isbase = false;
    mutable bool kiconengine_write_isbase = false;
    mutable bool kiconengine_addpixmap_isbase = false;
    mutable bool kiconengine_addfile_isbase = false;
    mutable bool kiconengine_virtualhook_isbase = false;

  public:
    VirtualKIconEngine(const QString& iconName, KIconLoader* iconLoader, const QList<QString>& overlays) : KIconEngine(iconName, iconLoader, overlays) {};
    VirtualKIconEngine(const QString& iconName, KIconLoader* iconLoader) : KIconEngine(iconName, iconLoader) {};
    VirtualKIconEngine(const QString& iconName, const KIconColors& colors, KIconLoader* iconLoader) : KIconEngine(iconName, colors, iconLoader) {};
    VirtualKIconEngine(const QString& iconName, const KIconColors& colors, KIconLoader* iconLoader, const QList<QString>& overlays) : KIconEngine(iconName, colors, iconLoader, overlays) {};
    VirtualKIconEngine(const KIconEngine& param1) : KIconEngine(param1) {};

    ~VirtualKIconEngine() {
        kiconengine_actualsize_callback = nullptr;
        kiconengine_paint_callback = nullptr;
        kiconengine_pixmap_callback = nullptr;
        kiconengine_scaledpixmap_callback = nullptr;
        kiconengine_iconname_callback = nullptr;
        kiconengine_availablesizes_callback = nullptr;
        kiconengine_isnull_callback = nullptr;
        kiconengine_key_callback = nullptr;
        kiconengine_clone_callback = nullptr;
        kiconengine_read_callback = nullptr;
        kiconengine_write_callback = nullptr;
        kiconengine_addpixmap_callback = nullptr;
        kiconengine_addfile_callback = nullptr;
        kiconengine_virtualhook_callback = nullptr;
    }

    // Callback setters
    inline void setKIconEngine_ActualSize_Callback(KIconEngine_ActualSize_Callback cb) { kiconengine_actualsize_callback = cb; }
    inline void setKIconEngine_Paint_Callback(KIconEngine_Paint_Callback cb) { kiconengine_paint_callback = cb; }
    inline void setKIconEngine_Pixmap_Callback(KIconEngine_Pixmap_Callback cb) { kiconengine_pixmap_callback = cb; }
    inline void setKIconEngine_ScaledPixmap_Callback(KIconEngine_ScaledPixmap_Callback cb) { kiconengine_scaledpixmap_callback = cb; }
    inline void setKIconEngine_IconName_Callback(KIconEngine_IconName_Callback cb) { kiconengine_iconname_callback = cb; }
    inline void setKIconEngine_AvailableSizes_Callback(KIconEngine_AvailableSizes_Callback cb) { kiconengine_availablesizes_callback = cb; }
    inline void setKIconEngine_IsNull_Callback(KIconEngine_IsNull_Callback cb) { kiconengine_isnull_callback = cb; }
    inline void setKIconEngine_Key_Callback(KIconEngine_Key_Callback cb) { kiconengine_key_callback = cb; }
    inline void setKIconEngine_Clone_Callback(KIconEngine_Clone_Callback cb) { kiconengine_clone_callback = cb; }
    inline void setKIconEngine_Read_Callback(KIconEngine_Read_Callback cb) { kiconengine_read_callback = cb; }
    inline void setKIconEngine_Write_Callback(KIconEngine_Write_Callback cb) { kiconengine_write_callback = cb; }
    inline void setKIconEngine_AddPixmap_Callback(KIconEngine_AddPixmap_Callback cb) { kiconengine_addpixmap_callback = cb; }
    inline void setKIconEngine_AddFile_Callback(KIconEngine_AddFile_Callback cb) { kiconengine_addfile_callback = cb; }
    inline void setKIconEngine_VirtualHook_Callback(KIconEngine_VirtualHook_Callback cb) { kiconengine_virtualhook_callback = cb; }

    // Base flag setters
    inline void setKIconEngine_ActualSize_IsBase(bool value) const { kiconengine_actualsize_isbase = value; }
    inline void setKIconEngine_Paint_IsBase(bool value) const { kiconengine_paint_isbase = value; }
    inline void setKIconEngine_Pixmap_IsBase(bool value) const { kiconengine_pixmap_isbase = value; }
    inline void setKIconEngine_ScaledPixmap_IsBase(bool value) const { kiconengine_scaledpixmap_isbase = value; }
    inline void setKIconEngine_IconName_IsBase(bool value) const { kiconengine_iconname_isbase = value; }
    inline void setKIconEngine_AvailableSizes_IsBase(bool value) const { kiconengine_availablesizes_isbase = value; }
    inline void setKIconEngine_IsNull_IsBase(bool value) const { kiconengine_isnull_isbase = value; }
    inline void setKIconEngine_Key_IsBase(bool value) const { kiconengine_key_isbase = value; }
    inline void setKIconEngine_Clone_IsBase(bool value) const { kiconengine_clone_isbase = value; }
    inline void setKIconEngine_Read_IsBase(bool value) const { kiconengine_read_isbase = value; }
    inline void setKIconEngine_Write_IsBase(bool value) const { kiconengine_write_isbase = value; }
    inline void setKIconEngine_AddPixmap_IsBase(bool value) const { kiconengine_addpixmap_isbase = value; }
    inline void setKIconEngine_AddFile_IsBase(bool value) const { kiconengine_addfile_isbase = value; }
    inline void setKIconEngine_VirtualHook_IsBase(bool value) const { kiconengine_virtualhook_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QSize actualSize(const QSize& size, QIcon::Mode mode, QIcon::State state) override {
        if (kiconengine_actualsize_isbase) {
            kiconengine_actualsize_isbase = false;
            return KIconEngine::actualSize(size, mode, state);
        } else if (kiconengine_actualsize_callback != nullptr) {
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval1 = const_cast<QSize*>(&size_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);

            QSize* callback_ret = kiconengine_actualsize_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KIconEngine::actualSize(size, mode, state);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QRect& rect, QIcon::Mode mode, QIcon::State state) override {
        if (kiconengine_paint_isbase) {
            kiconengine_paint_isbase = false;
            KIconEngine::paint(painter, rect, mode, state);
        } else if (kiconengine_paint_callback != nullptr) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            int cbval3 = static_cast<int>(mode);
            int cbval4 = static_cast<int>(state);

            kiconengine_paint_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KIconEngine::paint(painter, rect, mode, state);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap pixmap(const QSize& size, QIcon::Mode mode, QIcon::State state) override {
        if (kiconengine_pixmap_isbase) {
            kiconengine_pixmap_isbase = false;
            return KIconEngine::pixmap(size, mode, state);
        } else if (kiconengine_pixmap_callback != nullptr) {
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval1 = const_cast<QSize*>(&size_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);

            QPixmap* callback_ret = kiconengine_pixmap_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KIconEngine::pixmap(size, mode, state);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap scaledPixmap(const QSize& size, QIcon::Mode mode, QIcon::State state, qreal scale) override {
        if (kiconengine_scaledpixmap_isbase) {
            kiconengine_scaledpixmap_isbase = false;
            return KIconEngine::scaledPixmap(size, mode, state, scale);
        } else if (kiconengine_scaledpixmap_callback != nullptr) {
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval1 = const_cast<QSize*>(&size_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);
            double cbval4 = static_cast<double>(scale);

            QPixmap* callback_ret = kiconengine_scaledpixmap_callback(this, cbval1, cbval2, cbval3, cbval4);
            return *callback_ret;
        } else {
            return KIconEngine::scaledPixmap(size, mode, state, scale);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString iconName() override {
        if (kiconengine_iconname_isbase) {
            kiconengine_iconname_isbase = false;
            return KIconEngine::iconName();
        } else if (kiconengine_iconname_callback != nullptr) {
            const char* callback_ret = kiconengine_iconname_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KIconEngine::iconName();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QSize> availableSizes(QIcon::Mode mode, QIcon::State state) override {
        if (kiconengine_availablesizes_isbase) {
            kiconengine_availablesizes_isbase = false;
            return KIconEngine::availableSizes(mode, state);
        } else if (kiconengine_availablesizes_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);
            int cbval2 = static_cast<int>(state);

            QSize** callback_ret = kiconengine_availablesizes_callback(this, cbval1, cbval2);
            QList<QSize> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QSize** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return KIconEngine::availableSizes(mode, state);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isNull() override {
        if (kiconengine_isnull_isbase) {
            kiconengine_isnull_isbase = false;
            return KIconEngine::isNull();
        } else if (kiconengine_isnull_callback != nullptr) {
            bool callback_ret = kiconengine_isnull_callback();
            return callback_ret;
        } else {
            return KIconEngine::isNull();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString key() const override {
        if (kiconengine_key_isbase) {
            kiconengine_key_isbase = false;
            return KIconEngine::key();
        } else if (kiconengine_key_callback != nullptr) {
            const char* callback_ret = kiconengine_key_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KIconEngine::key();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QIconEngine* clone() const override {
        if (kiconengine_clone_isbase) {
            kiconengine_clone_isbase = false;
            return KIconEngine::clone();
        } else if (kiconengine_clone_callback != nullptr) {
            QIconEngine* callback_ret = kiconengine_clone_callback();
            return callback_ret;
        } else {
            return KIconEngine::clone();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool read(QDataStream& in) override {
        if (kiconengine_read_isbase) {
            kiconengine_read_isbase = false;
            return KIconEngine::read(in);
        } else if (kiconengine_read_callback != nullptr) {
            QDataStream& in_ret = in;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &in_ret;

            bool callback_ret = kiconengine_read_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIconEngine::read(in);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool write(QDataStream& out) const override {
        if (kiconengine_write_isbase) {
            kiconengine_write_isbase = false;
            return KIconEngine::write(out);
        } else if (kiconengine_write_callback != nullptr) {
            QDataStream& out_ret = out;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &out_ret;

            bool callback_ret = kiconengine_write_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIconEngine::write(out);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addPixmap(const QPixmap& pixmap, QIcon::Mode mode, QIcon::State state) override {
        if (kiconengine_addpixmap_isbase) {
            kiconengine_addpixmap_isbase = false;
            KIconEngine::addPixmap(pixmap, mode, state);
        } else if (kiconengine_addpixmap_callback != nullptr) {
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval1 = const_cast<QPixmap*>(&pixmap_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);

            kiconengine_addpixmap_callback(this, cbval1, cbval2, cbval3);
        } else {
            KIconEngine::addPixmap(pixmap, mode, state);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addFile(const QString& fileName, const QSize& size, QIcon::Mode mode, QIcon::State state) override {
        if (kiconengine_addfile_isbase) {
            kiconengine_addfile_isbase = false;
            KIconEngine::addFile(fileName, size, mode, state);
        } else if (kiconengine_addfile_callback != nullptr) {
            const QString fileName_ret = fileName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray fileName_b = fileName_ret.toUtf8();
            libqt_string fileName_str;
            fileName_str.len = fileName_b.length();
            fileName_str.data = static_cast<const char*>(malloc(fileName_str.len + 1));
            memcpy((void*)fileName_str.data, fileName_b.data(), fileName_str.len);
            ((char*)fileName_str.data)[fileName_str.len] = '\0';
            libqt_string cbval1 = fileName_str;
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval2 = const_cast<QSize*>(&size_ret);
            int cbval3 = static_cast<int>(mode);
            int cbval4 = static_cast<int>(state);

            kiconengine_addfile_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KIconEngine::addFile(fileName, size, mode, state);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kiconengine_virtualhook_isbase) {
            kiconengine_virtualhook_isbase = false;
            KIconEngine::virtual_hook(id, data);
        } else if (kiconengine_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            kiconengine_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KIconEngine::virtual_hook(id, data);
        }
    }
};

#endif
