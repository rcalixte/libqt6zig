#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQLOCALSOCKET_H
#define SRC_NETWORKC_LIBVIRTUALQLOCALSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QLocalSocket so that we can call protected methods
class VirtualQLocalSocket final : public QLocalSocket {

  public:
    // Virtual class boolean flag
    bool isVirtualQLocalSocket = true;

    // Virtual class public types (including callbacks)
    using QLocalSocket_Metacall_Callback = int (*)(QLocalSocket*, int, int, void**);
    using QLocalSocket_IsSequential_Callback = bool (*)();
    using QLocalSocket_BytesAvailable_Callback = long long (*)();
    using QLocalSocket_BytesToWrite_Callback = long long (*)();
    using QLocalSocket_CanReadLine_Callback = bool (*)();
    using QLocalSocket_Open_Callback = bool (*)(QLocalSocket*, int);
    using QLocalSocket_Close_Callback = void (*)();
    using QLocalSocket_WaitForBytesWritten_Callback = bool (*)(QLocalSocket*, int);
    using QLocalSocket_WaitForReadyRead_Callback = bool (*)(QLocalSocket*, int);
    using QLocalSocket_ReadData_Callback = long long (*)(QLocalSocket*, char*, long long);
    using QLocalSocket_ReadLineData_Callback = long long (*)(QLocalSocket*, char*, long long);
    using QLocalSocket_SkipData_Callback = long long (*)(QLocalSocket*, long long);
    using QLocalSocket_WriteData_Callback = long long (*)(QLocalSocket*, const char*, long long);
    using QLocalSocket_Pos_Callback = long long (*)();
    using QLocalSocket_Size_Callback = long long (*)();
    using QLocalSocket_Seek_Callback = bool (*)(QLocalSocket*, long long);
    using QLocalSocket_AtEnd_Callback = bool (*)();
    using QLocalSocket_Reset_Callback = bool (*)();
    using QLocalSocket_Event_Callback = bool (*)(QLocalSocket*, QEvent*);
    using QLocalSocket_EventFilter_Callback = bool (*)(QLocalSocket*, QObject*, QEvent*);
    using QLocalSocket_TimerEvent_Callback = void (*)(QLocalSocket*, QTimerEvent*);
    using QLocalSocket_ChildEvent_Callback = void (*)(QLocalSocket*, QChildEvent*);
    using QLocalSocket_CustomEvent_Callback = void (*)(QLocalSocket*, QEvent*);
    using QLocalSocket_ConnectNotify_Callback = void (*)(QLocalSocket*, QMetaMethod*);
    using QLocalSocket_DisconnectNotify_Callback = void (*)(QLocalSocket*, QMetaMethod*);
    using QLocalSocket_SetOpenMode_Callback = void (*)(QLocalSocket*, int);
    using QLocalSocket_SetErrorString_Callback = void (*)(QLocalSocket*, libqt_string);
    using QLocalSocket_Sender_Callback = QObject* (*)();
    using QLocalSocket_SenderSignalIndex_Callback = int (*)();
    using QLocalSocket_Receivers_Callback = int (*)(const QLocalSocket*, const char*);
    using QLocalSocket_IsSignalConnected_Callback = bool (*)(const QLocalSocket*, QMetaMethod*);

