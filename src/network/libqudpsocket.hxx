#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQUDPSOCKET_H
#define SRC_NETWORKC_LIBVIRTUALQUDPSOCKET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QUdpSocket so that we can call protected methods
class VirtualQUdpSocket final : public QUdpSocket {

  public:
    // Virtual class boolean flag
    bool isVirtualQUdpSocket = true;

    // Virtual class public types (including callbacks)
    using QUdpSocket_Metacall_Callback = int (*)(QUdpSocket*, int, int, void**);
    using QUdpSocket_Resume_Callback = void (*)();
    using QUdpSocket_Bind_Callback = bool (*)(QUdpSocket*, QHostAddress*, uint16_t, int);
    using QUdpSocket_ConnectToHost_Callback = void (*)(QUdpSocket*, libqt_string, uint16_t, int, int);
    using QUdpSocket_DisconnectFromHost_Callback = void (*)();
    using QUdpSocket_BytesAvailable_Callback = long long (*)();
    using QUdpSocket_BytesToWrite_Callback = long long (*)();
    using QUdpSocket_SetReadBufferSize_Callback = void (*)(QUdpSocket*, long long);
    using QUdpSocket_SocketDescriptor_Callback = intptr_t (*)();
    using QUdpSocket_SetSocketDescriptor_Callback = bool (*)(QUdpSocket*, intptr_t, int, int);
    using QUdpSocket_SetSocketOption_Callback = void (*)(QUdpSocket*, int, QVariant*);
    using QUdpSocket_SocketOption_Callback = QVariant* (*)(QUdpSocket*, int);
    using QUdpSocket_Close_Callback = void (*)();
    using QUdpSocket_IsSequential_Callback = bool (*)();
    using QUdpSocket_WaitForConnected_Callback = bool (*)(QUdpSocket*, int);
    using QUdpSocket_WaitForReadyRead_Callback = bool (*)(QUdpSocket*, int);
    using QUdpSocket_WaitForBytesWritten_Callback = bool (*)(QUdpSocket*, int);
    using QUdpSocket_WaitForDisconnected_Callback = bool (*)(QUdpSocket*, int);
    using QUdpSocket_ReadData_Callback = long long (*)(QUdpSocket*, char*, long long);
    using QUdpSocket_ReadLineData_Callback = long long (*)(QUdpSocket*, char*, long long);
    using QUdpSocket_SkipData_Callback = long long (*)(QUdpSocket*, long long);
    using QUdpSocket_WriteData_Callback = long long (*)(QUdpSocket*, const char*, long long);
    using QUdpSocket_Open_Callback = bool (*)(QUdpSocket*, int);
    using QUdpSocket_Pos_Callback = long long (*)();
    using QUdpSocket_Size_Callback = long long (*)();
    using QUdpSocket_Seek_Callback = bool (*)(QUdpSocket*, long long);
    using QUdpSocket_AtEnd_Callback = bool (*)();
    using QUdpSocket_Reset_Callback = bool (*)();
    using QUdpSocket_CanReadLine_Callback = bool (*)();
    using QUdpSocket_Event_Callback = bool (*)(QUdpSocket*, QEvent*);
    using QUdpSocket_EventFilter_Callback = bool (*)(QUdpSocket*, QObject*, QEvent*);
    using QUdpSocket_TimerEvent_Callback = void (*)(QUdpSocket*, QTimerEvent*);
    using QUdpSocket_ChildEvent_Callback = void (*)(QUdpSocket*, QChildEvent*);
    using QUdpSocket_CustomEvent_Callback = void (*)(QUdpSocket*, QEvent*);
    using QUdpSocket_ConnectNotify_Callback = void (*)(QUdpSocket*, QMetaMethod*);
    using QUdpSocket_DisconnectNotify_Callback = void (*)(QUdpSocket*, QMetaMethod*);
    using QUdpSocket_SetSocketState_Callback = void (*)(QUdpSocket*, int);
    using QUdpSocket_SetSocketError_Callback = void (*)(QUdpSocket*, int);
    using QUdpSocket_SetLocalPort_Callback = void (*)(QUdpSocket*, uint16_t);
    using QUdpSocket_SetLocalAddress_Callback = void (*)(QUdpSocket*, QHostAddress*);
    using QUdpSocket_SetPeerPort_Callback = void (*)(QUdpSocket*, uint16_t);
    using QUdpSocket_SetPeerAddress_Callback = void (*)(QUdpSocket*, QHostAddress*);
    using QUdpSocket_SetPeerName_Callback = void (*)(QUdpSocket*, libqt_string);
    using QUdpSocket_SetOpenMode_Callback = void (*)(QUdpSocket*, int);
    using QUdpSocket_SetErrorString_Callback = void (*)(QUdpSocket*, libqt_string);
    using QUdpSocket_Sender_Callback = QObject* (*)();
    using QUdpSocket_SenderSignalIndex_Callback = int (*)();
    using QUdpSocket_Receivers_Callback = int (*)(const QUdpSocket*, const char*);
    using QUdpSocket_IsSignalConnected_Callback = bool (*)(const QUdpSocket*, QMetaMethod*);

