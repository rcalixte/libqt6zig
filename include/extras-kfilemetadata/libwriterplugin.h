#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATAC_LIBWRITERPLUGIN_H
#define SRC_EXTRAS_KFILEMETADATAC_LIBWRITERPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__WriteData)
typedef KFileMetaData::WriteData KFileMetaData__WriteData;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__WriterPlugin)
typedef KFileMetaData::WriterPlugin KFileMetaData__WriterPlugin;
#endif
#else
typedef struct KFileMetaData__WriteData KFileMetaData__WriteData;
typedef struct KFileMetaData__WriterPlugin KFileMetaData__WriterPlugin;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KFileMetaData__WriterPlugin* KFileMetaData__WriterPlugin_new(QObject* parent);
QMetaObject* KFileMetaData__WriterPlugin_MetaObject(const KFileMetaData__WriterPlugin* self);
void* KFileMetaData__WriterPlugin_Metacast(KFileMetaData__WriterPlugin* self, const char* param1);
int KFileMetaData__WriterPlugin_Metacall(KFileMetaData__WriterPlugin* self, int param1, int param2, void** param3);
libqt_list /* of libqt_string */ KFileMetaData__WriterPlugin_WriteMimetypes(const KFileMetaData__WriterPlugin* self);
void KFileMetaData__WriterPlugin_Write(KFileMetaData__WriterPlugin* self, const KFileMetaData__WriteData* data);
void KFileMetaData__WriterPlugin_OnMetaObject(const KFileMetaData__WriterPlugin* self, intptr_t slot);
QMetaObject* KFileMetaData__WriterPlugin_SuperMetaObject(const KFileMetaData__WriterPlugin* self);
void KFileMetaData__WriterPlugin_OnMetacast(KFileMetaData__WriterPlugin* self, intptr_t slot);
void* KFileMetaData__WriterPlugin_SuperMetacast(KFileMetaData__WriterPlugin* self, const char* param1);
void KFileMetaData__WriterPlugin_OnMetacall(KFileMetaData__WriterPlugin* self, intptr_t slot);
int KFileMetaData__WriterPlugin_SuperMetacall(KFileMetaData__WriterPlugin* self, int param1, int param2, void** param3);
void KFileMetaData__WriterPlugin_OnWriteMimetypes(const KFileMetaData__WriterPlugin* self, intptr_t slot);
libqt_list /* of libqt_string */ KFileMetaData__WriterPlugin_SuperWriteMimetypes(const KFileMetaData__WriterPlugin* self);
void KFileMetaData__WriterPlugin_OnWrite(KFileMetaData__WriterPlugin* self, intptr_t slot);
void KFileMetaData__WriterPlugin_SuperWrite(KFileMetaData__WriterPlugin* self, const KFileMetaData__WriteData* data);
bool KFileMetaData__WriterPlugin_Event(KFileMetaData__WriterPlugin* self, QEvent* event);
void KFileMetaData__WriterPlugin_OnEvent(KFileMetaData__WriterPlugin* self, intptr_t slot);
bool KFileMetaData__WriterPlugin_SuperEvent(KFileMetaData__WriterPlugin* self, QEvent* event);
bool KFileMetaData__WriterPlugin_EventFilter(KFileMetaData__WriterPlugin* self, QObject* watched, QEvent* event);
void KFileMetaData__WriterPlugin_OnEventFilter(KFileMetaData__WriterPlugin* self, intptr_t slot);
bool KFileMetaData__WriterPlugin_SuperEventFilter(KFileMetaData__WriterPlugin* self, QObject* watched, QEvent* event);
void KFileMetaData__WriterPlugin_TimerEvent(KFileMetaData__WriterPlugin* self, QTimerEvent* event);
void KFileMetaData__WriterPlugin_OnTimerEvent(KFileMetaData__WriterPlugin* self, intptr_t slot);
void KFileMetaData__WriterPlugin_SuperTimerEvent(KFileMetaData__WriterPlugin* self, QTimerEvent* event);
void KFileMetaData__WriterPlugin_ChildEvent(KFileMetaData__WriterPlugin* self, QChildEvent* event);
void KFileMetaData__WriterPlugin_OnChildEvent(KFileMetaData__WriterPlugin* self, intptr_t slot);
void KFileMetaData__WriterPlugin_SuperChildEvent(KFileMetaData__WriterPlugin* self, QChildEvent* event);
void KFileMetaData__WriterPlugin_CustomEvent(KFileMetaData__WriterPlugin* self, QEvent* event);
void KFileMetaData__WriterPlugin_OnCustomEvent(KFileMetaData__WriterPlugin* self, intptr_t slot);
void KFileMetaData__WriterPlugin_SuperCustomEvent(KFileMetaData__WriterPlugin* self, QEvent* event);
void KFileMetaData__WriterPlugin_ConnectNotify(KFileMetaData__WriterPlugin* self, const QMetaMethod* signal);
void KFileMetaData__WriterPlugin_OnConnectNotify(KFileMetaData__WriterPlugin* self, intptr_t slot);
void KFileMetaData__WriterPlugin_SuperConnectNotify(KFileMetaData__WriterPlugin* self, const QMetaMethod* signal);
void KFileMetaData__WriterPlugin_DisconnectNotify(KFileMetaData__WriterPlugin* self, const QMetaMethod* signal);
void KFileMetaData__WriterPlugin_OnDisconnectNotify(KFileMetaData__WriterPlugin* self, intptr_t slot);
void KFileMetaData__WriterPlugin_SuperDisconnectNotify(KFileMetaData__WriterPlugin* self, const QMetaMethod* signal);
QObject* KFileMetaData__WriterPlugin_Sender(const KFileMetaData__WriterPlugin* self);
void KFileMetaData__WriterPlugin_OnSender(const KFileMetaData__WriterPlugin* self, intptr_t slot);
QObject* KFileMetaData__WriterPlugin_SuperSender(const KFileMetaData__WriterPlugin* self);
int KFileMetaData__WriterPlugin_SenderSignalIndex(const KFileMetaData__WriterPlugin* self);
void KFileMetaData__WriterPlugin_OnSenderSignalIndex(const KFileMetaData__WriterPlugin* self, intptr_t slot);
int KFileMetaData__WriterPlugin_SuperSenderSignalIndex(const KFileMetaData__WriterPlugin* self);
int KFileMetaData__WriterPlugin_Receivers(const KFileMetaData__WriterPlugin* self, const char* signal);
void KFileMetaData__WriterPlugin_OnReceivers(const KFileMetaData__WriterPlugin* self, intptr_t slot);
int KFileMetaData__WriterPlugin_SuperReceivers(const KFileMetaData__WriterPlugin* self, const char* signal);
bool KFileMetaData__WriterPlugin_IsSignalConnected(const KFileMetaData__WriterPlugin* self, const QMetaMethod* signal);
void KFileMetaData__WriterPlugin_OnIsSignalConnected(const KFileMetaData__WriterPlugin* self, intptr_t slot);
bool KFileMetaData__WriterPlugin_SuperIsSignalConnected(const KFileMetaData__WriterPlugin* self, const QMetaMethod* signal);
void KFileMetaData__WriterPlugin_Delete(KFileMetaData__WriterPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
