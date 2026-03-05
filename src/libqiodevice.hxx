#pragma once
#ifndef SRCC_LIBVIRTUALQIODEVICE_H
#define SRCC_LIBVIRTUALQIODEVICE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QIODevice so that we can call protected methods
class VirtualQIODevice : public QIODevice {

  public:
    // Virtual class boolean flag
    bool isVirtualQIODevice = true;

    // Virtual class public types (including callbacks)
    using QIODevice_MetaObject_Callback = QMetaObject* (*)();
    using QIODevice_Metacast_Callback = void* (*)(QIODevice*, const char*);
    using QIODevice_Metacall_Callback = int (*)(QIODevice*, int, int, void**);
    using QIODevice_IsSequential_Callback = bool (*)();
    using QIODevice_Open_Callback = bool (*)(QIODevice*, int);
    using QIODevice_Close_Callback = void (*)();
    using QIODevice_Pos_Callback = long long (*)();
    using QIODevice_Size_Callback = long long (*)();
    using QIODevice_Seek_Callback = bool (*)(QIODevice*, long long);
    using QIODevice_AtEnd_Callback = bool (*)();
    using QIODevice_Reset_Callback = bool (*)();
    using QIODevice_BytesAvailable_Callback = long long (*)();
    using QIODevice_BytesToWrite_Callback = long long (*)();
    using QIODevice_CanReadLine_Callback = bool (*)();
    using QIODevice_WaitForReadyRead_Callback = bool (*)(QIODevice*, int);
    using QIODevice_WaitForBytesWritten_Callback = bool (*)(QIODevice*, int);
    using QIODevice_ReadData_Callback = long long (*)(QIODevice*, char*, long long);
    using QIODevice_ReadLineData_Callback = long long (*)(QIODevice*, char*, long long);
    using QIODevice_SkipData_Callback = long long (*)(QIODevice*, long long);
    using QIODevice_WriteData_Callback = long long (*)(QIODevice*, const char*, long long);
    using QIODevice_Event_Callback = bool (*)(QIODevice*, QEvent*);
    using QIODevice_EventFilter_Callback = bool (*)(QIODevice*, QObject*, QEvent*);
    using QIODevice_TimerEvent_Callback = void (*)(QIODevice*, QTimerEvent*);
    using QIODevice_ChildEvent_Callback = void (*)(QIODevice*, QChildEvent*);
    using QIODevice_CustomEvent_Callback = void (*)(QIODevice*, QEvent*);
    using QIODevice_ConnectNotify_Callback = void (*)(QIODevice*, QMetaMethod*);
    using QIODevice_DisconnectNotify_Callback = void (*)(QIODevice*, QMetaMethod*);
    using QIODevice_SetOpenMode_Callback = void (*)(QIODevice*, int);
    using QIODevice_SetErrorString_Callback = void (*)(QIODevice*, const char*);
    using QIODevice_Sender_Callback = QObject* (*)();
    using QIODevice_SenderSignalIndex_Callback = int (*)();
    using QIODevice_Receivers_Callback = int (*)(const QIODevice*, const char*);
    using QIODevice_IsSignalConnected_Callback = bool (*)(const QIODevice*, QMetaMethod*);

