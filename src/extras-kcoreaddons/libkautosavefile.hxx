#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKAUTOSAVEFILE_H
#define SRC_EXTRAS_KCOREADDONSC_LIBVIRTUALKAUTOSAVEFILE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KAutoSaveFile so that we can call protected methods
class VirtualKAutoSaveFile final : public KAutoSaveFile {

  public:
    // Virtual class boolean flag
    bool isVirtualKAutoSaveFile = true;

    // Virtual class public types (including callbacks)
    using KAutoSaveFile_Metacall_Callback = int (*)(KAutoSaveFile*, int, int, void**);
    using KAutoSaveFile_ReleaseLock_Callback = void (*)();
    using KAutoSaveFile_Open_Callback = bool (*)(KAutoSaveFile*, int);
    using KAutoSaveFile_FileName_Callback = const char* (*)();
    using KAutoSaveFile_Size_Callback = long long (*)();
    using KAutoSaveFile_Resize_Callback = bool (*)(KAutoSaveFile*, long long);
    using KAutoSaveFile_Permissions_Callback = int (*)();
    using KAutoSaveFile_SetPermissions_Callback = bool (*)(KAutoSaveFile*, int);
    using KAutoSaveFile_Close_Callback = void (*)();
    using KAutoSaveFile_IsSequential_Callback = bool (*)();
    using KAutoSaveFile_Pos_Callback = long long (*)();
    using KAutoSaveFile_Seek_Callback = bool (*)(KAutoSaveFile*, long long);
    using KAutoSaveFile_AtEnd_Callback = bool (*)();
    using KAutoSaveFile_ReadData_Callback = long long (*)(KAutoSaveFile*, char*, long long);
    using KAutoSaveFile_WriteData_Callback = long long (*)(KAutoSaveFile*, const char*, long long);
    using KAutoSaveFile_ReadLineData_Callback = long long (*)(KAutoSaveFile*, char*, long long);
    using KAutoSaveFile_Reset_Callback = bool (*)();
    using KAutoSaveFile_BytesAvailable_Callback = long long (*)();
    using KAutoSaveFile_BytesToWrite_Callback = long long (*)();
    using KAutoSaveFile_CanReadLine_Callback = bool (*)();
    using KAutoSaveFile_WaitForReadyRead_Callback = bool (*)(KAutoSaveFile*, int);
    using KAutoSaveFile_WaitForBytesWritten_Callback = bool (*)(KAutoSaveFile*, int);
    using KAutoSaveFile_SkipData_Callback = long long (*)(KAutoSaveFile*, long long);
    using KAutoSaveFile_Event_Callback = bool (*)(KAutoSaveFile*, QEvent*);
    using KAutoSaveFile_EventFilter_Callback = bool (*)(KAutoSaveFile*, QObject*, QEvent*);
    using KAutoSaveFile_TimerEvent_Callback = void (*)(KAutoSaveFile*, QTimerEvent*);
    using KAutoSaveFile_ChildEvent_Callback = void (*)(KAutoSaveFile*, QChildEvent*);
    using KAutoSaveFile_CustomEvent_Callback = void (*)(KAutoSaveFile*, QEvent*);
    using KAutoSaveFile_ConnectNotify_Callback = void (*)(KAutoSaveFile*, QMetaMethod*);
    using KAutoSaveFile_DisconnectNotify_Callback = void (*)(KAutoSaveFile*, QMetaMethod*);
    using KAutoSaveFile_SetOpenMode_Callback = void (*)(KAutoSaveFile*, int);
    using KAutoSaveFile_SetErrorString_Callback = void (*)(KAutoSaveFile*, libqt_string);
    using KAutoSaveFile_Sender_Callback = QObject* (*)();
    using KAutoSaveFile_SenderSignalIndex_Callback = int (*)();
    using KAutoSaveFile_Receivers_Callback = int (*)(const KAutoSaveFile*, const char*);
    using KAutoSaveFile_IsSignalConnected_Callback = bool (*)(const KAutoSaveFile*, QMetaMethod*);