  protected:
    // Instance callback storage
    QUdpSocket_Metacall_Callback qudpsocket_metacall_callback = nullptr;
    QUdpSocket_Resume_Callback qudpsocket_resume_callback = nullptr;
    QUdpSocket_Bind_Callback qudpsocket_bind_callback = nullptr;
    QUdpSocket_ConnectToHost_Callback qudpsocket_connecttohost_callback = nullptr;
    QUdpSocket_DisconnectFromHost_Callback qudpsocket_disconnectfromhost_callback = nullptr;
    QUdpSocket_BytesAvailable_Callback qudpsocket_bytesavailable_callback = nullptr;
    QUdpSocket_BytesToWrite_Callback qudpsocket_bytestowrite_callback = nullptr;
    QUdpSocket_SetReadBufferSize_Callback qudpsocket_setreadbuffersize_callback = nullptr;
    QUdpSocket_SocketDescriptor_Callback qudpsocket_socketdescriptor_callback = nullptr;
    QUdpSocket_SetSocketDescriptor_Callback qudpsocket_setsocketdescriptor_callback = nullptr;
    QUdpSocket_SetSocketOption_Callback qudpsocket_setsocketoption_callback = nullptr;
    QUdpSocket_SocketOption_Callback qudpsocket_socketoption_callback = nullptr;
    QUdpSocket_Close_Callback qudpsocket_close_callback = nullptr;
    QUdpSocket_IsSequential_Callback qudpsocket_issequential_callback = nullptr;
    QUdpSocket_WaitForConnected_Callback qudpsocket_waitforconnected_callback = nullptr;
    QUdpSocket_WaitForReadyRead_Callback qudpsocket_waitforreadyread_callback = nullptr;
    QUdpSocket_WaitForBytesWritten_Callback qudpsocket_waitforbyteswritten_callback = nullptr;
    QUdpSocket_WaitForDisconnected_Callback qudpsocket_waitfordisconnected_callback = nullptr;
    QUdpSocket_ReadData_Callback qudpsocket_readdata_callback = nullptr;
    QUdpSocket_ReadLineData_Callback qudpsocket_readlinedata_callback = nullptr;
    QUdpSocket_SkipData_Callback qudpsocket_skipdata_callback = nullptr;
    QUdpSocket_WriteData_Callback qudpsocket_writedata_callback = nullptr;
    QUdpSocket_Open_Callback qudpsocket_open_callback = nullptr;
    QUdpSocket_Pos_Callback qudpsocket_pos_callback = nullptr;
    QUdpSocket_Size_Callback qudpsocket_size_callback = nullptr;
    QUdpSocket_Seek_Callback qudpsocket_seek_callback = nullptr;
    QUdpSocket_AtEnd_Callback qudpsocket_atend_callback = nullptr;
    QUdpSocket_Reset_Callback qudpsocket_reset_callback = nullptr;
    QUdpSocket_CanReadLine_Callback qudpsocket_canreadline_callback = nullptr;
    QUdpSocket_Event_Callback qudpsocket_event_callback = nullptr;
    QUdpSocket_EventFilter_Callback qudpsocket_eventfilter_callback = nullptr;
    QUdpSocket_TimerEvent_Callback qudpsocket_timerevent_callback = nullptr;
    QUdpSocket_ChildEvent_Callback qudpsocket_childevent_callback = nullptr;
    QUdpSocket_CustomEvent_Callback qudpsocket_customevent_callback = nullptr;
    QUdpSocket_ConnectNotify_Callback qudpsocket_connectnotify_callback = nullptr;
    QUdpSocket_DisconnectNotify_Callback qudpsocket_disconnectnotify_callback = nullptr;
    QUdpSocket_SetSocketState_Callback qudpsocket_setsocketstate_callback = nullptr;
    QUdpSocket_SetSocketError_Callback qudpsocket_setsocketerror_callback = nullptr;
    QUdpSocket_SetLocalPort_Callback qudpsocket_setlocalport_callback = nullptr;
    QUdpSocket_SetLocalAddress_Callback qudpsocket_setlocaladdress_callback = nullptr;
    QUdpSocket_SetPeerPort_Callback qudpsocket_setpeerport_callback = nullptr;
    QUdpSocket_SetPeerAddress_Callback qudpsocket_setpeeraddress_callback = nullptr;
    QUdpSocket_SetPeerName_Callback qudpsocket_setpeername_callback = nullptr;
    QUdpSocket_SetOpenMode_Callback qudpsocket_setopenmode_callback = nullptr;
    QUdpSocket_SetErrorString_Callback qudpsocket_seterrorstring_callback = nullptr;
    QUdpSocket_Sender_Callback qudpsocket_sender_callback = nullptr;
    QUdpSocket_SenderSignalIndex_Callback qudpsocket_sendersignalindex_callback = nullptr;
    QUdpSocket_Receivers_Callback qudpsocket_receivers_callback = nullptr;
    QUdpSocket_IsSignalConnected_Callback qudpsocket_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qudpsocket_metacall_isbase = false;
    mutable bool qudpsocket_resume_isbase = false;
    mutable bool qudpsocket_bind_isbase = false;
    mutable bool qudpsocket_connecttohost_isbase = false;
    mutable bool qudpsocket_disconnectfromhost_isbase = false;
    mutable bool qudpsocket_bytesavailable_isbase = false;
    mutable bool qudpsocket_bytestowrite_isbase = false;
    mutable bool qudpsocket_setreadbuffersize_isbase = false;
    mutable bool qudpsocket_socketdescriptor_isbase = false;
    mutable bool qudpsocket_setsocketdescriptor_isbase = false;
    mutable bool qudpsocket_setsocketoption_isbase = false;
    mutable bool qudpsocket_socketoption_isbase = false;
    mutable bool qudpsocket_close_isbase = false;
    mutable bool qudpsocket_issequential_isbase = false;
    mutable bool qudpsocket_waitforconnected_isbase = false;
    mutable bool qudpsocket_waitforreadyread_isbase = false;
    mutable bool qudpsocket_waitforbyteswritten_isbase = false;
    mutable bool qudpsocket_waitfordisconnected_isbase = false;
    mutable bool qudpsocket_readdata_isbase = false;
    mutable bool qudpsocket_readlinedata_isbase = false;
    mutable bool qudpsocket_skipdata_isbase = false;
    mutable bool qudpsocket_writedata_isbase = false;
    mutable bool qudpsocket_open_isbase = false;
    mutable bool qudpsocket_pos_isbase = false;
    mutable bool qudpsocket_size_isbase = false;
    mutable bool qudpsocket_seek_isbase = false;
    mutable bool qudpsocket_atend_isbase = false;
    mutable bool qudpsocket_reset_isbase = false;
    mutable bool qudpsocket_canreadline_isbase = false;
    mutable bool qudpsocket_event_isbase = false;
    mutable bool qudpsocket_eventfilter_isbase = false;
    mutable bool qudpsocket_timerevent_isbase = false;
    mutable bool qudpsocket_childevent_isbase = false;
    mutable bool qudpsocket_customevent_isbase = false;
    mutable bool qudpsocket_connectnotify_isbase = false;
    mutable bool qudpsocket_disconnectnotify_isbase = false;
    mutable bool qudpsocket_setsocketstate_isbase = false;
    mutable bool qudpsocket_setsocketerror_isbase = false;
    mutable bool qudpsocket_setlocalport_isbase = false;
    mutable bool qudpsocket_setlocaladdress_isbase = false;
    mutable bool qudpsocket_setpeerport_isbase = false;
    mutable bool qudpsocket_setpeeraddress_isbase = false;
    mutable bool qudpsocket_setpeername_isbase = false;
    mutable bool qudpsocket_setopenmode_isbase = false;
    mutable bool qudpsocket_seterrorstring_isbase = false;
    mutable bool qudpsocket_sender_isbase = false;
    mutable bool qudpsocket_sendersignalindex_isbase = false;
    mutable bool qudpsocket_receivers_isbase = false;
    mutable bool qudpsocket_issignalconnected_isbase = false;

  public:
    VirtualQUdpSocket() : QUdpSocket() {};
    VirtualQUdpSocket(QObject* parent) : QUdpSocket(parent) {};