  protected:
    // Instance callback storage
    QIODevice_MetaObject_Callback qiodevice_metaobject_callback = nullptr;
    QIODevice_Metacast_Callback qiodevice_metacast_callback = nullptr;
    QIODevice_Metacall_Callback qiodevice_metacall_callback = nullptr;
    QIODevice_IsSequential_Callback qiodevice_issequential_callback = nullptr;
    QIODevice_Open_Callback qiodevice_open_callback = nullptr;
    QIODevice_Close_Callback qiodevice_close_callback = nullptr;
    QIODevice_Pos_Callback qiodevice_pos_callback = nullptr;
    QIODevice_Size_Callback qiodevice_size_callback = nullptr;
    QIODevice_Seek_Callback qiodevice_seek_callback = nullptr;
    QIODevice_AtEnd_Callback qiodevice_atend_callback = nullptr;
    QIODevice_Reset_Callback qiodevice_reset_callback = nullptr;
    QIODevice_BytesAvailable_Callback qiodevice_bytesavailable_callback = nullptr;
    QIODevice_BytesToWrite_Callback qiodevice_bytestowrite_callback = nullptr;
    QIODevice_CanReadLine_Callback qiodevice_canreadline_callback = nullptr;
    QIODevice_WaitForReadyRead_Callback qiodevice_waitforreadyread_callback = nullptr;
    QIODevice_WaitForBytesWritten_Callback qiodevice_waitforbyteswritten_callback = nullptr;
    QIODevice_ReadData_Callback qiodevice_readdata_callback = nullptr;
    QIODevice_ReadLineData_Callback qiodevice_readlinedata_callback = nullptr;
    QIODevice_SkipData_Callback qiodevice_skipdata_callback = nullptr;
    QIODevice_WriteData_Callback qiodevice_writedata_callback = nullptr;
    QIODevice_Event_Callback qiodevice_event_callback = nullptr;
    QIODevice_EventFilter_Callback qiodevice_eventfilter_callback = nullptr;
    QIODevice_TimerEvent_Callback qiodevice_timerevent_callback = nullptr;
    QIODevice_ChildEvent_Callback qiodevice_childevent_callback = nullptr;
    QIODevice_CustomEvent_Callback qiodevice_customevent_callback = nullptr;
    QIODevice_ConnectNotify_Callback qiodevice_connectnotify_callback = nullptr;
    QIODevice_DisconnectNotify_Callback qiodevice_disconnectnotify_callback = nullptr;
    QIODevice_SetOpenMode_Callback qiodevice_setopenmode_callback = nullptr;
    QIODevice_SetErrorString_Callback qiodevice_seterrorstring_callback = nullptr;
    QIODevice_Sender_Callback qiodevice_sender_callback = nullptr;
    QIODevice_SenderSignalIndex_Callback qiodevice_sendersignalindex_callback = nullptr;
    QIODevice_Receivers_Callback qiodevice_receivers_callback = nullptr;
    QIODevice_IsSignalConnected_Callback qiodevice_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qiodevice_metaobject_isbase = false;
    mutable bool qiodevice_metacast_isbase = false;
    mutable bool qiodevice_metacall_isbase = false;
    mutable bool qiodevice_issequential_isbase = false;
    mutable bool qiodevice_open_isbase = false;
    mutable bool qiodevice_close_isbase = false;
    mutable bool qiodevice_pos_isbase = false;
    mutable bool qiodevice_size_isbase = false;
    mutable bool qiodevice_seek_isbase = false;
    mutable bool qiodevice_atend_isbase = false;
    mutable bool qiodevice_reset_isbase = false;
    mutable bool qiodevice_bytesavailable_isbase = false;
    mutable bool qiodevice_bytestowrite_isbase = false;
    mutable bool qiodevice_canreadline_isbase = false;
    mutable bool qiodevice_waitforreadyread_isbase = false;
    mutable bool qiodevice_waitforbyteswritten_isbase = false;
    mutable bool qiodevice_readdata_isbase = false;
    mutable bool qiodevice_readlinedata_isbase = false;
    mutable bool qiodevice_skipdata_isbase = false;
    mutable bool qiodevice_writedata_isbase = false;
    mutable bool qiodevice_event_isbase = false;
    mutable bool qiodevice_eventfilter_isbase = false;
    mutable bool qiodevice_timerevent_isbase = false;
    mutable bool qiodevice_childevent_isbase = false;
    mutable bool qiodevice_customevent_isbase = false;
    mutable bool qiodevice_connectnotify_isbase = false;
    mutable bool qiodevice_disconnectnotify_isbase = false;
    mutable bool qiodevice_setopenmode_isbase = false;
    mutable bool qiodevice_seterrorstring_isbase = false;
    mutable bool qiodevice_sender_isbase = false;
    mutable bool qiodevice_sendersignalindex_isbase = false;
    mutable bool qiodevice_receivers_isbase = false;
    mutable bool qiodevice_issignalconnected_isbase = false;

