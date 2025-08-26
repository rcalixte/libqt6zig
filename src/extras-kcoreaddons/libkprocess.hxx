#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKPROCESS_H
#define SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKPROCESS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KProcess so that we can call protected methods
class VirtualKProcess final : public KProcess {

  public:
    // Virtual class boolean flag
    bool isVirtualKProcess = true;

    // Virtual class public types (including callbacks)
    using KProcess_Metacall_Callback = int (*)(KProcess*, int, int, void**);
    using KProcess_Open_Callback = bool (*)(KProcess*, int);
    using KProcess_WaitForReadyRead_Callback = bool (*)(KProcess*, int);
    using KProcess_WaitForBytesWritten_Callback = bool (*)(KProcess*, int);
    using KProcess_BytesToWrite_Callback = long long (*)();
    using KProcess_IsSequential_Callback = bool (*)();
    using KProcess_Close_Callback = void (*)();
    using KProcess_ReadData_Callback = long long (*)(KProcess*, char*, long long);
    using KProcess_WriteData_Callback = long long (*)(KProcess*, const char*, long long);
    using KProcess_Pos_Callback = long long (*)();
    using KProcess_Size_Callback = long long (*)();
    using KProcess_Seek_Callback = bool (*)(KProcess*, long long);
    using KProcess_AtEnd_Callback = bool (*)();
    using KProcess_Reset_Callback = bool (*)();
    using KProcess_BytesAvailable_Callback = long long (*)();
    using KProcess_CanReadLine_Callback = bool (*)();
    using KProcess_ReadLineData_Callback = long long (*)(KProcess*, char*, long long);
    using KProcess_SkipData_Callback = long long (*)(KProcess*, long long);
    using KProcess_Event_Callback = bool (*)(KProcess*, QEvent*);
    using KProcess_EventFilter_Callback = bool (*)(KProcess*, QObject*, QEvent*);
    using KProcess_TimerEvent_Callback = void (*)(KProcess*, QTimerEvent*);
    using KProcess_ChildEvent_Callback = void (*)(KProcess*, QChildEvent*);
    using KProcess_CustomEvent_Callback = void (*)(KProcess*, QEvent*);
    using KProcess_ConnectNotify_Callback = void (*)(KProcess*, QMetaMethod*);
    using KProcess_DisconnectNotify_Callback = void (*)(KProcess*, QMetaMethod*);
    using KProcess_SetProcessState_Callback = void (*)(KProcess*, int);
    using KProcess_SetOpenMode_Callback = void (*)(KProcess*, int);
    using KProcess_SetErrorString_Callback = void (*)(KProcess*, libqt_string);
    using KProcess_Sender_Callback = QObject* (*)();
    using KProcess_SenderSignalIndex_Callback = int (*)();
    using KProcess_Receivers_Callback = int (*)(const KProcess*, const char*);
    using KProcess_IsSignalConnected_Callback = bool (*)(const KProcess*, QMetaMethod*);

