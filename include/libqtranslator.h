#pragma once
#ifndef SRCC_LIBQTRANSLATOR_H
#define SRCC_LIBQTRANSLATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLocale QLocale;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTranslator QTranslator;
typedef struct QVariant QVariant;
#endif

QTranslator* QTranslator_new();
QTranslator* QTranslator_new2(QObject* parent);
QMetaObject* QTranslator_MetaObject(const QTranslator* self);
void* QTranslator_Metacast(QTranslator* self, const char* param1);
int QTranslator_Metacall(QTranslator* self, int param1, int param2, void** param3);
void QTranslator_OnMetacall(QTranslator* self, intptr_t slot);
int QTranslator_QBaseMetacall(QTranslator* self, int param1, int param2, void** param3);
libqt_string QTranslator_Tr(const char* s);
libqt_string QTranslator_Translate(const QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n);
void QTranslator_OnTranslate(const QTranslator* self, intptr_t slot);
libqt_string QTranslator_QBaseTranslate(const QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n);
bool QTranslator_IsEmpty(const QTranslator* self);
void QTranslator_OnIsEmpty(const QTranslator* self, intptr_t slot);
bool QTranslator_QBaseIsEmpty(const QTranslator* self);
libqt_string QTranslator_Language(const QTranslator* self);
libqt_string QTranslator_FilePath(const QTranslator* self);
bool QTranslator_Load(QTranslator* self, libqt_string filename);
bool QTranslator_Load2(QTranslator* self, QLocale* locale, libqt_string filename);
bool QTranslator_Load3(QTranslator* self, const unsigned char* data, int lenVal);
libqt_string QTranslator_Tr2(const char* s, const char* c);
libqt_string QTranslator_Tr3(const char* s, const char* c, int n);
bool QTranslator_Load22(QTranslator* self, libqt_string filename, libqt_string directory);
bool QTranslator_Load32(QTranslator* self, libqt_string filename, libqt_string directory, libqt_string search_delimiters);
bool QTranslator_Load4(QTranslator* self, libqt_string filename, libqt_string directory, libqt_string search_delimiters, libqt_string suffix);
bool QTranslator_Load33(QTranslator* self, QLocale* locale, libqt_string filename, libqt_string prefix);
bool QTranslator_Load42(QTranslator* self, QLocale* locale, libqt_string filename, libqt_string prefix, libqt_string directory);
bool QTranslator_Load5(QTranslator* self, QLocale* locale, libqt_string filename, libqt_string prefix, libqt_string directory, libqt_string suffix);
bool QTranslator_Load34(QTranslator* self, const unsigned char* data, int lenVal, libqt_string directory);
bool QTranslator_Event(QTranslator* self, QEvent* event);
void QTranslator_OnEvent(QTranslator* self, intptr_t slot);
bool QTranslator_QBaseEvent(QTranslator* self, QEvent* event);
bool QTranslator_EventFilter(QTranslator* self, QObject* watched, QEvent* event);
void QTranslator_OnEventFilter(QTranslator* self, intptr_t slot);
bool QTranslator_QBaseEventFilter(QTranslator* self, QObject* watched, QEvent* event);
void QTranslator_TimerEvent(QTranslator* self, QTimerEvent* event);
void QTranslator_OnTimerEvent(QTranslator* self, intptr_t slot);
void QTranslator_QBaseTimerEvent(QTranslator* self, QTimerEvent* event);
void QTranslator_ChildEvent(QTranslator* self, QChildEvent* event);
void QTranslator_OnChildEvent(QTranslator* self, intptr_t slot);
void QTranslator_QBaseChildEvent(QTranslator* self, QChildEvent* event);
void QTranslator_CustomEvent(QTranslator* self, QEvent* event);
void QTranslator_OnCustomEvent(QTranslator* self, intptr_t slot);
void QTranslator_QBaseCustomEvent(QTranslator* self, QEvent* event);
void QTranslator_ConnectNotify(QTranslator* self, QMetaMethod* signal);
void QTranslator_OnConnectNotify(QTranslator* self, intptr_t slot);
void QTranslator_QBaseConnectNotify(QTranslator* self, QMetaMethod* signal);
void QTranslator_DisconnectNotify(QTranslator* self, QMetaMethod* signal);
void QTranslator_OnDisconnectNotify(QTranslator* self, intptr_t slot);
void QTranslator_QBaseDisconnectNotify(QTranslator* self, QMetaMethod* signal);
QObject* QTranslator_Sender(const QTranslator* self);
void QTranslator_OnSender(const QTranslator* self, intptr_t slot);
QObject* QTranslator_QBaseSender(const QTranslator* self);
int QTranslator_SenderSignalIndex(const QTranslator* self);
void QTranslator_OnSenderSignalIndex(const QTranslator* self, intptr_t slot);
int QTranslator_QBaseSenderSignalIndex(const QTranslator* self);
int QTranslator_Receivers(const QTranslator* self, const char* signal);
void QTranslator_OnReceivers(const QTranslator* self, intptr_t slot);
int QTranslator_QBaseReceivers(const QTranslator* self, const char* signal);
bool QTranslator_IsSignalConnected(const QTranslator* self, QMetaMethod* signal);
void QTranslator_OnIsSignalConnected(const QTranslator* self, intptr_t slot);
bool QTranslator_QBaseIsSignalConnected(const QTranslator* self, QMetaMethod* signal);
void QTranslator_Delete(QTranslator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
