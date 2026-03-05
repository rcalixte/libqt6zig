#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQTCPSOCKET_H
#define SRC_NETWORKC_LIBVIRTUALQTCPSOCKET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QTcpSocket so that we can call protected methods
class VirtualQTcpSocket final : public QTcpSocket {

  public:
    // Virtual class boolean flag
    bool isVirtualQTcpSocket = true;

    // Virtual class public types (including callbacks)
    using QTcpSocket_MetaObject_Callback = QMetaObject* (*)();
    using QTcpSocket_Metacast_Callback = void* (*)(QTcpSocket*, const char*);
    using QTcpSocket_Metacall_Callback = int (*)(QTcpSocket*, int, int, void**);
    using QTcpSocket_Resume_Callback = void (*)();
    using QTcpSocket_Bind_Callback = bool (*)(QTcpSocket*, QHostAddress*, uint16_t, int);
    using QTcpSocket_ConnectToHost_Callback = void (*)(QTcpSocket*, const char*, uint16_t, int, int);
    using QTcpSocket_DisconnectFromHost_Callback = void (*)();
    using QTcpSocket_BytesAvailable_Callback = long long (*)();
    using QTcpSocket_BytesToWrite_Callback = long long (*)();
    using QTcpSocket_SetReadBufferSize_Callback = void (*)(QTcpSocket*, long long);
    using QTcpSocket_SocketDescriptor_Callback = intptr_t (*)();
    using QTcpSocket_SetSocketDescriptor_Callback = bool (*)(QTcpSocket*, intptr_t, int, int);
    using QTcpSocket_SetSocketOption_Callback = void (*)(QTcpSocket*, int, QVariant*);
    using QTcpSocket_SocketOption_Callback = QVariant* (*)(QTcpSocket*, int);
    using QTcpSocket_Close_Callback = void (*)();
    using QTcpSocket_IsSequential_Callback = bool (*)();
    using QTcpSocket_WaitForConnected_Callback = bool (*)(QTcpSocket*, int);
    using QTcpSocket_WaitForReadyRead_Callback = bool (*)(QTcpSocket*, int);
    using QTcpSocket_WaitForBytesWritten_Callback = bool (*)(QTcpSocket*, int);
    using QTcpSocket_WaitForDisconnected_Callback = bool (*)(QTcpSocket*, int);
    using QTcpSocket_ReadData_Callback = long long (*)(QTcpSocket*, char*, long long);
    using QTcpSocket_ReadLineData_Callback = long long (*)(QTcpSocket*, char*, long long);
    using QTcpSocket_SkipData_Callback = long long (*)(QTcpSocket*, long long);
    using QTcpSocket_WriteData_Callback = long long (*)(QTcpSocket*, const char*, long long);
    using QTcpSocket_Open_Callback = bool (*)(QTcpSocket*, int);
    using QTcpSocket_Pos_Callback = long long (*)();
    using QTcpSocket_Size_Callback = long long (*)();
    using QTcpSocket_Seek_Callback = bool (*)(QTcpSocket*, long long);
    using QTcpSocket_AtEnd_Callback = bool (*)();
    using QTcpSocket_Reset_Callback = bool (*)();
    using QTcpSocket_CanReadLine_Callback = bool (*)();
    using QTcpSocket_Event_Callback = bool (*)(QTcpSocket*, QEvent*);
    using QTcpSocket_EventFilter_Callback = bool (*)(QTcpSocket*, QObject*, QEvent*);
    using QTcpSocket_TimerEvent_Callback = void (*)(QTcpSocket*, QTimerEvent*);
    using QTcpSocket_ChildEvent_Callback = void (*)(QTcpSocket*, QChildEvent*);
    using QTcpSocket_CustomEvent_Callback = void (*)(QTcpSocket*, QEvent*);
    using QTcpSocket_ConnectNotify_Callback = void (*)(QTcpSocket*, QMetaMethod*);
    using QTcpSocket_DisconnectNotify_Callback = void (*)(QTcpSocket*, QMetaMethod*);
    using QTcpSocket_SetSocketState_Callback = void (*)(QTcpSocket*, int);
    using QTcpSocket_SetSocketError_Callback = void (*)(QTcpSocket*, int);
    using QTcpSocket_SetLocalPort_Callback = void (*)(QTcpSocket*, uint16_t);
    using QTcpSocket_SetLocalAddress_Callback = void (*)(QTcpSocket*, QHostAddress*);
    using QTcpSocket_SetPeerPort_Callback = void (*)(QTcpSocket*, uint16_t);
    using QTcpSocket_SetPeerAddress_Callback = void (*)(QTcpSocket*, QHostAddress*);
    using QTcpSocket_SetPeerName_Callback = void (*)(QTcpSocket*, const char*);
    using QTcpSocket_SetOpenMode_Callback = void (*)(QTcpSocket*, int);
    using QTcpSocket_SetErrorString_Callback = void (*)(QTcpSocket*, const char*);
    using QTcpSocket_Sender_Callback = QObject* (*)();
    using QTcpSocket_SenderSignalIndex_Callback = int (*)();
    using QTcpSocket_Receivers_Callback = int (*)(const QTcpSocket*, const char*);
    using QTcpSocket_IsSignalConnected_Callback = bool (*)(const QTcpSocket*, QMetaMethod*);

