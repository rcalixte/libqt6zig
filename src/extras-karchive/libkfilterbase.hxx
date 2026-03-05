#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKFILTERBASE_H
#define SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKFILTERBASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFilterBase so that we can call protected methods
class VirtualKFilterBase : public KFilterBase {

  public:
    // Virtual class boolean flag
    bool isVirtualKFilterBase = true;

    // Virtual class public types (including callbacks)
    using KFilterBase_Init_Callback = bool (*)(KFilterBase*, int);
    using KFilterBase_Mode_Callback = int (*)();
    using KFilterBase_Terminate_Callback = bool (*)();
    using KFilterBase_Reset_Callback = void (*)();
    using KFilterBase_ReadHeader_Callback = bool (*)();
    using KFilterBase_WriteHeader_Callback = bool (*)(KFilterBase*, libqt_string);
    using KFilterBase_SetOutBuffer_Callback = void (*)(KFilterBase*, char*, unsigned int);
    using KFilterBase_SetInBuffer_Callback = void (*)(KFilterBase*, const char*, unsigned int);
    using KFilterBase_InBufferEmpty_Callback = bool (*)();
    using KFilterBase_InBufferAvailable_Callback = int (*)();
    using KFilterBase_OutBufferFull_Callback = bool (*)();
    using KFilterBase_OutBufferAvailable_Callback = int (*)();
    using KFilterBase_Uncompress_Callback = int (*)();
    using KFilterBase_Compress_Callback = int (*)(KFilterBase*, bool);
    using KFilterBase_VirtualHook_Callback = void (*)(KFilterBase*, int, void*);

  protected:
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

    // Instance base flags
    mutable bool kfilterbase_init_isbase = false;
    mutable bool kfilterbase_mode_isbase = false;
    mutable bool kfilterbase_terminate_isbase = false;
    mutable bool kfilterbase_reset_isbase = false;
    mutable bool kfilterbase_readheader_isbase = false;
    mutable bool kfilterbase_writeheader_isbase = false;
    mutable bool kfilterbase_setoutbuffer_isbase = false;
    mutable bool kfilterbase_setinbuffer_isbase = false;
    mutable bool kfilterbase_inbufferempty_isbase = false;
    mutable bool kfilterbase_inbufferavailable_isbase = false;
    mutable bool kfilterbase_outbufferfull_isbase = false;
    mutable bool kfilterbase_outbufferavailable_isbase = false;
    mutable bool kfilterbase_uncompress_isbase = false;
    mutable bool kfilterbase_compress_isbase = false;
    mutable bool kfilterbase_virtualhook_isbase = false;

  public:
    VirtualKFilterBase() : KFilterBase() {};

    // Callback setters
    inline void setKFilterBase_Init_Callback(KFilterBase_Init_Callback cb) { kfilterbase_init_callback = cb; }
    inline void setKFilterBase_Mode_Callback(KFilterBase_Mode_Callback cb) { kfilterbase_mode_callback = cb; }
    inline void setKFilterBase_Terminate_Callback(KFilterBase_Terminate_Callback cb) { kfilterbase_terminate_callback = cb; }
    inline void setKFilterBase_Reset_Callback(KFilterBase_Reset_Callback cb) { kfilterbase_reset_callback = cb; }
    inline void setKFilterBase_ReadHeader_Callback(KFilterBase_ReadHeader_Callback cb) { kfilterbase_readheader_callback = cb; }
    inline void setKFilterBase_WriteHeader_Callback(KFilterBase_WriteHeader_Callback cb) { kfilterbase_writeheader_callback = cb; }
    inline void setKFilterBase_SetOutBuffer_Callback(KFilterBase_SetOutBuffer_Callback cb) { kfilterbase_setoutbuffer_callback = cb; }
    inline void setKFilterBase_SetInBuffer_Callback(KFilterBase_SetInBuffer_Callback cb) { kfilterbase_setinbuffer_callback = cb; }
    inline void setKFilterBase_InBufferEmpty_Callback(KFilterBase_InBufferEmpty_Callback cb) { kfilterbase_inbufferempty_callback = cb; }
    inline void setKFilterBase_InBufferAvailable_Callback(KFilterBase_InBufferAvailable_Callback cb) { kfilterbase_inbufferavailable_callback = cb; }
    inline void setKFilterBase_OutBufferFull_Callback(KFilterBase_OutBufferFull_Callback cb) { kfilterbase_outbufferfull_callback = cb; }
    inline void setKFilterBase_OutBufferAvailable_Callback(KFilterBase_OutBufferAvailable_Callback cb) { kfilterbase_outbufferavailable_callback = cb; }
    inline void setKFilterBase_Uncompress_Callback(KFilterBase_Uncompress_Callback cb) { kfilterbase_uncompress_callback = cb; }
    inline void setKFilterBase_Compress_Callback(KFilterBase_Compress_Callback cb) { kfilterbase_compress_callback = cb; }
    inline void setKFilterBase_VirtualHook_Callback(KFilterBase_VirtualHook_Callback cb) { kfilterbase_virtualhook_callback = cb; }

