#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBPARTMANAGER_H
#define SRC_EXTRAS_KPARTSC_LIBPARTMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__Part)
typedef KParts::Part KParts__Part;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartManager)
typedef KParts::PartManager KParts__PartManager;
#endif
#else
typedef struct KParts__Part KParts__Part;
typedef struct KParts__PartManager KParts__PartManager;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KParts__PartManager* KParts__PartManager_new(QWidget* parent);
KParts__PartManager* KParts__PartManager_new2(QWidget* topLevel, QObject* parent);
QMetaObject* KParts__PartManager_MetaObject(const KParts__PartManager* self);
void* KParts__PartManager_Metacast(KParts__PartManager* self, const char* param1);
int KParts__PartManager_Metacall(KParts__PartManager* self, int param1, int param2, void** param3);
libqt_string KParts__PartManager_Tr(const char* s);
void KParts__PartManager_SetSelectionPolicy(KParts__PartManager* self, int policy);
int KParts__PartManager_SelectionPolicy(const KParts__PartManager* self);
void KParts__PartManager_SetAllowNestedParts(KParts__PartManager* self, bool allow);
bool KParts__PartManager_AllowNestedParts(const KParts__PartManager* self);
void KParts__PartManager_SetIgnoreScrollBars(KParts__PartManager* self, bool ignore);
bool KParts__PartManager_IgnoreScrollBars(const KParts__PartManager* self);
void KParts__PartManager_SetActivationButtonMask(KParts__PartManager* self, int16_t buttonMask);
int16_t KParts__PartManager_ActivationButtonMask(const KParts__PartManager* self);
bool KParts__PartManager_EventFilter(KParts__PartManager* self, QObject* obj, QEvent* ev);
void KParts__PartManager_AddPart(KParts__PartManager* self, KParts__Part* part, bool setActive);
void KParts__PartManager_RemovePart(KParts__PartManager* self, KParts__Part* part);
void KParts__PartManager_ReplacePart(KParts__PartManager* self, KParts__Part* oldPart, KParts__Part* newPart, bool setActive);
void KParts__PartManager_SetActivePart(KParts__PartManager* self, KParts__Part* part, QWidget* widget);
KParts__Part* KParts__PartManager_ActivePart(const KParts__PartManager* self);
QWidget* KParts__PartManager_ActiveWidget(const KParts__PartManager* self);
libqt_list /* of KParts__Part* */ KParts__PartManager_Parts(const KParts__PartManager* self);
void KParts__PartManager_AddManagedTopLevelWidget(KParts__PartManager* self, const QWidget* topLevel);
void KParts__PartManager_RemoveManagedTopLevelWidget(KParts__PartManager* self, const QWidget* topLevel);
int KParts__PartManager_Reason(const KParts__PartManager* self);
void KParts__PartManager_PartAdded(KParts__PartManager* self, KParts__Part* part);
void KParts__PartManager_Connect_PartAdded(KParts__PartManager* self, intptr_t slot);
void KParts__PartManager_PartRemoved(KParts__PartManager* self, KParts__Part* part);
void KParts__PartManager_Connect_PartRemoved(KParts__PartManager* self, intptr_t slot);
void KParts__PartManager_ActivePartChanged(KParts__PartManager* self, KParts__Part* newPart);
void KParts__PartManager_Connect_ActivePartChanged(KParts__PartManager* self, intptr_t slot);
libqt_string KParts__PartManager_Tr2(const char* s, const char* c);
libqt_string KParts__PartManager_Tr3(const char* s, const char* c, int n);
void KParts__PartManager_OnMetacall(KParts__PartManager* self, intptr_t slot);
int KParts__PartManager_QBaseMetacall(KParts__PartManager* self, int param1, int param2, void** param3);
void KParts__PartManager_OnEventFilter(KParts__PartManager* self, intptr_t slot);
bool KParts__PartManager_QBaseEventFilter(KParts__PartManager* self, QObject* obj, QEvent* ev);
void KParts__PartManager_OnAddPart(KParts__PartManager* self, intptr_t slot);
void KParts__PartManager_QBaseAddPart(KParts__PartManager* self, KParts__Part* part, bool setActive);
void KParts__PartManager_OnRemovePart(KParts__PartManager* self, intptr_t slot);
void KParts__PartManager_QBaseRemovePart(KParts__PartManager* self, KParts__Part* part);
void KParts__PartManager_OnReplacePart(KParts__PartManager* self, intptr_t slot);
void KParts__PartManager_QBaseReplacePart(KParts__PartManager* self, KParts__Part* oldPart, KParts__Part* newPart, bool setActive);
void KParts__PartManager_OnSetActivePart(KParts__PartManager* self, intptr_t slot);
void KParts__PartManager_QBaseSetActivePart(KParts__PartManager* self, KParts__Part* part, QWidget* widget);
void KParts__PartManager_OnActivePart(const KParts__PartManager* self, intptr_t slot);
KParts__Part* KParts__PartManager_QBaseActivePart(const KParts__PartManager* self);
void KParts__PartManager_OnActiveWidget(const KParts__PartManager* self, intptr_t slot);
QWidget* KParts__PartManager_QBaseActiveWidget(const KParts__PartManager* self);
bool KParts__PartManager_Event(KParts__PartManager* self, QEvent* event);
void KParts__PartManager_OnEvent(KParts__PartManager* self, intptr_t slot);
bool KParts__PartManager_QBaseEvent(KParts__PartManager* self, QEvent* event);
void KParts__PartManager_TimerEvent(KParts__PartManager* self, QTimerEvent* event);
void KParts__PartManager_OnTimerEvent(KParts__PartManager* self, intptr_t slot);
void KParts__PartManager_QBaseTimerEvent(KParts__PartManager* self, QTimerEvent* event);
void KParts__PartManager_ChildEvent(KParts__PartManager* self, QChildEvent* event);
void KParts__PartManager_OnChildEvent(KParts__PartManager* self, intptr_t slot);
void KParts__PartManager_QBaseChildEvent(KParts__PartManager* self, QChildEvent* event);
void KParts__PartManager_CustomEvent(KParts__PartManager* self, QEvent* event);
void KParts__PartManager_OnCustomEvent(KParts__PartManager* self, intptr_t slot);
void KParts__PartManager_QBaseCustomEvent(KParts__PartManager* self, QEvent* event);
void KParts__PartManager_ConnectNotify(KParts__PartManager* self, const QMetaMethod* signal);
void KParts__PartManager_OnConnectNotify(KParts__PartManager* self, intptr_t slot);
void KParts__PartManager_QBaseConnectNotify(KParts__PartManager* self, const QMetaMethod* signal);
void KParts__PartManager_DisconnectNotify(KParts__PartManager* self, const QMetaMethod* signal);
void KParts__PartManager_OnDisconnectNotify(KParts__PartManager* self, intptr_t slot);
void KParts__PartManager_QBaseDisconnectNotify(KParts__PartManager* self, const QMetaMethod* signal);
void KParts__PartManager_SetIgnoreExplictFocusRequests(KParts__PartManager* self, bool ignoreExplictFocusRequests);
void KParts__PartManager_OnSetIgnoreExplictFocusRequests(KParts__PartManager* self, intptr_t slot);
void KParts__PartManager_QBaseSetIgnoreExplictFocusRequests(KParts__PartManager* self, bool ignoreExplictFocusRequests);
void KParts__PartManager_SlotObjectDestroyed(KParts__PartManager* self);
void KParts__PartManager_OnSlotObjectDestroyed(KParts__PartManager* self, intptr_t slot);
void KParts__PartManager_QBaseSlotObjectDestroyed(KParts__PartManager* self);
void KParts__PartManager_SlotWidgetDestroyed(KParts__PartManager* self);
void KParts__PartManager_OnSlotWidgetDestroyed(KParts__PartManager* self, intptr_t slot);
void KParts__PartManager_QBaseSlotWidgetDestroyed(KParts__PartManager* self);
void KParts__PartManager_SlotManagedTopLevelWidgetDestroyed(KParts__PartManager* self);
void KParts__PartManager_OnSlotManagedTopLevelWidgetDestroyed(KParts__PartManager* self, intptr_t slot);
void KParts__PartManager_QBaseSlotManagedTopLevelWidgetDestroyed(KParts__PartManager* self);
QObject* KParts__PartManager_Sender(const KParts__PartManager* self);
void KParts__PartManager_OnSender(const KParts__PartManager* self, intptr_t slot);
QObject* KParts__PartManager_QBaseSender(const KParts__PartManager* self);
int KParts__PartManager_SenderSignalIndex(const KParts__PartManager* self);
void KParts__PartManager_OnSenderSignalIndex(const KParts__PartManager* self, intptr_t slot);
int KParts__PartManager_QBaseSenderSignalIndex(const KParts__PartManager* self);
int KParts__PartManager_Receivers(const KParts__PartManager* self, const char* signal);
void KParts__PartManager_OnReceivers(const KParts__PartManager* self, intptr_t slot);
int KParts__PartManager_QBaseReceivers(const KParts__PartManager* self, const char* signal);
bool KParts__PartManager_IsSignalConnected(const KParts__PartManager* self, const QMetaMethod* signal);
void KParts__PartManager_OnIsSignalConnected(const KParts__PartManager* self, intptr_t slot);
bool KParts__PartManager_QBaseIsSignalConnected(const KParts__PartManager* self, const QMetaMethod* signal);
void KParts__PartManager_Delete(KParts__PartManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
