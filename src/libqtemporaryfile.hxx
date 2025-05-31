#pragma once
#ifndef SRCC_LIBVIRTUALQTEMPORARYFILE_H
#define SRCC_LIBVIRTUALQTEMPORARYFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTemporaryFile so that we can call protected methods
class VirtualQTemporaryFile final : public QTemporaryFile {

  public:
    // Virtual class boolean flag
    bool isVirtualQTemporaryFile = true;

    // Virtual class public types (including callbacks)
    using QTemporaryFile_Metacall_Callback = int (*)(QTemporaryFile*, int, int, void**);
    using QTemporaryFile_FileName_Callback = libqt_string (*)();
    using QTemporaryFile_OpenWithFlags_Callback = bool (*)(QTemporaryFile*, int);
    using QTemporaryFile_Size_Callback = long long (*)();
    using QTemporaryFile_Resize_Callback = bool (*)(QTemporaryFile*, long long);
    using QTemporaryFile_Permissions_Callback = int (*)();
    using QTemporaryFile_SetPermissions_Callback = bool (*)(QTemporaryFile*, int);
    using QTemporaryFile_Close_Callback = void (*)();
    using QTemporaryFile_IsSequential_Callback = bool (*)();
    using QTemporaryFile_Pos_Callback = long long (*)();
    using QTemporaryFile_Seek_Callback = bool (*)(QTemporaryFile*, long long);
    using QTemporaryFile_AtEnd_Callback = bool (*)();
    using QTemporaryFile_ReadData_Callback = long long (*)(QTemporaryFile*, char*, long long);
    using QTemporaryFile_WriteData_Callback = long long (*)(QTemporaryFile*, const char*, long long);
    using QTemporaryFile_ReadLineData_Callback = long long (*)(QTemporaryFile*, char*, long long);
    using QTemporaryFile_Reset_Callback = bool (*)();
    using QTemporaryFile_BytesAvailable_Callback = long long (*)();
    using QTemporaryFile_BytesToWrite_Callback = long long (*)();
    using QTemporaryFile_CanReadLine_Callback = bool (*)();
    using QTemporaryFile_WaitForReadyRead_Callback = bool (*)(QTemporaryFile*, int);
    using QTemporaryFile_WaitForBytesWritten_Callback = bool (*)(QTemporaryFile*, int);
    using QTemporaryFile_SkipData_Callback = long long (*)(QTemporaryFile*, long long);
    using QTemporaryFile_Event_Callback = bool (*)(QTemporaryFile*, QEvent*);
    using QTemporaryFile_EventFilter_Callback = bool (*)(QTemporaryFile*, QObject*, QEvent*);
    using QTemporaryFile_TimerEvent_Callback = void (*)(QTemporaryFile*, QTimerEvent*);
    using QTemporaryFile_ChildEvent_Callback = void (*)(QTemporaryFile*, QChildEvent*);
    using QTemporaryFile_CustomEvent_Callback = void (*)(QTemporaryFile*, QEvent*);
    using QTemporaryFile_ConnectNotify_Callback = void (*)(QTemporaryFile*, QMetaMethod*);
    using QTemporaryFile_DisconnectNotify_Callback = void (*)(QTemporaryFile*, QMetaMethod*);
    using QTemporaryFile_SetOpenMode_Callback = void (*)(QTemporaryFile*, int);
    using QTemporaryFile_SetErrorString_Callback = void (*)(QTemporaryFile*, libqt_string);
    using QTemporaryFile_Sender_Callback = QObject* (*)();
    using QTemporaryFile_SenderSignalIndex_Callback = int (*)();
    using QTemporaryFile_Receivers_Callback = int (*)(const QTemporaryFile*, const char*);
    using QTemporaryFile_IsSignalConnected_Callback = bool (*)(const QTemporaryFile*, QMetaMethod*);

