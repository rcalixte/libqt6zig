#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQAUDIOBUFFER_H
#define SRC_MULTIMEDIAC_LIBQAUDIOBUFFER_H

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
typedef struct QAudioBuffer QAudioBuffer;
typedef struct QAudioFormat QAudioFormat;
#endif

#ifdef __cplusplus
typedef QAudioBuffer::F32M F32M; // C++ QFlags
typedef QAudioBuffer::F32S F32S; // C++ QFlags
typedef QAudioBuffer::S16M S16M; // C++ QFlags
typedef QAudioBuffer::S16S S16S; // C++ QFlags
typedef QAudioBuffer::S32M S32M; // C++ QFlags
typedef QAudioBuffer::S32S S32S; // C++ QFlags
typedef QAudioBuffer::U8M U8M;   // C++ QFlags
typedef QAudioBuffer::U8S U8S;   // C++ QFlags
#else

#endif

QAudioBuffer* QAudioBuffer_new();
QAudioBuffer* QAudioBuffer_new2(const QAudioBuffer* other);
QAudioBuffer* QAudioBuffer_new3(const libqt_string data, const QAudioFormat* format);
QAudioBuffer* QAudioBuffer_new4(int numFrames, const QAudioFormat* format);
QAudioBuffer* QAudioBuffer_new5(const libqt_string data, const QAudioFormat* format, long long startTime);
QAudioBuffer* QAudioBuffer_new6(int numFrames, const QAudioFormat* format, long long startTime);
void QAudioBuffer_OperatorAssign(QAudioBuffer* self, const QAudioBuffer* other);
void QAudioBuffer_Swap(QAudioBuffer* self, QAudioBuffer* other);
bool QAudioBuffer_IsValid(const QAudioBuffer* self);
void QAudioBuffer_Detach(QAudioBuffer* self);
QAudioFormat* QAudioBuffer_Format(const QAudioBuffer* self);
ptrdiff_t QAudioBuffer_FrameCount(const QAudioBuffer* self);
ptrdiff_t QAudioBuffer_SampleCount(const QAudioBuffer* self);
ptrdiff_t QAudioBuffer_ByteCount(const QAudioBuffer* self);
long long QAudioBuffer_Duration(const QAudioBuffer* self);
long long QAudioBuffer_StartTime(const QAudioBuffer* self);
void QAudioBuffer_Delete(QAudioBuffer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