  protected:
    // Instance callback storage
    KProcess_Metacall_Callback kprocess_metacall_callback = nullptr;
    KProcess_Open_Callback kprocess_open_callback = nullptr;
    KProcess_WaitForReadyRead_Callback kprocess_waitforreadyread_callback = nullptr;
    KProcess_WaitForBytesWritten_Callback kprocess_waitforbyteswritten_callback = nullptr;
    KProcess_BytesToWrite_Callback kprocess_bytestowrite_callback = nullptr;
    KProcess_IsSequential_Callback kprocess_issequential_callback = nullptr;
    KProcess_Close_Callback kprocess_close_callback = nullptr;
    KProcess_ReadData_Callback kprocess_readdata_callback = nullptr;
    KProcess_WriteData_Callback kprocess_writedata_callback = nullptr;
    KProcess_Pos_Callback kprocess_pos_callback = nullptr;
    KProcess_Size_Callback kprocess_size_callback = nullptr;
    KProcess_Seek_Callback kprocess_seek_callback = nullptr;
    KProcess_AtEnd_Callback kprocess_atend_callback = nullptr;
    KProcess_Reset_Callback kprocess_reset_callback = nullptr;
    KProcess_BytesAvailable_Callback kprocess_bytesavailable_callback = nullptr;
    KProcess_CanReadLine_Callback kprocess_canreadline_callback = nullptr;
    KProcess_ReadLineData_Callback kprocess_readlinedata_callback = nullptr;
    KProcess_SkipData_Callback kprocess_skipdata_callback = nullptr;
    KProcess_Event_Callback kprocess_event_callback = nullptr;
    KProcess_EventFilter_Callback kprocess_eventfilter_callback = nullptr;
    KProcess_TimerEvent_Callback kprocess_timerevent_callback = nullptr;
    KProcess_ChildEvent_Callback kprocess_childevent_callback = nullptr;
    KProcess_CustomEvent_Callback kprocess_customevent_callback = nullptr;
    KProcess_ConnectNotify_Callback kprocess_connectnotify_callback = nullptr;
    KProcess_DisconnectNotify_Callback kprocess_disconnectnotify_callback = nullptr;
    KProcess_SetProcessState_Callback kprocess_setprocessstate_callback = nullptr;
    KProcess_SetOpenMode_Callback kprocess_setopenmode_callback = nullptr;
    KProcess_SetErrorString_Callback kprocess_seterrorstring_callback = nullptr;
    KProcess_Sender_Callback kprocess_sender_callback = nullptr;
    KProcess_SenderSignalIndex_Callback kprocess_sendersignalindex_callback = nullptr;
    KProcess_Receivers_Callback kprocess_receivers_callback = nullptr;
    KProcess_IsSignalConnected_Callback kprocess_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kprocess_metacall_isbase = false;
    mutable bool kprocess_open_isbase = false;
    mutable bool kprocess_waitforreadyread_isbase = false;
    mutable bool kprocess_waitforbyteswritten_isbase = false;
    mutable bool kprocess_bytestowrite_isbase = false;
    mutable bool kprocess_issequential_isbase = false;
    mutable bool kprocess_close_isbase = false;
    mutable bool kprocess_readdata_isbase = false;
    mutable bool kprocess_writedata_isbase = false;
    mutable bool kprocess_pos_isbase = false;
    mutable bool kprocess_size_isbase = false;
    mutable bool kprocess_seek_isbase = false;
    mutable bool kprocess_atend_isbase = false;
    mutable bool kprocess_reset_isbase = false;
    mutable bool kprocess_bytesavailable_isbase = false;
    mutable bool kprocess_canreadline_isbase = false;
    mutable bool kprocess_readlinedata_isbase = false;
    mutable bool kprocess_skipdata_isbase = false;
    mutable bool kprocess_event_isbase = false;
    mutable bool kprocess_eventfilter_isbase = false;
    mutable bool kprocess_timerevent_isbase = false;
    mutable bool kprocess_childevent_isbase = false;
    mutable bool kprocess_customevent_isbase = false;
    mutable bool kprocess_connectnotify_isbase = false;
    mutable bool kprocess_disconnectnotify_isbase = false;
    mutable bool kprocess_setprocessstate_isbase = false;
    mutable bool kprocess_setopenmode_isbase = false;
    mutable bool kprocess_seterrorstring_isbase = false;
    mutable bool kprocess_sender_isbase = false;
    mutable bool kprocess_sendersignalindex_isbase = false;
    mutable bool kprocess_receivers_isbase = false;
    mutable bool kprocess_issignalconnected_isbase = false;

  public:
    VirtualKProcess() : KProcess() {};
    VirtualKProcess(QObject* parent) : KProcess(parent) {};

