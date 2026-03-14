#pragma once
#ifndef SRC_BLUETOOTHC_LIBVIRTUALQBLUETOOTHSOCKET_H
#define SRC_BLUETOOTHC_LIBVIRTUALQBLUETOOTHSOCKET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBluetoothSocket so that we can call protected methods
class VirtualQBluetoothSocket final : public QBluetoothSocket {

  public:
    // Virtual class boolean flag
    bool isVirtualQBluetoothSocket = true;

    // Virtual class public types (including callbacks)
    using QBluetoothSocket_MetaObject_Callback = QMetaObject* (*)();
    using QBluetoothSocket_Metacast_Callback = void* (*)(QBluetoothSocket*, const char*);
    using QBluetoothSocket_Metacall_Callback = int (*)(QBluetoothSocket*, int, int, void**);
    using QBluetoothSocket_Close_Callback = void (*)();
    using QBluetoothSocket_IsSequential_Callback = bool (*)();
    using QBluetoothSocket_BytesAvailable_Callback = long long (*)();
    using QBluetoothSocket_BytesToWrite_Callback = long long (*)();
    using QBluetoothSocket_CanReadLine_Callback = bool (*)();
    using QBluetoothSocket_ReadData_Callback = long long (*)(QBluetoothSocket*, char*, long long);
    using QBluetoothSocket_WriteData_Callback = long long (*)(QBluetoothSocket*, const char*, long long);
    using QBluetoothSocket_Open_Callback = bool (*)(QBluetoothSocket*, int);
    using QBluetoothSocket_Pos_Callback = long long (*)();
    using QBluetoothSocket_Size_Callback = long long (*)();
    using QBluetoothSocket_Seek_Callback = bool (*)(QBluetoothSocket*, long long);
    using QBluetoothSocket_AtEnd_Callback = bool (*)();
    using QBluetoothSocket_Reset_Callback = bool (*)();
    using QBluetoothSocket_WaitForReadyRead_Callback = bool (*)(QBluetoothSocket*, int);
    using QBluetoothSocket_WaitForBytesWritten_Callback = bool (*)(QBluetoothSocket*, int);
    using QBluetoothSocket_ReadLineData_Callback = long long (*)(QBluetoothSocket*, char*, long long);
    using QBluetoothSocket_SkipData_Callback = long long (*)(QBluetoothSocket*, long long);
    using QBluetoothSocket_Event_Callback = bool (*)(QBluetoothSocket*, QEvent*);
    using QBluetoothSocket_EventFilter_Callback = bool (*)(QBluetoothSocket*, QObject*, QEvent*);
    using QBluetoothSocket_TimerEvent_Callback = void (*)(QBluetoothSocket*, QTimerEvent*);
    using QBluetoothSocket_ChildEvent_Callback = void (*)(QBluetoothSocket*, QChildEvent*);
    using QBluetoothSocket_CustomEvent_Callback = void (*)(QBluetoothSocket*, QEvent*);
    using QBluetoothSocket_ConnectNotify_Callback = void (*)(QBluetoothSocket*, QMetaMethod*);
    using QBluetoothSocket_DisconnectNotify_Callback = void (*)(QBluetoothSocket*, QMetaMethod*);
    using QBluetoothSocket_SetSocketState_Callback = void (*)(QBluetoothSocket*, int);
    using QBluetoothSocket_SetSocketError_Callback = void (*)(QBluetoothSocket*, int);
    using QBluetoothSocket_DoDeviceDiscovery_Callback = void (*)(QBluetoothSocket*, QBluetoothServiceInfo*, int);
    using QBluetoothSocket_SetOpenMode_Callback = void (*)(QBluetoothSocket*, int);
    using QBluetoothSocket_SetErrorString_Callback = void (*)(QBluetoothSocket*, const char*);
    using QBluetoothSocket_Sender_Callback = QObject* (*)();
    using QBluetoothSocket_SenderSignalIndex_Callback = int (*)();
    using QBluetoothSocket_Receivers_Callback = int (*)(const QBluetoothSocket*, const char*);
    using QBluetoothSocket_IsSignalConnected_Callback = bool (*)(const QBluetoothSocket*, QMetaMethod*);

