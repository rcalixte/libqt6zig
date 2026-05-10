#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBTEXTTOSPEECH_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBTEXTTOSPEECH_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_TextEditTextToSpeech__TextToSpeech)
typedef TextEditTextToSpeech::TextToSpeech TextEditTextToSpeech__TextToSpeech;
#endif
#else
typedef struct QLocale QLocale;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct TextEditTextToSpeech__TextToSpeech TextEditTextToSpeech__TextToSpeech;
#endif

QMetaObject* TextEditTextToSpeech__TextToSpeech_MetaObject(const TextEditTextToSpeech__TextToSpeech* self);
void* TextEditTextToSpeech__TextToSpeech_Metacast(TextEditTextToSpeech__TextToSpeech* self, const char* param1);
int TextEditTextToSpeech__TextToSpeech_Metacall(TextEditTextToSpeech__TextToSpeech* self, int param1, int param2, void** param3);
TextEditTextToSpeech__TextToSpeech* TextEditTextToSpeech__TextToSpeech_Self();
bool TextEditTextToSpeech__TextToSpeech_IsReady(const TextEditTextToSpeech__TextToSpeech* self);
double TextEditTextToSpeech__TextToSpeech_Volume(const TextEditTextToSpeech__TextToSpeech* self);
libqt_list /* of QLocale* */ TextEditTextToSpeech__TextToSpeech_AvailableLocales(const TextEditTextToSpeech__TextToSpeech* self);
libqt_list /* of libqt_string */ TextEditTextToSpeech__TextToSpeech_AvailableEngines(const TextEditTextToSpeech__TextToSpeech* self);
libqt_list /* of libqt_string */ TextEditTextToSpeech__TextToSpeech_AvailableVoices(const TextEditTextToSpeech__TextToSpeech* self);
QLocale* TextEditTextToSpeech__TextToSpeech_Locale(const TextEditTextToSpeech__TextToSpeech* self);
void TextEditTextToSpeech__TextToSpeech_ReloadSettings(TextEditTextToSpeech__TextToSpeech* self);
void TextEditTextToSpeech__TextToSpeech_Say(TextEditTextToSpeech__TextToSpeech* self, const libqt_string text);
void TextEditTextToSpeech__TextToSpeech_Stop(TextEditTextToSpeech__TextToSpeech* self);
void TextEditTextToSpeech__TextToSpeech_Pause(TextEditTextToSpeech__TextToSpeech* self);
void TextEditTextToSpeech__TextToSpeech_Resume(TextEditTextToSpeech__TextToSpeech* self);
void TextEditTextToSpeech__TextToSpeech_SetRate(TextEditTextToSpeech__TextToSpeech* self, double rate);
void TextEditTextToSpeech__TextToSpeech_SetPitch(TextEditTextToSpeech__TextToSpeech* self, double pitch);
void TextEditTextToSpeech__TextToSpeech_SetVolume(TextEditTextToSpeech__TextToSpeech* self, double volume);
void TextEditTextToSpeech__TextToSpeech_SetLocale(const TextEditTextToSpeech__TextToSpeech* self, const QLocale* locale);
void TextEditTextToSpeech__TextToSpeech_StateChanged(TextEditTextToSpeech__TextToSpeech* self, int param1);
void TextEditTextToSpeech__TextToSpeech_Connect_StateChanged(TextEditTextToSpeech__TextToSpeech* self, intptr_t slot);
void TextEditTextToSpeech__TextToSpeech_Delete(TextEditTextToSpeech__TextToSpeech* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
