#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQAUDIODEVICE_H
#define SRC_MULTIMEDIAC_LIBQAUDIODEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAudioDevice QAudioDevice;
typedef struct QAudioFormat QAudioFormat;
#endif

#ifdef __cplusplus
typedef QAudioDevice::Mode Mode;                     // C++ enum
typedef QAudioDevice::QtGadgetHelper QtGadgetHelper; // C++ QFlags
#else
typedef int Mode;            // C ABI enum
typedef void QtGadgetHelper; // C ABI QFlags
#endif

QAudioDevice* QAudioDevice_new();
QAudioDevice* QAudioDevice_new2(QAudioDevice* other);
void QAudioDevice_Swap(QAudioDevice* self, QAudioDevice* other);
void QAudioDevice_OperatorAssign(QAudioDevice* self, QAudioDevice* other);
bool QAudioDevice_OperatorEqual(const QAudioDevice* self, QAudioDevice* other);
bool QAudioDevice_OperatorNotEqual(const QAudioDevice* self, QAudioDevice* other);
bool QAudioDevice_IsNull(const QAudioDevice* self);
libqt_string QAudioDevice_Id(const QAudioDevice* self);
libqt_string QAudioDevice_Description(const QAudioDevice* self);
bool QAudioDevice_IsDefault(const QAudioDevice* self);
int QAudioDevice_Mode(const QAudioDevice* self);
bool QAudioDevice_IsFormatSupported(const QAudioDevice* self, QAudioFormat* format);
QAudioFormat* QAudioDevice_PreferredFormat(const QAudioDevice* self);
int QAudioDevice_MinimumSampleRate(const QAudioDevice* self);
int QAudioDevice_MaximumSampleRate(const QAudioDevice* self);
int QAudioDevice_MinimumChannelCount(const QAudioDevice* self);
int QAudioDevice_MaximumChannelCount(const QAudioDevice* self);
libqt_list /* of uint16_t */ QAudioDevice_SupportedSampleFormats(const QAudioDevice* self);
uint32_t QAudioDevice_ChannelConfiguration(const QAudioDevice* self);
void QAudioDevice_Delete(QAudioDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
