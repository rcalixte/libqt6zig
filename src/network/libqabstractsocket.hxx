#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQABSTRACTSOCKET_H
#define SRC_NETWORKC_LIBVIRTUALQABSTRACTSOCKET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAbstractSocket so that we can call protected methods
class VirtualQAbstractSocket final : public QAbstractSocket {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractSocket = true;

    // Virtual class public types (including callbacks)
    using QAbstractSocket_Metacall_Callback = int (*)(QAbstractSocket*, int, int, void**);
    using QAbstractSocket_Resume_Callback = void (*)();
    using QAbstractSocket_Bind_Callback = bool (*)(QAbstractSocket*, QHostAddress*, uint16_t, int);
    using QAbstractSocket_ConnectToHost_Callback = void (*)(QAbstractSocket*, libqt_string, uint16_t, int, int);
    using QAbstractSocket_DisconnectFromHost_Callback = void (*)();
    using QAbstractSocket_BytesAvailable_Callback = long long (*)();
    using QAbstractSocket_BytesToWrite_Callback = long long (*)();
    using QAbstractSocket_SetReadBufferSize_Callback = void (*)(QAbstractSocket*, long long);
    using QAbstractSocket_SocketDescriptor_Callback = intptr_t (*)();
    using QAbstractSocket_SetSocketDescriptor_Callback = bool (*)(QAbstractSocket*, intptr_t, int, int);
    using QAbstractSocket_SetSocketOption_Callback = void (*)(QAbstractSocket*, int, QVariant*);
    using QAbstractSocket_SocketOption_Callback = QVariant* (*)(QAbstractSocket*, int);
    using QAbstractSocket_Close_Callback = void (*)();
    using QAbstractSocket_IsSequential_Callback = bool (*)();
    using QAbstractSocket_WaitForConnected_Callback = bool (*)(QAbstractSocket*, int);
    using QAbstractSocket_WaitForReadyRead_Callback = bool (*)(QAbstractSocket*, int);
    using QAbstractSocket_WaitForBytesWritten_Callback = bool (*)(QAbstractSocket*, int);
    using QAbstractSocket_WaitForDisconnected_Callback = bool (*)(QAbstractSocket*, int);
    using QAbstractSocket_ReadData_Callback = long long (*)(QAbstractSocket*, char*, long long);
    using QAbstractSocket_ReadLineData_Callback = long long (*)(QAbstractSocket*, char*, long long);
    using QAbstractSocket_SkipData_Callback = long long (*)(QAbstractSocket*, long long);
    using QAbstractSocket_WriteData_Callback = long long (*)(QAbstractSocket*, const char*, long long);
    using QAbstractSocket_Open_Callback = bool (*)(QAbstractSocket*, int);
    using QAbstractSocket_Pos_Callback = long long (*)();
    using QAbstractSocket_Size_Callback = long long (*)();
    using QAbstractSocket_Seek_Callback = bool (*)(QAbstractSocket*, long long);
    using QAbstractSocket_AtEnd_Callback = bool (*)();
    using QAbstractSocket_Reset_Callback = bool (*)();
    using QAbstractSocket_CanReadLine_Callback = bool (*)();
    using QAbstractSocket_Event_Callback = bool (*)(QAbstractSocket*, QEvent*);
    using QAbstractSocket_EventFilter_Callback = bool (*)(QAbstractSocket*, QObject*, QEvent*);
    using QAbstractSocket_TimerEvent_Callback = void (*)(QAbstractSocket*, QTimerEvent*);
    using QAbstractSocket_ChildEvent_Callback = void (*)(QAbstractSocket*, QChildEvent*);
    using QAbstractSocket_CustomEvent_Callback = void (*)(QAbstractSocket*, QEvent*);
    using QAbstractSocket_ConnectNotify_Callback = void (*)(QAbstractSocket*, QMetaMethod*);
    using QAbstractSocket_DisconnectNotify_Callback = void (*)(QAbstractSocket*, QMetaMethod*);
    using QAbstractSocket_SetSocketState_Callback = void (*)(QAbstractSocket*, int);
    using QAbstractSocket_SetSocketError_Callback = void (*)(QAbstractSocket*, int);
    using QAbstractSocket_SetLocalPort_Callback = void (*)(QAbstractSocket*, uint16_t);
    using QAbstractSocket_SetLocalAddress_Callback = void (*)(QAbstractSocket*, QHostAddress*);
    using QAbstractSocket_SetPeerPort_Callback = void (*)(QAbstractSocket*, uint16_t);
    using QAbstractSocket_SetPeerAddress_Callback = void (*)(QAbstractSocket*, QHostAddress*);
    using QAbstractSocket_SetPeerName_Callback = void (*)(QAbstractSocket*, libqt_string);
    using QAbstractSocket_SetOpenMode_Callback = void (*)(QAbstractSocket*, int);
    using QAbstractSocket_SetErrorString_Callback = void (*)(QAbstractSocket*, libqt_string);
    using QAbstractSocket_Sender_Callback = QObject* (*)();
    using QAbstractSocket_SenderSignalIndex_Callback = int (*)();
    using QAbstractSocket_Receivers_Callback = int (*)(const QAbstractSocket*, const char*);
    using QAbstractSocket_IsSignalConnected_Callback = bool (*)(const QAbstractSocket*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAbstractSocket_Metacall_Callback qabstractsocket_metacall_callback = nullptr;
    QAbstractSocket_Resume_Callback qabstractsocket_resume_callback = nullptr;
    QAbstractSocket_Bind_Callback qabstractsocket_bind_callback = nullptr;
    QAbstractSocket_ConnectToHost_Callback qabstractsocket_connecttohost_callback = nullptr;
    QAbstractSocket_DisconnectFromHost_Callback qabstractsocket_disconnectfromhost_callback = nullptr;
    QAbstractSocket_BytesAvailable_Callback qabstractsocket_bytesavailable_callback = nullptr;
    QAbstractSocket_BytesToWrite_Callback qabstractsocket_bytestowrite_callback = nullptr;
    QAbstractSocket_SetReadBufferSize_Callback qabstractsocket_setreadbuffersize_callback = nullptr;
    QAbstractSocket_SocketDescriptor_Callback qabstractsocket_socketdescriptor_callback = nullptr;
    QAbstractSocket_SetSocketDescriptor_Callback qabstractsocket_setsocketdescriptor_callback = nullptr;
    QAbstractSocket_SetSocketOption_Callback qabstractsocket_setsocketoption_callback = nullptr;
    QAbstractSocket_SocketOption_Callback qabstractsocket_socketoption_callback = nullptr;
    QAbstractSocket_Close_Callback qabstractsocket_close_callback = nullptr;
    QAbstractSocket_IsSequential_Callback qabstractsocket_issequential_callback = nullptr;
    QAbstractSocket_WaitForConnected_Callback qabstractsocket_waitforconnected_callback = nullptr;
    QAbstractSocket_WaitForReadyRead_Callback qabstractsocket_waitforreadyread_callback = nullptr;
    QAbstractSocket_WaitForBytesWritten_Callback qabstractsocket_waitforbyteswritten_callback = nullptr;
    QAbstractSocket_WaitForDisconnected_Callback qabstractsocket_waitfordisconnected_callback = nullptr;
    QAbstractSocket_ReadData_Callback qabstractsocket_readdata_callback = nullptr;
    QAbstractSocket_ReadLineData_Callback qabstractsocket_readlinedata_callback = nullptr;
    QAbstractSocket_SkipData_Callback qabstractsocket_skipdata_callback = nullptr;
    QAbstractSocket_WriteData_Callback qabstractsocket_writedata_callback = nullptr;
    QAbstractSocket_Open_Callback qabstractsocket_open_callback = nullptr;
    QAbstractSocket_Pos_Callback qabstractsocket_pos_callback = nullptr;
    QAbstractSocket_Size_Callback qabstractsocket_size_callback = nullptr;
    QAbstractSocket_Seek_Callback qabstractsocket_seek_callback = nullptr;
    QAbstractSocket_AtEnd_Callback qabstractsocket_atend_callback = nullptr;
    QAbstractSocket_Reset_Callback qabstractsocket_reset_callback = nullptr;
    QAbstractSocket_CanReadLine_Callback qabstractsocket_canreadline_callback = nullptr;
    QAbstractSocket_Event_Callback qabstractsocket_event_callback = nullptr;
    QAbstractSocket_EventFilter_Callback qabstractsocket_eventfilter_callback = nullptr;
    QAbstractSocket_TimerEvent_Callback qabstractsocket_timerevent_callback = nullptr;
    QAbstractSocket_ChildEvent_Callback qabstractsocket_childevent_callback = nullptr;
    QAbstractSocket_CustomEvent_Callback qabstractsocket_customevent_callback = nullptr;
    QAbstractSocket_ConnectNotify_Callback qabstractsocket_connectnotify_callback = nullptr;
    QAbstractSocket_DisconnectNotify_Callback qabstractsocket_disconnectnotify_callback = nullptr;
    QAbstractSocket_SetSocketState_Callback qabstractsocket_setsocketstate_callback = nullptr;
    QAbstractSocket_SetSocketError_Callback qabstractsocket_setsocketerror_callback = nullptr;
    QAbstractSocket_SetLocalPort_Callback qabstractsocket_setlocalport_callback = nullptr;
    QAbstractSocket_SetLocalAddress_Callback qabstractsocket_setlocaladdress_callback = nullptr;
    QAbstractSocket_SetPeerPort_Callback qabstractsocket_setpeerport_callback = nullptr;
    QAbstractSocket_SetPeerAddress_Callback qabstractsocket_setpeeraddress_callback = nullptr;
    QAbstractSocket_SetPeerName_Callback qabstractsocket_setpeername_callback = nullptr;
    QAbstractSocket_SetOpenMode_Callback qabstractsocket_setopenmode_callback = nullptr;
    QAbstractSocket_SetErrorString_Callback qabstractsocket_seterrorstring_callback = nullptr;
    QAbstractSocket_Sender_Callback qabstractsocket_sender_callback = nullptr;
    QAbstractSocket_SenderSignalIndex_Callback qabstractsocket_sendersignalindex_callback = nullptr;
    QAbstractSocket_Receivers_Callback qabstractsocket_receivers_callback = nullptr;
    QAbstractSocket_IsSignalConnected_Callback qabstractsocket_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qabstractsocket_metacall_isbase = false;
    mutable bool qabstractsocket_resume_isbase = false;
    mutable bool qabstractsocket_bind_isbase = false;
    mutable bool qabstractsocket_connecttohost_isbase = false;
    mutable bool qabstractsocket_disconnectfromhost_isbase = false;
    mutable bool qabstractsocket_bytesavailable_isbase = false;
    mutable bool qabstractsocket_bytestowrite_isbase = false;
    mutable bool qabstractsocket_setreadbuffersize_isbase = false;
    mutable bool qabstractsocket_socketdescriptor_isbase = false;
    mutable bool qabstractsocket_setsocketdescriptor_isbase = false;
    mutable bool qabstractsocket_setsocketoption_isbase = false;
    mutable bool qabstractsocket_socketoption_isbase = false;
    mutable bool qabstractsocket_close_isbase = false;
    mutable bool qabstractsocket_issequential_isbase = false;
    mutable bool qabstractsocket_waitforconnected_isbase = false;
    mutable bool qabstractsocket_waitforreadyread_isbase = false;
    mutable bool qabstractsocket_waitforbyteswritten_isbase = false;
    mutable bool qabstractsocket_waitfordisconnected_isbase = false;
    mutable bool qabstractsocket_readdata_isbase = false;
    mutable bool qabstractsocket_readlinedata_isbase = false;
    mutable bool qabstractsocket_skipdata_isbase = false;
    mutable bool qabstractsocket_writedata_isbase = false;
    mutable bool qabstractsocket_open_isbase = false;
    mutable bool qabstractsocket_pos_isbase = false;
    mutable bool qabstractsocket_size_isbase = false;
    mutable bool qabstractsocket_seek_isbase = false;
    mutable bool qabstractsocket_atend_isbase = false;
    mutable bool qabstractsocket_reset_isbase = false;
    mutable bool qabstractsocket_canreadline_isbase = false;
    mutable bool qabstractsocket_event_isbase = false;
    mutable bool qabstractsocket_eventfilter_isbase = false;
    mutable bool qabstractsocket_timerevent_isbase = false;
    mutable bool qabstractsocket_childevent_isbase = false;
    mutable bool qabstractsocket_customevent_isbase = false;
    mutable bool qabstractsocket_connectnotify_isbase = false;
    mutable bool qabstractsocket_disconnectnotify_isbase = false;
    mutable bool qabstractsocket_setsocketstate_isbase = false;
    mutable bool qabstractsocket_setsocketerror_isbase = false;
    mutable bool qabstractsocket_setlocalport_isbase = false;
    mutable bool qabstractsocket_setlocaladdress_isbase = false;
    mutable bool qabstractsocket_setpeerport_isbase = false;
    mutable bool qabstractsocket_setpeeraddress_isbase = false;
    mutable bool qabstractsocket_setpeername_isbase = false;
    mutable bool qabstractsocket_setopenmode_isbase = false;
    mutable bool qabstractsocket_seterrorstring_isbase = false;
    mutable bool qabstractsocket_sender_isbase = false;
    mutable bool qabstractsocket_sendersignalindex_isbase = false;
    mutable bool qabstractsocket_receivers_isbase = false;
    mutable bool qabstractsocket_issignalconnected_isbase = false;

  public:
    VirtualQAbstractSocket(QAbstractSocket::SocketType socketType, QObject* parent) : QAbstractSocket(socketType, parent){};

    ~VirtualQAbstractSocket() {
        qabstractsocket_metacall_callback = nullptr;
        qabstractsocket_resume_callback = nullptr;
        qabstractsocket_bind_callback = nullptr;
        qabstractsocket_connecttohost_callback = nullptr;
        qabstractsocket_disconnectfromhost_callback = nullptr;
        qabstractsocket_bytesavailable_callback = nullptr;
        qabstractsocket_bytestowrite_callback = nullptr;
        qabstractsocket_setreadbuffersize_callback = nullptr;
        qabstractsocket_socketdescriptor_callback = nullptr;
        qabstractsocket_setsocketdescriptor_callback = nullptr;
        qabstractsocket_setsocketoption_callback = nullptr;
        qabstractsocket_socketoption_callback = nullptr;
        qabstractsocket_close_callback = nullptr;
        qabstractsocket_issequential_callback = nullptr;
        qabstractsocket_waitforconnected_callback = nullptr;
        qabstractsocket_waitforreadyread_callback = nullptr;
        qabstractsocket_waitforbyteswritten_callback = nullptr;
        qabstractsocket_waitfordisconnected_callback = nullptr;
        qabstractsocket_readdata_callback = nullptr;
        qabstractsocket_readlinedata_callback = nullptr;
        qabstractsocket_skipdata_callback = nullptr;
        qabstractsocket_writedata_callback = nullptr;
        qabstractsocket_open_callback = nullptr;
        qabstractsocket_pos_callback = nullptr;
        qabstractsocket_size_callback = nullptr;
        qabstractsocket_seek_callback = nullptr;
        qabstractsocket_atend_callback = nullptr;
        qabstractsocket_reset_callback = nullptr;
        qabstractsocket_canreadline_callback = nullptr;
        qabstractsocket_event_callback = nullptr;
        qabstractsocket_eventfilter_callback = nullptr;
        qabstractsocket_timerevent_callback = nullptr;
        qabstractsocket_childevent_callback = nullptr;
        qabstractsocket_customevent_callback = nullptr;
        qabstractsocket_connectnotify_callback = nullptr;
        qabstractsocket_disconnectnotify_callback = nullptr;
        qabstractsocket_setsocketstate_callback = nullptr;
        qabstractsocket_setsocketerror_callback = nullptr;
        qabstractsocket_setlocalport_callback = nullptr;
        qabstractsocket_setlocaladdress_callback = nullptr;
        qabstractsocket_setpeerport_callback = nullptr;
        qabstractsocket_setpeeraddress_callback = nullptr;
        qabstractsocket_setpeername_callback = nullptr;
        qabstractsocket_setopenmode_callback = nullptr;
        qabstractsocket_seterrorstring_callback = nullptr;
        qabstractsocket_sender_callback = nullptr;
        qabstractsocket_sendersignalindex_callback = nullptr;
        qabstractsocket_receivers_callback = nullptr;
        qabstractsocket_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQAbstractSocket_Metacall_Callback(QAbstractSocket_Metacall_Callback cb) { qabstractsocket_metacall_callback = cb; }
    inline void setQAbstractSocket_Resume_Callback(QAbstractSocket_Resume_Callback cb) { qabstractsocket_resume_callback = cb; }
    inline void setQAbstractSocket_Bind_Callback(QAbstractSocket_Bind_Callback cb) { qabstractsocket_bind_callback = cb; }
    inline void setQAbstractSocket_ConnectToHost_Callback(QAbstractSocket_ConnectToHost_Callback cb) { qabstractsocket_connecttohost_callback = cb; }
    inline void setQAbstractSocket_DisconnectFromHost_Callback(QAbstractSocket_DisconnectFromHost_Callback cb) { qabstractsocket_disconnectfromhost_callback = cb; }
    inline void setQAbstractSocket_BytesAvailable_Callback(QAbstractSocket_BytesAvailable_Callback cb) { qabstractsocket_bytesavailable_callback = cb; }
    inline void setQAbstractSocket_BytesToWrite_Callback(QAbstractSocket_BytesToWrite_Callback cb) { qabstractsocket_bytestowrite_callback = cb; }
    inline void setQAbstractSocket_SetReadBufferSize_Callback(QAbstractSocket_SetReadBufferSize_Callback cb) { qabstractsocket_setreadbuffersize_callback = cb; }
    inline void setQAbstractSocket_SocketDescriptor_Callback(QAbstractSocket_SocketDescriptor_Callback cb) { qabstractsocket_socketdescriptor_callback = cb; }
    inline void setQAbstractSocket_SetSocketDescriptor_Callback(QAbstractSocket_SetSocketDescriptor_Callback cb) { qabstractsocket_setsocketdescriptor_callback = cb; }
    inline void setQAbstractSocket_SetSocketOption_Callback(QAbstractSocket_SetSocketOption_Callback cb) { qabstractsocket_setsocketoption_callback = cb; }
    inline void setQAbstractSocket_SocketOption_Callback(QAbstractSocket_SocketOption_Callback cb) { qabstractsocket_socketoption_callback = cb; }
    inline void setQAbstractSocket_Close_Callback(QAbstractSocket_Close_Callback cb) { qabstractsocket_close_callback = cb; }
    inline void setQAbstractSocket_IsSequential_Callback(QAbstractSocket_IsSequential_Callback cb) { qabstractsocket_issequential_callback = cb; }
    inline void setQAbstractSocket_WaitForConnected_Callback(QAbstractSocket_WaitForConnected_Callback cb) { qabstractsocket_waitforconnected_callback = cb; }
    inline void setQAbstractSocket_WaitForReadyRead_Callback(QAbstractSocket_WaitForReadyRead_Callback cb) { qabstractsocket_waitforreadyread_callback = cb; }
    inline void setQAbstractSocket_WaitForBytesWritten_Callback(QAbstractSocket_WaitForBytesWritten_Callback cb) { qabstractsocket_waitforbyteswritten_callback = cb; }
    inline void setQAbstractSocket_WaitForDisconnected_Callback(QAbstractSocket_WaitForDisconnected_Callback cb) { qabstractsocket_waitfordisconnected_callback = cb; }
    inline void setQAbstractSocket_ReadData_Callback(QAbstractSocket_ReadData_Callback cb) { qabstractsocket_readdata_callback = cb; }
    inline void setQAbstractSocket_ReadLineData_Callback(QAbstractSocket_ReadLineData_Callback cb) { qabstractsocket_readlinedata_callback = cb; }
    inline void setQAbstractSocket_SkipData_Callback(QAbstractSocket_SkipData_Callback cb) { qabstractsocket_skipdata_callback = cb; }
    inline void setQAbstractSocket_WriteData_Callback(QAbstractSocket_WriteData_Callback cb) { qabstractsocket_writedata_callback = cb; }
    inline void setQAbstractSocket_Open_Callback(QAbstractSocket_Open_Callback cb) { qabstractsocket_open_callback = cb; }
    inline void setQAbstractSocket_Pos_Callback(QAbstractSocket_Pos_Callback cb) { qabstractsocket_pos_callback = cb; }
    inline void setQAbstractSocket_Size_Callback(QAbstractSocket_Size_Callback cb) { qabstractsocket_size_callback = cb; }
    inline void setQAbstractSocket_Seek_Callback(QAbstractSocket_Seek_Callback cb) { qabstractsocket_seek_callback = cb; }
    inline void setQAbstractSocket_AtEnd_Callback(QAbstractSocket_AtEnd_Callback cb) { qabstractsocket_atend_callback = cb; }
    inline void setQAbstractSocket_Reset_Callback(QAbstractSocket_Reset_Callback cb) { qabstractsocket_reset_callback = cb; }
    inline void setQAbstractSocket_CanReadLine_Callback(QAbstractSocket_CanReadLine_Callback cb) { qabstractsocket_canreadline_callback = cb; }
    inline void setQAbstractSocket_Event_Callback(QAbstractSocket_Event_Callback cb) { qabstractsocket_event_callback = cb; }
    inline void setQAbstractSocket_EventFilter_Callback(QAbstractSocket_EventFilter_Callback cb) { qabstractsocket_eventfilter_callback = cb; }
    inline void setQAbstractSocket_TimerEvent_Callback(QAbstractSocket_TimerEvent_Callback cb) { qabstractsocket_timerevent_callback = cb; }
    inline void setQAbstractSocket_ChildEvent_Callback(QAbstractSocket_ChildEvent_Callback cb) { qabstractsocket_childevent_callback = cb; }
    inline void setQAbstractSocket_CustomEvent_Callback(QAbstractSocket_CustomEvent_Callback cb) { qabstractsocket_customevent_callback = cb; }
    inline void setQAbstractSocket_ConnectNotify_Callback(QAbstractSocket_ConnectNotify_Callback cb) { qabstractsocket_connectnotify_callback = cb; }
    inline void setQAbstractSocket_DisconnectNotify_Callback(QAbstractSocket_DisconnectNotify_Callback cb) { qabstractsocket_disconnectnotify_callback = cb; }
    inline void setQAbstractSocket_SetSocketState_Callback(QAbstractSocket_SetSocketState_Callback cb) { qabstractsocket_setsocketstate_callback = cb; }
    inline void setQAbstractSocket_SetSocketError_Callback(QAbstractSocket_SetSocketError_Callback cb) { qabstractsocket_setsocketerror_callback = cb; }
    inline void setQAbstractSocket_SetLocalPort_Callback(QAbstractSocket_SetLocalPort_Callback cb) { qabstractsocket_setlocalport_callback = cb; }
    inline void setQAbstractSocket_SetLocalAddress_Callback(QAbstractSocket_SetLocalAddress_Callback cb) { qabstractsocket_setlocaladdress_callback = cb; }
    inline void setQAbstractSocket_SetPeerPort_Callback(QAbstractSocket_SetPeerPort_Callback cb) { qabstractsocket_setpeerport_callback = cb; }
    inline void setQAbstractSocket_SetPeerAddress_Callback(QAbstractSocket_SetPeerAddress_Callback cb) { qabstractsocket_setpeeraddress_callback = cb; }
    inline void setQAbstractSocket_SetPeerName_Callback(QAbstractSocket_SetPeerName_Callback cb) { qabstractsocket_setpeername_callback = cb; }
    inline void setQAbstractSocket_SetOpenMode_Callback(QAbstractSocket_SetOpenMode_Callback cb) { qabstractsocket_setopenmode_callback = cb; }
    inline void setQAbstractSocket_SetErrorString_Callback(QAbstractSocket_SetErrorString_Callback cb) { qabstractsocket_seterrorstring_callback = cb; }
    inline void setQAbstractSocket_Sender_Callback(QAbstractSocket_Sender_Callback cb) { qabstractsocket_sender_callback = cb; }
    inline void setQAbstractSocket_SenderSignalIndex_Callback(QAbstractSocket_SenderSignalIndex_Callback cb) { qabstractsocket_sendersignalindex_callback = cb; }
    inline void setQAbstractSocket_Receivers_Callback(QAbstractSocket_Receivers_Callback cb) { qabstractsocket_receivers_callback = cb; }
    inline void setQAbstractSocket_IsSignalConnected_Callback(QAbstractSocket_IsSignalConnected_Callback cb) { qabstractsocket_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAbstractSocket_Metacall_IsBase(bool value) const { qabstractsocket_metacall_isbase = value; }
    inline void setQAbstractSocket_Resume_IsBase(bool value) const { qabstractsocket_resume_isbase = value; }
    inline void setQAbstractSocket_Bind_IsBase(bool value) const { qabstractsocket_bind_isbase = value; }
    inline void setQAbstractSocket_ConnectToHost_IsBase(bool value) const { qabstractsocket_connecttohost_isbase = value; }
    inline void setQAbstractSocket_DisconnectFromHost_IsBase(bool value) const { qabstractsocket_disconnectfromhost_isbase = value; }
    inline void setQAbstractSocket_BytesAvailable_IsBase(bool value) const { qabstractsocket_bytesavailable_isbase = value; }
    inline void setQAbstractSocket_BytesToWrite_IsBase(bool value) const { qabstractsocket_bytestowrite_isbase = value; }
    inline void setQAbstractSocket_SetReadBufferSize_IsBase(bool value) const { qabstractsocket_setreadbuffersize_isbase = value; }
    inline void setQAbstractSocket_SocketDescriptor_IsBase(bool value) const { qabstractsocket_socketdescriptor_isbase = value; }
    inline void setQAbstractSocket_SetSocketDescriptor_IsBase(bool value) const { qabstractsocket_setsocketdescriptor_isbase = value; }
    inline void setQAbstractSocket_SetSocketOption_IsBase(bool value) const { qabstractsocket_setsocketoption_isbase = value; }
    inline void setQAbstractSocket_SocketOption_IsBase(bool value) const { qabstractsocket_socketoption_isbase = value; }
    inline void setQAbstractSocket_Close_IsBase(bool value) const { qabstractsocket_close_isbase = value; }
    inline void setQAbstractSocket_IsSequential_IsBase(bool value) const { qabstractsocket_issequential_isbase = value; }
    inline void setQAbstractSocket_WaitForConnected_IsBase(bool value) const { qabstractsocket_waitforconnected_isbase = value; }
    inline void setQAbstractSocket_WaitForReadyRead_IsBase(bool value) const { qabstractsocket_waitforreadyread_isbase = value; }
    inline void setQAbstractSocket_WaitForBytesWritten_IsBase(bool value) const { qabstractsocket_waitforbyteswritten_isbase = value; }
    inline void setQAbstractSocket_WaitForDisconnected_IsBase(bool value) const { qabstractsocket_waitfordisconnected_isbase = value; }
    inline void setQAbstractSocket_ReadData_IsBase(bool value) const { qabstractsocket_readdata_isbase = value; }
    inline void setQAbstractSocket_ReadLineData_IsBase(bool value) const { qabstractsocket_readlinedata_isbase = value; }
    inline void setQAbstractSocket_SkipData_IsBase(bool value) const { qabstractsocket_skipdata_isbase = value; }
    inline void setQAbstractSocket_WriteData_IsBase(bool value) const { qabstractsocket_writedata_isbase = value; }
    inline void setQAbstractSocket_Open_IsBase(bool value) const { qabstractsocket_open_isbase = value; }
    inline void setQAbstractSocket_Pos_IsBase(bool value) const { qabstractsocket_pos_isbase = value; }
    inline void setQAbstractSocket_Size_IsBase(bool value) const { qabstractsocket_size_isbase = value; }
    inline void setQAbstractSocket_Seek_IsBase(bool value) const { qabstractsocket_seek_isbase = value; }
    inline void setQAbstractSocket_AtEnd_IsBase(bool value) const { qabstractsocket_atend_isbase = value; }
    inline void setQAbstractSocket_Reset_IsBase(bool value) const { qabstractsocket_reset_isbase = value; }
    inline void setQAbstractSocket_CanReadLine_IsBase(bool value) const { qabstractsocket_canreadline_isbase = value; }
    inline void setQAbstractSocket_Event_IsBase(bool value) const { qabstractsocket_event_isbase = value; }
    inline void setQAbstractSocket_EventFilter_IsBase(bool value) const { qabstractsocket_eventfilter_isbase = value; }
    inline void setQAbstractSocket_TimerEvent_IsBase(bool value) const { qabstractsocket_timerevent_isbase = value; }
    inline void setQAbstractSocket_ChildEvent_IsBase(bool value) const { qabstractsocket_childevent_isbase = value; }
    inline void setQAbstractSocket_CustomEvent_IsBase(bool value) const { qabstractsocket_customevent_isbase = value; }
    inline void setQAbstractSocket_ConnectNotify_IsBase(bool value) const { qabstractsocket_connectnotify_isbase = value; }
    inline void setQAbstractSocket_DisconnectNotify_IsBase(bool value) const { qabstractsocket_disconnectnotify_isbase = value; }
    inline void setQAbstractSocket_SetSocketState_IsBase(bool value) const { qabstractsocket_setsocketstate_isbase = value; }
    inline void setQAbstractSocket_SetSocketError_IsBase(bool value) const { qabstractsocket_setsocketerror_isbase = value; }
    inline void setQAbstractSocket_SetLocalPort_IsBase(bool value) const { qabstractsocket_setlocalport_isbase = value; }
    inline void setQAbstractSocket_SetLocalAddress_IsBase(bool value) const { qabstractsocket_setlocaladdress_isbase = value; }
    inline void setQAbstractSocket_SetPeerPort_IsBase(bool value) const { qabstractsocket_setpeerport_isbase = value; }
    inline void setQAbstractSocket_SetPeerAddress_IsBase(bool value) const { qabstractsocket_setpeeraddress_isbase = value; }
    inline void setQAbstractSocket_SetPeerName_IsBase(bool value) const { qabstractsocket_setpeername_isbase = value; }
    inline void setQAbstractSocket_SetOpenMode_IsBase(bool value) const { qabstractsocket_setopenmode_isbase = value; }
    inline void setQAbstractSocket_SetErrorString_IsBase(bool value) const { qabstractsocket_seterrorstring_isbase = value; }
    inline void setQAbstractSocket_Sender_IsBase(bool value) const { qabstractsocket_sender_isbase = value; }
    inline void setQAbstractSocket_SenderSignalIndex_IsBase(bool value) const { qabstractsocket_sendersignalindex_isbase = value; }
    inline void setQAbstractSocket_Receivers_IsBase(bool value) const { qabstractsocket_receivers_isbase = value; }
    inline void setQAbstractSocket_IsSignalConnected_IsBase(bool value) const { qabstractsocket_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractsocket_metacall_isbase) {
            qabstractsocket_metacall_isbase = false;
            return QAbstractSocket::qt_metacall(param1, param2, param3);
        } else if (qabstractsocket_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qabstractsocket_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractSocket::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resume() override {
        if (qabstractsocket_resume_isbase) {
            qabstractsocket_resume_isbase = false;
            QAbstractSocket::resume();
        } else if (qabstractsocket_resume_callback != nullptr) {
            qabstractsocket_resume_callback();
        } else {
            QAbstractSocket::resume();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool bind(const QHostAddress& address, quint16 port, QAbstractSocket::BindMode mode) override {
        if (qabstractsocket_bind_isbase) {
            qabstractsocket_bind_isbase = false;
            return QAbstractSocket::bind(address, port, mode);
        } else if (qabstractsocket_bind_callback != nullptr) {
            const QHostAddress& address_ret = address;
            // Cast returned reference into pointer
            QHostAddress* cbval1 = const_cast<QHostAddress*>(&address_ret);
            uint16_t cbval2 = static_cast<uint16_t>(port);
            int cbval3 = static_cast<int>(mode);

            bool callback_ret = qabstractsocket_bind_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QAbstractSocket::bind(address, port, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectToHost(const QString& hostName, quint16 port, QIODeviceBase::OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol) override {
        if (qabstractsocket_connecttohost_isbase) {
            qabstractsocket_connecttohost_isbase = false;
            QAbstractSocket::connectToHost(hostName, port, mode, protocol);
        } else if (qabstractsocket_connecttohost_callback != nullptr) {
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

            qabstractsocket_connecttohost_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            QAbstractSocket::connectToHost(hostName, port, mode, protocol);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectFromHost() override {
        if (qabstractsocket_disconnectfromhost_isbase) {
            qabstractsocket_disconnectfromhost_isbase = false;
            QAbstractSocket::disconnectFromHost();
        } else if (qabstractsocket_disconnectfromhost_callback != nullptr) {
            qabstractsocket_disconnectfromhost_callback();
        } else {
            QAbstractSocket::disconnectFromHost();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qabstractsocket_bytesavailable_isbase) {
            qabstractsocket_bytesavailable_isbase = false;
            return QAbstractSocket::bytesAvailable();
        } else if (qabstractsocket_bytesavailable_callback != nullptr) {
            long long callback_ret = qabstractsocket_bytesavailable_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QAbstractSocket::bytesAvailable();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qabstractsocket_bytestowrite_isbase) {
            qabstractsocket_bytestowrite_isbase = false;
            return QAbstractSocket::bytesToWrite();
        } else if (qabstractsocket_bytestowrite_callback != nullptr) {
            long long callback_ret = qabstractsocket_bytestowrite_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QAbstractSocket::bytesToWrite();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadBufferSize(qint64 size) override {
        if (qabstractsocket_setreadbuffersize_isbase) {
            qabstractsocket_setreadbuffersize_isbase = false;
            QAbstractSocket::setReadBufferSize(size);
        } else if (qabstractsocket_setreadbuffersize_callback != nullptr) {
            long long cbval1 = static_cast<long long>(size);

            qabstractsocket_setreadbuffersize_callback(this, cbval1);
        } else {
            QAbstractSocket::setReadBufferSize(size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qintptr socketDescriptor() const override {
        if (qabstractsocket_socketdescriptor_isbase) {
            qabstractsocket_socketdescriptor_isbase = false;
            return QAbstractSocket::socketDescriptor();
        } else if (qabstractsocket_socketdescriptor_callback != nullptr) {
            intptr_t callback_ret = qabstractsocket_socketdescriptor_callback();
            return (qintptr)(callback_ret);
        } else {
            return QAbstractSocket::socketDescriptor();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QIODeviceBase::OpenMode openMode) override {
        if (qabstractsocket_setsocketdescriptor_isbase) {
            qabstractsocket_setsocketdescriptor_isbase = false;
            return QAbstractSocket::setSocketDescriptor(socketDescriptor, state, openMode);
        } else if (qabstractsocket_setsocketdescriptor_callback != nullptr) {
            qintptr socketDescriptor_ret = socketDescriptor;
            intptr_t cbval1 = (intptr_t)(socketDescriptor_ret);
            int cbval2 = static_cast<int>(state);
            int cbval3 = static_cast<int>(openMode);

            bool callback_ret = qabstractsocket_setsocketdescriptor_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QAbstractSocket::setSocketDescriptor(socketDescriptor, state, openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
        if (qabstractsocket_setsocketoption_isbase) {
            qabstractsocket_setsocketoption_isbase = false;
            QAbstractSocket::setSocketOption(option, value);
        } else if (qabstractsocket_setsocketoption_callback != nullptr) {
            int cbval1 = static_cast<int>(option);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            qabstractsocket_setsocketoption_callback(this, cbval1, cbval2);
        } else {
            QAbstractSocket::setSocketOption(option, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
        if (qabstractsocket_socketoption_isbase) {
            qabstractsocket_socketoption_isbase = false;
            return QAbstractSocket::socketOption(option);
        } else if (qabstractsocket_socketoption_callback != nullptr) {
            int cbval1 = static_cast<int>(option);

            QVariant* callback_ret = qabstractsocket_socketoption_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QAbstractSocket::socketOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qabstractsocket_close_isbase) {
            qabstractsocket_close_isbase = false;
            QAbstractSocket::close();
        } else if (qabstractsocket_close_callback != nullptr) {
            qabstractsocket_close_callback();
        } else {
            QAbstractSocket::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qabstractsocket_issequential_isbase) {
            qabstractsocket_issequential_isbase = false;
            return QAbstractSocket::isSequential();
        } else if (qabstractsocket_issequential_callback != nullptr) {
            bool callback_ret = qabstractsocket_issequential_callback();
            return callback_ret;
        } else {
            return QAbstractSocket::isSequential();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForConnected(int msecs) override {
        if (qabstractsocket_waitforconnected_isbase) {
            qabstractsocket_waitforconnected_isbase = false;
            return QAbstractSocket::waitForConnected(msecs);
        } else if (qabstractsocket_waitforconnected_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qabstractsocket_waitforconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractSocket::waitForConnected(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qabstractsocket_waitforreadyread_isbase) {
            qabstractsocket_waitforreadyread_isbase = false;
            return QAbstractSocket::waitForReadyRead(msecs);
        } else if (qabstractsocket_waitforreadyread_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qabstractsocket_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractSocket::waitForReadyRead(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qabstractsocket_waitforbyteswritten_isbase) {
            qabstractsocket_waitforbyteswritten_isbase = false;
            return QAbstractSocket::waitForBytesWritten(msecs);
        } else if (qabstractsocket_waitforbyteswritten_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qabstractsocket_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractSocket::waitForBytesWritten(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForDisconnected(int msecs) override {
        if (qabstractsocket_waitfordisconnected_isbase) {
            qabstractsocket_waitfordisconnected_isbase = false;
            return QAbstractSocket::waitForDisconnected(msecs);
        } else if (qabstractsocket_waitfordisconnected_callback != nullptr) {
            int cbval1 = msecs;

            bool callback_ret = qabstractsocket_waitfordisconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractSocket::waitForDisconnected(msecs);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qabstractsocket_readdata_isbase) {
            qabstractsocket_readdata_isbase = false;
            return QAbstractSocket::readData(data, maxlen);
        } else if (qabstractsocket_readdata_callback != nullptr) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = qabstractsocket_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QAbstractSocket::readData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qabstractsocket_readlinedata_isbase) {
            qabstractsocket_readlinedata_isbase = false;
            return QAbstractSocket::readLineData(data, maxlen);
        } else if (qabstractsocket_readlinedata_callback != nullptr) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = qabstractsocket_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QAbstractSocket::readLineData(data, maxlen);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qabstractsocket_skipdata_isbase) {
            qabstractsocket_skipdata_isbase = false;
            return QAbstractSocket::skipData(maxSize);
        } else if (qabstractsocket_skipdata_callback != nullptr) {
            long long cbval1 = static_cast<long long>(maxSize);

            long long callback_ret = qabstractsocket_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        } else {
            return QAbstractSocket::skipData(maxSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 lenVal) override {
        if (qabstractsocket_writedata_isbase) {
            qabstractsocket_writedata_isbase = false;
            return QAbstractSocket::writeData(data, lenVal);
        } else if (qabstractsocket_writedata_callback != nullptr) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(lenVal);

            long long callback_ret = qabstractsocket_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        } else {
            return QAbstractSocket::writeData(data, lenVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode mode) override {
        if (qabstractsocket_open_isbase) {
            qabstractsocket_open_isbase = false;
            return QAbstractSocket::open(mode);
        } else if (qabstractsocket_open_callback != nullptr) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = qabstractsocket_open_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractSocket::open(mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qabstractsocket_pos_isbase) {
            qabstractsocket_pos_isbase = false;
            return QAbstractSocket::pos();
        } else if (qabstractsocket_pos_callback != nullptr) {
            long long callback_ret = qabstractsocket_pos_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QAbstractSocket::pos();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qabstractsocket_size_isbase) {
            qabstractsocket_size_isbase = false;
            return QAbstractSocket::size();
        } else if (qabstractsocket_size_callback != nullptr) {
            long long callback_ret = qabstractsocket_size_callback();
            return static_cast<qint64>(callback_ret);
        } else {
            return QAbstractSocket::size();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qabstractsocket_seek_isbase) {
            qabstractsocket_seek_isbase = false;
            return QAbstractSocket::seek(pos);
        } else if (qabstractsocket_seek_callback != nullptr) {
            long long cbval1 = static_cast<long long>(pos);

            bool callback_ret = qabstractsocket_seek_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractSocket::seek(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qabstractsocket_atend_isbase) {
            qabstractsocket_atend_isbase = false;
            return QAbstractSocket::atEnd();
        } else if (qabstractsocket_atend_callback != nullptr) {
            bool callback_ret = qabstractsocket_atend_callback();
            return callback_ret;
        } else {
            return QAbstractSocket::atEnd();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qabstractsocket_reset_isbase) {
            qabstractsocket_reset_isbase = false;
            return QAbstractSocket::reset();
        } else if (qabstractsocket_reset_callback != nullptr) {
            bool callback_ret = qabstractsocket_reset_callback();
            return callback_ret;
        } else {
            return QAbstractSocket::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qabstractsocket_canreadline_isbase) {
            qabstractsocket_canreadline_isbase = false;
            return QAbstractSocket::canReadLine();
        } else if (qabstractsocket_canreadline_callback != nullptr) {
            bool callback_ret = qabstractsocket_canreadline_callback();
            return callback_ret;
        } else {
            return QAbstractSocket::canReadLine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractsocket_event_isbase) {
            qabstractsocket_event_isbase = false;
            return QAbstractSocket::event(event);
        } else if (qabstractsocket_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qabstractsocket_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractSocket::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractsocket_eventfilter_isbase) {
            qabstractsocket_eventfilter_isbase = false;
            return QAbstractSocket::eventFilter(watched, event);
        } else if (qabstractsocket_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qabstractsocket_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAbstractSocket::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractsocket_timerevent_isbase) {
            qabstractsocket_timerevent_isbase = false;
            QAbstractSocket::timerEvent(event);
        } else if (qabstractsocket_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qabstractsocket_timerevent_callback(this, cbval1);
        } else {
            QAbstractSocket::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractsocket_childevent_isbase) {
            qabstractsocket_childevent_isbase = false;
            QAbstractSocket::childEvent(event);
        } else if (qabstractsocket_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qabstractsocket_childevent_callback(this, cbval1);
        } else {
            QAbstractSocket::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractsocket_customevent_isbase) {
            qabstractsocket_customevent_isbase = false;
            QAbstractSocket::customEvent(event);
        } else if (qabstractsocket_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qabstractsocket_customevent_callback(this, cbval1);
        } else {
            QAbstractSocket::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractsocket_connectnotify_isbase) {
            qabstractsocket_connectnotify_isbase = false;
            QAbstractSocket::connectNotify(signal);
        } else if (qabstractsocket_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qabstractsocket_connectnotify_callback(this, cbval1);
        } else {
            QAbstractSocket::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractsocket_disconnectnotify_isbase) {
            qabstractsocket_disconnectnotify_isbase = false;
            QAbstractSocket::disconnectNotify(signal);
        } else if (qabstractsocket_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qabstractsocket_disconnectnotify_callback(this, cbval1);
        } else {
            QAbstractSocket::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSocketState(QAbstractSocket::SocketState state) {
        if (qabstractsocket_setsocketstate_isbase) {
            qabstractsocket_setsocketstate_isbase = false;
            QAbstractSocket::setSocketState(state);
        } else if (qabstractsocket_setsocketstate_callback != nullptr) {
            int cbval1 = static_cast<int>(state);

            qabstractsocket_setsocketstate_callback(this, cbval1);
        } else {
            QAbstractSocket::setSocketState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setSocketError(QAbstractSocket::SocketError socketError) {
        if (qabstractsocket_setsocketerror_isbase) {
            qabstractsocket_setsocketerror_isbase = false;
            QAbstractSocket::setSocketError(socketError);
        } else if (qabstractsocket_setsocketerror_callback != nullptr) {
            int cbval1 = static_cast<int>(socketError);

            qabstractsocket_setsocketerror_callback(this, cbval1);
        } else {
            QAbstractSocket::setSocketError(socketError);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLocalPort(quint16 port) {
        if (qabstractsocket_setlocalport_isbase) {
            qabstractsocket_setlocalport_isbase = false;
            QAbstractSocket::setLocalPort(port);
        } else if (qabstractsocket_setlocalport_callback != nullptr) {
            uint16_t cbval1 = static_cast<uint16_t>(port);

            qabstractsocket_setlocalport_callback(this, cbval1);
        } else {
            QAbstractSocket::setLocalPort(port);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLocalAddress(const QHostAddress& address) {
        if (qabstractsocket_setlocaladdress_isbase) {
            qabstractsocket_setlocaladdress_isbase = false;
            QAbstractSocket::setLocalAddress(address);
        } else if (qabstractsocket_setlocaladdress_callback != nullptr) {
            const QHostAddress& address_ret = address;
            // Cast returned reference into pointer
            QHostAddress* cbval1 = const_cast<QHostAddress*>(&address_ret);

            qabstractsocket_setlocaladdress_callback(this, cbval1);
        } else {
            QAbstractSocket::setLocalAddress(address);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPeerPort(quint16 port) {
        if (qabstractsocket_setpeerport_isbase) {
            qabstractsocket_setpeerport_isbase = false;
            QAbstractSocket::setPeerPort(port);
        } else if (qabstractsocket_setpeerport_callback != nullptr) {
            uint16_t cbval1 = static_cast<uint16_t>(port);

            qabstractsocket_setpeerport_callback(this, cbval1);
        } else {
            QAbstractSocket::setPeerPort(port);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPeerAddress(const QHostAddress& address) {
        if (qabstractsocket_setpeeraddress_isbase) {
            qabstractsocket_setpeeraddress_isbase = false;
            QAbstractSocket::setPeerAddress(address);
        } else if (qabstractsocket_setpeeraddress_callback != nullptr) {
            const QHostAddress& address_ret = address;
            // Cast returned reference into pointer
            QHostAddress* cbval1 = const_cast<QHostAddress*>(&address_ret);

            qabstractsocket_setpeeraddress_callback(this, cbval1);
        } else {
            QAbstractSocket::setPeerAddress(address);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPeerName(const QString& name) {
        if (qabstractsocket_setpeername_isbase) {
            qabstractsocket_setpeername_isbase = false;
            QAbstractSocket::setPeerName(name);
        } else if (qabstractsocket_setpeername_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc((name_str.len + 1) * sizeof(char)));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval1 = name_str;

            qabstractsocket_setpeername_callback(this, cbval1);
        } else {
            QAbstractSocket::setPeerName(name);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (qabstractsocket_setopenmode_isbase) {
            qabstractsocket_setopenmode_isbase = false;
            QAbstractSocket::setOpenMode(openMode);
        } else if (qabstractsocket_setopenmode_callback != nullptr) {
            int cbval1 = static_cast<int>(openMode);

            qabstractsocket_setopenmode_callback(this, cbval1);
        } else {
            QAbstractSocket::setOpenMode(openMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (qabstractsocket_seterrorstring_isbase) {
            qabstractsocket_seterrorstring_isbase = false;
            QAbstractSocket::setErrorString(errorString);
        } else if (qabstractsocket_seterrorstring_callback != nullptr) {
            const QString errorString_ret = errorString;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray errorString_b = errorString_ret.toUtf8();
            libqt_string errorString_str;
            errorString_str.len = errorString_b.length();
            errorString_str.data = static_cast<const char*>(malloc((errorString_str.len + 1) * sizeof(char)));
            memcpy((void*)errorString_str.data, errorString_b.data(), errorString_str.len);
            ((char*)errorString_str.data)[errorString_str.len] = '\0';
            libqt_string cbval1 = errorString_str;

            qabstractsocket_seterrorstring_callback(this, cbval1);
        } else {
            QAbstractSocket::setErrorString(errorString);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractsocket_sender_isbase) {
            qabstractsocket_sender_isbase = false;
            return QAbstractSocket::sender();
        } else if (qabstractsocket_sender_callback != nullptr) {
            QObject* callback_ret = qabstractsocket_sender_callback();
            return callback_ret;
        } else {
            return QAbstractSocket::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractsocket_sendersignalindex_isbase) {
            qabstractsocket_sendersignalindex_isbase = false;
            return QAbstractSocket::senderSignalIndex();
        } else if (qabstractsocket_sendersignalindex_callback != nullptr) {
            int callback_ret = qabstractsocket_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractSocket::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractsocket_receivers_isbase) {
            qabstractsocket_receivers_isbase = false;
            return QAbstractSocket::receivers(signal);
        } else if (qabstractsocket_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qabstractsocket_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAbstractSocket::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractsocket_issignalconnected_isbase) {
            qabstractsocket_issignalconnected_isbase = false;
            return QAbstractSocket::isSignalConnected(signal);
        } else if (qabstractsocket_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qabstractsocket_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAbstractSocket::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend long long QAbstractSocket_ReadData(QAbstractSocket* self, char* data, long long maxlen);
    friend long long QAbstractSocket_QBaseReadData(QAbstractSocket* self, char* data, long long maxlen);
    friend long long QAbstractSocket_ReadLineData(QAbstractSocket* self, char* data, long long maxlen);
    friend long long QAbstractSocket_QBaseReadLineData(QAbstractSocket* self, char* data, long long maxlen);
    friend long long QAbstractSocket_SkipData(QAbstractSocket* self, long long maxSize);
    friend long long QAbstractSocket_QBaseSkipData(QAbstractSocket* self, long long maxSize);
    friend long long QAbstractSocket_WriteData(QAbstractSocket* self, const char* data, long long lenVal);
    friend long long QAbstractSocket_QBaseWriteData(QAbstractSocket* self, const char* data, long long lenVal);
    friend void QAbstractSocket_TimerEvent(QAbstractSocket* self, QTimerEvent* event);
    friend void QAbstractSocket_QBaseTimerEvent(QAbstractSocket* self, QTimerEvent* event);
    friend void QAbstractSocket_ChildEvent(QAbstractSocket* self, QChildEvent* event);
    friend void QAbstractSocket_QBaseChildEvent(QAbstractSocket* self, QChildEvent* event);
    friend void QAbstractSocket_CustomEvent(QAbstractSocket* self, QEvent* event);
    friend void QAbstractSocket_QBaseCustomEvent(QAbstractSocket* self, QEvent* event);
    friend void QAbstractSocket_ConnectNotify(QAbstractSocket* self, const QMetaMethod* signal);
    friend void QAbstractSocket_QBaseConnectNotify(QAbstractSocket* self, const QMetaMethod* signal);
    friend void QAbstractSocket_DisconnectNotify(QAbstractSocket* self, const QMetaMethod* signal);
    friend void QAbstractSocket_QBaseDisconnectNotify(QAbstractSocket* self, const QMetaMethod* signal);
    friend void QAbstractSocket_SetSocketState(QAbstractSocket* self, int state);
    friend void QAbstractSocket_QBaseSetSocketState(QAbstractSocket* self, int state);
    friend void QAbstractSocket_SetSocketError(QAbstractSocket* self, int socketError);
    friend void QAbstractSocket_QBaseSetSocketError(QAbstractSocket* self, int socketError);
    friend void QAbstractSocket_SetLocalPort(QAbstractSocket* self, uint16_t port);
    friend void QAbstractSocket_QBaseSetLocalPort(QAbstractSocket* self, uint16_t port);
    friend void QAbstractSocket_SetLocalAddress(QAbstractSocket* self, const QHostAddress* address);
    friend void QAbstractSocket_QBaseSetLocalAddress(QAbstractSocket* self, const QHostAddress* address);
    friend void QAbstractSocket_SetPeerPort(QAbstractSocket* self, uint16_t port);
    friend void QAbstractSocket_QBaseSetPeerPort(QAbstractSocket* self, uint16_t port);
    friend void QAbstractSocket_SetPeerAddress(QAbstractSocket* self, const QHostAddress* address);
    friend void QAbstractSocket_QBaseSetPeerAddress(QAbstractSocket* self, const QHostAddress* address);
    friend void QAbstractSocket_SetPeerName(QAbstractSocket* self, const libqt_string name);
    friend void QAbstractSocket_QBaseSetPeerName(QAbstractSocket* self, const libqt_string name);
    friend void QAbstractSocket_SetOpenMode(QAbstractSocket* self, int openMode);
    friend void QAbstractSocket_QBaseSetOpenMode(QAbstractSocket* self, int openMode);
    friend void QAbstractSocket_SetErrorString(QAbstractSocket* self, const libqt_string errorString);
    friend void QAbstractSocket_QBaseSetErrorString(QAbstractSocket* self, const libqt_string errorString);
    friend QObject* QAbstractSocket_Sender(const QAbstractSocket* self);
    friend QObject* QAbstractSocket_QBaseSender(const QAbstractSocket* self);
    friend int QAbstractSocket_SenderSignalIndex(const QAbstractSocket* self);
    friend int QAbstractSocket_QBaseSenderSignalIndex(const QAbstractSocket* self);
    friend int QAbstractSocket_Receivers(const QAbstractSocket* self, const char* signal);
    friend int QAbstractSocket_QBaseReceivers(const QAbstractSocket* self, const char* signal);
    friend bool QAbstractSocket_IsSignalConnected(const QAbstractSocket* self, const QMetaMethod* signal);
    friend bool QAbstractSocket_QBaseIsSignalConnected(const QAbstractSocket* self, const QMetaMethod* signal);
};

#endif
