#pragma once
#ifndef SRCC_LIBVIRTUALQICONENGINE_H
#define SRCC_LIBVIRTUALQICONENGINE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QIconEngine so that we can call protected methods
class VirtualQIconEngine final : public QIconEngine {

  public:
    // Virtual class boolean flag
    bool isVirtualQIconEngine = true;

    // Virtual class public types (including callbacks)
    using QIconEngine_Paint_Callback = void (*)(QIconEngine*, QPainter*, QRect*, int, int);
    using QIconEngine_ActualSize_Callback = QSize* (*)(QIconEngine*, QSize*, int, int);
    using QIconEngine_Pixmap_Callback = QPixmap* (*)(QIconEngine*, QSize*, int, int);
    using QIconEngine_AddPixmap_Callback = void (*)(QIconEngine*, QPixmap*, int, int);
    using QIconEngine_AddFile_Callback = void (*)(QIconEngine*, libqt_string, QSize*, int, int);
    using QIconEngine_Key_Callback = libqt_string (*)();
    using QIconEngine_Clone_Callback = QIconEngine* (*)();
    using QIconEngine_Read_Callback = bool (*)(QIconEngine*, QDataStream*);
    using QIconEngine_Write_Callback = bool (*)(const QIconEngine*, QDataStream*);
    using QIconEngine_AvailableSizes_Callback = libqt_list /* of QSize* */ (*)(QIconEngine*, int, int);
    using QIconEngine_IconName_Callback = libqt_string (*)();
    using QIconEngine_IsNull_Callback = bool (*)();
    using QIconEngine_ScaledPixmap_Callback = QPixmap* (*)(QIconEngine*, QSize*, int, int, double);
    using QIconEngine_VirtualHook_Callback = void (*)(QIconEngine*, int, void*);

  protected:
    // Instance callback storage
    QIconEngine_Paint_Callback qiconengine_paint_callback = nullptr;
    QIconEngine_ActualSize_Callback qiconengine_actualsize_callback = nullptr;
    QIconEngine_Pixmap_Callback qiconengine_pixmap_callback = nullptr;
    QIconEngine_AddPixmap_Callback qiconengine_addpixmap_callback = nullptr;
    QIconEngine_AddFile_Callback qiconengine_addfile_callback = nullptr;
    QIconEngine_Key_Callback qiconengine_key_callback = nullptr;
    QIconEngine_Clone_Callback qiconengine_clone_callback = nullptr;
    QIconEngine_Read_Callback qiconengine_read_callback = nullptr;
    QIconEngine_Write_Callback qiconengine_write_callback = nullptr;
    QIconEngine_AvailableSizes_Callback qiconengine_availablesizes_callback = nullptr;
    QIconEngine_IconName_Callback qiconengine_iconname_callback = nullptr;
    QIconEngine_IsNull_Callback qiconengine_isnull_callback = nullptr;
    QIconEngine_ScaledPixmap_Callback qiconengine_scaledpixmap_callback = nullptr;
    QIconEngine_VirtualHook_Callback qiconengine_virtualhook_callback = nullptr;

    // Instance base flags
    mutable bool qiconengine_paint_isbase = false;
    mutable bool qiconengine_actualsize_isbase = false;
    mutable bool qiconengine_pixmap_isbase = false;
    mutable bool qiconengine_addpixmap_isbase = false;
    mutable bool qiconengine_addfile_isbase = false;
    mutable bool qiconengine_key_isbase = false;
    mutable bool qiconengine_clone_isbase = false;
    mutable bool qiconengine_read_isbase = false;
    mutable bool qiconengine_write_isbase = false;
    mutable bool qiconengine_availablesizes_isbase = false;
    mutable bool qiconengine_iconname_isbase = false;
    mutable bool qiconengine_isnull_isbase = false;
    mutable bool qiconengine_scaledpixmap_isbase = false;
    mutable bool qiconengine_virtualhook_isbase = false;

  public:
    VirtualQIconEngine() : QIconEngine() {};

    ~VirtualQIconEngine() {
        qiconengine_paint_callback = nullptr;
        qiconengine_actualsize_callback = nullptr;
        qiconengine_pixmap_callback = nullptr;
        qiconengine_addpixmap_callback = nullptr;
        qiconengine_addfile_callback = nullptr;
        qiconengine_key_callback = nullptr;
        qiconengine_clone_callback = nullptr;
        qiconengine_read_callback = nullptr;
        qiconengine_write_callback = nullptr;
        qiconengine_availablesizes_callback = nullptr;
        qiconengine_iconname_callback = nullptr;
        qiconengine_isnull_callback = nullptr;
        qiconengine_scaledpixmap_callback = nullptr;
        qiconengine_virtualhook_callback = nullptr;
    }

