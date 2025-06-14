#pragma once
#ifndef SRCC_LIBVIRTUALQPROCESS_H
#define SRCC_LIBVIRTUALQPROCESS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QProcess so that we can call protected methods
class VirtualQProcess final : public QProcess {

  public:
    // Virtual class boolean flag
    bool isVirtualQProcess = true;

    // Virtual class public types (including callbacks)
    using QProcess_Metacall_Callback = int (*)(QProcess*, int, int, void**);
    using QProcess_Open_Callback = bool (*)(QProcess*, int);
    using QProcess_WaitForReadyRead_Callback = bool (*)(QProcess*, int);
    using QProcess_WaitForBytesWritten_Callback = bool (*)(QProcess*, int);
    using QProcess_BytesToWrite_Callback = long long (*)();
    using QProcess_IsSequential_Callback = bool (*)();
    using QProcess_Close_Callback = void (*)();
    using QProcess_ReadData_Callback = long long (*)(QProcess*, char*, long long);
    using QProcess_WriteData_Callback = long long (*)(QProcess*, const char*, long long);
    using QProcess_Pos_Callback = long long (*)();
    using QProcess_Size_Callback = long long (*)();
    using QProcess_Seek_Callback = bool (*)(QProcess*, long long);
    using QProcess_AtEnd_Callback = bool (*)();
    using QProcess_Reset_Callback = bool (*)();
    using QProcess_BytesAvailable_Callback = long long (*)();
    using QProcess_CanReadLine_Callback = bool (*)();
    using QProcess_ReadLineData_Callback = long long (*)(QProcess*, char*, long long);
    using QProcess_SkipData_Callback = long long (*)(QProcess*, long long);
    using QProcess_Event_Callback = bool (*)(QProcess*, QEvent*);
    using QProcess_EventFilter_Callback = bool (*)(QProcess*, QObject*, QEvent*);
    using QProcess_TimerEvent_Callback = void (*)(QProcess*, QTimerEvent*);
    using QProcess_ChildEvent_Callback = void (*)(QProcess*, QChildEvent*);
    using QProcess_CustomEvent_Callback = void (*)(QProcess*, QEvent*);
    using QProcess_ConnectNotify_Callback = void (*)(QProcess*, QMetaMethod*);
    using QProcess_DisconnectNotify_Callback = void (*)(QProcess*, QMetaMethod*);
    using QProcess_SetProcessState_Callback = void (*)(QProcess*, int);
    using QProcess_SetOpenMode_Callback = void (*)(QProcess*, int);
    using QProcess_SetErrorString_Callback = void (*)(QProcess*, libqt_string);
    using QProcess_Sender_Callback = QObject* (*)();
    using QProcess_SenderSignalIndex_Callback = int (*)();
    using QProcess_Receivers_Callback = int (*)(const QProcess*, const char*);
    using QProcess_IsSignalConnected_Callback = bool (*)(const QProcess*, QMetaMethod*);

