#include <QAudioBuffer>
#include <QAudioFormat>
#include <QByteArray>
#include <qaudiobuffer.h>
#include "libqaudiobuffer.h"
#include "libqaudiobuffer.hxx"

QAudioBuffer* QAudioBuffer_new() {
    return new QAudioBuffer();
}

QAudioBuffer* QAudioBuffer_new2(const QAudioBuffer* other) {
    return new QAudioBuffer(*other);
}

QAudioBuffer* QAudioBuffer_new3(const libqt_string data, const QAudioFormat* format) {
    QByteArray data_QByteArray(data.data, data.len);
    return new QAudioBuffer(data_QByteArray, *format);
}

QAudioBuffer* QAudioBuffer_new4(int numFrames, const QAudioFormat* format) {
    return new QAudioBuffer(static_cast<int>(numFrames), *format);
}

QAudioBuffer* QAudioBuffer_new5(const libqt_string data, const QAudioFormat* format, long long startTime) {
    QByteArray data_QByteArray(data.data, data.len);
    return new QAudioBuffer(data_QByteArray, *format, static_cast<qint64>(startTime));
}

QAudioBuffer* QAudioBuffer_new6(int numFrames, const QAudioFormat* format, long long startTime) {
    return new QAudioBuffer(static_cast<int>(numFrames), *format, static_cast<qint64>(startTime));
}

void QAudioBuffer_OperatorAssign(QAudioBuffer* self, const QAudioBuffer* other) {
    self->operator=(*other);
}

void QAudioBuffer_Swap(QAudioBuffer* self, QAudioBuffer* other) {
    self->swap(*other);
}

bool QAudioBuffer_IsValid(const QAudioBuffer* self) {
    return self->isValid();
}

void QAudioBuffer_Detach(QAudioBuffer* self) {
    self->detach();
}

QAudioFormat* QAudioBuffer_Format(const QAudioBuffer* self) {
    return new QAudioFormat(self->format());
}

ptrdiff_t QAudioBuffer_FrameCount(const QAudioBuffer* self) {
    return static_cast<ptrdiff_t>(self->frameCount());
}

ptrdiff_t QAudioBuffer_SampleCount(const QAudioBuffer* self) {
    return static_cast<ptrdiff_t>(self->sampleCount());
}

ptrdiff_t QAudioBuffer_ByteCount(const QAudioBuffer* self) {
    return static_cast<ptrdiff_t>(self->byteCount());
}

long long QAudioBuffer_Duration(const QAudioBuffer* self) {
    return static_cast<long long>(self->duration());
}

long long QAudioBuffer_StartTime(const QAudioBuffer* self) {
    return static_cast<long long>(self->startTime());
}

void QAudioBuffer_Delete(QAudioBuffer* self) {
    delete self;
}
