#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQWAVEDECODER_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQWAVEDECODER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWaveDecoder so that we can call protected methods
class VirtualQWaveDecoder final : public QWaveDecoder {

  public:
    // Virtual class boolean flag
    bool isVirtualQWaveDecoder = true;

    // Virtual class public types (including callbacks)
    using QWaveDecoder_MetaObject_Callback = QMetaObject* (*)();
    using QWaveDecoder_Metacast_Callback = void* (*)(QWaveDecoder*, const char*);
    using QWaveDecoder_Metacall_Callback = int (*)(QWaveDecoder*, int, int, void**);
    using QWaveDecoder_Open_Callback = bool (*)(QWaveDecoder*, int);
    using QWaveDecoder_Close_Callback = void (*)();
    using QWaveDecoder_Seek_Callback = bool (*)(QWaveDecoder*, long long);
    using QWaveDecoder_Pos_Callback = long long (*)();
    using QWaveDecoder_Size_Callback = long long (*)();
    using QWaveDecoder_IsSequential_Callback = bool (*)();
    using QWaveDecoder_BytesAvailable_Callback = long long (*)();
    using QWaveDecoder_AtEnd_Callback = bool (*)();
    using QWaveDecoder_Reset_Callback = bool (*)();
    using QWaveDecoder_BytesToWrite_Callback = long long (*)();
    using QWaveDecoder_CanReadLine_Callback = bool (*)();
    using QWaveDecoder_WaitForReadyRead_Callback = bool (*)(QWaveDecoder*, int);
    using QWaveDecoder_WaitForBytesWritten_Callback = bool (*)(QWaveDecoder*, int);
    using QWaveDecoder_ReadLineData_Callback = long long (*)(QWaveDecoder*, char*, long long);
    using QWaveDecoder_SkipData_Callback = long long (*)(QWaveDecoder*, long long);
    using QWaveDecoder_Event_Callback = bool (*)(QWaveDecoder*, QEvent*);
    using QWaveDecoder_EventFilter_Callback = bool (*)(QWaveDecoder*, QObject*, QEvent*);
    using QWaveDecoder_TimerEvent_Callback = void (*)(QWaveDecoder*, QTimerEvent*);
    using QWaveDecoder_ChildEvent_Callback = void (*)(QWaveDecoder*, QChildEvent*);
    using QWaveDecoder_CustomEvent_Callback = void (*)(QWaveDecoder*, QEvent*);
    using QWaveDecoder_ConnectNotify_Callback = void (*)(QWaveDecoder*, QMetaMethod*);
    using QWaveDecoder_DisconnectNotify_Callback = void (*)(QWaveDecoder*, QMetaMethod*);
    using QWaveDecoder_SetOpenMode_Callback = void (*)(QWaveDecoder*, int);
    using QWaveDecoder_SetErrorString_Callback = void (*)(QWaveDecoder*, const char*);
    using QWaveDecoder_Sender_Callback = QObject* (*)();
    using QWaveDecoder_SenderSignalIndex_Callback = int (*)();
    using QWaveDecoder_Receivers_Callback = int (*)(const QWaveDecoder*, const char*);
    using QWaveDecoder_IsSignalConnected_Callback = bool (*)(const QWaveDecoder*, QMetaMethod*);