  protected:
    // Instance callback storage
    QProcess_Metacall_Callback qprocess_metacall_callback = nullptr;
    QProcess_Open_Callback qprocess_open_callback = nullptr;
    QProcess_WaitForReadyRead_Callback qprocess_waitforreadyread_callback = nullptr;
    QProcess_WaitForBytesWritten_Callback qprocess_waitforbyteswritten_callback = nullptr;
    QProcess_BytesToWrite_Callback qprocess_bytestowrite_callback = nullptr;
    QProcess_IsSequential_Callback qprocess_issequential_callback = nullptr;
    QProcess_Close_Callback qprocess_close_callback = nullptr;
    QProcess_ReadData_Callback qprocess_readdata_callback = nullptr;
    QProcess_WriteData_Callback qprocess_writedata_callback = nullptr;
    QProcess_Pos_Callback qprocess_pos_callback = nullptr;
    QProcess_Size_Callback qprocess_size_callback = nullptr;
    QProcess_Seek_Callback qprocess_seek_callback = nullptr;
    QProcess_AtEnd_Callback qprocess_atend_callback = nullptr;
    QProcess_Reset_Callback qprocess_reset_callback = nullptr;
    QProcess_BytesAvailable_Callback qprocess_bytesavailable_callback = nullptr;
    QProcess_CanReadLine_Callback qprocess_canreadline_callback = nullptr;
    QProcess_ReadLineData_Callback qprocess_readlinedata_callback = nullptr;
    QProcess_SkipData_Callback qprocess_skipdata_callback = nullptr;
    QProcess_Event_Callback qprocess_event_callback = nullptr;
    QProcess_EventFilter_Callback qprocess_eventfilter_callback = nullptr;
    QProcess_TimerEvent_Callback qprocess_timerevent_callback = nullptr;
    QProcess_ChildEvent_Callback qprocess_childevent_callback = nullptr;
    QProcess_CustomEvent_Callback qprocess_customevent_callback = nullptr;
    QProcess_ConnectNotify_Callback qprocess_connectnotify_callback = nullptr;
    QProcess_DisconnectNotify_Callback qprocess_disconnectnotify_callback = nullptr;
    QProcess_SetProcessState_Callback qprocess_setprocessstate_callback = nullptr;
    QProcess_SetOpenMode_Callback qprocess_setopenmode_callback = nullptr;
    QProcess_SetErrorString_Callback qprocess_seterrorstring_callback = nullptr;
    QProcess_Sender_Callback qprocess_sender_callback = nullptr;
    QProcess_SenderSignalIndex_Callback qprocess_sendersignalindex_callback = nullptr;
    QProcess_Receivers_Callback qprocess_receivers_callback = nullptr;
    QProcess_IsSignalConnected_Callback qprocess_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qprocess_metacall_isbase = false;
    mutable bool qprocess_open_isbase = false;
    mutable bool qprocess_waitforreadyread_isbase = false;
    mutable bool qprocess_waitforbyteswritten_isbase = false;
    mutable bool qprocess_bytestowrite_isbase = false;
    mutable bool qprocess_issequential_isbase = false;
    mutable bool qprocess_close_isbase = false;
    mutable bool qprocess_readdata_isbase = false;
    mutable bool qprocess_writedata_isbase = false;
    mutable bool qprocess_pos_isbase = false;
    mutable bool qprocess_size_isbase = false;
    mutable bool qprocess_seek_isbase = false;
    mutable bool qprocess_atend_isbase = false;
    mutable bool qprocess_reset_isbase = false;
    mutable bool qprocess_bytesavailable_isbase = false;
    mutable bool qprocess_canreadline_isbase = false;
    mutable bool qprocess_readlinedata_isbase = false;
    mutable bool qprocess_skipdata_isbase = false;
    mutable bool qprocess_event_isbase = false;
    mutable bool qprocess_eventfilter_isbase = false;
    mutable bool qprocess_timerevent_isbase = false;
    mutable bool qprocess_childevent_isbase = false;
    mutable bool qprocess_customevent_isbase = false;
    mutable bool qprocess_connectnotify_isbase = false;
    mutable bool qprocess_disconnectnotify_isbase = false;
    mutable bool qprocess_setprocessstate_isbase = false;
    mutable bool qprocess_setopenmode_isbase = false;
    mutable bool qprocess_seterrorstring_isbase = false;
    mutable bool qprocess_sender_isbase = false;
    mutable bool qprocess_sendersignalindex_isbase = false;
    mutable bool qprocess_receivers_isbase = false;
    mutable bool qprocess_issignalconnected_isbase = false;

  public:
    VirtualQProcess() : QProcess(){};
    VirtualQProcess(QObject* parent) : QProcess(parent){};

