#pragma once
#ifndef SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKCOMPRESSIONDEVICE_H
#define SRC_EXTRAS_KARCHIVEC_LIBVIRTUALKCOMPRESSIONDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCompressionDevice so that we can call protected methods
class VirtualKCompressionDevice final : public KCompressionDevice {

  public:
    // Virtual class boolean flag
    bool isVirtualKCompressionDevice = true;

    // Virtual class public types (including callbacks)
    using KCompressionDevice_MetaObject_Callback = QMetaObject* (*)();
    using KCompressionDevice_Metacast_Callback = void* (*)(KCompressionDevice*, const char*);
    using KCompressionDevice_Metacall_Callback = int (*)(KCompressionDevice*, int, int, void**);
    using KCompressionDevice_Open_Callback = bool (*)(KCompressionDevice*, int);
    using KCompressionDevice_Close_Callback = void (*)();
    using KCompressionDevice_Seek_Callback = bool (*)(KCompressionDevice*, long long);
    using KCompressionDevice_AtEnd_Callback = bool (*)();
    using KCompressionDevice_ReadData_Callback = long long (*)(KCompressionDevice*, char*, long long);
    using KCompressionDevice_WriteData_Callback = long long (*)(KCompressionDevice*, const char*, long long);
    using KCompressionDevice_IsSequential_Callback = bool (*)();
    using KCompressionDevice_Pos_Callback = long long (*)();
    using KCompressionDevice_Size_Callback = long long (*)();
    using KCompressionDevice_Reset_Callback = bool (*)();
    using KCompressionDevice_BytesAvailable_Callback = long long (*)();
    using KCompressionDevice_BytesToWrite_Callback = long long (*)();
    using KCompressionDevice_CanReadLine_Callback = bool (*)();
    using KCompressionDevice_WaitForReadyRead_Callback = bool (*)(KCompressionDevice*, int);
    using KCompressionDevice_WaitForBytesWritten_Callback = bool (*)(KCompressionDevice*, int);
    using KCompressionDevice_ReadLineData_Callback = long long (*)(KCompressionDevice*, char*, long long);
    using KCompressionDevice_SkipData_Callback = long long (*)(KCompressionDevice*, long long);
    using KCompressionDevice_Event_Callback = bool (*)(KCompressionDevice*, QEvent*);
    using KCompressionDevice_EventFilter_Callback = bool (*)(KCompressionDevice*, QObject*, QEvent*);
    using KCompressionDevice_TimerEvent_Callback = void (*)(KCompressionDevice*, QTimerEvent*);
    using KCompressionDevice_ChildEvent_Callback = void (*)(KCompressionDevice*, QChildEvent*);
    using KCompressionDevice_CustomEvent_Callback = void (*)(KCompressionDevice*, QEvent*);
    using KCompressionDevice_ConnectNotify_Callback = void (*)(KCompressionDevice*, QMetaMethod*);
    using KCompressionDevice_DisconnectNotify_Callback = void (*)(KCompressionDevice*, QMetaMethod*);
    using KCompressionDevice_FilterBase_Callback = KFilterBase* (*)();
    using KCompressionDevice_SetOpenMode_Callback = void (*)(KCompressionDevice*, int);
    using KCompressionDevice_SetErrorString_Callback = void (*)(KCompressionDevice*, const char*);
    using KCompressionDevice_Sender_Callback = QObject* (*)();
    using KCompressionDevice_SenderSignalIndex_Callback = int (*)();
    using KCompressionDevice_Receivers_Callback = int (*)(const KCompressionDevice*, const char*);
    using KCompressionDevice_IsSignalConnected_Callback = bool (*)(const KCompressionDevice*, QMetaMethod*);

