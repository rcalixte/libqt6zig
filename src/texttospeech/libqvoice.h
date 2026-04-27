#pragma once
#ifndef SRC_TEXTTOSPEECHC_LIBQVOICE_H
#define SRC_TEXTTOSPEECHC_LIBQVOICE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QLocale QLocale;
typedef struct QVoice QVoice;
#endif

QVoice* QVoice_new();
QVoice* QVoice_new2(const QVoice* other);
void QVoice_OperatorAssign(QVoice* self, const QVoice* other);
void QVoice_Swap(QVoice* self, QVoice* other);
libqt_string QVoice_Name(const QVoice* self);
QLocale* QVoice_Locale(const QVoice* self);
int QVoice_Gender(const QVoice* self);
int QVoice_Age(const QVoice* self);
uint16_t QVoice_Language(const QVoice* self);
libqt_string QVoice_GenderName(int gender);
libqt_string QVoice_AgeName(int age);
void QVoice_Delete(QVoice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