  protected:
    // Instance callback storage
    QLocalSocket_Metacall_Callback qlocalsocket_metacall_callback = nullptr;
    QLocalSocket_IsSequential_Callback qlocalsocket_issequential_callback = nullptr;
    QLocalSocket_BytesAvailable_Callback qlocalsocket_bytesavailable_callback = nullptr;
    QLocalSocket_BytesToWrite_Callback qlocalsocket_bytestowrite_callback = nullptr;
    QLocalSocket_CanReadLine_Callback qlocalsocket_canreadline_callback = nullptr;
    QLocalSocket_Open_Callback qlocalsocket_open_callback = nullptr;
    QLocalSocket_Close_Callback qlocalsocket_close_callback = nullptr;
    QLocalSocket_WaitForBytesWritten_Callback qlocalsocket_waitforbyteswritten_callback = nullptr;
    QLocalSocket_WaitForReadyRead_Callback qlocalsocket_waitforreadyread_callback = nullptr;
    QLocalSocket_ReadData_Callback qlocalsocket_readdata_callback = nullptr;
    QLocalSocket_ReadLineData_Callback qlocalsocket_readlinedata_callback = nullptr;
    QLocalSocket_SkipData_Callback qlocalsocket_skipdata_callback = nullptr;
    QLocalSocket_WriteData_Callback qlocalsocket_writedata_callback = nullptr;
    QLocalSocket_Pos_Callback qlocalsocket_pos_callback = nullptr;
    QLocalSocket_Size_Callback qlocalsocket_size_callback = nullptr;
    QLocalSocket_Seek_Callback qlocalsocket_seek_callback = nullptr;
    QLocalSocket_AtEnd_Callback qlocalsocket_atend_callback = nullptr;
    QLocalSocket_Reset_Callback qlocalsocket_reset_callback = nullptr;
    QLocalSocket_Event_Callback qlocalsocket_event_callback = nullptr;
    QLocalSocket_EventFilter_Callback qlocalsocket_eventfilter_callback = nullptr;
    QLocalSocket_TimerEvent_Callback qlocalsocket_timerevent_callback = nullptr;
    QLocalSocket_ChildEvent_Callback qlocalsocket_childevent_callback = nullptr;
    QLocalSocket_CustomEvent_Callback qlocalsocket_customevent_callback = nullptr;
    QLocalSocket_ConnectNotify_Callback qlocalsocket_connectnotify_callback = nullptr;
    QLocalSocket_DisconnectNotify_Callback qlocalsocket_disconnectnotify_callback = nullptr;
    QLocalSocket_SetOpenMode_Callback qlocalsocket_setopenmode_callback = nullptr;
    QLocalSocket_SetErrorString_Callback qlocalsocket_seterrorstring_callback = nullptr;
    QLocalSocket_Sender_Callback qlocalsocket_sender_callback = nullptr;
    QLocalSocket_SenderSignalIndex_Callback qlocalsocket_sendersignalindex_callback = nullptr;
    QLocalSocket_Receivers_Callback qlocalsocket_receivers_callback = nullptr;
    QLocalSocket_IsSignalConnected_Callback qlocalsocket_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qlocalsocket_metacall_isbase = false;
    mutable bool qlocalsocket_issequential_isbase = false;
    mutable bool qlocalsocket_bytesavailable_isbase = false;
    mutable bool qlocalsocket_bytestowrite_isbase = false;
    mutable bool qlocalsocket_canreadline_isbase = false;
    mutable bool qlocalsocket_open_isbase = false;
    mutable bool qlocalsocket_close_isbase = false;
    mutable bool qlocalsocket_waitforbyteswritten_isbase = false;
    mutable bool qlocalsocket_waitforreadyread_isbase = false;
    mutable bool qlocalsocket_readdata_isbase = false;
    mutable bool qlocalsocket_readlinedata_isbase = false;
    mutable bool qlocalsocket_skipdata_isbase = false;
    mutable bool qlocalsocket_writedata_isbase = false;
    mutable bool qlocalsocket_pos_isbase = false;
    mutable bool qlocalsocket_size_isbase = false;
    mutable bool qlocalsocket_seek_isbase = false;
    mutable bool qlocalsocket_atend_isbase = false;
    mutable bool qlocalsocket_reset_isbase = false;
    mutable bool qlocalsocket_event_isbase = false;
    mutable bool qlocalsocket_eventfilter_isbase = false;
    mutable bool qlocalsocket_timerevent_isbase = false;
    mutable bool qlocalsocket_childevent_isbase = false;
    mutable bool qlocalsocket_customevent_isbase = false;
    mutable bool qlocalsocket_connectnotify_isbase = false;
    mutable bool qlocalsocket_disconnectnotify_isbase = false;
    mutable bool qlocalsocket_setopenmode_isbase = false;
    mutable bool qlocalsocket_seterrorstring_isbase = false;
    mutable bool qlocalsocket_sender_isbase = false;
    mutable bool qlocalsocket_sendersignalindex_isbase = false;
    mutable bool qlocalsocket_receivers_isbase = false;
    mutable bool qlocalsocket_issignalconnected_isbase = false;

