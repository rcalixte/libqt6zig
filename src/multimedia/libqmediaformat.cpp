#include <QList>
#include <QMediaFormat>
#include <QMimeType>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qmediaformat.h>
#include "libqmediaformat.h"
#include "libqmediaformat.hxx"

QMediaFormat* QMediaFormat_new() {
    return new QMediaFormat();
}

QMediaFormat* QMediaFormat_new2(const QMediaFormat* other) {
    return new QMediaFormat(*other);
}

QMediaFormat* QMediaFormat_new3(int format) {
    return new QMediaFormat(static_cast<QMediaFormat::FileFormat>(format));
}

void QMediaFormat_OperatorAssign(QMediaFormat* self, const QMediaFormat* other) {
    self->operator=(*other);
}

void QMediaFormat_Swap(QMediaFormat* self, QMediaFormat* other) {
    self->swap(*other);
}

int QMediaFormat_FileFormat(const QMediaFormat* self) {
    return static_cast<int>(self->fileFormat());
}

void QMediaFormat_SetFileFormat(QMediaFormat* self, int f) {
    self->setFileFormat(static_cast<QMediaFormat::FileFormat>(f));
}

void QMediaFormat_SetVideoCodec(QMediaFormat* self, int codec) {
    self->setVideoCodec(static_cast<QMediaFormat::VideoCodec>(codec));
}

int QMediaFormat_VideoCodec(const QMediaFormat* self) {
    return static_cast<int>(self->videoCodec());
}

void QMediaFormat_SetAudioCodec(QMediaFormat* self, int codec) {
    self->setAudioCodec(static_cast<QMediaFormat::AudioCodec>(codec));
}

int QMediaFormat_AudioCodec(const QMediaFormat* self) {
    return static_cast<int>(self->audioCodec());
}

bool QMediaFormat_IsSupported(const QMediaFormat* self, int mode) {
    return self->isSupported(static_cast<QMediaFormat::ConversionMode>(mode));
}

QMimeType* QMediaFormat_MimeType(const QMediaFormat* self) {
    return new QMimeType(self->mimeType());
}

libqt_list /* of int */ QMediaFormat_SupportedFileFormats(QMediaFormat* self, int m) {
    QList<QMediaFormat::FileFormat> _ret = self->supportedFileFormats(static_cast<QMediaFormat::ConversionMode>(m));
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of int */ QMediaFormat_SupportedVideoCodecs(QMediaFormat* self, int m) {
    QList<QMediaFormat::VideoCodec> _ret = self->supportedVideoCodecs(static_cast<QMediaFormat::ConversionMode>(m));
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of int */ QMediaFormat_SupportedAudioCodecs(QMediaFormat* self, int m) {
    QList<QMediaFormat::AudioCodec> _ret = self->supportedAudioCodecs(static_cast<QMediaFormat::ConversionMode>(m));
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QMediaFormat_FileFormatName(int fileFormat) {
    QString _ret = QMediaFormat::fileFormatName(static_cast<QMediaFormat::FileFormat>(fileFormat));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QMediaFormat_AudioCodecName(int codec) {
    QString _ret = QMediaFormat::audioCodecName(static_cast<QMediaFormat::AudioCodec>(codec));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QMediaFormat_VideoCodecName(int codec) {
    QString _ret = QMediaFormat::videoCodecName(static_cast<QMediaFormat::VideoCodec>(codec));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QMediaFormat_FileFormatDescription(int fileFormat) {
    QString _ret = QMediaFormat::fileFormatDescription(static_cast<QMediaFormat::FileFormat>(fileFormat));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QMediaFormat_AudioCodecDescription(int codec) {
    QString _ret = QMediaFormat::audioCodecDescription(static_cast<QMediaFormat::AudioCodec>(codec));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QMediaFormat_VideoCodecDescription(int codec) {
    QString _ret = QMediaFormat::videoCodecDescription(static_cast<QMediaFormat::VideoCodec>(codec));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QMediaFormat_OperatorEqual(const QMediaFormat* self, const QMediaFormat* other) {
    return (*self == *other);
}

bool QMediaFormat_OperatorNotEqual(const QMediaFormat* self, const QMediaFormat* other) {
    return (*self != *other);
}

void QMediaFormat_ResolveForEncoding(QMediaFormat* self, int flags) {
    self->resolveForEncoding(static_cast<QMediaFormat::ResolveFlags>(flags));
}

void QMediaFormat_Delete(QMediaFormat* self) {
    delete self;
}
