#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBLISTINGFILTEREXTENSION_H
#define SRC_EXTRAS_KPARTSC_LIBLISTINGFILTEREXTENSION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__ListingFilterExtension)
typedef KParts::ListingFilterExtension KParts__ListingFilterExtension;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart)
typedef KParts::ReadOnlyPart KParts__ReadOnlyPart;
#endif
#else
typedef struct KParts__ListingFilterExtension KParts__ListingFilterExtension;
typedef struct KParts__ReadOnlyPart KParts__ReadOnlyPart;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

KParts__ListingFilterExtension* KParts__ListingFilterExtension_new(KParts__ReadOnlyPart* parent);
QMetaObject* KParts__ListingFilterExtension_MetaObject(const KParts__ListingFilterExtension* self);
void* KParts__ListingFilterExtension_Metacast(KParts__ListingFilterExtension* self, const char* param1);
int KParts__ListingFilterExtension_Metacall(KParts__ListingFilterExtension* self, int param1, int param2, void** param3);
KParts__ListingFilterExtension* KParts__ListingFilterExtension_ChildObject(QObject* obj);
int KParts__ListingFilterExtension_SupportedFilterModes(const KParts__ListingFilterExtension* self);
bool KParts__ListingFilterExtension_SupportsMultipleFilters(const KParts__ListingFilterExtension* self, int mode);
QVariant* KParts__ListingFilterExtension_Filter(const KParts__ListingFilterExtension* self, int mode);
void KParts__ListingFilterExtension_SetFilter(KParts__ListingFilterExtension* self, int mode, const QVariant* filter);
void KParts__ListingFilterExtension_OnMetaObject(const KParts__ListingFilterExtension* self, intptr_t slot);
QMetaObject* KParts__ListingFilterExtension_SuperMetaObject(const KParts__ListingFilterExtension* self);
void KParts__ListingFilterExtension_OnMetacast(KParts__ListingFilterExtension* self, intptr_t slot);
void* KParts__ListingFilterExtension_SuperMetacast(KParts__ListingFilterExtension* self, const char* param1);
void KParts__ListingFilterExtension_OnMetacall(KParts__ListingFilterExtension* self, intptr_t slot);
int KParts__ListingFilterExtension_SuperMetacall(KParts__ListingFilterExtension* self, int param1, int param2, void** param3);
void KParts__ListingFilterExtension_OnSupportedFilterModes(const KParts__ListingFilterExtension* self, intptr_t slot);
int KParts__ListingFilterExtension_SuperSupportedFilterModes(const KParts__ListingFilterExtension* self);
void KParts__ListingFilterExtension_OnSupportsMultipleFilters(const KParts__ListingFilterExtension* self, intptr_t slot);
bool KParts__ListingFilterExtension_SuperSupportsMultipleFilters(const KParts__ListingFilterExtension* self, int mode);
void KParts__ListingFilterExtension_OnFilter(const KParts__ListingFilterExtension* self, intptr_t slot);
QVariant* KParts__ListingFilterExtension_SuperFilter(const KParts__ListingFilterExtension* self, int mode);
void KParts__ListingFilterExtension_OnSetFilter(KParts__ListingFilterExtension* self, intptr_t slot);
void KParts__ListingFilterExtension_SuperSetFilter(KParts__ListingFilterExtension* self, int mode, const QVariant* filter);
bool KParts__ListingFilterExtension_Event(KParts__ListingFilterExtension* self, QEvent* event);
void KParts__ListingFilterExtension_OnEvent(KParts__ListingFilterExtension* self, intptr_t slot);
bool KParts__ListingFilterExtension_SuperEvent(KParts__ListingFilterExtension* self, QEvent* event);
bool KParts__ListingFilterExtension_EventFilter(KParts__ListingFilterExtension* self, QObject* watched, QEvent* event);
void KParts__ListingFilterExtension_OnEventFilter(KParts__ListingFilterExtension* self, intptr_t slot);
bool KParts__ListingFilterExtension_SuperEventFilter(KParts__ListingFilterExtension* self, QObject* watched, QEvent* event);
void KParts__ListingFilterExtension_TimerEvent(KParts__ListingFilterExtension* self, QTimerEvent* event);
void KParts__ListingFilterExtension_OnTimerEvent(KParts__ListingFilterExtension* self, intptr_t slot);
void KParts__ListingFilterExtension_SuperTimerEvent(KParts__ListingFilterExtension* self, QTimerEvent* event);
void KParts__ListingFilterExtension_ChildEvent(KParts__ListingFilterExtension* self, QChildEvent* event);
void KParts__ListingFilterExtension_OnChildEvent(KParts__ListingFilterExtension* self, intptr_t slot);
void KParts__ListingFilterExtension_SuperChildEvent(KParts__ListingFilterExtension* self, QChildEvent* event);
void KParts__ListingFilterExtension_CustomEvent(KParts__ListingFilterExtension* self, QEvent* event);
void KParts__ListingFilterExtension_OnCustomEvent(KParts__ListingFilterExtension* self, intptr_t slot);
void KParts__ListingFilterExtension_SuperCustomEvent(KParts__ListingFilterExtension* self, QEvent* event);
void KParts__ListingFilterExtension_ConnectNotify(KParts__ListingFilterExtension* self, const QMetaMethod* signal);
void KParts__ListingFilterExtension_OnConnectNotify(KParts__ListingFilterExtension* self, intptr_t slot);
void KParts__ListingFilterExtension_SuperConnectNotify(KParts__ListingFilterExtension* self, const QMetaMethod* signal);
void KParts__ListingFilterExtension_DisconnectNotify(KParts__ListingFilterExtension* self, const QMetaMethod* signal);
void KParts__ListingFilterExtension_OnDisconnectNotify(KParts__ListingFilterExtension* self, intptr_t slot);
void KParts__ListingFilterExtension_SuperDisconnectNotify(KParts__ListingFilterExtension* self, const QMetaMethod* signal);
QObject* KParts__ListingFilterExtension_Sender(const KParts__ListingFilterExtension* self);
void KParts__ListingFilterExtension_OnSender(const KParts__ListingFilterExtension* self, intptr_t slot);
QObject* KParts__ListingFilterExtension_SuperSender(const KParts__ListingFilterExtension* self);
int KParts__ListingFilterExtension_SenderSignalIndex(const KParts__ListingFilterExtension* self);
void KParts__ListingFilterExtension_OnSenderSignalIndex(const KParts__ListingFilterExtension* self, intptr_t slot);
int KParts__ListingFilterExtension_SuperSenderSignalIndex(const KParts__ListingFilterExtension* self);
int KParts__ListingFilterExtension_Receivers(const KParts__ListingFilterExtension* self, const char* signal);
void KParts__ListingFilterExtension_OnReceivers(const KParts__ListingFilterExtension* self, intptr_t slot);
int KParts__ListingFilterExtension_SuperReceivers(const KParts__ListingFilterExtension* self, const char* signal);
bool KParts__ListingFilterExtension_IsSignalConnected(const KParts__ListingFilterExtension* self, const QMetaMethod* signal);
void KParts__ListingFilterExtension_OnIsSignalConnected(const KParts__ListingFilterExtension* self, intptr_t slot);
bool KParts__ListingFilterExtension_SuperIsSignalConnected(const KParts__ListingFilterExtension* self, const QMetaMethod* signal);
void KParts__ListingFilterExtension_Delete(KParts__ListingFilterExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