  protected:
    // Instance callback storage
    QTcpSocket_MetaObject_Callback qtcpsocket_metaobject_callback = nullptr;
    QTcpSocket_Metacast_Callback qtcpsocket_metacast_callback = nullptr;
    QTcpSocket_Metacall_Callback qtcpsocket_metacall_callback = nullptr;
    QTcpSocket_Resume_Callback qtcpsocket_resume_callback = nullptr;
    QTcpSocket_Bind_Callback qtcpsocket_bind_callback = nullptr;
    QTcpSocket_ConnectToHost_Callback qtcpsocket_connecttohost_callback = nullptr;
    QTcpSocket_DisconnectFromHost_Callback qtcpsocket_disconnectfromhost_callback = nullptr;
    QTcpSocket_BytesAvailable_Callback qtcpsocket_bytesavailable_callback = nullptr;
    QTcpSocket_BytesToWrite_Callback qtcpsocket_bytestowrite_callback = nullptr;
    QTcpSocket_SetReadBufferSize_Callback qtcpsocket_setreadbuffersize_callback = nullptr;
    QTcpSocket_SocketDescriptor_Callback qtcpsocket_socketdescriptor_callback = nullptr;
    QTcpSocket_SetSocketDescriptor_Callback qtcpsocket_setsocketdescriptor_callback = nullptr;
    QTcpSocket_SetSocketOption_Callback qtcpsocket_setsocketoption_callback = nullptr;
    QTcpSocket_SocketOption_Callback qtcpsocket_socketoption_callback = nullptr;
    QTcpSocket_Close_Callback qtcpsocket_close_callback = nullptr;
    QTcpSocket_IsSequential_Callback qtcpsocket_issequential_callback = nullptr;
    QTcpSocket_WaitForConnected_Callback qtcpsocket_waitforconnected_callback = nullptr;
    QTcpSocket_WaitForReadyRead_Callback qtcpsocket_waitforreadyread_callback = nullptr;
    QTcpSocket_WaitForBytesWritten_Callback qtcpsocket_waitforbyteswritten_callback = nullptr;
    QTcpSocket_WaitForDisconnected_Callback qtcpsocket_waitfordisconnected_callback = nullptr;
    QTcpSocket_ReadData_Callback qtcpsocket_readdata_callback = nullptr;
    QTcpSocket_ReadLineData_Callback qtcpsocket_readlinedata_callback = nullptr;
    QTcpSocket_SkipData_Callback qtcpsocket_skipdata_callback = nullptr;
    QTcpSocket_WriteData_Callback qtcpsocket_writedata_callback = nullptr;
    QTcpSocket_Open_Callback qtcpsocket_open_callback = nullptr;
    QTcpSocket_Pos_Callback qtcpsocket_pos_callback = nullptr;
    QTcpSocket_Size_Callback qtcpsocket_size_callback = nullptr;
    QTcpSocket_Seek_Callback qtcpsocket_seek_callback = nullptr;
    QTcpSocket_AtEnd_Callback qtcpsocket_atend_callback = nullptr;
    QTcpSocket_Reset_Callback qtcpsocket_reset_callback = nullptr;
    QTcpSocket_CanReadLine_Callback qtcpsocket_canreadline_callback = nullptr;
    QTcpSocket_Event_Callback qtcpsocket_event_callback = nullptr;
    QTcpSocket_EventFilter_Callback qtcpsocket_eventfilter_callback = nullptr;
    QTcpSocket_TimerEvent_Callback qtcpsocket_timerevent_callback = nullptr;
    QTcpSocket_ChildEvent_Callback qtcpsocket_childevent_callback = nullptr;
    QTcpSocket_CustomEvent_Callback qtcpsocket_customevent_callback = nullptr;
    QTcpSocket_ConnectNotify_Callback qtcpsocket_connectnotify_callback = nullptr;
    QTcpSocket_DisconnectNotify_Callback qtcpsocket_disconnectnotify_callback = nullptr;
    QTcpSocket_SetSocketState_Callback qtcpsocket_setsocketstate_callback = nullptr;
    QTcpSocket_SetSocketError_Callback qtcpsocket_setsocketerror_callback = nullptr;
    QTcpSocket_SetLocalPort_Callback qtcpsocket_setlocalport_callback = nullptr;
    QTcpSocket_SetLocalAddress_Callback qtcpsocket_setlocaladdress_callback = nullptr;
    QTcpSocket_SetPeerPort_Callback qtcpsocket_setpeerport_callback = nullptr;
    QTcpSocket_SetPeerAddress_Callback qtcpsocket_setpeeraddress_callback = nullptr;
    QTcpSocket_SetPeerName_Callback qtcpsocket_setpeername_callback = nullptr;
    QTcpSocket_SetOpenMode_Callback qtcpsocket_setopenmode_callback = nullptr;
    QTcpSocket_SetErrorString_Callback qtcpsocket_seterrorstring_callback = nullptr;
    QTcpSocket_Sender_Callback qtcpsocket_sender_callback = nullptr;
    QTcpSocket_SenderSignalIndex_Callback qtcpsocket_sendersignalindex_callback = nullptr;
    QTcpSocket_Receivers_Callback qtcpsocket_receivers_callback = nullptr;
    QTcpSocket_IsSignalConnected_Callback qtcpsocket_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtcpsocket_metaobject_isbase = false;
    mutable bool qtcpsocket_metacast_isbase = false;
    mutable bool qtcpsocket_metacall_isbase = false;
    mutable bool qtcpsocket_resume_isbase = false;
    mutable bool qtcpsocket_bind_isbase = false;
    mutable bool qtcpsocket_connecttohost_isbase = false;
    mutable bool qtcpsocket_disconnectfromhost_isbase = false;
    mutable bool qtcpsocket_bytesavailable_isbase = false;
    mutable bool qtcpsocket_bytestowrite_isbase = false;
    mutable bool qtcpsocket_setreadbuffersize_isbase = false;
    mutable bool qtcpsocket_socketdescriptor_isbase = false;
    mutable bool qtcpsocket_setsocketdescriptor_isbase = false;
    mutable bool qtcpsocket_setsocketoption_isbase = false;
    mutable bool qtcpsocket_socketoption_isbase = false;
    mutable bool qtcpsocket_close_isbase = false;
    mutable bool qtcpsocket_issequential_isbase = false;
    mutable bool qtcpsocket_waitforconnected_isbase = false;
    mutable bool qtcpsocket_waitforreadyread_isbase = false;
    mutable bool qtcpsocket_waitforbyteswritten_isbase = false;
    mutable bool qtcpsocket_waitfordisconnected_isbase = false;
    mutable bool qtcpsocket_readdata_isbase = false;
    mutable bool qtcpsocket_readlinedata_isbase = false;
    mutable bool qtcpsocket_skipdata_isbase = false;
    mutable bool qtcpsocket_writedata_isbase = false;
    mutable bool qtcpsocket_open_isbase = false;
    mutable bool qtcpsocket_pos_isbase = false;
    mutable bool qtcpsocket_size_isbase = false;
    mutable bool qtcpsocket_seek_isbase = false;
    mutable bool qtcpsocket_atend_isbase = false;
    mutable bool qtcpsocket_reset_isbase = false;
    mutable bool qtcpsocket_canreadline_isbase = false;
    mutable bool qtcpsocket_event_isbase = false;
    mutable bool qtcpsocket_eventfilter_isbase = false;
    mutable bool qtcpsocket_timerevent_isbase = false;
    mutable bool qtcpsocket_childevent_isbase = false;
    mutable bool qtcpsocket_customevent_isbase = false;
    mutable bool qtcpsocket_connectnotify_isbase = false;
    mutable bool qtcpsocket_disconnectnotify_isbase = false;
    mutable bool qtcpsocket_setsocketstate_isbase = false;
    mutable bool qtcpsocket_setsocketerror_isbase = false;
    mutable bool qtcpsocket_setlocalport_isbase = false;
    mutable bool qtcpsocket_setlocaladdress_isbase = false;
    mutable bool qtcpsocket_setpeerport_isbase = false;
    mutable bool qtcpsocket_setpeeraddress_isbase = false;
    mutable bool qtcpsocket_setpeername_isbase = false;
    mutable bool qtcpsocket_setopenmode_isbase = false;
    mutable bool qtcpsocket_seterrorstring_isbase = false;
    mutable bool qtcpsocket_sender_isbase = false;
    mutable bool qtcpsocket_sendersignalindex_isbase = false;
    mutable bool qtcpsocket_receivers_isbase = false;
    mutable bool qtcpsocket_issignalconnected_isbase = false;