  protected:
    // Instance callback storage
    QTemporaryFile_Metacall_Callback qtemporaryfile_metacall_callback = nullptr;
    QTemporaryFile_FileName_Callback qtemporaryfile_filename_callback = nullptr;
    QTemporaryFile_OpenWithFlags_Callback qtemporaryfile_openwithflags_callback = nullptr;
    QTemporaryFile_Size_Callback qtemporaryfile_size_callback = nullptr;
    QTemporaryFile_Resize_Callback qtemporaryfile_resize_callback = nullptr;
    QTemporaryFile_Permissions_Callback qtemporaryfile_permissions_callback = nullptr;
    QTemporaryFile_SetPermissions_Callback qtemporaryfile_setpermissions_callback = nullptr;
    QTemporaryFile_Close_Callback qtemporaryfile_close_callback = nullptr;
    QTemporaryFile_IsSequential_Callback qtemporaryfile_issequential_callback = nullptr;
    QTemporaryFile_Pos_Callback qtemporaryfile_pos_callback = nullptr;
    QTemporaryFile_Seek_Callback qtemporaryfile_seek_callback = nullptr;
    QTemporaryFile_AtEnd_Callback qtemporaryfile_atend_callback = nullptr;
    QTemporaryFile_ReadData_Callback qtemporaryfile_readdata_callback = nullptr;
    QTemporaryFile_WriteData_Callback qtemporaryfile_writedata_callback = nullptr;
    QTemporaryFile_ReadLineData_Callback qtemporaryfile_readlinedata_callback = nullptr;
    QTemporaryFile_Reset_Callback qtemporaryfile_reset_callback = nullptr;
    QTemporaryFile_BytesAvailable_Callback qtemporaryfile_bytesavailable_callback = nullptr;
    QTemporaryFile_BytesToWrite_Callback qtemporaryfile_bytestowrite_callback = nullptr;
    QTemporaryFile_CanReadLine_Callback qtemporaryfile_canreadline_callback = nullptr;
    QTemporaryFile_WaitForReadyRead_Callback qtemporaryfile_waitforreadyread_callback = nullptr;
    QTemporaryFile_WaitForBytesWritten_Callback qtemporaryfile_waitforbyteswritten_callback = nullptr;
    QTemporaryFile_SkipData_Callback qtemporaryfile_skipdata_callback = nullptr;
    QTemporaryFile_Event_Callback qtemporaryfile_event_callback = nullptr;
    QTemporaryFile_EventFilter_Callback qtemporaryfile_eventfilter_callback = nullptr;
    QTemporaryFile_TimerEvent_Callback qtemporaryfile_timerevent_callback = nullptr;
    QTemporaryFile_ChildEvent_Callback qtemporaryfile_childevent_callback = nullptr;
    QTemporaryFile_CustomEvent_Callback qtemporaryfile_customevent_callback = nullptr;
    QTemporaryFile_ConnectNotify_Callback qtemporaryfile_connectnotify_callback = nullptr;
    QTemporaryFile_DisconnectNotify_Callback qtemporaryfile_disconnectnotify_callback = nullptr;
    QTemporaryFile_SetOpenMode_Callback qtemporaryfile_setopenmode_callback = nullptr;
    QTemporaryFile_SetErrorString_Callback qtemporaryfile_seterrorstring_callback = nullptr;
    QTemporaryFile_Sender_Callback qtemporaryfile_sender_callback = nullptr;
    QTemporaryFile_SenderSignalIndex_Callback qtemporaryfile_sendersignalindex_callback = nullptr;
    QTemporaryFile_Receivers_Callback qtemporaryfile_receivers_callback = nullptr;
    QTemporaryFile_IsSignalConnected_Callback qtemporaryfile_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtemporaryfile_metacall_isbase = false;
    mutable bool qtemporaryfile_filename_isbase = false;
    mutable bool qtemporaryfile_openwithflags_isbase = false;
    mutable bool qtemporaryfile_size_isbase = false;
    mutable bool qtemporaryfile_resize_isbase = false;
    mutable bool qtemporaryfile_permissions_isbase = false;
    mutable bool qtemporaryfile_setpermissions_isbase = false;
    mutable bool qtemporaryfile_close_isbase = false;
    mutable bool qtemporaryfile_issequential_isbase = false;
    mutable bool qtemporaryfile_pos_isbase = false;
    mutable bool qtemporaryfile_seek_isbase = false;
    mutable bool qtemporaryfile_atend_isbase = false;
    mutable bool qtemporaryfile_readdata_isbase = false;
    mutable bool qtemporaryfile_writedata_isbase = false;
    mutable bool qtemporaryfile_readlinedata_isbase = false;
    mutable bool qtemporaryfile_reset_isbase = false;
    mutable bool qtemporaryfile_bytesavailable_isbase = false;
    mutable bool qtemporaryfile_bytestowrite_isbase = false;
    mutable bool qtemporaryfile_canreadline_isbase = false;
    mutable bool qtemporaryfile_waitforreadyread_isbase = false;
    mutable bool qtemporaryfile_waitforbyteswritten_isbase = false;
    mutable bool qtemporaryfile_skipdata_isbase = false;
    mutable bool qtemporaryfile_event_isbase = false;
    mutable bool qtemporaryfile_eventfilter_isbase = false;
    mutable bool qtemporaryfile_timerevent_isbase = false;
    mutable bool qtemporaryfile_childevent_isbase = false;
    mutable bool qtemporaryfile_customevent_isbase = false;
    mutable bool qtemporaryfile_connectnotify_isbase = false;
    mutable bool qtemporaryfile_disconnectnotify_isbase = false;
    mutable bool qtemporaryfile_setopenmode_isbase = false;
    mutable bool qtemporaryfile_seterrorstring_isbase = false;
    mutable bool qtemporaryfile_sender_isbase = false;
    mutable bool qtemporaryfile_sendersignalindex_isbase = false;
    mutable bool qtemporaryfile_receivers_isbase = false;
    mutable bool qtemporaryfile_issignalconnected_isbase = false;

