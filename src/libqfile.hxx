#pragma once
#ifndef SRCC_LIBVIRTUALQFILE_H
#define SRCC_LIBVIRTUALQFILE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFile so that we can call protected methods
class VirtualQFile final : public QFile {

  public:
    // Virtual class boolean flag
    bool isVirtualQFile = true;

    // Virtual class public types (including callbacks)
    using QFile_MetaObject_Callback = QMetaObject* (*)();
    using QFile_Metacast_Callback = void* (*)(QFile*, const char*);
    using QFile_Metacall_Callback = int (*)(QFile*, int, int, void**);
    using QFile_FileName_Callback = const char* (*)();
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
    using QFile_SetErrorString_Callback = void (*)(QFile*, const char*);
    using QFile_Sender_Callback = QObject* (*)();
    using QFile_SenderSignalIndex_Callback = int (*)();
    using QFile_Receivers_Callback = int (*)(const QFile*, const char*);
    using QFile_IsSignalConnected_Callback = bool (*)(const QFile*, QMetaMethod*);

  protected:
    // Instance callback storage
    QFile_MetaObject_Callback qfile_metaobject_callback = nullptr;
    QFile_Metacast_Callback qfile_metacast_callback = nullptr;
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
    mutable bool qfile_metaobject_isbase = false;
    mutable bool qfile_metacast_isbase = false;
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
    VirtualQFile() : QFile() {};
    VirtualQFile(const QString& name) : QFile(name) {};
    VirtualQFile(QObject* parent) : QFile(parent) {};
    VirtualQFile(const QString& name, QObject* parent) : QFile(name, parent) {};

