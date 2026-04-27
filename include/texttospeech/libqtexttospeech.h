#pragma once
#ifndef SRC_TEXTTOSPEECHC_LIBQTEXTTOSPEECH_H
#define SRC_TEXTTOSPEECHC_LIBQTEXTTOSPEECH_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QLocale QLocale;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTextToSpeech QTextToSpeech;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QVoice QVoice;
#endif

QTextToSpeech* QTextToSpeech_new();
QTextToSpeech* QTextToSpeech_new2(const libqt_string engine);
QTextToSpeech* QTextToSpeech_new3(const libqt_string engine, const libqt_map /* of libqt_string to QVariant* */ params);
QTextToSpeech* QTextToSpeech_new4(QObject* parent);
QTextToSpeech* QTextToSpeech_new5(const libqt_string engine, QObject* parent);
QTextToSpeech* QTextToSpeech_new6(const libqt_string engine, const libqt_map /* of libqt_string to QVariant* */ params, QObject* parent);
QMetaObject* QTextToSpeech_MetaObject(const QTextToSpeech* self);
void* QTextToSpeech_Metacast(QTextToSpeech* self, const char* param1);
int QTextToSpeech_Metacall(QTextToSpeech* self, int param1, int param2, void** param3);
bool QTextToSpeech_SetEngine(QTextToSpeech* self, const libqt_string engine);
libqt_string QTextToSpeech_Engine(const QTextToSpeech* self);
int QTextToSpeech_EngineCapabilities(const QTextToSpeech* self);
int QTextToSpeech_State(const QTextToSpeech* self);
int QTextToSpeech_ErrorReason(const QTextToSpeech* self);
libqt_string QTextToSpeech_ErrorString(const QTextToSpeech* self);
libqt_list /* of QLocale* */ QTextToSpeech_AvailableLocales(const QTextToSpeech* self);
QLocale* QTextToSpeech_Locale(const QTextToSpeech* self);
QVoice* QTextToSpeech_Voice(const QTextToSpeech* self);
libqt_list /* of QVoice* */ QTextToSpeech_AvailableVoices(const QTextToSpeech* self);
double QTextToSpeech_Rate(const QTextToSpeech* self);
double QTextToSpeech_Pitch(const QTextToSpeech* self);
double QTextToSpeech_Volume(const QTextToSpeech* self);
libqt_list /* of libqt_string */ QTextToSpeech_AvailableEngines();
void QTextToSpeech_Say(QTextToSpeech* self, const libqt_string text);
ptrdiff_t QTextToSpeech_Enqueue(QTextToSpeech* self, const libqt_string text);
void QTextToSpeech_Stop(QTextToSpeech* self);
void QTextToSpeech_Pause(QTextToSpeech* self);
void QTextToSpeech_Resume(QTextToSpeech* self);
void QTextToSpeech_SetLocale(QTextToSpeech* self, const QLocale* locale);
void QTextToSpeech_SetRate(QTextToSpeech* self, double rate);
void QTextToSpeech_SetPitch(QTextToSpeech* self, double pitch);
void QTextToSpeech_SetVolume(QTextToSpeech* self, double volume);
void QTextToSpeech_SetVoice(QTextToSpeech* self, const QVoice* voice);
void QTextToSpeech_EngineChanged(QTextToSpeech* self, const libqt_string engine);
void QTextToSpeech_Connect_EngineChanged(QTextToSpeech* self, intptr_t slot);
void QTextToSpeech_StateChanged(QTextToSpeech* self, int state);
void QTextToSpeech_Connect_StateChanged(QTextToSpeech* self, intptr_t slot);
void QTextToSpeech_ErrorOccurred(QTextToSpeech* self, int errorVal, const libqt_string errorString);
void QTextToSpeech_Connect_ErrorOccurred(QTextToSpeech* self, intptr_t slot);
void QTextToSpeech_LocaleChanged(QTextToSpeech* self, const QLocale* locale);
void QTextToSpeech_Connect_LocaleChanged(QTextToSpeech* self, intptr_t slot);
void QTextToSpeech_RateChanged(QTextToSpeech* self, double rate);
void QTextToSpeech_Connect_RateChanged(QTextToSpeech* self, intptr_t slot);
void QTextToSpeech_PitchChanged(QTextToSpeech* self, double pitch);
void QTextToSpeech_Connect_PitchChanged(QTextToSpeech* self, intptr_t slot);
void QTextToSpeech_VolumeChanged(QTextToSpeech* self, double volume);
void QTextToSpeech_Connect_VolumeChanged(QTextToSpeech* self, intptr_t slot);
void QTextToSpeech_VoiceChanged(QTextToSpeech* self, const QVoice* voice);
void QTextToSpeech_Connect_VoiceChanged(QTextToSpeech* self, intptr_t slot);
void QTextToSpeech_SayingWord(QTextToSpeech* self, const libqt_string word, ptrdiff_t id, ptrdiff_t start, ptrdiff_t length);
void QTextToSpeech_Connect_SayingWord(QTextToSpeech* self, intptr_t slot);
void QTextToSpeech_AboutToSynthesize(QTextToSpeech* self, ptrdiff_t id);
void QTextToSpeech_Connect_AboutToSynthesize(QTextToSpeech* self, intptr_t slot);
bool QTextToSpeech_SetEngine2(QTextToSpeech* self, const libqt_string engine, const libqt_map /* of libqt_string to QVariant* */ params);
void QTextToSpeech_Stop1(QTextToSpeech* self, int boundaryHint);
void QTextToSpeech_Pause1(QTextToSpeech* self, int boundaryHint);
void QTextToSpeech_OnMetaObject(const QTextToSpeech* self, intptr_t slot);
QMetaObject* QTextToSpeech_SuperMetaObject(const QTextToSpeech* self);
void QTextToSpeech_OnMetacast(QTextToSpeech* self, intptr_t slot);
void* QTextToSpeech_SuperMetacast(QTextToSpeech* self, const char* param1);
void QTextToSpeech_OnMetacall(QTextToSpeech* self, intptr_t slot);
int QTextToSpeech_SuperMetacall(QTextToSpeech* self, int param1, int param2, void** param3);
bool QTextToSpeech_Event(QTextToSpeech* self, QEvent* event);
void QTextToSpeech_OnEvent(QTextToSpeech* self, intptr_t slot);
bool QTextToSpeech_SuperEvent(QTextToSpeech* self, QEvent* event);
bool QTextToSpeech_EventFilter(QTextToSpeech* self, QObject* watched, QEvent* event);
void QTextToSpeech_OnEventFilter(QTextToSpeech* self, intptr_t slot);
bool QTextToSpeech_SuperEventFilter(QTextToSpeech* self, QObject* watched, QEvent* event);
void QTextToSpeech_TimerEvent(QTextToSpeech* self, QTimerEvent* event);
void QTextToSpeech_OnTimerEvent(QTextToSpeech* self, intptr_t slot);
void QTextToSpeech_SuperTimerEvent(QTextToSpeech* self, QTimerEvent* event);
void QTextToSpeech_ChildEvent(QTextToSpeech* self, QChildEvent* event);
void QTextToSpeech_OnChildEvent(QTextToSpeech* self, intptr_t slot);
void QTextToSpeech_SuperChildEvent(QTextToSpeech* self, QChildEvent* event);
void QTextToSpeech_CustomEvent(QTextToSpeech* self, QEvent* event);
void QTextToSpeech_OnCustomEvent(QTextToSpeech* self, intptr_t slot);
void QTextToSpeech_SuperCustomEvent(QTextToSpeech* self, QEvent* event);
void QTextToSpeech_ConnectNotify(QTextToSpeech* self, const QMetaMethod* signal);
void QTextToSpeech_OnConnectNotify(QTextToSpeech* self, intptr_t slot);
void QTextToSpeech_SuperConnectNotify(QTextToSpeech* self, const QMetaMethod* signal);
void QTextToSpeech_DisconnectNotify(QTextToSpeech* self, const QMetaMethod* signal);
void QTextToSpeech_OnDisconnectNotify(QTextToSpeech* self, intptr_t slot);
void QTextToSpeech_SuperDisconnectNotify(QTextToSpeech* self, const QMetaMethod* signal);
libqt_list /* of QVoice* */ QTextToSpeech_AllVoices(const QTextToSpeech* self, const QLocale* locale);
void QTextToSpeech_OnAllVoices(const QTextToSpeech* self, intptr_t slot);
libqt_list /* of QVoice* */ QTextToSpeech_SuperAllVoices(const QTextToSpeech* self, const QLocale* locale);
QObject* QTextToSpeech_Sender(const QTextToSpeech* self);
void QTextToSpeech_OnSender(const QTextToSpeech* self, intptr_t slot);
QObject* QTextToSpeech_SuperSender(const QTextToSpeech* self);
int QTextToSpeech_SenderSignalIndex(const QTextToSpeech* self);
void QTextToSpeech_OnSenderSignalIndex(const QTextToSpeech* self, intptr_t slot);
int QTextToSpeech_SuperSenderSignalIndex(const QTextToSpeech* self);
int QTextToSpeech_Receivers(const QTextToSpeech* self, const char* signal);
void QTextToSpeech_OnReceivers(const QTextToSpeech* self, intptr_t slot);
int QTextToSpeech_SuperReceivers(const QTextToSpeech* self, const char* signal);
bool QTextToSpeech_IsSignalConnected(const QTextToSpeech* self, const QMetaMethod* signal);
void QTextToSpeech_OnIsSignalConnected(const QTextToSpeech* self, intptr_t slot);
bool QTextToSpeech_SuperIsSignalConnected(const QTextToSpeech* self, const QMetaMethod* signal);
void QTextToSpeech_Delete(QTextToSpeech* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
