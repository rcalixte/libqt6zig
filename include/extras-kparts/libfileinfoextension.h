#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBFILEINFOEXTENSION_H
#define SRC_EXTRAS_KPARTSC_LIBFILEINFOEXTENSION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__FileInfoExtension)
typedef KParts::FileInfoExtension KParts__FileInfoExtension;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart)
typedef KParts::ReadOnlyPart KParts__ReadOnlyPart;
#endif
#else
typedef struct KFileItemList KFileItemList;
typedef struct KParts__FileInfoExtension KParts__FileInfoExtension;
typedef struct KParts__ReadOnlyPart KParts__ReadOnlyPart;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KParts__FileInfoExtension* KParts__FileInfoExtension_new(KParts__ReadOnlyPart* parent);
QMetaObject* KParts__FileInfoExtension_MetaObject(const KParts__FileInfoExtension* self);
void* KParts__FileInfoExtension_Metacast(KParts__FileInfoExtension* self, const char* param1);
int KParts__FileInfoExtension_Metacall(KParts__FileInfoExtension* self, int param1, int param2, void** param3);
KParts__FileInfoExtension* KParts__FileInfoExtension_ChildObject(QObject* obj);
bool KParts__FileInfoExtension_HasSelection(const KParts__FileInfoExtension* self);
int KParts__FileInfoExtension_SupportedQueryModes(const KParts__FileInfoExtension* self);
KFileItemList* KParts__FileInfoExtension_QueryFor(const KParts__FileInfoExtension* self, int mode);
void KParts__FileInfoExtension_OnMetaObject(const KParts__FileInfoExtension* self, intptr_t slot);
QMetaObject* KParts__FileInfoExtension_SuperMetaObject(const KParts__FileInfoExtension* self);
void KParts__FileInfoExtension_OnMetacast(KParts__FileInfoExtension* self, intptr_t slot);
void* KParts__FileInfoExtension_SuperMetacast(KParts__FileInfoExtension* self, const char* param1);
void KParts__FileInfoExtension_OnMetacall(KParts__FileInfoExtension* self, intptr_t slot);
int KParts__FileInfoExtension_SuperMetacall(KParts__FileInfoExtension* self, int param1, int param2, void** param3);
void KParts__FileInfoExtension_OnHasSelection(const KParts__FileInfoExtension* self, intptr_t slot);
bool KParts__FileInfoExtension_SuperHasSelection(const KParts__FileInfoExtension* self);
void KParts__FileInfoExtension_OnSupportedQueryModes(const KParts__FileInfoExtension* self, intptr_t slot);
int KParts__FileInfoExtension_SuperSupportedQueryModes(const KParts__FileInfoExtension* self);
void KParts__FileInfoExtension_OnQueryFor(const KParts__FileInfoExtension* self, intptr_t slot);
KFileItemList* KParts__FileInfoExtension_SuperQueryFor(const KParts__FileInfoExtension* self, int mode);
bool KParts__FileInfoExtension_Event(KParts__FileInfoExtension* self, QEvent* event);
void KParts__FileInfoExtension_OnEvent(KParts__FileInfoExtension* self, intptr_t slot);
bool KParts__FileInfoExtension_SuperEvent(KParts__FileInfoExtension* self, QEvent* event);
bool KParts__FileInfoExtension_EventFilter(KParts__FileInfoExtension* self, QObject* watched, QEvent* event);
void KParts__FileInfoExtension_OnEventFilter(KParts__FileInfoExtension* self, intptr_t slot);
bool KParts__FileInfoExtension_SuperEventFilter(KParts__FileInfoExtension* self, QObject* watched, QEvent* event);
void KParts__FileInfoExtension_TimerEvent(KParts__FileInfoExtension* self, QTimerEvent* event);
void KParts__FileInfoExtension_OnTimerEvent(KParts__FileInfoExtension* self, intptr_t slot);
void KParts__FileInfoExtension_SuperTimerEvent(KParts__FileInfoExtension* self, QTimerEvent* event);
void KParts__FileInfoExtension_ChildEvent(KParts__FileInfoExtension* self, QChildEvent* event);
void KParts__FileInfoExtension_OnChildEvent(KParts__FileInfoExtension* self, intptr_t slot);
void KParts__FileInfoExtension_SuperChildEvent(KParts__FileInfoExtension* self, QChildEvent* event);
void KParts__FileInfoExtension_CustomEvent(KParts__FileInfoExtension* self, QEvent* event);
void KParts__FileInfoExtension_OnCustomEvent(KParts__FileInfoExtension* self, intptr_t slot);
void KParts__FileInfoExtension_SuperCustomEvent(KParts__FileInfoExtension* self, QEvent* event);
void KParts__FileInfoExtension_ConnectNotify(KParts__FileInfoExtension* self, const QMetaMethod* signal);
void KParts__FileInfoExtension_OnConnectNotify(KParts__FileInfoExtension* self, intptr_t slot);
void KParts__FileInfoExtension_SuperConnectNotify(KParts__FileInfoExtension* self, const QMetaMethod* signal);
void KParts__FileInfoExtension_DisconnectNotify(KParts__FileInfoExtension* self, const QMetaMethod* signal);
void KParts__FileInfoExtension_OnDisconnectNotify(KParts__FileInfoExtension* self, intptr_t slot);
void KParts__FileInfoExtension_SuperDisconnectNotify(KParts__FileInfoExtension* self, const QMetaMethod* signal);
QObject* KParts__FileInfoExtension_Sender(const KParts__FileInfoExtension* self);
void KParts__FileInfoExtension_OnSender(const KParts__FileInfoExtension* self, intptr_t slot);
QObject* KParts__FileInfoExtension_SuperSender(const KParts__FileInfoExtension* self);
int KParts__FileInfoExtension_SenderSignalIndex(const KParts__FileInfoExtension* self);
void KParts__FileInfoExtension_OnSenderSignalIndex(const KParts__FileInfoExtension* self, intptr_t slot);
int KParts__FileInfoExtension_SuperSenderSignalIndex(const KParts__FileInfoExtension* self);
int KParts__FileInfoExtension_Receivers(const KParts__FileInfoExtension* self, const char* signal);
void KParts__FileInfoExtension_OnReceivers(const KParts__FileInfoExtension* self, intptr_t slot);
int KParts__FileInfoExtension_SuperReceivers(const KParts__FileInfoExtension* self, const char* signal);
bool KParts__FileInfoExtension_IsSignalConnected(const KParts__FileInfoExtension* self, const QMetaMethod* signal);
void KParts__FileInfoExtension_OnIsSignalConnected(const KParts__FileInfoExtension* self, intptr_t slot);
bool KParts__FileInfoExtension_SuperIsSignalConnected(const KParts__FileInfoExtension* self, const QMetaMethod* signal);
void KParts__FileInfoExtension_Delete(KParts__FileInfoExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