    ~VirtualQProcess() {
        qprocess_metacall_callback = nullptr;
        qprocess_open_callback = nullptr;
        qprocess_waitforreadyread_callback = nullptr;
        qprocess_waitforbyteswritten_callback = nullptr;
        qprocess_bytestowrite_callback = nullptr;
        qprocess_issequential_callback = nullptr;
        qprocess_close_callback = nullptr;
        qprocess_readdata_callback = nullptr;
        qprocess_writedata_callback = nullptr;
        qprocess_pos_callback = nullptr;
        qprocess_size_callback = nullptr;
        qprocess_seek_callback = nullptr;
        qprocess_atend_callback = nullptr;
        qprocess_reset_callback = nullptr;
        qprocess_bytesavailable_callback = nullptr;
        qprocess_canreadline_callback = nullptr;
        qprocess_readlinedata_callback = nullptr;
        qprocess_skipdata_callback = nullptr;
        qprocess_event_callback = nullptr;
        qprocess_eventfilter_callback = nullptr;
        qprocess_timerevent_callback = nullptr;
        qprocess_childevent_callback = nullptr;
        qprocess_customevent_callback = nullptr;
        qprocess_connectnotify_callback = nullptr;
        qprocess_disconnectnotify_callback = nullptr;
        qprocess_setprocessstate_callback = nullptr;
        qprocess_setopenmode_callback = nullptr;
        qprocess_seterrorstring_callback = nullptr;
        qprocess_sender_callback = nullptr;
        qprocess_sendersignalindex_callback = nullptr;
        qprocess_receivers_callback = nullptr;
        qprocess_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQProcess_Metacall_Callback(QProcess_Metacall_Callback cb) { qprocess_metacall_callback = cb; }
    inline void setQProcess_Open_Callback(QProcess_Open_Callback cb) { qprocess_open_callback = cb; }
    inline void setQProcess_WaitForReadyRead_Callback(QProcess_WaitForReadyRead_Callback cb) { qprocess_waitforreadyread_callback = cb; }
    inline void setQProcess_WaitForBytesWritten_Callback(QProcess_WaitForBytesWritten_Callback cb) { qprocess_waitforbyteswritten_callback = cb; }
    inline void setQProcess_BytesToWrite_Callback(QProcess_BytesToWrite_Callback cb) { qprocess_bytestowrite_callback = cb; }
    inline void setQProcess_IsSequential_Callback(QProcess_IsSequential_Callback cb) { qprocess_issequential_callback = cb; }
    inline void setQProcess_Close_Callback(QProcess_Close_Callback cb) { qprocess_close_callback = cb; }
    inline void setQProcess_ReadData_Callback(QProcess_ReadData_Callback cb) { qprocess_readdata_callback = cb; }
    inline void setQProcess_WriteData_Callback(QProcess_WriteData_Callback cb) { qprocess_writedata_callback = cb; }
    inline void setQProcess_Pos_Callback(QProcess_Pos_Callback cb) { qprocess_pos_callback = cb; }
    inline void setQProcess_Size_Callback(QProcess_Size_Callback cb) { qprocess_size_callback = cb; }
    inline void setQProcess_Seek_Callback(QProcess_Seek_Callback cb) { qprocess_seek_callback = cb; }
    inline void setQProcess_AtEnd_Callback(QProcess_AtEnd_Callback cb) { qprocess_atend_callback = cb; }
    inline void setQProcess_Reset_Callback(QProcess_Reset_Callback cb) { qprocess_reset_callback = cb; }
    inline void setQProcess_BytesAvailable_Callback(QProcess_BytesAvailable_Callback cb) { qprocess_bytesavailable_callback = cb; }
    inline void setQProcess_CanReadLine_Callback(QProcess_CanReadLine_Callback cb) { qprocess_canreadline_callback = cb; }
    inline void setQProcess_ReadLineData_Callback(QProcess_ReadLineData_Callback cb) { qprocess_readlinedata_callback = cb; }
    inline void setQProcess_SkipData_Callback(QProcess_SkipData_Callback cb) { qprocess_skipdata_callback = cb; }
    inline void setQProcess_Event_Callback(QProcess_Event_Callback cb) { qprocess_event_callback = cb; }
    inline void setQProcess_EventFilter_Callback(QProcess_EventFilter_Callback cb) { qprocess_eventfilter_callback = cb; }
    inline void setQProcess_TimerEvent_Callback(QProcess_TimerEvent_Callback cb) { qprocess_timerevent_callback = cb; }
    inline void setQProcess_ChildEvent_Callback(QProcess_ChildEvent_Callback cb) { qprocess_childevent_callback = cb; }
    inline void setQProcess_CustomEvent_Callback(QProcess_CustomEvent_Callback cb) { qprocess_customevent_callback = cb; }
    inline void setQProcess_ConnectNotify_Callback(QProcess_ConnectNotify_Callback cb) { qprocess_connectnotify_callback = cb; }
    inline void setQProcess_DisconnectNotify_Callback(QProcess_DisconnectNotify_Callback cb) { qprocess_disconnectnotify_callback = cb; }
    inline void setQProcess_SetProcessState_Callback(QProcess_SetProcessState_Callback cb) { qprocess_setprocessstate_callback = cb; }
    inline void setQProcess_SetOpenMode_Callback(QProcess_SetOpenMode_Callback cb) { qprocess_setopenmode_callback = cb; }
    inline void setQProcess_SetErrorString_Callback(QProcess_SetErrorString_Callback cb) { qprocess_seterrorstring_callback = cb; }
    inline void setQProcess_Sender_Callback(QProcess_Sender_Callback cb) { qprocess_sender_callback = cb; }
    inline void setQProcess_SenderSignalIndex_Callback(QProcess_SenderSignalIndex_Callback cb) { qprocess_sendersignalindex_callback = cb; }
    inline void setQProcess_Receivers_Callback(QProcess_Receivers_Callback cb) { qprocess_receivers_callback = cb; }
    inline void setQProcess_IsSignalConnected_Callback(QProcess_IsSignalConnected_Callback cb) { qprocess_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQProcess_Metacall_IsBase(bool value) const { qprocess_metacall_isbase = value; }
    inline void setQProcess_Open_IsBase(bool value) const { qprocess_open_isbase = value; }
    inline void setQProcess_WaitForReadyRead_IsBase(bool value) const { qprocess_waitforreadyread_isbase = value; }
    inline void setQProcess_WaitForBytesWritten_IsBase(bool value) const { qprocess_waitforbyteswritten_isbase = value; }
    inline void setQProcess_BytesToWrite_IsBase(bool value) const { qprocess_bytestowrite_isbase = value; }
    inline void setQProcess_IsSequential_IsBase(bool value) const { qprocess_issequential_isbase = value; }
    inline void setQProcess_Close_IsBase(bool value) const { qprocess_close_isbase = value; }
    inline void setQProcess_ReadData_IsBase(bool value) const { qprocess_readdata_isbase = value; }
    inline void setQProcess_WriteData_IsBase(bool value) const { qprocess_writedata_isbase = value; }
    inline void setQProcess_Pos_IsBase(bool value) const { qprocess_pos_isbase = value; }
    inline void setQProcess_Size_IsBase(bool value) const { qprocess_size_isbase = value; }
    inline void setQProcess_Seek_IsBase(bool value) const { qprocess_seek_isbase = value; }
    inline void setQProcess_AtEnd_IsBase(bool value) const { qprocess_atend_isbase = value; }
    inline void setQProcess_Reset_IsBase(bool value) const { qprocess_reset_isbase = value; }
    inline void setQProcess_BytesAvailable_IsBase(bool value) const { qprocess_bytesavailable_isbase = value; }
    inline void setQProcess_CanReadLine_IsBase(bool value) const { qprocess_canreadline_isbase = value; }
    inline void setQProcess_ReadLineData_IsBase(bool value) const { qprocess_readlinedata_isbase = value; }
    inline void setQProcess_SkipData_IsBase(bool value) const { qprocess_skipdata_isbase = value; }
    inline void setQProcess_Event_IsBase(bool value) const { qprocess_event_isbase = value; }
    inline void setQProcess_EventFilter_IsBase(bool value) const { qprocess_eventfilter_isbase = value; }
    inline void setQProcess_TimerEvent_IsBase(bool value) const { qprocess_timerevent_isbase = value; }
    inline void setQProcess_ChildEvent_IsBase(bool value) const { qprocess_childevent_isbase = value; }
    inline void setQProcess_CustomEvent_IsBase(bool value) const { qprocess_customevent_isbase = value; }
    inline void setQProcess_ConnectNotify_IsBase(bool value) const { qprocess_connectnotify_isbase = value; }
    inline void setQProcess_DisconnectNotify_IsBase(bool value) const { qprocess_disconnectnotify_isbase = value; }
    inline void setQProcess_SetProcessState_IsBase(bool value) const { qprocess_setprocessstate_isbase = value; }
    inline void setQProcess_SetOpenMode_IsBase(bool value) const { qprocess_setopenmode_isbase = value; }
    inline void setQProcess_SetErrorString_IsBase(bool value) const { qprocess_seterrorstring_isbase = value; }
    inline void setQProcess_Sender_IsBase(bool value) const { qprocess_sender_isbase = value; }
    inline void setQProcess_SenderSignalIndex_IsBase(bool value) const { qprocess_sendersignalindex_isbase = value; }
    inline void setQProcess_Receivers_IsBase(bool value) const { qprocess_receivers_isbase = value; }
    inline void setQProcess_IsSignalConnected_IsBase(bool value) const { qprocess_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qprocess_metacall_isbase) {
            qprocess_metacall_isbase = false;
            return QProcess::qt_metacall(param1, param2, param3);
        } else if (qprocess_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qprocess_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QProcess::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode mode) override {
        if (qprocess_open_isbase) {
            qprocess_open_isbase = false;
            return QProcess::open(mode);
        } else if (qprocess_open_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = qprocess_open_callback(this, cbval1);
            return callback_ret;
        } else {
            return QProcess::open(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qprocess_waitforreadyread_isbase) {
            qprocess_waitforreadyread_isbase = false;
            return QProcess::waitForReadyRead(msecs);
        } else if (qprocess_waitforreadyread_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qprocess_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        } else {
            return QProcess::waitForReadyRead(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qprocess_waitforbyteswritten_isbase) {
            qprocess_waitforbyteswritten_isbase = false;
            return QProcess::waitForBytesWritten(msecs);
        } else if (qprocess_waitforbyteswritten_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qprocess_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        } else {
            return QProcess::waitForBytesWritten(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qprocess_bytestowrite_isbase) {
            qprocess_bytestowrite_isbase = false;
            return QProcess::bytesToWrite();
        } else if (qprocess_bytestowrite_callback != nullptr) {
            long long callback_ret = qprocess_bytestowrite_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QProcess::bytesToWrite();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qprocess_issequential_isbase) {
            qprocess_issequential_isbase = false;
            return QProcess::isSequential();
        } else if (qprocess_issequential_callback != nullptr) {
            bool callback_ret = qprocess_issequential_callback();
            return callback_ret;
        } else {
            return QProcess::isSequential();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qprocess_close_isbase) {
            qprocess_close_isbase = false;
            QProcess::close();
        } else if (qprocess_close_callback != nullptr) {
            qprocess_close_callback();
        } else {
            QProcess::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qprocess_readdata_isbase) {
            qprocess_readdata_isbase = false;
            return QProcess::readData(data, maxlen);
        } else if (qprocess_readdata_callback != nullptr) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = qprocess_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QProcess::readData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 lenVal) override {
        if (qprocess_writedata_isbase) {
            qprocess_writedata_isbase = false;
            return QProcess::writeData(data, lenVal);
        } else if (qprocess_writedata_callback != nullptr) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(lenVal);

            long long callback_ret = qprocess_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QProcess::writeData(data, lenVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qprocess_pos_isbase) {
            qprocess_pos_isbase = false;
            return QProcess::pos();
        } else if (qprocess_pos_callback != nullptr) {
            long long callback_ret = qprocess_pos_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QProcess::pos();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qprocess_size_isbase) {
            qprocess_size_isbase = false;
            return QProcess::size();
        } else if (qprocess_size_callback != nullptr) {
            long long callback_ret = qprocess_size_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QProcess::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qprocess_seek_isbase) {
            qprocess_seek_isbase = false;
            return QProcess::seek(pos);
        } else if (qprocess_seek_callback != nullptr) {
            long long cbval1 = static_cast<long long>(pos);

            bool callback_ret = qprocess_seek_callback(this, cbval1);
            return callback_ret;
        } else {
            return QProcess::seek(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qprocess_atend_isbase) {
            qprocess_atend_isbase = false;
            return QProcess::atEnd();
        } else if (qprocess_atend_callback != nullptr) {
            bool callback_ret = qprocess_atend_callback();
            return callback_ret;
        } else {
            return QProcess::atEnd();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qprocess_reset_isbase) {
            qprocess_reset_isbase = false;
            return QProcess::reset();
        } else if (qprocess_reset_callback != nullptr) {
            bool callback_ret = qprocess_reset_callback();
            return callback_ret;
        } else {
            return QProcess::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qprocess_bytesavailable_isbase) {
            qprocess_bytesavailable_isbase = false;
            return QProcess::bytesAvailable();
        } else if (qprocess_bytesavailable_callback != nullptr) {
            long long callback_ret = qprocess_bytesavailable_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QProcess::bytesAvailable();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qprocess_canreadline_isbase) {
            qprocess_canreadline_isbase = false;
            return QProcess::canReadLine();
        } else if (qprocess_canreadline_callback != nullptr) {
            bool callback_ret = qprocess_canreadline_callback();
            return callback_ret;
        } else {
            return QProcess::canReadLine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qprocess_readlinedata_isbase) {
            qprocess_readlinedata_isbase = false;
            return QProcess::readLineData(data, maxlen);
        } else if (qprocess_readlinedata_callback != nullptr) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = qprocess_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QProcess::readLineData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qprocess_skipdata_isbase) {
            qprocess_skipdata_isbase = false;
            return QProcess::skipData(maxSize);
        } else if (qprocess_skipdata_callback != nullptr) {
            long long cbval1 = static_cast<long long>(maxSize);

            long long callback_ret = qprocess_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        } else {
            return QProcess::skipData(maxSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qprocess_event_isbase) {
            qprocess_event_isbase = false;
            return QProcess::event(event);
        } else if (qprocess_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qprocess_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QProcess::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qprocess_eventfilter_isbase) {
            qprocess_eventfilter_isbase = false;
            return QProcess::eventFilter(watched, event);
        } else if (qprocess_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qprocess_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QProcess::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qprocess_timerevent_isbase) {
            qprocess_timerevent_isbase = false;
            QProcess::timerEvent(event);
        } else if (qprocess_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qprocess_timerevent_callback(this, cbval1);
        } else {
            QProcess::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qprocess_childevent_isbase) {
            qprocess_childevent_isbase = false;
            QProcess::childEvent(event);
        } else if (qprocess_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qprocess_childevent_callback(this, cbval1);
        } else {
            QProcess::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qprocess_customevent_isbase) {
            qprocess_customevent_isbase = false;
            QProcess::customEvent(event);
        } else if (qprocess_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qprocess_customevent_callback(this, cbval1);
        } else {
            QProcess::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qprocess_connectnotify_isbase) {
            qprocess_connectnotify_isbase = false;
            QProcess::connectNotify(signal);
        } else if (qprocess_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qprocess_connectnotify_callback(this, cbval1);
        } else {
            QProcess::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qprocess_disconnectnotify_isbase) {
            qprocess_disconnectnotify_isbase = false;
            QProcess::disconnectNotify(signal);
        } else if (qprocess_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qprocess_disconnectnotify_callback(this, cbval1);
        } else {
            QProcess::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProcessState(QProcess::ProcessState state) {
        if (qprocess_setprocessstate_isbase) {
            qprocess_setprocessstate_isbase = false;
            QProcess::setProcessState(state);
        } else if (qprocess_setprocessstate_callback != nullptr) {
            int cbval1 = static_cast<int>(state);

            qprocess_setprocessstate_callback(this, cbval1);
        } else {
            QProcess::setProcessState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (qprocess_setopenmode_isbase) {
            qprocess_setopenmode_isbase = false;
            QProcess::setOpenMode(openMode);
        } else if (qprocess_setopenmode_callback != nullptr) {
            int cbval1 = static_cast<int>(openMode);

            qprocess_setopenmode_callback(this, cbval1);
        } else {
            QProcess::setOpenMode(openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (qprocess_seterrorstring_isbase) {
            qprocess_seterrorstring_isbase = false;
            QProcess::setErrorString(errorString);
        } else if (qprocess_seterrorstring_callback != nullptr) {
            const QString errorString_ret = errorString;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorString_b = errorString_ret.toUtf8();
            libqt_string errorString_str;
            errorString_str.len = errorString_b.length();
            errorString_str.data = static_cast<const char*>(malloc((errorString_str.len + 1) * sizeof(char)));
            memcpy((void*)errorString_str.data, errorString_b.data(), errorString_str.len);
            ((char*)errorString_str.data)[errorString_str.len] = '\0';
            libqt_string cbval1 = errorString_str;

            qprocess_seterrorstring_callback(this, cbval1);
        } else {
            QProcess::setErrorString(errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qprocess_sender_isbase) {
            qprocess_sender_isbase = false;
            return QProcess::sender();
        } else if (qprocess_sender_callback != nullptr) {
            QObject* callback_ret = qprocess_sender_callback();
            return callback_ret;
        } else {
            return QProcess::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qprocess_sendersignalindex_isbase) {
            qprocess_sendersignalindex_isbase = false;
            return QProcess::senderSignalIndex();
        } else if (qprocess_sendersignalindex_callback != nullptr) {
            int callback_ret = qprocess_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QProcess::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qprocess_receivers_isbase) {
            qprocess_receivers_isbase = false;
            return QProcess::receivers(signal);
        } else if (qprocess_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qprocess_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QProcess::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qprocess_issignalconnected_isbase) {
            qprocess_issignalconnected_isbase = false;
            return QProcess::isSignalConnected(signal);
        } else if (qprocess_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qprocess_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QProcess::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend long long QProcess_ReadData(QProcess* self, char* data, long long maxlen);
    friend long long QProcess_QBaseReadData(QProcess* self, char* data, long long maxlen);
    friend long long QProcess_WriteData(QProcess* self, const char* data, long long lenVal);
    friend long long QProcess_QBaseWriteData(QProcess* self, const char* data, long long lenVal);
    friend long long QProcess_ReadLineData(QProcess* self, char* data, long long maxlen);
    friend long long QProcess_QBaseReadLineData(QProcess* self, char* data, long long maxlen);
    friend long long QProcess_SkipData(QProcess* self, long long maxSize);
    friend long long QProcess_QBaseSkipData(QProcess* self, long long maxSize);
    friend void QProcess_TimerEvent(QProcess* self, QTimerEvent* event);
    friend void QProcess_QBaseTimerEvent(QProcess* self, QTimerEvent* event);
    friend void QProcess_ChildEvent(QProcess* self, QChildEvent* event);
    friend void QProcess_QBaseChildEvent(QProcess* self, QChildEvent* event);
    friend void QProcess_CustomEvent(QProcess* self, QEvent* event);
    friend void QProcess_QBaseCustomEvent(QProcess* self, QEvent* event);
    friend void QProcess_ConnectNotify(QProcess* self, const QMetaMethod* signal);
    friend void QProcess_QBaseConnectNotify(QProcess* self, const QMetaMethod* signal);
    friend void QProcess_DisconnectNotify(QProcess* self, const QMetaMethod* signal);
    friend void QProcess_QBaseDisconnectNotify(QProcess* self, const QMetaMethod* signal);
    friend void QProcess_SetProcessState(QProcess* self, int state);
    friend void QProcess_QBaseSetProcessState(QProcess* self, int state);
    friend void QProcess_SetOpenMode(QProcess* self, int openMode);
    friend void QProcess_QBaseSetOpenMode(QProcess* self, int openMode);
    friend void QProcess_SetErrorString(QProcess* self, const libqt_string errorString);
    friend void QProcess_QBaseSetErrorString(QProcess* self, const libqt_string errorString);
    friend QObject* QProcess_Sender(const QProcess* self);
    friend QObject* QProcess_QBaseSender(const QProcess* self);
    friend int QProcess_SenderSignalIndex(const QProcess* self);
    friend int QProcess_QBaseSenderSignalIndex(const QProcess* self);
    friend int QProcess_Receivers(const QProcess* self, const char* signal);
    friend int QProcess_QBaseReceivers(const QProcess* self, const char* signal);
    friend bool QProcess_IsSignalConnected(const QProcess* self, const QMetaMethod* signal);
    friend bool QProcess_QBaseIsSignalConnected(const QProcess* self, const QMetaMethod* signal);
};

#endif