  protected:
    // Instance callback storage
    QBluetoothSocket_MetaObject_Callback qbluetoothsocket_metaobject_callback = nullptr;
    QBluetoothSocket_Metacast_Callback qbluetoothsocket_metacast_callback = nullptr;
    QBluetoothSocket_Metacall_Callback qbluetoothsocket_metacall_callback = nullptr;
    QBluetoothSocket_Close_Callback qbluetoothsocket_close_callback = nullptr;
    QBluetoothSocket_IsSequential_Callback qbluetoothsocket_issequential_callback = nullptr;
    QBluetoothSocket_BytesAvailable_Callback qbluetoothsocket_bytesavailable_callback = nullptr;
    QBluetoothSocket_BytesToWrite_Callback qbluetoothsocket_bytestowrite_callback = nullptr;
    QBluetoothSocket_CanReadLine_Callback qbluetoothsocket_canreadline_callback = nullptr;
    QBluetoothSocket_ReadData_Callback qbluetoothsocket_readdata_callback = nullptr;
    QBluetoothSocket_WriteData_Callback qbluetoothsocket_writedata_callback = nullptr;
    QBluetoothSocket_Open_Callback qbluetoothsocket_open_callback = nullptr;
    QBluetoothSocket_Pos_Callback qbluetoothsocket_pos_callback = nullptr;
    QBluetoothSocket_Size_Callback qbluetoothsocket_size_callback = nullptr;
    QBluetoothSocket_Seek_Callback qbluetoothsocket_seek_callback = nullptr;
    QBluetoothSocket_AtEnd_Callback qbluetoothsocket_atend_callback = nullptr;
    QBluetoothSocket_Reset_Callback qbluetoothsocket_reset_callback = nullptr;
    QBluetoothSocket_WaitForReadyRead_Callback qbluetoothsocket_waitforreadyread_callback = nullptr;
    QBluetoothSocket_WaitForBytesWritten_Callback qbluetoothsocket_waitforbyteswritten_callback = nullptr;
    QBluetoothSocket_ReadLineData_Callback qbluetoothsocket_readlinedata_callback = nullptr;
    QBluetoothSocket_SkipData_Callback qbluetoothsocket_skipdata_callback = nullptr;
    QBluetoothSocket_Event_Callback qbluetoothsocket_event_callback = nullptr;
    QBluetoothSocket_EventFilter_Callback qbluetoothsocket_eventfilter_callback = nullptr;
    QBluetoothSocket_TimerEvent_Callback qbluetoothsocket_timerevent_callback = nullptr;
    QBluetoothSocket_ChildEvent_Callback qbluetoothsocket_childevent_callback = nullptr;
    QBluetoothSocket_CustomEvent_Callback qbluetoothsocket_customevent_callback = nullptr;
    QBluetoothSocket_ConnectNotify_Callback qbluetoothsocket_connectnotify_callback = nullptr;
    QBluetoothSocket_DisconnectNotify_Callback qbluetoothsocket_disconnectnotify_callback = nullptr;
    QBluetoothSocket_SetSocketState_Callback qbluetoothsocket_setsocketstate_callback = nullptr;
    QBluetoothSocket_SetSocketError_Callback qbluetoothsocket_setsocketerror_callback = nullptr;
    QBluetoothSocket_DoDeviceDiscovery_Callback qbluetoothsocket_dodevicediscovery_callback = nullptr;
    QBluetoothSocket_SetOpenMode_Callback qbluetoothsocket_setopenmode_callback = nullptr;
    QBluetoothSocket_SetErrorString_Callback qbluetoothsocket_seterrorstring_callback = nullptr;
    QBluetoothSocket_Sender_Callback qbluetoothsocket_sender_callback = nullptr;
    QBluetoothSocket_SenderSignalIndex_Callback qbluetoothsocket_sendersignalindex_callback = nullptr;
    QBluetoothSocket_Receivers_Callback qbluetoothsocket_receivers_callback = nullptr;
    QBluetoothSocket_IsSignalConnected_Callback qbluetoothsocket_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qbluetoothsocket_metaobject_isbase = false;
    mutable bool qbluetoothsocket_metacast_isbase = false;
    mutable bool qbluetoothsocket_metacall_isbase = false;
    mutable bool qbluetoothsocket_close_isbase = false;
    mutable bool qbluetoothsocket_issequential_isbase = false;
    mutable bool qbluetoothsocket_bytesavailable_isbase = false;
    mutable bool qbluetoothsocket_bytestowrite_isbase = false;
    mutable bool qbluetoothsocket_canreadline_isbase = false;
    mutable bool qbluetoothsocket_readdata_isbase = false;
    mutable bool qbluetoothsocket_writedata_isbase = false;
    mutable bool qbluetoothsocket_open_isbase = false;
    mutable bool qbluetoothsocket_pos_isbase = false;
    mutable bool qbluetoothsocket_size_isbase = false;
    mutable bool qbluetoothsocket_seek_isbase = false;
    mutable bool qbluetoothsocket_atend_isbase = false;
    mutable bool qbluetoothsocket_reset_isbase = false;
    mutable bool qbluetoothsocket_waitforreadyread_isbase = false;
    mutable bool qbluetoothsocket_waitforbyteswritten_isbase = false;
    mutable bool qbluetoothsocket_readlinedata_isbase = false;
    mutable bool qbluetoothsocket_skipdata_isbase = false;
    mutable bool qbluetoothsocket_event_isbase = false;
    mutable bool qbluetoothsocket_eventfilter_isbase = false;
    mutable bool qbluetoothsocket_timerevent_isbase = false;
    mutable bool qbluetoothsocket_childevent_isbase = false;
    mutable bool qbluetoothsocket_customevent_isbase = false;
    mutable bool qbluetoothsocket_connectnotify_isbase = false;
    mutable bool qbluetoothsocket_disconnectnotify_isbase = false;
    mutable bool qbluetoothsocket_setsocketstate_isbase = false;
    mutable bool qbluetoothsocket_setsocketerror_isbase = false;
    mutable bool qbluetoothsocket_dodevicediscovery_isbase = false;
    mutable bool qbluetoothsocket_setopenmode_isbase = false;
    mutable bool qbluetoothsocket_seterrorstring_isbase = false;
    mutable bool qbluetoothsocket_sender_isbase = false;
    mutable bool qbluetoothsocket_sendersignalindex_isbase = false;
    mutable bool qbluetoothsocket_receivers_isbase = false;
    mutable bool qbluetoothsocket_issignalconnected_isbase = false;

