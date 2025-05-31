#pragma once
#ifndef SRCC_LIBVIRTUALQFILE_H
#define SRCC_LIBVIRTUALQFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFile so that we can call protected methods
class VirtualQFile final : public QFile {

  public:
    // Virtual class boolean flag
    bool isVirtualQFile = true;

    // Virtual class public types (including callbacks)
    using QFile_Metacall_Callback = int (*)(QFile*, int, int, void**);
    using QFile_FileName_Callback = libqt_string (*)();
    using QFile_Open_Callback = bool (*)(QFile*, int);
    using QFile_Size_Callback = long long (*)();
    using QFile_Resize_Callback = bool (*)(QFile*, long long);
    using QFile_Permissions_Callback = int (*)();
    using QFile_SetPermissions_Callback = bool (*)(QFile*, int);
    using QFile_Close_Callback = void (*)();
    using QFile_IsSequential_Callback = bool (*)();
    using QFile_Pos_Callback = long long (*)();
    using QFile_Seek_Callback = bool (*)(QFile*, long long);
    using QFile_AtEnd_Callback = bool (*)();
    using QFile_ReadData_Callback = long long (*)(QFile*, char*, long long);
    using QFile_WriteData_Callback = long long (*)(QFile*, const char*, long long);
    using QFile_ReadLineData_Callback = long long (*)(QFile*, char*, long long);
    using QFile_Reset_Callback = bool (*)();
    using QFile_BytesAvailable_Callback = long long (*)();
    using QFile_BytesToWrite_Callback = long long (*)();
    using QFile_CanReadLine_Callback = bool (*)();
    using QFile_WaitForReadyRead_Callback = bool (*)(QFile*, int);
    using QFile_WaitForBytesWritten_Callback = bool (*)(QFile*, int);
    using QFile_SkipData_Callback = long long (*)(QFile*, long long);
    using QFile_Event_Callback = bool (*)(QFile*, QEvent*);
    using QFile_EventFilter_Callback = bool (*)(QFile*, QObject*, QEvent*);
    using QFile_TimerEvent_Callback = void (*)(QFile*, QTimerEvent*);
    using QFile_ChildEvent_Callback = void (*)(QFile*, QChildEvent*);
    using QFile_CustomEvent_Callback = void (*)(QFile*, QEvent*);
    using QFile_ConnectNotify_Callback = void (*)(QFile*, QMetaMethod*);
    using QFile_DisconnectNotify_Callback = void (*)(QFile*, QMetaMethod*);
    using QFile_SetOpenMode_Callback = void (*)(QFile*, int);
    using QFile_SetErrorString_Callback = void (*)(QFile*, libqt_string);
    using QFile_Sender_Callback = QObject* (*)();
    using QFile_SenderSignalIndex_Callback = int (*)();
    using QFile_Receivers_Callback = int (*)(const QFile*, const char*);
    using QFile_IsSignalConnected_Callback = bool (*)(const QFile*, QMetaMethod*);

