#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBLISTINGNOTIFICATIONEXTENSION_H
#define SRC_EXTRAS_KPARTSC_LIBLISTINGNOTIFICATIONEXTENSION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__ListingNotificationExtension)
typedef KParts::ListingNotificationExtension KParts__ListingNotificationExtension;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart)
typedef KParts::ReadOnlyPart KParts__ReadOnlyPart;
#endif
#else
typedef struct KFileItemList KFileItemList;
typedef struct KParts__ListingNotificationExtension KParts__ListingNotificationExtension;
typedef struct KParts__ReadOnlyPart KParts__ReadOnlyPart;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KParts__ListingNotificationExtension* KParts__ListingNotificationExtension_new(KParts__ReadOnlyPart* parent);
QMetaObject* KParts__ListingNotificationExtension_MetaObject(const KParts__ListingNotificationExtension* self);
void* KParts__ListingNotificationExtension_Metacast(KParts__ListingNotificationExtension* self, const char* param1);
int KParts__ListingNotificationExtension_Metacall(KParts__ListingNotificationExtension* self, int param1, int param2, void** param3);
libqt_string KParts__ListingNotificationExtension_Tr(const char* s);
int KParts__ListingNotificationExtension_SupportedNotificationEventTypes(const KParts__ListingNotificationExtension* self);
KParts__ListingNotificationExtension* KParts__ListingNotificationExtension_ChildObject(QObject* obj);
void KParts__ListingNotificationExtension_ListingEvent(KParts__ListingNotificationExtension* self, int param1, const KFileItemList* param2);
void KParts__ListingNotificationExtension_Connect_ListingEvent(KParts__ListingNotificationExtension* self, intptr_t slot);
libqt_string KParts__ListingNotificationExtension_Tr2(const char* s, const char* c);
libqt_string KParts__ListingNotificationExtension_Tr3(const char* s, const char* c, int n);
void KParts__ListingNotificationExtension_OnMetacall(KParts__ListingNotificationExtension* self, intptr_t slot);
int KParts__ListingNotificationExtension_QBaseMetacall(KParts__ListingNotificationExtension* self, int param1, int param2, void** param3);
void KParts__ListingNotificationExtension_OnSupportedNotificationEventTypes(const KParts__ListingNotificationExtension* self, intptr_t slot);
int KParts__ListingNotificationExtension_QBaseSupportedNotificationEventTypes(const KParts__ListingNotificationExtension* self);
bool KParts__ListingNotificationExtension_Event(KParts__ListingNotificationExtension* self, QEvent* event);
void KParts__ListingNotificationExtension_OnEvent(KParts__ListingNotificationExtension* self, intptr_t slot);
bool KParts__ListingNotificationExtension_QBaseEvent(KParts__ListingNotificationExtension* self, QEvent* event);
bool KParts__ListingNotificationExtension_EventFilter(KParts__ListingNotificationExtension* self, QObject* watched, QEvent* event);
void KParts__ListingNotificationExtension_OnEventFilter(KParts__ListingNotificationExtension* self, intptr_t slot);
bool KParts__ListingNotificationExtension_QBaseEventFilter(KParts__ListingNotificationExtension* self, QObject* watched, QEvent* event);
void KParts__ListingNotificationExtension_TimerEvent(KParts__ListingNotificationExtension* self, QTimerEvent* event);
void KParts__ListingNotificationExtension_OnTimerEvent(KParts__ListingNotificationExtension* self, intptr_t slot);
void KParts__ListingNotificationExtension_QBaseTimerEvent(KParts__ListingNotificationExtension* self, QTimerEvent* event);
void KParts__ListingNotificationExtension_ChildEvent(KParts__ListingNotificationExtension* self, QChildEvent* event);
void KParts__ListingNotificationExtension_OnChildEvent(KParts__ListingNotificationExtension* self, intptr_t slot);
void KParts__ListingNotificationExtension_QBaseChildEvent(KParts__ListingNotificationExtension* self, QChildEvent* event);
void KParts__ListingNotificationExtension_CustomEvent(KParts__ListingNotificationExtension* self, QEvent* event);
void KParts__ListingNotificationExtension_OnCustomEvent(KParts__ListingNotificationExtension* self, intptr_t slot);
void KParts__ListingNotificationExtension_QBaseCustomEvent(KParts__ListingNotificationExtension* self, QEvent* event);
void KParts__ListingNotificationExtension_ConnectNotify(KParts__ListingNotificationExtension* self, const QMetaMethod* signal);
void KParts__ListingNotificationExtension_OnConnectNotify(KParts__ListingNotificationExtension* self, intptr_t slot);
void KParts__ListingNotificationExtension_QBaseConnectNotify(KParts__ListingNotificationExtension* self, const QMetaMethod* signal);
void KParts__ListingNotificationExtension_DisconnectNotify(KParts__ListingNotificationExtension* self, const QMetaMethod* signal);
void KParts__ListingNotificationExtension_OnDisconnectNotify(KParts__ListingNotificationExtension* self, intptr_t slot);
void KParts__ListingNotificationExtension_QBaseDisconnectNotify(KParts__ListingNotificationExtension* self, const QMetaMethod* signal);
QObject* KParts__ListingNotificationExtension_Sender(const KParts__ListingNotificationExtension* self);
void KParts__ListingNotificationExtension_OnSender(const KParts__ListingNotificationExtension* self, intptr_t slot);
QObject* KParts__ListingNotificationExtension_QBaseSender(const KParts__ListingNotificationExtension* self);
int KParts__ListingNotificationExtension_SenderSignalIndex(const KParts__ListingNotificationExtension* self);
void KParts__ListingNotificationExtension_OnSenderSignalIndex(const KParts__ListingNotificationExtension* self, intptr_t slot);
int KParts__ListingNotificationExtension_QBaseSenderSignalIndex(const KParts__ListingNotificationExtension* self);
int KParts__ListingNotificationExtension_Receivers(const KParts__ListingNotificationExtension* self, const char* signal);
void KParts__ListingNotificationExtension_OnReceivers(const KParts__ListingNotificationExtension* self, intptr_t slot);
int KParts__ListingNotificationExtension_QBaseReceivers(const KParts__ListingNotificationExtension* self, const char* signal);
bool KParts__ListingNotificationExtension_IsSignalConnected(const KParts__ListingNotificationExtension* self, const QMetaMethod* signal);
void KParts__ListingNotificationExtension_OnIsSignalConnected(const KParts__ListingNotificationExtension* self, intptr_t slot);
bool KParts__ListingNotificationExtension_QBaseIsSignalConnected(const KParts__ListingNotificationExtension* self, const QMetaMethod* signal);
void KParts__ListingNotificationExtension_Delete(KParts__ListingNotificationExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