  protected:
    // Instance callback storage
    KAutoSaveFile_Metacall_Callback kautosavefile_metacall_callback = nullptr;
    KAutoSaveFile_ReleaseLock_Callback kautosavefile_releaselock_callback = nullptr;
    KAutoSaveFile_Open_Callback kautosavefile_open_callback = nullptr;
    KAutoSaveFile_FileName_Callback kautosavefile_filename_callback = nullptr;
    KAutoSaveFile_Size_Callback kautosavefile_size_callback = nullptr;
    KAutoSaveFile_Resize_Callback kautosavefile_resize_callback = nullptr;
    KAutoSaveFile_Permissions_Callback kautosavefile_permissions_callback = nullptr;
    KAutoSaveFile_SetPermissions_Callback kautosavefile_setpermissions_callback = nullptr;
    KAutoSaveFile_Close_Callback kautosavefile_close_callback = nullptr;
    KAutoSaveFile_IsSequential_Callback kautosavefile_issequential_callback = nullptr;
    KAutoSaveFile_Pos_Callback kautosavefile_pos_callback = nullptr;
    KAutoSaveFile_Seek_Callback kautosavefile_seek_callback = nullptr;
    KAutoSaveFile_AtEnd_Callback kautosavefile_atend_callback = nullptr;
    KAutoSaveFile_ReadData_Callback kautosavefile_readdata_callback = nullptr;
    KAutoSaveFile_WriteData_Callback kautosavefile_writedata_callback = nullptr;
    KAutoSaveFile_ReadLineData_Callback kautosavefile_readlinedata_callback = nullptr;
    KAutoSaveFile_Reset_Callback kautosavefile_reset_callback = nullptr;
    KAutoSaveFile_BytesAvailable_Callback kautosavefile_bytesavailable_callback = nullptr;
    KAutoSaveFile_BytesToWrite_Callback kautosavefile_bytestowrite_callback = nullptr;
    KAutoSaveFile_CanReadLine_Callback kautosavefile_canreadline_callback = nullptr;
    KAutoSaveFile_WaitForReadyRead_Callback kautosavefile_waitforreadyread_callback = nullptr;
    KAutoSaveFile_WaitForBytesWritten_Callback kautosavefile_waitforbyteswritten_callback = nullptr;
    KAutoSaveFile_SkipData_Callback kautosavefile_skipdata_callback = nullptr;
    KAutoSaveFile_Event_Callback kautosavefile_event_callback = nullptr;
    KAutoSaveFile_EventFilter_Callback kautosavefile_eventfilter_callback = nullptr;
    KAutoSaveFile_TimerEvent_Callback kautosavefile_timerevent_callback = nullptr;
    KAutoSaveFile_ChildEvent_Callback kautosavefile_childevent_callback = nullptr;
    KAutoSaveFile_CustomEvent_Callback kautosavefile_customevent_callback = nullptr;
    KAutoSaveFile_ConnectNotify_Callback kautosavefile_connectnotify_callback = nullptr;
    KAutoSaveFile_DisconnectNotify_Callback kautosavefile_disconnectnotify_callback = nullptr;
    KAutoSaveFile_SetOpenMode_Callback kautosavefile_setopenmode_callback = nullptr;
    KAutoSaveFile_SetErrorString_Callback kautosavefile_seterrorstring_callback = nullptr;
    KAutoSaveFile_Sender_Callback kautosavefile_sender_callback = nullptr;
    KAutoSaveFile_SenderSignalIndex_Callback kautosavefile_sendersignalindex_callback = nullptr;
    KAutoSaveFile_Receivers_Callback kautosavefile_receivers_callback = nullptr;
    KAutoSaveFile_IsSignalConnected_Callback kautosavefile_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kautosavefile_metacall_isbase = false;
    mutable bool kautosavefile_releaselock_isbase = false;
    mutable bool kautosavefile_open_isbase = false;
    mutable bool kautosavefile_filename_isbase = false;
    mutable bool kautosavefile_size_isbase = false;
    mutable bool kautosavefile_resize_isbase = false;
    mutable bool kautosavefile_permissions_isbase = false;
    mutable bool kautosavefile_setpermissions_isbase = false;
    mutable bool kautosavefile_close_isbase = false;
    mutable bool kautosavefile_issequential_isbase = false;
    mutable bool kautosavefile_pos_isbase = false;
    mutable bool kautosavefile_seek_isbase = false;
    mutable bool kautosavefile_atend_isbase = false;
    mutable bool kautosavefile_readdata_isbase = false;
    mutable bool kautosavefile_writedata_isbase = false;
    mutable bool kautosavefile_readlinedata_isbase = false;
    mutable bool kautosavefile_reset_isbase = false;
    mutable bool kautosavefile_bytesavailable_isbase = false;
    mutable bool kautosavefile_bytestowrite_isbase = false;
    mutable bool kautosavefile_canreadline_isbase = false;
    mutable bool kautosavefile_waitforreadyread_isbase = false;
    mutable bool kautosavefile_waitforbyteswritten_isbase = false;
    mutable bool kautosavefile_skipdata_isbase = false;
    mutable bool kautosavefile_event_isbase = false;
    mutable bool kautosavefile_eventfilter_isbase = false;
    mutable bool kautosavefile_timerevent_isbase = false;
    mutable bool kautosavefile_childevent_isbase = false;
    mutable bool kautosavefile_customevent_isbase = false;
    mutable bool kautosavefile_connectnotify_isbase = false;
    mutable bool kautosavefile_disconnectnotify_isbase = false;
    mutable bool kautosavefile_setopenmode_isbase = false;
    mutable bool kautosavefile_seterrorstring_isbase = false;
    mutable bool kautosavefile_sender_isbase = false;
    mutable bool kautosavefile_sendersignalindex_isbase = false;
    mutable bool kautosavefile_receivers_isbase = false;
    mutable bool kautosavefile_issignalconnected_isbase = false;