  public:
    VirtualQIODevice() : QIODevice() {};
    VirtualQIODevice(QObject* parent) : QIODevice(parent) {};

    // Callback setters
    inline void setQIODevice_MetaObject_Callback(QIODevice_MetaObject_Callback cb) { qiodevice_metaobject_callback = cb; }
    inline void setQIODevice_Metacast_Callback(QIODevice_Metacast_Callback cb) { qiodevice_metacast_callback = cb; }
    inline void setQIODevice_Metacall_Callback(QIODevice_Metacall_Callback cb) { qiodevice_metacall_callback = cb; }
    inline void setQIODevice_IsSequential_Callback(QIODevice_IsSequential_Callback cb) { qiodevice_issequential_callback = cb; }
    inline void setQIODevice_Open_Callback(QIODevice_Open_Callback cb) { qiodevice_open_callback = cb; }
    inline void setQIODevice_Close_Callback(QIODevice_Close_Callback cb) { qiodevice_close_callback = cb; }
    inline void setQIODevice_Pos_Callback(QIODevice_Pos_Callback cb) { qiodevice_pos_callback = cb; }
    inline void setQIODevice_Size_Callback(QIODevice_Size_Callback cb) { qiodevice_size_callback = cb; }
    inline void setQIODevice_Seek_Callback(QIODevice_Seek_Callback cb) { qiodevice_seek_callback = cb; }
    inline void setQIODevice_AtEnd_Callback(QIODevice_AtEnd_Callback cb) { qiodevice_atend_callback = cb; }
    inline void setQIODevice_Reset_Callback(QIODevice_Reset_Callback cb) { qiodevice_reset_callback = cb; }
    inline void setQIODevice_BytesAvailable_Callback(QIODevice_BytesAvailable_Callback cb) { qiodevice_bytesavailable_callback = cb; }
    inline void setQIODevice_BytesToWrite_Callback(QIODevice_BytesToWrite_Callback cb) { qiodevice_bytestowrite_callback = cb; }
    inline void setQIODevice_CanReadLine_Callback(QIODevice_CanReadLine_Callback cb) { qiodevice_canreadline_callback = cb; }
    inline void setQIODevice_WaitForReadyRead_Callback(QIODevice_WaitForReadyRead_Callback cb) { qiodevice_waitforreadyread_callback = cb; }
    inline void setQIODevice_WaitForBytesWritten_Callback(QIODevice_WaitForBytesWritten_Callback cb) { qiodevice_waitforbyteswritten_callback = cb; }
    inline void setQIODevice_ReadData_Callback(QIODevice_ReadData_Callback cb) { qiodevice_readdata_callback = cb; }
    inline void setQIODevice_ReadLineData_Callback(QIODevice_ReadLineData_Callback cb) { qiodevice_readlinedata_callback = cb; }
    inline void setQIODevice_SkipData_Callback(QIODevice_SkipData_Callback cb) { qiodevice_skipdata_callback = cb; }
    inline void setQIODevice_WriteData_Callback(QIODevice_WriteData_Callback cb) { qiodevice_writedata_callback = cb; }
    inline void setQIODevice_Event_Callback(QIODevice_Event_Callback cb) { qiodevice_event_callback = cb; }
    inline void setQIODevice_EventFilter_Callback(QIODevice_EventFilter_Callback cb) { qiodevice_eventfilter_callback = cb; }
    inline void setQIODevice_TimerEvent_Callback(QIODevice_TimerEvent_Callback cb) { qiodevice_timerevent_callback = cb; }
    inline void setQIODevice_ChildEvent_Callback(QIODevice_ChildEvent_Callback cb) { qiodevice_childevent_callback = cb; }
    inline void setQIODevice_CustomEvent_Callback(QIODevice_CustomEvent_Callback cb) { qiodevice_customevent_callback = cb; }
    inline void setQIODevice_ConnectNotify_Callback(QIODevice_ConnectNotify_Callback cb) { qiodevice_connectnotify_callback = cb; }
    inline void setQIODevice_DisconnectNotify_Callback(QIODevice_DisconnectNotify_Callback cb) { qiodevice_disconnectnotify_callback = cb; }
    inline void setQIODevice_SetOpenMode_Callback(QIODevice_SetOpenMode_Callback cb) { qiodevice_setopenmode_callback = cb; }
    inline void setQIODevice_SetErrorString_Callback(QIODevice_SetErrorString_Callback cb) { qiodevice_seterrorstring_callback = cb; }
    inline void setQIODevice_Sender_Callback(QIODevice_Sender_Callback cb) { qiodevice_sender_callback = cb; }
    inline void setQIODevice_SenderSignalIndex_Callback(QIODevice_SenderSignalIndex_Callback cb) { qiodevice_sendersignalindex_callback = cb; }
    inline void setQIODevice_Receivers_Callback(QIODevice_Receivers_Callback cb) { qiodevice_receivers_callback = cb; }
    inline void setQIODevice_IsSignalConnected_Callback(QIODevice_IsSignalConnected_Callback cb) { qiodevice_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQIODevice_MetaObject_IsBase(bool value) const { qiodevice_metaobject_isbase = value; }
    inline void setQIODevice_Metacast_IsBase(bool value) const { qiodevice_metacast_isbase = value; }
    inline void setQIODevice_Metacall_IsBase(bool value) const { qiodevice_metacall_isbase = value; }
    inline void setQIODevice_IsSequential_IsBase(bool value) const { qiodevice_issequential_isbase = value; }
    inline void setQIODevice_Open_IsBase(bool value) const { qiodevice_open_isbase = value; }
    inline void setQIODevice_Close_IsBase(bool value) const { qiodevice_close_isbase = value; }
    inline void setQIODevice_Pos_IsBase(bool value) const { qiodevice_pos_isbase = value; }
    inline void setQIODevice_Size_IsBase(bool value) const { qiodevice_size_isbase = value; }
    inline void setQIODevice_Seek_IsBase(bool value) const { qiodevice_seek_isbase = value; }
    inline void setQIODevice_AtEnd_IsBase(bool value) const { qiodevice_atend_isbase = value; }
    inline void setQIODevice_Reset_IsBase(bool value) const { qiodevice_reset_isbase = value; }
    inline void setQIODevice_BytesAvailable_IsBase(bool value) const { qiodevice_bytesavailable_isbase = value; }
    inline void setQIODevice_BytesToWrite_IsBase(bool value) const { qiodevice_bytestowrite_isbase = value; }
    inline void setQIODevice_CanReadLine_IsBase(bool value) const { qiodevice_canreadline_isbase = value; }
    inline void setQIODevice_WaitForReadyRead_IsBase(bool value) const { qiodevice_waitforreadyread_isbase = value; }
    inline void setQIODevice_WaitForBytesWritten_IsBase(bool value) const { qiodevice_waitforbyteswritten_isbase = value; }
    inline void setQIODevice_ReadData_IsBase(bool value) const { qiodevice_readdata_isbase = value; }
    inline void setQIODevice_ReadLineData_IsBase(bool value) const { qiodevice_readlinedata_isbase = value; }
    inline void setQIODevice_SkipData_IsBase(bool value) const { qiodevice_skipdata_isbase = value; }
    inline void setQIODevice_WriteData_IsBase(bool value) const { qiodevice_writedata_isbase = value; }
    inline void setQIODevice_Event_IsBase(bool value) const { qiodevice_event_isbase = value; }
    inline void setQIODevice_EventFilter_IsBase(bool value) const { qiodevice_eventfilter_isbase = value; }
    inline void setQIODevice_TimerEvent_IsBase(bool value) const { qiodevice_timerevent_isbase = value; }
    inline void setQIODevice_ChildEvent_IsBase(bool value) const { qiodevice_childevent_isbase = value; }
    inline void setQIODevice_CustomEvent_IsBase(bool value) const { qiodevice_customevent_isbase = value; }
    inline void setQIODevice_ConnectNotify_IsBase(bool value) const { qiodevice_connectnotify_isbase = value; }
    inline void setQIODevice_DisconnectNotify_IsBase(bool value) const { qiodevice_disconnectnotify_isbase = value; }
    inline void setQIODevice_SetOpenMode_IsBase(bool value) const { qiodevice_setopenmode_isbase = value; }
    inline void setQIODevice_SetErrorString_IsBase(bool value) const { qiodevice_seterrorstring_isbase = value; }
    inline void setQIODevice_Sender_IsBase(bool value) const { qiodevice_sender_isbase = value; }
    inline void setQIODevice_SenderSignalIndex_IsBase(bool value) const { qiodevice_sendersignalindex_isbase = value; }
    inline void setQIODevice_Receivers_IsBase(bool value) const { qiodevice_receivers_isbase = value; }
    inline void setQIODevice_IsSignalConnected_IsBase(bool value) const { qiodevice_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qiodevice_metaobject_isbase) {
            qiodevice_metaobject_isbase = false;
            return QIODevice::metaObject();
        }
        auto metaobject_cb = qiodevice_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QIODevice::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qiodevice_metacast_isbase) {
            qiodevice_metacast_isbase = false;
            return QIODevice::qt_metacast(param1);
        }
        auto metacast_cb = qiodevice_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QIODevice::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qiodevice_metacall_isbase) {
            qiodevice_metacall_isbase = false;
            return QIODevice::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qiodevice_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QIODevice::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qiodevice_issequential_isbase) {
            qiodevice_issequential_isbase = false;
            return QIODevice::isSequential();
        }
        auto issequential_cb = qiodevice_issequential_callback;
        if (issequential_cb) {
            bool callback_ret = issequential_cb();
            return callback_ret;
        }
        return QIODevice::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode mode) override {
        if (qiodevice_open_isbase) {
            qiodevice_open_isbase = false;
            return QIODevice::open(mode);
        }
        auto open_cb = qiodevice_open_callback;
        if (open_cb) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = open_cb(this, cbval1);
            return callback_ret;
        }
        return QIODevice::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qiodevice_close_isbase) {
            qiodevice_close_isbase = false;
            QIODevice::close();
            return;
        }
        auto close_cb = qiodevice_close_callback;
        if (close_cb) {
            close_cb();
            return;
        }
        QIODevice::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qiodevice_pos_isbase) {
            qiodevice_pos_isbase = false;
            return QIODevice::pos();
        }
        auto pos_cb = qiodevice_pos_callback;
        if (pos_cb) {
            long long callback_ret = pos_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QIODevice::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qiodevice_size_isbase) {
            qiodevice_size_isbase = false;
            return QIODevice::size();
        }
        auto size_cb = qiodevice_size_callback;
        if (size_cb) {
            long long callback_ret = size_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QIODevice::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qiodevice_seek_isbase) {
            qiodevice_seek_isbase = false;
            return QIODevice::seek(pos);
        }
        auto seek_cb = qiodevice_seek_callback;
        if (seek_cb) {
            long long cbval1 = static_cast<long long>(pos);

            bool callback_ret = seek_cb(this, cbval1);
            return callback_ret;
        }
        return QIODevice::seek(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qiodevice_atend_isbase) {
            qiodevice_atend_isbase = false;
            return QIODevice::atEnd();
        }
        auto atend_cb = qiodevice_atend_callback;
        if (atend_cb) {
            bool callback_ret = atend_cb();
            return callback_ret;
        }
        return QIODevice::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qiodevice_reset_isbase) {
            qiodevice_reset_isbase = false;
            return QIODevice::reset();
        }
        auto reset_cb = qiodevice_reset_callback;
        if (reset_cb) {
            bool callback_ret = reset_cb();
            return callback_ret;
        }
        return QIODevice::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qiodevice_bytesavailable_isbase) {
            qiodevice_bytesavailable_isbase = false;
            return QIODevice::bytesAvailable();
        }
        auto bytesavailable_cb = qiodevice_bytesavailable_callback;
        if (bytesavailable_cb) {
            long long callback_ret = bytesavailable_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QIODevice::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qiodevice_bytestowrite_isbase) {
            qiodevice_bytestowrite_isbase = false;
            return QIODevice::bytesToWrite();
        }
        auto bytestowrite_cb = qiodevice_bytestowrite_callback;
        if (bytestowrite_cb) {
            long long callback_ret = bytestowrite_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QIODevice::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qiodevice_canreadline_isbase) {
            qiodevice_canreadline_isbase = false;
            return QIODevice::canReadLine();
        }
        auto canreadline_cb = qiodevice_canreadline_callback;
        if (canreadline_cb) {
            bool callback_ret = canreadline_cb();
            return callback_ret;
        }
        return QIODevice::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qiodevice_waitforreadyread_isbase) {
            qiodevice_waitforreadyread_isbase = false;
            return QIODevice::waitForReadyRead(msecs);
        }
        auto waitforreadyread_cb = qiodevice_waitforreadyread_callback;
        if (waitforreadyread_cb) {
            int cbval1 = msecs;

            bool callback_ret = waitforreadyread_cb(this, cbval1);
            return callback_ret;
        }
        return QIODevice::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qiodevice_waitforbyteswritten_isbase) {
            qiodevice_waitforbyteswritten_isbase = false;
            return QIODevice::waitForBytesWritten(msecs);
        }
        auto waitforbyteswritten_cb = qiodevice_waitforbyteswritten_callback;
        if (waitforbyteswritten_cb) {
            int cbval1 = msecs;

            bool callback_ret = waitforbyteswritten_cb(this, cbval1);
            return callback_ret;
        }
        return QIODevice::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        auto readdata_cb = qiodevice_readdata_callback;
        if (readdata_cb) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = readdata_cb(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qiodevice_readlinedata_isbase) {
            qiodevice_readlinedata_isbase = false;
            return QIODevice::readLineData(data, maxlen);
        }
        auto readlinedata_cb = qiodevice_readlinedata_callback;
        if (readlinedata_cb) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = readlinedata_cb(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QIODevice::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qiodevice_skipdata_isbase) {
            qiodevice_skipdata_isbase = false;
            return QIODevice::skipData(maxSize);
        }
        auto skipdata_cb = qiodevice_skipdata_callback;
        if (skipdata_cb) {
            long long cbval1 = static_cast<long long>(maxSize);

            long long callback_ret = skipdata_cb(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return QIODevice::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 lenVal) override {
        auto writedata_cb = qiodevice_writedata_callback;
        if (writedata_cb) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(lenVal);

            long long callback_ret = writedata_cb(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qiodevice_event_isbase) {
            qiodevice_event_isbase = false;
            return QIODevice::event(event);
        }
        auto event_cb = qiodevice_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QIODevice::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qiodevice_eventfilter_isbase) {
            qiodevice_eventfilter_isbase = false;
            return QIODevice::eventFilter(watched, event);
        }
        auto eventfilter_cb = qiodevice_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QIODevice::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qiodevice_timerevent_isbase) {
            qiodevice_timerevent_isbase = false;
            QIODevice::timerEvent(event);
            return;
        }
        auto timerevent_cb = qiodevice_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QIODevice::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qiodevice_childevent_isbase) {
            qiodevice_childevent_isbase = false;
            QIODevice::childEvent(event);
            return;
        }
        auto childevent_cb = qiodevice_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QIODevice::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qiodevice_customevent_isbase) {
            qiodevice_customevent_isbase = false;
            QIODevice::customEvent(event);
            return;
        }
        auto customevent_cb = qiodevice_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QIODevice::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qiodevice_connectnotify_isbase) {
            qiodevice_connectnotify_isbase = false;
            QIODevice::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qiodevice_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QIODevice::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qiodevice_disconnectnotify_isbase) {
            qiodevice_disconnectnotify_isbase = false;
            QIODevice::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qiodevice_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QIODevice::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (qiodevice_setopenmode_isbase) {
            qiodevice_setopenmode_isbase = false;
            QIODevice::setOpenMode(openMode);
            return;
        }
        auto setopenmode_cb = qiodevice_setopenmode_callback;
        if (setopenmode_cb) {
            int cbval1 = static_cast<int>(openMode);

            setopenmode_cb(this, cbval1);
            return;
        }
        QIODevice::setOpenMode(openMode);
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (qiodevice_seterrorstring_isbase) {
            qiodevice_seterrorstring_isbase = false;
            QIODevice::setErrorString(errorString);
            return;
        }
        auto seterrorstring_cb = qiodevice_seterrorstring_callback;
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
        QIODevice::setErrorString(errorString);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qiodevice_sender_isbase) {
            qiodevice_sender_isbase = false;
            return QIODevice::sender();
        }
        auto sender_cb = qiodevice_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QIODevice::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qiodevice_sendersignalindex_isbase) {
            qiodevice_sendersignalindex_isbase = false;
            return QIODevice::senderSignalIndex();
        }
        auto sendersignalindex_cb = qiodevice_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QIODevice::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qiodevice_receivers_isbase) {
            qiodevice_receivers_isbase = false;
            return QIODevice::receivers(signal);
        }
        auto receivers_cb = qiodevice_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QIODevice::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qiodevice_issignalconnected_isbase) {
            qiodevice_issignalconnected_isbase = false;
            return QIODevice::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qiodevice_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QIODevice::isSignalConnected(signal);
    }

    // Friend functions
    friend long long QIODevice_ReadData(QIODevice* self, char* data, long long maxlen);
    friend long long QIODevice_SuperReadData(QIODevice* self, char* data, long long maxlen);
    friend long long QIODevice_ReadLineData(QIODevice* self, char* data, long long maxlen);
    friend long long QIODevice_SuperReadLineData(QIODevice* self, char* data, long long maxlen);
    friend long long QIODevice_SkipData(QIODevice* self, long long maxSize);
    friend long long QIODevice_SuperSkipData(QIODevice* self, long long maxSize);
    friend long long QIODevice_WriteData(QIODevice* self, const char* data, long long lenVal);
    friend long long QIODevice_SuperWriteData(QIODevice* self, const char* data, long long lenVal);
    friend void QIODevice_TimerEvent(QIODevice* self, QTimerEvent* event);
    friend void QIODevice_SuperTimerEvent(QIODevice* self, QTimerEvent* event);
    friend void QIODevice_ChildEvent(QIODevice* self, QChildEvent* event);
    friend void QIODevice_SuperChildEvent(QIODevice* self, QChildEvent* event);
    friend void QIODevice_CustomEvent(QIODevice* self, QEvent* event);
    friend void QIODevice_SuperCustomEvent(QIODevice* self, QEvent* event);
    friend void QIODevice_ConnectNotify(QIODevice* self, const QMetaMethod* signal);
    friend void QIODevice_SuperConnectNotify(QIODevice* self, const QMetaMethod* signal);
    friend void QIODevice_DisconnectNotify(QIODevice* self, const QMetaMethod* signal);
    friend void QIODevice_SuperDisconnectNotify(QIODevice* self, const QMetaMethod* signal);
    friend void QIODevice_SetOpenMode(QIODevice* self, int openMode);
    friend void QIODevice_SuperSetOpenMode(QIODevice* self, int openMode);
    friend void QIODevice_SetErrorString(QIODevice* self, const libqt_string errorString);
    friend void QIODevice_SuperSetErrorString(QIODevice* self, const libqt_string errorString);
    friend QObject* QIODevice_Sender(const QIODevice* self);
    friend QObject* QIODevice_SuperSender(const QIODevice* self);
    friend int QIODevice_SenderSignalIndex(const QIODevice* self);
    friend int QIODevice_SuperSenderSignalIndex(const QIODevice* self);
    friend int QIODevice_Receivers(const QIODevice* self, const char* signal);
    friend int QIODevice_SuperReceivers(const QIODevice* self, const char* signal);
    friend bool QIODevice_IsSignalConnected(const QIODevice* self, const QMetaMethod* signal);
    friend bool QIODevice_SuperIsSignalConnected(const QIODevice* self, const QMetaMethod* signal);
};

#endif
