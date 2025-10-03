#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBSTATUSBAREXTENSION_H
#define SRC_EXTRAS_KPARTSC_LIBSTATUSBAREXTENSION_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart)
typedef KParts::ReadOnlyPart KParts__ReadOnlyPart;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__StatusBarExtension)
typedef KParts::StatusBarExtension KParts__StatusBarExtension;
#endif
#else
typedef struct KParts__Part KParts__Part;
typedef struct KParts__ReadOnlyPart KParts__ReadOnlyPart;
typedef struct KParts__StatusBarExtension KParts__StatusBarExtension;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QStatusBar QStatusBar;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KParts__StatusBarExtension* KParts__StatusBarExtension_new(KParts__Part* parent);
KParts__StatusBarExtension* KParts__StatusBarExtension_new2(KParts__ReadOnlyPart* parent);
QMetaObject* KParts__StatusBarExtension_MetaObject(const KParts__StatusBarExtension* self);
void* KParts__StatusBarExtension_Metacast(KParts__StatusBarExtension* self, const char* param1);
int KParts__StatusBarExtension_Metacall(KParts__StatusBarExtension* self, int param1, int param2, void** param3);
libqt_string KParts__StatusBarExtension_Tr(const char* s);
void KParts__StatusBarExtension_AddStatusBarItem(KParts__StatusBarExtension* self, QWidget* widget, int stretch, bool permanent);
void KParts__StatusBarExtension_RemoveStatusBarItem(KParts__StatusBarExtension* self, QWidget* widget);
QStatusBar* KParts__StatusBarExtension_StatusBar(const KParts__StatusBarExtension* self);
void KParts__StatusBarExtension_SetStatusBar(KParts__StatusBarExtension* self, QStatusBar* status);
KParts__StatusBarExtension* KParts__StatusBarExtension_ChildObject(QObject* obj);
bool KParts__StatusBarExtension_EventFilter(KParts__StatusBarExtension* self, QObject* watched, QEvent* ev);
libqt_string KParts__StatusBarExtension_Tr2(const char* s, const char* c);
libqt_string KParts__StatusBarExtension_Tr3(const char* s, const char* c, int n);
void KParts__StatusBarExtension_OnMetacall(KParts__StatusBarExtension* self, intptr_t slot);
int KParts__StatusBarExtension_QBaseMetacall(KParts__StatusBarExtension* self, int param1, int param2, void** param3);
void KParts__StatusBarExtension_OnEventFilter(KParts__StatusBarExtension* self, intptr_t slot);
bool KParts__StatusBarExtension_QBaseEventFilter(KParts__StatusBarExtension* self, QObject* watched, QEvent* ev);
bool KParts__StatusBarExtension_Event(KParts__StatusBarExtension* self, QEvent* event);
void KParts__StatusBarExtension_OnEvent(KParts__StatusBarExtension* self, intptr_t slot);
bool KParts__StatusBarExtension_QBaseEvent(KParts__StatusBarExtension* self, QEvent* event);
void KParts__StatusBarExtension_TimerEvent(KParts__StatusBarExtension* self, QTimerEvent* event);
void KParts__StatusBarExtension_OnTimerEvent(KParts__StatusBarExtension* self, intptr_t slot);
void KParts__StatusBarExtension_QBaseTimerEvent(KParts__StatusBarExtension* self, QTimerEvent* event);
void KParts__StatusBarExtension_ChildEvent(KParts__StatusBarExtension* self, QChildEvent* event);
void KParts__StatusBarExtension_OnChildEvent(KParts__StatusBarExtension* self, intptr_t slot);
void KParts__StatusBarExtension_QBaseChildEvent(KParts__StatusBarExtension* self, QChildEvent* event);
void KParts__StatusBarExtension_CustomEvent(KParts__StatusBarExtension* self, QEvent* event);
void KParts__StatusBarExtension_OnCustomEvent(KParts__StatusBarExtension* self, intptr_t slot);
void KParts__StatusBarExtension_QBaseCustomEvent(KParts__StatusBarExtension* self, QEvent* event);
void KParts__StatusBarExtension_ConnectNotify(KParts__StatusBarExtension* self, const QMetaMethod* signal);
void KParts__StatusBarExtension_OnConnectNotify(KParts__StatusBarExtension* self, intptr_t slot);
void KParts__StatusBarExtension_QBaseConnectNotify(KParts__StatusBarExtension* self, const QMetaMethod* signal);
void KParts__StatusBarExtension_DisconnectNotify(KParts__StatusBarExtension* self, const QMetaMethod* signal);
void KParts__StatusBarExtension_OnDisconnectNotify(KParts__StatusBarExtension* self, intptr_t slot);
void KParts__StatusBarExtension_QBaseDisconnectNotify(KParts__StatusBarExtension* self, const QMetaMethod* signal);
QObject* KParts__StatusBarExtension_Sender(const KParts__StatusBarExtension* self);
void KParts__StatusBarExtension_OnSender(const KParts__StatusBarExtension* self, intptr_t slot);
QObject* KParts__StatusBarExtension_QBaseSender(const KParts__StatusBarExtension* self);
int KParts__StatusBarExtension_SenderSignalIndex(const KParts__StatusBarExtension* self);
void KParts__StatusBarExtension_OnSenderSignalIndex(const KParts__StatusBarExtension* self, intptr_t slot);
int KParts__StatusBarExtension_QBaseSenderSignalIndex(const KParts__StatusBarExtension* self);
int KParts__StatusBarExtension_Receivers(const KParts__StatusBarExtension* self, const char* signal);
void KParts__StatusBarExtension_OnReceivers(const KParts__StatusBarExtension* self, intptr_t slot);
int KParts__StatusBarExtension_QBaseReceivers(const KParts__StatusBarExtension* self, const char* signal);
bool KParts__StatusBarExtension_IsSignalConnected(const KParts__StatusBarExtension* self, const QMetaMethod* signal);
void KParts__StatusBarExtension_OnIsSignalConnected(const KParts__StatusBarExtension* self, intptr_t slot);
bool KParts__StatusBarExtension_QBaseIsSignalConnected(const KParts__StatusBarExtension* self, const QMetaMethod* signal);
void KParts__StatusBarExtension_Delete(KParts__StatusBarExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