    // Callback setters
    inline void setQIconEngine_Paint_Callback(QIconEngine_Paint_Callback cb) { qiconengine_paint_callback = cb; }
    inline void setQIconEngine_ActualSize_Callback(QIconEngine_ActualSize_Callback cb) { qiconengine_actualsize_callback = cb; }
    inline void setQIconEngine_Pixmap_Callback(QIconEngine_Pixmap_Callback cb) { qiconengine_pixmap_callback = cb; }
    inline void setQIconEngine_AddPixmap_Callback(QIconEngine_AddPixmap_Callback cb) { qiconengine_addpixmap_callback = cb; }
    inline void setQIconEngine_AddFile_Callback(QIconEngine_AddFile_Callback cb) { qiconengine_addfile_callback = cb; }
    inline void setQIconEngine_Key_Callback(QIconEngine_Key_Callback cb) { qiconengine_key_callback = cb; }
    inline void setQIconEngine_Clone_Callback(QIconEngine_Clone_Callback cb) { qiconengine_clone_callback = cb; }
    inline void setQIconEngine_Read_Callback(QIconEngine_Read_Callback cb) { qiconengine_read_callback = cb; }
    inline void setQIconEngine_Write_Callback(QIconEngine_Write_Callback cb) { qiconengine_write_callback = cb; }
    inline void setQIconEngine_AvailableSizes_Callback(QIconEngine_AvailableSizes_Callback cb) { qiconengine_availablesizes_callback = cb; }
    inline void setQIconEngine_IconName_Callback(QIconEngine_IconName_Callback cb) { qiconengine_iconname_callback = cb; }
    inline void setQIconEngine_IsNull_Callback(QIconEngine_IsNull_Callback cb) { qiconengine_isnull_callback = cb; }
    inline void setQIconEngine_ScaledPixmap_Callback(QIconEngine_ScaledPixmap_Callback cb) { qiconengine_scaledpixmap_callback = cb; }
    inline void setQIconEngine_VirtualHook_Callback(QIconEngine_VirtualHook_Callback cb) { qiconengine_virtualhook_callback = cb; }