    // Base flag setters
    inline void setKFilterBase_Init_IsBase(bool value) const { kfilterbase_init_isbase = value; }
    inline void setKFilterBase_Mode_IsBase(bool value) const { kfilterbase_mode_isbase = value; }
    inline void setKFilterBase_Terminate_IsBase(bool value) const { kfilterbase_terminate_isbase = value; }
    inline void setKFilterBase_Reset_IsBase(bool value) const { kfilterbase_reset_isbase = value; }
    inline void setKFilterBase_ReadHeader_IsBase(bool value) const { kfilterbase_readheader_isbase = value; }
    inline void setKFilterBase_WriteHeader_IsBase(bool value) const { kfilterbase_writeheader_isbase = value; }
    inline void setKFilterBase_SetOutBuffer_IsBase(bool value) const { kfilterbase_setoutbuffer_isbase = value; }
    inline void setKFilterBase_SetInBuffer_IsBase(bool value) const { kfilterbase_setinbuffer_isbase = value; }
    inline void setKFilterBase_InBufferEmpty_IsBase(bool value) const { kfilterbase_inbufferempty_isbase = value; }
    inline void setKFilterBase_InBufferAvailable_IsBase(bool value) const { kfilterbase_inbufferavailable_isbase = value; }
    inline void setKFilterBase_OutBufferFull_IsBase(bool value) const { kfilterbase_outbufferfull_isbase = value; }
    inline void setKFilterBase_OutBufferAvailable_IsBase(bool value) const { kfilterbase_outbufferavailable_isbase = value; }
    inline void setKFilterBase_Uncompress_IsBase(bool value) const { kfilterbase_uncompress_isbase = value; }
    inline void setKFilterBase_Compress_IsBase(bool value) const { kfilterbase_compress_isbase = value; }
    inline void setKFilterBase_VirtualHook_IsBase(bool value) const { kfilterbase_virtualhook_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool init(int mode) override {
        auto init_cb = kfilterbase_init_callback;
        if (init_cb) {
            int cbval1 = mode;

            bool callback_ret = init_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual int mode() const override {
        auto mode_cb = kfilterbase_mode_callback;
        if (mode_cb) {
            int callback_ret = mode_cb();
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool terminate() override {
        if (kfilterbase_terminate_isbase) {
            kfilterbase_terminate_isbase = false;
            return KFilterBase::terminate();
        }
        auto terminate_cb = kfilterbase_terminate_callback;
        if (terminate_cb) {
            bool callback_ret = terminate_cb();
            return callback_ret;
        }
        return KFilterBase::terminate();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (kfilterbase_reset_isbase) {
            kfilterbase_reset_isbase = false;
            KFilterBase::reset();
            return;
        }
        auto reset_cb = kfilterbase_reset_callback;
        if (reset_cb) {
            reset_cb();
            return;
        }
        KFilterBase::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readHeader() override {
        auto readheader_cb = kfilterbase_readheader_callback;
        if (readheader_cb) {
            bool callback_ret = readheader_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeHeader(const QByteArray& filename) override {
        auto writeheader_cb = kfilterbase_writeheader_callback;
        if (writeheader_cb) {
            const QByteArray filename_qb = filename;
            libqt_string filename_str;
            filename_str.len = filename_qb.length();
            filename_str.data = static_cast<char*>(malloc(filename_str.len));
            memcpy((void*)filename_str.data, filename_qb.data(), filename_str.len);
            libqt_string cbval1 = filename_str;

            bool callback_ret = writeheader_cb(this, cbval1);
            libqt_free(filename_str.data);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOutBuffer(char* data, uint maxlen) override {
        auto setoutbuffer_cb = kfilterbase_setoutbuffer_callback;
        if (setoutbuffer_cb) {
            char* cbval1 = data;
            unsigned int cbval2 = static_cast<unsigned int>(maxlen);

            setoutbuffer_cb(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setInBuffer(const char* data, uint size) override {
        auto setinbuffer_cb = kfilterbase_setinbuffer_callback;
        if (setinbuffer_cb) {
            const char* cbval1 = (const char*)data;
            unsigned int cbval2 = static_cast<unsigned int>(size);

            setinbuffer_cb(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool inBufferEmpty() const override {
        if (kfilterbase_inbufferempty_isbase) {
            kfilterbase_inbufferempty_isbase = false;
            return KFilterBase::inBufferEmpty();
        }
        auto inbufferempty_cb = kfilterbase_inbufferempty_callback;
        if (inbufferempty_cb) {
            bool callback_ret = inbufferempty_cb();
            return callback_ret;
        }
        return KFilterBase::inBufferEmpty();
    }

    // Virtual method for C ABI access and custom callback
    virtual int inBufferAvailable() const override {
        auto inbufferavailable_cb = kfilterbase_inbufferavailable_callback;
        if (inbufferavailable_cb) {
            int callback_ret = inbufferavailable_cb();
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool outBufferFull() const override {
        if (kfilterbase_outbufferfull_isbase) {
            kfilterbase_outbufferfull_isbase = false;
            return KFilterBase::outBufferFull();
        }
        auto outbufferfull_cb = kfilterbase_outbufferfull_callback;
        if (outbufferfull_cb) {
            bool callback_ret = outbufferfull_cb();
            return callback_ret;
        }
        return KFilterBase::outBufferFull();
    }

    // Virtual method for C ABI access and custom callback
    virtual int outBufferAvailable() const override {
        auto outbufferavailable_cb = kfilterbase_outbufferavailable_callback;
        if (outbufferavailable_cb) {
            int callback_ret = outbufferavailable_cb();
            return static_cast<int>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual KFilterBase::Result uncompress() override {
        auto uncompress_cb = kfilterbase_uncompress_callback;
        if (uncompress_cb) {
            int callback_ret = uncompress_cb();
            return static_cast<KFilterBase::Result>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual KFilterBase::Result compress(bool finish) override {
        auto compress_cb = kfilterbase_compress_callback;
        if (compress_cb) {
            bool cbval1 = finish;

            int callback_ret = compress_cb(this, cbval1);
            return static_cast<KFilterBase::Result>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kfilterbase_virtualhook_isbase) {
            kfilterbase_virtualhook_isbase = false;
            KFilterBase::virtual_hook(id, data);
            return;
        }
        auto virtualhook_cb = kfilterbase_virtualhook_callback;
        if (virtualhook_cb) {
            int cbval1 = id;
            void* cbval2 = data;

            virtualhook_cb(this, cbval1, cbval2);
            return;
        }
        KFilterBase::virtual_hook(id, data);
    }

    // Friend functions
    friend void KFilterBase_VirtualHook(KFilterBase* self, int id, void* data);
    friend void KFilterBase_SuperVirtualHook(KFilterBase* self, int id, void* data);
};

#endif
