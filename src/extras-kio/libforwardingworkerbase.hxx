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
    using KIO__ForwardingWorkerBase_MetaObject_Callback = QMetaObject* (*)();
    using KIO__ForwardingWorkerBase_Metacast_Callback = void* (*)(KIO__ForwardingWorkerBase*, const char*);
    using KIO__ForwardingWorkerBase_Metacall_Callback = int (*)(KIO__ForwardingWorkerBase*, int, int, void**);
    using KIO__ForwardingWorkerBase_Get_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*);
    using KIO__ForwardingWorkerBase_Put_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, int, int);
    using KIO__ForwardingWorkerBase_Stat_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*);
    using KIO__ForwardingWorkerBase_Mimetype_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*);
    using KIO__ForwardingWorkerBase_ListDir_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*);
    using KIO__ForwardingWorkerBase_Mkdir_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, int);
    using KIO__ForwardingWorkerBase_Rename_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, QUrl*, int);
    using KIO__ForwardingWorkerBase_Symlink_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, const char*, QUrl*, int);
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
    using KIO__ForwardingWorkerBase_SetHost_Callback = void (*)(KIO__ForwardingWorkerBase*, const char*, uint16_t, const char*, const char*);
    using KIO__ForwardingWorkerBase_OpenConnection_Callback = KIO__WorkerResult* (*)();
    using KIO__ForwardingWorkerBase_CloseConnection_Callback = void (*)();
    using KIO__ForwardingWorkerBase_Open_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, int);
    using KIO__ForwardingWorkerBase_Read_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, unsigned long long);
    using KIO__ForwardingWorkerBase_Write_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, libqt_string);
    using KIO__ForwardingWorkerBase_Seek_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, unsigned long long);
    using KIO__ForwardingWorkerBase_Truncate_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, unsigned long long);
    using KIO__ForwardingWorkerBase_Close_Callback = KIO__WorkerResult* (*)();
    using KIO__ForwardingWorkerBase_Chown_Callback = KIO__WorkerResult* (*)(KIO__ForwardingWorkerBase*, QUrl*, const char*, const char*);
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
    KIO__ForwardingWorkerBase_MetaObject_Callback kio__forwardingworkerbase_metaobject_callback = nullptr;
    KIO__ForwardingWorkerBase_Metacast_Callback kio__forwardingworkerbase_metacast_callback = nullptr;
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
    mutable bool kio__forwardingworkerbase_metaobject_isbase = false;
    mutable bool kio__forwardingworkerbase_metacast_isbase = false;
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

    // Callback setters
    inline void setKIO__ForwardingWorkerBase_MetaObject_Callback(KIO__ForwardingWorkerBase_MetaObject_Callback cb) { kio__forwardingworkerbase_metaobject_callback = cb; }
    inline void setKIO__ForwardingWorkerBase_Metacast_Callback(KIO__ForwardingWorkerBase_Metacast_Callback cb) { kio__forwardingworkerbase_metacast_callback = cb; }
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
    inline void setKIO__ForwardingWorkerBase_MetaObject_IsBase(bool value) const { kio__forwardingworkerbase_metaobject_isbase = value; }
    inline void setKIO__ForwardingWorkerBase_Metacast_IsBase(bool value) const { kio__forwardingworkerbase_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (kio__forwardingworkerbase_metaobject_isbase) {
            kio__forwardingworkerbase_metaobject_isbase = false;
            return KIO__ForwardingWorkerBase::metaObject();
        }
        auto metaobject_cb = kio__forwardingworkerbase_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KIO__ForwardingWorkerBase::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kio__forwardingworkerbase_metacast_isbase) {
            kio__forwardingworkerbase_metacast_isbase = false;
            return KIO__ForwardingWorkerBase::qt_metacast(param1);
        }
        auto metacast_cb = kio__forwardingworkerbase_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__ForwardingWorkerBase::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kio__forwardingworkerbase_metacall_isbase) {
            kio__forwardingworkerbase_metacall_isbase = false;
            return KIO__ForwardingWorkerBase::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = kio__forwardingworkerbase_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KIO__ForwardingWorkerBase::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult get(const QUrl& url) override {
        if (kio__forwardingworkerbase_get_isbase) {
            kio__forwardingworkerbase_get_isbase = false;
            return KIO__ForwardingWorkerBase::get(url);
        }
        auto get_cb = kio__forwardingworkerbase_get_callback;
        if (get_cb) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            KIO__WorkerResult* callback_ret = get_cb(this, cbval1);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::get(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult put(const QUrl& url, int permissions, KIO::JobFlags flags) override {
        if (kio__forwardingworkerbase_put_isbase) {
            kio__forwardingworkerbase_put_isbase = false;
            return KIO__ForwardingWorkerBase::put(url, permissions, flags);
        }
        auto put_cb = kio__forwardingworkerbase_put_callback;
        if (put_cb) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = permissions;
            int cbval3 = static_cast<int>(flags);

            KIO__WorkerResult* callback_ret = put_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::put(url, permissions, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult stat(const QUrl& url) override {
        if (kio__forwardingworkerbase_stat_isbase) {
            kio__forwardingworkerbase_stat_isbase = false;
            return KIO__ForwardingWorkerBase::stat(url);
        }
        auto stat_cb = kio__forwardingworkerbase_stat_callback;
        if (stat_cb) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            KIO__WorkerResult* callback_ret = stat_cb(this, cbval1);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::stat(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult mimetype(const QUrl& url) override {
        if (kio__forwardingworkerbase_mimetype_isbase) {
            kio__forwardingworkerbase_mimetype_isbase = false;
            return KIO__ForwardingWorkerBase::mimetype(url);
        }
        auto mimetype_cb = kio__forwardingworkerbase_mimetype_callback;
        if (mimetype_cb) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            KIO__WorkerResult* callback_ret = mimetype_cb(this, cbval1);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::mimetype(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult listDir(const QUrl& url) override {
        if (kio__forwardingworkerbase_listdir_isbase) {
            kio__forwardingworkerbase_listdir_isbase = false;
            return KIO__ForwardingWorkerBase::listDir(url);
        }
        auto listdir_cb = kio__forwardingworkerbase_listdir_callback;
        if (listdir_cb) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            KIO__WorkerResult* callback_ret = listdir_cb(this, cbval1);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::listDir(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult mkdir(const QUrl& url, int permissions) override {
        if (kio__forwardingworkerbase_mkdir_isbase) {
            kio__forwardingworkerbase_mkdir_isbase = false;
            return KIO__ForwardingWorkerBase::mkdir(url, permissions);
        }
        auto mkdir_cb = kio__forwardingworkerbase_mkdir_callback;
        if (mkdir_cb) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = permissions;

            KIO__WorkerResult* callback_ret = mkdir_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::mkdir(url, permissions);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult rename(const QUrl& src, const QUrl& dest, KIO::JobFlags flags) override {
        if (kio__forwardingworkerbase_rename_isbase) {
            kio__forwardingworkerbase_rename_isbase = false;
            return KIO__ForwardingWorkerBase::rename(src, dest, flags);
        }
        auto rename_cb = kio__forwardingworkerbase_rename_callback;
        if (rename_cb) {
            const QUrl& src_ret = src;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&src_ret);
            const QUrl& dest_ret = dest;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&dest_ret);
            int cbval3 = static_cast<int>(flags);

            KIO__WorkerResult* callback_ret = rename_cb(this, cbval1, cbval2, cbval3);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::rename(src, dest, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult symlink(const QString& target, const QUrl& dest, KIO::JobFlags flags) override {
        if (kio__forwardingworkerbase_symlink_isbase) {
            kio__forwardingworkerbase_symlink_isbase = false;
            return KIO__ForwardingWorkerBase::symlink(target, dest, flags);
        }
        auto symlink_cb = kio__forwardingworkerbase_symlink_callback;
        if (symlink_cb) {
            const QString target_ret = target;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray target_b = target_ret.toUtf8();
            auto target_str_len = target_b.length();
            const char* target_str = static_cast<const char*>(malloc(target_str_len + 1));
            memcpy((void*)target_str, target_b.data(), target_str_len);
            ((char*)target_str)[target_str_len] = '\0';
            const char* cbval1 = target_str;
            const QUrl& dest_ret = dest;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&dest_ret);
            int cbval3 = static_cast<int>(flags);

            KIO__WorkerResult* callback_ret = symlink_cb(this, cbval1, cbval2, cbval3);
            libqt_free(target_str);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::symlink(target, dest, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult chmod(const QUrl& url, int permissions) override {
        if (kio__forwardingworkerbase_chmod_isbase) {
            kio__forwardingworkerbase_chmod_isbase = false;
            return KIO__ForwardingWorkerBase::chmod(url, permissions);
        }
        auto chmod_cb = kio__forwardingworkerbase_chmod_callback;
        if (chmod_cb) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = permissions;

            KIO__WorkerResult* callback_ret = chmod_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::chmod(url, permissions);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult setModificationTime(const QUrl& url, const QDateTime& mtime) override {
        if (kio__forwardingworkerbase_setmodificationtime_isbase) {
            kio__forwardingworkerbase_setmodificationtime_isbase = false;
            return KIO__ForwardingWorkerBase::setModificationTime(url, mtime);
        }
        auto setmodificationtime_cb = kio__forwardingworkerbase_setmodificationtime_callback;
        if (setmodificationtime_cb) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            const QDateTime& mtime_ret = mtime;
            // Cast returned reference into pointer
            QDateTime* cbval2 = const_cast<QDateTime*>(&mtime_ret);

            KIO__WorkerResult* callback_ret = setmodificationtime_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::setModificationTime(url, mtime);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult copy(const QUrl& src, const QUrl& dest, int permissions, KIO::JobFlags flags) override {
        if (kio__forwardingworkerbase_copy_isbase) {
            kio__forwardingworkerbase_copy_isbase = false;
            return KIO__ForwardingWorkerBase::copy(src, dest, permissions, flags);
        }
        auto copy_cb = kio__forwardingworkerbase_copy_callback;
        if (copy_cb) {
            const QUrl& src_ret = src;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&src_ret);
            const QUrl& dest_ret = dest;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&dest_ret);
            int cbval3 = permissions;
            int cbval4 = static_cast<int>(flags);

            KIO__WorkerResult* callback_ret = copy_cb(this, cbval1, cbval2, cbval3, cbval4);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::copy(src, dest, permissions, flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult del(const QUrl& url, bool isfile) override {
        if (kio__forwardingworkerbase_del_isbase) {
            kio__forwardingworkerbase_del_isbase = false;
            return KIO__ForwardingWorkerBase::del(url, isfile);
        }
        auto del_cb = kio__forwardingworkerbase_del_callback;
        if (del_cb) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            bool cbval2 = isfile;

            KIO__WorkerResult* callback_ret = del_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::del(url, isfile);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool rewriteUrl(const QUrl& url, QUrl& newURL) override {
        auto rewriteurl_cb = kio__forwardingworkerbase_rewriteurl_callback;
        if (rewriteurl_cb) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            QUrl& newURL_ret = newURL;
            // Cast returned reference into pointer
            QUrl* cbval2 = &newURL_ret;

            bool callback_ret = rewriteurl_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void adjustUDSEntry(KIO::UDSEntry& entry, KIO::ForwardingWorkerBase::UDSEntryCreationMode creationMode) const override {
        if (kio__forwardingworkerbase_adjustudsentry_isbase) {
            kio__forwardingworkerbase_adjustudsentry_isbase = false;
            KIO__ForwardingWorkerBase::adjustUDSEntry(entry, creationMode);
            return;
        }
        auto adjustudsentry_cb = kio__forwardingworkerbase_adjustudsentry_callback;
        if (adjustudsentry_cb) {
            KIO::UDSEntry& entry_ret = entry;
            // Cast returned reference into pointer
            KIO__UDSEntry* cbval1 = &entry_ret;
            int cbval2 = static_cast<int>(creationMode);

            adjustudsentry_cb(this, cbval1, cbval2);
            return;
        }
        KIO__ForwardingWorkerBase::adjustUDSEntry(entry, creationMode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kio__forwardingworkerbase_event_isbase) {
            kio__forwardingworkerbase_event_isbase = false;
            return KIO__ForwardingWorkerBase::event(event);
        }
        auto event_cb = kio__forwardingworkerbase_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__ForwardingWorkerBase::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kio__forwardingworkerbase_eventfilter_isbase) {
            kio__forwardingworkerbase_eventfilter_isbase = false;
            return KIO__ForwardingWorkerBase::eventFilter(watched, event);
        }
        auto eventfilter_cb = kio__forwardingworkerbase_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KIO__ForwardingWorkerBase::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kio__forwardingworkerbase_timerevent_isbase) {
            kio__forwardingworkerbase_timerevent_isbase = false;
            KIO__ForwardingWorkerBase::timerEvent(event);
            return;
        }
        auto timerevent_cb = kio__forwardingworkerbase_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KIO__ForwardingWorkerBase::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kio__forwardingworkerbase_childevent_isbase) {
            kio__forwardingworkerbase_childevent_isbase = false;
            KIO__ForwardingWorkerBase::childEvent(event);
            return;
        }
        auto childevent_cb = kio__forwardingworkerbase_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KIO__ForwardingWorkerBase::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kio__forwardingworkerbase_customevent_isbase) {
            kio__forwardingworkerbase_customevent_isbase = false;
            KIO__ForwardingWorkerBase::customEvent(event);
            return;
        }
        auto customevent_cb = kio__forwardingworkerbase_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KIO__ForwardingWorkerBase::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kio__forwardingworkerbase_connectnotify_isbase) {
            kio__forwardingworkerbase_connectnotify_isbase = false;
            KIO__ForwardingWorkerBase::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = kio__forwardingworkerbase_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KIO__ForwardingWorkerBase::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kio__forwardingworkerbase_disconnectnotify_isbase) {
            kio__forwardingworkerbase_disconnectnotify_isbase = false;
            KIO__ForwardingWorkerBase::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = kio__forwardingworkerbase_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KIO__ForwardingWorkerBase::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void appConnectionMade() override {
        if (kio__forwardingworkerbase_appconnectionmade_isbase) {
            kio__forwardingworkerbase_appconnectionmade_isbase = false;
            KIO__ForwardingWorkerBase::appConnectionMade();
            return;
        }
        auto appconnectionmade_cb = kio__forwardingworkerbase_appconnectionmade_callback;
        if (appconnectionmade_cb) {
            appconnectionmade_cb();
            return;
        }
        KIO__ForwardingWorkerBase::appConnectionMade();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setHost(const QString& host, quint16 port, const QString& user, const QString& pass) override {
        if (kio__forwardingworkerbase_sethost_isbase) {
            kio__forwardingworkerbase_sethost_isbase = false;
            KIO__ForwardingWorkerBase::setHost(host, port, user, pass);
            return;
        }
        auto sethost_cb = kio__forwardingworkerbase_sethost_callback;
        if (sethost_cb) {
            const QString host_ret = host;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray host_b = host_ret.toUtf8();
            auto host_str_len = host_b.length();
            const char* host_str = static_cast<const char*>(malloc(host_str_len + 1));
            memcpy((void*)host_str, host_b.data(), host_str_len);
            ((char*)host_str)[host_str_len] = '\0';
            const char* cbval1 = host_str;
            uint16_t cbval2 = static_cast<uint16_t>(port);
            const QString user_ret = user;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray user_b = user_ret.toUtf8();
            auto user_str_len = user_b.length();
            const char* user_str = static_cast<const char*>(malloc(user_str_len + 1));
            memcpy((void*)user_str, user_b.data(), user_str_len);
            ((char*)user_str)[user_str_len] = '\0';
            const char* cbval3 = user_str;
            const QString pass_ret = pass;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray pass_b = pass_ret.toUtf8();
            auto pass_str_len = pass_b.length();
            const char* pass_str = static_cast<const char*>(malloc(pass_str_len + 1));
            memcpy((void*)pass_str, pass_b.data(), pass_str_len);
            ((char*)pass_str)[pass_str_len] = '\0';
            const char* cbval4 = pass_str;

            sethost_cb(this, cbval1, cbval2, cbval3, cbval4);
            libqt_free(host_str);
            libqt_free(user_str);
            libqt_free(pass_str);
            return;
        }
        KIO__ForwardingWorkerBase::setHost(host, port, user, pass);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult openConnection() override {
        if (kio__forwardingworkerbase_openconnection_isbase) {
            kio__forwardingworkerbase_openconnection_isbase = false;
            return KIO__ForwardingWorkerBase::openConnection();
        }
        auto openconnection_cb = kio__forwardingworkerbase_openconnection_callback;
        if (openconnection_cb) {
            KIO__WorkerResult* callback_ret = openconnection_cb();
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::openConnection();
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeConnection() override {
        if (kio__forwardingworkerbase_closeconnection_isbase) {
            kio__forwardingworkerbase_closeconnection_isbase = false;
            KIO__ForwardingWorkerBase::closeConnection();
            return;
        }
        auto closeconnection_cb = kio__forwardingworkerbase_closeconnection_callback;
        if (closeconnection_cb) {
            closeconnection_cb();
            return;
        }
        KIO__ForwardingWorkerBase::closeConnection();
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult open(const QUrl& url, QIODevice::OpenMode mode) override {
        if (kio__forwardingworkerbase_open_isbase) {
            kio__forwardingworkerbase_open_isbase = false;
            return KIO__ForwardingWorkerBase::open(url, mode);
        }
        auto open_cb = kio__forwardingworkerbase_open_callback;
        if (open_cb) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            int cbval2 = static_cast<int>(mode);

            KIO__WorkerResult* callback_ret = open_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::open(url, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult read(KIO::filesize_t size) override {
        if (kio__forwardingworkerbase_read_isbase) {
            kio__forwardingworkerbase_read_isbase = false;
            return KIO__ForwardingWorkerBase::read(size);
        }
        auto read_cb = kio__forwardingworkerbase_read_callback;
        if (read_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(size);

            KIO__WorkerResult* callback_ret = read_cb(this, cbval1);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::read(size);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult write(const QByteArray& data) override {
        if (kio__forwardingworkerbase_write_isbase) {
            kio__forwardingworkerbase_write_isbase = false;
            return KIO__ForwardingWorkerBase::write(data);
        }
        auto write_cb = kio__forwardingworkerbase_write_callback;
        if (write_cb) {
            const QByteArray data_qb = data;
            libqt_string data_str;
            data_str.len = data_qb.length();
            data_str.data = static_cast<char*>(malloc(data_str.len));
            memcpy((void*)data_str.data, data_qb.data(), data_str.len);
            libqt_string cbval1 = data_str;

            KIO__WorkerResult* callback_ret = write_cb(this, cbval1);
            libqt_free(data_str.data);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::write(data);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult seek(KIO::filesize_t offset) override {
        if (kio__forwardingworkerbase_seek_isbase) {
            kio__forwardingworkerbase_seek_isbase = false;
            return KIO__ForwardingWorkerBase::seek(offset);
        }
        auto seek_cb = kio__forwardingworkerbase_seek_callback;
        if (seek_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(offset);

            KIO__WorkerResult* callback_ret = seek_cb(this, cbval1);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::seek(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult truncate(KIO::filesize_t size) override {
        if (kio__forwardingworkerbase_truncate_isbase) {
            kio__forwardingworkerbase_truncate_isbase = false;
            return KIO__ForwardingWorkerBase::truncate(size);
        }
        auto truncate_cb = kio__forwardingworkerbase_truncate_callback;
        if (truncate_cb) {
            unsigned long long cbval1 = static_cast<unsigned long long>(size);

            KIO__WorkerResult* callback_ret = truncate_cb(this, cbval1);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::truncate(size);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult close() override {
        if (kio__forwardingworkerbase_close_isbase) {
            kio__forwardingworkerbase_close_isbase = false;
            return KIO__ForwardingWorkerBase::close();
        }
        auto close_cb = kio__forwardingworkerbase_close_callback;
        if (close_cb) {
            KIO__WorkerResult* callback_ret = close_cb();
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult chown(const QUrl& url, const QString& owner, const QString& group) override {
        if (kio__forwardingworkerbase_chown_isbase) {
            kio__forwardingworkerbase_chown_isbase = false;
            return KIO__ForwardingWorkerBase::chown(url, owner, group);
        }
        auto chown_cb = kio__forwardingworkerbase_chown_callback;
        if (chown_cb) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);
            const QString owner_ret = owner;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray owner_b = owner_ret.toUtf8();
            auto owner_str_len = owner_b.length();
            const char* owner_str = static_cast<const char*>(malloc(owner_str_len + 1));
            memcpy((void*)owner_str, owner_b.data(), owner_str_len);
            ((char*)owner_str)[owner_str_len] = '\0';
            const char* cbval2 = owner_str;
            const QString group_ret = group;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray group_b = group_ret.toUtf8();
            auto group_str_len = group_b.length();
            const char* group_str = static_cast<const char*>(malloc(group_str_len + 1));
            memcpy((void*)group_str, group_b.data(), group_str_len);
            ((char*)group_str)[group_str_len] = '\0';
            const char* cbval3 = group_str;

            KIO__WorkerResult* callback_ret = chown_cb(this, cbval1, cbval2, cbval3);
            libqt_free(owner_str);
            libqt_free(group_str);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::chown(url, owner, group);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult special(const QByteArray& data) override {
        if (kio__forwardingworkerbase_special_isbase) {
            kio__forwardingworkerbase_special_isbase = false;
            return KIO__ForwardingWorkerBase::special(data);
        }
        auto special_cb = kio__forwardingworkerbase_special_callback;
        if (special_cb) {
            const QByteArray data_qb = data;
            libqt_string data_str;
            data_str.len = data_qb.length();
            data_str.data = static_cast<char*>(malloc(data_str.len));
            memcpy((void*)data_str.data, data_qb.data(), data_str.len);
            libqt_string cbval1 = data_str;

            KIO__WorkerResult* callback_ret = special_cb(this, cbval1);
            libqt_free(data_str.data);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::special(data);
    }

    // Virtual method for C ABI access and custom callback
    virtual KIO::WorkerResult fileSystemFreeSpace(const QUrl& url) override {
        if (kio__forwardingworkerbase_filesystemfreespace_isbase) {
            kio__forwardingworkerbase_filesystemfreespace_isbase = false;
            return KIO__ForwardingWorkerBase::fileSystemFreeSpace(url);
        }
        auto filesystemfreespace_cb = kio__forwardingworkerbase_filesystemfreespace_callback;
        if (filesystemfreespace_cb) {
            const QUrl& url_ret = url;
            // Cast returned reference into pointer
            QUrl* cbval1 = const_cast<QUrl*>(&url_ret);

            KIO__WorkerResult* callback_ret = filesystemfreespace_cb(this, cbval1);
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::fileSystemFreeSpace(url);
    }

    // Virtual method for C ABI access and custom callback
    virtual void worker_status() override {
        if (kio__forwardingworkerbase_workerstatus2_isbase) {
            kio__forwardingworkerbase_workerstatus2_isbase = false;
            KIO__ForwardingWorkerBase::worker_status();
            return;
        }
        auto workerstatus2_cb = kio__forwardingworkerbase_workerstatus2_callback;
        if (workerstatus2_cb) {
            workerstatus2_cb();
            return;
        }
        KIO__ForwardingWorkerBase::worker_status();
    }

    // Virtual method for C ABI access and custom callback
    virtual void reparseConfiguration() override {
        if (kio__forwardingworkerbase_reparseconfiguration_isbase) {
            kio__forwardingworkerbase_reparseconfiguration_isbase = false;
            KIO__ForwardingWorkerBase::reparseConfiguration();
            return;
        }
        auto reparseconfiguration_cb = kio__forwardingworkerbase_reparseconfiguration_callback;
        if (reparseconfiguration_cb) {
            reparseconfiguration_cb();
            return;
        }
        KIO__ForwardingWorkerBase::reparseConfiguration();
    }

    // Virtual method for C ABI access and custom callback
    QUrl processedUrl() const {
        if (kio__forwardingworkerbase_processedurl_isbase) {
            kio__forwardingworkerbase_processedurl_isbase = false;
            return KIO__ForwardingWorkerBase::processedUrl();
        }
        auto processedurl_cb = kio__forwardingworkerbase_processedurl_callback;
        if (processedurl_cb) {
            QUrl* callback_ret = processedurl_cb();
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::processedUrl();
    }

    // Virtual method for C ABI access and custom callback
    QUrl requestedUrl() const {
        if (kio__forwardingworkerbase_requestedurl_isbase) {
            kio__forwardingworkerbase_requestedurl_isbase = false;
            return KIO__ForwardingWorkerBase::requestedUrl();
        }
        auto requestedurl_cb = kio__forwardingworkerbase_requestedurl_callback;
        if (requestedurl_cb) {
            QUrl* callback_ret = requestedurl_cb();
            return *callback_ret;
        }
        return KIO__ForwardingWorkerBase::requestedUrl();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kio__forwardingworkerbase_sender_isbase) {
            kio__forwardingworkerbase_sender_isbase = false;
            return KIO__ForwardingWorkerBase::sender();
        }
        auto sender_cb = kio__forwardingworkerbase_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KIO__ForwardingWorkerBase::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kio__forwardingworkerbase_sendersignalindex_isbase) {
            kio__forwardingworkerbase_sendersignalindex_isbase = false;
            return KIO__ForwardingWorkerBase::senderSignalIndex();
        }
        auto sendersignalindex_cb = kio__forwardingworkerbase_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KIO__ForwardingWorkerBase::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kio__forwardingworkerbase_receivers_isbase) {
            kio__forwardingworkerbase_receivers_isbase = false;
            return KIO__ForwardingWorkerBase::receivers(signal);
        }
        auto receivers_cb = kio__forwardingworkerbase_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KIO__ForwardingWorkerBase::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kio__forwardingworkerbase_issignalconnected_isbase) {
            kio__forwardingworkerbase_issignalconnected_isbase = false;
            return KIO__ForwardingWorkerBase::isSignalConnected(signal);
        }
        auto issignalconnected_cb = kio__forwardingworkerbase_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KIO__ForwardingWorkerBase::isSignalConnected(signal);
    }

    // Friend functions
    friend bool KIO__ForwardingWorkerBase_RewriteUrl(KIO::ForwardingWorkerBase* self, const QUrl* url, QUrl* newURL);
    friend bool KIO__ForwardingWorkerBase_SuperRewriteUrl(KIO::ForwardingWorkerBase* self, const QUrl* url, QUrl* newURL);
    friend void KIO__ForwardingWorkerBase_AdjustUDSEntry(const KIO::ForwardingWorkerBase* self, KIO__UDSEntry* entry, int creationMode);
    friend void KIO__ForwardingWorkerBase_SuperAdjustUDSEntry(const KIO::ForwardingWorkerBase* self, KIO__UDSEntry* entry, int creationMode);
    friend void KIO__ForwardingWorkerBase_TimerEvent(KIO::ForwardingWorkerBase* self, QTimerEvent* event);
    friend void KIO__ForwardingWorkerBase_SuperTimerEvent(KIO::ForwardingWorkerBase* self, QTimerEvent* event);
    friend void KIO__ForwardingWorkerBase_ChildEvent(KIO::ForwardingWorkerBase* self, QChildEvent* event);
    friend void KIO__ForwardingWorkerBase_SuperChildEvent(KIO::ForwardingWorkerBase* self, QChildEvent* event);
    friend void KIO__ForwardingWorkerBase_CustomEvent(KIO::ForwardingWorkerBase* self, QEvent* event);
    friend void KIO__ForwardingWorkerBase_SuperCustomEvent(KIO::ForwardingWorkerBase* self, QEvent* event);
    friend void KIO__ForwardingWorkerBase_ConnectNotify(KIO::ForwardingWorkerBase* self, const QMetaMethod* signal);
    friend void KIO__ForwardingWorkerBase_SuperConnectNotify(KIO::ForwardingWorkerBase* self, const QMetaMethod* signal);
    friend void KIO__ForwardingWorkerBase_DisconnectNotify(KIO::ForwardingWorkerBase* self, const QMetaMethod* signal);
    friend void KIO__ForwardingWorkerBase_SuperDisconnectNotify(KIO::ForwardingWorkerBase* self, const QMetaMethod* signal);
    friend QUrl* KIO__ForwardingWorkerBase_ProcessedUrl(const KIO::ForwardingWorkerBase* self);
    friend QUrl* KIO__ForwardingWorkerBase_SuperProcessedUrl(const KIO::ForwardingWorkerBase* self);
    friend QUrl* KIO__ForwardingWorkerBase_RequestedUrl(const KIO::ForwardingWorkerBase* self);
    friend QUrl* KIO__ForwardingWorkerBase_SuperRequestedUrl(const KIO::ForwardingWorkerBase* self);
    friend QObject* KIO__ForwardingWorkerBase_Sender(const KIO::ForwardingWorkerBase* self);
    friend QObject* KIO__ForwardingWorkerBase_SuperSender(const KIO::ForwardingWorkerBase* self);
    friend int KIO__ForwardingWorkerBase_SenderSignalIndex(const KIO::ForwardingWorkerBase* self);
    friend int KIO__ForwardingWorkerBase_SuperSenderSignalIndex(const KIO::ForwardingWorkerBase* self);
    friend int KIO__ForwardingWorkerBase_Receivers(const KIO::ForwardingWorkerBase* self, const char* signal);
    friend int KIO__ForwardingWorkerBase_SuperReceivers(const KIO::ForwardingWorkerBase* self, const char* signal);
    friend bool KIO__ForwardingWorkerBase_IsSignalConnected(const KIO::ForwardingWorkerBase* self, const QMetaMethod* signal);
    friend bool KIO__ForwardingWorkerBase_SuperIsSignalConnected(const KIO::ForwardingWorkerBase* self, const QMetaMethod* signal);
};

#endif
