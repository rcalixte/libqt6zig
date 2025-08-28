#pragma once
#ifndef SRC_EXTRAS_SONNETC_LIBHIGHLIGHTER_H
#define SRC_EXTRAS_SONNETC_LIBHIGHLIGHTER_H

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
#else
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPlainTextEdit QPlainTextEdit;
typedef struct QSyntaxHighlighter QSyntaxHighlighter;
typedef struct QTextBlock QTextBlock;
typedef struct QTextBlockUserData QTextBlockUserData;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextEdit QTextEdit;
typedef struct QTimerEvent QTimerEvent;
typedef struct Sonnet__Highlighter Sonnet__Highlighter;
#endif

Sonnet__Highlighter* Sonnet__Highlighter_new(QTextEdit* textEdit);
Sonnet__Highlighter* Sonnet__Highlighter_new2(QPlainTextEdit* textEdit);
Sonnet__Highlighter* Sonnet__Highlighter_new3(QTextEdit* textEdit, const QColor* col);
Sonnet__Highlighter* Sonnet__Highlighter_new4(QPlainTextEdit* textEdit, const QColor* col);
QMetaObject* Sonnet__Highlighter_MetaObject(const Sonnet__Highlighter* self);
void* Sonnet__Highlighter_Metacast(Sonnet__Highlighter* self, const char* param1);
int Sonnet__Highlighter_Metacall(Sonnet__Highlighter* self, int param1, int param2, void** param3);
libqt_string Sonnet__Highlighter_Tr(const char* s);
bool Sonnet__Highlighter_SpellCheckerFound(const Sonnet__Highlighter* self);
libqt_string Sonnet__Highlighter_CurrentLanguage(const Sonnet__Highlighter* self);
void Sonnet__Highlighter_SetActive(Sonnet__Highlighter* self, bool active);
bool Sonnet__Highlighter_IsActive(const Sonnet__Highlighter* self);
bool Sonnet__Highlighter_Automatic(const Sonnet__Highlighter* self);
void Sonnet__Highlighter_SetAutomatic(Sonnet__Highlighter* self, bool automatic);
bool Sonnet__Highlighter_AutoDetectLanguageDisabled(const Sonnet__Highlighter* self);
void Sonnet__Highlighter_SetAutoDetectLanguageDisabled(Sonnet__Highlighter* self, bool autoDetectDisabled);
void Sonnet__Highlighter_AddWordToDictionary(Sonnet__Highlighter* self, const libqt_string word);
void Sonnet__Highlighter_IgnoreWord(Sonnet__Highlighter* self, const libqt_string word);
libqt_list /* of libqt_string */ Sonnet__Highlighter_SuggestionsForWord(Sonnet__Highlighter* self, const libqt_string word);
libqt_list /* of libqt_string */ Sonnet__Highlighter_SuggestionsForWord2(Sonnet__Highlighter* self, const libqt_string word, const QTextCursor* cursor);
bool Sonnet__Highlighter_IsWordMisspelled(Sonnet__Highlighter* self, const libqt_string word);
void Sonnet__Highlighter_SetMisspelledColor(Sonnet__Highlighter* self, const QColor* color);
bool Sonnet__Highlighter_CheckerEnabledByDefault(const Sonnet__Highlighter* self);
void Sonnet__Highlighter_SetDocument(Sonnet__Highlighter* self, QTextDocument* document);
void Sonnet__Highlighter_ActiveChanged(Sonnet__Highlighter* self, const libqt_string description);
void Sonnet__Highlighter_Connect_ActiveChanged(Sonnet__Highlighter* self, intptr_t slot);
void Sonnet__Highlighter_HighlightBlock(Sonnet__Highlighter* self, const libqt_string text);
void Sonnet__Highlighter_SetMisspelled(Sonnet__Highlighter* self, int start, int count);
void Sonnet__Highlighter_UnsetMisspelled(Sonnet__Highlighter* self, int start, int count);
bool Sonnet__Highlighter_EventFilter(Sonnet__Highlighter* self, QObject* o, QEvent* e);
void Sonnet__Highlighter_SetCurrentLanguage(Sonnet__Highlighter* self, const libqt_string language);
void Sonnet__Highlighter_SlotAutoDetection(Sonnet__Highlighter* self);
void Sonnet__Highlighter_SlotRehighlight(Sonnet__Highlighter* self);
libqt_string Sonnet__Highlighter_Tr2(const char* s, const char* c);
libqt_string Sonnet__Highlighter_Tr3(const char* s, const char* c, int n);
libqt_list /* of libqt_string */ Sonnet__Highlighter_SuggestionsForWord22(Sonnet__Highlighter* self, const libqt_string word, int max);
libqt_list /* of libqt_string */ Sonnet__Highlighter_SuggestionsForWord3(Sonnet__Highlighter* self, const libqt_string word, const QTextCursor* cursor, int max);
void Sonnet__Highlighter_OnMetacall(Sonnet__Highlighter* self, intptr_t slot);
int Sonnet__Highlighter_QBaseMetacall(Sonnet__Highlighter* self, int param1, int param2, void** param3);
void Sonnet__Highlighter_OnHighlightBlock(Sonnet__Highlighter* self, intptr_t slot);
void Sonnet__Highlighter_QBaseHighlightBlock(Sonnet__Highlighter* self, const libqt_string text);
void Sonnet__Highlighter_OnSetMisspelled(Sonnet__Highlighter* self, intptr_t slot);
void Sonnet__Highlighter_QBaseSetMisspelled(Sonnet__Highlighter* self, int start, int count);
void Sonnet__Highlighter_OnUnsetMisspelled(Sonnet__Highlighter* self, intptr_t slot);
void Sonnet__Highlighter_QBaseUnsetMisspelled(Sonnet__Highlighter* self, int start, int count);
void Sonnet__Highlighter_OnEventFilter(Sonnet__Highlighter* self, intptr_t slot);
bool Sonnet__Highlighter_QBaseEventFilter(Sonnet__Highlighter* self, QObject* o, QEvent* e);
bool Sonnet__Highlighter_Event(Sonnet__Highlighter* self, QEvent* event);
void Sonnet__Highlighter_OnEvent(Sonnet__Highlighter* self, intptr_t slot);
bool Sonnet__Highlighter_QBaseEvent(Sonnet__Highlighter* self, QEvent* event);
void Sonnet__Highlighter_TimerEvent(Sonnet__Highlighter* self, QTimerEvent* event);
void Sonnet__Highlighter_OnTimerEvent(Sonnet__Highlighter* self, intptr_t slot);
void Sonnet__Highlighter_QBaseTimerEvent(Sonnet__Highlighter* self, QTimerEvent* event);
void Sonnet__Highlighter_ChildEvent(Sonnet__Highlighter* self, QChildEvent* event);
void Sonnet__Highlighter_OnChildEvent(Sonnet__Highlighter* self, intptr_t slot);
void Sonnet__Highlighter_QBaseChildEvent(Sonnet__Highlighter* self, QChildEvent* event);
void Sonnet__Highlighter_CustomEvent(Sonnet__Highlighter* self, QEvent* event);
void Sonnet__Highlighter_OnCustomEvent(Sonnet__Highlighter* self, intptr_t slot);
void Sonnet__Highlighter_QBaseCustomEvent(Sonnet__Highlighter* self, QEvent* event);
void Sonnet__Highlighter_ConnectNotify(Sonnet__Highlighter* self, const QMetaMethod* signal);
void Sonnet__Highlighter_OnConnectNotify(Sonnet__Highlighter* self, intptr_t slot);
void Sonnet__Highlighter_QBaseConnectNotify(Sonnet__Highlighter* self, const QMetaMethod* signal);
void Sonnet__Highlighter_DisconnectNotify(Sonnet__Highlighter* self, const QMetaMethod* signal);
void Sonnet__Highlighter_OnDisconnectNotify(Sonnet__Highlighter* self, intptr_t slot);
void Sonnet__Highlighter_QBaseDisconnectNotify(Sonnet__Highlighter* self, const QMetaMethod* signal);
bool Sonnet__Highlighter_IntraWordEditing(const Sonnet__Highlighter* self);
void Sonnet__Highlighter_OnIntraWordEditing(const Sonnet__Highlighter* self, intptr_t slot);
bool Sonnet__Highlighter_QBaseIntraWordEditing(const Sonnet__Highlighter* self);
void Sonnet__Highlighter_SetIntraWordEditing(Sonnet__Highlighter* self, bool editing);
void Sonnet__Highlighter_OnSetIntraWordEditing(Sonnet__Highlighter* self, intptr_t slot);
void Sonnet__Highlighter_QBaseSetIntraWordEditing(Sonnet__Highlighter* self, bool editing);
void Sonnet__Highlighter_SetFormat(Sonnet__Highlighter* self, int start, int count, const QTextCharFormat* format);
void Sonnet__Highlighter_OnSetFormat(Sonnet__Highlighter* self, intptr_t slot);
void Sonnet__Highlighter_QBaseSetFormat(Sonnet__Highlighter* self, int start, int count, const QTextCharFormat* format);
QTextCharFormat* Sonnet__Highlighter_Format(const Sonnet__Highlighter* self, int pos);
void Sonnet__Highlighter_OnFormat(const Sonnet__Highlighter* self, intptr_t slot);
QTextCharFormat* Sonnet__Highlighter_QBaseFormat(const Sonnet__Highlighter* self, int pos);
int Sonnet__Highlighter_PreviousBlockState(const Sonnet__Highlighter* self);
void Sonnet__Highlighter_OnPreviousBlockState(const Sonnet__Highlighter* self, intptr_t slot);
int Sonnet__Highlighter_QBasePreviousBlockState(const Sonnet__Highlighter* self);
int Sonnet__Highlighter_CurrentBlockState(const Sonnet__Highlighter* self);
void Sonnet__Highlighter_OnCurrentBlockState(const Sonnet__Highlighter* self, intptr_t slot);
int Sonnet__Highlighter_QBaseCurrentBlockState(const Sonnet__Highlighter* self);
void Sonnet__Highlighter_SetCurrentBlockState(Sonnet__Highlighter* self, int newState);
void Sonnet__Highlighter_OnSetCurrentBlockState(Sonnet__Highlighter* self, intptr_t slot);
void Sonnet__Highlighter_QBaseSetCurrentBlockState(Sonnet__Highlighter* self, int newState);
void Sonnet__Highlighter_SetCurrentBlockUserData(Sonnet__Highlighter* self, QTextBlockUserData* data);
void Sonnet__Highlighter_OnSetCurrentBlockUserData(Sonnet__Highlighter* self, intptr_t slot);
void Sonnet__Highlighter_QBaseSetCurrentBlockUserData(Sonnet__Highlighter* self, QTextBlockUserData* data);
QTextBlockUserData* Sonnet__Highlighter_CurrentBlockUserData(const Sonnet__Highlighter* self);
void Sonnet__Highlighter_OnCurrentBlockUserData(const Sonnet__Highlighter* self, intptr_t slot);
QTextBlockUserData* Sonnet__Highlighter_QBaseCurrentBlockUserData(const Sonnet__Highlighter* self);
QTextBlock* Sonnet__Highlighter_CurrentBlock(const Sonnet__Highlighter* self);
void Sonnet__Highlighter_OnCurrentBlock(const Sonnet__Highlighter* self, intptr_t slot);
QTextBlock* Sonnet__Highlighter_QBaseCurrentBlock(const Sonnet__Highlighter* self);
QObject* Sonnet__Highlighter_Sender(const Sonnet__Highlighter* self);
void Sonnet__Highlighter_OnSender(const Sonnet__Highlighter* self, intptr_t slot);
QObject* Sonnet__Highlighter_QBaseSender(const Sonnet__Highlighter* self);
int Sonnet__Highlighter_SenderSignalIndex(const Sonnet__Highlighter* self);
void Sonnet__Highlighter_OnSenderSignalIndex(const Sonnet__Highlighter* self, intptr_t slot);
int Sonnet__Highlighter_QBaseSenderSignalIndex(const Sonnet__Highlighter* self);
int Sonnet__Highlighter_Receivers(const Sonnet__Highlighter* self, const char* signal);
void Sonnet__Highlighter_OnReceivers(const Sonnet__Highlighter* self, intptr_t slot);
int Sonnet__Highlighter_QBaseReceivers(const Sonnet__Highlighter* self, const char* signal);
bool Sonnet__Highlighter_IsSignalConnected(const Sonnet__Highlighter* self, const QMetaMethod* signal);
void Sonnet__Highlighter_OnIsSignalConnected(const Sonnet__Highlighter* self, intptr_t slot);
bool Sonnet__Highlighter_QBaseIsSignalConnected(const Sonnet__Highlighter* self, const QMetaMethod* signal);
void Sonnet__Highlighter_Delete(Sonnet__Highlighter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