  protected:
    // Instance callback storage
    QFile_Metacall_Callback qfile_metacall_callback = nullptr;
    QFile_FileName_Callback qfile_filename_callback = nullptr;
    QFile_Open_Callback qfile_open_callback = nullptr;
    QFile_Size_Callback qfile_size_callback = nullptr;
    QFile_Resize_Callback qfile_resize_callback = nullptr;
    QFile_Permissions_Callback qfile_permissions_callback = nullptr;
    QFile_SetPermissions_Callback qfile_setpermissions_callback = nullptr;
    QFile_Close_Callback qfile_close_callback = nullptr;
    QFile_IsSequential_Callback qfile_issequential_callback = nullptr;
    QFile_Pos_Callback qfile_pos_callback = nullptr;
    QFile_Seek_Callback qfile_seek_callback = nullptr;
    QFile_AtEnd_Callback qfile_atend_callback = nullptr;
    QFile_ReadData_Callback qfile_readdata_callback = nullptr;
    QFile_WriteData_Callback qfile_writedata_callback = nullptr;
    QFile_ReadLineData_Callback qfile_readlinedata_callback = nullptr;
    QFile_Reset_Callback qfile_reset_callback = nullptr;
    QFile_BytesAvailable_Callback qfile_bytesavailable_callback = nullptr;
    QFile_BytesToWrite_Callback qfile_bytestowrite_callback = nullptr;
    QFile_CanReadLine_Callback qfile_canreadline_callback = nullptr;
    QFile_WaitForReadyRead_Callback qfile_waitforreadyread_callback = nullptr;
    QFile_WaitForBytesWritten_Callback qfile_waitforbyteswritten_callback = nullptr;
    QFile_SkipData_Callback qfile_skipdata_callback = nullptr;
    QFile_Event_Callback qfile_event_callback = nullptr;
    QFile_EventFilter_Callback qfile_eventfilter_callback = nullptr;
    QFile_TimerEvent_Callback qfile_timerevent_callback = nullptr;
    QFile_ChildEvent_Callback qfile_childevent_callback = nullptr;
    QFile_CustomEvent_Callback qfile_customevent_callback = nullptr;
    QFile_ConnectNotify_Callback qfile_connectnotify_callback = nullptr;
    QFile_DisconnectNotify_Callback qfile_disconnectnotify_callback = nullptr;
    QFile_SetOpenMode_Callback qfile_setopenmode_callback = nullptr;
    QFile_SetErrorString_Callback qfile_seterrorstring_callback = nullptr;
    QFile_Sender_Callback qfile_sender_callback = nullptr;
    QFile_SenderSignalIndex_Callback qfile_sendersignalindex_callback = nullptr;
    QFile_Receivers_Callback qfile_receivers_callback = nullptr;
    QFile_IsSignalConnected_Callback qfile_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qfile_metacall_isbase = false;
    mutable bool qfile_filename_isbase = false;
    mutable bool qfile_open_isbase = false;
    mutable bool qfile_size_isbase = false;
    mutable bool qfile_resize_isbase = false;
    mutable bool qfile_permissions_isbase = false;
    mutable bool qfile_setpermissions_isbase = false;
    mutable bool qfile_close_isbase = false;
    mutable bool qfile_issequential_isbase = false;
    mutable bool qfile_pos_isbase = false;
    mutable bool qfile_seek_isbase = false;
    mutable bool qfile_atend_isbase = false;
    mutable bool qfile_readdata_isbase = false;
    mutable bool qfile_writedata_isbase = false;
    mutable bool qfile_readlinedata_isbase = false;
    mutable bool qfile_reset_isbase = false;
    mutable bool qfile_bytesavailable_isbase = false;
    mutable bool qfile_bytestowrite_isbase = false;
    mutable bool qfile_canreadline_isbase = false;
    mutable bool qfile_waitforreadyread_isbase = false;
    mutable bool qfile_waitforbyteswritten_isbase = false;
    mutable bool qfile_skipdata_isbase = false;
    mutable bool qfile_event_isbase = false;
    mutable bool qfile_eventfilter_isbase = false;
    mutable bool qfile_timerevent_isbase = false;
    mutable bool qfile_childevent_isbase = false;
    mutable bool qfile_customevent_isbase = false;
    mutable bool qfile_connectnotify_isbase = false;
    mutable bool qfile_disconnectnotify_isbase = false;
    mutable bool qfile_setopenmode_isbase = false;
    mutable bool qfile_seterrorstring_isbase = false;
    mutable bool qfile_sender_isbase = false;
    mutable bool qfile_sendersignalindex_isbase = false;
    mutable bool qfile_receivers_isbase = false;
    mutable bool qfile_issignalconnected_isbase = false;

  public:
    VirtualQFile() : QFile(){};
    VirtualQFile(const QString& name) : QFile(name){};
    VirtualQFile(QObject* parent) : QFile(parent){};
    VirtualQFile(const QString& name, QObject* parent) : QFile(name, parent){};

