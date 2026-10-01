#pragma once
#ifndef TEXTTOSPEECH_LIBQTEXTTOSPEECHENGINE_H
#define TEXTTOSPEECH_LIBQTEXTTOSPEECHENGINE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAudioFormat QAudioFormat;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLocale QLocale;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTextToSpeechEngine QTextToSpeechEngine;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QVoice QVoice;
#endif

QTextToSpeechEngine* QTextToSpeechEngine_new();
QTextToSpeechEngine* QTextToSpeechEngine_new2(QObject* parent);
QMetaObject* QTextToSpeechEngine_MetaObject(const QTextToSpeechEngine* self);
void* QTextToSpeechEngine_Metacast(QTextToSpeechEngine* self, const char* param1);
int QTextToSpeechEngine_Metacall(QTextToSpeechEngine* self, int param1, int param2, void** param3);
libqt_string QTextToSpeechEngine_Tr(const char* s);
int QTextToSpeechEngine_Capabilities(const QTextToSpeechEngine* self);
libqt_list /* of QLocale* */ QTextToSpeechEngine_AvailableLocales(const QTextToSpeechEngine* self);
libqt_list /* of QVoice* */ QTextToSpeechEngine_AvailableVoices(const QTextToSpeechEngine* self);
void QTextToSpeechEngine_Say(QTextToSpeechEngine* self, const libqt_string text);
void QTextToSpeechEngine_Synthesize(QTextToSpeechEngine* self, const libqt_string text);
void QTextToSpeechEngine_Stop(QTextToSpeechEngine* self, int boundaryHint);
void QTextToSpeechEngine_Pause(QTextToSpeechEngine* self, int boundaryHint);
void QTextToSpeechEngine_Resume(QTextToSpeechEngine* self);
double QTextToSpeechEngine_Rate(const QTextToSpeechEngine* self);
bool QTextToSpeechEngine_SetRate(QTextToSpeechEngine* self, double rate);
double QTextToSpeechEngine_Pitch(const QTextToSpeechEngine* self);
bool QTextToSpeechEngine_SetPitch(QTextToSpeechEngine* self, double pitch);
QLocale* QTextToSpeechEngine_Locale(const QTextToSpeechEngine* self);
bool QTextToSpeechEngine_SetLocale(QTextToSpeechEngine* self, const QLocale* locale);
double QTextToSpeechEngine_Volume(const QTextToSpeechEngine* self);
bool QTextToSpeechEngine_SetVolume(QTextToSpeechEngine* self, double volume);
QVoice* QTextToSpeechEngine_Voice(const QTextToSpeechEngine* self);
bool QTextToSpeechEngine_SetVoice(QTextToSpeechEngine* self, const QVoice* voice);
int QTextToSpeechEngine_State(const QTextToSpeechEngine* self);
int QTextToSpeechEngine_ErrorReason(const QTextToSpeechEngine* self);
libqt_string QTextToSpeechEngine_ErrorString(const QTextToSpeechEngine* self);
void QTextToSpeechEngine_StateChanged(QTextToSpeechEngine* self, int state);
void QTextToSpeechEngine_Connect_StateChanged(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_ErrorOccurred(QTextToSpeechEngine* self, int errorVal, const libqt_string errorString);
void QTextToSpeechEngine_Connect_ErrorOccurred(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_SayingWord(QTextToSpeechEngine* self, const libqt_string word, ptrdiff_t start, ptrdiff_t length);
void QTextToSpeechEngine_Connect_SayingWord(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_Synthesized(QTextToSpeechEngine* self, const QAudioFormat* format, const libqt_string data);
void QTextToSpeechEngine_Connect_Synthesized(QTextToSpeechEngine* self, intptr_t slot);
libqt_string QTextToSpeechEngine_Tr2(const char* s, const char* c);
libqt_string QTextToSpeechEngine_Tr3(const char* s, const char* c, int n);
void QTextToSpeechEngine_OnMetaObject(QTextToSpeechEngine* self, intptr_t slot);
QMetaObject* QTextToSpeechEngine_SuperMetaObject(const QTextToSpeechEngine* self);
void QTextToSpeechEngine_OnMetacast(QTextToSpeechEngine* self, intptr_t slot);
void* QTextToSpeechEngine_SuperMetacast(QTextToSpeechEngine* self, const char* param1);
void QTextToSpeechEngine_OnMetacall(QTextToSpeechEngine* self, intptr_t slot);
int QTextToSpeechEngine_SuperMetacall(QTextToSpeechEngine* self, int param1, int param2, void** param3);
void QTextToSpeechEngine_OnCapabilities(QTextToSpeechEngine* self, intptr_t slot);
int QTextToSpeechEngine_SuperCapabilities(const QTextToSpeechEngine* self);
void QTextToSpeechEngine_OnAvailableLocales(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_OnAvailableVoices(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_OnSay(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_OnSynthesize(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_OnStop(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_OnPause(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_OnResume(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_OnRate(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_OnSetRate(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_OnPitch(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_OnSetPitch(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_OnLocale(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_OnSetLocale(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_OnVolume(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_OnSetVolume(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_OnVoice(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_OnSetVoice(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_OnState(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_OnErrorReason(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_OnErrorString(QTextToSpeechEngine* self, intptr_t slot);
bool QTextToSpeechEngine_Event(QTextToSpeechEngine* self, QEvent* event);
void QTextToSpeechEngine_OnEvent(QTextToSpeechEngine* self, intptr_t slot);
bool QTextToSpeechEngine_SuperEvent(QTextToSpeechEngine* self, QEvent* event);
bool QTextToSpeechEngine_EventFilter(QTextToSpeechEngine* self, QObject* watched, QEvent* event);
void QTextToSpeechEngine_OnEventFilter(QTextToSpeechEngine* self, intptr_t slot);
bool QTextToSpeechEngine_SuperEventFilter(QTextToSpeechEngine* self, QObject* watched, QEvent* event);
void QTextToSpeechEngine_TimerEvent(QTextToSpeechEngine* self, QTimerEvent* event);
void QTextToSpeechEngine_OnTimerEvent(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_SuperTimerEvent(QTextToSpeechEngine* self, QTimerEvent* event);
void QTextToSpeechEngine_ChildEvent(QTextToSpeechEngine* self, QChildEvent* event);
void QTextToSpeechEngine_OnChildEvent(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_SuperChildEvent(QTextToSpeechEngine* self, QChildEvent* event);
void QTextToSpeechEngine_CustomEvent(QTextToSpeechEngine* self, QEvent* event);
void QTextToSpeechEngine_OnCustomEvent(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_SuperCustomEvent(QTextToSpeechEngine* self, QEvent* event);
void QTextToSpeechEngine_ConnectNotify(QTextToSpeechEngine* self, const QMetaMethod* signal);
void QTextToSpeechEngine_OnConnectNotify(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_SuperConnectNotify(QTextToSpeechEngine* self, const QMetaMethod* signal);
void QTextToSpeechEngine_DisconnectNotify(QTextToSpeechEngine* self, const QMetaMethod* signal);
void QTextToSpeechEngine_OnDisconnectNotify(QTextToSpeechEngine* self, intptr_t slot);
void QTextToSpeechEngine_SuperDisconnectNotify(QTextToSpeechEngine* self, const QMetaMethod* signal);
QVoice* QTextToSpeechEngine_CreateVoice(QTextToSpeechEngine* self, const libqt_string name, const QLocale* locale, int gender, int age, const QVariant* data);
QVariant* QTextToSpeechEngine_VoiceData(QTextToSpeechEngine* self, const QVoice* voice);
QObject* QTextToSpeechEngine_Sender(const QTextToSpeechEngine* self);
int QTextToSpeechEngine_SenderSignalIndex(const QTextToSpeechEngine* self);
int QTextToSpeechEngine_Receivers(const QTextToSpeechEngine* self, const char* signal);
bool QTextToSpeechEngine_IsSignalConnected(const QTextToSpeechEngine* self, const QMetaMethod* signal);
void QTextToSpeechEngine_Delete(QTextToSpeechEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
