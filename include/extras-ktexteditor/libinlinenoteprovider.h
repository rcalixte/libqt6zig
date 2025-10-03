#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBINLINENOTEPROVIDER_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBINLINENOTEPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__InlineNote)
typedef KTextEditor::InlineNote KTextEditor__InlineNote;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__InlineNoteProvider)
typedef KTextEditor::InlineNoteProvider KTextEditor__InlineNoteProvider;
#endif
#else
typedef struct KTextEditor__InlineNote KTextEditor__InlineNote;
typedef struct KTextEditor__InlineNoteProvider KTextEditor__InlineNoteProvider;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
#endif

KTextEditor__InlineNoteProvider* KTextEditor__InlineNoteProvider_new();
QMetaObject* KTextEditor__InlineNoteProvider_MetaObject(const KTextEditor__InlineNoteProvider* self);
void* KTextEditor__InlineNoteProvider_Metacast(KTextEditor__InlineNoteProvider* self, const char* param1);
int KTextEditor__InlineNoteProvider_Metacall(KTextEditor__InlineNoteProvider* self, int param1, int param2, void** param3);
libqt_string KTextEditor__InlineNoteProvider_Tr(const char* s);
libqt_list /* of int */ KTextEditor__InlineNoteProvider_InlineNotes(const KTextEditor__InlineNoteProvider* self, int line);
QSize* KTextEditor__InlineNoteProvider_InlineNoteSize(const KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note);
void KTextEditor__InlineNoteProvider_PaintInlineNote(const KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, QPainter* painter, int direction);
void KTextEditor__InlineNoteProvider_InlineNoteActivated(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, int buttons, const QPoint* globalPos);
void KTextEditor__InlineNoteProvider_InlineNoteFocusInEvent(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, const QPoint* globalPos);
void KTextEditor__InlineNoteProvider_InlineNoteFocusOutEvent(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note);
void KTextEditor__InlineNoteProvider_InlineNoteMouseMoveEvent(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, const QPoint* globalPos);
void KTextEditor__InlineNoteProvider_InlineNotesReset(KTextEditor__InlineNoteProvider* self);
void KTextEditor__InlineNoteProvider_Connect_InlineNotesReset(KTextEditor__InlineNoteProvider* self, intptr_t slot);
void KTextEditor__InlineNoteProvider_InlineNotesChanged(KTextEditor__InlineNoteProvider* self, int line);
void KTextEditor__InlineNoteProvider_Connect_InlineNotesChanged(KTextEditor__InlineNoteProvider* self, intptr_t slot);
libqt_string KTextEditor__InlineNoteProvider_Tr2(const char* s, const char* c);
libqt_string KTextEditor__InlineNoteProvider_Tr3(const char* s, const char* c, int n);
void KTextEditor__InlineNoteProvider_OnMetacall(KTextEditor__InlineNoteProvider* self, intptr_t slot);
int KTextEditor__InlineNoteProvider_QBaseMetacall(KTextEditor__InlineNoteProvider* self, int param1, int param2, void** param3);
void KTextEditor__InlineNoteProvider_OnInlineNotes(const KTextEditor__InlineNoteProvider* self, intptr_t slot);
libqt_list /* of int */ KTextEditor__InlineNoteProvider_QBaseInlineNotes(const KTextEditor__InlineNoteProvider* self, int line);
void KTextEditor__InlineNoteProvider_OnInlineNoteSize(const KTextEditor__InlineNoteProvider* self, intptr_t slot);
QSize* KTextEditor__InlineNoteProvider_QBaseInlineNoteSize(const KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note);
void KTextEditor__InlineNoteProvider_OnPaintInlineNote(const KTextEditor__InlineNoteProvider* self, intptr_t slot);
void KTextEditor__InlineNoteProvider_QBasePaintInlineNote(const KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, QPainter* painter, int direction);
void KTextEditor__InlineNoteProvider_OnInlineNoteActivated(KTextEditor__InlineNoteProvider* self, intptr_t slot);
void KTextEditor__InlineNoteProvider_QBaseInlineNoteActivated(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, int buttons, const QPoint* globalPos);
void KTextEditor__InlineNoteProvider_OnInlineNoteFocusInEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot);
void KTextEditor__InlineNoteProvider_QBaseInlineNoteFocusInEvent(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, const QPoint* globalPos);
void KTextEditor__InlineNoteProvider_OnInlineNoteFocusOutEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot);
void KTextEditor__InlineNoteProvider_QBaseInlineNoteFocusOutEvent(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note);
void KTextEditor__InlineNoteProvider_OnInlineNoteMouseMoveEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot);
void KTextEditor__InlineNoteProvider_QBaseInlineNoteMouseMoveEvent(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, const QPoint* globalPos);
bool KTextEditor__InlineNoteProvider_Event(KTextEditor__InlineNoteProvider* self, QEvent* event);
void KTextEditor__InlineNoteProvider_OnEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot);
bool KTextEditor__InlineNoteProvider_QBaseEvent(KTextEditor__InlineNoteProvider* self, QEvent* event);
bool KTextEditor__InlineNoteProvider_EventFilter(KTextEditor__InlineNoteProvider* self, QObject* watched, QEvent* event);
void KTextEditor__InlineNoteProvider_OnEventFilter(KTextEditor__InlineNoteProvider* self, intptr_t slot);
bool KTextEditor__InlineNoteProvider_QBaseEventFilter(KTextEditor__InlineNoteProvider* self, QObject* watched, QEvent* event);
void KTextEditor__InlineNoteProvider_TimerEvent(KTextEditor__InlineNoteProvider* self, QTimerEvent* event);
void KTextEditor__InlineNoteProvider_OnTimerEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot);
void KTextEditor__InlineNoteProvider_QBaseTimerEvent(KTextEditor__InlineNoteProvider* self, QTimerEvent* event);
void KTextEditor__InlineNoteProvider_ChildEvent(KTextEditor__InlineNoteProvider* self, QChildEvent* event);
void KTextEditor__InlineNoteProvider_OnChildEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot);
void KTextEditor__InlineNoteProvider_QBaseChildEvent(KTextEditor__InlineNoteProvider* self, QChildEvent* event);
void KTextEditor__InlineNoteProvider_CustomEvent(KTextEditor__InlineNoteProvider* self, QEvent* event);
void KTextEditor__InlineNoteProvider_OnCustomEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot);
void KTextEditor__InlineNoteProvider_QBaseCustomEvent(KTextEditor__InlineNoteProvider* self, QEvent* event);
void KTextEditor__InlineNoteProvider_ConnectNotify(KTextEditor__InlineNoteProvider* self, const QMetaMethod* signal);
void KTextEditor__InlineNoteProvider_OnConnectNotify(KTextEditor__InlineNoteProvider* self, intptr_t slot);
void KTextEditor__InlineNoteProvider_QBaseConnectNotify(KTextEditor__InlineNoteProvider* self, const QMetaMethod* signal);
void KTextEditor__InlineNoteProvider_DisconnectNotify(KTextEditor__InlineNoteProvider* self, const QMetaMethod* signal);
void KTextEditor__InlineNoteProvider_OnDisconnectNotify(KTextEditor__InlineNoteProvider* self, intptr_t slot);
void KTextEditor__InlineNoteProvider_QBaseDisconnectNotify(KTextEditor__InlineNoteProvider* self, const QMetaMethod* signal);
QObject* KTextEditor__InlineNoteProvider_Sender(const KTextEditor__InlineNoteProvider* self);
void KTextEditor__InlineNoteProvider_OnSender(const KTextEditor__InlineNoteProvider* self, intptr_t slot);
QObject* KTextEditor__InlineNoteProvider_QBaseSender(const KTextEditor__InlineNoteProvider* self);
int KTextEditor__InlineNoteProvider_SenderSignalIndex(const KTextEditor__InlineNoteProvider* self);
void KTextEditor__InlineNoteProvider_OnSenderSignalIndex(const KTextEditor__InlineNoteProvider* self, intptr_t slot);
int KTextEditor__InlineNoteProvider_QBaseSenderSignalIndex(const KTextEditor__InlineNoteProvider* self);
int KTextEditor__InlineNoteProvider_Receivers(const KTextEditor__InlineNoteProvider* self, const char* signal);
void KTextEditor__InlineNoteProvider_OnReceivers(const KTextEditor__InlineNoteProvider* self, intptr_t slot);
int KTextEditor__InlineNoteProvider_QBaseReceivers(const KTextEditor__InlineNoteProvider* self, const char* signal);
bool KTextEditor__InlineNoteProvider_IsSignalConnected(const KTextEditor__InlineNoteProvider* self, const QMetaMethod* signal);
void KTextEditor__InlineNoteProvider_OnIsSignalConnected(const KTextEditor__InlineNoteProvider* self, intptr_t slot);
bool KTextEditor__InlineNoteProvider_QBaseIsSignalConnected(const KTextEditor__InlineNoteProvider* self, const QMetaMethod* signal);
void KTextEditor__InlineNoteProvider_Delete(KTextEditor__InlineNoteProvider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