    // Base flag setters
    inline void setQIconEngine_Paint_IsBase(bool value) const { qiconengine_paint_isbase = value; }
    inline void setQIconEngine_ActualSize_IsBase(bool value) const { qiconengine_actualsize_isbase = value; }
    inline void setQIconEngine_Pixmap_IsBase(bool value) const { qiconengine_pixmap_isbase = value; }
    inline void setQIconEngine_AddPixmap_IsBase(bool value) const { qiconengine_addpixmap_isbase = value; }
    inline void setQIconEngine_AddFile_IsBase(bool value) const { qiconengine_addfile_isbase = value; }
    inline void setQIconEngine_Key_IsBase(bool value) const { qiconengine_key_isbase = value; }
    inline void setQIconEngine_Clone_IsBase(bool value) const { qiconengine_clone_isbase = value; }
    inline void setQIconEngine_Read_IsBase(bool value) const { qiconengine_read_isbase = value; }
    inline void setQIconEngine_Write_IsBase(bool value) const { qiconengine_write_isbase = value; }
    inline void setQIconEngine_AvailableSizes_IsBase(bool value) const { qiconengine_availablesizes_isbase = value; }
    inline void setQIconEngine_IconName_IsBase(bool value) const { qiconengine_iconname_isbase = value; }
    inline void setQIconEngine_IsNull_IsBase(bool value) const { qiconengine_isnull_isbase = value; }
    inline void setQIconEngine_ScaledPixmap_IsBase(bool value) const { qiconengine_scaledpixmap_isbase = value; }
    inline void setQIconEngine_VirtualHook_IsBase(bool value) const { qiconengine_virtualhook_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QRect& rect, QIcon::Mode mode, QIcon::State state) override {
        if (qiconengine_paint_callback != nullptr) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            int cbval3 = static_cast<int>(mode);
            int cbval4 = static_cast<int>(state);

            qiconengine_paint_callback(this, cbval1, cbval2, cbval3, cbval4);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize actualSize(const QSize& size, QIcon::Mode mode, QIcon::State state) override {
        if (qiconengine_actualsize_isbase) {
            qiconengine_actualsize_isbase = false;
            return QIconEngine::actualSize(size, mode, state);
        } else if (qiconengine_actualsize_callback != nullptr) {
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval1 = const_cast<QSize*>(&size_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);

            QSize* callback_ret = qiconengine_actualsize_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QIconEngine::actualSize(size, mode, state);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap pixmap(const QSize& size, QIcon::Mode mode, QIcon::State state) override {
        if (qiconengine_pixmap_isbase) {
            qiconengine_pixmap_isbase = false;
            return QIconEngine::pixmap(size, mode, state);
        } else if (qiconengine_pixmap_callback != nullptr) {
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval1 = const_cast<QSize*>(&size_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);

            QPixmap* callback_ret = qiconengine_pixmap_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return QIconEngine::pixmap(size, mode, state);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addPixmap(const QPixmap& pixmap, QIcon::Mode mode, QIcon::State state) override {
        if (qiconengine_addpixmap_isbase) {
            qiconengine_addpixmap_isbase = false;
            QIconEngine::addPixmap(pixmap, mode, state);
        } else if (qiconengine_addpixmap_callback != nullptr) {
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval1 = const_cast<QPixmap*>(&pixmap_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);

            qiconengine_addpixmap_callback(this, cbval1, cbval2, cbval3);
        } else {
            QIconEngine::addPixmap(pixmap, mode, state);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addFile(const QString& fileName, const QSize& size, QIcon::Mode mode, QIcon::State state) override {
        if (qiconengine_addfile_isbase) {
            qiconengine_addfile_isbase = false;
            QIconEngine::addFile(fileName, size, mode, state);
        } else if (qiconengine_addfile_callback != nullptr) {
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

            qiconengine_addfile_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QIconEngine::addFile(fileName, size, mode, state);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString key() const override {
        if (qiconengine_key_isbase) {
            qiconengine_key_isbase = false;
            return QIconEngine::key();
        } else if (qiconengine_key_callback != nullptr) {
            libqt_string callback_ret = qiconengine_key_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QIconEngine::key();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QIconEngine* clone() const override {
        if (qiconengine_clone_callback != nullptr) {
            QIconEngine* callback_ret = qiconengine_clone_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool read(QDataStream& in) override {
        if (qiconengine_read_isbase) {
            qiconengine_read_isbase = false;
            return QIconEngine::read(in);
        } else if (qiconengine_read_callback != nullptr) {
            QDataStream& in_ret = in;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &in_ret;

            bool callback_ret = qiconengine_read_callback(this, cbval1);
            return callback_ret;
        } else {
            return QIconEngine::read(in);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool write(QDataStream& out) const override {
        if (qiconengine_write_isbase) {
            qiconengine_write_isbase = false;
            return QIconEngine::write(out);
        } else if (qiconengine_write_callback != nullptr) {
            QDataStream& out_ret = out;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &out_ret;

            bool callback_ret = qiconengine_write_callback(this, cbval1);
            return callback_ret;
        } else {
            return QIconEngine::write(out);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QSize> availableSizes(QIcon::Mode mode, QIcon::State state) override {
        if (qiconengine_availablesizes_isbase) {
            qiconengine_availablesizes_isbase = false;
            return QIconEngine::availableSizes(mode, state);
        } else if (qiconengine_availablesizes_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);
            int cbval2 = static_cast<int>(state);

            libqt_list /* of QSize* */ callback_ret = qiconengine_availablesizes_callback(this, cbval1, cbval2);
            QList<QSize> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QSize** callback_ret_arr = static_cast<QSize**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            return callback_ret_QList;
        } else {
            return QIconEngine::availableSizes(mode, state);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString iconName() override {
        if (qiconengine_iconname_isbase) {
            qiconengine_iconname_isbase = false;
            return QIconEngine::iconName();
        } else if (qiconengine_iconname_callback != nullptr) {
            libqt_string callback_ret = qiconengine_iconname_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QIconEngine::iconName();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isNull() override {
        if (qiconengine_isnull_isbase) {
            qiconengine_isnull_isbase = false;
            return QIconEngine::isNull();
        } else if (qiconengine_isnull_callback != nullptr) {
            bool callback_ret = qiconengine_isnull_callback();
            return callback_ret;
        } else {
            return QIconEngine::isNull();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap scaledPixmap(const QSize& size, QIcon::Mode mode, QIcon::State state, qreal scale) override {
        if (qiconengine_scaledpixmap_isbase) {
            qiconengine_scaledpixmap_isbase = false;
            return QIconEngine::scaledPixmap(size, mode, state, scale);
        } else if (qiconengine_scaledpixmap_callback != nullptr) {
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval1 = const_cast<QSize*>(&size_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);
            double cbval4 = static_cast<double>(scale);

            QPixmap* callback_ret = qiconengine_scaledpixmap_callback(this, cbval1, cbval2, cbval3, cbval4);
            return *callback_ret;
        } else {
            return QIconEngine::scaledPixmap(size, mode, state, scale);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (qiconengine_virtualhook_isbase) {
            qiconengine_virtualhook_isbase = false;
            QIconEngine::virtual_hook(id, data);
        } else if (qiconengine_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            qiconengine_virtualhook_callback(this, cbval1, cbval2);
        } else {
            QIconEngine::virtual_hook(id, data);
        }
    }
};

#endif