  public:
    VirtualQTemporaryFile() : QTemporaryFile(){};
    VirtualQTemporaryFile(const QString& templateName) : QTemporaryFile(templateName){};
    VirtualQTemporaryFile(QObject* parent) : QTemporaryFile(parent){};
    VirtualQTemporaryFile(const QString& templateName, QObject* parent) : QTemporaryFile(templateName, parent){};

    ~VirtualQTemporaryFile() {
        qtemporaryfile_metacall_callback = nullptr;
        qtemporaryfile_filename_callback = nullptr;
        qtemporaryfile_openwithflags_callback = nullptr;
        qtemporaryfile_size_callback = nullptr;
        qtemporaryfile_resize_callback = nullptr;
        qtemporaryfile_permissions_callback = nullptr;
        qtemporaryfile_setpermissions_callback = nullptr;
        qtemporaryfile_close_callback = nullptr;
        qtemporaryfile_issequential_callback = nullptr;
        qtemporaryfile_pos_callback = nullptr;
        qtemporaryfile_seek_callback = nullptr;
        qtemporaryfile_atend_callback = nullptr;
        qtemporaryfile_readdata_callback = nullptr;
        qtemporaryfile_writedata_callback = nullptr;
        qtemporaryfile_readlinedata_callback = nullptr;
        qtemporaryfile_reset_callback = nullptr;
        qtemporaryfile_bytesavailable_callback = nullptr;
        qtemporaryfile_bytestowrite_callback = nullptr;
        qtemporaryfile_canreadline_callback = nullptr;
        qtemporaryfile_waitforreadyread_callback = nullptr;
        qtemporaryfile_waitforbyteswritten_callback = nullptr;
        qtemporaryfile_skipdata_callback = nullptr;
        qtemporaryfile_event_callback = nullptr;
        qtemporaryfile_eventfilter_callback = nullptr;
        qtemporaryfile_timerevent_callback = nullptr;
        qtemporaryfile_childevent_callback = nullptr;
        qtemporaryfile_customevent_callback = nullptr;
        qtemporaryfile_connectnotify_callback = nullptr;
        qtemporaryfile_disconnectnotify_callback = nullptr;
        qtemporaryfile_setopenmode_callback = nullptr;
        qtemporaryfile_seterrorstring_callback = nullptr;
        qtemporaryfile_sender_callback = nullptr;
        qtemporaryfile_sendersignalindex_callback = nullptr;
        qtemporaryfile_receivers_callback = nullptr;
        qtemporaryfile_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQTemporaryFile_Metacall_Callback(QTemporaryFile_Metacall_Callback cb) { qtemporaryfile_metacall_callback = cb; }
    inline void setQTemporaryFile_FileName_Callback(QTemporaryFile_FileName_Callback cb) { qtemporaryfile_filename_callback = cb; }
    inline void setQTemporaryFile_OpenWithFlags_Callback(QTemporaryFile_OpenWithFlags_Callback cb) { qtemporaryfile_openwithflags_callback = cb; }
    inline void setQTemporaryFile_Size_Callback(QTemporaryFile_Size_Callback cb) { qtemporaryfile_size_callback = cb; }
    inline void setQTemporaryFile_Resize_Callback(QTemporaryFile_Resize_Callback cb) { qtemporaryfile_resize_callback = cb; }
    inline void setQTemporaryFile_Permissions_Callback(QTemporaryFile_Permissions_Callback cb) { qtemporaryfile_permissions_callback = cb; }
    inline void setQTemporaryFile_SetPermissions_Callback(QTemporaryFile_SetPermissions_Callback cb) { qtemporaryfile_setpermissions_callback = cb; }
    inline void setQTemporaryFile_Close_Callback(QTemporaryFile_Close_Callback cb) { qtemporaryfile_close_callback = cb; }
    inline void setQTemporaryFile_IsSequential_Callback(QTemporaryFile_IsSequential_Callback cb) { qtemporaryfile_issequential_callback = cb; }
    inline void setQTemporaryFile_Pos_Callback(QTemporaryFile_Pos_Callback cb) { qtemporaryfile_pos_callback = cb; }
    inline void setQTemporaryFile_Seek_Callback(QTemporaryFile_Seek_Callback cb) { qtemporaryfile_seek_callback = cb; }
    inline void setQTemporaryFile_AtEnd_Callback(QTemporaryFile_AtEnd_Callback cb) { qtemporaryfile_atend_callback = cb; }
    inline void setQTemporaryFile_ReadData_Callback(QTemporaryFile_ReadData_Callback cb) { qtemporaryfile_readdata_callback = cb; }
    inline void setQTemporaryFile_WriteData_Callback(QTemporaryFile_WriteData_Callback cb) { qtemporaryfile_writedata_callback = cb; }
    inline void setQTemporaryFile_ReadLineData_Callback(QTemporaryFile_ReadLineData_Callback cb) { qtemporaryfile_readlinedata_callback = cb; }
    inline void setQTemporaryFile_Reset_Callback(QTemporaryFile_Reset_Callback cb) { qtemporaryfile_reset_callback = cb; }
    inline void setQTemporaryFile_BytesAvailable_Callback(QTemporaryFile_BytesAvailable_Callback cb) { qtemporaryfile_bytesavailable_callback = cb; }
    inline void setQTemporaryFile_BytesToWrite_Callback(QTemporaryFile_BytesToWrite_Callback cb) { qtemporaryfile_bytestowrite_callback = cb; }
    inline void setQTemporaryFile_CanReadLine_Callback(QTemporaryFile_CanReadLine_Callback cb) { qtemporaryfile_canreadline_callback = cb; }
    inline void setQTemporaryFile_WaitForReadyRead_Callback(QTemporaryFile_WaitForReadyRead_Callback cb) { qtemporaryfile_waitforreadyread_callback = cb; }
    inline void setQTemporaryFile_WaitForBytesWritten_Callback(QTemporaryFile_WaitForBytesWritten_Callback cb) { qtemporaryfile_waitforbyteswritten_callback = cb; }
    inline void setQTemporaryFile_SkipData_Callback(QTemporaryFile_SkipData_Callback cb) { qtemporaryfile_skipdata_callback = cb; }
    inline void setQTemporaryFile_Event_Callback(QTemporaryFile_Event_Callback cb) { qtemporaryfile_event_callback = cb; }
    inline void setQTemporaryFile_EventFilter_Callback(QTemporaryFile_EventFilter_Callback cb) { qtemporaryfile_eventfilter_callback = cb; }
    inline void setQTemporaryFile_TimerEvent_Callback(QTemporaryFile_TimerEvent_Callback cb) { qtemporaryfile_timerevent_callback = cb; }
    inline void setQTemporaryFile_ChildEvent_Callback(QTemporaryFile_ChildEvent_Callback cb) { qtemporaryfile_childevent_callback = cb; }
    inline void setQTemporaryFile_CustomEvent_Callback(QTemporaryFile_CustomEvent_Callback cb) { qtemporaryfile_customevent_callback = cb; }
    inline void setQTemporaryFile_ConnectNotify_Callback(QTemporaryFile_ConnectNotify_Callback cb) { qtemporaryfile_connectnotify_callback = cb; }
    inline void setQTemporaryFile_DisconnectNotify_Callback(QTemporaryFile_DisconnectNotify_Callback cb) { qtemporaryfile_disconnectnotify_callback = cb; }
    inline void setQTemporaryFile_SetOpenMode_Callback(QTemporaryFile_SetOpenMode_Callback cb) { qtemporaryfile_setopenmode_callback = cb; }
    inline void setQTemporaryFile_SetErrorString_Callback(QTemporaryFile_SetErrorString_Callback cb) { qtemporaryfile_seterrorstring_callback = cb; }
    inline void setQTemporaryFile_Sender_Callback(QTemporaryFile_Sender_Callback cb) { qtemporaryfile_sender_callback = cb; }
    inline void setQTemporaryFile_SenderSignalIndex_Callback(QTemporaryFile_SenderSignalIndex_Callback cb) { qtemporaryfile_sendersignalindex_callback = cb; }
    inline void setQTemporaryFile_Receivers_Callback(QTemporaryFile_Receivers_Callback cb) { qtemporaryfile_receivers_callback = cb; }
    inline void setQTemporaryFile_IsSignalConnected_Callback(QTemporaryFile_IsSignalConnected_Callback cb) { qtemporaryfile_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQTemporaryFile_Metacall_IsBase(bool value) const { qtemporaryfile_metacall_isbase = value; }
    inline void setQTemporaryFile_FileName_IsBase(bool value) const { qtemporaryfile_filename_isbase = value; }
    inline void setQTemporaryFile_OpenWithFlags_IsBase(bool value) const { qtemporaryfile_openwithflags_isbase = value; }
    inline void setQTemporaryFile_Size_IsBase(bool value) const { qtemporaryfile_size_isbase = value; }
    inline void setQTemporaryFile_Resize_IsBase(bool value) const { qtemporaryfile_resize_isbase = value; }
    inline void setQTemporaryFile_Permissions_IsBase(bool value) const { qtemporaryfile_permissions_isbase = value; }
    inline void setQTemporaryFile_SetPermissions_IsBase(bool value) const { qtemporaryfile_setpermissions_isbase = value; }
    inline void setQTemporaryFile_Close_IsBase(bool value) const { qtemporaryfile_close_isbase = value; }
    inline void setQTemporaryFile_IsSequential_IsBase(bool value) const { qtemporaryfile_issequential_isbase = value; }
    inline void setQTemporaryFile_Pos_IsBase(bool value) const { qtemporaryfile_pos_isbase = value; }
    inline void setQTemporaryFile_Seek_IsBase(bool value) const { qtemporaryfile_seek_isbase = value; }
    inline void setQTemporaryFile_AtEnd_IsBase(bool value) const { qtemporaryfile_atend_isbase = value; }
    inline void setQTemporaryFile_ReadData_IsBase(bool value) const { qtemporaryfile_readdata_isbase = value; }
    inline void setQTemporaryFile_WriteData_IsBase(bool value) const { qtemporaryfile_writedata_isbase = value; }
    inline void setQTemporaryFile_ReadLineData_IsBase(bool value) const { qtemporaryfile_readlinedata_isbase = value; }
    inline void setQTemporaryFile_Reset_IsBase(bool value) const { qtemporaryfile_reset_isbase = value; }
    inline void setQTemporaryFile_BytesAvailable_IsBase(bool value) const { qtemporaryfile_bytesavailable_isbase = value; }
    inline void setQTemporaryFile_BytesToWrite_IsBase(bool value) const { qtemporaryfile_bytestowrite_isbase = value; }
    inline void setQTemporaryFile_CanReadLine_IsBase(bool value) const { qtemporaryfile_canreadline_isbase = value; }
    inline void setQTemporaryFile_WaitForReadyRead_IsBase(bool value) const { qtemporaryfile_waitforreadyread_isbase = value; }
    inline void setQTemporaryFile_WaitForBytesWritten_IsBase(bool value) const { qtemporaryfile_waitforbyteswritten_isbase = value; }
    inline void setQTemporaryFile_SkipData_IsBase(bool value) const { qtemporaryfile_skipdata_isbase = value; }
    inline void setQTemporaryFile_Event_IsBase(bool value) const { qtemporaryfile_event_isbase = value; }
    inline void setQTemporaryFile_EventFilter_IsBase(bool value) const { qtemporaryfile_eventfilter_isbase = value; }
    inline void setQTemporaryFile_TimerEvent_IsBase(bool value) const { qtemporaryfile_timerevent_isbase = value; }
    inline void setQTemporaryFile_ChildEvent_IsBase(bool value) const { qtemporaryfile_childevent_isbase = value; }
    inline void setQTemporaryFile_CustomEvent_IsBase(bool value) const { qtemporaryfile_customevent_isbase = value; }
    inline void setQTemporaryFile_ConnectNotify_IsBase(bool value) const { qtemporaryfile_connectnotify_isbase = value; }
    inline void setQTemporaryFile_DisconnectNotify_IsBase(bool value) const { qtemporaryfile_disconnectnotify_isbase = value; }
    inline void setQTemporaryFile_SetOpenMode_IsBase(bool value) const { qtemporaryfile_setopenmode_isbase = value; }
    inline void setQTemporaryFile_SetErrorString_IsBase(bool value) const { qtemporaryfile_seterrorstring_isbase = value; }
    inline void setQTemporaryFile_Sender_IsBase(bool value) const { qtemporaryfile_sender_isbase = value; }
    inline void setQTemporaryFile_SenderSignalIndex_IsBase(bool value) const { qtemporaryfile_sendersignalindex_isbase = value; }
    inline void setQTemporaryFile_Receivers_IsBase(bool value) const { qtemporaryfile_receivers_isbase = value; }
    inline void setQTemporaryFile_IsSignalConnected_IsBase(bool value) const { qtemporaryfile_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtemporaryfile_metacall_isbase) {
            qtemporaryfile_metacall_isbase = false;
            return QTemporaryFile::qt_metacall(param1, param2, param3);
        } else if (qtemporaryfile_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qtemporaryfile_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QTemporaryFile::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString fileName() const override {
        if (qtemporaryfile_filename_isbase) {
            qtemporaryfile_filename_isbase = false;
            return QTemporaryFile::fileName();
        } else if (qtemporaryfile_filename_callback != nullptr) {
            libqt_string callback_ret = qtemporaryfile_filename_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QTemporaryFile::fileName();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode flags) override {
        if (qtemporaryfile_openwithflags_isbase) {
            qtemporaryfile_openwithflags_isbase = false;
            return QTemporaryFile::open(flags);
        } else if (qtemporaryfile_openwithflags_callback != nullptr) {
            int cbval1 = static_cast<int>(flags);

            bool callback_ret = qtemporaryfile_openwithflags_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTemporaryFile::open(flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qtemporaryfile_size_isbase) {
            qtemporaryfile_size_isbase = false;
            return QTemporaryFile::size();
        } else if (qtemporaryfile_size_callback != nullptr) {
            long long callback_ret = qtemporaryfile_size_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QTemporaryFile::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool resize(qint64 sz) override {
        if (qtemporaryfile_resize_isbase) {
            qtemporaryfile_resize_isbase = false;
            return QTemporaryFile::resize(sz);
        } else if (qtemporaryfile_resize_callback != nullptr) {
            long long cbval1 = static_cast<long long>(sz);

            bool callback_ret = qtemporaryfile_resize_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTemporaryFile::resize(sz);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFileDevice::Permissions permissions() const override {
        if (qtemporaryfile_permissions_isbase) {
            qtemporaryfile_permissions_isbase = false;
            return QTemporaryFile::permissions();
        } else if (qtemporaryfile_permissions_callback != nullptr) {
            int callback_ret = qtemporaryfile_permissions_callback();
            return static_cast<QFileDevice::Permissions>(callback_ret);
        } else {
            return QTemporaryFile::permissions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPermissions(QFileDevice::Permissions permissionSpec) override {
        if (qtemporaryfile_setpermissions_isbase) {
            qtemporaryfile_setpermissions_isbase = false;
            return QTemporaryFile::setPermissions(permissionSpec);
        } else if (qtemporaryfile_setpermissions_callback != nullptr) {
            int cbval1 = static_cast<int>(permissionSpec);

            bool callback_ret = qtemporaryfile_setpermissions_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTemporaryFile::setPermissions(permissionSpec);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qtemporaryfile_close_isbase) {
            qtemporaryfile_close_isbase = false;
            QTemporaryFile::close();
        } else if (qtemporaryfile_close_callback != nullptr) {
            qtemporaryfile_close_callback();
        } else {
            QTemporaryFile::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qtemporaryfile_issequential_isbase) {
            qtemporaryfile_issequential_isbase = false;
            return QTemporaryFile::isSequential();
        } else if (qtemporaryfile_issequential_callback != nullptr) {
            bool callback_ret = qtemporaryfile_issequential_callback();
            return callback_ret;
        } else {
            return QTemporaryFile::isSequential();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qtemporaryfile_pos_isbase) {
            qtemporaryfile_pos_isbase = false;
            return QTemporaryFile::pos();
        } else if (qtemporaryfile_pos_callback != nullptr) {
            long long callback_ret = qtemporaryfile_pos_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QTemporaryFile::pos();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 offset) override {
        if (qtemporaryfile_seek_isbase) {
            qtemporaryfile_seek_isbase = false;
            return QTemporaryFile::seek(offset);
        } else if (qtemporaryfile_seek_callback != nullptr) {
            long long cbval1 = static_cast<long long>(offset);

            bool callback_ret = qtemporaryfile_seek_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTemporaryFile::seek(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qtemporaryfile_atend_isbase) {
            qtemporaryfile_atend_isbase = false;
            return QTemporaryFile::atEnd();
        } else if (qtemporaryfile_atend_callback != nullptr) {
            bool callback_ret = qtemporaryfile_atend_callback();
            return callback_ret;
        } else {
            return QTemporaryFile::atEnd();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qtemporaryfile_readdata_isbase) {
            qtemporaryfile_readdata_isbase = false;
            return QTemporaryFile::readData(data, maxlen);
        } else if (qtemporaryfile_readdata_callback != nullptr) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = qtemporaryfile_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QTemporaryFile::readData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 lenVal) override {
        if (qtemporaryfile_writedata_isbase) {
            qtemporaryfile_writedata_isbase = false;
            return QTemporaryFile::writeData(data, lenVal);
        } else if (qtemporaryfile_writedata_callback != nullptr) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(lenVal);

            long long callback_ret = qtemporaryfile_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QTemporaryFile::writeData(data, lenVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qtemporaryfile_readlinedata_isbase) {
            qtemporaryfile_readlinedata_isbase = false;
            return QTemporaryFile::readLineData(data, maxlen);
        } else if (qtemporaryfile_readlinedata_callback != nullptr) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = qtemporaryfile_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QTemporaryFile::readLineData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qtemporaryfile_reset_isbase) {
            qtemporaryfile_reset_isbase = false;
            return QTemporaryFile::reset();
        } else if (qtemporaryfile_reset_callback != nullptr) {
            bool callback_ret = qtemporaryfile_reset_callback();
            return callback_ret;
        } else {
            return QTemporaryFile::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qtemporaryfile_bytesavailable_isbase) {
            qtemporaryfile_bytesavailable_isbase = false;
            return QTemporaryFile::bytesAvailable();
        } else if (qtemporaryfile_bytesavailable_callback != nullptr) {
            long long callback_ret = qtemporaryfile_bytesavailable_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QTemporaryFile::bytesAvailable();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qtemporaryfile_bytestowrite_isbase) {
            qtemporaryfile_bytestowrite_isbase = false;
            return QTemporaryFile::bytesToWrite();
        } else if (qtemporaryfile_bytestowrite_callback != nullptr) {
            long long callback_ret = qtemporaryfile_bytestowrite_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QTemporaryFile::bytesToWrite();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qtemporaryfile_canreadline_isbase) {
            qtemporaryfile_canreadline_isbase = false;
            return QTemporaryFile::canReadLine();
        } else if (qtemporaryfile_canreadline_callback != nullptr) {
            bool callback_ret = qtemporaryfile_canreadline_callback();
            return callback_ret;
        } else {
            return QTemporaryFile::canReadLine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qtemporaryfile_waitforreadyread_isbase) {
            qtemporaryfile_waitforreadyread_isbase = false;
            return QTemporaryFile::waitForReadyRead(msecs);
        } else if (qtemporaryfile_waitforreadyread_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qtemporaryfile_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTemporaryFile::waitForReadyRead(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qtemporaryfile_waitforbyteswritten_isbase) {
            qtemporaryfile_waitforbyteswritten_isbase = false;
            return QTemporaryFile::waitForBytesWritten(msecs);
        } else if (qtemporaryfile_waitforbyteswritten_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qtemporaryfile_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTemporaryFile::waitForBytesWritten(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qtemporaryfile_skipdata_isbase) {
            qtemporaryfile_skipdata_isbase = false;
            return QTemporaryFile::skipData(maxSize);
        } else if (qtemporaryfile_skipdata_callback != nullptr) {
            long long cbval1 = static_cast<long long>(maxSize);

            long long callback_ret = qtemporaryfile_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        } else {
            return QTemporaryFile::skipData(maxSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtemporaryfile_event_isbase) {
            qtemporaryfile_event_isbase = false;
            return QTemporaryFile::event(event);
        } else if (qtemporaryfile_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qtemporaryfile_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTemporaryFile::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtemporaryfile_eventfilter_isbase) {
            qtemporaryfile_eventfilter_isbase = false;
            return QTemporaryFile::eventFilter(watched, event);
        } else if (qtemporaryfile_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qtemporaryfile_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QTemporaryFile::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtemporaryfile_timerevent_isbase) {
            qtemporaryfile_timerevent_isbase = false;
            QTemporaryFile::timerEvent(event);
        } else if (qtemporaryfile_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qtemporaryfile_timerevent_callback(this, cbval1);
        } else {
            QTemporaryFile::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtemporaryfile_childevent_isbase) {
            qtemporaryfile_childevent_isbase = false;
            QTemporaryFile::childEvent(event);
        } else if (qtemporaryfile_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qtemporaryfile_childevent_callback(this, cbval1);
        } else {
            QTemporaryFile::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtemporaryfile_customevent_isbase) {
            qtemporaryfile_customevent_isbase = false;
            QTemporaryFile::customEvent(event);
        } else if (qtemporaryfile_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qtemporaryfile_customevent_callback(this, cbval1);
        } else {
            QTemporaryFile::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtemporaryfile_connectnotify_isbase) {
            qtemporaryfile_connectnotify_isbase = false;
            QTemporaryFile::connectNotify(signal);
        } else if (qtemporaryfile_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtemporaryfile_connectnotify_callback(this, cbval1);
        } else {
            QTemporaryFile::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtemporaryfile_disconnectnotify_isbase) {
            qtemporaryfile_disconnectnotify_isbase = false;
            QTemporaryFile::disconnectNotify(signal);
        } else if (qtemporaryfile_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtemporaryfile_disconnectnotify_callback(this, cbval1);
        } else {
            QTemporaryFile::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (qtemporaryfile_setopenmode_isbase) {
            qtemporaryfile_setopenmode_isbase = false;
            QTemporaryFile::setOpenMode(openMode);
        } else if (qtemporaryfile_setopenmode_callback != nullptr) {
            int cbval1 = static_cast<int>(openMode);

            qtemporaryfile_setopenmode_callback(this, cbval1);
        } else {
            QTemporaryFile::setOpenMode(openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (qtemporaryfile_seterrorstring_isbase) {
            qtemporaryfile_seterrorstring_isbase = false;
            QTemporaryFile::setErrorString(errorString);
        } else if (qtemporaryfile_seterrorstring_callback != nullptr) {
            const QString errorString_ret = errorString;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorString_b = errorString_ret.toUtf8();
            libqt_string errorString_str;
            errorString_str.len = errorString_b.length();
            errorString_str.data = static_cast<char*>(malloc((errorString_str.len + 1) * sizeof(char)));
            memcpy(errorString_str.data, errorString_b.data(), errorString_str.len);
            errorString_str.data[errorString_str.len] = '\0';
            libqt_string cbval1 = errorString_str;

            qtemporaryfile_seterrorstring_callback(this, cbval1);
        } else {
            QTemporaryFile::setErrorString(errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtemporaryfile_sender_isbase) {
            qtemporaryfile_sender_isbase = false;
            return QTemporaryFile::sender();
        } else if (qtemporaryfile_sender_callback != nullptr) {
            QObject* callback_ret = qtemporaryfile_sender_callback();
            return callback_ret;
        } else {
            return QTemporaryFile::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtemporaryfile_sendersignalindex_isbase) {
            qtemporaryfile_sendersignalindex_isbase = false;
            return QTemporaryFile::senderSignalIndex();
        } else if (qtemporaryfile_sendersignalindex_callback != nullptr) {
            int callback_ret = qtemporaryfile_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTemporaryFile::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtemporaryfile_receivers_isbase) {
            qtemporaryfile_receivers_isbase = false;
            return QTemporaryFile::receivers(signal);
        } else if (qtemporaryfile_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qtemporaryfile_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTemporaryFile::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtemporaryfile_issignalconnected_isbase) {
            qtemporaryfile_issignalconnected_isbase = false;
            return QTemporaryFile::isSignalConnected(signal);
        } else if (qtemporaryfile_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qtemporaryfile_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTemporaryFile::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QTemporaryFile_OpenWithFlags(QTemporaryFile* self, int flags);
    friend bool QTemporaryFile_QBaseOpenWithFlags(QTemporaryFile* self, int flags);
    friend long long QTemporaryFile_ReadData(QTemporaryFile* self, char* data, long long maxlen);
    friend long long QTemporaryFile_QBaseReadData(QTemporaryFile* self, char* data, long long maxlen);
    friend long long QTemporaryFile_WriteData(QTemporaryFile* self, const char* data, long long lenVal);
    friend long long QTemporaryFile_QBaseWriteData(QTemporaryFile* self, const char* data, long long lenVal);
    friend long long QTemporaryFile_ReadLineData(QTemporaryFile* self, char* data, long long maxlen);
    friend long long QTemporaryFile_QBaseReadLineData(QTemporaryFile* self, char* data, long long maxlen);
    friend long long QTemporaryFile_SkipData(QTemporaryFile* self, long long maxSize);
    friend long long QTemporaryFile_QBaseSkipData(QTemporaryFile* self, long long maxSize);
    friend void QTemporaryFile_TimerEvent(QTemporaryFile* self, QTimerEvent* event);
    friend void QTemporaryFile_QBaseTimerEvent(QTemporaryFile* self, QTimerEvent* event);
    friend void QTemporaryFile_ChildEvent(QTemporaryFile* self, QChildEvent* event);
    friend void QTemporaryFile_QBaseChildEvent(QTemporaryFile* self, QChildEvent* event);
    friend void QTemporaryFile_CustomEvent(QTemporaryFile* self, QEvent* event);
    friend void QTemporaryFile_QBaseCustomEvent(QTemporaryFile* self, QEvent* event);
    friend void QTemporaryFile_ConnectNotify(QTemporaryFile* self, const QMetaMethod* signal);
    friend void QTemporaryFile_QBaseConnectNotify(QTemporaryFile* self, const QMetaMethod* signal);
    friend void QTemporaryFile_DisconnectNotify(QTemporaryFile* self, const QMetaMethod* signal);
    friend void QTemporaryFile_QBaseDisconnectNotify(QTemporaryFile* self, const QMetaMethod* signal);
    friend void QTemporaryFile_SetOpenMode(QTemporaryFile* self, int openMode);
    friend void QTemporaryFile_QBaseSetOpenMode(QTemporaryFile* self, int openMode);
    friend void QTemporaryFile_SetErrorString(QTemporaryFile* self, const libqt_string errorString);
    friend void QTemporaryFile_QBaseSetErrorString(QTemporaryFile* self, const libqt_string errorString);
    friend QObject* QTemporaryFile_Sender(const QTemporaryFile* self);
    friend QObject* QTemporaryFile_QBaseSender(const QTemporaryFile* self);
    friend int QTemporaryFile_SenderSignalIndex(const QTemporaryFile* self);
    friend int QTemporaryFile_QBaseSenderSignalIndex(const QTemporaryFile* self);
    friend int QTemporaryFile_Receivers(const QTemporaryFile* self, const char* signal);
    friend int QTemporaryFile_QBaseReceivers(const QTemporaryFile* self, const char* signal);
    friend bool QTemporaryFile_IsSignalConnected(const QTemporaryFile* self, const QMetaMethod* signal);
    friend bool QTemporaryFile_QBaseIsSignalConnected(const QTemporaryFile* self, const QMetaMethod* signal);
};

#endif
