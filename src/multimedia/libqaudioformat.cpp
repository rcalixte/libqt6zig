#include <QAudioFormat>
#include <qaudioformat.h>
#include "libqaudioformat.h"
#include "libqaudioformat.hxx"

QAudioFormat* QAudioFormat_new(const QAudioFormat* other) {
    return new QAudioFormat(*other);
}

QAudioFormat* QAudioFormat_new2(QAudioFormat* other) {
    return new QAudioFormat(std::move(*other));
}

QAudioFormat* QAudioFormat_new3() {
    return new QAudioFormat();
}

QAudioFormat* QAudioFormat_new4(const QAudioFormat* param1) {
    return new QAudioFormat(*param1);
}

void QAudioFormat_CopyAssign(QAudioFormat* self, QAudioFormat* other) {
    *self = *other;
}

void QAudioFormat_MoveAssign(QAudioFormat* self, QAudioFormat* other) {
    *self = std::move(*other);
}

bool QAudioFormat_IsValid(const QAudioFormat* self) {
    return self->isValid();
}

void QAudioFormat_SetSampleRate(QAudioFormat* self, int sampleRate) {
    self->setSampleRate(static_cast<int>(sampleRate));
}

int QAudioFormat_SampleRate(const QAudioFormat* self) {
    return self->sampleRate();
}

void QAudioFormat_SetChannelConfig(QAudioFormat* self, uint32_t config) {
    self->setChannelConfig(static_cast<QAudioFormat::ChannelConfig>(config));
}

uint32_t QAudioFormat_ChannelConfig(const QAudioFormat* self) {
    return static_cast<uint32_t>(self->channelConfig());
}

void QAudioFormat_SetChannelCount(QAudioFormat* self, int channelCount) {
    self->setChannelCount(static_cast<int>(channelCount));
}

int QAudioFormat_ChannelCount(const QAudioFormat* self) {
    return self->channelCount();
}

int QAudioFormat_ChannelOffset(const QAudioFormat* self, int channel) {
    return self->channelOffset(static_cast<QAudioFormat::AudioChannelPosition>(channel));
}

void QAudioFormat_SetSampleFormat(QAudioFormat* self, uint16_t f) {
    self->setSampleFormat(static_cast<QAudioFormat::SampleFormat>(f));
}

uint16_t QAudioFormat_SampleFormat(const QAudioFormat* self) {
    return static_cast<uint16_t>(self->sampleFormat());
}

int QAudioFormat_BytesForDuration(const QAudioFormat* self, long long microseconds) {
    return static_cast<int>(self->bytesForDuration(static_cast<qint64>(microseconds)));
}

long long QAudioFormat_DurationForBytes(const QAudioFormat* self, int byteCount) {
    return static_cast<long long>(self->durationForBytes(static_cast<qint32>(byteCount)));
}

int QAudioFormat_BytesForFrames(const QAudioFormat* self, int frameCount) {
    return static_cast<int>(self->bytesForFrames(static_cast<qint32>(frameCount)));
}

int QAudioFormat_FramesForBytes(const QAudioFormat* self, int byteCount) {
    return static_cast<int>(self->framesForBytes(static_cast<qint32>(byteCount)));
}

int QAudioFormat_FramesForDuration(const QAudioFormat* self, long long microseconds) {
    return static_cast<int>(self->framesForDuration(static_cast<qint64>(microseconds)));
}

long long QAudioFormat_DurationForFrames(const QAudioFormat* self, int frameCount) {
    return static_cast<long long>(self->durationForFrames(static_cast<qint32>(frameCount)));
}

int QAudioFormat_BytesPerFrame(const QAudioFormat* self) {
    return self->bytesPerFrame();
}

int QAudioFormat_BytesPerSample(const QAudioFormat* self) {
    return self->bytesPerSample();
}

float QAudioFormat_NormalizedSampleValue(const QAudioFormat* self, const void* sample) {
    return self->normalizedSampleValue(sample);
}

uint32_t QAudioFormat_DefaultChannelConfigForChannelCount(int channelCount) {
    return static_cast<uint32_t>(QAudioFormat::defaultChannelConfigForChannelCount(static_cast<int>(channelCount)));
}

void QAudioFormat_Delete(QAudioFormat* self) {
    delete self;
}