  protected:
    // Instance callback storage
    KCompressionDevice_MetaObject_Callback kcompressiondevice_metaobject_callback = nullptr;
    KCompressionDevice_Metacast_Callback kcompressiondevice_metacast_callback = nullptr;
    KCompressionDevice_Metacall_Callback kcompressiondevice_metacall_callback = nullptr;
    KCompressionDevice_Open_Callback kcompressiondevice_open_callback = nullptr;
    KCompressionDevice_Close_Callback kcompressiondevice_close_callback = nullptr;
    KCompressionDevice_Seek_Callback kcompressiondevice_seek_callback = nullptr;
    KCompressionDevice_AtEnd_Callback kcompressiondevice_atend_callback = nullptr;
    KCompressionDevice_ReadData_Callback kcompressiondevice_readdata_callback = nullptr;
    KCompressionDevice_WriteData_Callback kcompressiondevice_writedata_callback = nullptr;
    KCompressionDevice_IsSequential_Callback kcompressiondevice_issequential_callback = nullptr;
    KCompressionDevice_Pos_Callback kcompressiondevice_pos_callback = nullptr;
    KCompressionDevice_Size_Callback kcompressiondevice_size_callback = nullptr;
    KCompressionDevice_Reset_Callback kcompressiondevice_reset_callback = nullptr;
    KCompressionDevice_BytesAvailable_Callback kcompressiondevice_bytesavailable_callback = nullptr;
    KCompressionDevice_BytesToWrite_Callback kcompressiondevice_bytestowrite_callback = nullptr;
    KCompressionDevice_CanReadLine_Callback kcompressiondevice_canreadline_callback = nullptr;
    KCompressionDevice_WaitForReadyRead_Callback kcompressiondevice_waitforreadyread_callback = nullptr;
    KCompressionDevice_WaitForBytesWritten_Callback kcompressiondevice_waitforbyteswritten_callback = nullptr;
    KCompressionDevice_ReadLineData_Callback kcompressiondevice_readlinedata_callback = nullptr;
    KCompressionDevice_SkipData_Callback kcompressiondevice_skipdata_callback = nullptr;
    KCompressionDevice_Event_Callback kcompressiondevice_event_callback = nullptr;
    KCompressionDevice_EventFilter_Callback kcompressiondevice_eventfilter_callback = nullptr;
    KCompressionDevice_TimerEvent_Callback kcompressiondevice_timerevent_callback = nullptr;
    KCompressionDevice_ChildEvent_Callback kcompressiondevice_childevent_callback = nullptr;
    KCompressionDevice_CustomEvent_Callback kcompressiondevice_customevent_callback = nullptr;
    KCompressionDevice_ConnectNotify_Callback kcompressiondevice_connectnotify_callback = nullptr;
    KCompressionDevice_DisconnectNotify_Callback kcompressiondevice_disconnectnotify_callback = nullptr;
    KCompressionDevice_FilterBase_Callback kcompressiondevice_filterbase_callback = nullptr;
    KCompressionDevice_SetOpenMode_Callback kcompressiondevice_setopenmode_callback = nullptr;
    KCompressionDevice_SetErrorString_Callback kcompressiondevice_seterrorstring_callback = nullptr;
    KCompressionDevice_Sender_Callback kcompressiondevice_sender_callback = nullptr;
    KCompressionDevice_SenderSignalIndex_Callback kcompressiondevice_sendersignalindex_callback = nullptr;
    KCompressionDevice_Receivers_Callback kcompressiondevice_receivers_callback = nullptr;
    KCompressionDevice_IsSignalConnected_Callback kcompressiondevice_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kcompressiondevice_metaobject_isbase = false;
    mutable bool kcompressiondevice_metacast_isbase = false;
    mutable bool kcompressiondevice_metacall_isbase = false;
    mutable bool kcompressiondevice_open_isbase = false;
    mutable bool kcompressiondevice_close_isbase = false;
    mutable bool kcompressiondevice_seek_isbase = false;
    mutable bool kcompressiondevice_atend_isbase = false;
    mutable bool kcompressiondevice_readdata_isbase = false;
    mutable bool kcompressiondevice_writedata_isbase = false;
    mutable bool kcompressiondevice_issequential_isbase = false;
    mutable bool kcompressiondevice_pos_isbase = false;
    mutable bool kcompressiondevice_size_isbase = false;
    mutable bool kcompressiondevice_reset_isbase = false;
    mutable bool kcompressiondevice_bytesavailable_isbase = false;
    mutable bool kcompressiondevice_bytestowrite_isbase = false;
    mutable bool kcompressiondevice_canreadline_isbase = false;
    mutable bool kcompressiondevice_waitforreadyread_isbase = false;
    mutable bool kcompressiondevice_waitforbyteswritten_isbase = false;
    mutable bool kcompressiondevice_readlinedata_isbase = false;
    mutable bool kcompressiondevice_skipdata_isbase = false;
    mutable bool kcompressiondevice_event_isbase = false;
    mutable bool kcompressiondevice_eventfilter_isbase = false;
    mutable bool kcompressiondevice_timerevent_isbase = false;
    mutable bool kcompressiondevice_childevent_isbase = false;
    mutable bool kcompressiondevice_customevent_isbase = false;
    mutable bool kcompressiondevice_connectnotify_isbase = false;
    mutable bool kcompressiondevice_disconnectnotify_isbase = false;
    mutable bool kcompressiondevice_filterbase_isbase = false;
    mutable bool kcompressiondevice_setopenmode_isbase = false;
    mutable bool kcompressiondevice_seterrorstring_isbase = false;
    mutable bool kcompressiondevice_sender_isbase = false;
    mutable bool kcompressiondevice_sendersignalindex_isbase = false;
    mutable bool kcompressiondevice_receivers_isbase = false;
    mutable bool kcompressiondevice_issignalconnected_isbase = false;

