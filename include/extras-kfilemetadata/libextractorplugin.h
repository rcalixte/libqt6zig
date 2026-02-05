#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATAC_LIBEXTRACTORPLUGIN_H
#define SRC_EXTRAS_KFILEMETADATAC_LIBEXTRACTORPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__ExtractionResult)
typedef KFileMetaData::ExtractionResult KFileMetaData__ExtractionResult;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__ExtractorPlugin)
typedef KFileMetaData::ExtractorPlugin KFileMetaData__ExtractorPlugin;
#endif
#else
typedef struct KFileMetaData__ExtractionResult KFileMetaData__ExtractionResult;
typedef struct KFileMetaData__ExtractorPlugin KFileMetaData__ExtractorPlugin;
typedef struct QChildEvent QChildEvent;
typedef struct QDateTime QDateTime;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KFileMetaData__ExtractorPlugin* KFileMetaData__ExtractorPlugin_new(QObject* parent);
QMetaObject* KFileMetaData__ExtractorPlugin_MetaObject(const KFileMetaData__ExtractorPlugin* self);
void* KFileMetaData__ExtractorPlugin_Metacast(KFileMetaData__ExtractorPlugin* self, const char* param1);
int KFileMetaData__ExtractorPlugin_Metacall(KFileMetaData__ExtractorPlugin* self, int param1, int param2, void** param3);
libqt_list /* of libqt_string */ KFileMetaData__ExtractorPlugin_Mimetypes(const KFileMetaData__ExtractorPlugin* self);
void KFileMetaData__ExtractorPlugin_Extract(KFileMetaData__ExtractorPlugin* self, KFileMetaData__ExtractionResult* result);
QDateTime* KFileMetaData__ExtractorPlugin_DateTimeFromString(const libqt_string dateString);
libqt_list /* of libqt_string */ KFileMetaData__ExtractorPlugin_ContactsFromString(const libqt_string stringVal);
void KFileMetaData__ExtractorPlugin_OnMetaObject(const KFileMetaData__ExtractorPlugin* self, intptr_t slot);
QMetaObject* KFileMetaData__ExtractorPlugin_QBaseMetaObject(const KFileMetaData__ExtractorPlugin* self);
void KFileMetaData__ExtractorPlugin_OnMetacast(KFileMetaData__ExtractorPlugin* self, intptr_t slot);
void* KFileMetaData__ExtractorPlugin_QBaseMetacast(KFileMetaData__ExtractorPlugin* self, const char* param1);
void KFileMetaData__ExtractorPlugin_OnMetacall(KFileMetaData__ExtractorPlugin* self, intptr_t slot);
int KFileMetaData__ExtractorPlugin_QBaseMetacall(KFileMetaData__ExtractorPlugin* self, int param1, int param2, void** param3);
void KFileMetaData__ExtractorPlugin_OnMimetypes(const KFileMetaData__ExtractorPlugin* self, intptr_t slot);
libqt_list /* of libqt_string */ KFileMetaData__ExtractorPlugin_QBaseMimetypes(const KFileMetaData__ExtractorPlugin* self);
void KFileMetaData__ExtractorPlugin_OnExtract(KFileMetaData__ExtractorPlugin* self, intptr_t slot);
void KFileMetaData__ExtractorPlugin_QBaseExtract(KFileMetaData__ExtractorPlugin* self, KFileMetaData__ExtractionResult* result);
bool KFileMetaData__ExtractorPlugin_Event(KFileMetaData__ExtractorPlugin* self, QEvent* event);
void KFileMetaData__ExtractorPlugin_OnEvent(KFileMetaData__ExtractorPlugin* self, intptr_t slot);
bool KFileMetaData__ExtractorPlugin_QBaseEvent(KFileMetaData__ExtractorPlugin* self, QEvent* event);
bool KFileMetaData__ExtractorPlugin_EventFilter(KFileMetaData__ExtractorPlugin* self, QObject* watched, QEvent* event);
void KFileMetaData__ExtractorPlugin_OnEventFilter(KFileMetaData__ExtractorPlugin* self, intptr_t slot);
bool KFileMetaData__ExtractorPlugin_QBaseEventFilter(KFileMetaData__ExtractorPlugin* self, QObject* watched, QEvent* event);
void KFileMetaData__ExtractorPlugin_TimerEvent(KFileMetaData__ExtractorPlugin* self, QTimerEvent* event);
void KFileMetaData__ExtractorPlugin_OnTimerEvent(KFileMetaData__ExtractorPlugin* self, intptr_t slot);
void KFileMetaData__ExtractorPlugin_QBaseTimerEvent(KFileMetaData__ExtractorPlugin* self, QTimerEvent* event);
void KFileMetaData__ExtractorPlugin_ChildEvent(KFileMetaData__ExtractorPlugin* self, QChildEvent* event);
void KFileMetaData__ExtractorPlugin_OnChildEvent(KFileMetaData__ExtractorPlugin* self, intptr_t slot);
void KFileMetaData__ExtractorPlugin_QBaseChildEvent(KFileMetaData__ExtractorPlugin* self, QChildEvent* event);
void KFileMetaData__ExtractorPlugin_CustomEvent(KFileMetaData__ExtractorPlugin* self, QEvent* event);
void KFileMetaData__ExtractorPlugin_OnCustomEvent(KFileMetaData__ExtractorPlugin* self, intptr_t slot);
void KFileMetaData__ExtractorPlugin_QBaseCustomEvent(KFileMetaData__ExtractorPlugin* self, QEvent* event);
void KFileMetaData__ExtractorPlugin_ConnectNotify(KFileMetaData__ExtractorPlugin* self, const QMetaMethod* signal);
void KFileMetaData__ExtractorPlugin_OnConnectNotify(KFileMetaData__ExtractorPlugin* self, intptr_t slot);
void KFileMetaData__ExtractorPlugin_QBaseConnectNotify(KFileMetaData__ExtractorPlugin* self, const QMetaMethod* signal);
void KFileMetaData__ExtractorPlugin_DisconnectNotify(KFileMetaData__ExtractorPlugin* self, const QMetaMethod* signal);
void KFileMetaData__ExtractorPlugin_OnDisconnectNotify(KFileMetaData__ExtractorPlugin* self, intptr_t slot);
void KFileMetaData__ExtractorPlugin_QBaseDisconnectNotify(KFileMetaData__ExtractorPlugin* self, const QMetaMethod* signal);
libqt_string KFileMetaData__ExtractorPlugin_GetSupportedMimeType(const KFileMetaData__ExtractorPlugin* self, const libqt_string mimetype);
void KFileMetaData__ExtractorPlugin_OnGetSupportedMimeType(const KFileMetaData__ExtractorPlugin* self, intptr_t slot);
libqt_string KFileMetaData__ExtractorPlugin_QBaseGetSupportedMimeType(const KFileMetaData__ExtractorPlugin* self, const libqt_string mimetype);
QObject* KFileMetaData__ExtractorPlugin_Sender(const KFileMetaData__ExtractorPlugin* self);
void KFileMetaData__ExtractorPlugin_OnSender(const KFileMetaData__ExtractorPlugin* self, intptr_t slot);
QObject* KFileMetaData__ExtractorPlugin_QBaseSender(const KFileMetaData__ExtractorPlugin* self);
int KFileMetaData__ExtractorPlugin_SenderSignalIndex(const KFileMetaData__ExtractorPlugin* self);
void KFileMetaData__ExtractorPlugin_OnSenderSignalIndex(const KFileMetaData__ExtractorPlugin* self, intptr_t slot);
int KFileMetaData__ExtractorPlugin_QBaseSenderSignalIndex(const KFileMetaData__ExtractorPlugin* self);
int KFileMetaData__ExtractorPlugin_Receivers(const KFileMetaData__ExtractorPlugin* self, const char* signal);
void KFileMetaData__ExtractorPlugin_OnReceivers(const KFileMetaData__ExtractorPlugin* self, intptr_t slot);
int KFileMetaData__ExtractorPlugin_QBaseReceivers(const KFileMetaData__ExtractorPlugin* self, const char* signal);
bool KFileMetaData__ExtractorPlugin_IsSignalConnected(const KFileMetaData__ExtractorPlugin* self, const QMetaMethod* signal);
void KFileMetaData__ExtractorPlugin_OnIsSignalConnected(const KFileMetaData__ExtractorPlugin* self, intptr_t slot);
bool KFileMetaData__ExtractorPlugin_QBaseIsSignalConnected(const KFileMetaData__ExtractorPlugin* self, const QMetaMethod* signal);
void KFileMetaData__ExtractorPlugin_Delete(KFileMetaData__ExtractorPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