  public:
    VirtualQBluetoothSocket(QBluetoothServiceInfo::Protocol socketType) : QBluetoothSocket(socketType) {};
    VirtualQBluetoothSocket() : QBluetoothSocket() {};
    VirtualQBluetoothSocket(QBluetoothServiceInfo::Protocol socketType, QObject* parent) : QBluetoothSocket(socketType, parent) {};
    VirtualQBluetoothSocket(QObject* parent) : QBluetoothSocket(parent) {};

    // Callback setters
    inline void setQBluetoothSocket_MetaObject_Callback(QBluetoothSocket_MetaObject_Callback cb) { qbluetoothsocket_metaobject_callback = cb; }
    inline void setQBluetoothSocket_Metacast_Callback(QBluetoothSocket_Metacast_Callback cb) { qbluetoothsocket_metacast_callback = cb; }
    inline void setQBluetoothSocket_Metacall_Callback(QBluetoothSocket_Metacall_Callback cb) { qbluetoothsocket_metacall_callback = cb; }
    inline void setQBluetoothSocket_Close_Callback(QBluetoothSocket_Close_Callback cb) { qbluetoothsocket_close_callback = cb; }
    inline void setQBluetoothSocket_IsSequential_Callback(QBluetoothSocket_IsSequential_Callback cb) { qbluetoothsocket_issequential_callback = cb; }
    inline void setQBluetoothSocket_BytesAvailable_Callback(QBluetoothSocket_BytesAvailable_Callback cb) { qbluetoothsocket_bytesavailable_callback = cb; }
    inline void setQBluetoothSocket_BytesToWrite_Callback(QBluetoothSocket_BytesToWrite_Callback cb) { qbluetoothsocket_bytestowrite_callback = cb; }
    inline void setQBluetoothSocket_CanReadLine_Callback(QBluetoothSocket_CanReadLine_Callback cb) { qbluetoothsocket_canreadline_callback = cb; }
    inline void setQBluetoothSocket_ReadData_Callback(QBluetoothSocket_ReadData_Callback cb) { qbluetoothsocket_readdata_callback = cb; }
    inline void setQBluetoothSocket_WriteData_Callback(QBluetoothSocket_WriteData_Callback cb) { qbluetoothsocket_writedata_callback = cb; }
    inline void setQBluetoothSocket_Open_Callback(QBluetoothSocket_Open_Callback cb) { qbluetoothsocket_open_callback = cb; }
    inline void setQBluetoothSocket_Pos_Callback(QBluetoothSocket_Pos_Callback cb) { qbluetoothsocket_pos_callback = cb; }
    inline void setQBluetoothSocket_Size_Callback(QBluetoothSocket_Size_Callback cb) { qbluetoothsocket_size_callback = cb; }
    inline void setQBluetoothSocket_Seek_Callback(QBluetoothSocket_Seek_Callback cb) { qbluetoothsocket_seek_callback = cb; }
    inline void setQBluetoothSocket_AtEnd_Callback(QBluetoothSocket_AtEnd_Callback cb) { qbluetoothsocket_atend_callback = cb; }
    inline void setQBluetoothSocket_Reset_Callback(QBluetoothSocket_Reset_Callback cb) { qbluetoothsocket_reset_callback = cb; }
    inline void setQBluetoothSocket_WaitForReadyRead_Callback(QBluetoothSocket_WaitForReadyRead_Callback cb) { qbluetoothsocket_waitforreadyread_callback = cb; }
    inline void setQBluetoothSocket_WaitForBytesWritten_Callback(QBluetoothSocket_WaitForBytesWritten_Callback cb) { qbluetoothsocket_waitforbyteswritten_callback = cb; }
    inline void setQBluetoothSocket_ReadLineData_Callback(QBluetoothSocket_ReadLineData_Callback cb) { qbluetoothsocket_readlinedata_callback = cb; }
    inline void setQBluetoothSocket_SkipData_Callback(QBluetoothSocket_SkipData_Callback cb) { qbluetoothsocket_skipdata_callback = cb; }
    inline void setQBluetoothSocket_Event_Callback(QBluetoothSocket_Event_Callback cb) { qbluetoothsocket_event_callback = cb; }
    inline void setQBluetoothSocket_EventFilter_Callback(QBluetoothSocket_EventFilter_Callback cb) { qbluetoothsocket_eventfilter_callback = cb; }
    inline void setQBluetoothSocket_TimerEvent_Callback(QBluetoothSocket_TimerEvent_Callback cb) { qbluetoothsocket_timerevent_callback = cb; }
    inline void setQBluetoothSocket_ChildEvent_Callback(QBluetoothSocket_ChildEvent_Callback cb) { qbluetoothsocket_childevent_callback = cb; }
    inline void setQBluetoothSocket_CustomEvent_Callback(QBluetoothSocket_CustomEvent_Callback cb) { qbluetoothsocket_customevent_callback = cb; }
    inline void setQBluetoothSocket_ConnectNotify_Callback(QBluetoothSocket_ConnectNotify_Callback cb) { qbluetoothsocket_connectnotify_callback = cb; }
    inline void setQBluetoothSocket_DisconnectNotify_Callback(QBluetoothSocket_DisconnectNotify_Callback cb) { qbluetoothsocket_disconnectnotify_callback = cb; }
    inline void setQBluetoothSocket_SetSocketState_Callback(QBluetoothSocket_SetSocketState_Callback cb) { qbluetoothsocket_setsocketstate_callback = cb; }
    inline void setQBluetoothSocket_SetSocketError_Callback(QBluetoothSocket_SetSocketError_Callback cb) { qbluetoothsocket_setsocketerror_callback = cb; }
    inline void setQBluetoothSocket_DoDeviceDiscovery_Callback(QBluetoothSocket_DoDeviceDiscovery_Callback cb) { qbluetoothsocket_dodevicediscovery_callback = cb; }
    inline void setQBluetoothSocket_SetOpenMode_Callback(QBluetoothSocket_SetOpenMode_Callback cb) { qbluetoothsocket_setopenmode_callback = cb; }
    inline void setQBluetoothSocket_SetErrorString_Callback(QBluetoothSocket_SetErrorString_Callback cb) { qbluetoothsocket_seterrorstring_callback = cb; }
    inline void setQBluetoothSocket_Sender_Callback(QBluetoothSocket_Sender_Callback cb) { qbluetoothsocket_sender_callback = cb; }
    inline void setQBluetoothSocket_SenderSignalIndex_Callback(QBluetoothSocket_SenderSignalIndex_Callback cb) { qbluetoothsocket_sendersignalindex_callback = cb; }
    inline void setQBluetoothSocket_Receivers_Callback(QBluetoothSocket_Receivers_Callback cb) { qbluetoothsocket_receivers_callback = cb; }
    inline void setQBluetoothSocket_IsSignalConnected_Callback(QBluetoothSocket_IsSignalConnected_Callback cb) { qbluetoothsocket_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQBluetoothSocket_MetaObject_IsBase(bool value) const { qbluetoothsocket_metaobject_isbase = value; }
    inline void setQBluetoothSocket_Metacast_IsBase(bool value) const { qbluetoothsocket_metacast_isbase = value; }
    inline void setQBluetoothSocket_Metacall_IsBase(bool value) const { qbluetoothsocket_metacall_isbase = value; }
    inline void setQBluetoothSocket_Close_IsBase(bool value) const { qbluetoothsocket_close_isbase = value; }
    inline void setQBluetoothSocket_IsSequential_IsBase(bool value) const { qbluetoothsocket_issequential_isbase = value; }
    inline void setQBluetoothSocket_BytesAvailable_IsBase(bool value) const { qbluetoothsocket_bytesavailable_isbase = value; }
    inline void setQBluetoothSocket_BytesToWrite_IsBase(bool value) const { qbluetoothsocket_bytestowrite_isbase = value; }
    inline void setQBluetoothSocket_CanReadLine_IsBase(bool value) const { qbluetoothsocket_canreadline_isbase = value; }
    inline void setQBluetoothSocket_ReadData_IsBase(bool value) const { qbluetoothsocket_readdata_isbase = value; }
    inline void setQBluetoothSocket_WriteData_IsBase(bool value) const { qbluetoothsocket_writedata_isbase = value; }
    inline void setQBluetoothSocket_Open_IsBase(bool value) const { qbluetoothsocket_open_isbase = value; }
    inline void setQBluetoothSocket_Pos_IsBase(bool value) const { qbluetoothsocket_pos_isbase = value; }
    inline void setQBluetoothSocket_Size_IsBase(bool value) const { qbluetoothsocket_size_isbase = value; }
    inline void setQBluetoothSocket_Seek_IsBase(bool value) const { qbluetoothsocket_seek_isbase = value; }
    inline void setQBluetoothSocket_AtEnd_IsBase(bool value) const { qbluetoothsocket_atend_isbase = value; }
    inline void setQBluetoothSocket_Reset_IsBase(bool value) const { qbluetoothsocket_reset_isbase = value; }
    inline void setQBluetoothSocket_WaitForReadyRead_IsBase(bool value) const { qbluetoothsocket_waitforreadyread_isbase = value; }
    inline void setQBluetoothSocket_WaitForBytesWritten_IsBase(bool value) const { qbluetoothsocket_waitforbyteswritten_isbase = value; }
    inline void setQBluetoothSocket_ReadLineData_IsBase(bool value) const { qbluetoothsocket_readlinedata_isbase = value; }
    inline void setQBluetoothSocket_SkipData_IsBase(bool value) const { qbluetoothsocket_skipdata_isbase = value; }
    inline void setQBluetoothSocket_Event_IsBase(bool value) const { qbluetoothsocket_event_isbase = value; }
    inline void setQBluetoothSocket_EventFilter_IsBase(bool value) const { qbluetoothsocket_eventfilter_isbase = value; }
    inline void setQBluetoothSocket_TimerEvent_IsBase(bool value) const { qbluetoothsocket_timerevent_isbase = value; }
    inline void setQBluetoothSocket_ChildEvent_IsBase(bool value) const { qbluetoothsocket_childevent_isbase = value; }
    inline void setQBluetoothSocket_CustomEvent_IsBase(bool value) const { qbluetoothsocket_customevent_isbase = value; }
    inline void setQBluetoothSocket_ConnectNotify_IsBase(bool value) const { qbluetoothsocket_connectnotify_isbase = value; }
    inline void setQBluetoothSocket_DisconnectNotify_IsBase(bool value) const { qbluetoothsocket_disconnectnotify_isbase = value; }
    inline void setQBluetoothSocket_SetSocketState_IsBase(bool value) const { qbluetoothsocket_setsocketstate_isbase = value; }
    inline void setQBluetoothSocket_SetSocketError_IsBase(bool value) const { qbluetoothsocket_setsocketerror_isbase = value; }
    inline void setQBluetoothSocket_DoDeviceDiscovery_IsBase(bool value) const { qbluetoothsocket_dodevicediscovery_isbase = value; }
    inline void setQBluetoothSocket_SetOpenMode_IsBase(bool value) const { qbluetoothsocket_setopenmode_isbase = value; }
    inline void setQBluetoothSocket_SetErrorString_IsBase(bool value) const { qbluetoothsocket_seterrorstring_isbase = value; }
    inline void setQBluetoothSocket_Sender_IsBase(bool value) const { qbluetoothsocket_sender_isbase = value; }
    inline void setQBluetoothSocket_SenderSignalIndex_IsBase(bool value) const { qbluetoothsocket_sendersignalindex_isbase = value; }
    inline void setQBluetoothSocket_Receivers_IsBase(bool value) const { qbluetoothsocket_receivers_isbase = value; }
    inline void setQBluetoothSocket_IsSignalConnected_IsBase(bool value) const { qbluetoothsocket_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbluetoothsocket_metaobject_isbase) {
            qbluetoothsocket_metaobject_isbase = false;
            return QBluetoothSocket::metaObject();
        }
        auto metaobject_cb = qbluetoothsocket_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QBluetoothSocket::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbluetoothsocket_metacast_isbase) {
            qbluetoothsocket_metacast_isbase = false;
            return QBluetoothSocket::qt_metacast(param1);
        }
        auto metacast_cb = qbluetoothsocket_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QBluetoothSocket::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbluetoothsocket_metacall_isbase) {
            qbluetoothsocket_metacall_isbase = false;
            return QBluetoothSocket::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qbluetoothsocket_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBluetoothSocket::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qbluetoothsocket_close_isbase) {
            qbluetoothsocket_close_isbase = false;
            QBluetoothSocket::close();
            return;
        }
        auto close_cb = qbluetoothsocket_close_callback;
        if (close_cb) {
            close_cb();
            return;
        }
        QBluetoothSocket::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qbluetoothsocket_issequential_isbase) {
            qbluetoothsocket_issequential_isbase = false;
            return QBluetoothSocket::isSequential();
        }
        auto issequential_cb = qbluetoothsocket_issequential_callback;
        if (issequential_cb) {
            bool callback_ret = issequential_cb();
            return callback_ret;
        }
        return QBluetoothSocket::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qbluetoothsocket_bytesavailable_isbase) {
            qbluetoothsocket_bytesavailable_isbase = false;
            return QBluetoothSocket::bytesAvailable();
        }
        auto bytesavailable_cb = qbluetoothsocket_bytesavailable_callback;
        if (bytesavailable_cb) {
            long long callback_ret = bytesavailable_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QBluetoothSocket::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qbluetoothsocket_bytestowrite_isbase) {
            qbluetoothsocket_bytestowrite_isbase = false;
            return QBluetoothSocket::bytesToWrite();
        }
        auto bytestowrite_cb = qbluetoothsocket_bytestowrite_callback;
        if (bytestowrite_cb) {
            long long callback_ret = bytestowrite_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QBluetoothSocket::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qbluetoothsocket_canreadline_isbase) {
            qbluetoothsocket_canreadline_isbase = false;
            return QBluetoothSocket::canReadLine();
        }
        auto canreadline_cb = qbluetoothsocket_canreadline_callback;
        if (canreadline_cb) {
            bool callback_ret = canreadline_cb();
            return callback_ret;
        }
        return QBluetoothSocket::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxSize) override {
        if (qbluetoothsocket_readdata_isbase) {
            qbluetoothsocket_readdata_isbase = false;
            return QBluetoothSocket::readData(data, maxSize);
        }
        auto readdata_cb = qbluetoothsocket_readdata_callback;
        if (readdata_cb) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxSize);

            long long callback_ret = readdata_cb(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QBluetoothSocket::readData(data, maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 maxSize) override {
        if (qbluetoothsocket_writedata_isbase) {
            qbluetoothsocket_writedata_isbase = false;
            return QBluetoothSocket::writeData(data, maxSize);
        }
        auto writedata_cb = qbluetoothsocket_writedata_callback;
        if (writedata_cb) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(maxSize);

            long long callback_ret = writedata_cb(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QBluetoothSocket::writeData(data, maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode mode) override {
        if (qbluetoothsocket_open_isbase) {
            qbluetoothsocket_open_isbase = false;
            return QBluetoothSocket::open(mode);
        }
        auto open_cb = qbluetoothsocket_open_callback;
        if (open_cb) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = open_cb(this, cbval1);
            return callback_ret;
        }
        return QBluetoothSocket::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qbluetoothsocket_pos_isbase) {
            qbluetoothsocket_pos_isbase = false;
            return QBluetoothSocket::pos();
        }
        auto pos_cb = qbluetoothsocket_pos_callback;
        if (pos_cb) {
            long long callback_ret = pos_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QBluetoothSocket::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qbluetoothsocket_size_isbase) {
            qbluetoothsocket_size_isbase = false;
            return QBluetoothSocket::size();
        }
        auto size_cb = qbluetoothsocket_size_callback;
        if (size_cb) {
            long long callback_ret = size_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QBluetoothSocket::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qbluetoothsocket_seek_isbase) {
            qbluetoothsocket_seek_isbase = false;
            return QBluetoothSocket::seek(pos);
        }
        auto seek_cb = qbluetoothsocket_seek_callback;
        if (seek_cb) {
            long long cbval1 = static_cast<long long>(pos);

            bool callback_ret = seek_cb(this, cbval1);
            return callback_ret;
        }
        return QBluetoothSocket::seek(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qbluetoothsocket_atend_isbase) {
            qbluetoothsocket_atend_isbase = false;
            return QBluetoothSocket::atEnd();
        }
        auto atend_cb = qbluetoothsocket_atend_callback;
        if (atend_cb) {
            bool callback_ret = atend_cb();
            return callback_ret;
        }
        return QBluetoothSocket::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qbluetoothsocket_reset_isbase) {
            qbluetoothsocket_reset_isbase = false;
            return QBluetoothSocket::reset();
        }
        auto reset_cb = qbluetoothsocket_reset_callback;
        if (reset_cb) {
            bool callback_ret = reset_cb();
            return callback_ret;
        }
        return QBluetoothSocket::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qbluetoothsocket_waitforreadyread_isbase) {
            qbluetoothsocket_waitforreadyread_isbase = false;
            return QBluetoothSocket::waitForReadyRead(msecs);
        }
        auto waitforreadyread_cb = qbluetoothsocket_waitforreadyread_callback;
        if (waitforreadyread_cb) {
            int cbval1 = msecs;

            bool callback_ret = waitforreadyread_cb(this, cbval1);
            return callback_ret;
        }
        return QBluetoothSocket::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qbluetoothsocket_waitforbyteswritten_isbase) {
            qbluetoothsocket_waitforbyteswritten_isbase = false;
            return QBluetoothSocket::waitForBytesWritten(msecs);
        }
        auto waitforbyteswritten_cb = qbluetoothsocket_waitforbyteswritten_callback;
        if (waitforbyteswritten_cb) {
            int cbval1 = msecs;

            bool callback_ret = waitforbyteswritten_cb(this, cbval1);
            return callback_ret;
        }
        return QBluetoothSocket::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qbluetoothsocket_readlinedata_isbase) {
            qbluetoothsocket_readlinedata_isbase = false;
            return QBluetoothSocket::readLineData(data, maxlen);
        }
        auto readlinedata_cb = qbluetoothsocket_readlinedata_callback;
        if (readlinedata_cb) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = readlinedata_cb(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QBluetoothSocket::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qbluetoothsocket_skipdata_isbase) {
            qbluetoothsocket_skipdata_isbase = false;
            return QBluetoothSocket::skipData(maxSize);
        }
        auto skipdata_cb = qbluetoothsocket_skipdata_callback;
        if (skipdata_cb) {
            long long cbval1 = static_cast<long long>(maxSize);

            long long callback_ret = skipdata_cb(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return QBluetoothSocket::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbluetoothsocket_event_isbase) {
            qbluetoothsocket_event_isbase = false;
            return QBluetoothSocket::event(event);
        }
        auto event_cb = qbluetoothsocket_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QBluetoothSocket::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbluetoothsocket_eventfilter_isbase) {
            qbluetoothsocket_eventfilter_isbase = false;
            return QBluetoothSocket::eventFilter(watched, event);
        }
        auto eventfilter_cb = qbluetoothsocket_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBluetoothSocket::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbluetoothsocket_timerevent_isbase) {
            qbluetoothsocket_timerevent_isbase = false;
            QBluetoothSocket::timerEvent(event);
            return;
        }
        auto timerevent_cb = qbluetoothsocket_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QBluetoothSocket::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbluetoothsocket_childevent_isbase) {
            qbluetoothsocket_childevent_isbase = false;
            QBluetoothSocket::childEvent(event);
            return;
        }
        auto childevent_cb = qbluetoothsocket_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QBluetoothSocket::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbluetoothsocket_customevent_isbase) {
            qbluetoothsocket_customevent_isbase = false;
            QBluetoothSocket::customEvent(event);
            return;
        }
        auto customevent_cb = qbluetoothsocket_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QBluetoothSocket::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbluetoothsocket_connectnotify_isbase) {
            qbluetoothsocket_connectnotify_isbase = false;
            QBluetoothSocket::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qbluetoothsocket_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QBluetoothSocket::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbluetoothsocket_disconnectnotify_isbase) {
            qbluetoothsocket_disconnectnotify_isbase = false;
            QBluetoothSocket::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qbluetoothsocket_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QBluetoothSocket::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setSocketState(QBluetoothSocket::SocketState state) {
        if (qbluetoothsocket_setsocketstate_isbase) {
            qbluetoothsocket_setsocketstate_isbase = false;
            QBluetoothSocket::setSocketState(state);
            return;
        }
        auto setsocketstate_cb = qbluetoothsocket_setsocketstate_callback;
        if (setsocketstate_cb) {
            int cbval1 = static_cast<int>(state);

            setsocketstate_cb(this, cbval1);
            return;
        }
        QBluetoothSocket::setSocketState(state);
    }

    // Virtual method for C ABI access and custom callback
    void setSocketError(QBluetoothSocket::SocketError errorVal) {
        if (qbluetoothsocket_setsocketerror_isbase) {
            qbluetoothsocket_setsocketerror_isbase = false;
            QBluetoothSocket::setSocketError(errorVal);
            return;
        }
        auto setsocketerror_cb = qbluetoothsocket_setsocketerror_callback;
        if (setsocketerror_cb) {
            int cbval1 = static_cast<int>(errorVal);

            setsocketerror_cb(this, cbval1);
            return;
        }
        QBluetoothSocket::setSocketError(errorVal);
    }

    // Virtual method for C ABI access and custom callback
    void doDeviceDiscovery(const QBluetoothServiceInfo& service, QFlags<QIODeviceBase::OpenModeFlag> openMode) {
        if (qbluetoothsocket_dodevicediscovery_isbase) {
            qbluetoothsocket_dodevicediscovery_isbase = false;
            QBluetoothSocket::doDeviceDiscovery(service, openMode);
            return;
        }
        auto dodevicediscovery_cb = qbluetoothsocket_dodevicediscovery_callback;
        if (dodevicediscovery_cb) {
            const QBluetoothServiceInfo& service_ret = service;
            // Cast returned reference into pointer
            QBluetoothServiceInfo* cbval1 = const_cast<QBluetoothServiceInfo*>(&service_ret);
            int cbval2 = static_cast<int>(openMode);

            dodevicediscovery_cb(this, cbval1, cbval2);
            return;
        }
        QBluetoothSocket::doDeviceDiscovery(service, openMode);
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (qbluetoothsocket_setopenmode_isbase) {
            qbluetoothsocket_setopenmode_isbase = false;
            QBluetoothSocket::setOpenMode(openMode);
            return;
        }
        auto setopenmode_cb = qbluetoothsocket_setopenmode_callback;
        if (setopenmode_cb) {
            int cbval1 = static_cast<int>(openMode);

            setopenmode_cb(this, cbval1);
            return;
        }
        QBluetoothSocket::setOpenMode(openMode);
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (qbluetoothsocket_seterrorstring_isbase) {
            qbluetoothsocket_seterrorstring_isbase = false;
            QBluetoothSocket::setErrorString(errorString);
            return;
        }
        auto seterrorstring_cb = qbluetoothsocket_seterrorstring_callback;
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
        QBluetoothSocket::setErrorString(errorString);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qbluetoothsocket_sender_isbase) {
            qbluetoothsocket_sender_isbase = false;
            return QBluetoothSocket::sender();
        }
        auto sender_cb = qbluetoothsocket_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QBluetoothSocket::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qbluetoothsocket_sendersignalindex_isbase) {
            qbluetoothsocket_sendersignalindex_isbase = false;
            return QBluetoothSocket::senderSignalIndex();
        }
        auto sendersignalindex_cb = qbluetoothsocket_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QBluetoothSocket::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qbluetoothsocket_receivers_isbase) {
            qbluetoothsocket_receivers_isbase = false;
            return QBluetoothSocket::receivers(signal);
        }
        auto receivers_cb = qbluetoothsocket_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QBluetoothSocket::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qbluetoothsocket_issignalconnected_isbase) {
            qbluetoothsocket_issignalconnected_isbase = false;
            return QBluetoothSocket::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qbluetoothsocket_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QBluetoothSocket::isSignalConnected(signal);
    }

    // Friend functions
    friend long long QBluetoothSocket_ReadData(QBluetoothSocket* self, char* data, long long maxSize);
    friend long long QBluetoothSocket_SuperReadData(QBluetoothSocket* self, char* data, long long maxSize);
    friend long long QBluetoothSocket_WriteData(QBluetoothSocket* self, const char* data, long long maxSize);
    friend long long QBluetoothSocket_SuperWriteData(QBluetoothSocket* self, const char* data, long long maxSize);
    friend long long QBluetoothSocket_ReadLineData(QBluetoothSocket* self, char* data, long long maxlen);
    friend long long QBluetoothSocket_SuperReadLineData(QBluetoothSocket* self, char* data, long long maxlen);
    friend long long QBluetoothSocket_SkipData(QBluetoothSocket* self, long long maxSize);
    friend long long QBluetoothSocket_SuperSkipData(QBluetoothSocket* self, long long maxSize);
    friend void QBluetoothSocket_TimerEvent(QBluetoothSocket* self, QTimerEvent* event);
    friend void QBluetoothSocket_SuperTimerEvent(QBluetoothSocket* self, QTimerEvent* event);
    friend void QBluetoothSocket_ChildEvent(QBluetoothSocket* self, QChildEvent* event);
    friend void QBluetoothSocket_SuperChildEvent(QBluetoothSocket* self, QChildEvent* event);
    friend void QBluetoothSocket_CustomEvent(QBluetoothSocket* self, QEvent* event);
    friend void QBluetoothSocket_SuperCustomEvent(QBluetoothSocket* self, QEvent* event);
    friend void QBluetoothSocket_ConnectNotify(QBluetoothSocket* self, const QMetaMethod* signal);
    friend void QBluetoothSocket_SuperConnectNotify(QBluetoothSocket* self, const QMetaMethod* signal);
    friend void QBluetoothSocket_DisconnectNotify(QBluetoothSocket* self, const QMetaMethod* signal);
    friend void QBluetoothSocket_SuperDisconnectNotify(QBluetoothSocket* self, const QMetaMethod* signal);
    friend void QBluetoothSocket_SetSocketState(QBluetoothSocket* self, int state);
    friend void QBluetoothSocket_SuperSetSocketState(QBluetoothSocket* self, int state);
    friend void QBluetoothSocket_SetSocketError(QBluetoothSocket* self, int errorVal);
    friend void QBluetoothSocket_SuperSetSocketError(QBluetoothSocket* self, int errorVal);
    friend void QBluetoothSocket_DoDeviceDiscovery(QBluetoothSocket* self, const QBluetoothServiceInfo* service, int openMode);
    friend void QBluetoothSocket_SuperDoDeviceDiscovery(QBluetoothSocket* self, const QBluetoothServiceInfo* service, int openMode);
    friend void QBluetoothSocket_SetOpenMode(QBluetoothSocket* self, int openMode);
    friend void QBluetoothSocket_SuperSetOpenMode(QBluetoothSocket* self, int openMode);
    friend void QBluetoothSocket_SetErrorString(QBluetoothSocket* self, const libqt_string errorString);
    friend void QBluetoothSocket_SuperSetErrorString(QBluetoothSocket* self, const libqt_string errorString);
    friend QObject* QBluetoothSocket_Sender(const QBluetoothSocket* self);
    friend QObject* QBluetoothSocket_SuperSender(const QBluetoothSocket* self);
    friend int QBluetoothSocket_SenderSignalIndex(const QBluetoothSocket* self);
    friend int QBluetoothSocket_SuperSenderSignalIndex(const QBluetoothSocket* self);
    friend int QBluetoothSocket_Receivers(const QBluetoothSocket* self, const char* signal);
    friend int QBluetoothSocket_SuperReceivers(const QBluetoothSocket* self, const char* signal);
    friend bool QBluetoothSocket_IsSignalConnected(const QBluetoothSocket* self, const QMetaMethod* signal);
    friend bool QBluetoothSocket_SuperIsSignalConnected(const QBluetoothSocket* self, const QMetaMethod* signal);
};

#endif
