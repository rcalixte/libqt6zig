#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBTRANSLATORMENU_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBTRANSLATORMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_TextTranslator__TranslatorMenu)
typedef TextTranslator::TranslatorMenu TextTranslator__TranslatorMenu;
#endif
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMenu QMenu;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPersistentModelIndex QPersistentModelIndex;
typedef struct QTimerEvent QTimerEvent;
typedef struct TextTranslator__TranslatorMenu TextTranslator__TranslatorMenu;
#endif

TextTranslator__TranslatorMenu* TextTranslator__TranslatorMenu_new();
TextTranslator__TranslatorMenu* TextTranslator__TranslatorMenu_new2(QObject* parent);
QMetaObject* TextTranslator__TranslatorMenu_MetaObject(const TextTranslator__TranslatorMenu* self);
void* TextTranslator__TranslatorMenu_Metacast(TextTranslator__TranslatorMenu* self, const char* param1);
int TextTranslator__TranslatorMenu_Metacall(TextTranslator__TranslatorMenu* self, int param1, int param2, void** param3);
QMenu* TextTranslator__TranslatorMenu_Menu(const TextTranslator__TranslatorMenu* self);
bool TextTranslator__TranslatorMenu_IsEmpty(const TextTranslator__TranslatorMenu* self);
QPersistentModelIndex* TextTranslator__TranslatorMenu_ModelIndex(const TextTranslator__TranslatorMenu* self);
void TextTranslator__TranslatorMenu_SetModelIndex(TextTranslator__TranslatorMenu* self, const QPersistentModelIndex* newModelIndex);
void TextTranslator__TranslatorMenu_UpdateMenu(TextTranslator__TranslatorMenu* self);
void TextTranslator__TranslatorMenu_Translate(TextTranslator__TranslatorMenu* self, const libqt_string from, const libqt_string to, const QPersistentModelIndex* modelIndex);
void TextTranslator__TranslatorMenu_Connect_Translate(TextTranslator__TranslatorMenu* self, intptr_t slot);
void TextTranslator__TranslatorMenu_OnMetaObject(const TextTranslator__TranslatorMenu* self, intptr_t slot);
QMetaObject* TextTranslator__TranslatorMenu_SuperMetaObject(const TextTranslator__TranslatorMenu* self);
void TextTranslator__TranslatorMenu_OnMetacast(TextTranslator__TranslatorMenu* self, intptr_t slot);
void* TextTranslator__TranslatorMenu_SuperMetacast(TextTranslator__TranslatorMenu* self, const char* param1);
void TextTranslator__TranslatorMenu_OnMetacall(TextTranslator__TranslatorMenu* self, intptr_t slot);
int TextTranslator__TranslatorMenu_SuperMetacall(TextTranslator__TranslatorMenu* self, int param1, int param2, void** param3);
bool TextTranslator__TranslatorMenu_Event(TextTranslator__TranslatorMenu* self, QEvent* event);
void TextTranslator__TranslatorMenu_OnEvent(TextTranslator__TranslatorMenu* self, intptr_t slot);
bool TextTranslator__TranslatorMenu_SuperEvent(TextTranslator__TranslatorMenu* self, QEvent* event);
bool TextTranslator__TranslatorMenu_EventFilter(TextTranslator__TranslatorMenu* self, QObject* watched, QEvent* event);
void TextTranslator__TranslatorMenu_OnEventFilter(TextTranslator__TranslatorMenu* self, intptr_t slot);
bool TextTranslator__TranslatorMenu_SuperEventFilter(TextTranslator__TranslatorMenu* self, QObject* watched, QEvent* event);
void TextTranslator__TranslatorMenu_TimerEvent(TextTranslator__TranslatorMenu* self, QTimerEvent* event);
void TextTranslator__TranslatorMenu_OnTimerEvent(TextTranslator__TranslatorMenu* self, intptr_t slot);
void TextTranslator__TranslatorMenu_SuperTimerEvent(TextTranslator__TranslatorMenu* self, QTimerEvent* event);
void TextTranslator__TranslatorMenu_ChildEvent(TextTranslator__TranslatorMenu* self, QChildEvent* event);
void TextTranslator__TranslatorMenu_OnChildEvent(TextTranslator__TranslatorMenu* self, intptr_t slot);
void TextTranslator__TranslatorMenu_SuperChildEvent(TextTranslator__TranslatorMenu* self, QChildEvent* event);
void TextTranslator__TranslatorMenu_CustomEvent(TextTranslator__TranslatorMenu* self, QEvent* event);
void TextTranslator__TranslatorMenu_OnCustomEvent(TextTranslator__TranslatorMenu* self, intptr_t slot);
void TextTranslator__TranslatorMenu_SuperCustomEvent(TextTranslator__TranslatorMenu* self, QEvent* event);
void TextTranslator__TranslatorMenu_ConnectNotify(TextTranslator__TranslatorMenu* self, const QMetaMethod* signal);
void TextTranslator__TranslatorMenu_OnConnectNotify(TextTranslator__TranslatorMenu* self, intptr_t slot);
void TextTranslator__TranslatorMenu_SuperConnectNotify(TextTranslator__TranslatorMenu* self, const QMetaMethod* signal);
void TextTranslator__TranslatorMenu_DisconnectNotify(TextTranslator__TranslatorMenu* self, const QMetaMethod* signal);
void TextTranslator__TranslatorMenu_OnDisconnectNotify(TextTranslator__TranslatorMenu* self, intptr_t slot);
void TextTranslator__TranslatorMenu_SuperDisconnectNotify(TextTranslator__TranslatorMenu* self, const QMetaMethod* signal);
QObject* TextTranslator__TranslatorMenu_Sender(const TextTranslator__TranslatorMenu* self);
void TextTranslator__TranslatorMenu_OnSender(const TextTranslator__TranslatorMenu* self, intptr_t slot);
QObject* TextTranslator__TranslatorMenu_SuperSender(const TextTranslator__TranslatorMenu* self);
int TextTranslator__TranslatorMenu_SenderSignalIndex(const TextTranslator__TranslatorMenu* self);
void TextTranslator__TranslatorMenu_OnSenderSignalIndex(const TextTranslator__TranslatorMenu* self, intptr_t slot);
int TextTranslator__TranslatorMenu_SuperSenderSignalIndex(const TextTranslator__TranslatorMenu* self);
int TextTranslator__TranslatorMenu_Receivers(const TextTranslator__TranslatorMenu* self, const char* signal);
void TextTranslator__TranslatorMenu_OnReceivers(const TextTranslator__TranslatorMenu* self, intptr_t slot);
int TextTranslator__TranslatorMenu_SuperReceivers(const TextTranslator__TranslatorMenu* self, const char* signal);
bool TextTranslator__TranslatorMenu_IsSignalConnected(const TextTranslator__TranslatorMenu* self, const QMetaMethod* signal);
void TextTranslator__TranslatorMenu_OnIsSignalConnected(const TextTranslator__TranslatorMenu* self, intptr_t slot);
bool TextTranslator__TranslatorMenu_SuperIsSignalConnected(const TextTranslator__TranslatorMenu* self, const QMetaMethod* signal);
void TextTranslator__TranslatorMenu_Delete(TextTranslator__TranslatorMenu* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
