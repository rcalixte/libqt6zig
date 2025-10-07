#pragma once
#ifndef SRC_EXTRAS_KSVGC_LIBIMAGESET_H
#define SRC_EXTRAS_KSVGC_LIBIMAGESET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KSvg__ImageSet)
typedef KSvg::ImageSet KSvg__ImageSet;
#endif
#else
typedef struct KPluginMetaData KPluginMetaData;
typedef struct KSvg__ImageSet KSvg__ImageSet;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KSvg__ImageSet* KSvg__ImageSet_new();
KSvg__ImageSet* KSvg__ImageSet_new2(const libqt_string imageSetName);
KSvg__ImageSet* KSvg__ImageSet_new3(QObject* parent);
KSvg__ImageSet* KSvg__ImageSet_new4(const libqt_string imageSetName, const libqt_string basePath);
KSvg__ImageSet* KSvg__ImageSet_new5(const libqt_string imageSetName, const libqt_string basePath, QObject* parent);
QMetaObject* KSvg__ImageSet_MetaObject(const KSvg__ImageSet* self);
void* KSvg__ImageSet_Metacast(KSvg__ImageSet* self, const char* param1);
int KSvg__ImageSet_Metacall(KSvg__ImageSet* self, int param1, int param2, void** param3);
libqt_string KSvg__ImageSet_Tr(const char* s);
void KSvg__ImageSet_SetBasePath(KSvg__ImageSet* self, const libqt_string basePath);
libqt_string KSvg__ImageSet_BasePath(const KSvg__ImageSet* self);
void KSvg__ImageSet_SetSelectors(KSvg__ImageSet* self, const libqt_list /* of libqt_string */ selectors);
libqt_list /* of libqt_string */ KSvg__ImageSet_Selectors(const KSvg__ImageSet* self);
void KSvg__ImageSet_SetImageSetName(KSvg__ImageSet* self, const libqt_string imageSetName);
libqt_string KSvg__ImageSet_ImageSetName(const KSvg__ImageSet* self);
libqt_string KSvg__ImageSet_ImagePath(const KSvg__ImageSet* self, const libqt_string name);
libqt_string KSvg__ImageSet_FilePath(const KSvg__ImageSet* self, const libqt_string name);
bool KSvg__ImageSet_CurrentImageSetHasImage(const KSvg__ImageSet* self, const libqt_string name);
void KSvg__ImageSet_SetUseGlobalSettings(KSvg__ImageSet* self, bool useGlobal);
bool KSvg__ImageSet_UseGlobalSettings(const KSvg__ImageSet* self);
void KSvg__ImageSet_SetCacheLimit(KSvg__ImageSet* self, int kbytes);
KPluginMetaData* KSvg__ImageSet_Metadata(const KSvg__ImageSet* self);
void KSvg__ImageSet_ImageSetChanged(KSvg__ImageSet* self, const libqt_string basePath);
void KSvg__ImageSet_Connect_ImageSetChanged(KSvg__ImageSet* self, intptr_t slot);
void KSvg__ImageSet_BasePathChanged(KSvg__ImageSet* self, const libqt_string basePath);
void KSvg__ImageSet_Connect_BasePathChanged(KSvg__ImageSet* self, intptr_t slot);
libqt_string KSvg__ImageSet_Tr2(const char* s, const char* c);
libqt_string KSvg__ImageSet_Tr3(const char* s, const char* c, int n);
void KSvg__ImageSet_OnMetacall(KSvg__ImageSet* self, intptr_t slot);
int KSvg__ImageSet_QBaseMetacall(KSvg__ImageSet* self, int param1, int param2, void** param3);
bool KSvg__ImageSet_Event(KSvg__ImageSet* self, QEvent* event);
void KSvg__ImageSet_OnEvent(KSvg__ImageSet* self, intptr_t slot);
bool KSvg__ImageSet_QBaseEvent(KSvg__ImageSet* self, QEvent* event);
bool KSvg__ImageSet_EventFilter(KSvg__ImageSet* self, QObject* watched, QEvent* event);
void KSvg__ImageSet_OnEventFilter(KSvg__ImageSet* self, intptr_t slot);
bool KSvg__ImageSet_QBaseEventFilter(KSvg__ImageSet* self, QObject* watched, QEvent* event);
void KSvg__ImageSet_TimerEvent(KSvg__ImageSet* self, QTimerEvent* event);
void KSvg__ImageSet_OnTimerEvent(KSvg__ImageSet* self, intptr_t slot);
void KSvg__ImageSet_QBaseTimerEvent(KSvg__ImageSet* self, QTimerEvent* event);
void KSvg__ImageSet_ChildEvent(KSvg__ImageSet* self, QChildEvent* event);
void KSvg__ImageSet_OnChildEvent(KSvg__ImageSet* self, intptr_t slot);
void KSvg__ImageSet_QBaseChildEvent(KSvg__ImageSet* self, QChildEvent* event);
void KSvg__ImageSet_CustomEvent(KSvg__ImageSet* self, QEvent* event);
void KSvg__ImageSet_OnCustomEvent(KSvg__ImageSet* self, intptr_t slot);
void KSvg__ImageSet_QBaseCustomEvent(KSvg__ImageSet* self, QEvent* event);
void KSvg__ImageSet_ConnectNotify(KSvg__ImageSet* self, const QMetaMethod* signal);
void KSvg__ImageSet_OnConnectNotify(KSvg__ImageSet* self, intptr_t slot);
void KSvg__ImageSet_QBaseConnectNotify(KSvg__ImageSet* self, const QMetaMethod* signal);
void KSvg__ImageSet_DisconnectNotify(KSvg__ImageSet* self, const QMetaMethod* signal);
void KSvg__ImageSet_OnDisconnectNotify(KSvg__ImageSet* self, intptr_t slot);
void KSvg__ImageSet_QBaseDisconnectNotify(KSvg__ImageSet* self, const QMetaMethod* signal);
QObject* KSvg__ImageSet_Sender(const KSvg__ImageSet* self);
void KSvg__ImageSet_OnSender(const KSvg__ImageSet* self, intptr_t slot);
QObject* KSvg__ImageSet_QBaseSender(const KSvg__ImageSet* self);
int KSvg__ImageSet_SenderSignalIndex(const KSvg__ImageSet* self);
void KSvg__ImageSet_OnSenderSignalIndex(const KSvg__ImageSet* self, intptr_t slot);
int KSvg__ImageSet_QBaseSenderSignalIndex(const KSvg__ImageSet* self);
int KSvg__ImageSet_Receivers(const KSvg__ImageSet* self, const char* signal);
void KSvg__ImageSet_OnReceivers(const KSvg__ImageSet* self, intptr_t slot);
int KSvg__ImageSet_QBaseReceivers(const KSvg__ImageSet* self, const char* signal);
bool KSvg__ImageSet_IsSignalConnected(const KSvg__ImageSet* self, const QMetaMethod* signal);
void KSvg__ImageSet_OnIsSignalConnected(const KSvg__ImageSet* self, intptr_t slot);
bool KSvg__ImageSet_QBaseIsSignalConnected(const KSvg__ImageSet* self, const QMetaMethod* signal);
void KSvg__ImageSet_Delete(KSvg__ImageSet* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
