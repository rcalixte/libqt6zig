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

    ~VirtualKFilterBase() {
        kfilterbase_init_callback = nullptr;
        kfilterbase_mode_callback = nullptr;
        kfilterbase_terminate_callback = nullptr;
        kfilterbase_reset_callback = nullptr;
        kfilterbase_readheader_callback = nullptr;
        kfilterbase_writeheader_callback = nullptr;
        kfilterbase_setoutbuffer_callback = nullptr;
        kfilterbase_setinbuffer_callback = nullptr;
        kfilterbase_inbufferempty_callback = nullptr;
        kfilterbase_inbufferavailable_callback = nullptr;
        kfilterbase_outbufferfull_callback = nullptr;
        kfilterbase_outbufferavailable_callback = nullptr;
        kfilterbase_uncompress_callback = nullptr;
        kfilterbase_compress_callback = nullptr;
        kfilterbase_virtualhook_callback = nullptr;
    }

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
        if (kfilterbase_init_callback != nullptr) {
            int cbval1 = mode;

            bool callback_ret = kfilterbase_init_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int mode() const override {
        if (kfilterbase_mode_callback != nullptr) {
            int callback_ret = kfilterbase_mode_callback();
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool terminate() override {
        if (kfilterbase_terminate_isbase) {
            kfilterbase_terminate_isbase = false;
            return KFilterBase::terminate();
        } else if (kfilterbase_terminate_callback != nullptr) {
            bool callback_ret = kfilterbase_terminate_callback();
            return callback_ret;
        } else {
            return KFilterBase::terminate();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (kfilterbase_reset_isbase) {
            kfilterbase_reset_isbase = false;
            KFilterBase::reset();
        } else if (kfilterbase_reset_callback != nullptr) {
            kfilterbase_reset_callback();
        } else {
            KFilterBase::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readHeader() override {
        if (kfilterbase_readheader_callback != nullptr) {
            bool callback_ret = kfilterbase_readheader_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeHeader(const QByteArray& filename) override {
        if (kfilterbase_writeheader_callback != nullptr) {
            const QByteArray filename_qb = filename;
            libqt_string filename_str;
            filename_str.len = filename_qb.length();
            filename_str.data = static_cast<char*>(malloc(filename_str.len));
            memcpy((void*)filename_str.data, filename_qb.data(), filename_str.len);
            libqt_string cbval1 = filename_str;

            bool callback_ret = kfilterbase_writeheader_callback(this, cbval1);
            libqt_free(filename_str.data);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOutBuffer(char* data, uint maxlen) override {
        if (kfilterbase_setoutbuffer_callback != nullptr) {
            char* cbval1 = data;
            unsigned int cbval2 = static_cast<unsigned int>(maxlen);

            kfilterbase_setoutbuffer_callback(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setInBuffer(const char* data, uint size) override {
        if (kfilterbase_setinbuffer_callback != nullptr) {
            const char* cbval1 = (const char*)data;
            unsigned int cbval2 = static_cast<unsigned int>(size);

            kfilterbase_setinbuffer_callback(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool inBufferEmpty() const override {
        if (kfilterbase_inbufferempty_isbase) {
            kfilterbase_inbufferempty_isbase = false;
            return KFilterBase::inBufferEmpty();
        } else if (kfilterbase_inbufferempty_callback != nullptr) {
            bool callback_ret = kfilterbase_inbufferempty_callback();
            return callback_ret;
        } else {
            return KFilterBase::inBufferEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int inBufferAvailable() const override {
        if (kfilterbase_inbufferavailable_callback != nullptr) {
            int callback_ret = kfilterbase_inbufferavailable_callback();
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool outBufferFull() const override {
        if (kfilterbase_outbufferfull_isbase) {
            kfilterbase_outbufferfull_isbase = false;
            return KFilterBase::outBufferFull();
        } else if (kfilterbase_outbufferfull_callback != nullptr) {
            bool callback_ret = kfilterbase_outbufferfull_callback();
            return callback_ret;
        } else {
            return KFilterBase::outBufferFull();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int outBufferAvailable() const override {
        if (kfilterbase_outbufferavailable_callback != nullptr) {
            int callback_ret = kfilterbase_outbufferavailable_callback();
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KFilterBase::Result uncompress() override {
        if (kfilterbase_uncompress_callback != nullptr) {
            int callback_ret = kfilterbase_uncompress_callback();
            return static_cast<KFilterBase::Result>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KFilterBase::Result compress(bool finish) override {
        if (kfilterbase_compress_callback != nullptr) {
            bool cbval1 = finish;

            int callback_ret = kfilterbase_compress_callback(this, cbval1);
            return static_cast<KFilterBase::Result>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (kfilterbase_virtualhook_isbase) {
            kfilterbase_virtualhook_isbase = false;
            KFilterBase::virtual_hook(id, data);
        } else if (kfilterbase_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            kfilterbase_virtualhook_callback(this, cbval1, cbval2);
        } else {
            KFilterBase::virtual_hook(id, data);
        }
    }

    // Friend functions
    friend void KFilterBase_VirtualHook(KFilterBase* self, int id, void* data);
    friend void KFilterBase_SuperVirtualHook(KFilterBase* self, int id, void* data);
};

#endif