  public:
    VirtualKAutoSaveFile(const QUrl& filename) : KAutoSaveFile(filename) {};
    VirtualKAutoSaveFile() : KAutoSaveFile() {};
    VirtualKAutoSaveFile(const QUrl& filename, QObject* parent) : KAutoSaveFile(filename, parent) {};
    VirtualKAutoSaveFile(QObject* parent) : KAutoSaveFile(parent) {};

    ~VirtualKAutoSaveFile() {
        kautosavefile_metacall_callback = nullptr;
        kautosavefile_releaselock_callback = nullptr;
        kautosavefile_open_callback = nullptr;
        kautosavefile_filename_callback = nullptr;
        kautosavefile_size_callback = nullptr;
        kautosavefile_resize_callback = nullptr;
        kautosavefile_permissions_callback = nullptr;
        kautosavefile_setpermissions_callback = nullptr;
        kautosavefile_close_callback = nullptr;
        kautosavefile_issequential_callback = nullptr;
        kautosavefile_pos_callback = nullptr;
        kautosavefile_seek_callback = nullptr;
        kautosavefile_atend_callback = nullptr;
        kautosavefile_readdata_callback = nullptr;
        kautosavefile_writedata_callback = nullptr;
        kautosavefile_readlinedata_callback = nullptr;
        kautosavefile_reset_callback = nullptr;
        kautosavefile_bytesavailable_callback = nullptr;
        kautosavefile_bytestowrite_callback = nullptr;
        kautosavefile_canreadline_callback = nullptr;
        kautosavefile_waitforreadyread_callback = nullptr;
        kautosavefile_waitforbyteswritten_callback = nullptr;
        kautosavefile_skipdata_callback = nullptr;
        kautosavefile_event_callback = nullptr;
        kautosavefile_eventfilter_callback = nullptr;
        kautosavefile_timerevent_callback = nullptr;
        kautosavefile_childevent_callback = nullptr;
        kautosavefile_customevent_callback = nullptr;
        kautosavefile_connectnotify_callback = nullptr;
        kautosavefile_disconnectnotify_callback = nullptr;
        kautosavefile_setopenmode_callback = nullptr;
        kautosavefile_seterrorstring_callback = nullptr;
        kautosavefile_sender_callback = nullptr;
        kautosavefile_sendersignalindex_callback = nullptr;
        kautosavefile_receivers_callback = nullptr;
        kautosavefile_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKAutoSaveFile_Metacall_Callback(KAutoSaveFile_Metacall_Callback cb) { kautosavefile_metacall_callback = cb; }
    inline void setKAutoSaveFile_ReleaseLock_Callback(KAutoSaveFile_ReleaseLock_Callback cb) { kautosavefile_releaselock_callback = cb; }
    inline void setKAutoSaveFile_Open_Callback(KAutoSaveFile_Open_Callback cb) { kautosavefile_open_callback = cb; }
    inline void setKAutoSaveFile_FileName_Callback(KAutoSaveFile_FileName_Callback cb) { kautosavefile_filename_callback = cb; }
    inline void setKAutoSaveFile_Size_Callback(KAutoSaveFile_Size_Callback cb) { kautosavefile_size_callback = cb; }
    inline void setKAutoSaveFile_Resize_Callback(KAutoSaveFile_Resize_Callback cb) { kautosavefile_resize_callback = cb; }
    inline void setKAutoSaveFile_Permissions_Callback(KAutoSaveFile_Permissions_Callback cb) { kautosavefile_permissions_callback = cb; }
    inline void setKAutoSaveFile_SetPermissions_Callback(KAutoSaveFile_SetPermissions_Callback cb) { kautosavefile_setpermissions_callback = cb; }
    inline void setKAutoSaveFile_Close_Callback(KAutoSaveFile_Close_Callback cb) { kautosavefile_close_callback = cb; }
    inline void setKAutoSaveFile_IsSequential_Callback(KAutoSaveFile_IsSequential_Callback cb) { kautosavefile_issequential_callback = cb; }
    inline void setKAutoSaveFile_Pos_Callback(KAutoSaveFile_Pos_Callback cb) { kautosavefile_pos_callback = cb; }
    inline void setKAutoSaveFile_Seek_Callback(KAutoSaveFile_Seek_Callback cb) { kautosavefile_seek_callback = cb; }
    inline void setKAutoSaveFile_AtEnd_Callback(KAutoSaveFile_AtEnd_Callback cb) { kautosavefile_atend_callback = cb; }
    inline void setKAutoSaveFile_ReadData_Callback(KAutoSaveFile_ReadData_Callback cb) { kautosavefile_readdata_callback = cb; }
    inline void setKAutoSaveFile_WriteData_Callback(KAutoSaveFile_WriteData_Callback cb) { kautosavefile_writedata_callback = cb; }
    inline void setKAutoSaveFile_ReadLineData_Callback(KAutoSaveFile_ReadLineData_Callback cb) { kautosavefile_readlinedata_callback = cb; }
    inline void setKAutoSaveFile_Reset_Callback(KAutoSaveFile_Reset_Callback cb) { kautosavefile_reset_callback = cb; }
    inline void setKAutoSaveFile_BytesAvailable_Callback(KAutoSaveFile_BytesAvailable_Callback cb) { kautosavefile_bytesavailable_callback = cb; }
    inline void setKAutoSaveFile_BytesToWrite_Callback(KAutoSaveFile_BytesToWrite_Callback cb) { kautosavefile_bytestowrite_callback = cb; }
    inline void setKAutoSaveFile_CanReadLine_Callback(KAutoSaveFile_CanReadLine_Callback cb) { kautosavefile_canreadline_callback = cb; }
    inline void setKAutoSaveFile_WaitForReadyRead_Callback(KAutoSaveFile_WaitForReadyRead_Callback cb) { kautosavefile_waitforreadyread_callback = cb; }
    inline void setKAutoSaveFile_WaitForBytesWritten_Callback(KAutoSaveFile_WaitForBytesWritten_Callback cb) { kautosavefile_waitforbyteswritten_callback = cb; }
    inline void setKAutoSaveFile_SkipData_Callback(KAutoSaveFile_SkipData_Callback cb) { kautosavefile_skipdata_callback = cb; }
    inline void setKAutoSaveFile_Event_Callback(KAutoSaveFile_Event_Callback cb) { kautosavefile_event_callback = cb; }
    inline void setKAutoSaveFile_EventFilter_Callback(KAutoSaveFile_EventFilter_Callback cb) { kautosavefile_eventfilter_callback = cb; }
    inline void setKAutoSaveFile_TimerEvent_Callback(KAutoSaveFile_TimerEvent_Callback cb) { kautosavefile_timerevent_callback = cb; }
    inline void setKAutoSaveFile_ChildEvent_Callback(KAutoSaveFile_ChildEvent_Callback cb) { kautosavefile_childevent_callback = cb; }
    inline void setKAutoSaveFile_CustomEvent_Callback(KAutoSaveFile_CustomEvent_Callback cb) { kautosavefile_customevent_callback = cb; }
    inline void setKAutoSaveFile_ConnectNotify_Callback(KAutoSaveFile_ConnectNotify_Callback cb) { kautosavefile_connectnotify_callback = cb; }
    inline void setKAutoSaveFile_DisconnectNotify_Callback(KAutoSaveFile_DisconnectNotify_Callback cb) { kautosavefile_disconnectnotify_callback = cb; }
    inline void setKAutoSaveFile_SetOpenMode_Callback(KAutoSaveFile_SetOpenMode_Callback cb) { kautosavefile_setopenmode_callback = cb; }
    inline void setKAutoSaveFile_SetErrorString_Callback(KAutoSaveFile_SetErrorString_Callback cb) { kautosavefile_seterrorstring_callback = cb; }
    inline void setKAutoSaveFile_Sender_Callback(KAutoSaveFile_Sender_Callback cb) { kautosavefile_sender_callback = cb; }
    inline void setKAutoSaveFile_SenderSignalIndex_Callback(KAutoSaveFile_SenderSignalIndex_Callback cb) { kautosavefile_sendersignalindex_callback = cb; }
    inline void setKAutoSaveFile_Receivers_Callback(KAutoSaveFile_Receivers_Callback cb) { kautosavefile_receivers_callback = cb; }
    inline void setKAutoSaveFile_IsSignalConnected_Callback(KAutoSaveFile_IsSignalConnected_Callback cb) { kautosavefile_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKAutoSaveFile_Metacall_IsBase(bool value) const { kautosavefile_metacall_isbase = value; }
    inline void setKAutoSaveFile_ReleaseLock_IsBase(bool value) const { kautosavefile_releaselock_isbase = value; }
    inline void setKAutoSaveFile_Open_IsBase(bool value) const { kautosavefile_open_isbase = value; }
    inline void setKAutoSaveFile_FileName_IsBase(bool value) const { kautosavefile_filename_isbase = value; }
    inline void setKAutoSaveFile_Size_IsBase(bool value) const { kautosavefile_size_isbase = value; }
    inline void setKAutoSaveFile_Resize_IsBase(bool value) const { kautosavefile_resize_isbase = value; }
    inline void setKAutoSaveFile_Permissions_IsBase(bool value) const { kautosavefile_permissions_isbase = value; }
    inline void setKAutoSaveFile_SetPermissions_IsBase(bool value) const { kautosavefile_setpermissions_isbase = value; }
    inline void setKAutoSaveFile_Close_IsBase(bool value) const { kautosavefile_close_isbase = value; }
    inline void setKAutoSaveFile_IsSequential_IsBase(bool value) const { kautosavefile_issequential_isbase = value; }
    inline void setKAutoSaveFile_Pos_IsBase(bool value) const { kautosavefile_pos_isbase = value; }
    inline void setKAutoSaveFile_Seek_IsBase(bool value) const { kautosavefile_seek_isbase = value; }
    inline void setKAutoSaveFile_AtEnd_IsBase(bool value) const { kautosavefile_atend_isbase = value; }
    inline void setKAutoSaveFile_ReadData_IsBase(bool value) const { kautosavefile_readdata_isbase = value; }
    inline void setKAutoSaveFile_WriteData_IsBase(bool value) const { kautosavefile_writedata_isbase = value; }
    inline void setKAutoSaveFile_ReadLineData_IsBase(bool value) const { kautosavefile_readlinedata_isbase = value; }
    inline void setKAutoSaveFile_Reset_IsBase(bool value) const { kautosavefile_reset_isbase = value; }
    inline void setKAutoSaveFile_BytesAvailable_IsBase(bool value) const { kautosavefile_bytesavailable_isbase = value; }
    inline void setKAutoSaveFile_BytesToWrite_IsBase(bool value) const { kautosavefile_bytestowrite_isbase = value; }
    inline void setKAutoSaveFile_CanReadLine_IsBase(bool value) const { kautosavefile_canreadline_isbase = value; }
    inline void setKAutoSaveFile_WaitForReadyRead_IsBase(bool value) const { kautosavefile_waitforreadyread_isbase = value; }
    inline void setKAutoSaveFile_WaitForBytesWritten_IsBase(bool value) const { kautosavefile_waitforbyteswritten_isbase = value; }
    inline void setKAutoSaveFile_SkipData_IsBase(bool value) const { kautosavefile_skipdata_isbase = value; }
    inline void setKAutoSaveFile_Event_IsBase(bool value) const { kautosavefile_event_isbase = value; }
    inline void setKAutoSaveFile_EventFilter_IsBase(bool value) const { kautosavefile_eventfilter_isbase = value; }
    inline void setKAutoSaveFile_TimerEvent_IsBase(bool value) const { kautosavefile_timerevent_isbase = value; }
    inline void setKAutoSaveFile_ChildEvent_IsBase(bool value) const { kautosavefile_childevent_isbase = value; }
    inline void setKAutoSaveFile_CustomEvent_IsBase(bool value) const { kautosavefile_customevent_isbase = value; }
    inline void setKAutoSaveFile_ConnectNotify_IsBase(bool value) const { kautosavefile_connectnotify_isbase = value; }
    inline void setKAutoSaveFile_DisconnectNotify_IsBase(bool value) const { kautosavefile_disconnectnotify_isbase = value; }
    inline void setKAutoSaveFile_SetOpenMode_IsBase(bool value) const { kautosavefile_setopenmode_isbase = value; }
    inline void setKAutoSaveFile_SetErrorString_IsBase(bool value) const { kautosavefile_seterrorstring_isbase = value; }
    inline void setKAutoSaveFile_Sender_IsBase(bool value) const { kautosavefile_sender_isbase = value; }
    inline void setKAutoSaveFile_SenderSignalIndex_IsBase(bool value) const { kautosavefile_sendersignalindex_isbase = value; }
    inline void setKAutoSaveFile_Receivers_IsBase(bool value) const { kautosavefile_receivers_isbase = value; }
    inline void setKAutoSaveFile_IsSignalConnected_IsBase(bool value) const { kautosavefile_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kautosavefile_metacall_isbase) {
            kautosavefile_metacall_isbase = false;
            return KAutoSaveFile::qt_metacall(param1, param2, param3);
        } else if (kautosavefile_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kautosavefile_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KAutoSaveFile::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void releaseLock() override {
        if (kautosavefile_releaselock_isbase) {
            kautosavefile_releaselock_isbase = false;
            KAutoSaveFile::releaseLock();
        } else if (kautosavefile_releaselock_callback != nullptr) {
            kautosavefile_releaselock_callback();
        } else {
            KAutoSaveFile::releaseLock();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QFlags<QIODeviceBase::OpenModeFlag> openmode) override {
        if (kautosavefile_open_isbase) {
            kautosavefile_open_isbase = false;
            return KAutoSaveFile::open(openmode);
        } else if (kautosavefile_open_callback != nullptr) {
            int cbval1 = static_cast<int>(openmode);

            bool callback_ret = kautosavefile_open_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAutoSaveFile::open(openmode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString fileName() const override {
        if (kautosavefile_filename_isbase) {
            kautosavefile_filename_isbase = false;
            return KAutoSaveFile::fileName();
        } else if (kautosavefile_filename_callback != nullptr) {
            const char* callback_ret = kautosavefile_filename_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return KAutoSaveFile::fileName();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (kautosavefile_size_isbase) {
            kautosavefile_size_isbase = false;
            return KAutoSaveFile::size();
        } else if (kautosavefile_size_callback != nullptr) {
            long long callback_ret = kautosavefile_size_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return KAutoSaveFile::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool resize(qint64 sz) override {
        if (kautosavefile_resize_isbase) {
            kautosavefile_resize_isbase = false;
            return KAutoSaveFile::resize(sz);
        } else if (kautosavefile_resize_callback != nullptr) {
            long long cbval1 = static_cast<long long>(sz);

            bool callback_ret = kautosavefile_resize_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAutoSaveFile::resize(sz);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFileDevice::Permissions permissions() const override {
        if (kautosavefile_permissions_isbase) {
            kautosavefile_permissions_isbase = false;
            return KAutoSaveFile::permissions();
        } else if (kautosavefile_permissions_callback != nullptr) {
            int callback_ret = kautosavefile_permissions_callback();
            return static_cast<QFileDevice::Permissions>(callback_ret);
        } else {
            return KAutoSaveFile::permissions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPermissions(QFileDevice::Permissions permissionSpec) override {
        if (kautosavefile_setpermissions_isbase) {
            kautosavefile_setpermissions_isbase = false;
            return KAutoSaveFile::setPermissions(permissionSpec);
        } else if (kautosavefile_setpermissions_callback != nullptr) {
            int cbval1 = static_cast<int>(permissionSpec);

            bool callback_ret = kautosavefile_setpermissions_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAutoSaveFile::setPermissions(permissionSpec);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (kautosavefile_close_isbase) {
            kautosavefile_close_isbase = false;
            KAutoSaveFile::close();
        } else if (kautosavefile_close_callback != nullptr) {
            kautosavefile_close_callback();
        } else {
            KAutoSaveFile::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (kautosavefile_issequential_isbase) {
            kautosavefile_issequential_isbase = false;
            return KAutoSaveFile::isSequential();
        } else if (kautosavefile_issequential_callback != nullptr) {
            bool callback_ret = kautosavefile_issequential_callback();
            return callback_ret;
        } else {
            return KAutoSaveFile::isSequential();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (kautosavefile_pos_isbase) {
            kautosavefile_pos_isbase = false;
            return KAutoSaveFile::pos();
        } else if (kautosavefile_pos_callback != nullptr) {
            long long callback_ret = kautosavefile_pos_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return KAutoSaveFile::pos();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 offset) override {
        if (kautosavefile_seek_isbase) {
            kautosavefile_seek_isbase = false;
            return KAutoSaveFile::seek(offset);
        } else if (kautosavefile_seek_callback != nullptr) {
            long long cbval1 = static_cast<long long>(offset);

            bool callback_ret = kautosavefile_seek_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAutoSaveFile::seek(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (kautosavefile_atend_isbase) {
            kautosavefile_atend_isbase = false;
            return KAutoSaveFile::atEnd();
        } else if (kautosavefile_atend_callback != nullptr) {
            bool callback_ret = kautosavefile_atend_callback();
            return callback_ret;
        } else {
            return KAutoSaveFile::atEnd();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (kautosavefile_readdata_isbase) {
            kautosavefile_readdata_isbase = false;
            return KAutoSaveFile::readData(data, maxlen);
        } else if (kautosavefile_readdata_callback != nullptr) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = kautosavefile_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return KAutoSaveFile::readData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 lenVal) override {
        if (kautosavefile_writedata_isbase) {
            kautosavefile_writedata_isbase = false;
            return KAutoSaveFile::writeData(data, lenVal);
        } else if (kautosavefile_writedata_callback != nullptr) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(lenVal);

            long long callback_ret = kautosavefile_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return KAutoSaveFile::writeData(data, lenVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (kautosavefile_readlinedata_isbase) {
            kautosavefile_readlinedata_isbase = false;
            return KAutoSaveFile::readLineData(data, maxlen);
        } else if (kautosavefile_readlinedata_callback != nullptr) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = kautosavefile_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return KAutoSaveFile::readLineData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (kautosavefile_reset_isbase) {
            kautosavefile_reset_isbase = false;
            return KAutoSaveFile::reset();
        } else if (kautosavefile_reset_callback != nullptr) {
            bool callback_ret = kautosavefile_reset_callback();
            return callback_ret;
        } else {
            return KAutoSaveFile::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (kautosavefile_bytesavailable_isbase) {
            kautosavefile_bytesavailable_isbase = false;
            return KAutoSaveFile::bytesAvailable();
        } else if (kautosavefile_bytesavailable_callback != nullptr) {
            long long callback_ret = kautosavefile_bytesavailable_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return KAutoSaveFile::bytesAvailable();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (kautosavefile_bytestowrite_isbase) {
            kautosavefile_bytestowrite_isbase = false;
            return KAutoSaveFile::bytesToWrite();
        } else if (kautosavefile_bytestowrite_callback != nullptr) {
            long long callback_ret = kautosavefile_bytestowrite_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return KAutoSaveFile::bytesToWrite();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (kautosavefile_canreadline_isbase) {
            kautosavefile_canreadline_isbase = false;
            return KAutoSaveFile::canReadLine();
        } else if (kautosavefile_canreadline_callback != nullptr) {
            bool callback_ret = kautosavefile_canreadline_callback();
            return callback_ret;
        } else {
            return KAutoSaveFile::canReadLine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (kautosavefile_waitforreadyread_isbase) {
            kautosavefile_waitforreadyread_isbase = false;
            return KAutoSaveFile::waitForReadyRead(msecs);
        } else if (kautosavefile_waitforreadyread_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = kautosavefile_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAutoSaveFile::waitForReadyRead(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (kautosavefile_waitforbyteswritten_isbase) {
            kautosavefile_waitforbyteswritten_isbase = false;
            return KAutoSaveFile::waitForBytesWritten(msecs);
        } else if (kautosavefile_waitforbyteswritten_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = kautosavefile_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAutoSaveFile::waitForBytesWritten(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (kautosavefile_skipdata_isbase) {
            kautosavefile_skipdata_isbase = false;
            return KAutoSaveFile::skipData(maxSize);
        } else if (kautosavefile_skipdata_callback != nullptr) {
            long long cbval1 = static_cast<long long>(maxSize);

            long long callback_ret = kautosavefile_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        } else {
            return KAutoSaveFile::skipData(maxSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kautosavefile_event_isbase) {
            kautosavefile_event_isbase = false;
            return KAutoSaveFile::event(event);
        } else if (kautosavefile_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kautosavefile_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAutoSaveFile::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kautosavefile_eventfilter_isbase) {
            kautosavefile_eventfilter_isbase = false;
            return KAutoSaveFile::eventFilter(watched, event);
        } else if (kautosavefile_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kautosavefile_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KAutoSaveFile::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kautosavefile_timerevent_isbase) {
            kautosavefile_timerevent_isbase = false;
            KAutoSaveFile::timerEvent(event);
        } else if (kautosavefile_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kautosavefile_timerevent_callback(this, cbval1);
        } else {
            KAutoSaveFile::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kautosavefile_childevent_isbase) {
            kautosavefile_childevent_isbase = false;
            KAutoSaveFile::childEvent(event);
        } else if (kautosavefile_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kautosavefile_childevent_callback(this, cbval1);
        } else {
            KAutoSaveFile::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kautosavefile_customevent_isbase) {
            kautosavefile_customevent_isbase = false;
            KAutoSaveFile::customEvent(event);
        } else if (kautosavefile_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kautosavefile_customevent_callback(this, cbval1);
        } else {
            KAutoSaveFile::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kautosavefile_connectnotify_isbase) {
            kautosavefile_connectnotify_isbase = false;
            KAutoSaveFile::connectNotify(signal);
        } else if (kautosavefile_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kautosavefile_connectnotify_callback(this, cbval1);
        } else {
            KAutoSaveFile::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kautosavefile_disconnectnotify_isbase) {
            kautosavefile_disconnectnotify_isbase = false;
            KAutoSaveFile::disconnectNotify(signal);
        } else if (kautosavefile_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kautosavefile_disconnectnotify_callback(this, cbval1);
        } else {
            KAutoSaveFile::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (kautosavefile_setopenmode_isbase) {
            kautosavefile_setopenmode_isbase = false;
            KAutoSaveFile::setOpenMode(openMode);
        } else if (kautosavefile_setopenmode_callback != nullptr) {
            int cbval1 = static_cast<int>(openMode);

            kautosavefile_setopenmode_callback(this, cbval1);
        } else {
            KAutoSaveFile::setOpenMode(openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (kautosavefile_seterrorstring_isbase) {
            kautosavefile_seterrorstring_isbase = false;
            KAutoSaveFile::setErrorString(errorString);
        } else if (kautosavefile_seterrorstring_callback != nullptr) {
            const QString errorString_ret = errorString;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorString_b = errorString_ret.toUtf8();
            libqt_string errorString_str;
            errorString_str.len = errorString_b.length();
            errorString_str.data = static_cast<const char*>(malloc(errorString_str.len + 1));
            memcpy((void*)errorString_str.data, errorString_b.data(), errorString_str.len);
            ((char*)errorString_str.data)[errorString_str.len] = '\0';
            libqt_string cbval1 = errorString_str;

            kautosavefile_seterrorstring_callback(this, cbval1);
        } else {
            KAutoSaveFile::setErrorString(errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kautosavefile_sender_isbase) {
            kautosavefile_sender_isbase = false;
            return KAutoSaveFile::sender();
        } else if (kautosavefile_sender_callback != nullptr) {
            QObject* callback_ret = kautosavefile_sender_callback();
            return callback_ret;
        } else {
            return KAutoSaveFile::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kautosavefile_sendersignalindex_isbase) {
            kautosavefile_sendersignalindex_isbase = false;
            return KAutoSaveFile::senderSignalIndex();
        } else if (kautosavefile_sendersignalindex_callback != nullptr) {
            int callback_ret = kautosavefile_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KAutoSaveFile::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kautosavefile_receivers_isbase) {
            kautosavefile_receivers_isbase = false;
            return KAutoSaveFile::receivers(signal);
        } else if (kautosavefile_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kautosavefile_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KAutoSaveFile::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kautosavefile_issignalconnected_isbase) {
            kautosavefile_issignalconnected_isbase = false;
            return KAutoSaveFile::isSignalConnected(signal);
        } else if (kautosavefile_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kautosavefile_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KAutoSaveFile::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend long long KAutoSaveFile_ReadData(KAutoSaveFile* self, char* data, long long maxlen);
    friend long long KAutoSaveFile_QBaseReadData(KAutoSaveFile* self, char* data, long long maxlen);
    friend long long KAutoSaveFile_WriteData(KAutoSaveFile* self, const char* data, long long lenVal);
    friend long long KAutoSaveFile_QBaseWriteData(KAutoSaveFile* self, const char* data, long long lenVal);
    friend long long KAutoSaveFile_ReadLineData(KAutoSaveFile* self, char* data, long long maxlen);
    friend long long KAutoSaveFile_QBaseReadLineData(KAutoSaveFile* self, char* data, long long maxlen);
    friend long long KAutoSaveFile_SkipData(KAutoSaveFile* self, long long maxSize);
    friend long long KAutoSaveFile_QBaseSkipData(KAutoSaveFile* self, long long maxSize);
    friend void KAutoSaveFile_TimerEvent(KAutoSaveFile* self, QTimerEvent* event);
    friend void KAutoSaveFile_QBaseTimerEvent(KAutoSaveFile* self, QTimerEvent* event);
    friend void KAutoSaveFile_ChildEvent(KAutoSaveFile* self, QChildEvent* event);
    friend void KAutoSaveFile_QBaseChildEvent(KAutoSaveFile* self, QChildEvent* event);
    friend void KAutoSaveFile_CustomEvent(KAutoSaveFile* self, QEvent* event);
    friend void KAutoSaveFile_QBaseCustomEvent(KAutoSaveFile* self, QEvent* event);
    friend void KAutoSaveFile_ConnectNotify(KAutoSaveFile* self, const QMetaMethod* signal);
    friend void KAutoSaveFile_QBaseConnectNotify(KAutoSaveFile* self, const QMetaMethod* signal);
    friend void KAutoSaveFile_DisconnectNotify(KAutoSaveFile* self, const QMetaMethod* signal);
    friend void KAutoSaveFile_QBaseDisconnectNotify(KAutoSaveFile* self, const QMetaMethod* signal);
    friend void KAutoSaveFile_SetOpenMode(KAutoSaveFile* self, int openMode);
    friend void KAutoSaveFile_QBaseSetOpenMode(KAutoSaveFile* self, int openMode);
    friend void KAutoSaveFile_SetErrorString(KAutoSaveFile* self, const libqt_string errorString);
    friend void KAutoSaveFile_QBaseSetErrorString(KAutoSaveFile* self, const libqt_string errorString);
    friend QObject* KAutoSaveFile_Sender(const KAutoSaveFile* self);
    friend QObject* KAutoSaveFile_QBaseSender(const KAutoSaveFile* self);
    friend int KAutoSaveFile_SenderSignalIndex(const KAutoSaveFile* self);
    friend int KAutoSaveFile_QBaseSenderSignalIndex(const KAutoSaveFile* self);
    friend int KAutoSaveFile_Receivers(const KAutoSaveFile* self, const char* signal);
    friend int KAutoSaveFile_QBaseReceivers(const KAutoSaveFile* self, const char* signal);
    friend bool KAutoSaveFile_IsSignalConnected(const KAutoSaveFile* self, const QMetaMethod* signal);
    friend bool KAutoSaveFile_QBaseIsSignalConnected(const KAutoSaveFile* self, const QMetaMethod* signal);
};

#endif
