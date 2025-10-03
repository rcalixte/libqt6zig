#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBMESSAGE_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBMESSAGE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KTextEditor::Document KTextEditor__Document;
typedef KTextEditor::Message KTextEditor__Message;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View)
typedef KTextEditor::View KTextEditor__View;
#endif
#else
typedef struct KTextEditor__Document KTextEditor__Document;
typedef struct KTextEditor__Message KTextEditor__Message;
typedef struct KTextEditor__View KTextEditor__View;
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

KTextEditor__Message* KTextEditor__Message_new(const libqt_string richtext);
KTextEditor__Message* KTextEditor__Message_new2(const libqt_string richtext, int typeVal);
QMetaObject* KTextEditor__Message_MetaObject(const KTextEditor__Message* self);
void* KTextEditor__Message_Metacast(KTextEditor__Message* self, const char* param1);
int KTextEditor__Message_Metacall(KTextEditor__Message* self, int param1, int param2, void** param3);
libqt_string KTextEditor__Message_Tr(const char* s);
libqt_string KTextEditor__Message_Text(const KTextEditor__Message* self);
QIcon* KTextEditor__Message_Icon(const KTextEditor__Message* self);
int KTextEditor__Message_MessageType(const KTextEditor__Message* self);
void KTextEditor__Message_AddAction(KTextEditor__Message* self, QAction* action);
libqt_list /* of QAction* */ KTextEditor__Message_Actions(const KTextEditor__Message* self);
void KTextEditor__Message_SetAutoHide(KTextEditor__Message* self);
int KTextEditor__Message_AutoHide(const KTextEditor__Message* self);
void KTextEditor__Message_SetAutoHideMode(KTextEditor__Message* self, int mode);
int KTextEditor__Message_AutoHideMode(const KTextEditor__Message* self);
void KTextEditor__Message_SetWordWrap(KTextEditor__Message* self, bool wordWrap);
bool KTextEditor__Message_WordWrap(const KTextEditor__Message* self);
void KTextEditor__Message_SetPriority(KTextEditor__Message* self, int priority);
int KTextEditor__Message_Priority(const KTextEditor__Message* self);
void KTextEditor__Message_SetView(KTextEditor__Message* self, KTextEditor__View* view);
KTextEditor__View* KTextEditor__Message_View(const KTextEditor__Message* self);
void KTextEditor__Message_SetDocument(KTextEditor__Message* self, KTextEditor__Document* document);
KTextEditor__Document* KTextEditor__Message_Document(const KTextEditor__Message* self);
void KTextEditor__Message_SetPosition(KTextEditor__Message* self, int position);
int KTextEditor__Message_Position(const KTextEditor__Message* self);
void KTextEditor__Message_SetText(KTextEditor__Message* self, const libqt_string richtext);
void KTextEditor__Message_SetIcon(KTextEditor__Message* self, const QIcon* icon);
void KTextEditor__Message_Closed(KTextEditor__Message* self, KTextEditor__Message* message);
void KTextEditor__Message_Connect_Closed(KTextEditor__Message* self, intptr_t slot);
void KTextEditor__Message_TextChanged(KTextEditor__Message* self, const libqt_string text);
void KTextEditor__Message_Connect_TextChanged(KTextEditor__Message* self, intptr_t slot);
void KTextEditor__Message_IconChanged(KTextEditor__Message* self, const QIcon* icon);
void KTextEditor__Message_Connect_IconChanged(KTextEditor__Message* self, intptr_t slot);
libqt_string KTextEditor__Message_Tr2(const char* s, const char* c);
libqt_string KTextEditor__Message_Tr3(const char* s, const char* c, int n);
void KTextEditor__Message_AddAction2(KTextEditor__Message* self, QAction* action, bool closeOnTrigger);
void KTextEditor__Message_SetAutoHide1(KTextEditor__Message* self, int delay);
void KTextEditor__Message_OnMetacall(KTextEditor__Message* self, intptr_t slot);
int KTextEditor__Message_QBaseMetacall(KTextEditor__Message* self, int param1, int param2, void** param3);
bool KTextEditor__Message_Event(KTextEditor__Message* self, QEvent* event);
void KTextEditor__Message_OnEvent(KTextEditor__Message* self, intptr_t slot);
bool KTextEditor__Message_QBaseEvent(KTextEditor__Message* self, QEvent* event);
bool KTextEditor__Message_EventFilter(KTextEditor__Message* self, QObject* watched, QEvent* event);
void KTextEditor__Message_OnEventFilter(KTextEditor__Message* self, intptr_t slot);
bool KTextEditor__Message_QBaseEventFilter(KTextEditor__Message* self, QObject* watched, QEvent* event);
void KTextEditor__Message_TimerEvent(KTextEditor__Message* self, QTimerEvent* event);
void KTextEditor__Message_OnTimerEvent(KTextEditor__Message* self, intptr_t slot);
void KTextEditor__Message_QBaseTimerEvent(KTextEditor__Message* self, QTimerEvent* event);
void KTextEditor__Message_ChildEvent(KTextEditor__Message* self, QChildEvent* event);
void KTextEditor__Message_OnChildEvent(KTextEditor__Message* self, intptr_t slot);
void KTextEditor__Message_QBaseChildEvent(KTextEditor__Message* self, QChildEvent* event);
void KTextEditor__Message_CustomEvent(KTextEditor__Message* self, QEvent* event);
void KTextEditor__Message_OnCustomEvent(KTextEditor__Message* self, intptr_t slot);
void KTextEditor__Message_QBaseCustomEvent(KTextEditor__Message* self, QEvent* event);
void KTextEditor__Message_ConnectNotify(KTextEditor__Message* self, const QMetaMethod* signal);
void KTextEditor__Message_OnConnectNotify(KTextEditor__Message* self, intptr_t slot);
void KTextEditor__Message_QBaseConnectNotify(KTextEditor__Message* self, const QMetaMethod* signal);
void KTextEditor__Message_DisconnectNotify(KTextEditor__Message* self, const QMetaMethod* signal);
void KTextEditor__Message_OnDisconnectNotify(KTextEditor__Message* self, intptr_t slot);
void KTextEditor__Message_QBaseDisconnectNotify(KTextEditor__Message* self, const QMetaMethod* signal);
QObject* KTextEditor__Message_Sender(const KTextEditor__Message* self);
void KTextEditor__Message_OnSender(const KTextEditor__Message* self, intptr_t slot);
QObject* KTextEditor__Message_QBaseSender(const KTextEditor__Message* self);
int KTextEditor__Message_SenderSignalIndex(const KTextEditor__Message* self);
void KTextEditor__Message_OnSenderSignalIndex(const KTextEditor__Message* self, intptr_t slot);
int KTextEditor__Message_QBaseSenderSignalIndex(const KTextEditor__Message* self);
int KTextEditor__Message_Receivers(const KTextEditor__Message* self, const char* signal);
void KTextEditor__Message_OnReceivers(const KTextEditor__Message* self, intptr_t slot);
int KTextEditor__Message_QBaseReceivers(const KTextEditor__Message* self, const char* signal);
bool KTextEditor__Message_IsSignalConnected(const KTextEditor__Message* self, const QMetaMethod* signal);
void KTextEditor__Message_OnIsSignalConnected(const KTextEditor__Message* self, intptr_t slot);
bool KTextEditor__Message_QBaseIsSignalConnected(const KTextEditor__Message* self, const QMetaMethod* signal);
void KTextEditor__Message_Delete(KTextEditor__Message* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
