#pragma once
#ifndef LIBQICONENGINE_HXX
#define LIBQICONENGINE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QIconEngine
class VirtualQIconEngine : public QIconEngine {
  public:
    // Virtual class public types (including callbacks and access types)
    using QIconEngine_Paint_Callback = void (*)(QIconEngine*, QPainter*, QRect*, int, int);
    using QIconEngine_ActualSize_Callback = QSize* (*)(QIconEngine*, QSize*, int, int);
    using QIconEngine_Pixmap_Callback = QPixmap* (*)(QIconEngine*, QSize*, int, int);
    using QIconEngine_AddPixmap_Callback = void (*)(QIconEngine*, QPixmap*, int, int);
    using QIconEngine_AddFile_Callback = void (*)(QIconEngine*, const char*, QSize*, int, int);
    using QIconEngine_Key_Callback = const char* (*)(const QIconEngine*);
    using QIconEngine_Clone_Callback = QIconEngine* (*)(const QIconEngine*);
    using QIconEngine_Read_Callback = bool (*)(QIconEngine*, QDataStream*);
    using QIconEngine_Write_Callback = bool (*)(const QIconEngine*, QDataStream*);
    using QIconEngine_AvailableSizes_Callback = libqt_list /* of QSize* */ (*)(QIconEngine*, int, int);
    using QIconEngine_IconName_Callback = const char* (*)(QIconEngine*);
    using QIconEngine_IsNull_Callback = bool (*)(QIconEngine*);
    using QIconEngine_ScaledPixmap_Callback = QPixmap* (*)(QIconEngine*, QSize*, int, int, double);
    using QIconEngine_VirtualHook_Callback = void (*)(QIconEngine*, int, void*);

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

    VirtualQIconEngine() : QIconEngine() {};

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QRect& rect, QIcon::Mode mode, QIcon::State state) override {
        if (qiconengine_paint_callback) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            int cbval3 = static_cast<int>(mode);
            int cbval4 = static_cast<int>(state);
            qiconengine_paint_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QIconEngine::paint called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize actualSize(const QSize& size, QIcon::Mode mode, QIcon::State state) override {
        if (qiconengine_actualsize_callback) {
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval1 = const_cast<QSize*>(&size_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);
            QSize* callback_ret = qiconengine_actualsize_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QIconEngine::actualSize(size, mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap pixmap(const QSize& size, QIcon::Mode mode, QIcon::State state) override {
        if (qiconengine_pixmap_callback) {
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval1 = const_cast<QSize*>(&size_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);
            QPixmap* callback_ret = qiconengine_pixmap_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QIconEngine::pixmap(size, mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addPixmap(const QPixmap& pixmap, QIcon::Mode mode, QIcon::State state) override {
        if (qiconengine_addpixmap_callback) {
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval1 = const_cast<QPixmap*>(&pixmap_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);
            qiconengine_addpixmap_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QIconEngine::addPixmap(pixmap, mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addFile(const QString& fileName, const QSize& size, QIcon::Mode mode, QIcon::State state) override {
        if (qiconengine_addfile_callback) {
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
            qiconengine_addfile_callback(this, cbval1, cbval2, cbval3, cbval4);
            libqt_free(fileName_str);
            return;
        }
        QIconEngine::addFile(fileName, size, mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString key() const override {
        if (qiconengine_key_callback) {
            const char* callback_ret = qiconengine_key_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QIconEngine::key();
    }

    // Virtual method for C ABI access and custom callback
    virtual QIconEngine* clone() const override {
        if (qiconengine_clone_callback) {
            QIconEngine* callback_ret = qiconengine_clone_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QIconEngine::clone called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool read(QDataStream& in) override {
        if (qiconengine_read_callback) {
            QDataStream& in_ret = in;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &in_ret;
            bool callback_ret = qiconengine_read_callback(this, cbval1);
            return callback_ret;
        }
        return QIconEngine::read(in);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool write(QDataStream& out) const override {
        if (qiconengine_write_callback) {
            QDataStream& out_ret = out;
            // Cast returned reference into pointer
            QDataStream* cbval1 = &out_ret;
            bool callback_ret = qiconengine_write_callback(this, cbval1);
            return callback_ret;
        }
        return QIconEngine::write(out);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QSize> availableSizes(QIcon::Mode mode, QIcon::State state) override {
        if (qiconengine_availablesizes_callback) {
            int cbval1 = static_cast<int>(mode);
            int cbval2 = static_cast<int>(state);
            libqt_list /* of QSize* */ callback_ret = qiconengine_availablesizes_callback(this, cbval1, cbval2);
            QList<QSize> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QSize** callback_ret_arr = static_cast<QSize**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QIconEngine::availableSizes(mode, state);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString iconName() override {
        if (qiconengine_iconname_callback) {
            const char* callback_ret = qiconengine_iconname_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QIconEngine::iconName();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isNull() override {
        if (qiconengine_isnull_callback) {
            bool callback_ret = qiconengine_isnull_callback(this);
            return callback_ret;
        }
        return QIconEngine::isNull();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap scaledPixmap(const QSize& size, QIcon::Mode mode, QIcon::State state, qreal scale) override {
        if (qiconengine_scaledpixmap_callback) {
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval1 = const_cast<QSize*>(&size_ret);
            int cbval2 = static_cast<int>(mode);
            int cbval3 = static_cast<int>(state);
            double cbval4 = static_cast<double>(scale);
            QPixmap* callback_ret = qiconengine_scaledpixmap_callback(this, cbval1, cbval2, cbval3, cbval4);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QIconEngine::scaledPixmap(size, mode, state, scale);
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (qiconengine_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            qiconengine_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        QIconEngine::virtual_hook(id, data);
    }
};

#endif
