#pragma once
#ifndef SRCC_LIBVIRTUALQBUFFER_H
#define SRCC_LIBVIRTUALQBUFFER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QBuffer so that we can call protected methods
class VirtualQBuffer final : public QBuffer {

  public:
    // Virtual class boolean flag
    bool isVirtualQBuffer = true;

    // Virtual class public types (including callbacks)
    using QBuffer_Metacall_Callback = int (*)(QBuffer*, int, int, void**);
    using QBuffer_Open_Callback = bool (*)(QBuffer*, int);
    using QBuffer_Close_Callback = void (*)();
    using QBuffer_Size_Callback = long long (*)();
    using QBuffer_Pos_Callback = long long (*)();
    using QBuffer_Seek_Callback = bool (*)(QBuffer*, long long);
    using QBuffer_AtEnd_Callback = bool (*)();
    using QBuffer_CanReadLine_Callback = bool (*)();
    using QBuffer_ConnectNotify_Callback = void (*)(QBuffer*, QMetaMethod*);
    using QBuffer_DisconnectNotify_Callback = void (*)(QBuffer*, QMetaMethod*);
    using QBuffer_ReadData_Callback = long long (*)(QBuffer*, char*, long long);
    using QBuffer_WriteData_Callback = long long (*)(QBuffer*, const char*, long long);
    using QBuffer_IsSequential_Callback = bool (*)();
    using QBuffer_Reset_Callback = bool (*)();
    using QBuffer_BytesAvailable_Callback = long long (*)();
    using QBuffer_BytesToWrite_Callback = long long (*)();
    using QBuffer_WaitForReadyRead_Callback = bool (*)(QBuffer*, int);
    using QBuffer_WaitForBytesWritten_Callback = bool (*)(QBuffer*, int);
    using QBuffer_ReadLineData_Callback = long long (*)(QBuffer*, char*, long long);
    using QBuffer_SkipData_Callback = long long (*)(QBuffer*, long long);
    using QBuffer_Event_Callback = bool (*)(QBuffer*, QEvent*);
    using QBuffer_EventFilter_Callback = bool (*)(QBuffer*, QObject*, QEvent*);
    using QBuffer_TimerEvent_Callback = void (*)(QBuffer*, QTimerEvent*);
    using QBuffer_ChildEvent_Callback = void (*)(QBuffer*, QChildEvent*);
    using QBuffer_CustomEvent_Callback = void (*)(QBuffer*, QEvent*);
    using QBuffer_SetOpenMode_Callback = void (*)(QBuffer*, int);
    using QBuffer_SetErrorString_Callback = void (*)(QBuffer*, libqt_string);
    using QBuffer_Sender_Callback = QObject* (*)();
    using QBuffer_SenderSignalIndex_Callback = int (*)();
    using QBuffer_Receivers_Callback = int (*)(const QBuffer*, const char*);
    using QBuffer_IsSignalConnected_Callback = bool (*)(const QBuffer*, QMetaMethod*);