  protected:
    // Instance callback storage
    QWaveDecoder_MetaObject_Callback qwavedecoder_metaobject_callback = nullptr;
    QWaveDecoder_Metacast_Callback qwavedecoder_metacast_callback = nullptr;
    QWaveDecoder_Metacall_Callback qwavedecoder_metacall_callback = nullptr;
    QWaveDecoder_Open_Callback qwavedecoder_open_callback = nullptr;
    QWaveDecoder_Close_Callback qwavedecoder_close_callback = nullptr;
    QWaveDecoder_Seek_Callback qwavedecoder_seek_callback = nullptr;
    QWaveDecoder_Pos_Callback qwavedecoder_pos_callback = nullptr;
    QWaveDecoder_Size_Callback qwavedecoder_size_callback = nullptr;
    QWaveDecoder_IsSequential_Callback qwavedecoder_issequential_callback = nullptr;
    QWaveDecoder_BytesAvailable_Callback qwavedecoder_bytesavailable_callback = nullptr;
    QWaveDecoder_AtEnd_Callback qwavedecoder_atend_callback = nullptr;
    QWaveDecoder_Reset_Callback qwavedecoder_reset_callback = nullptr;
    QWaveDecoder_BytesToWrite_Callback qwavedecoder_bytestowrite_callback = nullptr;
    QWaveDecoder_CanReadLine_Callback qwavedecoder_canreadline_callback = nullptr;
    QWaveDecoder_WaitForReadyRead_Callback qwavedecoder_waitforreadyread_callback = nullptr;
    QWaveDecoder_WaitForBytesWritten_Callback qwavedecoder_waitforbyteswritten_callback = nullptr;
    QWaveDecoder_ReadLineData_Callback qwavedecoder_readlinedata_callback = nullptr;
    QWaveDecoder_SkipData_Callback qwavedecoder_skipdata_callback = nullptr;
    QWaveDecoder_Event_Callback qwavedecoder_event_callback = nullptr;
    QWaveDecoder_EventFilter_Callback qwavedecoder_eventfilter_callback = nullptr;
    QWaveDecoder_TimerEvent_Callback qwavedecoder_timerevent_callback = nullptr;
    QWaveDecoder_ChildEvent_Callback qwavedecoder_childevent_callback = nullptr;
    QWaveDecoder_CustomEvent_Callback qwavedecoder_customevent_callback = nullptr;
    QWaveDecoder_ConnectNotify_Callback qwavedecoder_connectnotify_callback = nullptr;
    QWaveDecoder_DisconnectNotify_Callback qwavedecoder_disconnectnotify_callback = nullptr;
    QWaveDecoder_SetOpenMode_Callback qwavedecoder_setopenmode_callback = nullptr;
    QWaveDecoder_SetErrorString_Callback qwavedecoder_seterrorstring_callback = nullptr;
    QWaveDecoder_Sender_Callback qwavedecoder_sender_callback = nullptr;
    QWaveDecoder_SenderSignalIndex_Callback qwavedecoder_sendersignalindex_callback = nullptr;
    QWaveDecoder_Receivers_Callback qwavedecoder_receivers_callback = nullptr;
    QWaveDecoder_IsSignalConnected_Callback qwavedecoder_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qwavedecoder_metaobject_isbase = false;
    mutable bool qwavedecoder_metacast_isbase = false;
    mutable bool qwavedecoder_metacall_isbase = false;
    mutable bool qwavedecoder_open_isbase = false;
    mutable bool qwavedecoder_close_isbase = false;
    mutable bool qwavedecoder_seek_isbase = false;
    mutable bool qwavedecoder_pos_isbase = false;
    mutable bool qwavedecoder_size_isbase = false;
    mutable bool qwavedecoder_issequential_isbase = false;
    mutable bool qwavedecoder_bytesavailable_isbase = false;
    mutable bool qwavedecoder_atend_isbase = false;
    mutable bool qwavedecoder_reset_isbase = false;
    mutable bool qwavedecoder_bytestowrite_isbase = false;
    mutable bool qwavedecoder_canreadline_isbase = false;
    mutable bool qwavedecoder_waitforreadyread_isbase = false;
    mutable bool qwavedecoder_waitforbyteswritten_isbase = false;
    mutable bool qwavedecoder_readlinedata_isbase = false;
    mutable bool qwavedecoder_skipdata_isbase = false;
    mutable bool qwavedecoder_event_isbase = false;
    mutable bool qwavedecoder_eventfilter_isbase = false;
    mutable bool qwavedecoder_timerevent_isbase = false;
    mutable bool qwavedecoder_childevent_isbase = false;
    mutable bool qwavedecoder_customevent_isbase = false;
    mutable bool qwavedecoder_connectnotify_isbase = false;
    mutable bool qwavedecoder_disconnectnotify_isbase = false;
    mutable bool qwavedecoder_setopenmode_isbase = false;
    mutable bool qwavedecoder_seterrorstring_isbase = false;
    mutable bool qwavedecoder_sender_isbase = false;
    mutable bool qwavedecoder_sendersignalindex_isbase = false;
    mutable bool qwavedecoder_receivers_isbase = false;
    mutable bool qwavedecoder_issignalconnected_isbase = false;