  public:
    VirtualKCompressionDevice(QIODevice* inputDevice, bool autoDeleteInputDevice, KCompressionDevice::CompressionType typeVal) : KCompressionDevice(inputDevice, autoDeleteInputDevice, typeVal) {};
    VirtualKCompressionDevice(const QString& fileName, KCompressionDevice::CompressionType typeVal) : KCompressionDevice(fileName, typeVal) {};
    VirtualKCompressionDevice(const QString& fileName) : KCompressionDevice(fileName) {};

    // Callback setters
    inline void setKCompressionDevice_MetaObject_Callback(KCompressionDevice_MetaObject_Callback cb) { kcompressiondevice_metaobject_callback = cb; }
    inline void setKCompressionDevice_Metacast_Callback(KCompressionDevice_Metacast_Callback cb) { kcompressiondevice_metacast_callback = cb; }
    inline void setKCompressionDevice_Metacall_Callback(KCompressionDevice_Metacall_Callback cb) { kcompressiondevice_metacall_callback = cb; }
    inline void setKCompressionDevice_Open_Callback(KCompressionDevice_Open_Callback cb) { kcompressiondevice_open_callback = cb; }
    inline void setKCompressionDevice_Close_Callback(KCompressionDevice_Close_Callback cb) { kcompressiondevice_close_callback = cb; }
    inline void setKCompressionDevice_Seek_Callback(KCompressionDevice_Seek_Callback cb) { kcompressiondevice_seek_callback = cb; }
    inline void setKCompressionDevice_AtEnd_Callback(KCompressionDevice_AtEnd_Callback cb) { kcompressiondevice_atend_callback = cb; }
    inline void setKCompressionDevice_ReadData_Callback(KCompressionDevice_ReadData_Callback cb) { kcompressiondevice_readdata_callback = cb; }
    inline void setKCompressionDevice_WriteData_Callback(KCompressionDevice_WriteData_Callback cb) { kcompressiondevice_writedata_callback = cb; }
    inline void setKCompressionDevice_IsSequential_Callback(KCompressionDevice_IsSequential_Callback cb) { kcompressiondevice_issequential_callback = cb; }
    inline void setKCompressionDevice_Pos_Callback(KCompressionDevice_Pos_Callback cb) { kcompressiondevice_pos_callback = cb; }
    inline void setKCompressionDevice_Size_Callback(KCompressionDevice_Size_Callback cb) { kcompressiondevice_size_callback = cb; }
    inline void setKCompressionDevice_Reset_Callback(KCompressionDevice_Reset_Callback cb) { kcompressiondevice_reset_callback = cb; }
    inline void setKCompressionDevice_BytesAvailable_Callback(KCompressionDevice_BytesAvailable_Callback cb) { kcompressiondevice_bytesavailable_callback = cb; }
    inline void setKCompressionDevice_BytesToWrite_Callback(KCompressionDevice_BytesToWrite_Callback cb) { kcompressiondevice_bytestowrite_callback = cb; }
    inline void setKCompressionDevice_CanReadLine_Callback(KCompressionDevice_CanReadLine_Callback cb) { kcompressiondevice_canreadline_callback = cb; }
    inline void setKCompressionDevice_WaitForReadyRead_Callback(KCompressionDevice_WaitForReadyRead_Callback cb) { kcompressiondevice_waitforreadyread_callback = cb; }
    inline void setKCompressionDevice_WaitForBytesWritten_Callback(KCompressionDevice_WaitForBytesWritten_Callback cb) { kcompressiondevice_waitforbyteswritten_callback = cb; }
    inline void setKCompressionDevice_ReadLineData_Callback(KCompressionDevice_ReadLineData_Callback cb) { kcompressiondevice_readlinedata_callback = cb; }
    inline void setKCompressionDevice_SkipData_Callback(KCompressionDevice_SkipData_Callback cb) { kcompressiondevice_skipdata_callback = cb; }
    inline void setKCompressionDevice_Event_Callback(KCompressionDevice_Event_Callback cb) { kcompressiondevice_event_callback = cb; }
    inline void setKCompressionDevice_EventFilter_Callback(KCompressionDevice_EventFilter_Callback cb) { kcompressiondevice_eventfilter_callback = cb; }
    inline void setKCompressionDevice_TimerEvent_Callback(KCompressionDevice_TimerEvent_Callback cb) { kcompressiondevice_timerevent_callback = cb; }
    inline void setKCompressionDevice_ChildEvent_Callback(KCompressionDevice_ChildEvent_Callback cb) { kcompressiondevice_childevent_callback = cb; }
    inline void setKCompressionDevice_CustomEvent_Callback(KCompressionDevice_CustomEvent_Callback cb) { kcompressiondevice_customevent_callback = cb; }
    inline void setKCompressionDevice_ConnectNotify_Callback(KCompressionDevice_ConnectNotify_Callback cb) { kcompressiondevice_connectnotify_callback = cb; }
    inline void setKCompressionDevice_DisconnectNotify_Callback(KCompressionDevice_DisconnectNotify_Callback cb) { kcompressiondevice_disconnectnotify_callback = cb; }
    inline void setKCompressionDevice_FilterBase_Callback(KCompressionDevice_FilterBase_Callback cb) { kcompressiondevice_filterbase_callback = cb; }
    inline void setKCompressionDevice_SetOpenMode_Callback(KCompressionDevice_SetOpenMode_Callback cb) { kcompressiondevice_setopenmode_callback = cb; }
    inline void setKCompressionDevice_SetErrorString_Callback(KCompressionDevice_SetErrorString_Callback cb) { kcompressiondevice_seterrorstring_callback = cb; }
    inline void setKCompressionDevice_Sender_Callback(KCompressionDevice_Sender_Callback cb) { kcompressiondevice_sender_callback = cb; }
    inline void setKCompressionDevice_SenderSignalIndex_Callback(KCompressionDevice_SenderSignalIndex_Callback cb) { kcompressiondevice_sendersignalindex_callback = cb; }
    inline void setKCompressionDevice_Receivers_Callback(KCompressionDevice_Receivers_Callback cb) { kcompressiondevice_receivers_callback = cb; }
    inline void setKCompressionDevice_IsSignalConnected_Callback(KCompressionDevice_IsSignalConnected_Callback cb) { kcompressiondevice_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKCompressionDevice_MetaObject_IsBase(bool value) const { kcompressiondevice_metaobject_isbase = value; }
    inline void setKCompressionDevice_Metacast_IsBase(bool value) const { kcompressiondevice_metacast_isbase = value; }
    inline void setKCompressionDevice_Metacall_IsBase(bool value) const { kcompressiondevice_metacall_isbase = value; }
    inline void setKCompressionDevice_Open_IsBase(bool value) const { kcompressiondevice_open_isbase = value; }
    inline void setKCompressionDevice_Close_IsBase(bool value) const { kcompressiondevice_close_isbase = value; }
    inline void setKCompressionDevice_Seek_IsBase(bool value) const { kcompressiondevice_seek_isbase = value; }
    inline void setKCompressionDevice_AtEnd_IsBase(bool value) const { kcompressiondevice_atend_isbase = value; }
    inline void setKCompressionDevice_ReadData_IsBase(bool value) const { kcompressiondevice_readdata_isbase = value; }
    inline void setKCompressionDevice_WriteData_IsBase(bool value) const { kcompressiondevice_writedata_isbase = value; }
    inline void setKCompressionDevice_IsSequential_IsBase(bool value) const { kcompressiondevice_issequential_isbase = value; }
    inline void setKCompressionDevice_Pos_IsBase(bool value) const { kcompressiondevice_pos_isbase = value; }
    inline void setKCompressionDevice_Size_IsBase(bool value) const { kcompressiondevice_size_isbase = value; }
    inline void setKCompressionDevice_Reset_IsBase(bool value) const { kcompressiondevice_reset_isbase = value; }
    inline void setKCompressionDevice_BytesAvailable_IsBase(bool value) const { kcompressiondevice_bytesavailable_isbase = value; }
    inline void setKCompressionDevice_BytesToWrite_IsBase(bool value) const { kcompressiondevice_bytestowrite_isbase = value; }
    inline void setKCompressionDevice_CanReadLine_IsBase(bool value) const { kcompressiondevice_canreadline_isbase = value; }
    inline void setKCompressionDevice_WaitForReadyRead_IsBase(bool value) const { kcompressiondevice_waitforreadyread_isbase = value; }
    inline void setKCompressionDevice_WaitForBytesWritten_IsBase(bool value) const { kcompressiondevice_waitforbyteswritten_isbase = value; }
    inline void setKCompressionDevice_ReadLineData_IsBase(bool value) const { kcompressiondevice_readlinedata_isbase = value; }
    inline void setKCompressionDevice_SkipData_IsBase(bool value) const { kcompressiondevice_skipdata_isbase = value; }
    inline void setKCompressionDevice_Event_IsBase(bool value) const { kcompressiondevice_event_isbase = value; }
    inline void setKCompressionDevice_EventFilter_IsBase(bool value) const { kcompressiondevice_eventfilter_isbase = value; }
    inline void setKCompressionDevice_TimerEvent_IsBase(bool value) const { kcompressiondevice_timerevent_isbase = value; }
    inline void setKCompressionDevice_ChildEvent_IsBase(bool value) const { kcompressiondevice_childevent_isbase = value; }
    inline void setKCompressionDevice_CustomEvent_IsBase(bool value) const { kcompressiondevice_customevent_isbase = value; }
    inline void setKCompressionDevice_ConnectNotify_IsBase(bool value) const { kcompressiondevice_connectnotify_isbase = value; }
    inline void setKCompressionDevice_DisconnectNotify_IsBase(bool value) const { kcompressiondevice_disconnectnotify_isbase = value; }
    inline void setKCompressionDevice_FilterBase_IsBase(bool value) const { kcompressiondevice_filterbase_isbase = value; }
    inline void setKCompressionDevice_SetOpenMode_IsBase(bool value) const { kcompressiondevice_setopenmode_isbase = value; }
    inline void setKCompressionDevice_SetErrorString_IsBase(bool value) const { kcompressiondevice_seterrorstring_isbase = value; }
    inline void setKCompressionDevice_Sender_IsBase(bool value) const { kcompressiondevice_sender_isbase = value; }
    inline void setKCompressionDevice_SenderSignalIndex_IsBase(bool value) const { kcompressiondevice_sendersignalindex_isbase = value; }
    inline void setKCompressionDevice_Receivers_IsBase(bool value) const { kcompressiondevice_receivers_isbase = value; }
    inline void setKCompressionDevice_IsSignalConnected_IsBase(bool value) const { kcompressiondevice_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcompressiondevice_metaobject_isbase) {
            kcompressiondevice_metaobject_isbase = false;
            return KCompressionDevice::metaObject();
        }
        auto metaobject_cb = kcompressiondevice_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KCompressionDevice::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcompressiondevice_metacast_isbase) {
            kcompressiondevice_metacast_isbase = false;
            return KCompressionDevice::qt_metacast(param1);
        }
        auto metacast_cb = kcompressiondevice_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KCompressionDevice::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcompressiondevice_metacall_isbase) {
            kcompressiondevice_metacall_isbase = false;
            return KCompressionDevice::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kcompressiondevice_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCompressionDevice::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODevice::OpenMode mode) override {
        if (kcompressiondevice_open_isbase) {
            kcompressiondevice_open_isbase = false;
            return KCompressionDevice::open(mode);
        }
        auto open_cb = kcompressiondevice_open_callback;
        if (open_cb) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = open_cb(this, cbval1);
            return callback_ret;
        }
        return KCompressionDevice::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (kcompressiondevice_close_isbase) {
            kcompressiondevice_close_isbase = false;
            KCompressionDevice::close();
            return;
        }
        auto close_cb = kcompressiondevice_close_callback;
        if (close_cb) {
            close_cb();
            return;
        }
        KCompressionDevice::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 param1) override {
        if (kcompressiondevice_seek_isbase) {
            kcompressiondevice_seek_isbase = false;
            return KCompressionDevice::seek(param1);
        }
        auto seek_cb = kcompressiondevice_seek_callback;
        if (seek_cb) {
            long long cbval1 = static_cast<long long>(param1);

            bool callback_ret = seek_cb(this, cbval1);
            return callback_ret;
        }
        return KCompressionDevice::seek(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (kcompressiondevice_atend_isbase) {
            kcompressiondevice_atend_isbase = false;
            return KCompressionDevice::atEnd();
        }
        auto atend_cb = kcompressiondevice_atend_callback;
        if (atend_cb) {
            bool callback_ret = atend_cb();
            return callback_ret;
        }
        return KCompressionDevice::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (kcompressiondevice_readdata_isbase) {
            kcompressiondevice_readdata_isbase = false;
            return KCompressionDevice::readData(data, maxlen);
        }
        auto readdata_cb = kcompressiondevice_readdata_callback;
        if (readdata_cb) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = readdata_cb(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return KCompressionDevice::readData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 lenVal) override {
        if (kcompressiondevice_writedata_isbase) {
            kcompressiondevice_writedata_isbase = false;
            return KCompressionDevice::writeData(data, lenVal);
        }
        auto writedata_cb = kcompressiondevice_writedata_callback;
        if (writedata_cb) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(lenVal);

            long long callback_ret = writedata_cb(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return KCompressionDevice::writeData(data, lenVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (kcompressiondevice_issequential_isbase) {
            kcompressiondevice_issequential_isbase = false;
            return KCompressionDevice::isSequential();
        }
        auto issequential_cb = kcompressiondevice_issequential_callback;
        if (issequential_cb) {
            bool callback_ret = issequential_cb();
            return callback_ret;
        }
        return KCompressionDevice::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (kcompressiondevice_pos_isbase) {
            kcompressiondevice_pos_isbase = false;
            return KCompressionDevice::pos();
        }
        auto pos_cb = kcompressiondevice_pos_callback;
        if (pos_cb) {
            long long callback_ret = pos_cb();
            return static_cast<qint64>(callback_ret);
        }
        return KCompressionDevice::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (kcompressiondevice_size_isbase) {
            kcompressiondevice_size_isbase = false;
            return KCompressionDevice::size();
        }
        auto size_cb = kcompressiondevice_size_callback;
        if (size_cb) {
            long long callback_ret = size_cb();
            return static_cast<qint64>(callback_ret);
        }
        return KCompressionDevice::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (kcompressiondevice_reset_isbase) {
            kcompressiondevice_reset_isbase = false;
            return KCompressionDevice::reset();
        }
        auto reset_cb = kcompressiondevice_reset_callback;
        if (reset_cb) {
            bool callback_ret = reset_cb();
            return callback_ret;
        }
        return KCompressionDevice::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (kcompressiondevice_bytesavailable_isbase) {
            kcompressiondevice_bytesavailable_isbase = false;
            return KCompressionDevice::bytesAvailable();
        }
        auto bytesavailable_cb = kcompressiondevice_bytesavailable_callback;
        if (bytesavailable_cb) {
            long long callback_ret = bytesavailable_cb();
            return static_cast<qint64>(callback_ret);
        }
        return KCompressionDevice::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (kcompressiondevice_bytestowrite_isbase) {
            kcompressiondevice_bytestowrite_isbase = false;
            return KCompressionDevice::bytesToWrite();
        }
        auto bytestowrite_cb = kcompressiondevice_bytestowrite_callback;
        if (bytestowrite_cb) {
            long long callback_ret = bytestowrite_cb();
            return static_cast<qint64>(callback_ret);
        }
        return KCompressionDevice::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (kcompressiondevice_canreadline_isbase) {
            kcompressiondevice_canreadline_isbase = false;
            return KCompressionDevice::canReadLine();
        }
        auto canreadline_cb = kcompressiondevice_canreadline_callback;
        if (canreadline_cb) {
            bool callback_ret = canreadline_cb();
            return callback_ret;
        }
        return KCompressionDevice::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (kcompressiondevice_waitforreadyread_isbase) {
            kcompressiondevice_waitforreadyread_isbase = false;
            return KCompressionDevice::waitForReadyRead(msecs);
        }
        auto waitforreadyread_cb = kcompressiondevice_waitforreadyread_callback;
        if (waitforreadyread_cb) {
            int cbval1 = msecs;

            bool callback_ret = waitforreadyread_cb(this, cbval1);
            return callback_ret;
        }
        return KCompressionDevice::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (kcompressiondevice_waitforbyteswritten_isbase) {
            kcompressiondevice_waitforbyteswritten_isbase = false;
            return KCompressionDevice::waitForBytesWritten(msecs);
        }
        auto waitforbyteswritten_cb = kcompressiondevice_waitforbyteswritten_callback;
        if (waitforbyteswritten_cb) {
            int cbval1 = msecs;

            bool callback_ret = waitforbyteswritten_cb(this, cbval1);
            return callback_ret;
        }
        return KCompressionDevice::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (kcompressiondevice_readlinedata_isbase) {
            kcompressiondevice_readlinedata_isbase = false;
            return KCompressionDevice::readLineData(data, maxlen);
        }
        auto readlinedata_cb = kcompressiondevice_readlinedata_callback;
        if (readlinedata_cb) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = readlinedata_cb(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return KCompressionDevice::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (kcompressiondevice_skipdata_isbase) {
            kcompressiondevice_skipdata_isbase = false;
            return KCompressionDevice::skipData(maxSize);
        }
        auto skipdata_cb = kcompressiondevice_skipdata_callback;
        if (skipdata_cb) {
            long long cbval1 = static_cast<long long>(maxSize);

            long long callback_ret = skipdata_cb(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return KCompressionDevice::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcompressiondevice_event_isbase) {
            kcompressiondevice_event_isbase = false;
            return KCompressionDevice::event(event);
        }
        auto event_cb = kcompressiondevice_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KCompressionDevice::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcompressiondevice_eventfilter_isbase) {
            kcompressiondevice_eventfilter_isbase = false;
            return KCompressionDevice::eventFilter(watched, event);
        }
        auto eventfilter_cb = kcompressiondevice_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCompressionDevice::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcompressiondevice_timerevent_isbase) {
            kcompressiondevice_timerevent_isbase = false;
            KCompressionDevice::timerEvent(event);
            return;
        }
        auto timerevent_cb = kcompressiondevice_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KCompressionDevice::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcompressiondevice_childevent_isbase) {
            kcompressiondevice_childevent_isbase = false;
            KCompressionDevice::childEvent(event);
            return;
        }
        auto childevent_cb = kcompressiondevice_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KCompressionDevice::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcompressiondevice_customevent_isbase) {
            kcompressiondevice_customevent_isbase = false;
            KCompressionDevice::customEvent(event);
            return;
        }
        auto customevent_cb = kcompressiondevice_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KCompressionDevice::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcompressiondevice_connectnotify_isbase) {
            kcompressiondevice_connectnotify_isbase = false;
            KCompressionDevice::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kcompressiondevice_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KCompressionDevice::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcompressiondevice_disconnectnotify_isbase) {
            kcompressiondevice_disconnectnotify_isbase = false;
            KCompressionDevice::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kcompressiondevice_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KCompressionDevice::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    KFilterBase* filterBase() {
        if (kcompressiondevice_filterbase_isbase) {
            kcompressiondevice_filterbase_isbase = false;
            return KCompressionDevice::filterBase();
        }
        auto filterbase_cb = kcompressiondevice_filterbase_callback;
        if (filterbase_cb) {
            KFilterBase* callback_ret = filterbase_cb();
            return callback_ret;
        }
        return KCompressionDevice::filterBase();
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (kcompressiondevice_setopenmode_isbase) {
            kcompressiondevice_setopenmode_isbase = false;
            KCompressionDevice::setOpenMode(openMode);
            return;
        }
        auto setopenmode_cb = kcompressiondevice_setopenmode_callback;
        if (setopenmode_cb) {
            int cbval1 = static_cast<int>(openMode);

            setopenmode_cb(this, cbval1);
            return;
        }
        KCompressionDevice::setOpenMode(openMode);
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (kcompressiondevice_seterrorstring_isbase) {
            kcompressiondevice_seterrorstring_isbase = false;
            KCompressionDevice::setErrorString(errorString);
            return;
        }
        auto seterrorstring_cb = kcompressiondevice_seterrorstring_callback;
        if (seterrorstring_cb) {
            const QString errorString_ret = errorString;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray errorString_b = errorString_ret.toUtf8();
            auto errorString_str_len = errorString_b.length();
            const char* errorString_str = static_cast<const char*>(malloc(errorString_str_len + 1));
            memcpy((void*)errorString_str, errorString_b.data(), errorString_str_len);
            ((char*)errorString_str)[errorString_str_len] = '\0';
            const char* cbval1 = errorString_str;

            seterrorstring_cb(this, cbval1);
            libqt_free(errorString_str);
            return;
        }
        KCompressionDevice::setErrorString(errorString);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcompressiondevice_sender_isbase) {
            kcompressiondevice_sender_isbase = false;
            return KCompressionDevice::sender();
        }
        auto sender_cb = kcompressiondevice_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KCompressionDevice::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcompressiondevice_sendersignalindex_isbase) {
            kcompressiondevice_sendersignalindex_isbase = false;
            return KCompressionDevice::senderSignalIndex();
        }
        auto sendersignalindex_cb = kcompressiondevice_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KCompressionDevice::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcompressiondevice_receivers_isbase) {
            kcompressiondevice_receivers_isbase = false;
            return KCompressionDevice::receivers(signal);
        }
        auto receivers_cb = kcompressiondevice_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCompressionDevice::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcompressiondevice_issignalconnected_isbase) {
            kcompressiondevice_issignalconnected_isbase = false;
            return KCompressionDevice::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kcompressiondevice_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KCompressionDevice::isSignalConnected(signal);
    }

    // Friend functions
    friend long long KCompressionDevice_ReadData(KCompressionDevice* self, char* data, long long maxlen);
    friend long long KCompressionDevice_SuperReadData(KCompressionDevice* self, char* data, long long maxlen);
    friend long long KCompressionDevice_WriteData(KCompressionDevice* self, const char* data, long long lenVal);
    friend long long KCompressionDevice_SuperWriteData(KCompressionDevice* self, const char* data, long long lenVal);
    friend long long KCompressionDevice_ReadLineData(KCompressionDevice* self, char* data, long long maxlen);
    friend long long KCompressionDevice_SuperReadLineData(KCompressionDevice* self, char* data, long long maxlen);
    friend long long KCompressionDevice_SkipData(KCompressionDevice* self, long long maxSize);
    friend long long KCompressionDevice_SuperSkipData(KCompressionDevice* self, long long maxSize);
    friend void KCompressionDevice_TimerEvent(KCompressionDevice* self, QTimerEvent* event);
    friend void KCompressionDevice_SuperTimerEvent(KCompressionDevice* self, QTimerEvent* event);
    friend void KCompressionDevice_ChildEvent(KCompressionDevice* self, QChildEvent* event);
    friend void KCompressionDevice_SuperChildEvent(KCompressionDevice* self, QChildEvent* event);
    friend void KCompressionDevice_CustomEvent(KCompressionDevice* self, QEvent* event);
    friend void KCompressionDevice_SuperCustomEvent(KCompressionDevice* self, QEvent* event);
    friend void KCompressionDevice_ConnectNotify(KCompressionDevice* self, const QMetaMethod* signal);
    friend void KCompressionDevice_SuperConnectNotify(KCompressionDevice* self, const QMetaMethod* signal);
    friend void KCompressionDevice_DisconnectNotify(KCompressionDevice* self, const QMetaMethod* signal);
    friend void KCompressionDevice_SuperDisconnectNotify(KCompressionDevice* self, const QMetaMethod* signal);
    friend KFilterBase* KCompressionDevice_FilterBase(KCompressionDevice* self);
    friend KFilterBase* KCompressionDevice_SuperFilterBase(KCompressionDevice* self);
    friend void KCompressionDevice_SetOpenMode(KCompressionDevice* self, int openMode);
    friend void KCompressionDevice_SuperSetOpenMode(KCompressionDevice* self, int openMode);
    friend void KCompressionDevice_SetErrorString(KCompressionDevice* self, const libqt_string errorString);
    friend void KCompressionDevice_SuperSetErrorString(KCompressionDevice* self, const libqt_string errorString);
    friend QObject* KCompressionDevice_Sender(const KCompressionDevice* self);
    friend QObject* KCompressionDevice_SuperSender(const KCompressionDevice* self);
    friend int KCompressionDevice_SenderSignalIndex(const KCompressionDevice* self);
    friend int KCompressionDevice_SuperSenderSignalIndex(const KCompressionDevice* self);
    friend int KCompressionDevice_Receivers(const KCompressionDevice* self, const char* signal);
    friend int KCompressionDevice_SuperReceivers(const KCompressionDevice* self, const char* signal);
    friend bool KCompressionDevice_IsSignalConnected(const KCompressionDevice* self, const QMetaMethod* signal);
    friend bool KCompressionDevice_SuperIsSignalConnected(const KCompressionDevice* self, const QMetaMethod* signal);
};

#endif