  protected:
    // Instance callback storage
    QBuffer_Metacall_Callback qbuffer_metacall_callback = nullptr;
    QBuffer_Open_Callback qbuffer_open_callback = nullptr;
    QBuffer_Close_Callback qbuffer_close_callback = nullptr;
    QBuffer_Size_Callback qbuffer_size_callback = nullptr;
    QBuffer_Pos_Callback qbuffer_pos_callback = nullptr;
    QBuffer_Seek_Callback qbuffer_seek_callback = nullptr;
    QBuffer_AtEnd_Callback qbuffer_atend_callback = nullptr;
    QBuffer_CanReadLine_Callback qbuffer_canreadline_callback = nullptr;
    QBuffer_ConnectNotify_Callback qbuffer_connectnotify_callback = nullptr;
    QBuffer_DisconnectNotify_Callback qbuffer_disconnectnotify_callback = nullptr;
    QBuffer_ReadData_Callback qbuffer_readdata_callback = nullptr;
    QBuffer_WriteData_Callback qbuffer_writedata_callback = nullptr;
    QBuffer_IsSequential_Callback qbuffer_issequential_callback = nullptr;
    QBuffer_Reset_Callback qbuffer_reset_callback = nullptr;
    QBuffer_BytesAvailable_Callback qbuffer_bytesavailable_callback = nullptr;
    QBuffer_BytesToWrite_Callback qbuffer_bytestowrite_callback = nullptr;
    QBuffer_WaitForReadyRead_Callback qbuffer_waitforreadyread_callback = nullptr;
    QBuffer_WaitForBytesWritten_Callback qbuffer_waitforbyteswritten_callback = nullptr;
    QBuffer_ReadLineData_Callback qbuffer_readlinedata_callback = nullptr;
    QBuffer_SkipData_Callback qbuffer_skipdata_callback = nullptr;
    QBuffer_Event_Callback qbuffer_event_callback = nullptr;
    QBuffer_EventFilter_Callback qbuffer_eventfilter_callback = nullptr;
    QBuffer_TimerEvent_Callback qbuffer_timerevent_callback = nullptr;
    QBuffer_ChildEvent_Callback qbuffer_childevent_callback = nullptr;
    QBuffer_CustomEvent_Callback qbuffer_customevent_callback = nullptr;
    QBuffer_SetOpenMode_Callback qbuffer_setopenmode_callback = nullptr;
    QBuffer_SetErrorString_Callback qbuffer_seterrorstring_callback = nullptr;
    QBuffer_Sender_Callback qbuffer_sender_callback = nullptr;
    QBuffer_SenderSignalIndex_Callback qbuffer_sendersignalindex_callback = nullptr;
    QBuffer_Receivers_Callback qbuffer_receivers_callback = nullptr;
    QBuffer_IsSignalConnected_Callback qbuffer_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qbuffer_metacall_isbase = false;
    mutable bool qbuffer_open_isbase = false;
    mutable bool qbuffer_close_isbase = false;
    mutable bool qbuffer_size_isbase = false;
    mutable bool qbuffer_pos_isbase = false;
    mutable bool qbuffer_seek_isbase = false;
    mutable bool qbuffer_atend_isbase = false;
    mutable bool qbuffer_canreadline_isbase = false;
    mutable bool qbuffer_connectnotify_isbase = false;
    mutable bool qbuffer_disconnectnotify_isbase = false;
    mutable bool qbuffer_readdata_isbase = false;
    mutable bool qbuffer_writedata_isbase = false;
    mutable bool qbuffer_issequential_isbase = false;
    mutable bool qbuffer_reset_isbase = false;
    mutable bool qbuffer_bytesavailable_isbase = false;
    mutable bool qbuffer_bytestowrite_isbase = false;
    mutable bool qbuffer_waitforreadyread_isbase = false;
    mutable bool qbuffer_waitforbyteswritten_isbase = false;
    mutable bool qbuffer_readlinedata_isbase = false;
    mutable bool qbuffer_skipdata_isbase = false;
    mutable bool qbuffer_event_isbase = false;
    mutable bool qbuffer_eventfilter_isbase = false;
    mutable bool qbuffer_timerevent_isbase = false;
    mutable bool qbuffer_childevent_isbase = false;
    mutable bool qbuffer_customevent_isbase = false;
    mutable bool qbuffer_setopenmode_isbase = false;
    mutable bool qbuffer_seterrorstring_isbase = false;
    mutable bool qbuffer_sender_isbase = false;
    mutable bool qbuffer_sendersignalindex_isbase = false;
    mutable bool qbuffer_receivers_isbase = false;
    mutable bool qbuffer_issignalconnected_isbase = false;

  public:
    VirtualQBuffer() : QBuffer() {};
    VirtualQBuffer(QObject* parent) : QBuffer(parent) {};

