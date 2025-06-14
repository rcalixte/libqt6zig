#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVideoFrameFormat>
#include <qvideoframeformat.h>
#include "libqvideoframeformat.h"
#include "libqvideoframeformat.hxx"

QVideoFrameFormat* QVideoFrameFormat_new() {
    return new QVideoFrameFormat();
}

QVideoFrameFormat* QVideoFrameFormat_new2(const QSize* size, int pixelFormat) {
    return new QVideoFrameFormat(*size, static_cast<QVideoFrameFormat::PixelFormat>(pixelFormat));
}

QVideoFrameFormat* QVideoFrameFormat_new3(const QVideoFrameFormat* format) {
    return new QVideoFrameFormat(*format);
}

void QVideoFrameFormat_Swap(QVideoFrameFormat* self, QVideoFrameFormat* other) {
    self->swap(*other);
}

void QVideoFrameFormat_Detach(QVideoFrameFormat* self) {
    self->detach();
}

void QVideoFrameFormat_OperatorAssign(QVideoFrameFormat* self, const QVideoFrameFormat* format) {
    self->operator=(*format);
}

bool QVideoFrameFormat_OperatorEqual(const QVideoFrameFormat* self, const QVideoFrameFormat* format) {
    return (*self == *format);
}

bool QVideoFrameFormat_OperatorNotEqual(const QVideoFrameFormat* self, const QVideoFrameFormat* format) {
    return (*self != *format);
}

bool QVideoFrameFormat_IsValid(const QVideoFrameFormat* self) {
    return self->isValid();
}

int QVideoFrameFormat_PixelFormat(const QVideoFrameFormat* self) {
    return static_cast<int>(self->pixelFormat());
}

QSize* QVideoFrameFormat_FrameSize(const QVideoFrameFormat* self) {
    return new QSize(self->frameSize());
}

void QVideoFrameFormat_SetFrameSize(QVideoFrameFormat* self, const QSize* size) {
    self->setFrameSize(*size);
}

void QVideoFrameFormat_SetFrameSize2(QVideoFrameFormat* self, int width, int height) {
    self->setFrameSize(static_cast<int>(width), static_cast<int>(height));
}

int QVideoFrameFormat_FrameWidth(const QVideoFrameFormat* self) {
    return self->frameWidth();
}

int QVideoFrameFormat_FrameHeight(const QVideoFrameFormat* self) {
    return self->frameHeight();
}

int QVideoFrameFormat_PlaneCount(const QVideoFrameFormat* self) {
    return self->planeCount();
}

QRect* QVideoFrameFormat_Viewport(const QVideoFrameFormat* self) {
    return new QRect(self->viewport());
}

void QVideoFrameFormat_SetViewport(QVideoFrameFormat* self, const QRect* viewport) {
    self->setViewport(*viewport);
}

int QVideoFrameFormat_ScanLineDirection(const QVideoFrameFormat* self) {
    return static_cast<int>(self->scanLineDirection());
}

void QVideoFrameFormat_SetScanLineDirection(QVideoFrameFormat* self, int direction) {
    self->setScanLineDirection(static_cast<QVideoFrameFormat::Direction>(direction));
}

double QVideoFrameFormat_FrameRate(const QVideoFrameFormat* self) {
    return static_cast<double>(self->frameRate());
}

void QVideoFrameFormat_SetFrameRate(QVideoFrameFormat* self, double rate) {
    self->setFrameRate(static_cast<qreal>(rate));
}

int QVideoFrameFormat_YCbCrColorSpace(const QVideoFrameFormat* self) {
    return static_cast<int>(self->yCbCrColorSpace());
}

void QVideoFrameFormat_SetYCbCrColorSpace(QVideoFrameFormat* self, int colorSpace) {
    self->setYCbCrColorSpace(static_cast<QVideoFrameFormat::YCbCrColorSpace>(colorSpace));
}

int QVideoFrameFormat_ColorSpace(const QVideoFrameFormat* self) {
    return static_cast<int>(self->colorSpace());
}

void QVideoFrameFormat_SetColorSpace(QVideoFrameFormat* self, int colorSpace) {
    self->setColorSpace(static_cast<QVideoFrameFormat::ColorSpace>(colorSpace));
}

int QVideoFrameFormat_ColorTransfer(const QVideoFrameFormat* self) {
    return static_cast<int>(self->colorTransfer());
}

void QVideoFrameFormat_SetColorTransfer(QVideoFrameFormat* self, int colorTransfer) {
    self->setColorTransfer(static_cast<QVideoFrameFormat::ColorTransfer>(colorTransfer));
}

int QVideoFrameFormat_ColorRange(const QVideoFrameFormat* self) {
    return static_cast<int>(self->colorRange());
}

void QVideoFrameFormat_SetColorRange(QVideoFrameFormat* self, int range) {
    self->setColorRange(static_cast<QVideoFrameFormat::ColorRange>(range));
}

bool QVideoFrameFormat_IsMirrored(const QVideoFrameFormat* self) {
    return self->isMirrored();
}

void QVideoFrameFormat_SetMirrored(QVideoFrameFormat* self, bool mirrored) {
    self->setMirrored(mirrored);
}

libqt_string QVideoFrameFormat_VertexShaderFileName(const QVideoFrameFormat* self) {
    QString _ret = self->vertexShaderFileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVideoFrameFormat_FragmentShaderFileName(const QVideoFrameFormat* self) {
    QString _ret = self->fragmentShaderFileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

float QVideoFrameFormat_MaxLuminance(const QVideoFrameFormat* self) {
    return self->maxLuminance();
}

void QVideoFrameFormat_SetMaxLuminance(QVideoFrameFormat* self, float lum) {
    self->setMaxLuminance(static_cast<float>(lum));
}

int QVideoFrameFormat_PixelFormatFromImageFormat(int format) {
    return static_cast<int>(QVideoFrameFormat::pixelFormatFromImageFormat(static_cast<QImage::Format>(format)));
}

int QVideoFrameFormat_ImageFormatFromPixelFormat(int format) {
    return static_cast<int>(QVideoFrameFormat::imageFormatFromPixelFormat(static_cast<QVideoFrameFormat::PixelFormat>(format)));
}

libqt_string QVideoFrameFormat_PixelFormatToString(int pixelFormat) {
    QString _ret = QVideoFrameFormat::pixelFormatToString(static_cast<QVideoFrameFormat::PixelFormat>(pixelFormat));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QVideoFrameFormat_Delete(QVideoFrameFormat* self) {
    delete self;
}
