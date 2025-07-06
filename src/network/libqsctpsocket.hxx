#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQSCTPSOCKET_H
#define SRC_NETWORKC_LIBVIRTUALQSCTPSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSctpSocket so that we can call protected methods
class VirtualQSctpSocket final : public QSctpSocket {

  public:
    // Virtual class boolean flag
    bool isVirtualQSctpSocket = true;

    // Virtual class public types (including callbacks)
    using QSctpSocket_Metacall_Callback = int (*)(QSctpSocket*, int, int, void**);
    using QSctpSocket_Close_Callback = void (*)();
    using QSctpSocket_DisconnectFromHost_Callback = void (*)();
    using QSctpSocket_ReadData_Callback = long long (*)(QSctpSocket*, char*, long long);
    using QSctpSocket_ReadLineData_Callback = long long (*)(QSctpSocket*, char*, long long);
    using QSctpSocket_Resume_Callback = void (*)();
    using QSctpSocket_Bind_Callback = bool (*)(QSctpSocket*, QHostAddress*, uint16_t, int);
    using QSctpSocket_ConnectToHost_Callback = void (*)(QSctpSocket*, libqt_string, uint16_t, int, int);
    using QSctpSocket_BytesAvailable_Callback = long long (*)();
    using QSctpSocket_BytesToWrite_Callback = long long (*)();
    using QSctpSocket_SetReadBufferSize_Callback = void (*)(QSctpSocket*, long long);
    using QSctpSocket_SocketDescriptor_Callback = intptr_t (*)();
    using QSctpSocket_SetSocketDescriptor_Callback = bool (*)(QSctpSocket*, intptr_t, int, int);
    using QSctpSocket_SetSocketOption_Callback = void (*)(QSctpSocket*, int, QVariant*);
    using QSctpSocket_SocketOption_Callback = QVariant* (*)(QSctpSocket*, int);
    using QSctpSocket_IsSequential_Callback = bool (*)();
    using QSctpSocket_WaitForConnected_Callback = bool (*)(QSctpSocket*, int);
    using QSctpSocket_WaitForReadyRead_Callback = bool (*)(QSctpSocket*, int);
    using QSctpSocket_WaitForBytesWritten_Callback = bool (*)(QSctpSocket*, int);
    using QSctpSocket_WaitForDisconnected_Callback = bool (*)(QSctpSocket*, int);
    using QSctpSocket_SkipData_Callback = long long (*)(QSctpSocket*, long long);
    using QSctpSocket_WriteData_Callback = long long (*)(QSctpSocket*, const char*, long long);
    using QSctpSocket_Open_Callback = bool (*)(QSctpSocket*, int);
    using QSctpSocket_Pos_Callback = long long (*)();
    using QSctpSocket_Size_Callback = long long (*)();
    using QSctpSocket_Seek_Callback = bool (*)(QSctpSocket*, long long);
    using QSctpSocket_AtEnd_Callback = bool (*)();
    using QSctpSocket_Reset_Callback = bool (*)();
    using QSctpSocket_CanReadLine_Callback = bool (*)();
    using QSctpSocket_Event_Callback = bool (*)(QSctpSocket*, QEvent*);
    using QSctpSocket_EventFilter_Callback = bool (*)(QSctpSocket*, QObject*, QEvent*);
    using QSctpSocket_TimerEvent_Callback = void (*)(QSctpSocket*, QTimerEvent*);
    using QSctpSocket_ChildEvent_Callback = void (*)(QSctpSocket*, QChildEvent*);
    using QSctpSocket_CustomEvent_Callback = void (*)(QSctpSocket*, QEvent*);
    using QSctpSocket_ConnectNotify_Callback = void (*)(QSctpSocket*, QMetaMethod*);
    using QSctpSocket_DisconnectNotify_Callback = void (*)(QSctpSocket*, QMetaMethod*);
    using QSctpSocket_SetSocketState_Callback = void (*)(QSctpSocket*, int);
    using QSctpSocket_SetSocketError_Callback = void (*)(QSctpSocket*, int);
    using QSctpSocket_SetLocalPort_Callback = void (*)(QSctpSocket*, uint16_t);
    using QSctpSocket_SetLocalAddress_Callback = void (*)(QSctpSocket*, QHostAddress*);
    using QSctpSocket_SetPeerPort_Callback = void (*)(QSctpSocket*, uint16_t);
    using QSctpSocket_SetPeerAddress_Callback = void (*)(QSctpSocket*, QHostAddress*);
    using QSctpSocket_SetPeerName_Callback = void (*)(QSctpSocket*, libqt_string);
    using QSctpSocket_SetOpenMode_Callback = void (*)(QSctpSocket*, int);
    using QSctpSocket_SetErrorString_Callback = void (*)(QSctpSocket*, libqt_string);
    using QSctpSocket_Sender_Callback = QObject* (*)();
    using QSctpSocket_SenderSignalIndex_Callback = int (*)();
    using QSctpSocket_Receivers_Callback = int (*)(const QSctpSocket*, const char*);
    using QSctpSocket_IsSignalConnected_Callback = bool (*)(const QSctpSocket*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSctpSocket_Metacall_Callback qsctpsocket_metacall_callback = nullptr;
    QSctpSocket_Close_Callback qsctpsocket_close_callback = nullptr;
    QSctpSocket_DisconnectFromHost_Callback qsctpsocket_disconnectfromhost_callback = nullptr;
    QSctpSocket_ReadData_Callback qsctpsocket_readdata_callback = nullptr;
    QSctpSocket_ReadLineData_Callback qsctpsocket_readlinedata_callback = nullptr;
    QSctpSocket_Resume_Callback qsctpsocket_resume_callback = nullptr;
    QSctpSocket_Bind_Callback qsctpsocket_bind_callback = nullptr;
    QSctpSocket_ConnectToHost_Callback qsctpsocket_connecttohost_callback = nullptr;
    QSctpSocket_BytesAvailable_Callback qsctpsocket_bytesavailable_callback = nullptr;
    QSctpSocket_BytesToWrite_Callback qsctpsocket_bytestowrite_callback = nullptr;
    QSctpSocket_SetReadBufferSize_Callback qsctpsocket_setreadbuffersize_callback = nullptr;
    QSctpSocket_SocketDescriptor_Callback qsctpsocket_socketdescriptor_callback = nullptr;
    QSctpSocket_SetSocketDescriptor_Callback qsctpsocket_setsocketdescriptor_callback = nullptr;
    QSctpSocket_SetSocketOption_Callback qsctpsocket_setsocketoption_callback = nullptr;
    QSctpSocket_SocketOption_Callback qsctpsocket_socketoption_callback = nullptr;
    QSctpSocket_IsSequential_Callback qsctpsocket_issequential_callback = nullptr;
    QSctpSocket_WaitForConnected_Callback qsctpsocket_waitforconnected_callback = nullptr;
    QSctpSocket_WaitForReadyRead_Callback qsctpsocket_waitforreadyread_callback = nullptr;
    QSctpSocket_WaitForBytesWritten_Callback qsctpsocket_waitforbyteswritten_callback = nullptr;
    QSctpSocket_WaitForDisconnected_Callback qsctpsocket_waitfordisconnected_callback = nullptr;
    QSctpSocket_SkipData_Callback qsctpsocket_skipdata_callback = nullptr;
    QSctpSocket_WriteData_Callback qsctpsocket_writedata_callback = nullptr;
    QSctpSocket_Open_Callback qsctpsocket_open_callback = nullptr;
    QSctpSocket_Pos_Callback qsctpsocket_pos_callback = nullptr;
    QSctpSocket_Size_Callback qsctpsocket_size_callback = nullptr;
    QSctpSocket_Seek_Callback qsctpsocket_seek_callback = nullptr;
    QSctpSocket_AtEnd_Callback qsctpsocket_atend_callback = nullptr;
    QSctpSocket_Reset_Callback qsctpsocket_reset_callback = nullptr;
    QSctpSocket_CanReadLine_Callback qsctpsocket_canreadline_callback = nullptr;
    QSctpSocket_Event_Callback qsctpsocket_event_callback = nullptr;
    QSctpSocket_EventFilter_Callback qsctpsocket_eventfilter_callback = nullptr;
    QSctpSocket_TimerEvent_Callback qsctpsocket_timerevent_callback = nullptr;
    QSctpSocket_ChildEvent_Callback qsctpsocket_childevent_callback = nullptr;
    QSctpSocket_CustomEvent_Callback qsctpsocket_customevent_callback = nullptr;
    QSctpSocket_ConnectNotify_Callback qsctpsocket_connectnotify_callback = nullptr;
    QSctpSocket_DisconnectNotify_Callback qsctpsocket_disconnectnotify_callback = nullptr;
    QSctpSocket_SetSocketState_Callback qsctpsocket_setsocketstate_callback = nullptr;
    QSctpSocket_SetSocketError_Callback qsctpsocket_setsocketerror_callback = nullptr;
    QSctpSocket_SetLocalPort_Callback qsctpsocket_setlocalport_callback = nullptr;
    QSctpSocket_SetLocalAddress_Callback qsctpsocket_setlocaladdress_callback = nullptr;
    QSctpSocket_SetPeerPort_Callback qsctpsocket_setpeerport_callback = nullptr;
    QSctpSocket_SetPeerAddress_Callback qsctpsocket_setpeeraddress_callback = nullptr;
    QSctpSocket_SetPeerName_Callback qsctpsocket_setpeername_callback = nullptr;
    QSctpSocket_SetOpenMode_Callback qsctpsocket_setopenmode_callback = nullptr;
    QSctpSocket_SetErrorString_Callback qsctpsocket_seterrorstring_callback = nullptr;
    QSctpSocket_Sender_Callback qsctpsocket_sender_callback = nullptr;
    QSctpSocket_SenderSignalIndex_Callback qsctpsocket_sendersignalindex_callback = nullptr;
    QSctpSocket_Receivers_Callback qsctpsocket_receivers_callback = nullptr;
    QSctpSocket_IsSignalConnected_Callback qsctpsocket_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsctpsocket_metacall_isbase = false;
    mutable bool qsctpsocket_close_isbase = false;
    mutable bool qsctpsocket_disconnectfromhost_isbase = false;
    mutable bool qsctpsocket_readdata_isbase = false;
    mutable bool qsctpsocket_readlinedata_isbase = false;
    mutable bool qsctpsocket_resume_isbase = false;
    mutable bool qsctpsocket_bind_isbase = false;
    mutable bool qsctpsocket_connecttohost_isbase = false;
    mutable bool qsctpsocket_bytesavailable_isbase = false;
    mutable bool qsctpsocket_bytestowrite_isbase = false;
    mutable bool qsctpsocket_setreadbuffersize_isbase = false;
    mutable bool qsctpsocket_socketdescriptor_isbase = false;
    mutable bool qsctpsocket_setsocketdescriptor_isbase = false;
    mutable bool qsctpsocket_setsocketoption_isbase = false;
    mutable bool qsctpsocket_socketoption_isbase = false;
    mutable bool qsctpsocket_issequential_isbase = false;
    mutable bool qsctpsocket_waitforconnected_isbase = false;
    mutable bool qsctpsocket_waitforreadyread_isbase = false;
    mutable bool qsctpsocket_waitforbyteswritten_isbase = false;
    mutable bool qsctpsocket_waitfordisconnected_isbase = false;
    mutable bool qsctpsocket_skipdata_isbase = false;
    mutable bool qsctpsocket_writedata_isbase = false;
    mutable bool qsctpsocket_open_isbase = false;
    mutable bool qsctpsocket_pos_isbase = false;
    mutable bool qsctpsocket_size_isbase = false;
    mutable bool qsctpsocket_seek_isbase = false;
    mutable bool qsctpsocket_atend_isbase = false;
    mutable bool qsctpsocket_reset_isbase = false;
    mutable bool qsctpsocket_canreadline_isbase = false;
    mutable bool qsctpsocket_event_isbase = false;
    mutable bool qsctpsocket_eventfilter_isbase = false;
    mutable bool qsctpsocket_timerevent_isbase = false;
    mutable bool qsctpsocket_childevent_isbase = false;
    mutable bool qsctpsocket_customevent_isbase = false;
    mutable bool qsctpsocket_connectnotify_isbase = false;
    mutable bool qsctpsocket_disconnectnotify_isbase = false;
    mutable bool qsctpsocket_setsocketstate_isbase = false;
    mutable bool qsctpsocket_setsocketerror_isbase = false;
    mutable bool qsctpsocket_setlocalport_isbase = false;
    mutable bool qsctpsocket_setlocaladdress_isbase = false;
    mutable bool qsctpsocket_setpeerport_isbase = false;
    mutable bool qsctpsocket_setpeeraddress_isbase = false;
    mutable bool qsctpsocket_setpeername_isbase = false;
    mutable bool qsctpsocket_setopenmode_isbase = false;
    mutable bool qsctpsocket_seterrorstring_isbase = false;
    mutable bool qsctpsocket_sender_isbase = false;
    mutable bool qsctpsocket_sendersignalindex_isbase = false;
    mutable bool qsctpsocket_receivers_isbase = false;
    mutable bool qsctpsocket_issignalconnected_isbase = false;

  public:
    VirtualQSctpSocket() : QSctpSocket() {};
    VirtualQSctpSocket(QObject* parent) : QSctpSocket(parent) {};

    ~VirtualQSctpSocket() {
        qsctpsocket_metacall_callback = nullptr;
        qsctpsocket_close_callback = nullptr;
        qsctpsocket_disconnectfromhost_callback = nullptr;
        qsctpsocket_readdata_callback = nullptr;
        qsctpsocket_readlinedata_callback = nullptr;
        qsctpsocket_resume_callback = nullptr;
        qsctpsocket_bind_callback = nullptr;
        qsctpsocket_connecttohost_callback = nullptr;
        qsctpsocket_bytesavailable_callback = nullptr;
        qsctpsocket_bytestowrite_callback = nullptr;
        qsctpsocket_setreadbuffersize_callback = nullptr;
        qsctpsocket_socketdescriptor_callback = nullptr;
        qsctpsocket_setsocketdescriptor_callback = nullptr;
        qsctpsocket_setsocketoption_callback = nullptr;
        qsctpsocket_socketoption_callback = nullptr;
        qsctpsocket_issequential_callback = nullptr;
        qsctpsocket_waitforconnected_callback = nullptr;
        qsctpsocket_waitforreadyread_callback = nullptr;
        qsctpsocket_waitforbyteswritten_callback = nullptr;
        qsctpsocket_waitfordisconnected_callback = nullptr;
        qsctpsocket_skipdata_callback = nullptr;
        qsctpsocket_writedata_callback = nullptr;
        qsctpsocket_open_callback = nullptr;
        qsctpsocket_pos_callback = nullptr;
        qsctpsocket_size_callback = nullptr;
        qsctpsocket_seek_callback = nullptr;
        qsctpsocket_atend_callback = nullptr;
        qsctpsocket_reset_callback = nullptr;
        qsctpsocket_canreadline_callback = nullptr;
        qsctpsocket_event_callback = nullptr;
        qsctpsocket_eventfilter_callback = nullptr;
        qsctpsocket_timerevent_callback = nullptr;
        qsctpsocket_childevent_callback = nullptr;
        qsctpsocket_customevent_callback = nullptr;
        qsctpsocket_connectnotify_callback = nullptr;
        qsctpsocket_disconnectnotify_callback = nullptr;
        qsctpsocket_setsocketstate_callback = nullptr;
        qsctpsocket_setsocketerror_callback = nullptr;
        qsctpsocket_setlocalport_callback = nullptr;
        qsctpsocket_setlocaladdress_callback = nullptr;
        qsctpsocket_setpeerport_callback = nullptr;
        qsctpsocket_setpeeraddress_callback = nullptr;
        qsctpsocket_setpeername_callback = nullptr;
        qsctpsocket_setopenmode_callback = nullptr;
        qsctpsocket_seterrorstring_callback = nullptr;
        qsctpsocket_sender_callback = nullptr;
        qsctpsocket_sendersignalindex_callback = nullptr;
        qsctpsocket_receivers_callback = nullptr;
        qsctpsocket_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQSctpSocket_Metacall_Callback(QSctpSocket_Metacall_Callback cb) { qsctpsocket_metacall_callback = cb; }
    inline void setQSctpSocket_Close_Callback(QSctpSocket_Close_Callback cb) { qsctpsocket_close_callback = cb; }
    inline void setQSctpSocket_DisconnectFromHost_Callback(QSctpSocket_DisconnectFromHost_Callback cb) { qsctpsocket_disconnectfromhost_callback = cb; }
    inline void setQSctpSocket_ReadData_Callback(QSctpSocket_ReadData_Callback cb) { qsctpsocket_readdata_callback = cb; }
    inline void setQSctpSocket_ReadLineData_Callback(QSctpSocket_ReadLineData_Callback cb) { qsctpsocket_readlinedata_callback = cb; }
    inline void setQSctpSocket_Resume_Callback(QSctpSocket_Resume_Callback cb) { qsctpsocket_resume_callback = cb; }
    inline void setQSctpSocket_Bind_Callback(QSctpSocket_Bind_Callback cb) { qsctpsocket_bind_callback = cb; }
    inline void setQSctpSocket_ConnectToHost_Callback(QSctpSocket_ConnectToHost_Callback cb) { qsctpsocket_connecttohost_callback = cb; }
    inline void setQSctpSocket_BytesAvailable_Callback(QSctpSocket_BytesAvailable_Callback cb) { qsctpsocket_bytesavailable_callback = cb; }
    inline void setQSctpSocket_BytesToWrite_Callback(QSctpSocket_BytesToWrite_Callback cb) { qsctpsocket_bytestowrite_callback = cb; }
    inline void setQSctpSocket_SetReadBufferSize_Callback(QSctpSocket_SetReadBufferSize_Callback cb) { qsctpsocket_setreadbuffersize_callback = cb; }
    inline void setQSctpSocket_SocketDescriptor_Callback(QSctpSocket_SocketDescriptor_Callback cb) { qsctpsocket_socketdescriptor_callback = cb; }
    inline void setQSctpSocket_SetSocketDescriptor_Callback(QSctpSocket_SetSocketDescriptor_Callback cb) { qsctpsocket_setsocketdescriptor_callback = cb; }
    inline void setQSctpSocket_SetSocketOption_Callback(QSctpSocket_SetSocketOption_Callback cb) { qsctpsocket_setsocketoption_callback = cb; }
    inline void setQSctpSocket_SocketOption_Callback(QSctpSocket_SocketOption_Callback cb) { qsctpsocket_socketoption_callback = cb; }
    inline void setQSctpSocket_IsSequential_Callback(QSctpSocket_IsSequential_Callback cb) { qsctpsocket_issequential_callback = cb; }
    inline void setQSctpSocket_WaitForConnected_Callback(QSctpSocket_WaitForConnected_Callback cb) { qsctpsocket_waitforconnected_callback = cb; }
    inline void setQSctpSocket_WaitForReadyRead_Callback(QSctpSocket_WaitForReadyRead_Callback cb) { qsctpsocket_waitforreadyread_callback = cb; }
    inline void setQSctpSocket_WaitForBytesWritten_Callback(QSctpSocket_WaitForBytesWritten_Callback cb) { qsctpsocket_waitforbyteswritten_callback = cb; }
    inline void setQSctpSocket_WaitForDisconnected_Callback(QSctpSocket_WaitForDisconnected_Callback cb) { qsctpsocket_waitfordisconnected_callback = cb; }
    inline void setQSctpSocket_SkipData_Callback(QSctpSocket_SkipData_Callback cb) { qsctpsocket_skipdata_callback = cb; }
    inline void setQSctpSocket_WriteData_Callback(QSctpSocket_WriteData_Callback cb) { qsctpsocket_writedata_callback = cb; }
    inline void setQSctpSocket_Open_Callback(QSctpSocket_Open_Callback cb) { qsctpsocket_open_callback = cb; }
    inline void setQSctpSocket_Pos_Callback(QSctpSocket_Pos_Callback cb) { qsctpsocket_pos_callback = cb; }
    inline void setQSctpSocket_Size_Callback(QSctpSocket_Size_Callback cb) { qsctpsocket_size_callback = cb; }
    inline void setQSctpSocket_Seek_Callback(QSctpSocket_Seek_Callback cb) { qsctpsocket_seek_callback = cb; }
    inline void setQSctpSocket_AtEnd_Callback(QSctpSocket_AtEnd_Callback cb) { qsctpsocket_atend_callback = cb; }
    inline void setQSctpSocket_Reset_Callback(QSctpSocket_Reset_Callback cb) { qsctpsocket_reset_callback = cb; }
    inline void setQSctpSocket_CanReadLine_Callback(QSctpSocket_CanReadLine_Callback cb) { qsctpsocket_canreadline_callback = cb; }
    inline void setQSctpSocket_Event_Callback(QSctpSocket_Event_Callback cb) { qsctpsocket_event_callback = cb; }
    inline void setQSctpSocket_EventFilter_Callback(QSctpSocket_EventFilter_Callback cb) { qsctpsocket_eventfilter_callback = cb; }
    inline void setQSctpSocket_TimerEvent_Callback(QSctpSocket_TimerEvent_Callback cb) { qsctpsocket_timerevent_callback = cb; }
    inline void setQSctpSocket_ChildEvent_Callback(QSctpSocket_ChildEvent_Callback cb) { qsctpsocket_childevent_callback = cb; }
    inline void setQSctpSocket_CustomEvent_Callback(QSctpSocket_CustomEvent_Callback cb) { qsctpsocket_customevent_callback = cb; }
    inline void setQSctpSocket_ConnectNotify_Callback(QSctpSocket_ConnectNotify_Callback cb) { qsctpsocket_connectnotify_callback = cb; }
    inline void setQSctpSocket_DisconnectNotify_Callback(QSctpSocket_DisconnectNotify_Callback cb) { qsctpsocket_disconnectnotify_callback = cb; }
    inline void setQSctpSocket_SetSocketState_Callback(QSctpSocket_SetSocketState_Callback cb) { qsctpsocket_setsocketstate_callback = cb; }
    inline void setQSctpSocket_SetSocketError_Callback(QSctpSocket_SetSocketError_Callback cb) { qsctpsocket_setsocketerror_callback = cb; }
    inline void setQSctpSocket_SetLocalPort_Callback(QSctpSocket_SetLocalPort_Callback cb) { qsctpsocket_setlocalport_callback = cb; }
    inline void setQSctpSocket_SetLocalAddress_Callback(QSctpSocket_SetLocalAddress_Callback cb) { qsctpsocket_setlocaladdress_callback = cb; }
    inline void setQSctpSocket_SetPeerPort_Callback(QSctpSocket_SetPeerPort_Callback cb) { qsctpsocket_setpeerport_callback = cb; }
    inline void setQSctpSocket_SetPeerAddress_Callback(QSctpSocket_SetPeerAddress_Callback cb) { qsctpsocket_setpeeraddress_callback = cb; }
    inline void setQSctpSocket_SetPeerName_Callback(QSctpSocket_SetPeerName_Callback cb) { qsctpsocket_setpeername_callback = cb; }
    inline void setQSctpSocket_SetOpenMode_Callback(QSctpSocket_SetOpenMode_Callback cb) { qsctpsocket_setopenmode_callback = cb; }
    inline void setQSctpSocket_SetErrorString_Callback(QSctpSocket_SetErrorString_Callback cb) { qsctpsocket_seterrorstring_callback = cb; }
    inline void setQSctpSocket_Sender_Callback(QSctpSocket_Sender_Callback cb) { qsctpsocket_sender_callback = cb; }
    inline void setQSctpSocket_SenderSignalIndex_Callback(QSctpSocket_SenderSignalIndex_Callback cb) { qsctpsocket_sendersignalindex_callback = cb; }
    inline void setQSctpSocket_Receivers_Callback(QSctpSocket_Receivers_Callback cb) { qsctpsocket_receivers_callback = cb; }
    inline void setQSctpSocket_IsSignalConnected_Callback(QSctpSocket_IsSignalConnected_Callback cb) { qsctpsocket_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSctpSocket_Metacall_IsBase(bool value) const { qsctpsocket_metacall_isbase = value; }
    inline void setQSctpSocket_Close_IsBase(bool value) const { qsctpsocket_close_isbase = value; }
    inline void setQSctpSocket_DisconnectFromHost_IsBase(bool value) const { qsctpsocket_disconnectfromhost_isbase = value; }
    inline void setQSctpSocket_ReadData_IsBase(bool value) const { qsctpsocket_readdata_isbase = value; }
    inline void setQSctpSocket_ReadLineData_IsBase(bool value) const { qsctpsocket_readlinedata_isbase = value; }
    inline void setQSctpSocket_Resume_IsBase(bool value) const { qsctpsocket_resume_isbase = value; }
    inline void setQSctpSocket_Bind_IsBase(bool value) const { qsctpsocket_bind_isbase = value; }
    inline void setQSctpSocket_ConnectToHost_IsBase(bool value) const { qsctpsocket_connecttohost_isbase = value; }
    inline void setQSctpSocket_BytesAvailable_IsBase(bool value) const { qsctpsocket_bytesavailable_isbase = value; }
    inline void setQSctpSocket_BytesToWrite_IsBase(bool value) const { qsctpsocket_bytestowrite_isbase = value; }
    inline void setQSctpSocket_SetReadBufferSize_IsBase(bool value) const { qsctpsocket_setreadbuffersize_isbase = value; }
    inline void setQSctpSocket_SocketDescriptor_IsBase(bool value) const { qsctpsocket_socketdescriptor_isbase = value; }
    inline void setQSctpSocket_SetSocketDescriptor_IsBase(bool value) const { qsctpsocket_setsocketdescriptor_isbase = value; }
    inline void setQSctpSocket_SetSocketOption_IsBase(bool value) const { qsctpsocket_setsocketoption_isbase = value; }
    inline void setQSctpSocket_SocketOption_IsBase(bool value) const { qsctpsocket_socketoption_isbase = value; }
    inline void setQSctpSocket_IsSequential_IsBase(bool value) const { qsctpsocket_issequential_isbase = value; }
    inline void setQSctpSocket_WaitForConnected_IsBase(bool value) const { qsctpsocket_waitforconnected_isbase = value; }
    inline void setQSctpSocket_WaitForReadyRead_IsBase(bool value) const { qsctpsocket_waitforreadyread_isbase = value; }
    inline void setQSctpSocket_WaitForBytesWritten_IsBase(bool value) const { qsctpsocket_waitforbyteswritten_isbase = value; }
    inline void setQSctpSocket_WaitForDisconnected_IsBase(bool value) const { qsctpsocket_waitfordisconnected_isbase = value; }
    inline void setQSctpSocket_SkipData_IsBase(bool value) const { qsctpsocket_skipdata_isbase = value; }
    inline void setQSctpSocket_WriteData_IsBase(bool value) const { qsctpsocket_writedata_isbase = value; }
    inline void setQSctpSocket_Open_IsBase(bool value) const { qsctpsocket_open_isbase = value; }
    inline void setQSctpSocket_Pos_IsBase(bool value) const { qsctpsocket_pos_isbase = value; }
    inline void setQSctpSocket_Size_IsBase(bool value) const { qsctpsocket_size_isbase = value; }
    inline void setQSctpSocket_Seek_IsBase(bool value) const { qsctpsocket_seek_isbase = value; }
    inline void setQSctpSocket_AtEnd_IsBase(bool value) const { qsctpsocket_atend_isbase = value; }
    inline void setQSctpSocket_Reset_IsBase(bool value) const { qsctpsocket_reset_isbase = value; }
    inline void setQSctpSocket_CanReadLine_IsBase(bool value) const { qsctpsocket_canreadline_isbase = value; }
    inline void setQSctpSocket_Event_IsBase(bool value) const { qsctpsocket_event_isbase = value; }
    inline void setQSctpSocket_EventFilter_IsBase(bool value) const { qsctpsocket_eventfilter_isbase = value; }
    inline void setQSctpSocket_TimerEvent_IsBase(bool value) const { qsctpsocket_timerevent_isbase = value; }
    inline void setQSctpSocket_ChildEvent_IsBase(bool value) const { qsctpsocket_childevent_isbase = value; }
    inline void setQSctpSocket_CustomEvent_IsBase(bool value) const { qsctpsocket_customevent_isbase = value; }
    inline void setQSctpSocket_ConnectNotify_IsBase(bool value) const { qsctpsocket_connectnotify_isbase = value; }
    inline void setQSctpSocket_DisconnectNotify_IsBase(bool value) const { qsctpsocket_disconnectnotify_isbase = value; }
    inline void setQSctpSocket_SetSocketState_IsBase(bool value) const { qsctpsocket_setsocketstate_isbase = value; }
    inline void setQSctpSocket_SetSocketError_IsBase(bool value) const { qsctpsocket_setsocketerror_isbase = value; }
    inline void setQSctpSocket_SetLocalPort_IsBase(bool value) const { qsctpsocket_setlocalport_isbase = value; }
    inline void setQSctpSocket_SetLocalAddress_IsBase(bool value) const { qsctpsocket_setlocaladdress_isbase = value; }
    inline void setQSctpSocket_SetPeerPort_IsBase(bool value) const { qsctpsocket_setpeerport_isbase = value; }
    inline void setQSctpSocket_SetPeerAddress_IsBase(bool value) const { qsctpsocket_setpeeraddress_isbase = value; }
    inline void setQSctpSocket_SetPeerName_IsBase(bool value) const { qsctpsocket_setpeername_isbase = value; }
    inline void setQSctpSocket_SetOpenMode_IsBase(bool value) const { qsctpsocket_setopenmode_isbase = value; }
    inline void setQSctpSocket_SetErrorString_IsBase(bool value) const { qsctpsocket_seterrorstring_isbase = value; }
    inline void setQSctpSocket_Sender_IsBase(bool value) const { qsctpsocket_sender_isbase = value; }
    inline void setQSctpSocket_SenderSignalIndex_IsBase(bool value) const { qsctpsocket_sendersignalindex_isbase = value; }
    inline void setQSctpSocket_Receivers_IsBase(bool value) const { qsctpsocket_receivers_isbase = value; }
    inline void setQSctpSocket_IsSignalConnected_IsBase(bool value) const { qsctpsocket_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsctpsocket_metacall_isbase) {
            qsctpsocket_metacall_isbase = false;
            return QSctpSocket::qt_metacall(param1, param2, param3);
        } else if (qsctpsocket_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qsctpsocket_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QSctpSocket::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qsctpsocket_close_isbase) {
            qsctpsocket_close_isbase = false;
            QSctpSocket::close();
        } else if (qsctpsocket_close_callback != nullptr) {
            qsctpsocket_close_callback();
        } else {
            QSctpSocket::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectFromHost() override {
        if (qsctpsocket_disconnectfromhost_isbase) {
            qsctpsocket_disconnectfromhost_isbase = false;
            QSctpSocket::disconnectFromHost();
        } else if (qsctpsocket_disconnectfromhost_callback != nullptr) {
            qsctpsocket_disconnectfromhost_callback();
        } else {
            QSctpSocket::disconnectFromHost();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qsctpsocket_readdata_isbase) {
            qsctpsocket_readdata_isbase = false;
            return QSctpSocket::readData(data, maxlen);
        } else if (qsctpsocket_readdata_callback != nullptr) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = qsctpsocket_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QSctpSocket::readData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qsctpsocket_readlinedata_isbase) {
            qsctpsocket_readlinedata_isbase = false;
            return QSctpSocket::readLineData(data, maxlen);
        } else if (qsctpsocket_readlinedata_callback != nullptr) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = qsctpsocket_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QSctpSocket::readLineData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resume() override {
        if (qsctpsocket_resume_isbase) {
            qsctpsocket_resume_isbase = false;
            QSctpSocket::resume();
        } else if (qsctpsocket_resume_callback != nullptr) {
            qsctpsocket_resume_callback();
        } else {
            QSctpSocket::resume();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool bind(const QHostAddress& address, quint16 port, QFlags<QAbstractSocket::BindFlag> mode) override {
        if (qsctpsocket_bind_isbase) {
            qsctpsocket_bind_isbase = false;
            return QSctpSocket::bind(address, port, mode);
        } else if (qsctpsocket_bind_callback != nullptr) {
            const QHostAddress& address_ret = address;
            // Cast returned reference into pointer
            QHostAddress* cbval1 = const_cast<QHostAddress*>(&address_ret);
            uint16_t cbval2 = static_cast<uint16_t>(port);
            int cbval3 = static_cast<int>(mode);

            bool callback_ret = qsctpsocket_bind_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSctpSocket::bind(address, port, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectToHost(const QString& hostName, quint16 port, QFlags<QIODeviceBase::OpenModeFlag> mode, QAbstractSocket::NetworkLayerProtocol protocol) override {
        if (qsctpsocket_connecttohost_isbase) {
            qsctpsocket_connecttohost_isbase = false;
            QSctpSocket::connectToHost(hostName, port, mode, protocol);
        } else if (qsctpsocket_connecttohost_callback != nullptr) {
            const QString hostName_ret = hostName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray hostName_b = hostName_ret.toUtf8();
            libqt_string hostName_str;
            hostName_str.len = hostName_b.length();
            hostName_str.data = static_cast<const char*>(malloc((hostName_str.len + 1) * sizeof(char)));
            memcpy((void*)hostName_str.data, hostName_b.data(), hostName_str.len);
            ((char*)hostName_str.data)[hostName_str.len] = '\0';
            libqt_string cbval1 = hostName_str;
            uint16_t cbval2 = static_cast<uint16_t>(port);
            int cbval3 = static_cast<int>(mode);
            int cbval4 = static_cast<int>(protocol);

            qsctpsocket_connecttohost_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QSctpSocket::connectToHost(hostName, port, mode, protocol);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qsctpsocket_bytesavailable_isbase) {
            qsctpsocket_bytesavailable_isbase = false;
            return QSctpSocket::bytesAvailable();
        } else if (qsctpsocket_bytesavailable_callback != nullptr) {
            long long callback_ret = qsctpsocket_bytesavailable_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QSctpSocket::bytesAvailable();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qsctpsocket_bytestowrite_isbase) {
            qsctpsocket_bytestowrite_isbase = false;
            return QSctpSocket::bytesToWrite();
        } else if (qsctpsocket_bytestowrite_callback != nullptr) {
            long long callback_ret = qsctpsocket_bytestowrite_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QSctpSocket::bytesToWrite();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadBufferSize(qint64 size) override {
        if (qsctpsocket_setreadbuffersize_isbase) {
            qsctpsocket_setreadbuffersize_isbase = false;
            QSctpSocket::setReadBufferSize(size);
        } else if (qsctpsocket_setreadbuffersize_callback != nullptr) {
            long long cbval1 = static_cast<long long>(size);

            qsctpsocket_setreadbuffersize_callback(this, cbval1);
        } else {
            QSctpSocket::setReadBufferSize(size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qintptr socketDescriptor() const override {
        if (qsctpsocket_socketdescriptor_isbase) {
            qsctpsocket_socketdescriptor_isbase = false;
            return QSctpSocket::socketDescriptor();
        } else if (qsctpsocket_socketdescriptor_callback != nullptr) {
            intptr_t callback_ret = qsctpsocket_socketdescriptor_callback();
            return (qintptr)(callback_ret);
        } else {
            return QSctpSocket::socketDescriptor();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QFlags<QIODeviceBase::OpenModeFlag> openMode) override {
        if (qsctpsocket_setsocketdescriptor_isbase) {
            qsctpsocket_setsocketdescriptor_isbase = false;
            return QSctpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
        } else if (qsctpsocket_setsocketdescriptor_callback != nullptr) {
            qintptr socketDescriptor_ret = socketDescriptor;
            intptr_t cbval1 = (intptr_t)(socketDescriptor_ret);
            int cbval2 = static_cast<int>(state);
            int cbval3 = static_cast<int>(openMode);

            bool callback_ret = qsctpsocket_setsocketdescriptor_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QSctpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
        if (qsctpsocket_setsocketoption_isbase) {
            qsctpsocket_setsocketoption_isbase = false;
            QSctpSocket::setSocketOption(option, value);
        } else if (qsctpsocket_setsocketoption_callback != nullptr) {
            int cbval1 = static_cast<int>(option);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            qsctpsocket_setsocketoption_callback(this, cbval1, cbval2);
        } else {
            QSctpSocket::setSocketOption(option, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
        if (qsctpsocket_socketoption_isbase) {
            qsctpsocket_socketoption_isbase = false;
            return QSctpSocket::socketOption(option);
        } else if (qsctpsocket_socketoption_callback != nullptr) {
            int cbval1 = static_cast<int>(option);

            QVariant* callback_ret = qsctpsocket_socketoption_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSctpSocket::socketOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qsctpsocket_issequential_isbase) {
            qsctpsocket_issequential_isbase = false;
            return QSctpSocket::isSequential();
        } else if (qsctpsocket_issequential_callback != nullptr) {
            bool callback_ret = qsctpsocket_issequential_callback();
            return callback_ret;
        } else {
            return QSctpSocket::isSequential();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForConnected(int msecs) override {
        if (qsctpsocket_waitforconnected_isbase) {
            qsctpsocket_waitforconnected_isbase = false;
            return QSctpSocket::waitForConnected(msecs);
        } else if (qsctpsocket_waitforconnected_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qsctpsocket_waitforconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSctpSocket::waitForConnected(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qsctpsocket_waitforreadyread_isbase) {
            qsctpsocket_waitforreadyread_isbase = false;
            return QSctpSocket::waitForReadyRead(msecs);
        } else if (qsctpsocket_waitforreadyread_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qsctpsocket_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSctpSocket::waitForReadyRead(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qsctpsocket_waitforbyteswritten_isbase) {
            qsctpsocket_waitforbyteswritten_isbase = false;
            return QSctpSocket::waitForBytesWritten(msecs);
        } else if (qsctpsocket_waitforbyteswritten_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qsctpsocket_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSctpSocket::waitForBytesWritten(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForDisconnected(int msecs) override {
        if (qsctpsocket_waitfordisconnected_isbase) {
            qsctpsocket_waitfordisconnected_isbase = false;
            return QSctpSocket::waitForDisconnected(msecs);
        } else if (qsctpsocket_waitfordisconnected_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qsctpsocket_waitfordisconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSctpSocket::waitForDisconnected(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qsctpsocket_skipdata_isbase) {
            qsctpsocket_skipdata_isbase = false;
            return QSctpSocket::skipData(maxSize);
        } else if (qsctpsocket_skipdata_callback != nullptr) {
            long long cbval1 = static_cast<long long>(maxSize);

            long long callback_ret = qsctpsocket_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        } else {
            return QSctpSocket::skipData(maxSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 lenVal) override {
        if (qsctpsocket_writedata_isbase) {
            qsctpsocket_writedata_isbase = false;
            return QSctpSocket::writeData(data, lenVal);
        } else if (qsctpsocket_writedata_callback != nullptr) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(lenVal);

            long long callback_ret = qsctpsocket_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QSctpSocket::writeData(data, lenVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode mode) override {
        if (qsctpsocket_open_isbase) {
            qsctpsocket_open_isbase = false;
            return QSctpSocket::open(mode);
        } else if (qsctpsocket_open_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = qsctpsocket_open_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSctpSocket::open(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qsctpsocket_pos_isbase) {
            qsctpsocket_pos_isbase = false;
            return QSctpSocket::pos();
        } else if (qsctpsocket_pos_callback != nullptr) {
            long long callback_ret = qsctpsocket_pos_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QSctpSocket::pos();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qsctpsocket_size_isbase) {
            qsctpsocket_size_isbase = false;
            return QSctpSocket::size();
        } else if (qsctpsocket_size_callback != nullptr) {
            long long callback_ret = qsctpsocket_size_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QSctpSocket::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qsctpsocket_seek_isbase) {
            qsctpsocket_seek_isbase = false;
            return QSctpSocket::seek(pos);
        } else if (qsctpsocket_seek_callback != nullptr) {
            long long cbval1 = static_cast<long long>(pos);

            bool callback_ret = qsctpsocket_seek_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSctpSocket::seek(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qsctpsocket_atend_isbase) {
            qsctpsocket_atend_isbase = false;
            return QSctpSocket::atEnd();
        } else if (qsctpsocket_atend_callback != nullptr) {
            bool callback_ret = qsctpsocket_atend_callback();
            return callback_ret;
        } else {
            return QSctpSocket::atEnd();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qsctpsocket_reset_isbase) {
            qsctpsocket_reset_isbase = false;
            return QSctpSocket::reset();
        } else if (qsctpsocket_reset_callback != nullptr) {
            bool callback_ret = qsctpsocket_reset_callback();
            return callback_ret;
        } else {
            return QSctpSocket::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qsctpsocket_canreadline_isbase) {
            qsctpsocket_canreadline_isbase = false;
            return QSctpSocket::canReadLine();
        } else if (qsctpsocket_canreadline_callback != nullptr) {
            bool callback_ret = qsctpsocket_canreadline_callback();
            return callback_ret;
        } else {
            return QSctpSocket::canReadLine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsctpsocket_event_isbase) {
            qsctpsocket_event_isbase = false;
            return QSctpSocket::event(event);
        } else if (qsctpsocket_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qsctpsocket_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSctpSocket::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsctpsocket_eventfilter_isbase) {
            qsctpsocket_eventfilter_isbase = false;
            return QSctpSocket::eventFilter(watched, event);
        } else if (qsctpsocket_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qsctpsocket_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSctpSocket::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsctpsocket_timerevent_isbase) {
            qsctpsocket_timerevent_isbase = false;
            QSctpSocket::timerEvent(event);
        } else if (qsctpsocket_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qsctpsocket_timerevent_callback(this, cbval1);
        } else {
            QSctpSocket::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsctpsocket_childevent_isbase) {
            qsctpsocket_childevent_isbase = false;
            QSctpSocket::childEvent(event);
        } else if (qsctpsocket_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qsctpsocket_childevent_callback(this, cbval1);
        } else {
            QSctpSocket::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsctpsocket_customevent_isbase) {
            qsctpsocket_customevent_isbase = false;
            QSctpSocket::customEvent(event);
        } else if (qsctpsocket_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qsctpsocket_customevent_callback(this, cbval1);
        } else {
            QSctpSocket::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsctpsocket_connectnotify_isbase) {
            qsctpsocket_connectnotify_isbase = false;
            QSctpSocket::connectNotify(signal);
        } else if (qsctpsocket_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsctpsocket_connectnotify_callback(this, cbval1);
        } else {
            QSctpSocket::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsctpsocket_disconnectnotify_isbase) {
            qsctpsocket_disconnectnotify_isbase = false;
            QSctpSocket::disconnectNotify(signal);
        } else if (qsctpsocket_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsctpsocket_disconnectnotify_callback(this, cbval1);
        } else {
            QSctpSocket::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSocketState(QAbstractSocket::SocketState state) {
        if (qsctpsocket_setsocketstate_isbase) {
            qsctpsocket_setsocketstate_isbase = false;
            QSctpSocket::setSocketState(state);
        } else if (qsctpsocket_setsocketstate_callback != nullptr) {
            int cbval1 = static_cast<int>(state);

            qsctpsocket_setsocketstate_callback(this, cbval1);
        } else {
            QSctpSocket::setSocketState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSocketError(QAbstractSocket::SocketError socketError) {
        if (qsctpsocket_setsocketerror_isbase) {
            qsctpsocket_setsocketerror_isbase = false;
            QSctpSocket::setSocketError(socketError);
        } else if (qsctpsocket_setsocketerror_callback != nullptr) {
            int cbval1 = static_cast<int>(socketError);

            qsctpsocket_setsocketerror_callback(this, cbval1);
        } else {
            QSctpSocket::setSocketError(socketError);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLocalPort(quint16 port) {
        if (qsctpsocket_setlocalport_isbase) {
            qsctpsocket_setlocalport_isbase = false;
            QSctpSocket::setLocalPort(port);
        } else if (qsctpsocket_setlocalport_callback != nullptr) {
            uint16_t cbval1 = static_cast<uint16_t>(port);

            qsctpsocket_setlocalport_callback(this, cbval1);
        } else {
            QSctpSocket::setLocalPort(port);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLocalAddress(const QHostAddress& address) {
        if (qsctpsocket_setlocaladdress_isbase) {
            qsctpsocket_setlocaladdress_isbase = false;
            QSctpSocket::setLocalAddress(address);
        } else if (qsctpsocket_setlocaladdress_callback != nullptr) {
            const QHostAddress& address_ret = address;
            // Cast returned reference into pointer
            QHostAddress* cbval1 = const_cast<QHostAddress*>(&address_ret);

            qsctpsocket_setlocaladdress_callback(this, cbval1);
        } else {
            QSctpSocket::setLocalAddress(address);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPeerPort(quint16 port) {
        if (qsctpsocket_setpeerport_isbase) {
            qsctpsocket_setpeerport_isbase = false;
            QSctpSocket::setPeerPort(port);
        } else if (qsctpsocket_setpeerport_callback != nullptr) {
            uint16_t cbval1 = static_cast<uint16_t>(port);

            qsctpsocket_setpeerport_callback(this, cbval1);
        } else {
            QSctpSocket::setPeerPort(port);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPeerAddress(const QHostAddress& address) {
        if (qsctpsocket_setpeeraddress_isbase) {
            qsctpsocket_setpeeraddress_isbase = false;
            QSctpSocket::setPeerAddress(address);
        } else if (qsctpsocket_setpeeraddress_callback != nullptr) {
            const QHostAddress& address_ret = address;
            // Cast returned reference into pointer
            QHostAddress* cbval1 = const_cast<QHostAddress*>(&address_ret);

            qsctpsocket_setpeeraddress_callback(this, cbval1);
        } else {
            QSctpSocket::setPeerAddress(address);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPeerName(const QString& name) {
        if (qsctpsocket_setpeername_isbase) {
            qsctpsocket_setpeername_isbase = false;
            QSctpSocket::setPeerName(name);
        } else if (qsctpsocket_setpeername_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc((name_str.len + 1) * sizeof(char)));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval1 = name_str;

            qsctpsocket_setpeername_callback(this, cbval1);
        } else {
            QSctpSocket::setPeerName(name);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (qsctpsocket_setopenmode_isbase) {
            qsctpsocket_setopenmode_isbase = false;
            QSctpSocket::setOpenMode(openMode);
        } else if (qsctpsocket_setopenmode_callback != nullptr) {
            int cbval1 = static_cast<int>(openMode);

            qsctpsocket_setopenmode_callback(this, cbval1);
        } else {
            QSctpSocket::setOpenMode(openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (qsctpsocket_seterrorstring_isbase) {
            qsctpsocket_seterrorstring_isbase = false;
            QSctpSocket::setErrorString(errorString);
        } else if (qsctpsocket_seterrorstring_callback != nullptr) {
            const QString errorString_ret = errorString;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorString_b = errorString_ret.toUtf8();
            libqt_string errorString_str;
            errorString_str.len = errorString_b.length();
            errorString_str.data = static_cast<const char*>(malloc((errorString_str.len + 1) * sizeof(char)));
            memcpy((void*)errorString_str.data, errorString_b.data(), errorString_str.len);
            ((char*)errorString_str.data)[errorString_str.len] = '\0';
            libqt_string cbval1 = errorString_str;

            qsctpsocket_seterrorstring_callback(this, cbval1);
        } else {
            QSctpSocket::setErrorString(errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsctpsocket_sender_isbase) {
            qsctpsocket_sender_isbase = false;
            return QSctpSocket::sender();
        } else if (qsctpsocket_sender_callback != nullptr) {
            QObject* callback_ret = qsctpsocket_sender_callback();
            return callback_ret;
        } else {
            return QSctpSocket::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsctpsocket_sendersignalindex_isbase) {
            qsctpsocket_sendersignalindex_isbase = false;
            return QSctpSocket::senderSignalIndex();
        } else if (qsctpsocket_sendersignalindex_callback != nullptr) {
            int callback_ret = qsctpsocket_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSctpSocket::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsctpsocket_receivers_isbase) {
            qsctpsocket_receivers_isbase = false;
            return QSctpSocket::receivers(signal);
        } else if (qsctpsocket_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qsctpsocket_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSctpSocket::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsctpsocket_issignalconnected_isbase) {
            qsctpsocket_issignalconnected_isbase = false;
            return QSctpSocket::isSignalConnected(signal);
        } else if (qsctpsocket_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qsctpsocket_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSctpSocket::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend long long QSctpSocket_ReadData(QSctpSocket* self, char* data, long long maxlen);
    friend long long QSctpSocket_QBaseReadData(QSctpSocket* self, char* data, long long maxlen);
    friend long long QSctpSocket_ReadLineData(QSctpSocket* self, char* data, long long maxlen);
    friend long long QSctpSocket_QBaseReadLineData(QSctpSocket* self, char* data, long long maxlen);
    friend long long QSctpSocket_SkipData(QSctpSocket* self, long long maxSize);
    friend long long QSctpSocket_QBaseSkipData(QSctpSocket* self, long long maxSize);
    friend long long QSctpSocket_WriteData(QSctpSocket* self, const char* data, long long lenVal);
    friend long long QSctpSocket_QBaseWriteData(QSctpSocket* self, const char* data, long long lenVal);
    friend void QSctpSocket_TimerEvent(QSctpSocket* self, QTimerEvent* event);
    friend void QSctpSocket_QBaseTimerEvent(QSctpSocket* self, QTimerEvent* event);
    friend void QSctpSocket_ChildEvent(QSctpSocket* self, QChildEvent* event);
    friend void QSctpSocket_QBaseChildEvent(QSctpSocket* self, QChildEvent* event);
    friend void QSctpSocket_CustomEvent(QSctpSocket* self, QEvent* event);
    friend void QSctpSocket_QBaseCustomEvent(QSctpSocket* self, QEvent* event);
    friend void QSctpSocket_ConnectNotify(QSctpSocket* self, const QMetaMethod* signal);
    friend void QSctpSocket_QBaseConnectNotify(QSctpSocket* self, const QMetaMethod* signal);
    friend void QSctpSocket_DisconnectNotify(QSctpSocket* self, const QMetaMethod* signal);
    friend void QSctpSocket_QBaseDisconnectNotify(QSctpSocket* self, const QMetaMethod* signal);
    friend void QSctpSocket_SetSocketState(QSctpSocket* self, int state);
    friend void QSctpSocket_QBaseSetSocketState(QSctpSocket* self, int state);
    friend void QSctpSocket_SetSocketError(QSctpSocket* self, int socketError);
    friend void QSctpSocket_QBaseSetSocketError(QSctpSocket* self, int socketError);
    friend void QSctpSocket_SetLocalPort(QSctpSocket* self, uint16_t port);
    friend void QSctpSocket_QBaseSetLocalPort(QSctpSocket* self, uint16_t port);
    friend void QSctpSocket_SetLocalAddress(QSctpSocket* self, const QHostAddress* address);
    friend void QSctpSocket_QBaseSetLocalAddress(QSctpSocket* self, const QHostAddress* address);
    friend void QSctpSocket_SetPeerPort(QSctpSocket* self, uint16_t port);
    friend void QSctpSocket_QBaseSetPeerPort(QSctpSocket* self, uint16_t port);
    friend void QSctpSocket_SetPeerAddress(QSctpSocket* self, const QHostAddress* address);
    friend void QSctpSocket_QBaseSetPeerAddress(QSctpSocket* self, const QHostAddress* address);
    friend void QSctpSocket_SetPeerName(QSctpSocket* self, const libqt_string name);
    friend void QSctpSocket_QBaseSetPeerName(QSctpSocket* self, const libqt_string name);
    friend void QSctpSocket_SetOpenMode(QSctpSocket* self, int openMode);
    friend void QSctpSocket_QBaseSetOpenMode(QSctpSocket* self, int openMode);
    friend void QSctpSocket_SetErrorString(QSctpSocket* self, const libqt_string errorString);
    friend void QSctpSocket_QBaseSetErrorString(QSctpSocket* self, const libqt_string errorString);
    friend QObject* QSctpSocket_Sender(const QSctpSocket* self);
    friend QObject* QSctpSocket_QBaseSender(const QSctpSocket* self);
    friend int QSctpSocket_SenderSignalIndex(const QSctpSocket* self);
    friend int QSctpSocket_QBaseSenderSignalIndex(const QSctpSocket* self);
    friend int QSctpSocket_Receivers(const QSctpSocket* self, const char* signal);
    friend int QSctpSocket_QBaseReceivers(const QSctpSocket* self, const char* signal);
    friend bool QSctpSocket_IsSignalConnected(const QSctpSocket* self, const QMetaMethod* signal);
    friend bool QSctpSocket_QBaseIsSignalConnected(const QSctpSocket* self, const QMetaMethod* signal);
};

#endif
