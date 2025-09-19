#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALFORWARDINGWORKERBASE_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALFORWARDINGWORKERBASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KIO::ForwardingWorkerBase so that we can call protected methods
class VirtualKIOForwardingWorkerBase : public KIO::ForwardingWorkerBase {

  public:
    // Virtual class boolean flag
    bool isVirtualKIOForwardingWorkerBase = true;

    // Virtual class public types (including callbacks)
    using KIO::ForwardingWorkerBase::UDSEntryCreationMode;
    using KIO__ForwardingWorkerBase_Metacall_Callback = int (*)(KIO__ForwardingWorkerBase*, int, int, void**);
    using KIO__ForwardingWorkerBase_Get_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*);
    using KIO__ForwardingWorkerBase_Put_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, int, int);
    using KIO__ForwardingWorkerBase_Stat_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*);
    using KIO__ForwardingWorkerBase_Mimetype_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*);
    using KIO__ForwardingWorkerBase_ListDir_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*);
    using KIO__ForwardingWorkerBase_Mkdir_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, int);
    using KIO__ForwardingWorkerBase_Rename_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, QUrl*, int);
    using KIO__ForwardingWorkerBase_Symlink_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, libqt_string, QUrl*, int);
    using KIO__ForwardingWorkerBase_Chmod_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, int);
    using KIO__ForwardingWorkerBase_SetModificationTime_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, QDateTime*);
    using KIO__ForwardingWorkerBase_Copy_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, QUrl*, int, int);
    using KIO__ForwardingWorkerBase_Del_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, bool);
    using KIO__ForwardingWorkerBase_RewriteUrl_Callback = bool (*)(KIO__ForwardingWorkerBase*, QUrl*, QUrl*);
    using KIO__ForwardingWorkerBase_AdjustUDSEntry_Callback = void (*)(const KIO__ForwardingWorkerBase*, KIO__UDSEntry*, int);
    using KIO__ForwardingWorkerBase_Event_Callback = bool (*)(KIO__ForwardingWorkerBase*, QEvent*);
    using KIO__ForwardingWorkerBase_EventFilter_Callback = bool (*)(KIO__ForwardingWorkerBase*, QObject*, QEvent*);
    using KIO__ForwardingWorkerBase_TimerEvent_Callback = void (*)(KIO__ForwardingWorkerBase*, QTimerEvent*);
    using KIO__ForwardingWorkerBase_ChildEvent_Callback = void (*)(KIO__ForwardingWorkerBase*, QChildEvent*);
    using KIO__ForwardingWorkerBase_CustomEvent_Callback = void (*)(KIO__ForwardingWorkerBase*, QEvent*);
    using KIO__ForwardingWorkerBase_ConnectNotify_Callback = void (*)(KIO__ForwardingWorkerBase*, QMetaMethod*);
    using KIO__ForwardingWorkerBase_DisconnectNotify_Callback = void (*)(KIO__ForwardingWorkerBase*, QMetaMethod*);
    using KIO__ForwardingWorkerBase_AppConnectionMade_Callback = void (*)();
    using KIO__ForwardingWorkerBase_SetHost_Callback = void (*)(KIO__ForwardingWorkerBase*, libqt_string, uint16_t, libqt_string, libqt_string);
    using KIO__ForwardingWorkerBase_OpenConnection_Callback = KIO__WorkerResult* (*)();
    using KIO__ForwardingWorkerBase_CloseConnection_Callback = void (*)();
    using KIO__ForwardingWorkerBase_Open_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, int);
    using KIO__ForwardingWorkerBase_Read_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, unsigned long long);
    using KIO__ForwardingWorkerBase_Write_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, libqt_string);
    using KIO__ForwardingWorkerBase_Seek_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, unsigned long long);
    using KIO__ForwardingWorkerBase_Truncate_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, unsigned long long);
    using KIO__ForwardingWorkerBase_Close_Callback = KIO__WorkerResult* (*)();
    using KIO__ForwardingWorkerBase_Chown_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, libqt_string, libqt_string);
    using KIO__ForwardingWorkerBase_Special_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, libqt_string);
    using KIO__ForwardingWorkerBase_FileSystemFreeSpace_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*);
    using KIO__ForwardingWorkerBase_WorkerStatus2_Callback = void (*)();
    using KIO__ForwardingWorkerBase_ReparseConfiguration_Callback = void (*)();
    using KIO__ForwardingWorkerBase_ProcessedUrl_Callback = QUrl* (*)();
    using KIO__ForwardingWorkerBase_RequestedUrl_Callback = QUrl* (*)();
    using KIO__ForwardingWorkerBase_Sender_Callback = QObject* (*)();
    using KIO__ForwardingWorkerBase_SenderSignalIndex_Callback = int (*)();
    using KIO__ForwardingWorkerBase_Receivers_Callback = int (*)(const KIO__ForwardingWorkerBase*, const char*);
    using KIO__ForwardingWorkerBase_IsSignalConnected_Callback = bool (*)(const KIO__ForwardingWorkerBase*, QMetaMethod*);

  protected:
    // Instance callback storage
    KIO__ForwardingWorkerBase_Metacall_Callback kio__forwardingworkerbase_metacall_callback = nullptr;
    KIO__ForwardingWorkerBase_Get_Callback kio__forwardingworkerbase_get_callback = nullptr;
    KIO__ForwardingWorkerBase_Put_Callback kio__forwardingworkerbase_put_callback = nullptr;
    KIO__ForwardingWorkerBase_Stat_Callback kio__forwardingworkerbase_stat_callback = nullptr;
    KIO__ForwardingWorkerBase_Mimetype_Callback kio__forwardingworkerbase_mimetype_callback = nullptr;
    KIO__ForwardingWorkerBase_ListDir_Callback kio__forwardingworkerbase_listdir_callback = nullptr;
    KIO__ForwardingWorkerBase_Mkdir_Callback kio__forwardingworkerbase_mkdir_callback = nullptr;
    KIO__ForwardingWorkerBase_Rename_Callback kio__forwardingworkerbase_rename_callback = nullptr;
    KIO__ForwardingWorkerBase_Symlink_Callback kio__forwardingworkerbase_symlink_callback = nullptr;
    KIO__ForwardingWorkerBase_Chmod_Callback kio__forwardingworkerbase_chmod_callback = nullptr;
    KIO__ForwardingWorkerBase_SetModificationTime_Callback kio__forwardingworkerbase_setmodificationtime_callback = nullptr;
    KIO__ForwardingWorkerBase_Copy_Callback kio__forwardingworkerbase_copy_callback = nullptr;
    KIO__ForwardingWorkerBase_Del_Callback kio__forwardingworkerbase_del_callback = nullptr;
    KIO__ForwardingWorkerBase_RewriteUrl_Callback kio__forwardingworkerbase_rewriteurl_callback = nullptr;
    KIO__ForwardingWorkerBase_AdjustUDSEntry_Callback kio__forwardingworkerbase_adjustudsentry_callback = nullptr;
    KIO__ForwardingWorkerBase_Event_Callback kio__forwardingworkerbase_event_callback = nullptr;
    KIO__ForwardingWorkerBase_EventFilter_Callback kio__forwardingworkerbase_eventfilter_callback = nullptr;
    KIO__ForwardingWorkerBase_TimerEvent_Callback kio__forwardingworkerbase_timerevent_callback = nullptr;
    KIO__ForwardingWorkerBase_ChildEvent_Callback kio__forwardingworkerbase_childevent_callback = nullptr;
    KIO__ForwardingWorkerBase_CustomEvent_Callback kio__forwardingworkerbase_customevent_callback = nullptr;
    KIO__ForwardingWorkerBase_ConnectNotify_Callback kio__forwardingworkerbase_connectnotify_callback = nullptr;
    KIO__ForwardingWorkerBase_DisconnectNotify_Callback kio__forwardingworkerbase_disconnectnotify_callback = nullptr;
    KIO__ForwardingWorkerBase_AppConnectionMade_Callback kio__forwardingworkerbase_appconnectionmade_callback = nullptr;
    KIO__ForwardingWorkerBase_SetHost_Callback kio__forwardingworkerbase_sethost_callback = nullptr;
    KIO__ForwardingWorkerBase_OpenConnection_Callback kio__forwardingworkerbase_openconnection_callback = nullptr;
    KIO__ForwardingWorkerBase_CloseConnection_Callback kio__forwardingworkerbase_closeconnection_callback = nullptr;
    KIO__ForwardingWorkerBase_Open_Callback kio__forwardingworkerbase_open_callback = nullptr;
    KIO__ForwardingWorkerBase_Read_Callback kio__forwardingworkerbase_read_callback = nullptr;
    KIO__ForwardingWorkerBase_Write_Callback kio__forwardingworkerbase_write_callback = nullptr;
    KIO__ForwardingWorkerBase_Seek_Callback kio__forwardingworkerbase_seek_callback = nullptr;
    KIO__ForwardingWorkerBase_Truncate_Callback kio__forwardingworkerbase_truncate_callback = nullptr;
    KIO__ForwardingWorkerBase_Close_Callback kio__forwardingworkerbase_close_callback = nullptr;
    KIO__ForwardingWorkerBase_Chown_Callback kio__forwardingworkerbase_chown_callback = nullptr;
    KIO__ForwardingWorkerBase_Special_Callback kio__forwardingworkerbase_special_callback = nullptr;
    KIO__ForwardingWorkerBase_FileSystemFreeSpace_Callback kio__forwardingworkerbase_filesystemfreespace_callback = nullptr;
    KIO__ForwardingWorkerBase_WorkerStatus2_Callback kio__forwardingworkerbase_workerstatus2_callback = nullptr;
    KIO__ForwardingWorkerBase_ReparseConfiguration_Callback kio__forwardingworkerbase_reparseconfiguration_callback = nullptr;
    KIO__ForwardingWorkerBase_ProcessedUrl_Callback kio__forwardingworkerbase_processedurl_callback = nullptr;
    KIO__ForwardingWorkerBase_RequestedUrl_Callback kio__forwardingworkerbase_requestedurl_callback = nullptr;
    KIO__ForwardingWorkerBase_Sender_Callback kio__forwardingworkerbase_sender_callback = nullptr;
    KIO__ForwardingWorkerBase_SenderSignalIndex_Callback kio__forwardingworkerbase_sendersignalindex_callback = nullptr;
    KIO__ForwardingWorkerBase_Receivers_Callback kio__forwardingworkerbase_receivers_callback = nullptr;
    KIO__ForwardingWorkerBase_IsSignalConnected_Callback kio__forwardingworkerbase_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kio__forwardingworkerbase_metacall_isbase = false;
    mutable bool kio__forwardingworkerbase_get_isbase = false;
    mutable bool kio__forwardingworkerbase_put_isbase = false;
    mutable bool kio__forwardingworkerbase_stat_isbase = false;
    mutable bool kio__forwardingworkerbase_mimetype_isbase = false;
    mutable bool kio__forwardingworkerbase_listdir_isbase = false;
    mutable bool kio__forwardingworkerbase_mkdir_isbase = false;
    mutable bool kio__forwardingworkerbase_rename_isbase = false;
    mutable bool kio__forwardingworkerbase_symlink_isbase = false;
    mutable bool kio__forwardingworkerbase_chmod_isbase = false;
    mutable bool kio__forwardingworkerbase_setmodificationtime_isbase = false;
    mutable bool kio__forwardingworkerbase_copy_isbase = false;
    mutable bool kio__forwardingworkerbase_del_isbase = false;
    mutable bool kio__forwardingworkerbase_rewriteurl_isbase = false;
    mutable bool kio__forwardingworkerbase_adjustudsentry_isbase = false;
    mutable bool kio__forwardingworkerbase_event_isbase = false;
    mutable bool kio__forwardingworkerbase_eventfilter_isbase = false;
    mutable bool kio__forwardingworkerbase_timerevent_isbase = false;
    mutable bool kio__forwardingworkerbase_childevent_isbase = false;
    mutable bool kio__forwardingworkerbase_customevent_isbase = false;
    mutable bool kio__forwardingworkerbase_connectnotify_isbase = false;
    mutable bool kio__forwardingworkerbase_disconnectnotify_isbase = false;
    mutable bool kio__forwardingworkerbase_appconnectionmade_isbase = false;
    mutable bool kio__forwardingworkerbase_sethost_isbase = false;
    mutable bool kio__forwardingworkerbase_openconnection_isbase = false;
    mutable bool kio__forwardingworkerbase_closeconnection_isbase = false;
    mutable bool kio__forwardingworkerbase_open_isbase = false;
    mutable bool kio__forwardingworkerbase_read_isbase = false;
    mutable bool kio__forwardingworkerbase_write_isbase = false;
    mutable bool kio__forwardingworkerbase_seek_isbase = false;
    mutable bool kio__forwardingworkerbase_truncate_isbase = false;
    mutable bool kio__forwardingworkerbase_close_isbase = false;
    mutable bool kio__forwardingworkerbase_chown_isbase = false;
    mutable bool kio__forwardingworkerbase_special_isbase = false;
    mutable bool kio__forwardingworkerbase_filesystemfreespace_isbase = false;
    mutable bool kio__forwardingworkerbase_workerstatus2_isbase = false;
    mutable bool kio__forwardingworkerbase_reparseconfiguration_isbase = false;
    mutable bool kio__forwardingworkerbase_processedurl_isbase = false;
    mutable bool kio__forwardingworkerbase_requestedurl_isbase = false;
    mutable bool kio__forwardingworkerbase_sender_isbase = false;
    mutable bool kio__forwardingworkerbase_sendersignalindex_isbase = false;
    mutable bool kio__forwardingworkerbase_receivers_isbase = false;
    mutable bool kio__forwardingworkerbase_issignalconnected_isbase = false;

  public:
    VirtualKIOForwardingWorkerBase(const QByteArray& protocol, const QByteArray& poolSocket, const QByteArray& appSocket) : KIO::ForwardingWorkerBase(protocol, poolSocket, appSocket) {};

    ~VirtualKIOForwardingWorkerBase() {
        kio__forwardingworkerbase_metacall_callback = nullptr;
        kio__forwardingworkerbase_get_callback = nullptr;
        kio__forwardingworkerbase_put_callback = nullptr;
        kio__forwardingworkerbase_stat_callback = nullptr;
        kio__forwardingworkerbase_mimetype_callback = nullptr;
        kio__forwardingworkerbase_listdir_callback = nullptr;
        kio__forwardingworkerbase_mkdir_callback = nullptr;
        kio__forwardingworkerbase_rename_callback = nullptr;
        kio__forwardingworkerbase_symlink_callback = nullptr;
        kio__forwardingworkerbase_chmod_callback = nullptr;
        kio__forwardingworkerbase_setmodificationtime_callback = nullptr;
        kio__forwardingworkerbase_copy_callback = nullptr;
        kio__forwardingworkerbase_del_callback = nullptr;
        kio__forwardingworkerbase_rewriteurl_callback = nullptr;
        kio__forwardingworkerbase_adjustudsentry_callback = nullptr;
        kio__forwardingworkerbase_event_callback = nullptr;
        kio__forwardingworkerbase_eventfilter_callback = nullptr;
        kio__forwardingworkerbase_timerevent_callback = nullptr;
        kio__forwardingworkerbase_childevent_callback = nullptr;
        kio__forwardingworkerbase_customevent_callback = nullptr;
        kio__forwardingworkerbase_connectnotify_callback = nullptr;
        kio__forwardingworkerbase_disconnectnotify_callback = nullptr;
        kio__forwardingworkerbase_appconnectionmade_callback = nullptr;
        kio__forwardingworkerbase_sethost_callback = nullptr;
        kio__forwardingworkerbase_openconnection_callback = nullptr;
        kio__forwardingworkerbase_closeconnection_callback = nullptr;
        kio__forwardingworkerbase_open_callback = nullptr;
        kio__forwardingworkerbase_read_callback = nullptr;
        kio__forwardingworkerbase_write_callback = nullptr;
        kio__forwardingworkerbase_seek_callback = nullptr;
        kio__forwardingworkerbase_truncate_callback = nullptr;
        kio__forwardingworkerbase_close_callback = nullptr;
        kio__forwardingworkerbase_chown_callback = nullptr;
        kio__forwardingworkerbase_special_callback = nullptr;
        kio__forwardingworkerbase_filesystemfreespace_callback = nullptr;
        kio__forwardingworkerbase_workerstatus2_callback = nullptr;
        kio__forwardingworkerbase_reparseconfiguration_callback = nullptr;
        kio__forwardingworkerbase_processedurl_callback = nullptr;
        kio__forwardingworkerbase_requestedurl_callback = nullptr;
        kio__forwardingworkerbase_sender_callback = nullptr;
        kio__forwardingworkerbase_sendersignalindex_callback = nullptr;
        kio__forwardingworkerbase_receivers_callback = nullptr;
        kio__forwardingworkerbase_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKIO__ForwardingWorkerBase_Metacall_Callback(KIO__ForwardingWorkerBase_Metacall_Callback cb) { kio__forwardingworkerbase_metacall_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Get_Callback(KIO__ForwardingWorkerBase_Get_Callback cb) { kio__forwardingworkerbase_get_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Put_Callback(KIO__ForwardingWorkerBase_Put_Callback cb) { kio__forwardingworkerbase_put_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Stat_Callback(KIO__ForwardingWorkerBase_Stat_Callback cb) { kio__forwardingworkerbase_stat_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Mimetype_Callback(KIO__ForwardingWorkerBase_Mimetype_Callback cb) { kio__forwardingworkerbase_mimetype_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_ListDir_Callback(KIO__ForwardingWorkerBase_ListDir_Callback cb) { kio__forwardingworkerbase_listdir_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Mkdir_Callback(KIO__ForwardingWorkerBase_Mkdir_Callback cb) { kio__forwardingworkerbase_mkdir_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Rename_Callback(KIO__ForwardingWorkerBase_Rename_Callback cb) { kio__forwardingworkerbase_rename_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Symlink_Callback(KIO__ForwardingWorkerBase_Symlink_Callback cb) { kio__forwardingworkerbase_symlink_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Chmod_Callback(KIO__ForwardingWorkerBase_Chmod_Callback cb) { kio__forwardingworkerbase_chmod_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_SetModificationTime_Callback(KIO__ForwardingWorkerBase_SetModificationTime_Callback cb) { kio__forwardingworkerbase_setmodificationtime_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Copy_Callback(KIO__ForwardingWorkerBase_Copy_Callback cb) { kio__forwardingworkerbase_copy_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Del_Callback(KIO__ForwardingWorkerBase_Del_Callback cb) { kio__forwardingworkerbase_del_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_RewriteUrl_Callback(KIO__ForwardingWorkerBase_RewriteUrl_Callback cb) { kio__forwardingworkerbase_rewriteurl_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_AdjustUDSEntry_Callback(KIO__ForwardingWorkerBase_AdjustUDSEntry_Callback cb) { kio__forwardingworkerbase_adjustudsentry_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Event_Callback(KIO__ForwardingWorkerBase_Event_Callback cb) { kio__forwardingworkerbase_event_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_EventFilter_Callback(KIO__ForwardingWorkerBase_EventFilter_Callback cb) { kio__forwardingworkerbase_eventfilter_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_TimerEvent_Callback(KIO__ForwardingWorkerBase_TimerEvent_Callback cb) { kio__forwardingworkerbase_timerevent_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_ChildEvent_Callback(KIO__ForwardingWorkerBase_ChildEvent_Callback cb) { kio__forwardingworkerbase_childevent_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_CustomEvent_Callback(KIO__ForwardingWorkerBase_CustomEvent_Callback cb) { kio__forwardingworkerbase_customevent_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_ConnectNotify_Callback(KIO__ForwardingWorkerBase_ConnectNotify_Callback cb) { kio__forwardingworkerbase_connectnotify_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_DisconnectNotify_Callback(KIO__ForwardingWorkerBase_DisconnectNotify_Callback cb) { kio__forwardingworkerbase_disconnectnotify_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_AppConnectionMade_Callback(KIO__ForwardingWorkerBase_AppConnectionMade_Callback cb) { kio__forwardingworkerbase_appconnectionmade_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_SetHost_Callback(KIO__ForwardingWorkerBase_SetHost_Callback cb) { kio__forwardingworkerbase_sethost_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_OpenConnection_Callback(KIO__ForwardingWorkerBase_OpenConnection_Callback cb) { kio__forwardingworkerbase_openconnection_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_CloseConnection_Callback(KIO__ForwardingWorkerBase_CloseConnection_Callback cb) { kio__forwardingworkerbase_closeconnection_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Open_Callback(KIO__ForwardingWorkerBase_Open_Callback cb) { kio__forwardingworkerbase_open_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Read_Callback(KIO__ForwardingWorkerBase_Read_Callback cb) { kio__forwardingworkerbase_read_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Write_Callback(KIO__ForwardingWorkerBase_Write_Callback cb) { kio__forwardingworkerbase_write_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Seek_Callback(KIO__ForwardingWorkerBase_Seek_Callback cb) { kio__forwardingworkerbase_seek_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Truncate_Callback(KIO__ForwardingWorkerBase_Truncate_Callback cb) { kio__forwardingworkerbase_truncate_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Close_Callback(KIO__ForwardingWorkerBase_Close_Callback cb) { kio__forwardingworkerbase_close_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Chown_Callback(KIO__ForwardingWorkerBase_Chown_Callback cb) { kio__forwardingworkerbase_chown_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Special_Callback(KIO__ForwardingWorkerBase_Special_Callback cb) { kio__forwardingworkerbase_special_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_FileSystemFreeSpace_Callback(KIO__ForwardingWorkerBase_FileSystemFreeSpace_Callback cb) { kio__forwardingworkerbase_filesystemfreespace_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_WorkerStatus2_Callback(KIO__ForwardingWorkerBase_WorkerStatus2_Callback cb) { kio__forwardingworkerbase_workerstatus2_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_ReparseConfiguration_Callback(KIO__ForwardingWorkerBase_ReparseConfiguration_Callback cb) { kio__forwardingworkerbase_reparseconfiguration_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_ProcessedUrl_Callback(KIO__ForwardingWorkerBase_ProcessedUrl_Callback cb) { kio__forwardingworkerbase_processedurl_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_RequestedUrl_Callback(KIO__ForwardingWorkerBase_RequestedUrl_Callback cb) { kio__forwardingworkerbase_requestedurl_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Sender_Callback(KIO__ForwardingWorkerBase_Sender_Callback cb) { kio__forwardingworkerbase_sender_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_SenderSignalIndex_Callback(KIO__ForwardingWorkerBase_SenderSignalIndex_Callback cb) { kio__forwardingworkerbase_sendersignalindex_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Receivers_Callback(KIO__ForwardingWorkerBase_Receivers_Callback cb) { kio__forwardingworkerbase_receivers_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_IsSignalConnected_Callback(KIO__ForwardingWorkerBase_IsSignalConnected_Callback cb) { kio__forwardingworkerbase_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKIO__ForwardingWorkerBase_Metacall_IsBase(bool value) const { kio__forwardingworkerbase_metacall_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Get_IsBase(bool value) const { kio__forwardingworkerbase_get_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Put_IsBase(bool value) const { kio__forwardingworkerbase_put_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Stat_IsBase(bool value) const { kio__forwardingworkerbase_stat_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Mimetype_IsBase(bool value) const { kio__forwardingworkerbase_mimetype_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_ListDir_IsBase(bool value) const { kio__forwardingworkerbase_listdir_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Mkdir_IsBase(bool value) const { kio__forwardingworkerbase_mkdir_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Rename_IsBase(bool value) const { kio__forwardingworkerbase_rename_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Symlink_IsBase(bool value) const { kio__forwardingworkerbase_symlink_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Chmod_IsBase(bool value) const { kio__forwardingworkerbase_chmod_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_SetModificationTime_IsBase(bool value) const { kio__forwardingworkerbase_setmodificationtime_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Copy_IsBase(bool value) const { kio__forwardingworkerbase_copy_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Del_IsBase(bool value) const { kio__forwardingworkerbase_del_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_RewriteUrl_IsBase(bool value) const { kio__forwardingworkerbase_rewriteurl_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_AdjustUDSEntry_IsBase(bool value) const { kio__forwardingworkerbase_adjustudsentry_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Event_IsBase(bool value) const { kio__forwardingworkerbase_event_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_EventFilter_IsBase(bool value) const { kio__forwardingworkerbase_eventfilter_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_TimerEvent_IsBase(bool value) const { kio__forwardingworkerbase_timerevent_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_ChildEvent_IsBase(bool value) const { kio__forwardingworkerbase_childevent_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_CustomEvent_IsBase(bool value) const { kio__forwardingworkerbase_customevent_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_ConnectNotify_IsBase(bool value) const { kio__forwardingworkerbase_connectnotify_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_DisconnectNotify_IsBase(bool value) const { kio__forwardingworkerbase_disconnectnotify_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_AppConnectionMade_IsBase(bool value) const { kio__forwardingworkerbase_appconnectionmade_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_SetHost_IsBase(bool value) const { kio__forwardingworkerbase_sethost_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_OpenConnection_IsBase(bool value) const { kio__forwardingworkerbase_openconnection_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_CloseConnection_IsBase(bool value) const { kio__forwardingworkerbase_closeconnection_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Open_IsBase(bool value) const { kio__forwardingworkerbase_open_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Read_IsBase(bool value) const { kio__forwardingworkerbase_read_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Write_IsBase(bool value) const { kio__forwardingworkerbase_write_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Seek_IsBase(bool value) const { kio__forwardingworkerbase_seek_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Truncate_IsBase(bool value) const { kio__forwardingworkerbase_truncate_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Close_IsBase(bool value) const { kio__forwardingworkerbase_close_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Chown_IsBase(bool value) const { kio__forwardingworkerbase_chown_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Special_IsBase(bool value) const { kio__forwardingworkerbase_special_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_FileSystemFreeSpace_IsBase(bool value) const { kio__forwardingworkerbase_filesystemfreespace_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_WorkerStatus2_IsBase(bool value) const { kio__forwardingworkerbase_workerstatus2_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_ReparseConfiguration_IsBase(bool value) const { kio__forwardingworkerbase_reparseconfiguration_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_ProcessedUrl_IsBase(bool value) const { kio__forwardingworkerbase_processedurl_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_RequestedUrl_IsBase(bool value) const { kio__forwardingworkerbase_requestedurl_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Sender_IsBase(bool value) const { kio__forwardingworkerbase_sender_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_SenderSignalIndex_IsBase(bool value) const { kio__forwardingworkerbase_sendersignalindex_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Receivers_IsBase(bool value) const { kio__forwardingworkerbase_receivers_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_IsSignalConnected_IsBase(bool value) const { kio__forwardingworkerbase_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__forwardingworkerbase_metacall_isbase) {
            kio__forwardingworkerbase_metacall_isbase = false;
            return KIO__ForwardingWorkerBase::qt_metacall(param1, param2, param3);
        } else if (kio__forwardingworkerbase_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kio__forwardingworkerbase_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__ForwardingWorkerBase::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult get(const QUrl& url) override {
        if (kio__forwardingworkerbase_get_isbase) {
            kio__forwardingworkerbase_get_isbase = false;
            return KIO__ForwardingWorkerBase::get(url);
        } else if (kio__forwardingworkerbase_get_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_get_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::get(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult put(const QUrl& url, int permissions, KIO::JobFlags flags) override {
        if (kio__forwardingworkerbase_put_isbase) {
            kio__forwardingworkerbase_put_isbase = false;
            return KIO__ForwardingWorkerBase::put(url, permissions, flags);
        } else if (kio__forwardingworkerbase_put_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = permissions;
            int cbval3 = static_cast<int>(flags);

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_put_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::put(url, permissions, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult stat(const QUrl& url) override {
        if (kio__forwardingworkerbase_stat_isbase) {
            kio__forwardingworkerbase_stat_isbase = false;
            return KIO__ForwardingWorkerBase::stat(url);
        } else if (kio__forwardingworkerbase_stat_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_stat_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::stat(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult mimetype(const QUrl& url) override {
        if (kio__forwardingworkerbase_mimetype_isbase) {
            kio__forwardingworkerbase_mimetype_isbase = false;
            return KIO__ForwardingWorkerBase::mimetype(url);
        } else if (kio__forwardingworkerbase_mimetype_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_mimetype_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::mimetype(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult listDir(const QUrl& url) override {
        if (kio__forwardingworkerbase_listdir_isbase) {
            kio__forwardingworkerbase_listdir_isbase = false;
            return KIO__ForwardingWorkerBase::listDir(url);
        } else if (kio__forwardingworkerbase_listdir_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_listdir_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::listDir(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult mkdir(const QUrl& url, int permissions) override {
        if (kio__forwardingworkerbase_mkdir_isbase) {
            kio__forwardingworkerbase_mkdir_isbase = false;
            return KIO__ForwardingWorkerBase::mkdir(url, permissions);
        } else if (kio__forwardingworkerbase_mkdir_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = permissions;

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_mkdir_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::mkdir(url, permissions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult rename(const QUrl& src, const QUrl& dest, KIO::JobFlags flags) override {
        if (kio__forwardingworkerbase_rename_isbase) {
            kio__forwardingworkerbase_rename_isbase = false;
            return KIO__ForwardingWorkerBase::rename(src, dest, flags);
        } else if (kio__forwardingworkerbase_rename_callback != nullptr) {
            const QUrl& src_ret = src;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&src_ret);
            const QUrl& dest_ret = dest;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&dest_ret);
            int cbval3 = static_cast<int>(flags);

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_rename_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::rename(src, dest, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult symlink(const QString& target, const QUrl& dest, KIO::JobFlags flags) override {
        if (kio__forwardingworkerbase_symlink_isbase) {
            kio__forwardingworkerbase_symlink_isbase = false;
            return KIO__ForwardingWorkerBase::symlink(target, dest, flags);
        } else if (kio__forwardingworkerbase_symlink_callback != nullptr) {
            const QString target_ret = target;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray target_b = target_ret.toUtf8();
            libqt_string target_str;
            target_str.len = target_b.length();
            target_str.data = static_cast<const char*>(malloc(target_str.len + 1));
            memcpy((void*)target_str.data, target_b.data(), target_str.len);
            ((char*)target_str.data)[target_str.len] = '\0';
            libqt_string cbval1 = target_str;
            const QUrl& dest_ret = dest;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&dest_ret);
            int cbval3 = static_cast<int>(flags);

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_symlink_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::symlink(target, dest, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult chmod(const QUrl& url, int permissions) override {
        if (kio__forwardingworkerbase_chmod_isbase) {
            kio__forwardingworkerbase_chmod_isbase = false;
            return KIO__ForwardingWorkerBase::chmod(url, permissions);
        } else if (kio__forwardingworkerbase_chmod_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = permissions;

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_chmod_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::chmod(url, permissions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult setModificationTime(const QUrl& url, const QDateTime& mtime) override {
        if (kio__forwardingworkerbase_setmodificationtime_isbase) {
            kio__forwardingworkerbase_setmodificationtime_isbase = false;
            return KIO__ForwardingWorkerBase::setModificationTime(url, mtime);
        } else if (kio__forwardingworkerbase_setmodificationtime_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            const QDateTime& mtime_ret = mtime;
            // Cast returned reference into pointer
            QDateTime* cbval2 = const_cast<QDateTime*>(&mtime_ret);

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_setmodificationtime_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::setModificationTime(url, mtime);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult copy(const QUrl& src, const QUrl& dest, int permissions, KIO::JobFlags flags) override {
        if (kio__forwardingworkerbase_copy_isbase) {
            kio__forwardingworkerbase_copy_isbase = false;
            return KIO__ForwardingWorkerBase::copy(src, dest, permissions, flags);
        } else if (kio__forwardingworkerbase_copy_callback != nullptr) {
            const QUrl& src_ret = src;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&src_ret);
            const QUrl& dest_ret = dest;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&dest_ret);
            int cbval3 = permissions;
            int cbval4 = static_cast<int>(flags);

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_copy_callback(this, cbval1, cbval2, cbval3, cbval4);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::copy(src, dest, permissions, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult del(const QUrl& url, bool isfile) override {
        if (kio__forwardingworkerbase_del_isbase) {
            kio__forwardingworkerbase_del_isbase = false;
            return KIO__ForwardingWorkerBase::del(url, isfile);
        } else if (kio__forwardingworkerbase_del_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            bool cbval2 = isfile;

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_del_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::del(url, isfile);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool rewriteUrl(const QUrl& url, QUrl& newURL) override {
        if (kio__forwardingworkerbase_rewriteurl_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            QUrl& newURL_ret = newURL;
            // Cast returned reference into pointer
            QUrl* cbval2 = &newURL_ret;

            bool callback_ret = kio__forwardingworkerbase_rewriteurl_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void adjustUDSEntry(KIO::UDSEntry& entry, KIO::ForwardingWorkerBase::UDSEntryCreationMode creationMode) const override {
        if (kio__forwardingworkerbase_adjustudsentry_isbase) {
            kio__forwardingworkerbase_adjustudsentry_isbase = false;
            KIO__ForwardingWorkerBase::adjustUDSEntry(entry, creationMode);
        } else if (kio__forwardingworkerbase_adjustudsentry_callback != nullptr) {
            KIO::UDSEntry& entry_ret = entry;
            // Cast returned reference into pointer
            KIO__UDSEntry* cbval1 = &entry_ret;
            int cbval2 = static_cast<int>(creationMode);

            kio__forwardingworkerbase_adjustudsentry_callback(this, cbval1, cbval2);
        } else {
            KIO__ForwardingWorkerBase::adjustUDSEntry(entry, creationMode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__forwardingworkerbase_event_isbase) {
            kio__forwardingworkerbase_event_isbase = false;
            return KIO__ForwardingWorkerBase::event(event);
        } else if (kio__forwardingworkerbase_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kio__forwardingworkerbase_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__forwardingworkerbase_eventfilter_isbase) {
            kio__forwardingworkerbase_eventfilter_isbase = false;
            return KIO__ForwardingWorkerBase::eventFilter(watched, event);
        } else if (kio__forwardingworkerbase_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kio__forwardingworkerbase_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__forwardingworkerbase_timerevent_isbase) {
            kio__forwardingworkerbase_timerevent_isbase = false;
            KIO__ForwardingWorkerBase::timerEvent(event);
        } else if (kio__forwardingworkerbase_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kio__forwardingworkerbase_timerevent_callback(this, cbval1);
        } else {
            KIO__ForwardingWorkerBase::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__forwardingworkerbase_childevent_isbase) {
            kio__forwardingworkerbase_childevent_isbase = false;
            KIO__ForwardingWorkerBase::childEvent(event);
        } else if (kio__forwardingworkerbase_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kio__forwardingworkerbase_childevent_callback(this, cbval1);
        } else {
            KIO__ForwardingWorkerBase::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__forwardingworkerbase_customevent_isbase) {
            kio__forwardingworkerbase_customevent_isbase = false;
            KIO__ForwardingWorkerBase::customEvent(event);
        } else if (kio__forwardingworkerbase_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kio__forwardingworkerbase_customevent_callback(this, cbval1);
        } else {
            KIO__ForwardingWorkerBase::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__forwardingworkerbase_connectnotify_isbase) {
            kio__forwardingworkerbase_connectnotify_isbase = false;
            KIO__ForwardingWorkerBase::connectNotify(signal);
        } else if (kio__forwardingworkerbase_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__forwardingworkerbase_connectnotify_callback(this, cbval1);
        } else {
            KIO__ForwardingWorkerBase::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__forwardingworkerbase_disconnectnotify_isbase) {
            kio__forwardingworkerbase_disconnectnotify_isbase = false;
            KIO__ForwardingWorkerBase::disconnectNotify(signal);
        } else if (kio__forwardingworkerbase_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kio__forwardingworkerbase_disconnectnotify_callback(this, cbval1);
        } else {
            KIO__ForwardingWorkerBase::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void appConnectionMade() override {
        if (kio__forwardingworkerbase_appconnectionmade_isbase) {
            kio__forwardingworkerbase_appconnectionmade_isbase = false;
            KIO__ForwardingWorkerBase::appConnectionMade();
        } else if (kio__forwardingworkerbase_appconnectionmade_callback != nullptr) {
            kio__forwardingworkerbase_appconnectionmade_callback();
        } else {
            KIO__ForwardingWorkerBase::appConnectionMade();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHost(const QString& host, quint16 port, const QString& user, const QString& pass) override {
        if (kio__forwardingworkerbase_sethost_isbase) {
            kio__forwardingworkerbase_sethost_isbase = false;
            KIO__ForwardingWorkerBase::setHost(host, port, user, pass);
        } else if (kio__forwardingworkerbase_sethost_callback != nullptr) {
            const QString host_ret = host;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray host_b = host_ret.toUtf8();
            libqt_string host_str;
            host_str.len = host_b.length();
            host_str.data = static_cast<const char*>(malloc(host_str.len + 1));
            memcpy((void*)host_str.data, host_b.data(), host_str.len);
            ((char*)host_str.data)[host_str.len] = '\0';
            libqt_string cbval1 = host_str;
            uint16_t cbval2 = static_cast<uint16_t>(port);
            const QString user_ret = user;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray user_b = user_ret.toUtf8();
            libqt_string user_str;
            user_str.len = user_b.length();
            user_str.data = static_cast<const char*>(malloc(user_str.len + 1));
            memcpy((void*)user_str.data, user_b.data(), user_str.len);
            ((char*)user_str.data)[user_str.len] = '\0';
            libqt_string cbval3 = user_str;
            const QString pass_ret = pass;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray pass_b = pass_ret.toUtf8();
            libqt_string pass_str;
            pass_str.len = pass_b.length();
            pass_str.data = static_cast<const char*>(malloc(pass_str.len + 1));
            memcpy((void*)pass_str.data, pass_b.data(), pass_str.len);
            ((char*)pass_str.data)[pass_str.len] = '\0';
            libqt_string cbval4 = pass_str;

            kio__forwardingworkerbase_sethost_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KIO__ForwardingWorkerBase::setHost(host, port, user, pass);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult openConnection() override {
        if (kio__forwardingworkerbase_openconnection_isbase) {
            kio__forwardingworkerbase_openconnection_isbase = false;
            return KIO__ForwardingWorkerBase::openConnection();
        } else if (kio__forwardingworkerbase_openconnection_callback != nullptr) {
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_openconnection_callback();
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::openConnection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeConnection() override {
        if (kio__forwardingworkerbase_closeconnection_isbase) {
            kio__forwardingworkerbase_closeconnection_isbase = false;
            KIO__ForwardingWorkerBase::closeConnection();
        } else if (kio__forwardingworkerbase_closeconnection_callback != nullptr) {
            kio__forwardingworkerbase_closeconnection_callback();
        } else {
            KIO__ForwardingWorkerBase::closeConnection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult open(const QUrl& url, QIODevice::OpenMode mode) override {
        if (kio__forwardingworkerbase_open_isbase) {
            kio__forwardingworkerbase_open_isbase = false;
            return KIO__ForwardingWorkerBase::open(url, mode);
        } else if (kio__forwardingworkerbase_open_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = static_cast<int>(mode);

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_open_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::open(url, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult read(KIO::filesize_t size) override {
        if (kio__forwardingworkerbase_read_isbase) {
            kio__forwardingworkerbase_read_isbase = false;
            return KIO__ForwardingWorkerBase::read(size);
        } else if (kio__forwardingworkerbase_read_callback != nullptr) {
            unsigned long long cbval1 = static_cast<unsigned long long>(size);

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_read_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::read(size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult write(const QByteArray& data) override {
        if (kio__forwardingworkerbase_write_isbase) {
            kio__forwardingworkerbase_write_isbase = false;
            return KIO__ForwardingWorkerBase::write(data);
        } else if (kio__forwardingworkerbase_write_callback != nullptr) {
            const QByteArray data_qb = data;
            libqt_string data_str;
            data_str.len = data_qb.length();
            data_str.data = static_cast<const char*>(malloc(data_str.len + 1));
            memcpy((void*)data_str.data, data_qb.data(), data_str.len);
            ((char*)data_str.data)[data_str.len] = '\0';
            libqt_string cbval1 = data_str;

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_write_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::write(data);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult seek(KIO::filesize_t offset) override {
        if (kio__forwardingworkerbase_seek_isbase) {
            kio__forwardingworkerbase_seek_isbase = false;
            return KIO__ForwardingWorkerBase::seek(offset);
        } else if (kio__forwardingworkerbase_seek_callback != nullptr) {
            unsigned long long cbval1 = static_cast<unsigned long long>(offset);

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_seek_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::seek(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult truncate(KIO::filesize_t size) override {
        if (kio__forwardingworkerbase_truncate_isbase) {
            kio__forwardingworkerbase_truncate_isbase = false;
            return KIO__ForwardingWorkerBase::truncate(size);
        } else if (kio__forwardingworkerbase_truncate_callback != nullptr) {
            unsigned long long cbval1 = static_cast<unsigned long long>(size);

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_truncate_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::truncate(size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult close() override {
        if (kio__forwardingworkerbase_close_isbase) {
            kio__forwardingworkerbase_close_isbase = false;
            return KIO__ForwardingWorkerBase::close();
        } else if (kio__forwardingworkerbase_close_callback != nullptr) {
            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_close_callback();
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::close();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult chown(const QUrl& url, const QString& owner, const QString& group) override {
        if (kio__forwardingworkerbase_chown_isbase) {
            kio__forwardingworkerbase_chown_isbase = false;
            return KIO__ForwardingWorkerBase::chown(url, owner, group);
        } else if (kio__forwardingworkerbase_chown_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            const QString owner_ret = owner;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray owner_b = owner_ret.toUtf8();
            libqt_string owner_str;
            owner_str.len = owner_b.length();
            owner_str.data = static_cast<const char*>(malloc(owner_str.len + 1));
            memcpy((void*)owner_str.data, owner_b.data(), owner_str.len);
            ((char*)owner_str.data)[owner_str.len] = '\0';
            libqt_string cbval2 = owner_str;
            const QString group_ret = group;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray group_b = group_ret.toUtf8();
            libqt_string group_str;
            group_str.len = group_b.length();
            group_str.data = static_cast<const char*>(malloc(group_str.len + 1));
            memcpy((void*)group_str.data, group_b.data(), group_str.len);
            ((char*)group_str.data)[group_str.len] = '\0';
            libqt_string cbval3 = group_str;

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_chown_callback(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::chown(url, owner, group);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult special(const QByteArray& data) override {
        if (kio__forwardingworkerbase_special_isbase) {
            kio__forwardingworkerbase_special_isbase = false;
            return KIO__ForwardingWorkerBase::special(data);
        } else if (kio__forwardingworkerbase_special_callback != nullptr) {
            const QByteArray data_qb = data;
            libqt_string data_str;
            data_str.len = data_qb.length();
            data_str.data = static_cast<const char*>(malloc(data_str.len + 1));
            memcpy((void*)data_str.data, data_qb.data(), data_str.len);
            ((char*)data_str.data)[data_str.len] = '\0';
            libqt_string cbval1 = data_str;

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_special_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::special(data);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult fileSystemFreeSpace(const QUrl& url) override {
        if (kio__forwardingworkerbase_filesystemfreespace_isbase) {
            kio__forwardingworkerbase_filesystemfreespace_isbase = false;
            return KIO__ForwardingWorkerBase::fileSystemFreeSpace(url);
        } else if (kio__forwardingworkerbase_filesystemfreespace_callback != nullptr) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            KIO__WorkerResult* callback_ret = kio__forwardingworkerbase_filesystemfreespace_callback(this, cbval1);
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::fileSystemFreeSpace(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void worker_status() override {
        if (kio__forwardingworkerbase_workerstatus2_isbase) {
            kio__forwardingworkerbase_workerstatus2_isbase = false;
            KIO__ForwardingWorkerBase::worker_status();
        } else if (kio__forwardingworkerbase_workerstatus2_callback != nullptr) {
            kio__forwardingworkerbase_workerstatus2_callback();
        } else {
            KIO__ForwardingWorkerBase::worker_status();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reparseConfiguration() override {
        if (kio__forwardingworkerbase_reparseconfiguration_isbase) {
            kio__forwardingworkerbase_reparseconfiguration_isbase = false;
            KIO__ForwardingWorkerBase::reparseConfiguration();
        } else if (kio__forwardingworkerbase_reparseconfiguration_callback != nullptr) {
            kio__forwardingworkerbase_reparseconfiguration_callback();
        } else {
            KIO__ForwardingWorkerBase::reparseConfiguration();
        }
    }

    // Virtual method for C ABI access and custom callback
    QUrl processedUrl() const {
        if (kio__forwardingworkerbase_processedurl_isbase) {
            kio__forwardingworkerbase_processedurl_isbase = false;
            return KIO__ForwardingWorkerBase::processedUrl();
        } else if (kio__forwardingworkerbase_processedurl_callback != nullptr) {
            QUrl* callback_ret = kio__forwardingworkerbase_processedurl_callback();
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::processedUrl();
        }
    }

    // Virtual method for C ABI access and custom callback
    QUrl requestedUrl() const {
        if (kio__forwardingworkerbase_requestedurl_isbase) {
            kio__forwardingworkerbase_requestedurl_isbase = false;
            return KIO__ForwardingWorkerBase::requestedUrl();
        } else if (kio__forwardingworkerbase_requestedurl_callback != nullptr) {
            QUrl* callback_ret = kio__forwardingworkerbase_requestedurl_callback();
            return *callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::requestedUrl();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__forwardingworkerbase_sender_isbase) {
            kio__forwardingworkerbase_sender_isbase = false;
            return KIO__ForwardingWorkerBase::sender();
        } else if (kio__forwardingworkerbase_sender_callback != nullptr) {
            QObject* callback_ret = kio__forwardingworkerbase_sender_callback();
            return callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__forwardingworkerbase_sendersignalindex_isbase) {
            kio__forwardingworkerbase_sendersignalindex_isbase = false;
            return KIO__ForwardingWorkerBase::senderSignalIndex();
        } else if (kio__forwardingworkerbase_sendersignalindex_callback != nullptr) {
            int callback_ret = kio__forwardingworkerbase_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KIO__ForwardingWorkerBase::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__forwardingworkerbase_receivers_isbase) {
            kio__forwardingworkerbase_receivers_isbase = false;
            return KIO__ForwardingWorkerBase::receivers(signal);
        } else if (kio__forwardingworkerbase_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kio__forwardingworkerbase_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KIO__ForwardingWorkerBase::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__forwardingworkerbase_issignalconnected_isbase) {
            kio__forwardingworkerbase_issignalconnected_isbase = false;
            return KIO__ForwardingWorkerBase::isSignalConnected(signal);
        } else if (kio__forwardingworkerbase_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kio__forwardingworkerbase_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KIO__ForwardingWorkerBase::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool KIO__ForwardingWorkerBase_RewriteUrl(KIO::ForwardingWorkerBase* self, const QUrl* url, QUrl* newURL);
    friend bool KIO__ForwardingWorkerBase_QBaseRewriteUrl(KIO::ForwardingWorkerBase* self, const QUrl* url, QUrl* newURL);
    friend void KIO__ForwardingWorkerBase_AdjustUDSEntry(const KIO::ForwardingWorkerBase* self, KIO__UDSEntry* entry, int creationMode);
    friend void KIO__ForwardingWorkerBase_QBaseAdjustUDSEntry(const KIO::ForwardingWorkerBase* self, KIO__UDSEntry* entry, int creationMode);
    friend void KIO__ForwardingWorkerBase_TimerEvent(KIO::ForwardingWorkerBase* self, QTimerEvent* event);
    friend void KIO__ForwardingWorkerBase_QBaseTimerEvent(KIO::ForwardingWorkerBase* self, QTimerEvent* event);
    friend void KIO__ForwardingWorkerBase_ChildEvent(KIO::ForwardingWorkerBase* self, QChildEvent* event);
    friend void KIO__ForwardingWorkerBase_QBaseChildEvent(KIO::ForwardingWorkerBase* self, QChildEvent* event);
    friend void KIO__ForwardingWorkerBase_CustomEvent(KIO::ForwardingWorkerBase* self, QEvent* event);
    friend void KIO__ForwardingWorkerBase_QBaseCustomEvent(KIO::ForwardingWorkerBase* self, QEvent* event);
    friend void KIO__ForwardingWorkerBase_ConnectNotify(KIO::ForwardingWorkerBase* self, const QMetaMethod* signal);
    friend void KIO__ForwardingWorkerBase_QBaseConnectNotify(KIO::ForwardingWorkerBase* self, const QMetaMethod* signal);
    friend void KIO__ForwardingWorkerBase_DisconnectNotify(KIO::ForwardingWorkerBase* self, const QMetaMethod* signal);
    friend void KIO__ForwardingWorkerBase_QBaseDisconnectNotify(KIO::ForwardingWorkerBase* self, const QMetaMethod* signal);
    friend QUrl* KIO__ForwardingWorkerBase_ProcessedUrl(const KIO::ForwardingWorkerBase* self);
    friend QUrl* KIO__ForwardingWorkerBase_QBaseProcessedUrl(const KIO::ForwardingWorkerBase* self);
    friend QUrl* KIO__ForwardingWorkerBase_RequestedUrl(const KIO::ForwardingWorkerBase* self);
    friend QUrl* KIO__ForwardingWorkerBase_QBaseRequestedUrl(const KIO::ForwardingWorkerBase* self);
    friend QObject* KIO__ForwardingWorkerBase_Sender(const KIO::ForwardingWorkerBase* self);
    friend QObject* KIO__ForwardingWorkerBase_QBaseSender(const KIO::ForwardingWorkerBase* self);
    friend int KIO__ForwardingWorkerBase_SenderSignalIndex(const KIO::ForwardingWorkerBase* self);
    friend int KIO__ForwardingWorkerBase_QBaseSenderSignalIndex(const KIO::ForwardingWorkerBase* self);
    friend int KIO__ForwardingWorkerBase_Receivers(const KIO::ForwardingWorkerBase* self, const char* signal);
    friend int KIO__ForwardingWorkerBase_QBaseReceivers(const KIO::ForwardingWorkerBase* self, const char* signal);
    friend bool KIO__ForwardingWorkerBase_IsSignalConnected(const KIO::ForwardingWorkerBase* self, const QMetaMethod* signal);
    friend bool KIO__ForwardingWorkerBase_QBaseIsSignalConnected(const KIO::ForwardingWorkerBase* self, const QMetaMethod* signal);
};

#endif