    ~VirtualQUdpSocket() {
        qudpsocket_metacall_callback = nullptr;
        qudpsocket_resume_callback = nullptr;
        qudpsocket_bind_callback = nullptr;
        qudpsocket_connecttohost_callback = nullptr;
        qudpsocket_disconnectfromhost_callback = nullptr;
        qudpsocket_bytesavailable_callback = nullptr;
        qudpsocket_bytestowrite_callback = nullptr;
        qudpsocket_setreadbuffersize_callback = nullptr;
        qudpsocket_socketdescriptor_callback = nullptr;
        qudpsocket_setsocketdescriptor_callback = nullptr;
        qudpsocket_setsocketoption_callback = nullptr;
        qudpsocket_socketoption_callback = nullptr;
        qudpsocket_close_callback = nullptr;
        qudpsocket_issequential_callback = nullptr;
        qudpsocket_waitforconnected_callback = nullptr;
        qudpsocket_waitforreadyread_callback = nullptr;
        qudpsocket_waitforbyteswritten_callback = nullptr;
        qudpsocket_waitfordisconnected_callback = nullptr;
        qudpsocket_readdata_callback = nullptr;
        qudpsocket_readlinedata_callback = nullptr;
        qudpsocket_skipdata_callback = nullptr;
        qudpsocket_writedata_callback = nullptr;
        qudpsocket_open_callback = nullptr;
        qudpsocket_pos_callback = nullptr;
        qudpsocket_size_callback = nullptr;
        qudpsocket_seek_callback = nullptr;
        qudpsocket_atend_callback = nullptr;
        qudpsocket_reset_callback = nullptr;
        qudpsocket_canreadline_callback = nullptr;
        qudpsocket_event_callback = nullptr;
        qudpsocket_eventfilter_callback = nullptr;
        qudpsocket_timerevent_callback = nullptr;
        qudpsocket_childevent_callback = nullptr;
        qudpsocket_customevent_callback = nullptr;
        qudpsocket_connectnotify_callback = nullptr;
        qudpsocket_disconnectnotify_callback = nullptr;
        qudpsocket_setsocketstate_callback = nullptr;
        qudpsocket_setsocketerror_callback = nullptr;
        qudpsocket_setlocalport_callback = nullptr;
        qudpsocket_setlocaladdress_callback = nullptr;
        qudpsocket_setpeerport_callback = nullptr;
        qudpsocket_setpeeraddress_callback = nullptr;
        qudpsocket_setpeername_callback = nullptr;
        qudpsocket_setopenmode_callback = nullptr;
        qudpsocket_seterrorstring_callback = nullptr;
        qudpsocket_sender_callback = nullptr;
        qudpsocket_sendersignalindex_callback = nullptr;
        qudpsocket_receivers_callback = nullptr;
        qudpsocket_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQUdpSocket_Metacall_Callback(QUdpSocket_Metacall_Callback cb) { qudpsocket_metacall_callback = cb; }
    inline void setQUdpSocket_Resume_Callback(QUdpSocket_Resume_Callback cb) { qudpsocket_resume_callback = cb; }
    inline void setQUdpSocket_Bind_Callback(QUdpSocket_Bind_Callback cb) { qudpsocket_bind_callback = cb; }
    inline void setQUdpSocket_ConnectToHost_Callback(QUdpSocket_ConnectToHost_Callback cb) { qudpsocket_connecttohost_callback = cb; }
    inline void setQUdpSocket_DisconnectFromHost_Callback(QUdpSocket_DisconnectFromHost_Callback cb) { qudpsocket_disconnectfromhost_callback = cb; }
    inline void setQUdpSocket_BytesAvailable_Callback(QUdpSocket_BytesAvailable_Callback cb) { qudpsocket_bytesavailable_callback = cb; }
    inline void setQUdpSocket_BytesToWrite_Callback(QUdpSocket_BytesToWrite_Callback cb) { qudpsocket_bytestowrite_callback = cb; }
    inline void setQUdpSocket_SetReadBufferSize_Callback(QUdpSocket_SetReadBufferSize_Callback cb) { qudpsocket_setreadbuffersize_callback = cb; }
    inline void setQUdpSocket_SocketDescriptor_Callback(QUdpSocket_SocketDescriptor_Callback cb) { qudpsocket_socketdescriptor_callback = cb; }
    inline void setQUdpSocket_SetSocketDescriptor_Callback(QUdpSocket_SetSocketDescriptor_Callback cb) { qudpsocket_setsocketdescriptor_callback = cb; }
    inline void setQUdpSocket_SetSocketOption_Callback(QUdpSocket_SetSocketOption_Callback cb) { qudpsocket_setsocketoption_callback = cb; }
    inline void setQUdpSocket_SocketOption_Callback(QUdpSocket_SocketOption_Callback cb) { qudpsocket_socketoption_callback = cb; }
    inline void setQUdpSocket_Close_Callback(QUdpSocket_Close_Callback cb) { qudpsocket_close_callback = cb; }
    inline void setQUdpSocket_IsSequential_Callback(QUdpSocket_IsSequential_Callback cb) { qudpsocket_issequential_callback = cb; }
    inline void setQUdpSocket_WaitForConnected_Callback(QUdpSocket_WaitForConnected_Callback cb) { qudpsocket_waitforconnected_callback = cb; }
    inline void setQUdpSocket_WaitForReadyRead_Callback(QUdpSocket_WaitForReadyRead_Callback cb) { qudpsocket_waitforreadyread_callback = cb; }
    inline void setQUdpSocket_WaitForBytesWritten_Callback(QUdpSocket_WaitForBytesWritten_Callback cb) { qudpsocket_waitforbyteswritten_callback = cb; }
    inline void setQUdpSocket_WaitForDisconnected_Callback(QUdpSocket_WaitForDisconnected_Callback cb) { qudpsocket_waitfordisconnected_callback = cb; }
    inline void setQUdpSocket_ReadData_Callback(QUdpSocket_ReadData_Callback cb) { qudpsocket_readdata_callback = cb; }
    inline void setQUdpSocket_ReadLineData_Callback(QUdpSocket_ReadLineData_Callback cb) { qudpsocket_readlinedata_callback = cb; }
    inline void setQUdpSocket_SkipData_Callback(QUdpSocket_SkipData_Callback cb) { qudpsocket_skipdata_callback = cb; }
    inline void setQUdpSocket_WriteData_Callback(QUdpSocket_WriteData_Callback cb) { qudpsocket_writedata_callback = cb; }
    inline void setQUdpSocket_Open_Callback(QUdpSocket_Open_Callback cb) { qudpsocket_open_callback = cb; }
    inline void setQUdpSocket_Pos_Callback(QUdpSocket_Pos_Callback cb) { qudpsocket_pos_callback = cb; }
    inline void setQUdpSocket_Size_Callback(QUdpSocket_Size_Callback cb) { qudpsocket_size_callback = cb; }
    inline void setQUdpSocket_Seek_Callback(QUdpSocket_Seek_Callback cb) { qudpsocket_seek_callback = cb; }
    inline void setQUdpSocket_AtEnd_Callback(QUdpSocket_AtEnd_Callback cb) { qudpsocket_atend_callback = cb; }
    inline void setQUdpSocket_Reset_Callback(QUdpSocket_Reset_Callback cb) { qudpsocket_reset_callback = cb; }
    inline void setQUdpSocket_CanReadLine_Callback(QUdpSocket_CanReadLine_Callback cb) { qudpsocket_canreadline_callback = cb; }
    inline void setQUdpSocket_Event_Callback(QUdpSocket_Event_Callback cb) { qudpsocket_event_callback = cb; }
    inline void setQUdpSocket_EventFilter_Callback(QUdpSocket_EventFilter_Callback cb) { qudpsocket_eventfilter_callback = cb; }
    inline void setQUdpSocket_TimerEvent_Callback(QUdpSocket_TimerEvent_Callback cb) { qudpsocket_timerevent_callback = cb; }
    inline void setQUdpSocket_ChildEvent_Callback(QUdpSocket_ChildEvent_Callback cb) { qudpsocket_childevent_callback = cb; }
    inline void setQUdpSocket_CustomEvent_Callback(QUdpSocket_CustomEvent_Callback cb) { qudpsocket_customevent_callback = cb; }
    inline void setQUdpSocket_ConnectNotify_Callback(QUdpSocket_ConnectNotify_Callback cb) { qudpsocket_connectnotify_callback = cb; }
    inline void setQUdpSocket_DisconnectNotify_Callback(QUdpSocket_DisconnectNotify_Callback cb) { qudpsocket_disconnectnotify_callback = cb; }
    inline void setQUdpSocket_SetSocketState_Callback(QUdpSocket_SetSocketState_Callback cb) { qudpsocket_setsocketstate_callback = cb; }
    inline void setQUdpSocket_SetSocketError_Callback(QUdpSocket_SetSocketError_Callback cb) { qudpsocket_setsocketerror_callback = cb; }
    inline void setQUdpSocket_SetLocalPort_Callback(QUdpSocket_SetLocalPort_Callback cb) { qudpsocket_setlocalport_callback = cb; }
    inline void setQUdpSocket_SetLocalAddress_Callback(QUdpSocket_SetLocalAddress_Callback cb) { qudpsocket_setlocaladdress_callback = cb; }
    inline void setQUdpSocket_SetPeerPort_Callback(QUdpSocket_SetPeerPort_Callback cb) { qudpsocket_setpeerport_callback = cb; }
    inline void setQUdpSocket_SetPeerAddress_Callback(QUdpSocket_SetPeerAddress_Callback cb) { qudpsocket_setpeeraddress_callback = cb; }
    inline void setQUdpSocket_SetPeerName_Callback(QUdpSocket_SetPeerName_Callback cb) { qudpsocket_setpeername_callback = cb; }
    inline void setQUdpSocket_SetOpenMode_Callback(QUdpSocket_SetOpenMode_Callback cb) { qudpsocket_setopenmode_callback = cb; }
    inline void setQUdpSocket_SetErrorString_Callback(QUdpSocket_SetErrorString_Callback cb) { qudpsocket_seterrorstring_callback = cb; }
    inline void setQUdpSocket_Sender_Callback(QUdpSocket_Sender_Callback cb) { qudpsocket_sender_callback = cb; }
    inline void setQUdpSocket_SenderSignalIndex_Callback(QUdpSocket_SenderSignalIndex_Callback cb) { qudpsocket_sendersignalindex_callback = cb; }
    inline void setQUdpSocket_Receivers_Callback(QUdpSocket_Receivers_Callback cb) { qudpsocket_receivers_callback = cb; }
    inline void setQUdpSocket_IsSignalConnected_Callback(QUdpSocket_IsSignalConnected_Callback cb) { qudpsocket_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQUdpSocket_Metacall_IsBase(bool value) const { qudpsocket_metacall_isbase = value; }
    inline void setQUdpSocket_Resume_IsBase(bool value) const { qudpsocket_resume_isbase = value; }
    inline void setQUdpSocket_Bind_IsBase(bool value) const { qudpsocket_bind_isbase = value; }
    inline void setQUdpSocket_ConnectToHost_IsBase(bool value) const { qudpsocket_connecttohost_isbase = value; }
    inline void setQUdpSocket_DisconnectFromHost_IsBase(bool value) const { qudpsocket_disconnectfromhost_isbase = value; }
    inline void setQUdpSocket_BytesAvailable_IsBase(bool value) const { qudpsocket_bytesavailable_isbase = value; }
    inline void setQUdpSocket_BytesToWrite_IsBase(bool value) const { qudpsocket_bytestowrite_isbase = value; }
    inline void setQUdpSocket_SetReadBufferSize_IsBase(bool value) const { qudpsocket_setreadbuffersize_isbase = value; }
    inline void setQUdpSocket_SocketDescriptor_IsBase(bool value) const { qudpsocket_socketdescriptor_isbase = value; }
    inline void setQUdpSocket_SetSocketDescriptor_IsBase(bool value) const { qudpsocket_setsocketdescriptor_isbase = value; }
    inline void setQUdpSocket_SetSocketOption_IsBase(bool value) const { qudpsocket_setsocketoption_isbase = value; }
    inline void setQUdpSocket_SocketOption_IsBase(bool value) const { qudpsocket_socketoption_isbase = value; }
    inline void setQUdpSocket_Close_IsBase(bool value) const { qudpsocket_close_isbase = value; }
    inline void setQUdpSocket_IsSequential_IsBase(bool value) const { qudpsocket_issequential_isbase = value; }
    inline void setQUdpSocket_WaitForConnected_IsBase(bool value) const { qudpsocket_waitforconnected_isbase = value; }
    inline void setQUdpSocket_WaitForReadyRead_IsBase(bool value) const { qudpsocket_waitforreadyread_isbase = value; }
    inline void setQUdpSocket_WaitForBytesWritten_IsBase(bool value) const { qudpsocket_waitforbyteswritten_isbase = value; }
    inline void setQUdpSocket_WaitForDisconnected_IsBase(bool value) const { qudpsocket_waitfordisconnected_isbase = value; }
    inline void setQUdpSocket_ReadData_IsBase(bool value) const { qudpsocket_readdata_isbase = value; }
    inline void setQUdpSocket_ReadLineData_IsBase(bool value) const { qudpsocket_readlinedata_isbase = value; }
    inline void setQUdpSocket_SkipData_IsBase(bool value) const { qudpsocket_skipdata_isbase = value; }
    inline void setQUdpSocket_WriteData_IsBase(bool value) const { qudpsocket_writedata_isbase = value; }
    inline void setQUdpSocket_Open_IsBase(bool value) const { qudpsocket_open_isbase = value; }
    inline void setQUdpSocket_Pos_IsBase(bool value) const { qudpsocket_pos_isbase = value; }
    inline void setQUdpSocket_Size_IsBase(bool value) const { qudpsocket_size_isbase = value; }
    inline void setQUdpSocket_Seek_IsBase(bool value) const { qudpsocket_seek_isbase = value; }
    inline void setQUdpSocket_AtEnd_IsBase(bool value) const { qudpsocket_atend_isbase = value; }
    inline void setQUdpSocket_Reset_IsBase(bool value) const { qudpsocket_reset_isbase = value; }
    inline void setQUdpSocket_CanReadLine_IsBase(bool value) const { qudpsocket_canreadline_isbase = value; }
    inline void setQUdpSocket_Event_IsBase(bool value) const { qudpsocket_event_isbase = value; }
    inline void setQUdpSocket_EventFilter_IsBase(bool value) const { qudpsocket_eventfilter_isbase = value; }
    inline void setQUdpSocket_TimerEvent_IsBase(bool value) const { qudpsocket_timerevent_isbase = value; }
    inline void setQUdpSocket_ChildEvent_IsBase(bool value) const { qudpsocket_childevent_isbase = value; }
    inline void setQUdpSocket_CustomEvent_IsBase(bool value) const { qudpsocket_customevent_isbase = value; }
    inline void setQUdpSocket_ConnectNotify_IsBase(bool value) const { qudpsocket_connectnotify_isbase = value; }
    inline void setQUdpSocket_DisconnectNotify_IsBase(bool value) const { qudpsocket_disconnectnotify_isbase = value; }
    inline void setQUdpSocket_SetSocketState_IsBase(bool value) const { qudpsocket_setsocketstate_isbase = value; }
    inline void setQUdpSocket_SetSocketError_IsBase(bool value) const { qudpsocket_setsocketerror_isbase = value; }
    inline void setQUdpSocket_SetLocalPort_IsBase(bool value) const { qudpsocket_setlocalport_isbase = value; }
    inline void setQUdpSocket_SetLocalAddress_IsBase(bool value) const { qudpsocket_setlocaladdress_isbase = value; }
    inline void setQUdpSocket_SetPeerPort_IsBase(bool value) const { qudpsocket_setpeerport_isbase = value; }
    inline void setQUdpSocket_SetPeerAddress_IsBase(bool value) const { qudpsocket_setpeeraddress_isbase = value; }
    inline void setQUdpSocket_SetPeerName_IsBase(bool value) const { qudpsocket_setpeername_isbase = value; }
    inline void setQUdpSocket_SetOpenMode_IsBase(bool value) const { qudpsocket_setopenmode_isbase = value; }
    inline void setQUdpSocket_SetErrorString_IsBase(bool value) const { qudpsocket_seterrorstring_isbase = value; }
    inline void setQUdpSocket_Sender_IsBase(bool value) const { qudpsocket_sender_isbase = value; }
    inline void setQUdpSocket_SenderSignalIndex_IsBase(bool value) const { qudpsocket_sendersignalindex_isbase = value; }
    inline void setQUdpSocket_Receivers_IsBase(bool value) const { qudpsocket_receivers_isbase = value; }
    inline void setQUdpSocket_IsSignalConnected_IsBase(bool value) const { qudpsocket_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qudpsocket_metacall_isbase) {
            qudpsocket_metacall_isbase = false;
            return QUdpSocket::qt_metacall(param1, param2, param3);
        } else if (qudpsocket_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qudpsocket_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QUdpSocket::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resume() override {
        if (qudpsocket_resume_isbase) {
            qudpsocket_resume_isbase = false;
            QUdpSocket::resume();
        } else if (qudpsocket_resume_callback != nullptr) {
            qudpsocket_resume_callback();
        } else {
            QUdpSocket::resume();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool bind(const QHostAddress& address, quint16 port, QFlags<QAbstractSocket::BindFlag> mode) override {
        if (qudpsocket_bind_isbase) {
            qudpsocket_bind_isbase = false;
            return QUdpSocket::bind(address, port, mode);
        } else if (qudpsocket_bind_callback != nullptr) {
            const QHostAddress& address_ret = address;
            // Cast returned reference into pointer
            QHostAddress* cbval1 = const_cast<QHostAddress*>(&address_ret);
            uint16_t cbval2 = static_cast<uint16_t>(port);
            int cbval3 = static_cast<int>(mode);

            bool callback_ret = qudpsocket_bind_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QUdpSocket::bind(address, port, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectToHost(const QString& hostName, quint16 port, QFlags<QIODeviceBase::OpenModeFlag> mode, QAbstractSocket::NetworkLayerProtocol protocol) override {
        if (qudpsocket_connecttohost_isbase) {
            qudpsocket_connecttohost_isbase = false;
            QUdpSocket::connectToHost(hostName, port, mode, protocol);
        } else if (qudpsocket_connecttohost_callback != nullptr) {
            const QString hostName_ret = hostName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray hostName_b = hostName_ret.toUtf8();
            libqt_string hostName_str;
            hostName_str.len = hostName_b.length();
            hostName_str.data = static_cast<const char*>(malloc(hostName_str.len + 1));
            memcpy((void*)hostName_str.data, hostName_b.data(), hostName_str.len);
            ((char*)hostName_str.data)[hostName_str.len] = '\0';
            libqt_string cbval1 = hostName_str;
            uint16_t cbval2 = static_cast<uint16_t>(port);
            int cbval3 = static_cast<int>(mode);
            int cbval4 = static_cast<int>(protocol);

            qudpsocket_connecttohost_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QUdpSocket::connectToHost(hostName, port, mode, protocol);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectFromHost() override {
        if (qudpsocket_disconnectfromhost_isbase) {
            qudpsocket_disconnectfromhost_isbase = false;
            QUdpSocket::disconnectFromHost();
        } else if (qudpsocket_disconnectfromhost_callback != nullptr) {
            qudpsocket_disconnectfromhost_callback();
        } else {
            QUdpSocket::disconnectFromHost();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qudpsocket_bytesavailable_isbase) {
            qudpsocket_bytesavailable_isbase = false;
            return QUdpSocket::bytesAvailable();
        } else if (qudpsocket_bytesavailable_callback != nullptr) {
            long long callback_ret = qudpsocket_bytesavailable_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QUdpSocket::bytesAvailable();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qudpsocket_bytestowrite_isbase) {
            qudpsocket_bytestowrite_isbase = false;
            return QUdpSocket::bytesToWrite();
        } else if (qudpsocket_bytestowrite_callback != nullptr) {
            long long callback_ret = qudpsocket_bytestowrite_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QUdpSocket::bytesToWrite();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadBufferSize(qint64 size) override {
        if (qudpsocket_setreadbuffersize_isbase) {
            qudpsocket_setreadbuffersize_isbase = false;
            QUdpSocket::setReadBufferSize(size);
        } else if (qudpsocket_setreadbuffersize_callback != nullptr) {
            long long cbval1 = static_cast<long long>(size);

            qudpsocket_setreadbuffersize_callback(this, cbval1);
        } else {
            QUdpSocket::setReadBufferSize(size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qintptr socketDescriptor() const override {
        if (qudpsocket_socketdescriptor_isbase) {
            qudpsocket_socketdescriptor_isbase = false;
            return QUdpSocket::socketDescriptor();
        } else if (qudpsocket_socketdescriptor_callback != nullptr) {
            intptr_t callback_ret = qudpsocket_socketdescriptor_callback();
            return (qintptr)(callback_ret);
        } else {
            return QUdpSocket::socketDescriptor();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QFlags<QIODeviceBase::OpenModeFlag> openMode) override {
        if (qudpsocket_setsocketdescriptor_isbase) {
            qudpsocket_setsocketdescriptor_isbase = false;
            return QUdpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
        } else if (qudpsocket_setsocketdescriptor_callback != nullptr) {
            qintptr socketDescriptor_ret = socketDescriptor;
            intptr_t cbval1 = (intptr_t)(socketDescriptor_ret);
            int cbval2 = static_cast<int>(state);
            int cbval3 = static_cast<int>(openMode);

            bool callback_ret = qudpsocket_setsocketdescriptor_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QUdpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
        if (qudpsocket_setsocketoption_isbase) {
            qudpsocket_setsocketoption_isbase = false;
            QUdpSocket::setSocketOption(option, value);
        } else if (qudpsocket_setsocketoption_callback != nullptr) {
            int cbval1 = static_cast<int>(option);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            qudpsocket_setsocketoption_callback(this, cbval1, cbval2);
        } else {
            QUdpSocket::setSocketOption(option, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
        if (qudpsocket_socketoption_isbase) {
            qudpsocket_socketoption_isbase = false;
            return QUdpSocket::socketOption(option);
        } else if (qudpsocket_socketoption_callback != nullptr) {
            int cbval1 = static_cast<int>(option);

            QVariant* callback_ret = qudpsocket_socketoption_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QUdpSocket::socketOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qudpsocket_close_isbase) {
            qudpsocket_close_isbase = false;
            QUdpSocket::close();
        } else if (qudpsocket_close_callback != nullptr) {
            qudpsocket_close_callback();
        } else {
            QUdpSocket::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qudpsocket_issequential_isbase) {
            qudpsocket_issequential_isbase = false;
            return QUdpSocket::isSequential();
        } else if (qudpsocket_issequential_callback != nullptr) {
            bool callback_ret = qudpsocket_issequential_callback();
            return callback_ret;
        } else {
            return QUdpSocket::isSequential();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForConnected(int msecs) override {
        if (qudpsocket_waitforconnected_isbase) {
            qudpsocket_waitforconnected_isbase = false;
            return QUdpSocket::waitForConnected(msecs);
        } else if (qudpsocket_waitforconnected_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qudpsocket_waitforconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUdpSocket::waitForConnected(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qudpsocket_waitforreadyread_isbase) {
            qudpsocket_waitforreadyread_isbase = false;
            return QUdpSocket::waitForReadyRead(msecs);
        } else if (qudpsocket_waitforreadyread_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qudpsocket_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUdpSocket::waitForReadyRead(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qudpsocket_waitforbyteswritten_isbase) {
            qudpsocket_waitforbyteswritten_isbase = false;
            return QUdpSocket::waitForBytesWritten(msecs);
        } else if (qudpsocket_waitforbyteswritten_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qudpsocket_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUdpSocket::waitForBytesWritten(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForDisconnected(int msecs) override {
        if (qudpsocket_waitfordisconnected_isbase) {
            qudpsocket_waitfordisconnected_isbase = false;
            return QUdpSocket::waitForDisconnected(msecs);
        } else if (qudpsocket_waitfordisconnected_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qudpsocket_waitfordisconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUdpSocket::waitForDisconnected(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qudpsocket_readdata_isbase) {
            qudpsocket_readdata_isbase = false;
            return QUdpSocket::readData(data, maxlen);
        } else if (qudpsocket_readdata_callback != nullptr) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = qudpsocket_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QUdpSocket::readData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qudpsocket_readlinedata_isbase) {
            qudpsocket_readlinedata_isbase = false;
            return QUdpSocket::readLineData(data, maxlen);
        } else if (qudpsocket_readlinedata_callback != nullptr) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = qudpsocket_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QUdpSocket::readLineData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qudpsocket_skipdata_isbase) {
            qudpsocket_skipdata_isbase = false;
            return QUdpSocket::skipData(maxSize);
        } else if (qudpsocket_skipdata_callback != nullptr) {
            long long cbval1 = static_cast<long long>(maxSize);

            long long callback_ret = qudpsocket_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        } else {
            return QUdpSocket::skipData(maxSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 lenVal) override {
        if (qudpsocket_writedata_isbase) {
            qudpsocket_writedata_isbase = false;
            return QUdpSocket::writeData(data, lenVal);
        } else if (qudpsocket_writedata_callback != nullptr) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(lenVal);

            long long callback_ret = qudpsocket_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QUdpSocket::writeData(data, lenVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode mode) override {
        if (qudpsocket_open_isbase) {
            qudpsocket_open_isbase = false;
            return QUdpSocket::open(mode);
        } else if (qudpsocket_open_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = qudpsocket_open_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUdpSocket::open(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qudpsocket_pos_isbase) {
            qudpsocket_pos_isbase = false;
            return QUdpSocket::pos();
        } else if (qudpsocket_pos_callback != nullptr) {
            long long callback_ret = qudpsocket_pos_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QUdpSocket::pos();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qudpsocket_size_isbase) {
            qudpsocket_size_isbase = false;
            return QUdpSocket::size();
        } else if (qudpsocket_size_callback != nullptr) {
            long long callback_ret = qudpsocket_size_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QUdpSocket::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qudpsocket_seek_isbase) {
            qudpsocket_seek_isbase = false;
            return QUdpSocket::seek(pos);
        } else if (qudpsocket_seek_callback != nullptr) {
            long long cbval1 = static_cast<long long>(pos);

            bool callback_ret = qudpsocket_seek_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUdpSocket::seek(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qudpsocket_atend_isbase) {
            qudpsocket_atend_isbase = false;
            return QUdpSocket::atEnd();
        } else if (qudpsocket_atend_callback != nullptr) {
            bool callback_ret = qudpsocket_atend_callback();
            return callback_ret;
        } else {
            return QUdpSocket::atEnd();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qudpsocket_reset_isbase) {
            qudpsocket_reset_isbase = false;
            return QUdpSocket::reset();
        } else if (qudpsocket_reset_callback != nullptr) {
            bool callback_ret = qudpsocket_reset_callback();
            return callback_ret;
        } else {
            return QUdpSocket::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qudpsocket_canreadline_isbase) {
            qudpsocket_canreadline_isbase = false;
            return QUdpSocket::canReadLine();
        } else if (qudpsocket_canreadline_callback != nullptr) {
            bool callback_ret = qudpsocket_canreadline_callback();
            return callback_ret;
        } else {
            return QUdpSocket::canReadLine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qudpsocket_event_isbase) {
            qudpsocket_event_isbase = false;
            return QUdpSocket::event(event);
        } else if (qudpsocket_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qudpsocket_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUdpSocket::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qudpsocket_eventfilter_isbase) {
            qudpsocket_eventfilter_isbase = false;
            return QUdpSocket::eventFilter(watched, event);
        } else if (qudpsocket_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qudpsocket_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QUdpSocket::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qudpsocket_timerevent_isbase) {
            qudpsocket_timerevent_isbase = false;
            QUdpSocket::timerEvent(event);
        } else if (qudpsocket_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qudpsocket_timerevent_callback(this, cbval1);
        } else {
            QUdpSocket::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qudpsocket_childevent_isbase) {
            qudpsocket_childevent_isbase = false;
            QUdpSocket::childEvent(event);
        } else if (qudpsocket_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qudpsocket_childevent_callback(this, cbval1);
        } else {
            QUdpSocket::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qudpsocket_customevent_isbase) {
            qudpsocket_customevent_isbase = false;
            QUdpSocket::customEvent(event);
        } else if (qudpsocket_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qudpsocket_customevent_callback(this, cbval1);
        } else {
            QUdpSocket::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qudpsocket_connectnotify_isbase) {
            qudpsocket_connectnotify_isbase = false;
            QUdpSocket::connectNotify(signal);
        } else if (qudpsocket_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qudpsocket_connectnotify_callback(this, cbval1);
        } else {
            QUdpSocket::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qudpsocket_disconnectnotify_isbase) {
            qudpsocket_disconnectnotify_isbase = false;
            QUdpSocket::disconnectNotify(signal);
        } else if (qudpsocket_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qudpsocket_disconnectnotify_callback(this, cbval1);
        } else {
            QUdpSocket::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSocketState(QAbstractSocket::SocketState state) {
        if (qudpsocket_setsocketstate_isbase) {
            qudpsocket_setsocketstate_isbase = false;
            QUdpSocket::setSocketState(state);
        } else if (qudpsocket_setsocketstate_callback != nullptr) {
            int cbval1 = static_cast<int>(state);

            qudpsocket_setsocketstate_callback(this, cbval1);
        } else {
            QUdpSocket::setSocketState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSocketError(QAbstractSocket::SocketError socketError) {
        if (qudpsocket_setsocketerror_isbase) {
            qudpsocket_setsocketerror_isbase = false;
            QUdpSocket::setSocketError(socketError);
        } else if (qudpsocket_setsocketerror_callback != nullptr) {
            int cbval1 = static_cast<int>(socketError);

            qudpsocket_setsocketerror_callback(this, cbval1);
        } else {
            QUdpSocket::setSocketError(socketError);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLocalPort(quint16 port) {
        if (qudpsocket_setlocalport_isbase) {
            qudpsocket_setlocalport_isbase = false;
            QUdpSocket::setLocalPort(port);
        } else if (qudpsocket_setlocalport_callback != nullptr) {
            uint16_t cbval1 = static_cast<uint16_t>(port);

            qudpsocket_setlocalport_callback(this, cbval1);
        } else {
            QUdpSocket::setLocalPort(port);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLocalAddress(const QHostAddress& address) {
        if (qudpsocket_setlocaladdress_isbase) {
            qudpsocket_setlocaladdress_isbase = false;
            QUdpSocket::setLocalAddress(address);
        } else if (qudpsocket_setlocaladdress_callback != nullptr) {
            const QHostAddress& address_ret = address;
            // Cast returned reference into pointer
            QHostAddress* cbval1 = const_cast<QHostAddress*>(&address_ret);

            qudpsocket_setlocaladdress_callback(this, cbval1);
        } else {
            QUdpSocket::setLocalAddress(address);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPeerPort(quint16 port) {
        if (qudpsocket_setpeerport_isbase) {
            qudpsocket_setpeerport_isbase = false;
            QUdpSocket::setPeerPort(port);
        } else if (qudpsocket_setpeerport_callback != nullptr) {
            uint16_t cbval1 = static_cast<uint16_t>(port);

            qudpsocket_setpeerport_callback(this, cbval1);
        } else {
            QUdpSocket::setPeerPort(port);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPeerAddress(const QHostAddress& address) {
        if (qudpsocket_setpeeraddress_isbase) {
            qudpsocket_setpeeraddress_isbase = false;
            QUdpSocket::setPeerAddress(address);
        } else if (qudpsocket_setpeeraddress_callback != nullptr) {
            const QHostAddress& address_ret = address;
            // Cast returned reference into pointer
            QHostAddress* cbval1 = const_cast<QHostAddress*>(&address_ret);

            qudpsocket_setpeeraddress_callback(this, cbval1);
        } else {
            QUdpSocket::setPeerAddress(address);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPeerName(const QString& name) {
        if (qudpsocket_setpeername_isbase) {
            qudpsocket_setpeername_isbase = false;
            QUdpSocket::setPeerName(name);
        } else if (qudpsocket_setpeername_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval1 = name_str;

            qudpsocket_setpeername_callback(this, cbval1);
        } else {
            QUdpSocket::setPeerName(name);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (qudpsocket_setopenmode_isbase) {
            qudpsocket_setopenmode_isbase = false;
            QUdpSocket::setOpenMode(openMode);
        } else if (qudpsocket_setopenmode_callback != nullptr) {
            int cbval1 = static_cast<int>(openMode);

            qudpsocket_setopenmode_callback(this, cbval1);
        } else {
            QUdpSocket::setOpenMode(openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (qudpsocket_seterrorstring_isbase) {
            qudpsocket_seterrorstring_isbase = false;
            QUdpSocket::setErrorString(errorString);
        } else if (qudpsocket_seterrorstring_callback != nullptr) {
            const QString errorString_ret = errorString;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorString_b = errorString_ret.toUtf8();
            libqt_string errorString_str;
            errorString_str.len = errorString_b.length();
            errorString_str.data = static_cast<const char*>(malloc(errorString_str.len + 1));
            memcpy((void*)errorString_str.data, errorString_b.data(), errorString_str.len);
            ((char*)errorString_str.data)[errorString_str.len] = '\0';
            libqt_string cbval1 = errorString_str;

            qudpsocket_seterrorstring_callback(this, cbval1);
        } else {
            QUdpSocket::setErrorString(errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qudpsocket_sender_isbase) {
            qudpsocket_sender_isbase = false;
            return QUdpSocket::sender();
        } else if (qudpsocket_sender_callback != nullptr) {
            QObject* callback_ret = qudpsocket_sender_callback();
            return callback_ret;
        } else {
            return QUdpSocket::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qudpsocket_sendersignalindex_isbase) {
            qudpsocket_sendersignalindex_isbase = false;
            return QUdpSocket::senderSignalIndex();
        } else if (qudpsocket_sendersignalindex_callback != nullptr) {
            int callback_ret = qudpsocket_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QUdpSocket::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qudpsocket_receivers_isbase) {
            qudpsocket_receivers_isbase = false;
            return QUdpSocket::receivers(signal);
        } else if (qudpsocket_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qudpsocket_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QUdpSocket::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qudpsocket_issignalconnected_isbase) {
            qudpsocket_issignalconnected_isbase = false;
            return QUdpSocket::isSignalConnected(signal);
        } else if (qudpsocket_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qudpsocket_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QUdpSocket::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend long long QUdpSocket_ReadData(QUdpSocket* self, char* data, long long maxlen);
    friend long long QUdpSocket_QBaseReadData(QUdpSocket* self, char* data, long long maxlen);
    friend long long QUdpSocket_ReadLineData(QUdpSocket* self, char* data, long long maxlen);
    friend long long QUdpSocket_QBaseReadLineData(QUdpSocket* self, char* data, long long maxlen);
    friend long long QUdpSocket_SkipData(QUdpSocket* self, long long maxSize);
    friend long long QUdpSocket_QBaseSkipData(QUdpSocket* self, long long maxSize);
    friend long long QUdpSocket_WriteData(QUdpSocket* self, const char* data, long long lenVal);
    friend long long QUdpSocket_QBaseWriteData(QUdpSocket* self, const char* data, long long lenVal);
    friend void QUdpSocket_TimerEvent(QUdpSocket* self, QTimerEvent* event);
    friend void QUdpSocket_QBaseTimerEvent(QUdpSocket* self, QTimerEvent* event);
    friend void QUdpSocket_ChildEvent(QUdpSocket* self, QChildEvent* event);
    friend void QUdpSocket_QBaseChildEvent(QUdpSocket* self, QChildEvent* event);
    friend void QUdpSocket_CustomEvent(QUdpSocket* self, QEvent* event);
    friend void QUdpSocket_QBaseCustomEvent(QUdpSocket* self, QEvent* event);
    friend void QUdpSocket_ConnectNotify(QUdpSocket* self, const QMetaMethod* signal);
    friend void QUdpSocket_QBaseConnectNotify(QUdpSocket* self, const QMetaMethod* signal);
    friend void QUdpSocket_DisconnectNotify(QUdpSocket* self, const QMetaMethod* signal);
    friend void QUdpSocket_QBaseDisconnectNotify(QUdpSocket* self, const QMetaMethod* signal);
    friend void QUdpSocket_SetSocketState(QUdpSocket* self, int state);
    friend void QUdpSocket_QBaseSetSocketState(QUdpSocket* self, int state);
    friend void QUdpSocket_SetSocketError(QUdpSocket* self, int socketError);
    friend void QUdpSocket_QBaseSetSocketError(QUdpSocket* self, int socketError);
    friend void QUdpSocket_SetLocalPort(QUdpSocket* self, uint16_t port);
    friend void QUdpSocket_QBaseSetLocalPort(QUdpSocket* self, uint16_t port);
    friend void QUdpSocket_SetLocalAddress(QUdpSocket* self, const QHostAddress* address);
    friend void QUdpSocket_QBaseSetLocalAddress(QUdpSocket* self, const QHostAddress* address);
    friend void QUdpSocket_SetPeerPort(QUdpSocket* self, uint16_t port);
    friend void QUdpSocket_QBaseSetPeerPort(QUdpSocket* self, uint16_t port);
    friend void QUdpSocket_SetPeerAddress(QUdpSocket* self, const QHostAddress* address);
    friend void QUdpSocket_QBaseSetPeerAddress(QUdpSocket* self, const QHostAddress* address);
    friend void QUdpSocket_SetPeerName(QUdpSocket* self, const libqt_string name);
    friend void QUdpSocket_QBaseSetPeerName(QUdpSocket* self, const libqt_string name);
    friend void QUdpSocket_SetOpenMode(QUdpSocket* self, int openMode);
    friend void QUdpSocket_QBaseSetOpenMode(QUdpSocket* self, int openMode);
    friend void QUdpSocket_SetErrorString(QUdpSocket* self, const libqt_string errorString);
    friend void QUdpSocket_QBaseSetErrorString(QUdpSocket* self, const libqt_string errorString);
    friend QObject* QUdpSocket_Sender(const QUdpSocket* self);
    friend QObject* QUdpSocket_QBaseSender(const QUdpSocket* self);
    friend int QUdpSocket_SenderSignalIndex(const QUdpSocket* self);
    friend int QUdpSocket_QBaseSenderSignalIndex(const QUdpSocket* self);
    friend int QUdpSocket_Receivers(const QUdpSocket* self, const char* signal);
    friend int QUdpSocket_QBaseReceivers(const QUdpSocket* self, const char* signal);
    friend bool QUdpSocket_IsSignalConnected(const QUdpSocket* self, const QMetaMethod* signal);
    friend bool QUdpSocket_QBaseIsSignalConnected(const QUdpSocket* self, const QMetaMethod* signal);
};

#endif