  public:
    VirtualQTcpSocket() : QTcpSocket() {};
    VirtualQTcpSocket(QObject* parent) : QTcpSocket(parent) {};

    // Callback setters
    inline void setQTcpSocket_MetaObject_Callback(QTcpSocket_MetaObject_Callback cb) { qtcpsocket_metaobject_callback = cb; }
    inline void setQTcpSocket_Metacast_Callback(QTcpSocket_Metacast_Callback cb) { qtcpsocket_metacast_callback = cb; }
    inline void setQTcpSocket_Metacall_Callback(QTcpSocket_Metacall_Callback cb) { qtcpsocket_metacall_callback = cb; }
    inline void setQTcpSocket_Resume_Callback(QTcpSocket_Resume_Callback cb) { qtcpsocket_resume_callback = cb; }
    inline void setQTcpSocket_Bind_Callback(QTcpSocket_Bind_Callback cb) { qtcpsocket_bind_callback = cb; }
    inline void setQTcpSocket_ConnectToHost_Callback(QTcpSocket_ConnectToHost_Callback cb) { qtcpsocket_connecttohost_callback = cb; }
    inline void setQTcpSocket_DisconnectFromHost_Callback(QTcpSocket_DisconnectFromHost_Callback cb) { qtcpsocket_disconnectfromhost_callback = cb; }
    inline void setQTcpSocket_BytesAvailable_Callback(QTcpSocket_BytesAvailable_Callback cb) { qtcpsocket_bytesavailable_callback = cb; }
    inline void setQTcpSocket_BytesToWrite_Callback(QTcpSocket_BytesToWrite_Callback cb) { qtcpsocket_bytestowrite_callback = cb; }
    inline void setQTcpSocket_SetReadBufferSize_Callback(QTcpSocket_SetReadBufferSize_Callback cb) { qtcpsocket_setreadbuffersize_callback = cb; }
    inline void setQTcpSocket_SocketDescriptor_Callback(QTcpSocket_SocketDescriptor_Callback cb) { qtcpsocket_socketdescriptor_callback = cb; }
    inline void setQTcpSocket_SetSocketDescriptor_Callback(QTcpSocket_SetSocketDescriptor_Callback cb) { qtcpsocket_setsocketdescriptor_callback = cb; }
    inline void setQTcpSocket_SetSocketOption_Callback(QTcpSocket_SetSocketOption_Callback cb) { qtcpsocket_setsocketoption_callback = cb; }
    inline void setQTcpSocket_SocketOption_Callback(QTcpSocket_SocketOption_Callback cb) { qtcpsocket_socketoption_callback = cb; }
    inline void setQTcpSocket_Close_Callback(QTcpSocket_Close_Callback cb) { qtcpsocket_close_callback = cb; }
    inline void setQTcpSocket_IsSequential_Callback(QTcpSocket_IsSequential_Callback cb) { qtcpsocket_issequential_callback = cb; }
    inline void setQTcpSocket_WaitForConnected_Callback(QTcpSocket_WaitForConnected_Callback cb) { qtcpsocket_waitforconnected_callback = cb; }
    inline void setQTcpSocket_WaitForReadyRead_Callback(QTcpSocket_WaitForReadyRead_Callback cb) { qtcpsocket_waitforreadyread_callback = cb; }
    inline void setQTcpSocket_WaitForBytesWritten_Callback(QTcpSocket_WaitForBytesWritten_Callback cb) { qtcpsocket_waitforbyteswritten_callback = cb; }
    inline void setQTcpSocket_WaitForDisconnected_Callback(QTcpSocket_WaitForDisconnected_Callback cb) { qtcpsocket_waitfordisconnected_callback = cb; }
    inline void setQTcpSocket_ReadData_Callback(QTcpSocket_ReadData_Callback cb) { qtcpsocket_readdata_callback = cb; }
    inline void setQTcpSocket_ReadLineData_Callback(QTcpSocket_ReadLineData_Callback cb) { qtcpsocket_readlinedata_callback = cb; }
    inline void setQTcpSocket_SkipData_Callback(QTcpSocket_SkipData_Callback cb) { qtcpsocket_skipdata_callback = cb; }
    inline void setQTcpSocket_WriteData_Callback(QTcpSocket_WriteData_Callback cb) { qtcpsocket_writedata_callback = cb; }
    inline void setQTcpSocket_Open_Callback(QTcpSocket_Open_Callback cb) { qtcpsocket_open_callback = cb; }
    inline void setQTcpSocket_Pos_Callback(QTcpSocket_Pos_Callback cb) { qtcpsocket_pos_callback = cb; }
    inline void setQTcpSocket_Size_Callback(QTcpSocket_Size_Callback cb) { qtcpsocket_size_callback = cb; }
    inline void setQTcpSocket_Seek_Callback(QTcpSocket_Seek_Callback cb) { qtcpsocket_seek_callback = cb; }
    inline void setQTcpSocket_AtEnd_Callback(QTcpSocket_AtEnd_Callback cb) { qtcpsocket_atend_callback = cb; }
    inline void setQTcpSocket_Reset_Callback(QTcpSocket_Reset_Callback cb) { qtcpsocket_reset_callback = cb; }
    inline void setQTcpSocket_CanReadLine_Callback(QTcpSocket_CanReadLine_Callback cb) { qtcpsocket_canreadline_callback = cb; }
    inline void setQTcpSocket_Event_Callback(QTcpSocket_Event_Callback cb) { qtcpsocket_event_callback = cb; }
    inline void setQTcpSocket_EventFilter_Callback(QTcpSocket_EventFilter_Callback cb) { qtcpsocket_eventfilter_callback = cb; }
    inline void setQTcpSocket_TimerEvent_Callback(QTcpSocket_TimerEvent_Callback cb) { qtcpsocket_timerevent_callback = cb; }
    inline void setQTcpSocket_ChildEvent_Callback(QTcpSocket_ChildEvent_Callback cb) { qtcpsocket_childevent_callback = cb; }
    inline void setQTcpSocket_CustomEvent_Callback(QTcpSocket_CustomEvent_Callback cb) { qtcpsocket_customevent_callback = cb; }
    inline void setQTcpSocket_ConnectNotify_Callback(QTcpSocket_ConnectNotify_Callback cb) { qtcpsocket_connectnotify_callback = cb; }
    inline void setQTcpSocket_DisconnectNotify_Callback(QTcpSocket_DisconnectNotify_Callback cb) { qtcpsocket_disconnectnotify_callback = cb; }
    inline void setQTcpSocket_SetSocketState_Callback(QTcpSocket_SetSocketState_Callback cb) { qtcpsocket_setsocketstate_callback = cb; }
    inline void setQTcpSocket_SetSocketError_Callback(QTcpSocket_SetSocketError_Callback cb) { qtcpsocket_setsocketerror_callback = cb; }
    inline void setQTcpSocket_SetLocalPort_Callback(QTcpSocket_SetLocalPort_Callback cb) { qtcpsocket_setlocalport_callback = cb; }
    inline void setQTcpSocket_SetLocalAddress_Callback(QTcpSocket_SetLocalAddress_Callback cb) { qtcpsocket_setlocaladdress_callback = cb; }
    inline void setQTcpSocket_SetPeerPort_Callback(QTcpSocket_SetPeerPort_Callback cb) { qtcpsocket_setpeerport_callback = cb; }
    inline void setQTcpSocket_SetPeerAddress_Callback(QTcpSocket_SetPeerAddress_Callback cb) { qtcpsocket_setpeeraddress_callback = cb; }
    inline void setQTcpSocket_SetPeerName_Callback(QTcpSocket_SetPeerName_Callback cb) { qtcpsocket_setpeername_callback = cb; }
    inline void setQTcpSocket_SetOpenMode_Callback(QTcpSocket_SetOpenMode_Callback cb) { qtcpsocket_setopenmode_callback = cb; }
    inline void setQTcpSocket_SetErrorString_Callback(QTcpSocket_SetErrorString_Callback cb) { qtcpsocket_seterrorstring_callback = cb; }
    inline void setQTcpSocket_Sender_Callback(QTcpSocket_Sender_Callback cb) { qtcpsocket_sender_callback = cb; }
    inline void setQTcpSocket_SenderSignalIndex_Callback(QTcpSocket_SenderSignalIndex_Callback cb) { qtcpsocket_sendersignalindex_callback = cb; }
    inline void setQTcpSocket_Receivers_Callback(QTcpSocket_Receivers_Callback cb) { qtcpsocket_receivers_callback = cb; }
    inline void setQTcpSocket_IsSignalConnected_Callback(QTcpSocket_IsSignalConnected_Callback cb) { qtcpsocket_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQTcpSocket_MetaObject_IsBase(bool value) const { qtcpsocket_metaobject_isbase = value; }
    inline void setQTcpSocket_Metacast_IsBase(bool value) const { qtcpsocket_metacast_isbase = value; }
    inline void setQTcpSocket_Metacall_IsBase(bool value) const { qtcpsocket_metacall_isbase = value; }
    inline void setQTcpSocket_Resume_IsBase(bool value) const { qtcpsocket_resume_isbase = value; }
    inline void setQTcpSocket_Bind_IsBase(bool value) const { qtcpsocket_bind_isbase = value; }
    inline void setQTcpSocket_ConnectToHost_IsBase(bool value) const { qtcpsocket_connecttohost_isbase = value; }
    inline void setQTcpSocket_DisconnectFromHost_IsBase(bool value) const { qtcpsocket_disconnectfromhost_isbase = value; }
    inline void setQTcpSocket_BytesAvailable_IsBase(bool value) const { qtcpsocket_bytesavailable_isbase = value; }
    inline void setQTcpSocket_BytesToWrite_IsBase(bool value) const { qtcpsocket_bytestowrite_isbase = value; }
    inline void setQTcpSocket_SetReadBufferSize_IsBase(bool value) const { qtcpsocket_setreadbuffersize_isbase = value; }
    inline void setQTcpSocket_SocketDescriptor_IsBase(bool value) const { qtcpsocket_socketdescriptor_isbase = value; }
    inline void setQTcpSocket_SetSocketDescriptor_IsBase(bool value) const { qtcpsocket_setsocketdescriptor_isbase = value; }
    inline void setQTcpSocket_SetSocketOption_IsBase(bool value) const { qtcpsocket_setsocketoption_isbase = value; }
    inline void setQTcpSocket_SocketOption_IsBase(bool value) const { qtcpsocket_socketoption_isbase = value; }
    inline void setQTcpSocket_Close_IsBase(bool value) const { qtcpsocket_close_isbase = value; }
    inline void setQTcpSocket_IsSequential_IsBase(bool value) const { qtcpsocket_issequential_isbase = value; }
    inline void setQTcpSocket_WaitForConnected_IsBase(bool value) const { qtcpsocket_waitforconnected_isbase = value; }
    inline void setQTcpSocket_WaitForReadyRead_IsBase(bool value) const { qtcpsocket_waitforreadyread_isbase = value; }
    inline void setQTcpSocket_WaitForBytesWritten_IsBase(bool value) const { qtcpsocket_waitforbyteswritten_isbase = value; }
    inline void setQTcpSocket_WaitForDisconnected_IsBase(bool value) const { qtcpsocket_waitfordisconnected_isbase = value; }
    inline void setQTcpSocket_ReadData_IsBase(bool value) const { qtcpsocket_readdata_isbase = value; }
    inline void setQTcpSocket_ReadLineData_IsBase(bool value) const { qtcpsocket_readlinedata_isbase = value; }
    inline void setQTcpSocket_SkipData_IsBase(bool value) const { qtcpsocket_skipdata_isbase = value; }
    inline void setQTcpSocket_WriteData_IsBase(bool value) const { qtcpsocket_writedata_isbase = value; }
    inline void setQTcpSocket_Open_IsBase(bool value) const { qtcpsocket_open_isbase = value; }
    inline void setQTcpSocket_Pos_IsBase(bool value) const { qtcpsocket_pos_isbase = value; }
    inline void setQTcpSocket_Size_IsBase(bool value) const { qtcpsocket_size_isbase = value; }
    inline void setQTcpSocket_Seek_IsBase(bool value) const { qtcpsocket_seek_isbase = value; }
    inline void setQTcpSocket_AtEnd_IsBase(bool value) const { qtcpsocket_atend_isbase = value; }
    inline void setQTcpSocket_Reset_IsBase(bool value) const { qtcpsocket_reset_isbase = value; }
    inline void setQTcpSocket_CanReadLine_IsBase(bool value) const { qtcpsocket_canreadline_isbase = value; }
    inline void setQTcpSocket_Event_IsBase(bool value) const { qtcpsocket_event_isbase = value; }
    inline void setQTcpSocket_EventFilter_IsBase(bool value) const { qtcpsocket_eventfilter_isbase = value; }
    inline void setQTcpSocket_TimerEvent_IsBase(bool value) const { qtcpsocket_timerevent_isbase = value; }
    inline void setQTcpSocket_ChildEvent_IsBase(bool value) const { qtcpsocket_childevent_isbase = value; }
    inline void setQTcpSocket_CustomEvent_IsBase(bool value) const { qtcpsocket_customevent_isbase = value; }
    inline void setQTcpSocket_ConnectNotify_IsBase(bool value) const { qtcpsocket_connectnotify_isbase = value; }
    inline void setQTcpSocket_DisconnectNotify_IsBase(bool value) const { qtcpsocket_disconnectnotify_isbase = value; }
    inline void setQTcpSocket_SetSocketState_IsBase(bool value) const { qtcpsocket_setsocketstate_isbase = value; }
    inline void setQTcpSocket_SetSocketError_IsBase(bool value) const { qtcpsocket_setsocketerror_isbase = value; }
    inline void setQTcpSocket_SetLocalPort_IsBase(bool value) const { qtcpsocket_setlocalport_isbase = value; }
    inline void setQTcpSocket_SetLocalAddress_IsBase(bool value) const { qtcpsocket_setlocaladdress_isbase = value; }
    inline void setQTcpSocket_SetPeerPort_IsBase(bool value) const { qtcpsocket_setpeerport_isbase = value; }
    inline void setQTcpSocket_SetPeerAddress_IsBase(bool value) const { qtcpsocket_setpeeraddress_isbase = value; }
    inline void setQTcpSocket_SetPeerName_IsBase(bool value) const { qtcpsocket_setpeername_isbase = value; }
    inline void setQTcpSocket_SetOpenMode_IsBase(bool value) const { qtcpsocket_setopenmode_isbase = value; }
    inline void setQTcpSocket_SetErrorString_IsBase(bool value) const { qtcpsocket_seterrorstring_isbase = value; }
    inline void setQTcpSocket_Sender_IsBase(bool value) const { qtcpsocket_sender_isbase = value; }
    inline void setQTcpSocket_SenderSignalIndex_IsBase(bool value) const { qtcpsocket_sendersignalindex_isbase = value; }
    inline void setQTcpSocket_Receivers_IsBase(bool value) const { qtcpsocket_receivers_isbase = value; }
    inline void setQTcpSocket_IsSignalConnected_IsBase(bool value) const { qtcpsocket_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtcpsocket_metaobject_isbase) {
            qtcpsocket_metaobject_isbase = false;
            return QTcpSocket::metaObject();
        }
        auto metaobject_cb = qtcpsocket_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QTcpSocket::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtcpsocket_metacast_isbase) {
            qtcpsocket_metacast_isbase = false;
            return QTcpSocket::qt_metacast(param1);
        }
        auto metacast_cb = qtcpsocket_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QTcpSocket::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtcpsocket_metacall_isbase) {
            qtcpsocket_metacall_isbase = false;
            return QTcpSocket::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qtcpsocket_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTcpSocket::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resume() override {
        if (qtcpsocket_resume_isbase) {
            qtcpsocket_resume_isbase = false;
            QTcpSocket::resume();
            return;
        }
        auto resume_cb = qtcpsocket_resume_callback;
        if (resume_cb) {
            resume_cb();
            return;
        }
        QTcpSocket::resume();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool bind(const QHostAddress& address, quint16 port, QFlags<QAbstractSocket::BindFlag> mode) override {
        if (qtcpsocket_bind_isbase) {
            qtcpsocket_bind_isbase = false;
            return QTcpSocket::bind(address, port, mode);
        }
        auto bind_cb = qtcpsocket_bind_callback;
        if (bind_cb) {
            const QHostAddress& address_ret = address;
            // Cast returned reference into pointer
            QHostAddress* cbval1 = const_cast<QHostAddress*>(&address_ret);
            uint16_t cbval2 = static_cast<uint16_t>(port);
            int cbval3 = static_cast<int>(mode);

            bool callback_ret = bind_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QTcpSocket::bind(address, port, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectToHost(const QString& hostName, quint16 port, QFlags<QIODeviceBase::OpenModeFlag> mode, QAbstractSocket::NetworkLayerProtocol protocol) override {
        if (qtcpsocket_connecttohost_isbase) {
            qtcpsocket_connecttohost_isbase = false;
            QTcpSocket::connectToHost(hostName, port, mode, protocol);
            return;
        }
        auto connecttohost_cb = qtcpsocket_connecttohost_callback;
        if (connecttohost_cb) {
            const QString hostName_ret = hostName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray hostName_b = hostName_ret.toUtf8();
            auto hostName_str_len = hostName_b.length();
            const char* hostName_str = static_cast<const char*>(malloc(hostName_str_len + 1));
            memcpy((void*)hostName_str, hostName_b.data(), hostName_str_len);
            ((char*)hostName_str)[hostName_str_len] = '\0';
            const char* cbval1 = hostName_str;
            uint16_t cbval2 = static_cast<uint16_t>(port);
            int cbval3 = static_cast<int>(mode);
            int cbval4 = static_cast<int>(protocol);

            connecttohost_cb(this, cbval1, cbval2, cbval3, cbval4);
            libqt_free(hostName_str);
            return;
        }
        QTcpSocket::connectToHost(hostName, port, mode, protocol);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectFromHost() override {
        if (qtcpsocket_disconnectfromhost_isbase) {
            qtcpsocket_disconnectfromhost_isbase = false;
            QTcpSocket::disconnectFromHost();
            return;
        }
        auto disconnectfromhost_cb = qtcpsocket_disconnectfromhost_callback;
        if (disconnectfromhost_cb) {
            disconnectfromhost_cb();
            return;
        }
        QTcpSocket::disconnectFromHost();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qtcpsocket_bytesavailable_isbase) {
            qtcpsocket_bytesavailable_isbase = false;
            return QTcpSocket::bytesAvailable();
        }
        auto bytesavailable_cb = qtcpsocket_bytesavailable_callback;
        if (bytesavailable_cb) {
            long long callback_ret = bytesavailable_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QTcpSocket::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qtcpsocket_bytestowrite_isbase) {
            qtcpsocket_bytestowrite_isbase = false;
            return QTcpSocket::bytesToWrite();
        }
        auto bytestowrite_cb = qtcpsocket_bytestowrite_callback;
        if (bytestowrite_cb) {
            long long callback_ret = bytestowrite_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QTcpSocket::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadBufferSize(qint64 size) override {
        if (qtcpsocket_setreadbuffersize_isbase) {
            qtcpsocket_setreadbuffersize_isbase = false;
            QTcpSocket::setReadBufferSize(size);
            return;
        }
        auto setreadbuffersize_cb = qtcpsocket_setreadbuffersize_callback;
        if (setreadbuffersize_cb) {
            long long cbval1 = static_cast<long long>(size);

            setreadbuffersize_cb(this, cbval1);
            return;
        }
        QTcpSocket::setReadBufferSize(size);
    }

    // Virtual method for C ABI access and custom callback
    virtual qintptr socketDescriptor() const override {
        if (qtcpsocket_socketdescriptor_isbase) {
            qtcpsocket_socketdescriptor_isbase = false;
            return QTcpSocket::socketDescriptor();
        }
        auto socketdescriptor_cb = qtcpsocket_socketdescriptor_callback;
        if (socketdescriptor_cb) {
            intptr_t callback_ret = socketdescriptor_cb();
            return (qintptr)(callback_ret);
        }
        return QTcpSocket::socketDescriptor();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QFlags<QIODeviceBase::OpenModeFlag> openMode) override {
        if (qtcpsocket_setsocketdescriptor_isbase) {
            qtcpsocket_setsocketdescriptor_isbase = false;
            return QTcpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
        }
        auto setsocketdescriptor_cb = qtcpsocket_setsocketdescriptor_callback;
        if (setsocketdescriptor_cb) {
            qintptr socketDescriptor_ret = socketDescriptor;
            intptr_t cbval1 = (intptr_t)(socketDescriptor_ret);
            int cbval2 = static_cast<int>(state);
            int cbval3 = static_cast<int>(openMode);

            bool callback_ret = setsocketdescriptor_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QTcpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
        if (qtcpsocket_setsocketoption_isbase) {
            qtcpsocket_setsocketoption_isbase = false;
            QTcpSocket::setSocketOption(option, value);
            return;
        }
        auto setsocketoption_cb = qtcpsocket_setsocketoption_callback;
        if (setsocketoption_cb) {
            int cbval1 = static_cast<int>(option);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);

            setsocketoption_cb(this, cbval1, cbval2);
            return;
        }
        QTcpSocket::setSocketOption(option, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
        if (qtcpsocket_socketoption_isbase) {
            qtcpsocket_socketoption_isbase = false;
            return QTcpSocket::socketOption(option);
        }
        auto socketoption_cb = qtcpsocket_socketoption_callback;
        if (socketoption_cb) {
            int cbval1 = static_cast<int>(option);

            QVariant* callback_ret = socketoption_cb(this, cbval1);
            return *callback_ret;
        }
        return QTcpSocket::socketOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qtcpsocket_close_isbase) {
            qtcpsocket_close_isbase = false;
            QTcpSocket::close();
            return;
        }
        auto close_cb = qtcpsocket_close_callback;
        if (close_cb) {
            close_cb();
            return;
        }
        QTcpSocket::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qtcpsocket_issequential_isbase) {
            qtcpsocket_issequential_isbase = false;
            return QTcpSocket::isSequential();
        }
        auto issequential_cb = qtcpsocket_issequential_callback;
        if (issequential_cb) {
            bool callback_ret = issequential_cb();
            return callback_ret;
        }
        return QTcpSocket::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForConnected(int msecs) override {
        if (qtcpsocket_waitforconnected_isbase) {
            qtcpsocket_waitforconnected_isbase = false;
            return QTcpSocket::waitForConnected(msecs);
        }
        auto waitforconnected_cb = qtcpsocket_waitforconnected_callback;
        if (waitforconnected_cb) {
            int cbval1 = msecs;

            bool callback_ret = waitforconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QTcpSocket::waitForConnected(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qtcpsocket_waitforreadyread_isbase) {
            qtcpsocket_waitforreadyread_isbase = false;
            return QTcpSocket::waitForReadyRead(msecs);
        }
        auto waitforreadyread_cb = qtcpsocket_waitforreadyread_callback;
        if (waitforreadyread_cb) {
            int cbval1 = msecs;

            bool callback_ret = waitforreadyread_cb(this, cbval1);
            return callback_ret;
        }
        return QTcpSocket::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qtcpsocket_waitforbyteswritten_isbase) {
            qtcpsocket_waitforbyteswritten_isbase = false;
            return QTcpSocket::waitForBytesWritten(msecs);
        }
        auto waitforbyteswritten_cb = qtcpsocket_waitforbyteswritten_callback;
        if (waitforbyteswritten_cb) {
            int cbval1 = msecs;

            bool callback_ret = waitforbyteswritten_cb(this, cbval1);
            return callback_ret;
        }
        return QTcpSocket::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForDisconnected(int msecs) override {
        if (qtcpsocket_waitfordisconnected_isbase) {
            qtcpsocket_waitfordisconnected_isbase = false;
            return QTcpSocket::waitForDisconnected(msecs);
        }
        auto waitfordisconnected_cb = qtcpsocket_waitfordisconnected_callback;
        if (waitfordisconnected_cb) {
            int cbval1 = msecs;

            bool callback_ret = waitfordisconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QTcpSocket::waitForDisconnected(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qtcpsocket_readdata_isbase) {
            qtcpsocket_readdata_isbase = false;
            return QTcpSocket::readData(data, maxlen);
        }
        auto readdata_cb = qtcpsocket_readdata_callback;
        if (readdata_cb) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = readdata_cb(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QTcpSocket::readData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qtcpsocket_readlinedata_isbase) {
            qtcpsocket_readlinedata_isbase = false;
            return QTcpSocket::readLineData(data, maxlen);
        }
        auto readlinedata_cb = qtcpsocket_readlinedata_callback;
        if (readlinedata_cb) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);

            long long callback_ret = readlinedata_cb(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QTcpSocket::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qtcpsocket_skipdata_isbase) {
            qtcpsocket_skipdata_isbase = false;
            return QTcpSocket::skipData(maxSize);
        }
        auto skipdata_cb = qtcpsocket_skipdata_callback;
        if (skipdata_cb) {
            long long cbval1 = static_cast<long long>(maxSize);

            long long callback_ret = skipdata_cb(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return QTcpSocket::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 lenVal) override {
        if (qtcpsocket_writedata_isbase) {
            qtcpsocket_writedata_isbase = false;
            return QTcpSocket::writeData(data, lenVal);
        }
        auto writedata_cb = qtcpsocket_writedata_callback;
        if (writedata_cb) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(lenVal);

            long long callback_ret = writedata_cb(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QTcpSocket::writeData(data, lenVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode mode) override {
        if (qtcpsocket_open_isbase) {
            qtcpsocket_open_isbase = false;
            return QTcpSocket::open(mode);
        }
        auto open_cb = qtcpsocket_open_callback;
        if (open_cb) {
            int cbval1 = static_cast<int>(mode);

            bool callback_ret = open_cb(this, cbval1);
            return callback_ret;
        }
        return QTcpSocket::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qtcpsocket_pos_isbase) {
            qtcpsocket_pos_isbase = false;
            return QTcpSocket::pos();
        }
        auto pos_cb = qtcpsocket_pos_callback;
        if (pos_cb) {
            long long callback_ret = pos_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QTcpSocket::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qtcpsocket_size_isbase) {
            qtcpsocket_size_isbase = false;
            return QTcpSocket::size();
        }
        auto size_cb = qtcpsocket_size_callback;
        if (size_cb) {
            long long callback_ret = size_cb();
            return static_cast<qint64>(callback_ret);
        }
        return QTcpSocket::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qtcpsocket_seek_isbase) {
            qtcpsocket_seek_isbase = false;
            return QTcpSocket::seek(pos);
        }
        auto seek_cb = qtcpsocket_seek_callback;
        if (seek_cb) {
            long long cbval1 = static_cast<long long>(pos);

            bool callback_ret = seek_cb(this, cbval1);
            return callback_ret;
        }
        return QTcpSocket::seek(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qtcpsocket_atend_isbase) {
            qtcpsocket_atend_isbase = false;
            return QTcpSocket::atEnd();
        }
        auto atend_cb = qtcpsocket_atend_callback;
        if (atend_cb) {
            bool callback_ret = atend_cb();
            return callback_ret;
        }
        return QTcpSocket::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qtcpsocket_reset_isbase) {
            qtcpsocket_reset_isbase = false;
            return QTcpSocket::reset();
        }
        auto reset_cb = qtcpsocket_reset_callback;
        if (reset_cb) {
            bool callback_ret = reset_cb();
            return callback_ret;
        }
        return QTcpSocket::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qtcpsocket_canreadline_isbase) {
            qtcpsocket_canreadline_isbase = false;
            return QTcpSocket::canReadLine();
        }
        auto canreadline_cb = qtcpsocket_canreadline_callback;
        if (canreadline_cb) {
            bool callback_ret = canreadline_cb();
            return callback_ret;
        }
        return QTcpSocket::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtcpsocket_event_isbase) {
            qtcpsocket_event_isbase = false;
            return QTcpSocket::event(event);
        }
        auto event_cb = qtcpsocket_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QTcpSocket::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtcpsocket_eventfilter_isbase) {
            qtcpsocket_eventfilter_isbase = false;
            return QTcpSocket::eventFilter(watched, event);
        }
        auto eventfilter_cb = qtcpsocket_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTcpSocket::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtcpsocket_timerevent_isbase) {
            qtcpsocket_timerevent_isbase = false;
            QTcpSocket::timerEvent(event);
            return;
        }
        auto timerevent_cb = qtcpsocket_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QTcpSocket::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtcpsocket_childevent_isbase) {
            qtcpsocket_childevent_isbase = false;
            QTcpSocket::childEvent(event);
            return;
        }
        auto childevent_cb = qtcpsocket_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QTcpSocket::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtcpsocket_customevent_isbase) {
            qtcpsocket_customevent_isbase = false;
            QTcpSocket::customEvent(event);
            return;
        }
        auto customevent_cb = qtcpsocket_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QTcpSocket::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtcpsocket_connectnotify_isbase) {
            qtcpsocket_connectnotify_isbase = false;
            QTcpSocket::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qtcpsocket_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QTcpSocket::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtcpsocket_disconnectnotify_isbase) {
            qtcpsocket_disconnectnotify_isbase = false;
            QTcpSocket::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qtcpsocket_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QTcpSocket::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setSocketState(QAbstractSocket::SocketState state) {
        if (qtcpsocket_setsocketstate_isbase) {
            qtcpsocket_setsocketstate_isbase = false;
            QTcpSocket::setSocketState(state);
            return;
        }
        auto setsocketstate_cb = qtcpsocket_setsocketstate_callback;
        if (setsocketstate_cb) {
            int cbval1 = static_cast<int>(state);

            setsocketstate_cb(this, cbval1);
            return;
        }
        QTcpSocket::setSocketState(state);
    }

    // Virtual method for C ABI access and custom callback
    void setSocketError(QAbstractSocket::SocketError socketError) {
        if (qtcpsocket_setsocketerror_isbase) {
            qtcpsocket_setsocketerror_isbase = false;
            QTcpSocket::setSocketError(socketError);
            return;
        }
        auto setsocketerror_cb = qtcpsocket_setsocketerror_callback;
        if (setsocketerror_cb) {
            int cbval1 = static_cast<int>(socketError);

            setsocketerror_cb(this, cbval1);
            return;
        }
        QTcpSocket::setSocketError(socketError);
    }

    // Virtual method for C ABI access and custom callback
    void setLocalPort(quint16 port) {
        if (qtcpsocket_setlocalport_isbase) {
            qtcpsocket_setlocalport_isbase = false;
            QTcpSocket::setLocalPort(port);
            return;
        }
        auto setlocalport_cb = qtcpsocket_setlocalport_callback;
        if (setlocalport_cb) {
            uint16_t cbval1 = static_cast<uint16_t>(port);

            setlocalport_cb(this, cbval1);
            return;
        }
        QTcpSocket::setLocalPort(port);
    }

    // Virtual method for C ABI access and custom callback
    void setLocalAddress(const QHostAddress& address) {
        if (qtcpsocket_setlocaladdress_isbase) {
            qtcpsocket_setlocaladdress_isbase = false;
            QTcpSocket::setLocalAddress(address);
            return;
        }
        auto setlocaladdress_cb = qtcpsocket_setlocaladdress_callback;
        if (setlocaladdress_cb) {
            const QHostAddress& address_ret = address;
            // Cast returned reference into pointer
            QHostAddress* cbval1 = const_cast<QHostAddress*>(&address_ret);

            setlocaladdress_cb(this, cbval1);
            return;
        }
        QTcpSocket::setLocalAddress(address);
    }

    // Virtual method for C ABI access and custom callback
    void setPeerPort(quint16 port) {
        if (qtcpsocket_setpeerport_isbase) {
            qtcpsocket_setpeerport_isbase = false;
            QTcpSocket::setPeerPort(port);
            return;
        }
        auto setpeerport_cb = qtcpsocket_setpeerport_callback;
        if (setpeerport_cb) {
            uint16_t cbval1 = static_cast<uint16_t>(port);

            setpeerport_cb(this, cbval1);
            return;
        }
        QTcpSocket::setPeerPort(port);
    }

    // Virtual method for C ABI access and custom callback
    void setPeerAddress(const QHostAddress& address) {
        if (qtcpsocket_setpeeraddress_isbase) {
            qtcpsocket_setpeeraddress_isbase = false;
            QTcpSocket::setPeerAddress(address);
            return;
        }
        auto setpeeraddress_cb = qtcpsocket_setpeeraddress_callback;
        if (setpeeraddress_cb) {
            const QHostAddress& address_ret = address;
            // Cast returned reference into pointer
            QHostAddress* cbval1 = const_cast<QHostAddress*>(&address_ret);

            setpeeraddress_cb(this, cbval1);
            return;
        }
        QTcpSocket::setPeerAddress(address);
    }

    // Virtual method for C ABI access and custom callback
    void setPeerName(const QString& name) {
        if (qtcpsocket_setpeername_isbase) {
            qtcpsocket_setpeername_isbase = false;
            QTcpSocket::setPeerName(name);
            return;
        }
        auto setpeername_cb = qtcpsocket_setpeername_callback;
        if (setpeername_cb) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;

            setpeername_cb(this, cbval1);
            libqt_free(name_str);
            return;
        }
        QTcpSocket::setPeerName(name);
    }

    // Virtual method for C ABI access and custom callback
    void setOpenMode(QIODeviceBase::OpenMode openMode) {
        if (qtcpsocket_setopenmode_isbase) {
            qtcpsocket_setopenmode_isbase = false;
            QTcpSocket::setOpenMode(openMode);
            return;
        }
        auto setopenmode_cb = qtcpsocket_setopenmode_callback;
        if (setopenmode_cb) {
            int cbval1 = static_cast<int>(openMode);

            setopenmode_cb(this, cbval1);
            return;
        }
        QTcpSocket::setOpenMode(openMode);
    }

    // Virtual method for C ABI access and custom callback
    void setErrorString(const QString& errorString) {
        if (qtcpsocket_seterrorstring_isbase) {
            qtcpsocket_seterrorstring_isbase = false;
            QTcpSocket::setErrorString(errorString);
            return;
        }
        auto seterrorstring_cb = qtcpsocket_seterrorstring_callback;
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
        QTcpSocket::setErrorString(errorString);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtcpsocket_sender_isbase) {
            qtcpsocket_sender_isbase = false;
            return QTcpSocket::sender();
        }
        auto sender_cb = qtcpsocket_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QTcpSocket::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtcpsocket_sendersignalindex_isbase) {
            qtcpsocket_sendersignalindex_isbase = false;
            return QTcpSocket::senderSignalIndex();
        }
        auto sendersignalindex_cb = qtcpsocket_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QTcpSocket::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtcpsocket_receivers_isbase) {
            qtcpsocket_receivers_isbase = false;
            return QTcpSocket::receivers(signal);
        }
        auto receivers_cb = qtcpsocket_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTcpSocket::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtcpsocket_issignalconnected_isbase) {
            qtcpsocket_issignalconnected_isbase = false;
            return QTcpSocket::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qtcpsocket_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QTcpSocket::isSignalConnected(signal);
    }

    // Friend functions
    friend long long QTcpSocket_ReadData(QTcpSocket* self, char* data, long long maxlen);
    friend long long QTcpSocket_SuperReadData(QTcpSocket* self, char* data, long long maxlen);
    friend long long QTcpSocket_ReadLineData(QTcpSocket* self, char* data, long long maxlen);
    friend long long QTcpSocket_SuperReadLineData(QTcpSocket* self, char* data, long long maxlen);
    friend long long QTcpSocket_SkipData(QTcpSocket* self, long long maxSize);
    friend long long QTcpSocket_SuperSkipData(QTcpSocket* self, long long maxSize);
    friend long long QTcpSocket_WriteData(QTcpSocket* self, const char* data, long long lenVal);
    friend long long QTcpSocket_SuperWriteData(QTcpSocket* self, const char* data, long long lenVal);
    friend void QTcpSocket_TimerEvent(QTcpSocket* self, QTimerEvent* event);
    friend void QTcpSocket_SuperTimerEvent(QTcpSocket* self, QTimerEvent* event);
    friend void QTcpSocket_ChildEvent(QTcpSocket* self, QChildEvent* event);
    friend void QTcpSocket_SuperChildEvent(QTcpSocket* self, QChildEvent* event);
    friend void QTcpSocket_CustomEvent(QTcpSocket* self, QEvent* event);
    friend void QTcpSocket_SuperCustomEvent(QTcpSocket* self, QEvent* event);
    friend void QTcpSocket_ConnectNotify(QTcpSocket* self, const QMetaMethod* signal);
    friend void QTcpSocket_SuperConnectNotify(QTcpSocket* self, const QMetaMethod* signal);
    friend void QTcpSocket_DisconnectNotify(QTcpSocket* self, const QMetaMethod* signal);
    friend void QTcpSocket_SuperDisconnectNotify(QTcpSocket* self, const QMetaMethod* signal);
    friend void QTcpSocket_SetSocketState(QTcpSocket* self, int state);
    friend void QTcpSocket_SuperSetSocketState(QTcpSocket* self, int state);
    friend void QTcpSocket_SetSocketError(QTcpSocket* self, int socketError);
    friend void QTcpSocket_SuperSetSocketError(QTcpSocket* self, int socketError);
    friend void QTcpSocket_SetLocalPort(QTcpSocket* self, uint16_t port);
    friend void QTcpSocket_SuperSetLocalPort(QTcpSocket* self, uint16_t port);
    friend void QTcpSocket_SetLocalAddress(QTcpSocket* self, const QHostAddress* address);
    friend void QTcpSocket_SuperSetLocalAddress(QTcpSocket* self, const QHostAddress* address);
    friend void QTcpSocket_SetPeerPort(QTcpSocket* self, uint16_t port);
    friend void QTcpSocket_SuperSetPeerPort(QTcpSocket* self, uint16_t port);
    friend void QTcpSocket_SetPeerAddress(QTcpSocket* self, const QHostAddress* address);
    friend void QTcpSocket_SuperSetPeerAddress(QTcpSocket* self, const QHostAddress* address);
    friend void QTcpSocket_SetPeerName(QTcpSocket* self, const libqt_string name);
    friend void QTcpSocket_SuperSetPeerName(QTcpSocket* self, const libqt_string name);
    friend void QTcpSocket_SetOpenMode(QTcpSocket* self, int openMode);
    friend void QTcpSocket_SuperSetOpenMode(QTcpSocket* self, int openMode);
    friend void QTcpSocket_SetErrorString(QTcpSocket* self, const libqt_string errorString);
    friend void QTcpSocket_SuperSetErrorString(QTcpSocket* self, const libqt_string errorString);
    friend QObject* QTcpSocket_Sender(const QTcpSocket* self);
    friend QObject* QTcpSocket_SuperSender(const QTcpSocket* self);
    friend int QTcpSocket_SenderSignalIndex(const QTcpSocket* self);
    friend int QTcpSocket_SuperSenderSignalIndex(const QTcpSocket* self);
    friend int QTcpSocket_Receivers(const QTcpSocket* self, const char* signal);
    friend int QTcpSocket_SuperReceivers(const QTcpSocket* self, const char* signal);
    friend bool QTcpSocket_IsSignalConnected(const QTcpSocket* self, const QMetaMethod* signal);
    friend bool QTcpSocket_SuperIsSignalConnected(const QTcpSocket* self, const QMetaMethod* signal);
};

#endif
