#include <QAudioDevice>
#include <QAudioFormat>
#include <QByteArray>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudiodevice.h>
#include "libqaudiodevice.h"
#include "libqaudiodevice.hxx"

QAudioDevice* QAudioDevice_new() {
    return new QAudioDevice();
}

QAudioDevice* QAudioDevice_new2(const QAudioDevice* other) {
    return new QAudioDevice(*other);
}

void QAudioDevice_Swap(QAudioDevice* self, QAudioDevice* other) {
    self->swap(*other);
}

void QAudioDevice_OperatorAssign(QAudioDevice* self, const QAudioDevice* other) {
    self->operator=(*other);
}

bool QAudioDevice_OperatorEqual(const QAudioDevice* self, const QAudioDevice* other) {
    return (*self == *other);
}

bool QAudioDevice_OperatorNotEqual(const QAudioDevice* self, const QAudioDevice* other) {
    return (*self != *other);
}

bool QAudioDevice_IsNull(const QAudioDevice* self) {
    return self->isNull();
}

libqt_string QAudioDevice_Id(const QAudioDevice* self) {
    QByteArray _qb = self->id();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAudioDevice_Description(const QAudioDevice* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QAudioDevice_IsDefault(const QAudioDevice* self) {
    return self->isDefault();
}

int QAudioDevice_Mode(const QAudioDevice* self) {
    return static_cast<int>(self->mode());
}

bool QAudioDevice_IsFormatSupported(const QAudioDevice* self, const QAudioFormat* format) {
    return self->isFormatSupported(*format);
}

QAudioFormat* QAudioDevice_PreferredFormat(const QAudioDevice* self) {
    return new QAudioFormat(self->preferredFormat());
}

int QAudioDevice_MinimumSampleRate(const QAudioDevice* self) {
    return self->minimumSampleRate();
}

int QAudioDevice_MaximumSampleRate(const QAudioDevice* self) {
    return self->maximumSampleRate();
}

int QAudioDevice_MinimumChannelCount(const QAudioDevice* self) {
    return self->minimumChannelCount();
}

int QAudioDevice_MaximumChannelCount(const QAudioDevice* self) {
    return self->maximumChannelCount();
}

libqt_list /* of uint16_t */ QAudioDevice_SupportedSampleFormats(const QAudioDevice* self) {
    QList<QAudioFormat::SampleFormat> _ret = self->supportedSampleFormats();
    // Convert QList<> from C++ memory to manually-managed C memory
    uint16_t* _arr = static_cast<uint16_t*>(malloc(sizeof(uint16_t) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<uint16_t>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

uint32_t QAudioDevice_ChannelConfiguration(const QAudioDevice* self) {
    return static_cast<uint32_t>(self->channelConfiguration());
}

void QAudioDevice_Delete(QAudioDevice* self) {
    delete self;
}
