#pragma once
#ifndef SRC_EXTRAS_SONNETC_LIBSPELLCHECKDECORATOR_H
#define SRC_EXTRAS_SONNETC_LIBSPELLCHECKDECORATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__Highlighter)
typedef Sonnet::Highlighter Sonnet__Highlighter;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__SpellCheckDecorator)
typedef Sonnet::SpellCheckDecorator Sonnet__SpellCheckDecorator;
#endif
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPlainTextEdit QPlainTextEdit;
typedef struct QTextEdit QTextEdit;
typedef struct QTimerEvent QTimerEvent;
typedef struct Sonnet__Highlighter Sonnet__Highlighter;
typedef struct Sonnet__SpellCheckDecorator Sonnet__SpellCheckDecorator;
#endif

Sonnet__SpellCheckDecorator* Sonnet__SpellCheckDecorator_new(QTextEdit* textEdit);
Sonnet__SpellCheckDecorator* Sonnet__SpellCheckDecorator_new2(QPlainTextEdit* textEdit);
QMetaObject* Sonnet__SpellCheckDecorator_MetaObject(const Sonnet__SpellCheckDecorator* self);
void* Sonnet__SpellCheckDecorator_Metacast(Sonnet__SpellCheckDecorator* self, const char* param1);
int Sonnet__SpellCheckDecorator_Metacall(Sonnet__SpellCheckDecorator* self, int param1, int param2, void** param3);
libqt_string Sonnet__SpellCheckDecorator_Tr(const char* s);
void Sonnet__SpellCheckDecorator_SetHighlighter(Sonnet__SpellCheckDecorator* self, Sonnet__Highlighter* highlighter);
Sonnet__Highlighter* Sonnet__SpellCheckDecorator_Highlighter(const Sonnet__SpellCheckDecorator* self);
bool Sonnet__SpellCheckDecorator_EventFilter(Sonnet__SpellCheckDecorator* self, QObject* obj, QEvent* event);
bool Sonnet__SpellCheckDecorator_IsSpellCheckingEnabledForBlock(const Sonnet__SpellCheckDecorator* self, const libqt_string textBlock);
libqt_string Sonnet__SpellCheckDecorator_Tr2(const char* s, const char* c);
libqt_string Sonnet__SpellCheckDecorator_Tr3(const char* s, const char* c, int n);
void Sonnet__SpellCheckDecorator_OnMetacall(Sonnet__SpellCheckDecorator* self, intptr_t slot);
int Sonnet__SpellCheckDecorator_QBaseMetacall(Sonnet__SpellCheckDecorator* self, int param1, int param2, void** param3);
void Sonnet__SpellCheckDecorator_OnEventFilter(Sonnet__SpellCheckDecorator* self, intptr_t slot);
bool Sonnet__SpellCheckDecorator_QBaseEventFilter(Sonnet__SpellCheckDecorator* self, QObject* obj, QEvent* event);
void Sonnet__SpellCheckDecorator_OnIsSpellCheckingEnabledForBlock(const Sonnet__SpellCheckDecorator* self, intptr_t slot);
bool Sonnet__SpellCheckDecorator_QBaseIsSpellCheckingEnabledForBlock(const Sonnet__SpellCheckDecorator* self, const libqt_string textBlock);
bool Sonnet__SpellCheckDecorator_Event(Sonnet__SpellCheckDecorator* self, QEvent* event);
void Sonnet__SpellCheckDecorator_OnEvent(Sonnet__SpellCheckDecorator* self, intptr_t slot);
bool Sonnet__SpellCheckDecorator_QBaseEvent(Sonnet__SpellCheckDecorator* self, QEvent* event);
void Sonnet__SpellCheckDecorator_TimerEvent(Sonnet__SpellCheckDecorator* self, QTimerEvent* event);
void Sonnet__SpellCheckDecorator_OnTimerEvent(Sonnet__SpellCheckDecorator* self, intptr_t slot);
void Sonnet__SpellCheckDecorator_QBaseTimerEvent(Sonnet__SpellCheckDecorator* self, QTimerEvent* event);
void Sonnet__SpellCheckDecorator_ChildEvent(Sonnet__SpellCheckDecorator* self, QChildEvent* event);
void Sonnet__SpellCheckDecorator_OnChildEvent(Sonnet__SpellCheckDecorator* self, intptr_t slot);
void Sonnet__SpellCheckDecorator_QBaseChildEvent(Sonnet__SpellCheckDecorator* self, QChildEvent* event);
void Sonnet__SpellCheckDecorator_CustomEvent(Sonnet__SpellCheckDecorator* self, QEvent* event);
void Sonnet__SpellCheckDecorator_OnCustomEvent(Sonnet__SpellCheckDecorator* self, intptr_t slot);
void Sonnet__SpellCheckDecorator_QBaseCustomEvent(Sonnet__SpellCheckDecorator* self, QEvent* event);
void Sonnet__SpellCheckDecorator_ConnectNotify(Sonnet__SpellCheckDecorator* self, const QMetaMethod* signal);
void Sonnet__SpellCheckDecorator_OnConnectNotify(Sonnet__SpellCheckDecorator* self, intptr_t slot);
void Sonnet__SpellCheckDecorator_QBaseConnectNotify(Sonnet__SpellCheckDecorator* self, const QMetaMethod* signal);
void Sonnet__SpellCheckDecorator_DisconnectNotify(Sonnet__SpellCheckDecorator* self, const QMetaMethod* signal);
void Sonnet__SpellCheckDecorator_OnDisconnectNotify(Sonnet__SpellCheckDecorator* self, intptr_t slot);
void Sonnet__SpellCheckDecorator_QBaseDisconnectNotify(Sonnet__SpellCheckDecorator* self, const QMetaMethod* signal);
QObject* Sonnet__SpellCheckDecorator_Sender(const Sonnet__SpellCheckDecorator* self);
void Sonnet__SpellCheckDecorator_OnSender(const Sonnet__SpellCheckDecorator* self, intptr_t slot);
QObject* Sonnet__SpellCheckDecorator_QBaseSender(const Sonnet__SpellCheckDecorator* self);
int Sonnet__SpellCheckDecorator_SenderSignalIndex(const Sonnet__SpellCheckDecorator* self);
void Sonnet__SpellCheckDecorator_OnSenderSignalIndex(const Sonnet__SpellCheckDecorator* self, intptr_t slot);
int Sonnet__SpellCheckDecorator_QBaseSenderSignalIndex(const Sonnet__SpellCheckDecorator* self);
int Sonnet__SpellCheckDecorator_Receivers(const Sonnet__SpellCheckDecorator* self, const char* signal);
void Sonnet__SpellCheckDecorator_OnReceivers(const Sonnet__SpellCheckDecorator* self, intptr_t slot);
int Sonnet__SpellCheckDecorator_QBaseReceivers(const Sonnet__SpellCheckDecorator* self, const char* signal);
bool Sonnet__SpellCheckDecorator_IsSignalConnected(const Sonnet__SpellCheckDecorator* self, const QMetaMethod* signal);
void Sonnet__SpellCheckDecorator_OnIsSignalConnected(const Sonnet__SpellCheckDecorator* self, intptr_t slot);
bool Sonnet__SpellCheckDecorator_QBaseIsSignalConnected(const Sonnet__SpellCheckDecorator* self, const QMetaMethod* signal);
void Sonnet__SpellCheckDecorator_Delete(Sonnet__SpellCheckDecorator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