    // Callback setters
    inline void setQFile_MetaObject_Callback(QFile_MetaObject_Callback cb) { qfile_metaobject_callback = cb; }
    inline void setQFile_Metacast_Callback(QFile_Metacast_Callback cb) { qfile_metacast_callback = cb; }
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
    inline void setQFile_MetaObject_IsBase(bool value) const { qfile_metaobject_isbase = value; }
    inline void setQFile_Metacast_IsBase(bool value) const { qfile_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (qfile_metaobject_isbase) {
            qfile_metaobject_isbase = false;
            return QFile::metaObject();
        }
        auto metaobject_cb = qfile_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QFile::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qfile_metacast_isbase) {
            qfile_metacast_isbase = false;
            return QFile::qt_metacast(param1);
        }
        auto metacast_cb = qfile_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QFile::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfile_metacall_isbase) {
            qfile_metacall_isbase = false;
            return QFile::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qfile_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QFile::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString fileName() const override {
        if (qfile_filename_isbase) {
            qfile_filename_isbase = false;
            return QFile::fileName();
        }
        auto filename_cb = qfile_filename_callback;
        if (filename_cb) {
            const char* callback_ret = filename_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QFile::fileName();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QFlags<QIODeviceBase::OpenModeFlag> flags) override {
        if (qfile_open_isbase) {
            qfile_open_isbase = false;
            return QFile::open(flags);
        }
        auto open_cb = qfile_open_callback;
        if (open_cb) {
            int cbval1 = static_cast<int>(flags);

            bool callback_ret = open_cb(this, cbval1);
            return callback_ret;
        }
        return QFile::open(flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qfile_size_isbase) {
            qfile_size_isbase = false;
            return QFile::size();
        }
        auto size_cb = qfile_size_callback;
        if (size_cb) {
            long long callback_ret = size_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QFile::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool resize(qint64 sz) override {
        if (qfile_resize_isbase) {
            qfile_resize_isbase = false;
            return QFile::resize(sz);
        }
        auto resize_cb = qfile_resize_callback;
        if (resize_cb) {
            long long cbval1 = static_cast<long long>(sz);

            bool callback_ret = resize_cb(this, cbval1);
            return callback_ret;
        }
        return QFile::resize(sz);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFileDevice::Permissions permissions() const override {
        if (qfile_permissions_isbase) {
            qfile_permissions_isbase = false;
            return QFile::permissions();
        }
        auto permissions_cb = qfile_permissions_callback;
        if (permissions_cb) {
            int callback_ret = permissions_cb();
            return static_cast<QFileDevice::Permissions>(callback_ret);
        }
        return QFile::permissions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPermissions(QFileDevice::Permissions permissionSpec) override {
        if (qfile_setpermissions_isbase) {
            qfile_setpermissions_isbase = false;
            return QFile::setPermissions(permissionSpec);
        }
        auto setpermissions_cb = qfile_setpermissions_callback;
        if (setpermissions_cb) {
            int cbval1 = static_cast<int>(permissionSpec);

            bool callback_ret = setpermissions_cb(this, cbval1);
            return callback_ret;
        }
        return QFile::setPermissions(permissionSpec);
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qfile_close_isbase) {
            qfile_close_isbase = false;
            QFile::close();
            return;
        }
        auto close_cb = qfile_close_callback;
        if (close_cb) {
            close_cb();
            return;
        }
        QFile::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qfile_issequential_isbase) {
            qfile_issequential_isbase = false;
            return QFile::isSequential();
        }
        auto issequential_cb = qfile_issequential_callback;
        if (issequential_cb) {
            bool callback_ret = issequential_cb();
            return callback_ret;
        }
        return QFile::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qfile_pos_isbase) {
            qfile_pos_isbase = false;
            return QFile::pos();
        }
        auto pos_cb = qfile_pos_callback;
        if (pos_cb) {
            long long callback_ret = pos_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QFile::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 offset) override {
        if (qfile_seek_isbase) {
            qfile_seek_isbase = false;
            return QFile::seek(offset);
        }
        auto seek_cb = qfile_seek_callback;
        if (seek_cb) {
            long long cbval1 = static_cast<long long>(offset);

            bool callback_ret = seek_cb(this, cbval1);
            return callback_ret;
        }
        return QFile::seek(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qfile_atend_isbase) {
            qfile_atend_isbase = false;
            return QFile::atEnd();
        }
        auto atend_cb = qfile_atend_callback;
        if (atend_cb) {
            bool callback_ret = atend_cb();
            return callback_ret;
        }
        return QFile::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qfile_readdata_isbase) {
            qfile_readdata_isbase = false;
            return QFile::readData(data, maxlen);
        }
        auto readdata_cb = qfile_readdata_callback;
        if (readdata_cb) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = readdata_cb(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QFile::readData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 lenVal) override {
        if (qfile_writedata_isbase) {
            qfile_writedata_isbase = false;
            return QFile::writeData(data, lenVal);
        }
        auto writedata_cb = qfile_writedata_callback;
        if (writedata_cb) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(lenVal);

            long long callback_ret = writedata_cb(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QFile::writeData(data, lenVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qfile_readlinedata_isbase) {
            qfile_readlinedata_isbase = false;
            return QFile::readLineData(data, maxlen);
        }
        auto readlinedata_cb = qfile_readlinedata_callback;
        if (readlinedata_cb) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = readlinedata_cb(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QFile::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qfile_reset_isbase) {
            qfile_reset_isbase = false;
            return QFile::reset();
        }
        auto reset_cb = qfile_reset_callback;
        if (reset_cb) {
            bool callback_ret = reset_cb();
            return callback_ret;
        }
        return QFile::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qfile_bytesavailable_isbase) {
            qfile_bytesavailable_isbase = false;
            return QFile::bytesAvailable();
        }
        auto bytesavailable_cb = qfile_bytesavailable_callback;
        if (bytesavailable_cb) {
            long long callback_ret = bytesavailable_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QFile::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qfile_bytestowrite_isbase) {
            qfile_bytestowrite_isbase = false;
            return QFile::bytesToWrite();
        }
        auto bytestowrite_cb = qfile_bytestowrite_callback;
        if (bytestowrite_cb) {
            long long callback_ret = bytestowrite_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QFile::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qfile_canreadline_isbase) {
            qfile_canreadline_isbase = false;
            return QFile::canReadLine();
        }
        auto canreadline_cb = qfile_canreadline_callback;
        if (canreadline_cb) {
            bool callback_ret = canreadline_cb();
            return callback_ret;
        }
        return QFile::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qfile_waitforreadyread_isbase) {
            qfile_waitforreadyread_isbase = false;
            return QFile::waitForReadyRead(msecs);
        }
        auto waitforreadyread_cb = qfile_waitforreadyread_callback;
        if (waitforreadyread_cb) {
            int cbval1 = msecs;

            bool callback_ret = waitforreadyread_cb(this, cbval1);
            return callback_ret;
        }
        return QFile::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qfile_waitforbyteswritten_isbase) {
            qfile_waitforbyteswritten_isbase = false;
            return QFile::waitForBytesWritten(msecs);
        }
        auto waitforbyteswritten_cb = qfile_waitforbyteswritten_callback;
        if (waitforbyteswritten_cb) {
            int cbval1 = msecs;

            bool callback_ret = waitforbyteswritten_cb(this, cbval1);
            return callback_ret;
        }
        return QFile::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qfile_skipdata_isbase) {
            qfile_skipdata_isbase = false;
            return QFile::skipData(maxSize);
        }
        auto skipdata_cb = qfile_skipdata_callback;
        if (skipdata_cb) {
            long long cbval1 = static_cast<long long>(maxSize);

            long long callback_ret = skipdata_cb(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return QFile::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qfile_event_isbase) {
            qfile_event_isbase = false;
            return QFile::event(event);
        }
        auto event_cb = qfile_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QFile::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qfile_eventfilter_isbase) {
            qfile_eventfilter_isbase = false;
            return QFile::eventFilter(watched, event);
        }
        auto eventfilter_cb = qfile_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QFile::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfile_timerevent_isbase) {
            qfile_timerevent_isbase = false;
            QFile::timerEvent(event);
            return;
        }
        auto timerevent_cb = qfile_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QFile::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfile_childevent_isbase) {
            qfile_childevent_isbase = false;
            QFile::childEvent(event);
            return;
        }
        auto childevent_cb = qfile_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QFile::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfile_customevent_isbase) {
            qfile_customevent_isbase = false;
            QFile::customEvent(event);
            return;
        }
        auto customevent_cb = qfile_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QFile::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfile_connectnotify_isbase) {
            qfile_connectnotify_isbase = false;
            QFile::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qfile_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QFile::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfile_disconnectnotify_isbase) {
            qfile_disconnectnotify_isbase = false;
            QFile::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qfile_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QFile::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (qfile_setopenmode_isbase) {
            qfile_setopenmode_isbase = false;
            QFile::setOpenMode(openMode);
            return;
        }
        auto setopenmode_cb = qfile_setopenmode_callback;
        if (setopenmode_cb) {
            int cbval1 = static_cast<int>(openMode);

            setopenmode_cb(this, cbval1);
            return;
        }
        QFile::setOpenMode(openMode);
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (qfile_seterrorstring_isbase) {
            qfile_seterrorstring_isbase = false;
            QFile::setErrorString(errorString);
            return;
        }
        auto seterrorstring_cb = qfile_seterrorstring_callback;
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
        QFile::setErrorString(errorString);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qfile_sender_isbase) {
            qfile_sender_isbase = false;
            return QFile::sender();
        }
        auto sender_cb = qfile_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QFile::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qfile_sendersignalindex_isbase) {
            qfile_sendersignalindex_isbase = false;
            return QFile::senderSignalIndex();
        }
        auto sendersignalindex_cb = qfile_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QFile::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qfile_receivers_isbase) {
            qfile_receivers_isbase = false;
            return QFile::receivers(signal);
        }
        auto receivers_cb = qfile_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QFile::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qfile_issignalconnected_isbase) {
            qfile_issignalconnected_isbase = false;
            return QFile::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qfile_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QFile::isSignalConnected(signal);
    }

    // Friend functions
    friend long long QFile_ReadData(QFile* self, char* data, long long maxlen);
    friend long long QFile_SuperReadData(QFile* self, char* data, long long maxlen);
    friend long long QFile_WriteData(QFile* self, const char* data, long long lenVal);
    friend long long QFile_SuperWriteData(QFile* self, const char* data, long long lenVal);
    friend long long QFile_ReadLineData(QFile* self, char* data, long long maxlen);
    friend long long QFile_SuperReadLineData(QFile* self, char* data, long long maxlen);
    friend long long QFile_SkipData(QFile* self, long long maxSize);
    friend long long QFile_SuperSkipData(QFile* self, long long maxSize);
    friend void QFile_TimerEvent(QFile* self, QTimerEvent* event);
    friend void QFile_SuperTimerEvent(QFile* self, QTimerEvent* event);
    friend void QFile_ChildEvent(QFile* self, QChildEvent* event);
    friend void QFile_SuperChildEvent(QFile* self, QChildEvent* event);
    friend void QFile_CustomEvent(QFile* self, QEvent* event);
    friend void QFile_SuperCustomEvent(QFile* self, QEvent* event);
    friend void QFile_ConnectNotify(QFile* self, const QMetaMethod* signal);
    friend void QFile_SuperConnectNotify(QFile* self, const QMetaMethod* signal);
    friend void QFile_DisconnectNotify(QFile* self, const QMetaMethod* signal);
    friend void QFile_SuperDisconnectNotify(QFile* self, const QMetaMethod* signal);
    friend void QFile_SetOpenMode(QFile* self, int openMode);
    friend void QFile_SuperSetOpenMode(QFile* self, int openMode);
    friend void QFile_SetErrorString(QFile* self, const libqt_string errorString);
    friend void QFile_SuperSetErrorString(QFile* self, const libqt_string errorString);
    friend QObject* QFile_Sender(const QFile* self);
    friend QObject* QFile_SuperSender(const QFile* self);
    friend int QFile_SenderSignalIndex(const QFile* self);
    friend int QFile_SuperSenderSignalIndex(const QFile* self);
    friend int QFile_Receivers(const QFile* self, const char* signal);
    friend int QFile_SuperReceivers(const QFile* self, const char* signal);
    friend bool QFile_IsSignalConnected(const QFile* self, const QMetaMethod* signal);
    friend bool QFile_SuperIsSignalConnected(const QFile* self, const QMetaMethod* signal);
};

#endif