  public:
    VirtualQLocalSocket() : QLocalSocket(){};
    VirtualQLocalSocket(QObject* parent) : QLocalSocket(parent){};

    ~VirtualQLocalSocket() {
        qlocalsocket_metacall_callback = nullptr;
        qlocalsocket_issequential_callback = nullptr;
        qlocalsocket_bytesavailable_callback = nullptr;
        qlocalsocket_bytestowrite_callback = nullptr;
        qlocalsocket_canreadline_callback = nullptr;
        qlocalsocket_open_callback = nullptr;
        qlocalsocket_close_callback = nullptr;
        qlocalsocket_waitforbyteswritten_callback = nullptr;
        qlocalsocket_waitforreadyread_callback = nullptr;
        qlocalsocket_readdata_callback = nullptr;
        qlocalsocket_readlinedata_callback = nullptr;
        qlocalsocket_skipdata_callback = nullptr;
        qlocalsocket_writedata_callback = nullptr;
        qlocalsocket_pos_callback = nullptr;
        qlocalsocket_size_callback = nullptr;
        qlocalsocket_seek_callback = nullptr;
        qlocalsocket_atend_callback = nullptr;
        qlocalsocket_reset_callback = nullptr;
        qlocalsocket_event_callback = nullptr;
        qlocalsocket_eventfilter_callback = nullptr;
        qlocalsocket_timerevent_callback = nullptr;
        qlocalsocket_childevent_callback = nullptr;
        qlocalsocket_customevent_callback = nullptr;
        qlocalsocket_connectnotify_callback = nullptr;
        qlocalsocket_disconnectnotify_callback = nullptr;
        qlocalsocket_setopenmode_callback = nullptr;
        qlocalsocket_seterrorstring_callback = nullptr;
        qlocalsocket_sender_callback = nullptr;
        qlocalsocket_sendersignalindex_callback = nullptr;
        qlocalsocket_receivers_callback = nullptr;
        qlocalsocket_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQLocalSocket_Metacall_Callback(QLocalSocket_Metacall_Callback cb) { qlocalsocket_metacall_callback = cb; }
    inline void setQLocalSocket_IsSequential_Callback(QLocalSocket_IsSequential_Callback cb) { qlocalsocket_issequential_callback = cb; }
    inline void setQLocalSocket_BytesAvailable_Callback(QLocalSocket_BytesAvailable_Callback cb) { qlocalsocket_bytesavailable_callback = cb; }
    inline void setQLocalSocket_BytesToWrite_Callback(QLocalSocket_BytesToWrite_Callback cb) { qlocalsocket_bytestowrite_callback = cb; }
    inline void setQLocalSocket_CanReadLine_Callback(QLocalSocket_CanReadLine_Callback cb) { qlocalsocket_canreadline_callback = cb; }
    inline void setQLocalSocket_Open_Callback(QLocalSocket_Open_Callback cb) { qlocalsocket_open_callback = cb; }
    inline void setQLocalSocket_Close_Callback(QLocalSocket_Close_Callback cb) { qlocalsocket_close_callback = cb; }
    inline void setQLocalSocket_WaitForBytesWritten_Callback(QLocalSocket_WaitForBytesWritten_Callback cb) { qlocalsocket_waitforbyteswritten_callback = cb; }
    inline void setQLocalSocket_WaitForReadyRead_Callback(QLocalSocket_WaitForReadyRead_Callback cb) { qlocalsocket_waitforreadyread_callback = cb; }
    inline void setQLocalSocket_ReadData_Callback(QLocalSocket_ReadData_Callback cb) { qlocalsocket_readdata_callback = cb; }
    inline void setQLocalSocket_ReadLineData_Callback(QLocalSocket_ReadLineData_Callback cb) { qlocalsocket_readlinedata_callback = cb; }
    inline void setQLocalSocket_SkipData_Callback(QLocalSocket_SkipData_Callback cb) { qlocalsocket_skipdata_callback = cb; }
    inline void setQLocalSocket_WriteData_Callback(QLocalSocket_WriteData_Callback cb) { qlocalsocket_writedata_callback = cb; }
    inline void setQLocalSocket_Pos_Callback(QLocalSocket_Pos_Callback cb) { qlocalsocket_pos_callback = cb; }
    inline void setQLocalSocket_Size_Callback(QLocalSocket_Size_Callback cb) { qlocalsocket_size_callback = cb; }
    inline void setQLocalSocket_Seek_Callback(QLocalSocket_Seek_Callback cb) { qlocalsocket_seek_callback = cb; }
    inline void setQLocalSocket_AtEnd_Callback(QLocalSocket_AtEnd_Callback cb) { qlocalsocket_atend_callback = cb; }
    inline void setQLocalSocket_Reset_Callback(QLocalSocket_Reset_Callback cb) { qlocalsocket_reset_callback = cb; }
    inline void setQLocalSocket_Event_Callback(QLocalSocket_Event_Callback cb) { qlocalsocket_event_callback = cb; }
    inline void setQLocalSocket_EventFilter_Callback(QLocalSocket_EventFilter_Callback cb) { qlocalsocket_eventfilter_callback = cb; }
    inline void setQLocalSocket_TimerEvent_Callback(QLocalSocket_TimerEvent_Callback cb) { qlocalsocket_timerevent_callback = cb; }
    inline void setQLocalSocket_ChildEvent_Callback(QLocalSocket_ChildEvent_Callback cb) { qlocalsocket_childevent_callback = cb; }
    inline void setQLocalSocket_CustomEvent_Callback(QLocalSocket_CustomEvent_Callback cb) { qlocalsocket_customevent_callback = cb; }
    inline void setQLocalSocket_ConnectNotify_Callback(QLocalSocket_ConnectNotify_Callback cb) { qlocalsocket_connectnotify_callback = cb; }
    inline void setQLocalSocket_DisconnectNotify_Callback(QLocalSocket_DisconnectNotify_Callback cb) { qlocalsocket_disconnectnotify_callback = cb; }
    inline void setQLocalSocket_SetOpenMode_Callback(QLocalSocket_SetOpenMode_Callback cb) { qlocalsocket_setopenmode_callback = cb; }
    inline void setQLocalSocket_SetErrorString_Callback(QLocalSocket_SetErrorString_Callback cb) { qlocalsocket_seterrorstring_callback = cb; }
    inline void setQLocalSocket_Sender_Callback(QLocalSocket_Sender_Callback cb) { qlocalsocket_sender_callback = cb; }
    inline void setQLocalSocket_SenderSignalIndex_Callback(QLocalSocket_SenderSignalIndex_Callback cb) { qlocalsocket_sendersignalindex_callback = cb; }
    inline void setQLocalSocket_Receivers_Callback(QLocalSocket_Receivers_Callback cb) { qlocalsocket_receivers_callback = cb; }
    inline void setQLocalSocket_IsSignalConnected_Callback(QLocalSocket_IsSignalConnected_Callback cb) { qlocalsocket_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQLocalSocket_Metacall_IsBase(bool value) const { qlocalsocket_metacall_isbase = value; }
    inline void setQLocalSocket_IsSequential_IsBase(bool value) const { qlocalsocket_issequential_isbase = value; }
    inline void setQLocalSocket_BytesAvailable_IsBase(bool value) const { qlocalsocket_bytesavailable_isbase = value; }
    inline void setQLocalSocket_BytesToWrite_IsBase(bool value) const { qlocalsocket_bytestowrite_isbase = value; }
    inline void setQLocalSocket_CanReadLine_IsBase(bool value) const { qlocalsocket_canreadline_isbase = value; }
    inline void setQLocalSocket_Open_IsBase(bool value) const { qlocalsocket_open_isbase = value; }
    inline void setQLocalSocket_Close_IsBase(bool value) const { qlocalsocket_close_isbase = value; }
    inline void setQLocalSocket_WaitForBytesWritten_IsBase(bool value) const { qlocalsocket_waitforbyteswritten_isbase = value; }
    inline void setQLocalSocket_WaitForReadyRead_IsBase(bool value) const { qlocalsocket_waitforreadyread_isbase = value; }
    inline void setQLocalSocket_ReadData_IsBase(bool value) const { qlocalsocket_readdata_isbase = value; }
    inline void setQLocalSocket_ReadLineData_IsBase(bool value) const { qlocalsocket_readlinedata_isbase = value; }
    inline void setQLocalSocket_SkipData_IsBase(bool value) const { qlocalsocket_skipdata_isbase = value; }
    inline void setQLocalSocket_WriteData_IsBase(bool value) const { qlocalsocket_writedata_isbase = value; }
    inline void setQLocalSocket_Pos_IsBase(bool value) const { qlocalsocket_pos_isbase = value; }
    inline void setQLocalSocket_Size_IsBase(bool value) const { qlocalsocket_size_isbase = value; }
    inline void setQLocalSocket_Seek_IsBase(bool value) const { qlocalsocket_seek_isbase = value; }
    inline void setQLocalSocket_AtEnd_IsBase(bool value) const { qlocalsocket_atend_isbase = value; }
    inline void setQLocalSocket_Reset_IsBase(bool value) const { qlocalsocket_reset_isbase = value; }
    inline void setQLocalSocket_Event_IsBase(bool value) const { qlocalsocket_event_isbase = value; }
    inline void setQLocalSocket_EventFilter_IsBase(bool value) const { qlocalsocket_eventfilter_isbase = value; }
    inline void setQLocalSocket_TimerEvent_IsBase(bool value) const { qlocalsocket_timerevent_isbase = value; }
    inline void setQLocalSocket_ChildEvent_IsBase(bool value) const { qlocalsocket_childevent_isbase = value; }
    inline void setQLocalSocket_CustomEvent_IsBase(bool value) const { qlocalsocket_customevent_isbase = value; }
    inline void setQLocalSocket_ConnectNotify_IsBase(bool value) const { qlocalsocket_connectnotify_isbase = value; }
    inline void setQLocalSocket_DisconnectNotify_IsBase(bool value) const { qlocalsocket_disconnectnotify_isbase = value; }
    inline void setQLocalSocket_SetOpenMode_IsBase(bool value) const { qlocalsocket_setopenmode_isbase = value; }
    inline void setQLocalSocket_SetErrorString_IsBase(bool value) const { qlocalsocket_seterrorstring_isbase = value; }
    inline void setQLocalSocket_Sender_IsBase(bool value) const { qlocalsocket_sender_isbase = value; }
    inline void setQLocalSocket_SenderSignalIndex_IsBase(bool value) const { qlocalsocket_sendersignalindex_isbase = value; }
    inline void setQLocalSocket_Receivers_IsBase(bool value) const { qlocalsocket_receivers_isbase = value; }
    inline void setQLocalSocket_IsSignalConnected_IsBase(bool value) const { qlocalsocket_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlocalsocket_metacall_isbase) {
            qlocalsocket_metacall_isbase = false;
            return QLocalSocket::qt_metacall(param1, param2, param3);
        } else if (qlocalsocket_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qlocalsocket_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QLocalSocket::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qlocalsocket_issequential_isbase) {
            qlocalsocket_issequential_isbase = false;
            return QLocalSocket::isSequential();
        } else if (qlocalsocket_issequential_callback != nullptr) {
            bool callback_ret = qlocalsocket_issequential_callback();
            return callback_ret;
        } else {
            return QLocalSocket::isSequential();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qlocalsocket_bytesavailable_isbase) {
            qlocalsocket_bytesavailable_isbase = false;
            return QLocalSocket::bytesAvailable();
        } else if (qlocalsocket_bytesavailable_callback != nullptr) {
            long long callback_ret = qlocalsocket_bytesavailable_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QLocalSocket::bytesAvailable();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qlocalsocket_bytestowrite_isbase) {
            qlocalsocket_bytestowrite_isbase = false;
            return QLocalSocket::bytesToWrite();
        } else if (qlocalsocket_bytestowrite_callback != nullptr) {
            long long callback_ret = qlocalsocket_bytestowrite_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QLocalSocket::bytesToWrite();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qlocalsocket_canreadline_isbase) {
            qlocalsocket_canreadline_isbase = false;
            return QLocalSocket::canReadLine();
        } else if (qlocalsocket_canreadline_callback != nullptr) {
            bool callback_ret = qlocalsocket_canreadline_callback();
            return callback_ret;
        } else {
            return QLocalSocket::canReadLine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode openMode) override {
        if (qlocalsocket_open_isbase) {
            qlocalsocket_open_isbase = false;
            return QLocalSocket::open(openMode);
        } else if (qlocalsocket_open_callback != nullptr) {
            int cbval1 = static_cast<int>(openMode);

            bool callback_ret = qlocalsocket_open_callback(this, cbval1);
            return callback_ret;
        } else {
            return QLocalSocket::open(openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qlocalsocket_close_isbase) {
            qlocalsocket_close_isbase = false;
            QLocalSocket::close();
        } else if (qlocalsocket_close_callback != nullptr) {
            qlocalsocket_close_callback();
        } else {
            QLocalSocket::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qlocalsocket_waitforbyteswritten_isbase) {
            qlocalsocket_waitforbyteswritten_isbase = false;
            return QLocalSocket::waitForBytesWritten(msecs);
        } else if (qlocalsocket_waitforbyteswritten_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qlocalsocket_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        } else {
            return QLocalSocket::waitForBytesWritten(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qlocalsocket_waitforreadyread_isbase) {
            qlocalsocket_waitforreadyread_isbase = false;
            return QLocalSocket::waitForReadyRead(msecs);
        } else if (qlocalsocket_waitforreadyread_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qlocalsocket_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        } else {
            return QLocalSocket::waitForReadyRead(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* param1, long long param2) override {
        if (qlocalsocket_readdata_isbase) {
            qlocalsocket_readdata_isbase = false;
            return QLocalSocket::readData(param1, param2);
        } else if (qlocalsocket_readdata_callback != nullptr) {
            char* cbval1 = param1;
            long long cbval2 = param2;

            long long callback_ret = qlocalsocket_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QLocalSocket::readData(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxSize) override {
        if (qlocalsocket_readlinedata_isbase) {
            qlocalsocket_readlinedata_isbase = false;
            return QLocalSocket::readLineData(data, maxSize);
        } else if (qlocalsocket_readlinedata_callback != nullptr) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxSize);

            long long callback_ret = qlocalsocket_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QLocalSocket::readLineData(data, maxSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qlocalsocket_skipdata_isbase) {
            qlocalsocket_skipdata_isbase = false;
            return QLocalSocket::skipData(maxSize);
        } else if (qlocalsocket_skipdata_callback != nullptr) {
            long long cbval1 = static_cast<long long>(maxSize);

            long long callback_ret = qlocalsocket_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        } else {
            return QLocalSocket::skipData(maxSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* param1, long long param2) override {
        if (qlocalsocket_writedata_isbase) {
            qlocalsocket_writedata_isbase = false;
            return QLocalSocket::writeData(param1, param2);
        } else if (qlocalsocket_writedata_callback != nullptr) {
            const char* cbval1 = (const char*)param1;
            long long cbval2 = param2;

            long long callback_ret = qlocalsocket_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QLocalSocket::writeData(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qlocalsocket_pos_isbase) {
            qlocalsocket_pos_isbase = false;
            return QLocalSocket::pos();
        } else if (qlocalsocket_pos_callback != nullptr) {
            long long callback_ret = qlocalsocket_pos_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QLocalSocket::pos();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qlocalsocket_size_isbase) {
            qlocalsocket_size_isbase = false;
            return QLocalSocket::size();
        } else if (qlocalsocket_size_callback != nullptr) {
            long long callback_ret = qlocalsocket_size_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QLocalSocket::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qlocalsocket_seek_isbase) {
            qlocalsocket_seek_isbase = false;
            return QLocalSocket::seek(pos);
        } else if (qlocalsocket_seek_callback != nullptr) {
            long long cbval1 = static_cast<long long>(pos);

            bool callback_ret = qlocalsocket_seek_callback(this, cbval1);
            return callback_ret;
        } else {
            return QLocalSocket::seek(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qlocalsocket_atend_isbase) {
            qlocalsocket_atend_isbase = false;
            return QLocalSocket::atEnd();
        } else if (qlocalsocket_atend_callback != nullptr) {
            bool callback_ret = qlocalsocket_atend_callback();
            return callback_ret;
        } else {
            return QLocalSocket::atEnd();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qlocalsocket_reset_isbase) {
            qlocalsocket_reset_isbase = false;
            return QLocalSocket::reset();
        } else if (qlocalsocket_reset_callback != nullptr) {
            bool callback_ret = qlocalsocket_reset_callback();
            return callback_ret;
        } else {
            return QLocalSocket::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qlocalsocket_event_isbase) {
            qlocalsocket_event_isbase = false;
            return QLocalSocket::event(event);
        } else if (qlocalsocket_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qlocalsocket_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QLocalSocket::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlocalsocket_eventfilter_isbase) {
            qlocalsocket_eventfilter_isbase = false;
            return QLocalSocket::eventFilter(watched, event);
        } else if (qlocalsocket_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qlocalsocket_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QLocalSocket::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlocalsocket_timerevent_isbase) {
            qlocalsocket_timerevent_isbase = false;
            QLocalSocket::timerEvent(event);
        } else if (qlocalsocket_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qlocalsocket_timerevent_callback(this, cbval1);
        } else {
            QLocalSocket::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlocalsocket_childevent_isbase) {
            qlocalsocket_childevent_isbase = false;
            QLocalSocket::childEvent(event);
        } else if (qlocalsocket_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qlocalsocket_childevent_callback(this, cbval1);
        } else {
            QLocalSocket::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlocalsocket_customevent_isbase) {
            qlocalsocket_customevent_isbase = false;
            QLocalSocket::customEvent(event);
        } else if (qlocalsocket_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qlocalsocket_customevent_callback(this, cbval1);
        } else {
            QLocalSocket::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlocalsocket_connectnotify_isbase) {
            qlocalsocket_connectnotify_isbase = false;
            QLocalSocket::connectNotify(signal);
        } else if (qlocalsocket_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qlocalsocket_connectnotify_callback(this, cbval1);
        } else {
            QLocalSocket::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlocalsocket_disconnectnotify_isbase) {
            qlocalsocket_disconnectnotify_isbase = false;
            QLocalSocket::disconnectNotify(signal);
        } else if (qlocalsocket_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qlocalsocket_disconnectnotify_callback(this, cbval1);
        } else {
            QLocalSocket::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (qlocalsocket_setopenmode_isbase) {
            qlocalsocket_setopenmode_isbase = false;
            QLocalSocket::setOpenMode(openMode);
        } else if (qlocalsocket_setopenmode_callback != nullptr) {
            int cbval1 = static_cast<int>(openMode);

            qlocalsocket_setopenmode_callback(this, cbval1);
        } else {
            QLocalSocket::setOpenMode(openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (qlocalsocket_seterrorstring_isbase) {
            qlocalsocket_seterrorstring_isbase = false;
            QLocalSocket::setErrorString(errorString);
        } else if (qlocalsocket_seterrorstring_callback != nullptr) {
            const QString errorString_ret = errorString;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorString_b = errorString_ret.toUtf8();
            libqt_string errorString_str;
            errorString_str.len = errorString_b.length();
            errorString_str.data = static_cast<char*>(malloc((errorString_str.len + 1) * sizeof(char)));
            memcpy(errorString_str.data, errorString_b.data(), errorString_str.len);
            errorString_str.data[errorString_str.len] = '\0';
            libqt_string cbval1 = errorString_str;

            qlocalsocket_seterrorstring_callback(this, cbval1);
        } else {
            QLocalSocket::setErrorString(errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlocalsocket_sender_isbase) {
            qlocalsocket_sender_isbase = false;
            return QLocalSocket::sender();
        } else if (qlocalsocket_sender_callback != nullptr) {
            QObject* callback_ret = qlocalsocket_sender_callback();
            return callback_ret;
        } else {
            return QLocalSocket::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlocalsocket_sendersignalindex_isbase) {
            qlocalsocket_sendersignalindex_isbase = false;
            return QLocalSocket::senderSignalIndex();
        } else if (qlocalsocket_sendersignalindex_callback != nullptr) {
            int callback_ret = qlocalsocket_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QLocalSocket::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlocalsocket_receivers_isbase) {
            qlocalsocket_receivers_isbase = false;
            return QLocalSocket::receivers(signal);
        } else if (qlocalsocket_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qlocalsocket_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QLocalSocket::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlocalsocket_issignalconnected_isbase) {
            qlocalsocket_issignalconnected_isbase = false;
            return QLocalSocket::isSignalConnected(signal);
        } else if (qlocalsocket_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qlocalsocket_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QLocalSocket::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend long long QLocalSocket_ReadData(QLocalSocket* self, char* param1, long long param2);
    friend long long QLocalSocket_QBaseReadData(QLocalSocket* self, char* param1, long long param2);
    friend long long QLocalSocket_ReadLineData(QLocalSocket* self, char* data, long long maxSize);
    friend long long QLocalSocket_QBaseReadLineData(QLocalSocket* self, char* data, long long maxSize);
    friend long long QLocalSocket_SkipData(QLocalSocket* self, long long maxSize);
    friend long long QLocalSocket_QBaseSkipData(QLocalSocket* self, long long maxSize);
    friend long long QLocalSocket_WriteData(QLocalSocket* self, const char* param1, long long param2);
    friend long long QLocalSocket_QBaseWriteData(QLocalSocket* self, const char* param1, long long param2);
    friend void QLocalSocket_TimerEvent(QLocalSocket* self, QTimerEvent* event);
    friend void QLocalSocket_QBaseTimerEvent(QLocalSocket* self, QTimerEvent* event);
    friend void QLocalSocket_ChildEvent(QLocalSocket* self, QChildEvent* event);
    friend void QLocalSocket_QBaseChildEvent(QLocalSocket* self, QChildEvent* event);
    friend void QLocalSocket_CustomEvent(QLocalSocket* self, QEvent* event);
    friend void QLocalSocket_QBaseCustomEvent(QLocalSocket* self, QEvent* event);
    friend void QLocalSocket_ConnectNotify(QLocalSocket* self, const QMetaMethod* signal);
    friend void QLocalSocket_QBaseConnectNotify(QLocalSocket* self, const QMetaMethod* signal);
    friend void QLocalSocket_DisconnectNotify(QLocalSocket* self, const QMetaMethod* signal);
    friend void QLocalSocket_QBaseDisconnectNotify(QLocalSocket* self, const QMetaMethod* signal);
    friend void QLocalSocket_SetOpenMode(QLocalSocket* self, int openMode);
    friend void QLocalSocket_QBaseSetOpenMode(QLocalSocket* self, int openMode);
    friend void QLocalSocket_SetErrorString(QLocalSocket* self, const libqt_string errorString);
    friend void QLocalSocket_QBaseSetErrorString(QLocalSocket* self, const libqt_string errorString);
    friend QObject* QLocalSocket_Sender(const QLocalSocket* self);
    friend QObject* QLocalSocket_QBaseSender(const QLocalSocket* self);
    friend int QLocalSocket_SenderSignalIndex(const QLocalSocket* self);
    friend int QLocalSocket_QBaseSenderSignalIndex(const QLocalSocket* self);
    friend int QLocalSocket_Receivers(const QLocalSocket* self, const char* signal);
    friend int QLocalSocket_QBaseReceivers(const QLocalSocket* self, const char* signal);
    friend bool QLocalSocket_IsSignalConnected(const QLocalSocket* self, const QMetaMethod* signal);
    friend bool QLocalSocket_QBaseIsSignalConnected(const QLocalSocket* self, const QMetaMethod* signal);
};

#endif
