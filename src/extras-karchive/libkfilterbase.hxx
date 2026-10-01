#pragma once
#ifndef EXTRAS_KARCHIVE_LIBKFILTERBASE_HXX
#define EXTRAS_KARCHIVE_LIBKFILTERBASE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFilterBase
class VirtualKFilterBase : public KFilterBase {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFilterBase_Init_Callback = bool (*)(KFilterBase*, int);
    using KFilterBase_Mode_Callback = int (*)(const KFilterBase*);
    using KFilterBase_Terminate_Callback = bool (*)(KFilterBase*);
    using KFilterBase_Reset_Callback = void (*)(KFilterBase*);
    using KFilterBase_ReadHeader_Callback = bool (*)(KFilterBase*);
    using KFilterBase_WriteHeader_Callback = bool (*)(KFilterBase*, libqt_string);
    using KFilterBase_SetOutBuffer_Callback = void (*)(KFilterBase*, char*, unsigned int);
    using KFilterBase_SetInBuffer_Callback = void (*)(KFilterBase*, const char*, unsigned int);
    using KFilterBase_InBufferEmpty_Callback = bool (*)(const KFilterBase*);
    using KFilterBase_InBufferAvailable_Callback = int (*)(const KFilterBase*);
    using KFilterBase_OutBufferFull_Callback = bool (*)(const KFilterBase*);
    using KFilterBase_OutBufferAvailable_Callback = int (*)(const KFilterBase*);
    using KFilterBase_Uncompress_Callback = int (*)(KFilterBase*);
    using KFilterBase_Compress_Callback = int (*)(KFilterBase*, bool);
    using KFilterBase_VirtualHook_Callback = void (*)(KFilterBase*, int, void*);

    // Instance callback storage
    KFilterBase_Init_Callback kfilterbase_init_callback = nullptr;
    KFilterBase_Mode_Callback kfilterbase_mode_callback = nullptr;
    KFilterBase_Terminate_Callback kfilterbase_terminate_callback = nullptr;
    KFilterBase_Reset_Callback kfilterbase_reset_callback = nullptr;
    KFilterBase_ReadHeader_Callback kfilterbase_readheader_callback = nullptr;
    KFilterBase_WriteHeader_Callback kfilterbase_writeheader_callback = nullptr;
    KFilterBase_SetOutBuffer_Callback kfilterbase_setoutbuffer_callback = nullptr;
    KFilterBase_SetInBuffer_Callback kfilterbase_setinbuffer_callback = nullptr;
    KFilterBase_InBufferEmpty_Callback kfilterbase_inbufferempty_callback = nullptr;
    KFilterBase_InBufferAvailable_Callback kfilterbase_inbufferavailable_callback = nullptr;
    KFilterBase_OutBufferFull_Callback kfilterbase_outbufferfull_callback = nullptr;
    KFilterBase_OutBufferAvailable_Callback kfilterbase_outbufferavailable_callback = nullptr;
    KFilterBase_Uncompress_Callback kfilterbase_uncompress_callback = nullptr;
    KFilterBase_Compress_Callback kfilterbase_compress_callback = nullptr;
    KFilterBase_VirtualHook_Callback kfilterbase_virtualhook_callback = nullptr;

    // Access struct
    struct Base : KFilterBase {
        using KFilterBase::virtual_hook;
    };

    VirtualKFilterBase() : KFilterBase() {};

    // Virtual method for C ABI access and custom callback
    virtual bool init(int mode) override {
        if (kfilterbase_init_callback) {
            int cbval1 = mode;
            bool callback_ret = kfilterbase_init_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KFilterBase::init called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int mode() const override {
        if (kfilterbase_mode_callback) {
            int callback_ret = kfilterbase_mode_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KFilterBase::mode called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool terminate() override {
        if (kfilterbase_terminate_callback) {
            bool callback_ret = kfilterbase_terminate_callback(this);
            return callback_ret;
        }
        return KFilterBase::terminate();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (kfilterbase_reset_callback) {
            kfilterbase_reset_callback(this);
            return;
        }
        KFilterBase::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readHeader() override {
        if (kfilterbase_readheader_callback) {
            bool callback_ret = kfilterbase_readheader_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KFilterBase::readHeader called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeHeader(const QByteArray& filename) override {
        if (kfilterbase_writeheader_callback) {
            const QByteArray filename_qb = filename;
            libqt_string filename_str;
            filename_str.len = filename_qb.length();
            filename_str.data = static_cast<char*>(malloc(filename_str.len));
            memcpy((void*)filename_str.data, filename_qb.data(), filename_str.len);
            libqt_string cbval1 = filename_str;
            bool callback_ret = kfilterbase_writeheader_callback(this, cbval1);
            libqt_free(filename_str.data);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KFilterBase::writeHeader called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOutBuffer(char* data, uint maxlen) override {
        if (kfilterbase_setoutbuffer_callback) {
            char* cbval1 = data;
            unsigned int cbval2 = static_cast<unsigned int>(maxlen);
            kfilterbase_setoutbuffer_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KFilterBase::setOutBuffer called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setInBuffer(const char* data, uint size) override {
        if (kfilterbase_setinbuffer_callback) {
            const char* cbval1 = (const char*)data;
            unsigned int cbval2 = static_cast<unsigned int>(size);
            kfilterbase_setinbuffer_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KFilterBase::setInBuffer called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool inBufferEmpty() const override {
        if (kfilterbase_inbufferempty_callback) {
            bool callback_ret = kfilterbase_inbufferempty_callback(this);
            return callback_ret;
        }
        return KFilterBase::inBufferEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual int inBufferAvailable() const override {
        if (kfilterbase_inbufferavailable_callback) {
            int callback_ret = kfilterbase_inbufferavailable_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KFilterBase::inBufferAvailable called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool outBufferFull() const override {
        if (kfilterbase_outbufferfull_callback) {
            bool callback_ret = kfilterbase_outbufferfull_callback(this);
            return callback_ret;
        }
        return KFilterBase::outBufferFull();
    }

    // Virtual method for C ABI access and custom callback
    virtual int outBufferAvailable() const override {
        if (kfilterbase_outbufferavailable_callback) {
            int callback_ret = kfilterbase_outbufferavailable_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KFilterBase::outBufferAvailable called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual KFilterBase::Result uncompress() override {
        if (kfilterbase_uncompress_callback) {
            int callback_ret = kfilterbase_uncompress_callback(this);
            return static_cast<KFilterBase::Result>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KFilterBase::uncompress called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual KFilterBase::Result compress(bool finish) override {
        if (kfilterbase_compress_callback) {
            bool cbval1 = finish;
            int callback_ret = kfilterbase_compress_callback(this, cbval1);
            return static_cast<KFilterBase::Result>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KFilterBase::compress called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kfilterbase_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            kfilterbase_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        KFilterBase::virtual_hook(id, data);
    }

    // Friend functions
    friend void KFilterBase_SuperVirtualHook(KFilterBase* self, int id, void* data);
};

#endif
