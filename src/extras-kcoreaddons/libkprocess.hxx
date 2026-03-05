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
    using KProcess_MetaObject_Callback = QMetaObject* (*)();
    using KProcess_Metacast_Callback = void* (*)(KProcess*, const char*);
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
    using KProcess_SetErrorString_Callback = void (*)(KProcess*, const char*);
    using KProcess_Sender_Callback = QObject* (*)();
    using KProcess_SenderSignalIndex_Callback = int (*)();
    using KProcess_Receivers_Callback = int (*)(const KProcess*, const char*);
    using KProcess_IsSignalConnected_Callback = bool (*)(const KProcess*, QMetaMethod*);

  protected:
    // Instance callback storage
    KProcess_MetaObject_Callback kprocess_metaobject_callback = nullptr;
    KProcess_Metacast_Callback kprocess_metacast_callback = nullptr;
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
    mutable bool kprocess_metaobject_isbase = false;
    mutable bool kprocess_metacast_isbase = false;
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

    // Callback setters
    inline void setKProcess_MetaObject_Callback(KProcess_MetaObject_Callback cb) { kprocess_metaobject_callback = cb; }
    inline void setKProcess_Metacast_Callback(KProcess_Metacast_Callback cb) { kprocess_metacast_callback = cb; }
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
    inline void setKProcess_MetaObject_IsBase(bool value) const { kprocess_metaobject_isbase = value; }
    inline void setKProcess_Metacast_IsBase(bool value) const { kprocess_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (kprocess_metaobject_isbase) {
            kprocess_metaobject_isbase = false;
            return KProcess::metaObject();
        }
        auto metaobject_cb = kprocess_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KProcess::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kprocess_metacast_isbase) {
            kprocess_metacast_isbase = false;
            return KProcess::qt_metacast(param1);
        }
        auto metacast_cb = kprocess_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KProcess::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kprocess_metacall_isbase) {
            kprocess_metacall_isbase = false;
            return KProcess::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kprocess_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KProcess::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QProcess::OpenMode mode) override {
        if (kprocess_open_isbase) {
            kprocess_open_isbase = false;
            return KProcess::open(mode);
        }
        auto open_cb = kprocess_open_callback;
        if (open_cb) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = open_cb(this, cbval1);
            return callback_ret;
        }
        return KProcess::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (kprocess_waitforreadyread_isbase) {
            kprocess_waitforreadyread_isbase = false;
            return KProcess::waitForReadyRead(msecs);
        }
        auto waitforreadyread_cb = kprocess_waitforreadyread_callback;
        if (waitforreadyread_cb) {
            int cbval1 = msecs;

            bool callback_ret = waitforreadyread_cb(this, cbval1);
            return callback_ret;
        }
        return KProcess::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (kprocess_waitforbyteswritten_isbase) {
            kprocess_waitforbyteswritten_isbase = false;
            return KProcess::waitForBytesWritten(msecs);
        }
        auto waitforbyteswritten_cb = kprocess_waitforbyteswritten_callback;
        if (waitforbyteswritten_cb) {
            int cbval1 = msecs;

            bool callback_ret = waitforbyteswritten_cb(this, cbval1);
            return callback_ret;
        }
        return KProcess::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (kprocess_bytestowrite_isbase) {
            kprocess_bytestowrite_isbase = false;
            return KProcess::bytesToWrite();
        }
        auto bytestowrite_cb = kprocess_bytestowrite_callback;
        if (bytestowrite_cb) {
            long long callback_ret = bytestowrite_cb();
            return static_cast<qint64>(callback_ret);
        }
        return KProcess::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (kprocess_issequential_isbase) {
            kprocess_issequential_isbase = false;
            return KProcess::isSequential();
        }
        auto issequential_cb = kprocess_issequential_callback;
        if (issequential_cb) {
            bool callback_ret = issequential_cb();
            return callback_ret;
        }
        return KProcess::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (kprocess_close_isbase) {
            kprocess_close_isbase = false;
            KProcess::close();
            return;
        }
        auto close_cb = kprocess_close_callback;
        if (close_cb) {
            close_cb();
            return;
        }
        KProcess::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (kprocess_readdata_isbase) {
            kprocess_readdata_isbase = false;
            return KProcess::readData(data, maxlen);
        }
        auto readdata_cb = kprocess_readdata_callback;
        if (readdata_cb) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = readdata_cb(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return KProcess::readData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 lenVal) override {
        if (kprocess_writedata_isbase) {
            kprocess_writedata_isbase = false;
            return KProcess::writeData(data, lenVal);
        }
        auto writedata_cb = kprocess_writedata_callback;
        if (writedata_cb) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(lenVal);

            long long callback_ret = writedata_cb(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return KProcess::writeData(data, lenVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (kprocess_pos_isbase) {
            kprocess_pos_isbase = false;
            return KProcess::pos();
        }
        auto pos_cb = kprocess_pos_callback;
        if (pos_cb) {
            long long callback_ret = pos_cb();
            return static_cast<qint64>(callback_ret);
        }
        return KProcess::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (kprocess_size_isbase) {
            kprocess_size_isbase = false;
            return KProcess::size();
        }
        auto size_cb = kprocess_size_callback;
        if (size_cb) {
            long long callback_ret = size_cb();
            return static_cast<qint64>(callback_ret);
        }
        return KProcess::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (kprocess_seek_isbase) {
            kprocess_seek_isbase = false;
            return KProcess::seek(pos);
        }
        auto seek_cb = kprocess_seek_callback;
        if (seek_cb) {
            long long cbval1 = static_cast<long long>(pos);

            bool callback_ret = seek_cb(this, cbval1);
            return callback_ret;
        }
        return KProcess::seek(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (kprocess_atend_isbase) {
            kprocess_atend_isbase = false;
            return KProcess::atEnd();
        }
        auto atend_cb = kprocess_atend_callback;
        if (atend_cb) {
            bool callback_ret = atend_cb();
            return callback_ret;
        }
        return KProcess::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (kprocess_reset_isbase) {
            kprocess_reset_isbase = false;
            return KProcess::reset();
        }
        auto reset_cb = kprocess_reset_callback;
        if (reset_cb) {
            bool callback_ret = reset_cb();
            return callback_ret;
        }
        return KProcess::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (kprocess_bytesavailable_isbase) {
            kprocess_bytesavailable_isbase = false;
            return KProcess::bytesAvailable();
        }
        auto bytesavailable_cb = kprocess_bytesavailable_callback;
        if (bytesavailable_cb) {
            long long callback_ret = bytesavailable_cb();
            return static_cast<qint64>(callback_ret);
        }
        return KProcess::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (kprocess_canreadline_isbase) {
            kprocess_canreadline_isbase = false;
            return KProcess::canReadLine();
        }
        auto canreadline_cb = kprocess_canreadline_callback;
        if (canreadline_cb) {
            bool callback_ret = canreadline_cb();
            return callback_ret;
        }
        return KProcess::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (kprocess_readlinedata_isbase) {
            kprocess_readlinedata_isbase = false;
            return KProcess::readLineData(data, maxlen);
        }
        auto readlinedata_cb = kprocess_readlinedata_callback;
        if (readlinedata_cb) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = readlinedata_cb(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return KProcess::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (kprocess_skipdata_isbase) {
            kprocess_skipdata_isbase = false;
            return KProcess::skipData(maxSize);
        }
        auto skipdata_cb = kprocess_skipdata_callback;
        if (skipdata_cb) {
            long long cbval1 = static_cast<long long>(maxSize);

            long long callback_ret = skipdata_cb(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return KProcess::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kprocess_event_isbase) {
            kprocess_event_isbase = false;
            return KProcess::event(event);
        }
        auto event_cb = kprocess_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KProcess::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kprocess_eventfilter_isbase) {
            kprocess_eventfilter_isbase = false;
            return KProcess::eventFilter(watched, event);
        }
        auto eventfilter_cb = kprocess_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KProcess::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kprocess_timerevent_isbase) {
            kprocess_timerevent_isbase = false;
            KProcess::timerEvent(event);
            return;
        }
        auto timerevent_cb = kprocess_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KProcess::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kprocess_childevent_isbase) {
            kprocess_childevent_isbase = false;
            KProcess::childEvent(event);
            return;
        }
        auto childevent_cb = kprocess_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KProcess::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kprocess_customevent_isbase) {
            kprocess_customevent_isbase = false;
            KProcess::customEvent(event);
            return;
        }
        auto customevent_cb = kprocess_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KProcess::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kprocess_connectnotify_isbase) {
            kprocess_connectnotify_isbase = false;
            KProcess::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kprocess_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KProcess::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kprocess_disconnectnotify_isbase) {
            kprocess_disconnectnotify_isbase = false;
            KProcess::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kprocess_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KProcess::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setProcessState(QProcess::ProcessState state) {
        if (kprocess_setprocessstate_isbase) {
            kprocess_setprocessstate_isbase = false;
            KProcess::setProcessState(state);
            return;
        }
        auto setprocessstate_cb = kprocess_setprocessstate_callback;
        if (setprocessstate_cb) {
            int cbval1 = static_cast<int>(state);

            setprocessstate_cb(this, cbval1);
            return;
        }
        KProcess::setProcessState(state);
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (kprocess_setopenmode_isbase) {
            kprocess_setopenmode_isbase = false;
            KProcess::setOpenMode(openMode);
            return;
        }
        auto setopenmode_cb = kprocess_setopenmode_callback;
        if (setopenmode_cb) {
            int cbval1 = static_cast<int>(openMode);

            setopenmode_cb(this, cbval1);
            return;
        }
        KProcess::setOpenMode(openMode);
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (kprocess_seterrorstring_isbase) {
            kprocess_seterrorstring_isbase = false;
            KProcess::setErrorString(errorString);
            return;
        }
        auto seterrorstring_cb = kprocess_seterrorstring_callback;
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
        KProcess::setErrorString(errorString);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kprocess_sender_isbase) {
            kprocess_sender_isbase = false;
            return KProcess::sender();
        }
        auto sender_cb = kprocess_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KProcess::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kprocess_sendersignalindex_isbase) {
            kprocess_sendersignalindex_isbase = false;
            return KProcess::senderSignalIndex();
        }
        auto sendersignalindex_cb = kprocess_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KProcess::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kprocess_receivers_isbase) {
            kprocess_receivers_isbase = false;
            return KProcess::receivers(signal);
        }
        auto receivers_cb = kprocess_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KProcess::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kprocess_issignalconnected_isbase) {
            kprocess_issignalconnected_isbase = false;
            return KProcess::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kprocess_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KProcess::isSignalConnected(signal);
    }

    // Friend functions
    friend long long KProcess_ReadData(KProcess* self, char* data, long long maxlen);
    friend long long KProcess_SuperReadData(KProcess* self, char* data, long long maxlen);
    friend long long KProcess_WriteData(KProcess* self, const char* data, long long lenVal);
    friend long long KProcess_SuperWriteData(KProcess* self, const char* data, long long lenVal);
    friend long long KProcess_ReadLineData(KProcess* self, char* data, long long maxlen);
    friend long long KProcess_SuperReadLineData(KProcess* self, char* data, long long maxlen);
    friend long long KProcess_SkipData(KProcess* self, long long maxSize);
    friend long long KProcess_SuperSkipData(KProcess* self, long long maxSize);
    friend void KProcess_TimerEvent(KProcess* self, QTimerEvent* event);
    friend void KProcess_SuperTimerEvent(KProcess* self, QTimerEvent* event);
    friend void KProcess_ChildEvent(KProcess* self, QChildEvent* event);
    friend void KProcess_SuperChildEvent(KProcess* self, QChildEvent* event);
    friend void KProcess_CustomEvent(KProcess* self, QEvent* event);
    friend void KProcess_SuperCustomEvent(KProcess* self, QEvent* event);
    friend void KProcess_ConnectNotify(KProcess* self, const QMetaMethod* signal);
    friend void KProcess_SuperConnectNotify(KProcess* self, const QMetaMethod* signal);
    friend void KProcess_DisconnectNotify(KProcess* self, const QMetaMethod* signal);
    friend void KProcess_SuperDisconnectNotify(KProcess* self, const QMetaMethod* signal);
    friend void KProcess_SetProcessState(KProcess* self, int state);
    friend void KProcess_SuperSetProcessState(KProcess* self, int state);
    friend void KProcess_SetOpenMode(KProcess* self, int openMode);
    friend void KProcess_SuperSetOpenMode(KProcess* self, int openMode);
    friend void KProcess_SetErrorString(KProcess* self, const libqt_string errorString);
    friend void KProcess_SuperSetErrorString(KProcess* self, const libqt_string errorString);
    friend QObject* KProcess_Sender(const KProcess* self);
    friend QObject* KProcess_SuperSender(const KProcess* self);
    friend int KProcess_SenderSignalIndex(const KProcess* self);
    friend int KProcess_SuperSenderSignalIndex(const KProcess* self);
    friend int KProcess_Receivers(const KProcess* self, const char* signal);
    friend int KProcess_SuperReceivers(const KProcess* self, const char* signal);
    friend bool KProcess_IsSignalConnected(const KProcess* self, const QMetaMethod* signal);
    friend bool KProcess_SuperIsSignalConnected(const KProcess* self, const QMetaMethod* signal);
};

#endif