    ~VirtualKProcess() {
        kprocess_metacall_callback = nullptr;
        kprocess_open_callback = nullptr;
        kprocess_waitforreadyread_callback = nullptr;
        kprocess_waitforbyteswritten_callback = nullptr;
        kprocess_bytestowrite_callback = nullptr;
        kprocess_issequential_callback = nullptr;
        kprocess_close_callback = nullptr;
        kprocess_readdata_callback = nullptr;
        kprocess_writedata_callback = nullptr;
        kprocess_pos_callback = nullptr;
        kprocess_size_callback = nullptr;
        kprocess_seek_callback = nullptr;
        kprocess_atend_callback = nullptr;
        kprocess_reset_callback = nullptr;
        kprocess_bytesavailable_callback = nullptr;
        kprocess_canreadline_callback = nullptr;
        kprocess_readlinedata_callback = nullptr;
        kprocess_skipdata_callback = nullptr;
        kprocess_event_callback = nullptr;
        kprocess_eventfilter_callback = nullptr;
        kprocess_timerevent_callback = nullptr;
        kprocess_childevent_callback = nullptr;
        kprocess_customevent_callback = nullptr;
        kprocess_connectnotify_callback = nullptr;
        kprocess_disconnectnotify_callback = nullptr;
        kprocess_setprocessstate_callback = nullptr;
        kprocess_setopenmode_callback = nullptr;
        kprocess_seterrorstring_callback = nullptr;
        kprocess_sender_callback = nullptr;
        kprocess_sendersignalindex_callback = nullptr;
        kprocess_receivers_callback = nullptr;
        kprocess_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKProcess_Metacall_Callback(KProcess_Metacall_Callback cb) { kprocess_metacall_callback = cb; }
    inline void setKProcess_Open_Callback(KProcess_Open_Callback cb) { kprocess_open_callback = cb; }
    inline void setKProcess_WaitForReadyRead_Callback(KProcess_WaitForReadyRead_Callback cb) { kprocess_waitforreadyread_callback = cb; }
    inline void setKProcess_WaitForBytesWritten_Callback(KProcess_WaitForBytesWritten_Callback cb) { kprocess_waitforbyteswritten_callback = cb; }
    inline void setKProcess_BytesToWrite_Callback(KProcess_BytesToWrite_Callback cb) { kprocess_bytestowrite_callback = cb; }
    inline void setKProcess_IsSequential_Callback(KProcess_IsSequential_Callback cb) { kprocess_issequential_callback = cb; }
    inline void setKProcess_Close_Callback(KProcess_Close_Callback cb) { kprocess_close_callback = cb; }
    inline void setKProcess_ReadData_Callback(KProcess_ReadData_Callback cb) { kprocess_readdata_callback = cb; }
    inline void setKProcess_WriteData_Callback(KProcess_WriteData_Callback cb) { kprocess_writedata_callback = cb; }
    inline void setKProcess_Pos_Callback(KProcess_Pos_Callback cb) { kprocess_pos_callback = cb; }
    inline void setKProcess_Size_Callback(KProcess_Size_Callback cb) { kprocess_size_callback = cb; }
    inline void setKProcess_Seek_Callback(KProcess_Seek_Callback cb) { kprocess_seek_callback = cb; }
    inline void setKProcess_AtEnd_Callback(KProcess_AtEnd_Callback cb) { kprocess_atend_callback = cb; }
    inline void setKProcess_Reset_Callback(KProcess_Reset_Callback cb) { kprocess_reset_callback = cb; }
    inline void setKProcess_BytesAvailable_Callback(KProcess_BytesAvailable_Callback cb) { kprocess_bytesavailable_callback = cb; }
    inline void setKProcess_CanReadLine_Callback(KProcess_CanReadLine_Callback cb) { kprocess_canreadline_callback = cb; }
    inline void setKProcess_ReadLineData_Callback(KProcess_ReadLineData_Callback cb) { kprocess_readlinedata_callback = cb; }
    inline void setKProcess_SkipData_Callback(KProcess_SkipData_Callback cb) { kprocess_skipdata_callback = cb; }
    inline void setKProcess_Event_Callback(KProcess_Event_Callback cb) { kprocess_event_callback = cb; }
    inline void setKProcess_EventFilter_Callback(KProcess_EventFilter_Callback cb) { kprocess_eventfilter_callback = cb; }
    inline void setKProcess_TimerEvent_Callback(KProcess_TimerEvent_Callback cb) { kprocess_timerevent_callback = cb; }
    inline void setKProcess_ChildEvent_Callback(KProcess_ChildEvent_Callback cb) { kprocess_childevent_callback = cb; }
    inline void setKProcess_CustomEvent_Callback(KProcess_CustomEvent_Callback cb) { kprocess_customevent_callback = cb; }
    inline void setKProcess_ConnectNotify_Callback(KProcess_ConnectNotify_Callback cb) { kprocess_connectnotify_callback = cb; }
    inline void setKProcess_DisconnectNotify_Callback(KProcess_DisconnectNotify_Callback cb) { kprocess_disconnectnotify_callback = cb; }
    inline void setKProcess_SetProcessState_Callback(KProcess_SetProcessState_Callback cb) { kprocess_setprocessstate_callback = cb; }
    inline void setKProcess_SetOpenMode_Callback(KProcess_SetOpenMode_Callback cb) { kprocess_setopenmode_callback = cb; }
    inline void setKProcess_SetErrorString_Callback(KProcess_SetErrorString_Callback cb) { kprocess_seterrorstring_callback = cb; }
    inline void setKProcess_Sender_Callback(KProcess_Sender_Callback cb) { kprocess_sender_callback = cb; }
    inline void setKProcess_SenderSignalIndex_Callback(KProcess_SenderSignalIndex_Callback cb) { kprocess_sendersignalindex_callback = cb; }
    inline void setKProcess_Receivers_Callback(KProcess_Receivers_Callback cb) { kprocess_receivers_callback = cb; }
    inline void setKProcess_IsSignalConnected_Callback(KProcess_IsSignalConnected_Callback cb) { kprocess_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKProcess_Metacall_IsBase(bool value) const { kprocess_metacall_isbase = value; }
    inline void setKProcess_Open_IsBase(bool value) const { kprocess_open_isbase = value; }
    inline void setKProcess_WaitForReadyRead_IsBase(bool value) const { kprocess_waitforreadyread_isbase = value; }
    inline void setKProcess_WaitForBytesWritten_IsBase(bool value) const { kprocess_waitforbyteswritten_isbase = value; }
    inline void setKProcess_BytesToWrite_IsBase(bool value) const { kprocess_bytestowrite_isbase = value; }
    inline void setKProcess_IsSequential_IsBase(bool value) const { kprocess_issequential_isbase = value; }
    inline void setKProcess_Close_IsBase(bool value) const { kprocess_close_isbase = value; }
    inline void setKProcess_ReadData_IsBase(bool value) const { kprocess_readdata_isbase = value; }
    inline void setKProcess_WriteData_IsBase(bool value) const { kprocess_writedata_isbase = value; }
    inline void setKProcess_Pos_IsBase(bool value) const { kprocess_pos_isbase = value; }
    inline void setKProcess_Size_IsBase(bool value) const { kprocess_size_isbase = value; }
    inline void setKProcess_Seek_IsBase(bool value) const { kprocess_seek_isbase = value; }
    inline void setKProcess_AtEnd_IsBase(bool value) const { kprocess_atend_isbase = value; }
    inline void setKProcess_Reset_IsBase(bool value) const { kprocess_reset_isbase = value; }
    inline void setKProcess_BytesAvailable_IsBase(bool value) const { kprocess_bytesavailable_isbase = value; }
    inline void setKProcess_CanReadLine_IsBase(bool value) const { kprocess_canreadline_isbase = value; }
    inline void setKProcess_ReadLineData_IsBase(bool value) const { kprocess_readlinedata_isbase = value; }
    inline void setKProcess_SkipData_IsBase(bool value) const { kprocess_skipdata_isbase = value; }
    inline void setKProcess_Event_IsBase(bool value) const { kprocess_event_isbase = value; }
    inline void setKProcess_EventFilter_IsBase(bool value) const { kprocess_eventfilter_isbase = value; }
    inline void setKProcess_TimerEvent_IsBase(bool value) const { kprocess_timerevent_isbase = value; }
    inline void setKProcess_ChildEvent_IsBase(bool value) const { kprocess_childevent_isbase = value; }
    inline void setKProcess_CustomEvent_IsBase(bool value) const { kprocess_customevent_isbase = value; }
    inline void setKProcess_ConnectNotify_IsBase(bool value) const { kprocess_connectnotify_isbase = value; }
    inline void setKProcess_DisconnectNotify_IsBase(bool value) const { kprocess_disconnectnotify_isbase = value; }
    inline void setKProcess_SetProcessState_IsBase(bool value) const { kprocess_setprocessstate_isbase = value; }
    inline void setKProcess_SetOpenMode_IsBase(bool value) const { kprocess_setopenmode_isbase = value; }
    inline void setKProcess_SetErrorString_IsBase(bool value) const { kprocess_seterrorstring_isbase = value; }
    inline void setKProcess_Sender_IsBase(bool value) const { kprocess_sender_isbase = value; }
    inline void setKProcess_SenderSignalIndex_IsBase(bool value) const { kprocess_sendersignalindex_isbase = value; }
    inline void setKProcess_Receivers_IsBase(bool value) const { kprocess_receivers_isbase = value; }
    inline void setKProcess_IsSignalConnected_IsBase(bool value) const { kprocess_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kprocess_metacall_isbase) {
            kprocess_metacall_isbase = false;
            return KProcess::qt_metacall(param1, param2, param3);
        } else if (kprocess_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kprocess_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KProcess::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QProcess::OpenMode mode) override {
        if (kprocess_open_isbase) {
            kprocess_open_isbase = false;
            return KProcess::open(mode);
        } else if (kprocess_open_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = kprocess_open_callback(this, cbval1);
            return callback_ret;
        } else {
            return KProcess::open(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (kprocess_waitforreadyread_isbase) {
            kprocess_waitforreadyread_isbase = false;
            return KProcess::waitForReadyRead(msecs);
        } else if (kprocess_waitforreadyread_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = kprocess_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        } else {
            return KProcess::waitForReadyRead(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (kprocess_waitforbyteswritten_isbase) {
            kprocess_waitforbyteswritten_isbase = false;
            return KProcess::waitForBytesWritten(msecs);
        } else if (kprocess_waitforbyteswritten_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = kprocess_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        } else {
            return KProcess::waitForBytesWritten(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (kprocess_bytestowrite_isbase) {
            kprocess_bytestowrite_isbase = false;
            return KProcess::bytesToWrite();
        } else if (kprocess_bytestowrite_callback != nullptr) {
            long long callback_ret = kprocess_bytestowrite_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return KProcess::bytesToWrite();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (kprocess_issequential_isbase) {
            kprocess_issequential_isbase = false;
            return KProcess::isSequential();
        } else if (kprocess_issequential_callback != nullptr) {
            bool callback_ret = kprocess_issequential_callback();
            return callback_ret;
        } else {
            return KProcess::isSequential();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (kprocess_close_isbase) {
            kprocess_close_isbase = false;
            KProcess::close();
        } else if (kprocess_close_callback != nullptr) {
            kprocess_close_callback();
        } else {
            KProcess::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (kprocess_readdata_isbase) {
            kprocess_readdata_isbase = false;
            return KProcess::readData(data, maxlen);
        } else if (kprocess_readdata_callback != nullptr) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = kprocess_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return KProcess::readData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 lenVal) override {
        if (kprocess_writedata_isbase) {
            kprocess_writedata_isbase = false;
            return KProcess::writeData(data, lenVal);
        } else if (kprocess_writedata_callback != nullptr) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(lenVal);

            long long callback_ret = kprocess_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return KProcess::writeData(data, lenVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (kprocess_pos_isbase) {
            kprocess_pos_isbase = false;
            return KProcess::pos();
        } else if (kprocess_pos_callback != nullptr) {
            long long callback_ret = kprocess_pos_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return KProcess::pos();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (kprocess_size_isbase) {
            kprocess_size_isbase = false;
            return KProcess::size();
        } else if (kprocess_size_callback != nullptr) {
            long long callback_ret = kprocess_size_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return KProcess::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (kprocess_seek_isbase) {
            kprocess_seek_isbase = false;
            return KProcess::seek(pos);
        } else if (kprocess_seek_callback != nullptr) {
            long long cbval1 = static_cast<long long>(pos);

            bool callback_ret = kprocess_seek_callback(this, cbval1);
            return callback_ret;
        } else {
            return KProcess::seek(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (kprocess_atend_isbase) {
            kprocess_atend_isbase = false;
            return KProcess::atEnd();
        } else if (kprocess_atend_callback != nullptr) {
            bool callback_ret = kprocess_atend_callback();
            return callback_ret;
        } else {
            return KProcess::atEnd();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (kprocess_reset_isbase) {
            kprocess_reset_isbase = false;
            return KProcess::reset();
        } else if (kprocess_reset_callback != nullptr) {
            bool callback_ret = kprocess_reset_callback();
            return callback_ret;
        } else {
            return KProcess::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (kprocess_bytesavailable_isbase) {
            kprocess_bytesavailable_isbase = false;
            return KProcess::bytesAvailable();
        } else if (kprocess_bytesavailable_callback != nullptr) {
            long long callback_ret = kprocess_bytesavailable_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return KProcess::bytesAvailable();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (kprocess_canreadline_isbase) {
            kprocess_canreadline_isbase = false;
            return KProcess::canReadLine();
        } else if (kprocess_canreadline_callback != nullptr) {
            bool callback_ret = kprocess_canreadline_callback();
            return callback_ret;
        } else {
            return KProcess::canReadLine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (kprocess_readlinedata_isbase) {
            kprocess_readlinedata_isbase = false;
            return KProcess::readLineData(data, maxlen);
        } else if (kprocess_readlinedata_callback != nullptr) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = kprocess_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return KProcess::readLineData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (kprocess_skipdata_isbase) {
            kprocess_skipdata_isbase = false;
            return KProcess::skipData(maxSize);
        } else if (kprocess_skipdata_callback != nullptr) {
            long long cbval1 = static_cast<long long>(maxSize);

            long long callback_ret = kprocess_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        } else {
            return KProcess::skipData(maxSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kprocess_event_isbase) {
            kprocess_event_isbase = false;
            return KProcess::event(event);
        } else if (kprocess_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kprocess_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KProcess::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kprocess_eventfilter_isbase) {
            kprocess_eventfilter_isbase = false;
            return KProcess::eventFilter(watched, event);
        } else if (kprocess_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kprocess_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KProcess::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kprocess_timerevent_isbase) {
            kprocess_timerevent_isbase = false;
            KProcess::timerEvent(event);
        } else if (kprocess_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kprocess_timerevent_callback(this, cbval1);
        } else {
            KProcess::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kprocess_childevent_isbase) {
            kprocess_childevent_isbase = false;
            KProcess::childEvent(event);
        } else if (kprocess_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kprocess_childevent_callback(this, cbval1);
        } else {
            KProcess::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kprocess_customevent_isbase) {
            kprocess_customevent_isbase = false;
            KProcess::customEvent(event);
        } else if (kprocess_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kprocess_customevent_callback(this, cbval1);
        } else {
            KProcess::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kprocess_connectnotify_isbase) {
            kprocess_connectnotify_isbase = false;
            KProcess::connectNotify(signal);
        } else if (kprocess_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kprocess_connectnotify_callback(this, cbval1);
        } else {
            KProcess::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kprocess_disconnectnotify_isbase) {
            kprocess_disconnectnotify_isbase = false;
            KProcess::disconnectNotify(signal);
        } else if (kprocess_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kprocess_disconnectnotify_callback(this, cbval1);
        } else {
            KProcess::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setProcessState(QProcess::ProcessState state) {
        if (kprocess_setprocessstate_isbase) {
            kprocess_setprocessstate_isbase = false;
            KProcess::setProcessState(state);
        } else if (kprocess_setprocessstate_callback != nullptr) {
            int cbval1 = static_cast<int>(state);

            kprocess_setprocessstate_callback(this, cbval1);
        } else {
            KProcess::setProcessState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (kprocess_setopenmode_isbase) {
            kprocess_setopenmode_isbase = false;
            KProcess::setOpenMode(openMode);
        } else if (kprocess_setopenmode_callback != nullptr) {
            int cbval1 = static_cast<int>(openMode);

            kprocess_setopenmode_callback(this, cbval1);
        } else {
            KProcess::setOpenMode(openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (kprocess_seterrorstring_isbase) {
            kprocess_seterrorstring_isbase = false;
            KProcess::setErrorString(errorString);
        } else if (kprocess_seterrorstring_callback != nullptr) {
            const QString errorString_ret = errorString;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorString_b = errorString_ret.toUtf8();
            libqt_string errorString_str;
            errorString_str.len = errorString_b.length();
            errorString_str.data = static_cast<const char*>(malloc(errorString_str.len + 1));
            memcpy((void*)errorString_str.data, errorString_b.data(), errorString_str.len);
            ((char*)errorString_str.data)[errorString_str.len] = '\0';
            libqt_string cbval1 = errorString_str;

            kprocess_seterrorstring_callback(this, cbval1);
        } else {
            KProcess::setErrorString(errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kprocess_sender_isbase) {
            kprocess_sender_isbase = false;
            return KProcess::sender();
        } else if (kprocess_sender_callback != nullptr) {
            QObject* callback_ret = kprocess_sender_callback();
            return callback_ret;
        } else {
            return KProcess::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kprocess_sendersignalindex_isbase) {
            kprocess_sendersignalindex_isbase = false;
            return KProcess::senderSignalIndex();
        } else if (kprocess_sendersignalindex_callback != nullptr) {
            int callback_ret = kprocess_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KProcess::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kprocess_receivers_isbase) {
            kprocess_receivers_isbase = false;
            return KProcess::receivers(signal);
        } else if (kprocess_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kprocess_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KProcess::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kprocess_issignalconnected_isbase) {
            kprocess_issignalconnected_isbase = false;
            return KProcess::isSignalConnected(signal);
        } else if (kprocess_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kprocess_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KProcess::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend long long KProcess_ReadData(KProcess* self, char* data, long long maxlen);
    friend long long KProcess_QBaseReadData(KProcess* self, char* data, long long maxlen);
    friend long long KProcess_WriteData(KProcess* self, const char* data, long long lenVal);
    friend long long KProcess_QBaseWriteData(KProcess* self, const char* data, long long lenVal);
    friend long long KProcess_ReadLineData(KProcess* self, char* data, long long maxlen);
    friend long long KProcess_QBaseReadLineData(KProcess* self, char* data, long long maxlen);
    friend long long KProcess_SkipData(KProcess* self, long long maxSize);
    friend long long KProcess_QBaseSkipData(KProcess* self, long long maxSize);
    friend void KProcess_TimerEvent(KProcess* self, QTimerEvent* event);
    friend void KProcess_QBaseTimerEvent(KProcess* self, QTimerEvent* event);
    friend void KProcess_ChildEvent(KProcess* self, QChildEvent* event);
    friend void KProcess_QBaseChildEvent(KProcess* self, QChildEvent* event);
    friend void KProcess_CustomEvent(KProcess* self, QEvent* event);
    friend void KProcess_QBaseCustomEvent(KProcess* self, QEvent* event);
    friend void KProcess_ConnectNotify(KProcess* self, const QMetaMethod* signal);
    friend void KProcess_QBaseConnectNotify(KProcess* self, const QMetaMethod* signal);
    friend void KProcess_DisconnectNotify(KProcess* self, const QMetaMethod* signal);
    friend void KProcess_QBaseDisconnectNotify(KProcess* self, const QMetaMethod* signal);
    friend void KProcess_SetProcessState(KProcess* self, int state);
    friend void KProcess_QBaseSetProcessState(KProcess* self, int state);
    friend void KProcess_SetOpenMode(KProcess* self, int openMode);
    friend void KProcess_QBaseSetOpenMode(KProcess* self, int openMode);
    friend void KProcess_SetErrorString(KProcess* self, const libqt_string errorString);
    friend void KProcess_QBaseSetErrorString(KProcess* self, const libqt_string errorString);
    friend QObject* KProcess_Sender(const KProcess* self);
    friend QObject* KProcess_QBaseSender(const KProcess* self);
    friend int KProcess_SenderSignalIndex(const KProcess* self);
    friend int KProcess_QBaseSenderSignalIndex(const KProcess* self);
    friend int KProcess_Receivers(const KProcess* self, const char* signal);
    friend int KProcess_QBaseReceivers(const KProcess* self, const char* signal);
    friend bool KProcess_IsSignalConnected(const KProcess* self, const QMetaMethod* signal);
    friend bool KProcess_QBaseIsSignalConnected(const KProcess* self, const QMetaMethod* signal);
};

#endif
