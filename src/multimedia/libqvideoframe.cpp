#include <QImage>
#include <QPainter>
#include <QRectF>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVideoFrame>
#define WORKAROUND_INNER_CLASS_DEFINITION_QVideoFrame__PaintOptions
#include <QVideoFrameFormat>
#include <qvideoframe.h>
#include "libqvideoframe.h"
#include "libqvideoframe.hxx"

QVideoFrame* QVideoFrame_new() {
    return new QVideoFrame();
}

QVideoFrame* QVideoFrame_new2(const QVideoFrameFormat* format) {
    return new QVideoFrame(*format);
}

QVideoFrame* QVideoFrame_new3(const QImage* image) {
    return new QVideoFrame(*image);
}

QVideoFrame* QVideoFrame_new4(const QVideoFrame* other) {
    return new QVideoFrame(*other);
}

void QVideoFrame_Swap(QVideoFrame* self, QVideoFrame* other) {
    self->swap(*other);
}

void QVideoFrame_OperatorAssign(QVideoFrame* self, const QVideoFrame* other) {
    self->operator=(*other);
}

bool QVideoFrame_OperatorEqual(const QVideoFrame* self, const QVideoFrame* other) {
    return (*self == *other);
}

bool QVideoFrame_OperatorNotEqual(const QVideoFrame* self, const QVideoFrame* other) {
    return (*self != *other);
}

bool QVideoFrame_IsValid(const QVideoFrame* self) {
    return self->isValid();
}

int QVideoFrame_PixelFormat(const QVideoFrame* self) {
    return static_cast<int>(self->pixelFormat());
}

QVideoFrameFormat* QVideoFrame_SurfaceFormat(const QVideoFrame* self) {
    return new QVideoFrameFormat(self->surfaceFormat());
}

int QVideoFrame_HandleType(const QVideoFrame* self) {
    return static_cast<int>(self->handleType());
}

QSize* QVideoFrame_Size(const QVideoFrame* self) {
    return new QSize(self->size());
}

int QVideoFrame_Width(const QVideoFrame* self) {
    return self->width();
}

int QVideoFrame_Height(const QVideoFrame* self) {
    return self->height();
}

bool QVideoFrame_IsMapped(const QVideoFrame* self) {
    return self->isMapped();
}

bool QVideoFrame_IsReadable(const QVideoFrame* self) {
    return self->isReadable();
}

bool QVideoFrame_IsWritable(const QVideoFrame* self) {
    return self->isWritable();
}

int QVideoFrame_MapMode(const QVideoFrame* self) {
    return static_cast<int>(self->mapMode());
}

bool QVideoFrame_Map(QVideoFrame* self, int mode) {
    return self->map(static_cast<QVideoFrame::MapMode>(mode));
}

void QVideoFrame_Unmap(QVideoFrame* self) {
    self->unmap();
}

int QVideoFrame_BytesPerLine(const QVideoFrame* self, int plane) {
    return self->bytesPerLine(static_cast<int>(plane));
}

unsigned char* QVideoFrame_Bits(QVideoFrame* self, int plane) {
    return static_cast<unsigned char*>(self->bits(static_cast<int>(plane)));
}

const unsigned char* QVideoFrame_Bits2(const QVideoFrame* self, int plane) {
    return static_cast<const unsigned char*>(self->bits(static_cast<int>(plane)));
}

int QVideoFrame_MappedBytes(const QVideoFrame* self, int plane) {
    return self->mappedBytes(static_cast<int>(plane));
}

int QVideoFrame_PlaneCount(const QVideoFrame* self) {
    return self->planeCount();
}

long long QVideoFrame_StartTime(const QVideoFrame* self) {
    return static_cast<long long>(self->startTime());
}

void QVideoFrame_SetStartTime(QVideoFrame* self, long long time) {
    self->setStartTime(static_cast<qint64>(time));
}

long long QVideoFrame_EndTime(const QVideoFrame* self) {
    return static_cast<long long>(self->endTime());
}

void QVideoFrame_SetEndTime(QVideoFrame* self, long long time) {
    self->setEndTime(static_cast<qint64>(time));
}

void QVideoFrame_SetRotationAngle(QVideoFrame* self, int angle) {
    self->setRotationAngle(static_cast<QVideoFrame::RotationAngle>(angle));
}

int QVideoFrame_RotationAngle(const QVideoFrame* self) {
    return static_cast<int>(self->rotationAngle());
}

void QVideoFrame_SetRotation(QVideoFrame* self, int angle) {
    self->setRotation(static_cast<QtVideo::Rotation>(angle));
}

int QVideoFrame_Rotation(const QVideoFrame* self) {
    return static_cast<int>(self->rotation());
}

void QVideoFrame_SetMirrored(QVideoFrame* self, bool mirrored) {
    self->setMirrored(mirrored);
}

bool QVideoFrame_Mirrored(const QVideoFrame* self) {
    return self->mirrored();
}

void QVideoFrame_SetStreamFrameRate(QVideoFrame* self, double rate) {
    self->setStreamFrameRate(static_cast<qreal>(rate));
}

double QVideoFrame_StreamFrameRate(const QVideoFrame* self) {
    return static_cast<double>(self->streamFrameRate());
}

QImage* QVideoFrame_ToImage(const QVideoFrame* self) {
    return new QImage(self->toImage());
}

libqt_string QVideoFrame_SubtitleText(const QVideoFrame* self) {
    QString _ret = self->subtitleText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QVideoFrame_SetSubtitleText(QVideoFrame* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setSubtitleText(text_QString);
}

void QVideoFrame_Paint(QVideoFrame* self, QPainter* painter, const QRectF* rect, const QVideoFrame__PaintOptions* options) {
    self->paint(painter, *rect, *options);
}

void QVideoFrame_Delete(QVideoFrame* self) {
    delete self;
}

QVideoFrame__PaintOptions* QVideoFrame__PaintOptions_new(const QVideoFrame__PaintOptions* other) {
    return new QVideoFrame::PaintOptions(*other);
}

QVideoFrame__PaintOptions* QVideoFrame__PaintOptions_new2(QVideoFrame__PaintOptions* other) {
    return new QVideoFrame::PaintOptions(std::move(*other));
}

void QVideoFrame__PaintOptions_CopyAssign(QVideoFrame__PaintOptions* self, QVideoFrame__PaintOptions* other) {
    *self = *other;
}

void QVideoFrame__PaintOptions_MoveAssign(QVideoFrame__PaintOptions* self, QVideoFrame__PaintOptions* other) {
    *self = std::move(*other);
}

void QVideoFrame__PaintOptions_Delete(QVideoFrame__PaintOptions* self) {
    delete self;
}