    ~VirtualQBuffer() {
        qbuffer_metacall_callback = nullptr;
        qbuffer_open_callback = nullptr;
        qbuffer_close_callback = nullptr;
        qbuffer_size_callback = nullptr;
        qbuffer_pos_callback = nullptr;
        qbuffer_seek_callback = nullptr;
        qbuffer_atend_callback = nullptr;
        qbuffer_canreadline_callback = nullptr;
        qbuffer_connectnotify_callback = nullptr;
        qbuffer_disconnectnotify_callback = nullptr;
        qbuffer_readdata_callback = nullptr;
        qbuffer_writedata_callback = nullptr;
        qbuffer_issequential_callback = nullptr;
        qbuffer_reset_callback = nullptr;
        qbuffer_bytesavailable_callback = nullptr;
        qbuffer_bytestowrite_callback = nullptr;
        qbuffer_waitforreadyread_callback = nullptr;
        qbuffer_waitforbyteswritten_callback = nullptr;
        qbuffer_readlinedata_callback = nullptr;
        qbuffer_skipdata_callback = nullptr;
        qbuffer_event_callback = nullptr;
        qbuffer_eventfilter_callback = nullptr;
        qbuffer_timerevent_callback = nullptr;
        qbuffer_childevent_callback = nullptr;
        qbuffer_customevent_callback = nullptr;
        qbuffer_setopenmode_callback = nullptr;
        qbuffer_seterrorstring_callback = nullptr;
        qbuffer_sender_callback = nullptr;
        qbuffer_sendersignalindex_callback = nullptr;
        qbuffer_receivers_callback = nullptr;
        qbuffer_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQBuffer_Metacall_Callback(QBuffer_Metacall_Callback cb) { qbuffer_metacall_callback = cb; }
    inline void setQBuffer_Open_Callback(QBuffer_Open_Callback cb) { qbuffer_open_callback = cb; }
    inline void setQBuffer_Close_Callback(QBuffer_Close_Callback cb) { qbuffer_close_callback = cb; }
    inline void setQBuffer_Size_Callback(QBuffer_Size_Callback cb) { qbuffer_size_callback = cb; }
    inline void setQBuffer_Pos_Callback(QBuffer_Pos_Callback cb) { qbuffer_pos_callback = cb; }
    inline void setQBuffer_Seek_Callback(QBuffer_Seek_Callback cb) { qbuffer_seek_callback = cb; }
    inline void setQBuffer_AtEnd_Callback(QBuffer_AtEnd_Callback cb) { qbuffer_atend_callback = cb; }
    inline void setQBuffer_CanReadLine_Callback(QBuffer_CanReadLine_Callback cb) { qbuffer_canreadline_callback = cb; }
    inline void setQBuffer_ConnectNotify_Callback(QBuffer_ConnectNotify_Callback cb) { qbuffer_connectnotify_callback = cb; }
    inline void setQBuffer_DisconnectNotify_Callback(QBuffer_DisconnectNotify_Callback cb) { qbuffer_disconnectnotify_callback = cb; }
    inline void setQBuffer_ReadData_Callback(QBuffer_ReadData_Callback cb) { qbuffer_readdata_callback = cb; }
    inline void setQBuffer_WriteData_Callback(QBuffer_WriteData_Callback cb) { qbuffer_writedata_callback = cb; }
    inline void setQBuffer_IsSequential_Callback(QBuffer_IsSequential_Callback cb) { qbuffer_issequential_callback = cb; }
    inline void setQBuffer_Reset_Callback(QBuffer_Reset_Callback cb) { qbuffer_reset_callback = cb; }
    inline void setQBuffer_BytesAvailable_Callback(QBuffer_BytesAvailable_Callback cb) { qbuffer_bytesavailable_callback = cb; }
    inline void setQBuffer_BytesToWrite_Callback(QBuffer_BytesToWrite_Callback cb) { qbuffer_bytestowrite_callback = cb; }
    inline void setQBuffer_WaitForReadyRead_Callback(QBuffer_WaitForReadyRead_Callback cb) { qbuffer_waitforreadyread_callback = cb; }
    inline void setQBuffer_WaitForBytesWritten_Callback(QBuffer_WaitForBytesWritten_Callback cb) { qbuffer_waitforbyteswritten_callback = cb; }
    inline void setQBuffer_ReadLineData_Callback(QBuffer_ReadLineData_Callback cb) { qbuffer_readlinedata_callback = cb; }
    inline void setQBuffer_SkipData_Callback(QBuffer_SkipData_Callback cb) { qbuffer_skipdata_callback = cb; }
    inline void setQBuffer_Event_Callback(QBuffer_Event_Callback cb) { qbuffer_event_callback = cb; }
    inline void setQBuffer_EventFilter_Callback(QBuffer_EventFilter_Callback cb) { qbuffer_eventfilter_callback = cb; }
    inline void setQBuffer_TimerEvent_Callback(QBuffer_TimerEvent_Callback cb) { qbuffer_timerevent_callback = cb; }
    inline void setQBuffer_ChildEvent_Callback(QBuffer_ChildEvent_Callback cb) { qbuffer_childevent_callback = cb; }
    inline void setQBuffer_CustomEvent_Callback(QBuffer_CustomEvent_Callback cb) { qbuffer_customevent_callback = cb; }
    inline void setQBuffer_SetOpenMode_Callback(QBuffer_SetOpenMode_Callback cb) { qbuffer_setopenmode_callback = cb; }
    inline void setQBuffer_SetErrorString_Callback(QBuffer_SetErrorString_Callback cb) { qbuffer_seterrorstring_callback = cb; }
    inline void setQBuffer_Sender_Callback(QBuffer_Sender_Callback cb) { qbuffer_sender_callback = cb; }
    inline void setQBuffer_SenderSignalIndex_Callback(QBuffer_SenderSignalIndex_Callback cb) { qbuffer_sendersignalindex_callback = cb; }
    inline void setQBuffer_Receivers_Callback(QBuffer_Receivers_Callback cb) { qbuffer_receivers_callback = cb; }
    inline void setQBuffer_IsSignalConnected_Callback(QBuffer_IsSignalConnected_Callback cb) { qbuffer_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQBuffer_Metacall_IsBase(bool value) const { qbuffer_metacall_isbase = value; }
    inline void setQBuffer_Open_IsBase(bool value) const { qbuffer_open_isbase = value; }
    inline void setQBuffer_Close_IsBase(bool value) const { qbuffer_close_isbase = value; }
    inline void setQBuffer_Size_IsBase(bool value) const { qbuffer_size_isbase = value; }
    inline void setQBuffer_Pos_IsBase(bool value) const { qbuffer_pos_isbase = value; }
    inline void setQBuffer_Seek_IsBase(bool value) const { qbuffer_seek_isbase = value; }
    inline void setQBuffer_AtEnd_IsBase(bool value) const { qbuffer_atend_isbase = value; }
    inline void setQBuffer_CanReadLine_IsBase(bool value) const { qbuffer_canreadline_isbase = value; }
    inline void setQBuffer_ConnectNotify_IsBase(bool value) const { qbuffer_connectnotify_isbase = value; }
    inline void setQBuffer_DisconnectNotify_IsBase(bool value) const { qbuffer_disconnectnotify_isbase = value; }
    inline void setQBuffer_ReadData_IsBase(bool value) const { qbuffer_readdata_isbase = value; }
    inline void setQBuffer_WriteData_IsBase(bool value) const { qbuffer_writedata_isbase = value; }
    inline void setQBuffer_IsSequential_IsBase(bool value) const { qbuffer_issequential_isbase = value; }
    inline void setQBuffer_Reset_IsBase(bool value) const { qbuffer_reset_isbase = value; }
    inline void setQBuffer_BytesAvailable_IsBase(bool value) const { qbuffer_bytesavailable_isbase = value; }
    inline void setQBuffer_BytesToWrite_IsBase(bool value) const { qbuffer_bytestowrite_isbase = value; }
    inline void setQBuffer_WaitForReadyRead_IsBase(bool value) const { qbuffer_waitforreadyread_isbase = value; }
    inline void setQBuffer_WaitForBytesWritten_IsBase(bool value) const { qbuffer_waitforbyteswritten_isbase = value; }
    inline void setQBuffer_ReadLineData_IsBase(bool value) const { qbuffer_readlinedata_isbase = value; }
    inline void setQBuffer_SkipData_IsBase(bool value) const { qbuffer_skipdata_isbase = value; }
    inline void setQBuffer_Event_IsBase(bool value) const { qbuffer_event_isbase = value; }
    inline void setQBuffer_EventFilter_IsBase(bool value) const { qbuffer_eventfilter_isbase = value; }
    inline void setQBuffer_TimerEvent_IsBase(bool value) const { qbuffer_timerevent_isbase = value; }
    inline void setQBuffer_ChildEvent_IsBase(bool value) const { qbuffer_childevent_isbase = value; }
    inline void setQBuffer_CustomEvent_IsBase(bool value) const { qbuffer_customevent_isbase = value; }
    inline void setQBuffer_SetOpenMode_IsBase(bool value) const { qbuffer_setopenmode_isbase = value; }
    inline void setQBuffer_SetErrorString_IsBase(bool value) const { qbuffer_seterrorstring_isbase = value; }
    inline void setQBuffer_Sender_IsBase(bool value) const { qbuffer_sender_isbase = value; }
    inline void setQBuffer_SenderSignalIndex_IsBase(bool value) const { qbuffer_sendersignalindex_isbase = value; }
    inline void setQBuffer_Receivers_IsBase(bool value) const { qbuffer_receivers_isbase = value; }
    inline void setQBuffer_IsSignalConnected_IsBase(bool value) const { qbuffer_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbuffer_metacall_isbase) {
            qbuffer_metacall_isbase = false;
            return QBuffer::qt_metacall(param1, param2, param3);
        } else if (qbuffer_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qbuffer_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QBuffer::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QFlags<QIODeviceBase::OpenModeFlag> openMode) override {
        if (qbuffer_open_isbase) {
            qbuffer_open_isbase = false;
            return QBuffer::open(openMode);
        } else if (qbuffer_open_callback != nullptr) {
            int cbval1 = static_cast<int>(openMode);

            bool callback_ret = qbuffer_open_callback(this, cbval1);
            return callback_ret;
        } else {
            return QBuffer::open(openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qbuffer_close_isbase) {
            qbuffer_close_isbase = false;
            QBuffer::close();
        } else if (qbuffer_close_callback != nullptr) {
            qbuffer_close_callback();
        } else {
            QBuffer::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qbuffer_size_isbase) {
            qbuffer_size_isbase = false;
            return QBuffer::size();
        } else if (qbuffer_size_callback != nullptr) {
            long long callback_ret = qbuffer_size_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QBuffer::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qbuffer_pos_isbase) {
            qbuffer_pos_isbase = false;
            return QBuffer::pos();
        } else if (qbuffer_pos_callback != nullptr) {
            long long callback_ret = qbuffer_pos_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QBuffer::pos();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 off) override {
        if (qbuffer_seek_isbase) {
            qbuffer_seek_isbase = false;
            return QBuffer::seek(off);
        } else if (qbuffer_seek_callback != nullptr) {
            long long cbval1 = static_cast<long long>(off);

            bool callback_ret = qbuffer_seek_callback(this, cbval1);
            return callback_ret;
        } else {
            return QBuffer::seek(off);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qbuffer_atend_isbase) {
            qbuffer_atend_isbase = false;
            return QBuffer::atEnd();
        } else if (qbuffer_atend_callback != nullptr) {
            bool callback_ret = qbuffer_atend_callback();
            return callback_ret;
        } else {
            return QBuffer::atEnd();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qbuffer_canreadline_isbase) {
            qbuffer_canreadline_isbase = false;
            return QBuffer::canReadLine();
        } else if (qbuffer_canreadline_callback != nullptr) {
            bool callback_ret = qbuffer_canreadline_callback();
            return callback_ret;
        } else {
            return QBuffer::canReadLine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& param1) override {
        if (qbuffer_connectnotify_isbase) {
            qbuffer_connectnotify_isbase = false;
            QBuffer::connectNotify(param1);
        } else if (qbuffer_connectnotify_callback != nullptr) {
            const QMetaMethod& param1_ret = param1;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&param1_ret);

            qbuffer_connectnotify_callback(this, cbval1);
        } else {
            QBuffer::connectNotify(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& param1) override {
        if (qbuffer_disconnectnotify_isbase) {
            qbuffer_disconnectnotify_isbase = false;
            QBuffer::disconnectNotify(param1);
        } else if (qbuffer_disconnectnotify_callback != nullptr) {
            const QMetaMethod& param1_ret = param1;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&param1_ret);

            qbuffer_disconnectnotify_callback(this, cbval1);
        } else {
            QBuffer::disconnectNotify(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qbuffer_readdata_isbase) {
            qbuffer_readdata_isbase = false;
            return QBuffer::readData(data, maxlen);
        } else if (qbuffer_readdata_callback != nullptr) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = qbuffer_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QBuffer::readData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 lenVal) override {
        if (qbuffer_writedata_isbase) {
            qbuffer_writedata_isbase = false;
            return QBuffer::writeData(data, lenVal);
        } else if (qbuffer_writedata_callback != nullptr) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(lenVal);

            long long callback_ret = qbuffer_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QBuffer::writeData(data, lenVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qbuffer_issequential_isbase) {
            qbuffer_issequential_isbase = false;
            return QBuffer::isSequential();
        } else if (qbuffer_issequential_callback != nullptr) {
            bool callback_ret = qbuffer_issequential_callback();
            return callback_ret;
        } else {
            return QBuffer::isSequential();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qbuffer_reset_isbase) {
            qbuffer_reset_isbase = false;
            return QBuffer::reset();
        } else if (qbuffer_reset_callback != nullptr) {
            bool callback_ret = qbuffer_reset_callback();
            return callback_ret;
        } else {
            return QBuffer::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qbuffer_bytesavailable_isbase) {
            qbuffer_bytesavailable_isbase = false;
            return QBuffer::bytesAvailable();
        } else if (qbuffer_bytesavailable_callback != nullptr) {
            long long callback_ret = qbuffer_bytesavailable_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QBuffer::bytesAvailable();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qbuffer_bytestowrite_isbase) {
            qbuffer_bytestowrite_isbase = false;
            return QBuffer::bytesToWrite();
        } else if (qbuffer_bytestowrite_callback != nullptr) {
            long long callback_ret = qbuffer_bytestowrite_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QBuffer::bytesToWrite();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qbuffer_waitforreadyread_isbase) {
            qbuffer_waitforreadyread_isbase = false;
            return QBuffer::waitForReadyRead(msecs);
        } else if (qbuffer_waitforreadyread_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qbuffer_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        } else {
            return QBuffer::waitForReadyRead(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qbuffer_waitforbyteswritten_isbase) {
            qbuffer_waitforbyteswritten_isbase = false;
            return QBuffer::waitForBytesWritten(msecs);
        } else if (qbuffer_waitforbyteswritten_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qbuffer_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        } else {
            return QBuffer::waitForBytesWritten(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qbuffer_readlinedata_isbase) {
            qbuffer_readlinedata_isbase = false;
            return QBuffer::readLineData(data, maxlen);
        } else if (qbuffer_readlinedata_callback != nullptr) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = qbuffer_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QBuffer::readLineData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qbuffer_skipdata_isbase) {
            qbuffer_skipdata_isbase = false;
            return QBuffer::skipData(maxSize);
        } else if (qbuffer_skipdata_callback != nullptr) {
            long long cbval1 = static_cast<long long>(maxSize);

            long long callback_ret = qbuffer_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        } else {
            return QBuffer::skipData(maxSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbuffer_event_isbase) {
            qbuffer_event_isbase = false;
            return QBuffer::event(event);
        } else if (qbuffer_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qbuffer_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QBuffer::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbuffer_eventfilter_isbase) {
            qbuffer_eventfilter_isbase = false;
            return QBuffer::eventFilter(watched, event);
        } else if (qbuffer_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qbuffer_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QBuffer::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbuffer_timerevent_isbase) {
            qbuffer_timerevent_isbase = false;
            QBuffer::timerEvent(event);
        } else if (qbuffer_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qbuffer_timerevent_callback(this, cbval1);
        } else {
            QBuffer::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbuffer_childevent_isbase) {
            qbuffer_childevent_isbase = false;
            QBuffer::childEvent(event);
        } else if (qbuffer_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qbuffer_childevent_callback(this, cbval1);
        } else {
            QBuffer::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbuffer_customevent_isbase) {
            qbuffer_customevent_isbase = false;
            QBuffer::customEvent(event);
        } else if (qbuffer_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qbuffer_customevent_callback(this, cbval1);
        } else {
            QBuffer::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (qbuffer_setopenmode_isbase) {
            qbuffer_setopenmode_isbase = false;
            QBuffer::setOpenMode(openMode);
        } else if (qbuffer_setopenmode_callback != nullptr) {
            int cbval1 = static_cast<int>(openMode);

            qbuffer_setopenmode_callback(this, cbval1);
        } else {
            QBuffer::setOpenMode(openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (qbuffer_seterrorstring_isbase) {
            qbuffer_seterrorstring_isbase = false;
            QBuffer::setErrorString(errorString);
        } else if (qbuffer_seterrorstring_callback != nullptr) {
            const QString errorString_ret = errorString;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorString_b = errorString_ret.toUtf8();
            libqt_string errorString_str;
            errorString_str.len = errorString_b.length();
            errorString_str.data = static_cast<const char*>(malloc(errorString_str.len + 1));
            memcpy((void*)errorString_str.data, errorString_b.data(), errorString_str.len);
            ((char*)errorString_str.data)[errorString_str.len] = '\0';
            libqt_string cbval1 = errorString_str;

            qbuffer_seterrorstring_callback(this, cbval1);
        } else {
            QBuffer::setErrorString(errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qbuffer_sender_isbase) {
            qbuffer_sender_isbase = false;
            return QBuffer::sender();
        } else if (qbuffer_sender_callback != nullptr) {
            QObject* callback_ret = qbuffer_sender_callback();
            return callback_ret;
        } else {
            return QBuffer::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qbuffer_sendersignalindex_isbase) {
            qbuffer_sendersignalindex_isbase = false;
            return QBuffer::senderSignalIndex();
        } else if (qbuffer_sendersignalindex_callback != nullptr) {
            int callback_ret = qbuffer_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QBuffer::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qbuffer_receivers_isbase) {
            qbuffer_receivers_isbase = false;
            return QBuffer::receivers(signal);
        } else if (qbuffer_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qbuffer_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QBuffer::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qbuffer_issignalconnected_isbase) {
            qbuffer_issignalconnected_isbase = false;
            return QBuffer::isSignalConnected(signal);
        } else if (qbuffer_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qbuffer_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QBuffer::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QBuffer_ConnectNotify(QBuffer* self, const QMetaMethod* param1);
    friend void QBuffer_QBaseConnectNotify(QBuffer* self, const QMetaMethod* param1);
    friend void QBuffer_DisconnectNotify(QBuffer* self, const QMetaMethod* param1);
    friend void QBuffer_QBaseDisconnectNotify(QBuffer* self, const QMetaMethod* param1);
    friend long long QBuffer_ReadData(QBuffer* self, char* data, long long maxlen);
    friend long long QBuffer_QBaseReadData(QBuffer* self, char* data, long long maxlen);
    friend long long QBuffer_WriteData(QBuffer* self, const char* data, long long lenVal);
    friend long long QBuffer_QBaseWriteData(QBuffer* self, const char* data, long long lenVal);
    friend long long QBuffer_ReadLineData(QBuffer* self, char* data, long long maxlen);
    friend long long QBuffer_QBaseReadLineData(QBuffer* self, char* data, long long maxlen);
    friend long long QBuffer_SkipData(QBuffer* self, long long maxSize);
    friend long long QBuffer_QBaseSkipData(QBuffer* self, long long maxSize);
    friend void QBuffer_TimerEvent(QBuffer* self, QTimerEvent* event);
    friend void QBuffer_QBaseTimerEvent(QBuffer* self, QTimerEvent* event);
    friend void QBuffer_ChildEvent(QBuffer* self, QChildEvent* event);
    friend void QBuffer_QBaseChildEvent(QBuffer* self, QChildEvent* event);
    friend void QBuffer_CustomEvent(QBuffer* self, QEvent* event);
    friend void QBuffer_QBaseCustomEvent(QBuffer* self, QEvent* event);
    friend void QBuffer_SetOpenMode(QBuffer* self, int openMode);
    friend void QBuffer_QBaseSetOpenMode(QBuffer* self, int openMode);
    friend void QBuffer_SetErrorString(QBuffer* self, const libqt_string errorString);
    friend void QBuffer_QBaseSetErrorString(QBuffer* self, const libqt_string errorString);
    friend QObject* QBuffer_Sender(const QBuffer* self);
    friend QObject* QBuffer_QBaseSender(const QBuffer* self);
    friend int QBuffer_SenderSignalIndex(const QBuffer* self);
    friend int QBuffer_QBaseSenderSignalIndex(const QBuffer* self);
    friend int QBuffer_Receivers(const QBuffer* self, const char* signal);
    friend int QBuffer_QBaseReceivers(const QBuffer* self, const char* signal);
    friend bool QBuffer_IsSignalConnected(const QBuffer* self, const QMetaMethod* signal);
    friend bool QBuffer_QBaseIsSignalConnected(const QBuffer* self, const QMetaMethod* signal);
};

#endif