  public:
    VirtualQWaveDecoder(QIODevice* device) : QWaveDecoder(device) {};
    VirtualQWaveDecoder(QIODevice* device, const QAudioFormat& format) : QWaveDecoder(device, format) {};
    VirtualQWaveDecoder(QIODevice* device, QObject* parent) : QWaveDecoder(device, parent) {};
    VirtualQWaveDecoder(QIODevice* device, const QAudioFormat& format, QObject* parent) : QWaveDecoder(device, format, parent) {};

    // Callback setters
    inline void setQWaveDecoder_MetaObject_Callback(QWaveDecoder_MetaObject_Callback cb) { qwavedecoder_metaobject_callback = cb; }
    inline void setQWaveDecoder_Metacast_Callback(QWaveDecoder_Metacast_Callback cb) { qwavedecoder_metacast_callback = cb; }
    inline void setQWaveDecoder_Metacall_Callback(QWaveDecoder_Metacall_Callback cb) { qwavedecoder_metacall_callback = cb; }
    inline void setQWaveDecoder_Open_Callback(QWaveDecoder_Open_Callback cb) { qwavedecoder_open_callback = cb; }
    inline void setQWaveDecoder_Close_Callback(QWaveDecoder_Close_Callback cb) { qwavedecoder_close_callback = cb; }
    inline void setQWaveDecoder_Seek_Callback(QWaveDecoder_Seek_Callback cb) { qwavedecoder_seek_callback = cb; }
    inline void setQWaveDecoder_Pos_Callback(QWaveDecoder_Pos_Callback cb) { qwavedecoder_pos_callback = cb; }
    inline void setQWaveDecoder_Size_Callback(QWaveDecoder_Size_Callback cb) { qwavedecoder_size_callback = cb; }
    inline void setQWaveDecoder_IsSequential_Callback(QWaveDecoder_IsSequential_Callback cb) { qwavedecoder_issequential_callback = cb; }
    inline void setQWaveDecoder_BytesAvailable_Callback(QWaveDecoder_BytesAvailable_Callback cb) { qwavedecoder_bytesavailable_callback = cb; }
    inline void setQWaveDecoder_AtEnd_Callback(QWaveDecoder_AtEnd_Callback cb) { qwavedecoder_atend_callback = cb; }
    inline void setQWaveDecoder_Reset_Callback(QWaveDecoder_Reset_Callback cb) { qwavedecoder_reset_callback = cb; }
    inline void setQWaveDecoder_BytesToWrite_Callback(QWaveDecoder_BytesToWrite_Callback cb) { qwavedecoder_bytestowrite_callback = cb; }
    inline void setQWaveDecoder_CanReadLine_Callback(QWaveDecoder_CanReadLine_Callback cb) { qwavedecoder_canreadline_callback = cb; }
    inline void setQWaveDecoder_WaitForReadyRead_Callback(QWaveDecoder_WaitForReadyRead_Callback cb) { qwavedecoder_waitforreadyread_callback = cb; }
    inline void setQWaveDecoder_WaitForBytesWritten_Callback(QWaveDecoder_WaitForBytesWritten_Callback cb) { qwavedecoder_waitforbyteswritten_callback = cb; }
    inline void setQWaveDecoder_ReadLineData_Callback(QWaveDecoder_ReadLineData_Callback cb) { qwavedecoder_readlinedata_callback = cb; }
    inline void setQWaveDecoder_SkipData_Callback(QWaveDecoder_SkipData_Callback cb) { qwavedecoder_skipdata_callback = cb; }
    inline void setQWaveDecoder_Event_Callback(QWaveDecoder_Event_Callback cb) { qwavedecoder_event_callback = cb; }
    inline void setQWaveDecoder_EventFilter_Callback(QWaveDecoder_EventFilter_Callback cb) { qwavedecoder_eventfilter_callback = cb; }
    inline void setQWaveDecoder_TimerEvent_Callback(QWaveDecoder_TimerEvent_Callback cb) { qwavedecoder_timerevent_callback = cb; }
    inline void setQWaveDecoder_ChildEvent_Callback(QWaveDecoder_ChildEvent_Callback cb) { qwavedecoder_childevent_callback = cb; }
    inline void setQWaveDecoder_CustomEvent_Callback(QWaveDecoder_CustomEvent_Callback cb) { qwavedecoder_customevent_callback = cb; }
    inline void setQWaveDecoder_ConnectNotify_Callback(QWaveDecoder_ConnectNotify_Callback cb) { qwavedecoder_connectnotify_callback = cb; }
    inline void setQWaveDecoder_DisconnectNotify_Callback(QWaveDecoder_DisconnectNotify_Callback cb) { qwavedecoder_disconnectnotify_callback = cb; }
    inline void setQWaveDecoder_SetOpenMode_Callback(QWaveDecoder_SetOpenMode_Callback cb) { qwavedecoder_setopenmode_callback = cb; }
    inline void setQWaveDecoder_SetErrorString_Callback(QWaveDecoder_SetErrorString_Callback cb) { qwavedecoder_seterrorstring_callback = cb; }
    inline void setQWaveDecoder_Sender_Callback(QWaveDecoder_Sender_Callback cb) { qwavedecoder_sender_callback = cb; }
    inline void setQWaveDecoder_SenderSignalIndex_Callback(QWaveDecoder_SenderSignalIndex_Callback cb) { qwavedecoder_sendersignalindex_callback = cb; }
    inline void setQWaveDecoder_Receivers_Callback(QWaveDecoder_Receivers_Callback cb) { qwavedecoder_receivers_callback = cb; }
    inline void setQWaveDecoder_IsSignalConnected_Callback(QWaveDecoder_IsSignalConnected_Callback cb) { qwavedecoder_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQWaveDecoder_MetaObject_IsBase(bool value) const { qwavedecoder_metaobject_isbase = value; }
    inline void setQWaveDecoder_Metacast_IsBase(bool value) const { qwavedecoder_metacast_isbase = value; }
    inline void setQWaveDecoder_Metacall_IsBase(bool value) const { qwavedecoder_metacall_isbase = value; }
    inline void setQWaveDecoder_Open_IsBase(bool value) const { qwavedecoder_open_isbase = value; }
    inline void setQWaveDecoder_Close_IsBase(bool value) const { qwavedecoder_close_isbase = value; }
    inline void setQWaveDecoder_Seek_IsBase(bool value) const { qwavedecoder_seek_isbase = value; }
    inline void setQWaveDecoder_Pos_IsBase(bool value) const { qwavedecoder_pos_isbase = value; }
    inline void setQWaveDecoder_Size_IsBase(bool value) const { qwavedecoder_size_isbase = value; }
    inline void setQWaveDecoder_IsSequential_IsBase(bool value) const { qwavedecoder_issequential_isbase = value; }
    inline void setQWaveDecoder_BytesAvailable_IsBase(bool value) const { qwavedecoder_bytesavailable_isbase = value; }
    inline void setQWaveDecoder_AtEnd_IsBase(bool value) const { qwavedecoder_atend_isbase = value; }
    inline void setQWaveDecoder_Reset_IsBase(bool value) const { qwavedecoder_reset_isbase = value; }
    inline void setQWaveDecoder_BytesToWrite_IsBase(bool value) const { qwavedecoder_bytestowrite_isbase = value; }
    inline void setQWaveDecoder_CanReadLine_IsBase(bool value) const { qwavedecoder_canreadline_isbase = value; }
    inline void setQWaveDecoder_WaitForReadyRead_IsBase(bool value) const { qwavedecoder_waitforreadyread_isbase = value; }
    inline void setQWaveDecoder_WaitForBytesWritten_IsBase(bool value) const { qwavedecoder_waitforbyteswritten_isbase = value; }
    inline void setQWaveDecoder_ReadLineData_IsBase(bool value) const { qwavedecoder_readlinedata_isbase = value; }
    inline void setQWaveDecoder_SkipData_IsBase(bool value) const { qwavedecoder_skipdata_isbase = value; }
    inline void setQWaveDecoder_Event_IsBase(bool value) const { qwavedecoder_event_isbase = value; }
    inline void setQWaveDecoder_EventFilter_IsBase(bool value) const { qwavedecoder_eventfilter_isbase = value; }
    inline void setQWaveDecoder_TimerEvent_IsBase(bool value) const { qwavedecoder_timerevent_isbase = value; }
    inline void setQWaveDecoder_ChildEvent_IsBase(bool value) const { qwavedecoder_childevent_isbase = value; }
    inline void setQWaveDecoder_CustomEvent_IsBase(bool value) const { qwavedecoder_customevent_isbase = value; }
    inline void setQWaveDecoder_ConnectNotify_IsBase(bool value) const { qwavedecoder_connectnotify_isbase = value; }
    inline void setQWaveDecoder_DisconnectNotify_IsBase(bool value) const { qwavedecoder_disconnectnotify_isbase = value; }
    inline void setQWaveDecoder_SetOpenMode_IsBase(bool value) const { qwavedecoder_setopenmode_isbase = value; }
    inline void setQWaveDecoder_SetErrorString_IsBase(bool value) const { qwavedecoder_seterrorstring_isbase = value; }
    inline void setQWaveDecoder_Sender_IsBase(bool value) const { qwavedecoder_sender_isbase = value; }
    inline void setQWaveDecoder_SenderSignalIndex_IsBase(bool value) const { qwavedecoder_sendersignalindex_isbase = value; }
    inline void setQWaveDecoder_Receivers_IsBase(bool value) const { qwavedecoder_receivers_isbase = value; }
    inline void setQWaveDecoder_IsSignalConnected_IsBase(bool value) const { qwavedecoder_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwavedecoder_metaobject_isbase) {
            qwavedecoder_metaobject_isbase = false;
            return QWaveDecoder::metaObject();
        }
        auto metaobject_cb = qwavedecoder_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QWaveDecoder::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwavedecoder_metacast_isbase) {
            qwavedecoder_metacast_isbase = false;
            return QWaveDecoder::qt_metacast(param1);
        }
        auto metacast_cb = qwavedecoder_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QWaveDecoder::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwavedecoder_metacall_isbase) {
            qwavedecoder_metacall_isbase = false;
            return QWaveDecoder::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qwavedecoder_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWaveDecoder::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODevice::OpenMode mode) override {
        if (qwavedecoder_open_isbase) {
            qwavedecoder_open_isbase = false;
            return QWaveDecoder::open(mode);
        }
        auto open_cb = qwavedecoder_open_callback;
        if (open_cb) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = open_cb(this, cbval1);
            return callback_ret;
        }
        return QWaveDecoder::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qwavedecoder_close_isbase) {
            qwavedecoder_close_isbase = false;
            QWaveDecoder::close();
            return;
        }
        auto close_cb = qwavedecoder_close_callback;
        if (close_cb) {
            close_cb();
            return;
        }
        QWaveDecoder::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qwavedecoder_seek_isbase) {
            qwavedecoder_seek_isbase = false;
            return QWaveDecoder::seek(pos);
        }
        auto seek_cb = qwavedecoder_seek_callback;
        if (seek_cb) {
            long long cbval1 = static_cast<long long>(pos);

            bool callback_ret = seek_cb(this, cbval1);
            return callback_ret;
        }
        return QWaveDecoder::seek(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qwavedecoder_pos_isbase) {
            qwavedecoder_pos_isbase = false;
            return QWaveDecoder::pos();
        }
        auto pos_cb = qwavedecoder_pos_callback;
        if (pos_cb) {
            long long callback_ret = pos_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QWaveDecoder::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qwavedecoder_size_isbase) {
            qwavedecoder_size_isbase = false;
            return QWaveDecoder::size();
        }
        auto size_cb = qwavedecoder_size_callback;
        if (size_cb) {
            long long callback_ret = size_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QWaveDecoder::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qwavedecoder_issequential_isbase) {
            qwavedecoder_issequential_isbase = false;
            return QWaveDecoder::isSequential();
        }
        auto issequential_cb = qwavedecoder_issequential_callback;
        if (issequential_cb) {
            bool callback_ret = issequential_cb();
            return callback_ret;
        }
        return QWaveDecoder::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qwavedecoder_bytesavailable_isbase) {
            qwavedecoder_bytesavailable_isbase = false;
            return QWaveDecoder::bytesAvailable();
        }
        auto bytesavailable_cb = qwavedecoder_bytesavailable_callback;
        if (bytesavailable_cb) {
            long long callback_ret = bytesavailable_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QWaveDecoder::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qwavedecoder_atend_isbase) {
            qwavedecoder_atend_isbase = false;
            return QWaveDecoder::atEnd();
        }
        auto atend_cb = qwavedecoder_atend_callback;
        if (atend_cb) {
            bool callback_ret = atend_cb();
            return callback_ret;
        }
        return QWaveDecoder::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qwavedecoder_reset_isbase) {
            qwavedecoder_reset_isbase = false;
            return QWaveDecoder::reset();
        }
        auto reset_cb = qwavedecoder_reset_callback;
        if (reset_cb) {
            bool callback_ret = reset_cb();
            return callback_ret;
        }
        return QWaveDecoder::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qwavedecoder_bytestowrite_isbase) {
            qwavedecoder_bytestowrite_isbase = false;
            return QWaveDecoder::bytesToWrite();
        }
        auto bytestowrite_cb = qwavedecoder_bytestowrite_callback;
        if (bytestowrite_cb) {
            long long callback_ret = bytestowrite_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QWaveDecoder::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qwavedecoder_canreadline_isbase) {
            qwavedecoder_canreadline_isbase = false;
            return QWaveDecoder::canReadLine();
        }
        auto canreadline_cb = qwavedecoder_canreadline_callback;
        if (canreadline_cb) {
            bool callback_ret = canreadline_cb();
            return callback_ret;
        }
        return QWaveDecoder::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qwavedecoder_waitforreadyread_isbase) {
            qwavedecoder_waitforreadyread_isbase = false;
            return QWaveDecoder::waitForReadyRead(msecs);
        }
        auto waitforreadyread_cb = qwavedecoder_waitforreadyread_callback;
        if (waitforreadyread_cb) {
            int cbval1 = msecs;

            bool callback_ret = waitforreadyread_cb(this, cbval1);
            return callback_ret;
        }
        return QWaveDecoder::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qwavedecoder_waitforbyteswritten_isbase) {
            qwavedecoder_waitforbyteswritten_isbase = false;
            return QWaveDecoder::waitForBytesWritten(msecs);
        }
        auto waitforbyteswritten_cb = qwavedecoder_waitforbyteswritten_callback;
        if (waitforbyteswritten_cb) {
            int cbval1 = msecs;

            bool callback_ret = waitforbyteswritten_cb(this, cbval1);
            return callback_ret;
        }
        return QWaveDecoder::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qwavedecoder_readlinedata_isbase) {
            qwavedecoder_readlinedata_isbase = false;
            return QWaveDecoder::readLineData(data, maxlen);
        }
        auto readlinedata_cb = qwavedecoder_readlinedata_callback;
        if (readlinedata_cb) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = readlinedata_cb(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QWaveDecoder::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qwavedecoder_skipdata_isbase) {
            qwavedecoder_skipdata_isbase = false;
            return QWaveDecoder::skipData(maxSize);
        }
        auto skipdata_cb = qwavedecoder_skipdata_callback;
        if (skipdata_cb) {
            long long cbval1 = static_cast<long long>(maxSize);

            long long callback_ret = skipdata_cb(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return QWaveDecoder::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwavedecoder_event_isbase) {
            qwavedecoder_event_isbase = false;
            return QWaveDecoder::event(event);
        }
        auto event_cb = qwavedecoder_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QWaveDecoder::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwavedecoder_eventfilter_isbase) {
            qwavedecoder_eventfilter_isbase = false;
            return QWaveDecoder::eventFilter(watched, event);
        }
        auto eventfilter_cb = qwavedecoder_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWaveDecoder::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwavedecoder_timerevent_isbase) {
            qwavedecoder_timerevent_isbase = false;
            QWaveDecoder::timerEvent(event);
            return;
        }
        auto timerevent_cb = qwavedecoder_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QWaveDecoder::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwavedecoder_childevent_isbase) {
            qwavedecoder_childevent_isbase = false;
            QWaveDecoder::childEvent(event);
            return;
        }
        auto childevent_cb = qwavedecoder_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QWaveDecoder::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwavedecoder_customevent_isbase) {
            qwavedecoder_customevent_isbase = false;
            QWaveDecoder::customEvent(event);
            return;
        }
        auto customevent_cb = qwavedecoder_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QWaveDecoder::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwavedecoder_connectnotify_isbase) {
            qwavedecoder_connectnotify_isbase = false;
            QWaveDecoder::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qwavedecoder_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QWaveDecoder::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwavedecoder_disconnectnotify_isbase) {
            qwavedecoder_disconnectnotify_isbase = false;
            QWaveDecoder::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qwavedecoder_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QWaveDecoder::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (qwavedecoder_setopenmode_isbase) {
            qwavedecoder_setopenmode_isbase = false;
            QWaveDecoder::setOpenMode(openMode);
            return;
        }
        auto setopenmode_cb = qwavedecoder_setopenmode_callback;
        if (setopenmode_cb) {
            int cbval1 = static_cast<int>(openMode);

            setopenmode_cb(this, cbval1);
            return;
        }
        QWaveDecoder::setOpenMode(openMode);
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (qwavedecoder_seterrorstring_isbase) {
            qwavedecoder_seterrorstring_isbase = false;
            QWaveDecoder::setErrorString(errorString);
            return;
        }
        auto seterrorstring_cb = qwavedecoder_seterrorstring_callback;
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
        QWaveDecoder::setErrorString(errorString);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qwavedecoder_sender_isbase) {
            qwavedecoder_sender_isbase = false;
            return QWaveDecoder::sender();
        }
        auto sender_cb = qwavedecoder_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QWaveDecoder::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qwavedecoder_sendersignalindex_isbase) {
            qwavedecoder_sendersignalindex_isbase = false;
            return QWaveDecoder::senderSignalIndex();
        }
        auto sendersignalindex_cb = qwavedecoder_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QWaveDecoder::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qwavedecoder_receivers_isbase) {
            qwavedecoder_receivers_isbase = false;
            return QWaveDecoder::receivers(signal);
        }
        auto receivers_cb = qwavedecoder_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWaveDecoder::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qwavedecoder_issignalconnected_isbase) {
            qwavedecoder_issignalconnected_isbase = false;
            return QWaveDecoder::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qwavedecoder_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QWaveDecoder::isSignalConnected(signal);
    }

    // Friend functions
    friend long long QWaveDecoder_ReadLineData(QWaveDecoder* self, char* data, long long maxlen);
    friend long long QWaveDecoder_SuperReadLineData(QWaveDecoder* self, char* data, long long maxlen);
    friend long long QWaveDecoder_SkipData(QWaveDecoder* self, long long maxSize);
    friend long long QWaveDecoder_SuperSkipData(QWaveDecoder* self, long long maxSize);
    friend void QWaveDecoder_TimerEvent(QWaveDecoder* self, QTimerEvent* event);
    friend void QWaveDecoder_SuperTimerEvent(QWaveDecoder* self, QTimerEvent* event);
    friend void QWaveDecoder_ChildEvent(QWaveDecoder* self, QChildEvent* event);
    friend void QWaveDecoder_SuperChildEvent(QWaveDecoder* self, QChildEvent* event);
    friend void QWaveDecoder_CustomEvent(QWaveDecoder* self, QEvent* event);
    friend void QWaveDecoder_SuperCustomEvent(QWaveDecoder* self, QEvent* event);
    friend void QWaveDecoder_ConnectNotify(QWaveDecoder* self, const QMetaMethod* signal);
    friend void QWaveDecoder_SuperConnectNotify(QWaveDecoder* self, const QMetaMethod* signal);
    friend void QWaveDecoder_DisconnectNotify(QWaveDecoder* self, const QMetaMethod* signal);
    friend void QWaveDecoder_SuperDisconnectNotify(QWaveDecoder* self, const QMetaMethod* signal);
    friend void QWaveDecoder_SetOpenMode(QWaveDecoder* self, int openMode);
    friend void QWaveDecoder_SuperSetOpenMode(QWaveDecoder* self, int openMode);
    friend void QWaveDecoder_SetErrorString(QWaveDecoder* self, const libqt_string errorString);
    friend void QWaveDecoder_SuperSetErrorString(QWaveDecoder* self, const libqt_string errorString);
    friend QObject* QWaveDecoder_Sender(const QWaveDecoder* self);
    friend QObject* QWaveDecoder_SuperSender(const QWaveDecoder* self);
    friend int QWaveDecoder_SenderSignalIndex(const QWaveDecoder* self);
    friend int QWaveDecoder_SuperSenderSignalIndex(const QWaveDecoder* self);
    friend int QWaveDecoder_Receivers(const QWaveDecoder* self, const char* signal);
    friend int QWaveDecoder_SuperReceivers(const QWaveDecoder* self, const char* signal);
    friend bool QWaveDecoder_IsSignalConnected(const QWaveDecoder* self, const QMetaMethod* signal);
    friend bool QWaveDecoder_SuperIsSignalConnected(const QWaveDecoder* self, const QMetaMethod* signal);
};

#endif