    ~VirtualQFile() {
        qfile_metacall_callback = nullptr;
        qfile_filename_callback = nullptr;
        qfile_open_callback = nullptr;
        qfile_size_callback = nullptr;
        qfile_resize_callback = nullptr;
        qfile_permissions_callback = nullptr;
        qfile_setpermissions_callback = nullptr;
        qfile_close_callback = nullptr;
        qfile_issequential_callback = nullptr;
        qfile_pos_callback = nullptr;
        qfile_seek_callback = nullptr;
        qfile_atend_callback = nullptr;
        qfile_readdata_callback = nullptr;
        qfile_writedata_callback = nullptr;
        qfile_readlinedata_callback = nullptr;
        qfile_reset_callback = nullptr;
        qfile_bytesavailable_callback = nullptr;
        qfile_bytestowrite_callback = nullptr;
        qfile_canreadline_callback = nullptr;
        qfile_waitforreadyread_callback = nullptr;
        qfile_waitforbyteswritten_callback = nullptr;
        qfile_skipdata_callback = nullptr;
        qfile_event_callback = nullptr;
        qfile_eventfilter_callback = nullptr;
        qfile_timerevent_callback = nullptr;
        qfile_childevent_callback = nullptr;
        qfile_customevent_callback = nullptr;
        qfile_connectnotify_callback = nullptr;
        qfile_disconnectnotify_callback = nullptr;
        qfile_setopenmode_callback = nullptr;
        qfile_seterrorstring_callback = nullptr;
        qfile_sender_callback = nullptr;
        qfile_sendersignalindex_callback = nullptr;
        qfile_receivers_callback = nullptr;
        qfile_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQFile_Metacall_Callback(QFile_Metacall_Callback cb) { qfile_metacall_callback = cb; }
    inline void setQFile_FileName_Callback(QFile_FileName_Callback cb) { qfile_filename_callback = cb; }
    inline void setQFile_Open_Callback(QFile_Open_Callback cb) { qfile_open_callback = cb; }
    inline void setQFile_Size_Callback(QFile_Size_Callback cb) { qfile_size_callback = cb; }
    inline void setQFile_Resize_Callback(QFile_Resize_Callback cb) { qfile_resize_callback = cb; }
    inline void setQFile_Permissions_Callback(QFile_Permissions_Callback cb) { qfile_permissions_callback = cb; }
    inline void setQFile_SetPermissions_Callback(QFile_SetPermissions_Callback cb) { qfile_setpermissions_callback = cb; }
    inline void setQFile_Close_Callback(QFile_Close_Callback cb) { qfile_close_callback = cb; }
    inline void setQFile_IsSequential_Callback(QFile_IsSequential_Callback cb) { qfile_issequential_callback = cb; }
    inline void setQFile_Pos_Callback(QFile_Pos_Callback cb) { qfile_pos_callback = cb; }
    inline void setQFile_Seek_Callback(QFile_Seek_Callback cb) { qfile_seek_callback = cb; }
    inline void setQFile_AtEnd_Callback(QFile_AtEnd_Callback cb) { qfile_atend_callback = cb; }
    inline void setQFile_ReadData_Callback(QFile_ReadData_Callback cb) { qfile_readdata_callback = cb; }
    inline void setQFile_WriteData_Callback(QFile_WriteData_Callback cb) { qfile_writedata_callback = cb; }
    inline void setQFile_ReadLineData_Callback(QFile_ReadLineData_Callback cb) { qfile_readlinedata_callback = cb; }
    inline void setQFile_Reset_Callback(QFile_Reset_Callback cb) { qfile_reset_callback = cb; }
    inline void setQFile_BytesAvailable_Callback(QFile_BytesAvailable_Callback cb) { qfile_bytesavailable_callback = cb; }
    inline void setQFile_BytesToWrite_Callback(QFile_BytesToWrite_Callback cb) { qfile_bytestowrite_callback = cb; }
    inline void setQFile_CanReadLine_Callback(QFile_CanReadLine_Callback cb) { qfile_canreadline_callback = cb; }
    inline void setQFile_WaitForReadyRead_Callback(QFile_WaitForReadyRead_Callback cb) { qfile_waitforreadyread_callback = cb; }
    inline void setQFile_WaitForBytesWritten_Callback(QFile_WaitForBytesWritten_Callback cb) { qfile_waitforbyteswritten_callback = cb; }
    inline void setQFile_SkipData_Callback(QFile_SkipData_Callback cb) { qfile_skipdata_callback = cb; }
    inline void setQFile_Event_Callback(QFile_Event_Callback cb) { qfile_event_callback = cb; }
    inline void setQFile_EventFilter_Callback(QFile_EventFilter_Callback cb) { qfile_eventfilter_callback = cb; }
    inline void setQFile_TimerEvent_Callback(QFile_TimerEvent_Callback cb) { qfile_timerevent_callback = cb; }
    inline void setQFile_ChildEvent_Callback(QFile_ChildEvent_Callback cb) { qfile_childevent_callback = cb; }
    inline void setQFile_CustomEvent_Callback(QFile_CustomEvent_Callback cb) { qfile_customevent_callback = cb; }
    inline void setQFile_ConnectNotify_Callback(QFile_ConnectNotify_Callback cb) { qfile_connectnotify_callback = cb; }
    inline void setQFile_DisconnectNotify_Callback(QFile_DisconnectNotify_Callback cb) { qfile_disconnectnotify_callback = cb; }
    inline void setQFile_SetOpenMode_Callback(QFile_SetOpenMode_Callback cb) { qfile_setopenmode_callback = cb; }
    inline void setQFile_SetErrorString_Callback(QFile_SetErrorString_Callback cb) { qfile_seterrorstring_callback = cb; }
    inline void setQFile_Sender_Callback(QFile_Sender_Callback cb) { qfile_sender_callback = cb; }
    inline void setQFile_SenderSignalIndex_Callback(QFile_SenderSignalIndex_Callback cb) { qfile_sendersignalindex_callback = cb; }
    inline void setQFile_Receivers_Callback(QFile_Receivers_Callback cb) { qfile_receivers_callback = cb; }
    inline void setQFile_IsSignalConnected_Callback(QFile_IsSignalConnected_Callback cb) { qfile_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQFile_Metacall_IsBase(bool value) const { qfile_metacall_isbase = value; }
    inline void setQFile_FileName_IsBase(bool value) const { qfile_filename_isbase = value; }
    inline void setQFile_Open_IsBase(bool value) const { qfile_open_isbase = value; }
    inline void setQFile_Size_IsBase(bool value) const { qfile_size_isbase = value; }
    inline void setQFile_Resize_IsBase(bool value) const { qfile_resize_isbase = value; }
    inline void setQFile_Permissions_IsBase(bool value) const { qfile_permissions_isbase = value; }
    inline void setQFile_SetPermissions_IsBase(bool value) const { qfile_setpermissions_isbase = value; }
    inline void setQFile_Close_IsBase(bool value) const { qfile_close_isbase = value; }
    inline void setQFile_IsSequential_IsBase(bool value) const { qfile_issequential_isbase = value; }
    inline void setQFile_Pos_IsBase(bool value) const { qfile_pos_isbase = value; }
    inline void setQFile_Seek_IsBase(bool value) const { qfile_seek_isbase = value; }
    inline void setQFile_AtEnd_IsBase(bool value) const { qfile_atend_isbase = value; }
    inline void setQFile_ReadData_IsBase(bool value) const { qfile_readdata_isbase = value; }
    inline void setQFile_WriteData_IsBase(bool value) const { qfile_writedata_isbase = value; }
    inline void setQFile_ReadLineData_IsBase(bool value) const { qfile_readlinedata_isbase = value; }
    inline void setQFile_Reset_IsBase(bool value) const { qfile_reset_isbase = value; }
    inline void setQFile_BytesAvailable_IsBase(bool value) const { qfile_bytesavailable_isbase = value; }
    inline void setQFile_BytesToWrite_IsBase(bool value) const { qfile_bytestowrite_isbase = value; }
    inline void setQFile_CanReadLine_IsBase(bool value) const { qfile_canreadline_isbase = value; }
    inline void setQFile_WaitForReadyRead_IsBase(bool value) const { qfile_waitforreadyread_isbase = value; }
    inline void setQFile_WaitForBytesWritten_IsBase(bool value) const { qfile_waitforbyteswritten_isbase = value; }
    inline void setQFile_SkipData_IsBase(bool value) const { qfile_skipdata_isbase = value; }
    inline void setQFile_Event_IsBase(bool value) const { qfile_event_isbase = value; }
    inline void setQFile_EventFilter_IsBase(bool value) const { qfile_eventfilter_isbase = value; }
    inline void setQFile_TimerEvent_IsBase(bool value) const { qfile_timerevent_isbase = value; }
    inline void setQFile_ChildEvent_IsBase(bool value) const { qfile_childevent_isbase = value; }
    inline void setQFile_CustomEvent_IsBase(bool value) const { qfile_customevent_isbase = value; }
    inline void setQFile_ConnectNotify_IsBase(bool value) const { qfile_connectnotify_isbase = value; }
    inline void setQFile_DisconnectNotify_IsBase(bool value) const { qfile_disconnectnotify_isbase = value; }
    inline void setQFile_SetOpenMode_IsBase(bool value) const { qfile_setopenmode_isbase = value; }
    inline void setQFile_SetErrorString_IsBase(bool value) const { qfile_seterrorstring_isbase = value; }
    inline void setQFile_Sender_IsBase(bool value) const { qfile_sender_isbase = value; }
    inline void setQFile_SenderSignalIndex_IsBase(bool value) const { qfile_sendersignalindex_isbase = value; }
    inline void setQFile_Receivers_IsBase(bool value) const { qfile_receivers_isbase = value; }
    inline void setQFile_IsSignalConnected_IsBase(bool value) const { qfile_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfile_metacall_isbase) {
            qfile_metacall_isbase = false;
            return QFile::qt_metacall(param1, param2, param3);
        } else if (qfile_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qfile_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QFile::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString fileName() const override {
        if (qfile_filename_isbase) {
            qfile_filename_isbase = false;
            return QFile::fileName();
        } else if (qfile_filename_callback != nullptr) {
            libqt_string callback_ret = qfile_filename_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QFile::fileName();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode flags) override {
        if (qfile_open_isbase) {
            qfile_open_isbase = false;
            return QFile::open(flags);
        } else if (qfile_open_callback != nullptr) {
            int cbval1 = static_cast<int>(flags);

            bool callback_ret = qfile_open_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFile::open(flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qfile_size_isbase) {
            qfile_size_isbase = false;
            return QFile::size();
        } else if (qfile_size_callback != nullptr) {
            long long callback_ret = qfile_size_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QFile::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool resize(qint64 sz) override {
        if (qfile_resize_isbase) {
            qfile_resize_isbase = false;
            return QFile::resize(sz);
        } else if (qfile_resize_callback != nullptr) {
            long long cbval1 = static_cast<long long>(sz);

            bool callback_ret = qfile_resize_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFile::resize(sz);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFileDevice::Permissions permissions() const override {
        if (qfile_permissions_isbase) {
            qfile_permissions_isbase = false;
            return QFile::permissions();
        } else if (qfile_permissions_callback != nullptr) {
            int callback_ret = qfile_permissions_callback();
            return static_cast<QFileDevice::Permissions>(callback_ret);
        } else {
            return QFile::permissions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPermissions(QFileDevice::Permissions permissionSpec) override {
        if (qfile_setpermissions_isbase) {
            qfile_setpermissions_isbase = false;
            return QFile::setPermissions(permissionSpec);
        } else if (qfile_setpermissions_callback != nullptr) {
            int cbval1 = static_cast<int>(permissionSpec);

            bool callback_ret = qfile_setpermissions_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFile::setPermissions(permissionSpec);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qfile_close_isbase) {
            qfile_close_isbase = false;
            QFile::close();
        } else if (qfile_close_callback != nullptr) {
            qfile_close_callback();
        } else {
            QFile::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qfile_issequential_isbase) {
            qfile_issequential_isbase = false;
            return QFile::isSequential();
        } else if (qfile_issequential_callback != nullptr) {
            bool callback_ret = qfile_issequential_callback();
            return callback_ret;
        } else {
            return QFile::isSequential();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qfile_pos_isbase) {
            qfile_pos_isbase = false;
            return QFile::pos();
        } else if (qfile_pos_callback != nullptr) {
            long long callback_ret = qfile_pos_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QFile::pos();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 offset) override {
        if (qfile_seek_isbase) {
            qfile_seek_isbase = false;
            return QFile::seek(offset);
        } else if (qfile_seek_callback != nullptr) {
            long long cbval1 = static_cast<long long>(offset);

            bool callback_ret = qfile_seek_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFile::seek(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qfile_atend_isbase) {
            qfile_atend_isbase = false;
            return QFile::atEnd();
        } else if (qfile_atend_callback != nullptr) {
            bool callback_ret = qfile_atend_callback();
            return callback_ret;
        } else {
            return QFile::atEnd();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qfile_readdata_isbase) {
            qfile_readdata_isbase = false;
            return QFile::readData(data, maxlen);
        } else if (qfile_readdata_callback != nullptr) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = qfile_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QFile::readData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 lenVal) override {
        if (qfile_writedata_isbase) {
            qfile_writedata_isbase = false;
            return QFile::writeData(data, lenVal);
        } else if (qfile_writedata_callback != nullptr) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(lenVal);

            long long callback_ret = qfile_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QFile::writeData(data, lenVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qfile_readlinedata_isbase) {
            qfile_readlinedata_isbase = false;
            return QFile::readLineData(data, maxlen);
        } else if (qfile_readlinedata_callback != nullptr) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = qfile_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QFile::readLineData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qfile_reset_isbase) {
            qfile_reset_isbase = false;
            return QFile::reset();
        } else if (qfile_reset_callback != nullptr) {
            bool callback_ret = qfile_reset_callback();
            return callback_ret;
        } else {
            return QFile::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qfile_bytesavailable_isbase) {
            qfile_bytesavailable_isbase = false;
            return QFile::bytesAvailable();
        } else if (qfile_bytesavailable_callback != nullptr) {
            long long callback_ret = qfile_bytesavailable_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QFile::bytesAvailable();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qfile_bytestowrite_isbase) {
            qfile_bytestowrite_isbase = false;
            return QFile::bytesToWrite();
        } else if (qfile_bytestowrite_callback != nullptr) {
            long long callback_ret = qfile_bytestowrite_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QFile::bytesToWrite();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qfile_canreadline_isbase) {
            qfile_canreadline_isbase = false;
            return QFile::canReadLine();
        } else if (qfile_canreadline_callback != nullptr) {
            bool callback_ret = qfile_canreadline_callback();
            return callback_ret;
        } else {
            return QFile::canReadLine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qfile_waitforreadyread_isbase) {
            qfile_waitforreadyread_isbase = false;
            return QFile::waitForReadyRead(msecs);
        } else if (qfile_waitforreadyread_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qfile_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFile::waitForReadyRead(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qfile_waitforbyteswritten_isbase) {
            qfile_waitforbyteswritten_isbase = false;
            return QFile::waitForBytesWritten(msecs);
        } else if (qfile_waitforbyteswritten_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qfile_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFile::waitForBytesWritten(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qfile_skipdata_isbase) {
            qfile_skipdata_isbase = false;
            return QFile::skipData(maxSize);
        } else if (qfile_skipdata_callback != nullptr) {
            long long cbval1 = static_cast<long long>(maxSize);

            long long callback_ret = qfile_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        } else {
            return QFile::skipData(maxSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qfile_event_isbase) {
            qfile_event_isbase = false;
            return QFile::event(event);
        } else if (qfile_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qfile_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFile::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qfile_eventfilter_isbase) {
            qfile_eventfilter_isbase = false;
            return QFile::eventFilter(watched, event);
        } else if (qfile_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qfile_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QFile::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfile_timerevent_isbase) {
            qfile_timerevent_isbase = false;
            QFile::timerEvent(event);
        } else if (qfile_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qfile_timerevent_callback(this, cbval1);
        } else {
            QFile::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfile_childevent_isbase) {
            qfile_childevent_isbase = false;
            QFile::childEvent(event);
        } else if (qfile_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qfile_childevent_callback(this, cbval1);
        } else {
            QFile::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfile_customevent_isbase) {
            qfile_customevent_isbase = false;
            QFile::customEvent(event);
        } else if (qfile_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qfile_customevent_callback(this, cbval1);
        } else {
            QFile::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfile_connectnotify_isbase) {
            qfile_connectnotify_isbase = false;
            QFile::connectNotify(signal);
        } else if (qfile_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qfile_connectnotify_callback(this, cbval1);
        } else {
            QFile::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfile_disconnectnotify_isbase) {
            qfile_disconnectnotify_isbase = false;
            QFile::disconnectNotify(signal);
        } else if (qfile_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qfile_disconnectnotify_callback(this, cbval1);
        } else {
            QFile::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (qfile_setopenmode_isbase) {
            qfile_setopenmode_isbase = false;
            QFile::setOpenMode(openMode);
        } else if (qfile_setopenmode_callback != nullptr) {
            int cbval1 = static_cast<int>(openMode);

            qfile_setopenmode_callback(this, cbval1);
        } else {
            QFile::setOpenMode(openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (qfile_seterrorstring_isbase) {
            qfile_seterrorstring_isbase = false;
            QFile::setErrorString(errorString);
        } else if (qfile_seterrorstring_callback != nullptr) {
            const QString errorString_ret = errorString;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorString_b = errorString_ret.toUtf8();
            libqt_string errorString_str;
            errorString_str.len = errorString_b.length();
            errorString_str.data = static_cast<char*>(malloc((errorString_str.len + 1) * sizeof(char)));
            memcpy(errorString_str.data, errorString_b.data(), errorString_str.len);
            errorString_str.data[errorString_str.len] = '\0';
            libqt_string cbval1 = errorString_str;

            qfile_seterrorstring_callback(this, cbval1);
        } else {
            QFile::setErrorString(errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qfile_sender_isbase) {
            qfile_sender_isbase = false;
            return QFile::sender();
        } else if (qfile_sender_callback != nullptr) {
            QObject* callback_ret = qfile_sender_callback();
            return callback_ret;
        } else {
            return QFile::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qfile_sendersignalindex_isbase) {
            qfile_sendersignalindex_isbase = false;
            return QFile::senderSignalIndex();
        } else if (qfile_sendersignalindex_callback != nullptr) {
            int callback_ret = qfile_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QFile::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qfile_receivers_isbase) {
            qfile_receivers_isbase = false;
            return QFile::receivers(signal);
        } else if (qfile_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qfile_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QFile::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qfile_issignalconnected_isbase) {
            qfile_issignalconnected_isbase = false;
            return QFile::isSignalConnected(signal);
        } else if (qfile_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qfile_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QFile::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend long long QFile_ReadData(QFile* self, char* data, long long maxlen);
    friend long long QFile_QBaseReadData(QFile* self, char* data, long long maxlen);
    friend long long QFile_WriteData(QFile* self, const char* data, long long lenVal);
    friend long long QFile_QBaseWriteData(QFile* self, const char* data, long long lenVal);
    friend long long QFile_ReadLineData(QFile* self, char* data, long long maxlen);
    friend long long QFile_QBaseReadLineData(QFile* self, char* data, long long maxlen);
    friend long long QFile_SkipData(QFile* self, long long maxSize);
    friend long long QFile_QBaseSkipData(QFile* self, long long maxSize);
    friend void QFile_TimerEvent(QFile* self, QTimerEvent* event);
    friend void QFile_QBaseTimerEvent(QFile* self, QTimerEvent* event);
    friend void QFile_ChildEvent(QFile* self, QChildEvent* event);
    friend void QFile_QBaseChildEvent(QFile* self, QChildEvent* event);
    friend void QFile_CustomEvent(QFile* self, QEvent* event);
    friend void QFile_QBaseCustomEvent(QFile* self, QEvent* event);
    friend void QFile_ConnectNotify(QFile* self, const QMetaMethod* signal);
    friend void QFile_QBaseConnectNotify(QFile* self, const QMetaMethod* signal);
    friend void QFile_DisconnectNotify(QFile* self, const QMetaMethod* signal);
    friend void QFile_QBaseDisconnectNotify(QFile* self, const QMetaMethod* signal);
    friend void QFile_SetOpenMode(QFile* self, int openMode);
    friend void QFile_QBaseSetOpenMode(QFile* self, int openMode);
    friend void QFile_SetErrorString(QFile* self, const libqt_string errorString);
    friend void QFile_QBaseSetErrorString(QFile* self, const libqt_string errorString);
    friend QObject* QFile_Sender(const QFile* self);
    friend QObject* QFile_QBaseSender(const QFile* self);
    friend int QFile_SenderSignalIndex(const QFile* self);
    friend int QFile_QBaseSenderSignalIndex(const QFile* self);
    friend int QFile_Receivers(const QFile* self, const char* signal);
    friend int QFile_QBaseReceivers(const QFile* self, const char* signal);
    friend bool QFile_IsSignalConnected(const QFile* self, const QMetaMethod* signal);
    friend bool QFile_QBaseIsSignalConnected(const QFile* self, const QMetaMethod* signal);
};

#endif
