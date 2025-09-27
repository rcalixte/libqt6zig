#include <QOpenGLPixelTransferOptions>
#include <qopenglpixeltransferoptions.h>
#include "libqopenglpixeltransferoptions.h"
#include "libqopenglpixeltransferoptions.hxx"

QOpenGLPixelTransferOptions* QOpenGLPixelTransferOptions_new() {
    return new QOpenGLPixelTransferOptions();
}

QOpenGLPixelTransferOptions* QOpenGLPixelTransferOptions_new2(const QOpenGLPixelTransferOptions* param1) {
    return new QOpenGLPixelTransferOptions(*param1);
}

void QOpenGLPixelTransferOptions_OperatorAssign(QOpenGLPixelTransferOptions* self, const QOpenGLPixelTransferOptions* param1) {
    self->operator=(*param1);
}

void QOpenGLPixelTransferOptions_Swap(QOpenGLPixelTransferOptions* self, QOpenGLPixelTransferOptions* other) {
    self->swap(*other);
}

void QOpenGLPixelTransferOptions_SetAlignment(QOpenGLPixelTransferOptions* self, int alignment) {
    self->setAlignment(static_cast<int>(alignment));
}

int QOpenGLPixelTransferOptions_Alignment(const QOpenGLPixelTransferOptions* self) {
    return self->alignment();
}

void QOpenGLPixelTransferOptions_SetSkipImages(QOpenGLPixelTransferOptions* self, int skipImages) {
    self->setSkipImages(static_cast<int>(skipImages));
}

int QOpenGLPixelTransferOptions_SkipImages(const QOpenGLPixelTransferOptions* self) {
    return self->skipImages();
}

void QOpenGLPixelTransferOptions_SetSkipRows(QOpenGLPixelTransferOptions* self, int skipRows) {
    self->setSkipRows(static_cast<int>(skipRows));
}

int QOpenGLPixelTransferOptions_SkipRows(const QOpenGLPixelTransferOptions* self) {
    return self->skipRows();
}

void QOpenGLPixelTransferOptions_SetSkipPixels(QOpenGLPixelTransferOptions* self, int skipPixels) {
    self->setSkipPixels(static_cast<int>(skipPixels));
}

int QOpenGLPixelTransferOptions_SkipPixels(const QOpenGLPixelTransferOptions* self) {
    return self->skipPixels();
}

void QOpenGLPixelTransferOptions_SetImageHeight(QOpenGLPixelTransferOptions* self, int imageHeight) {
    self->setImageHeight(static_cast<int>(imageHeight));
}

int QOpenGLPixelTransferOptions_ImageHeight(const QOpenGLPixelTransferOptions* self) {
    return self->imageHeight();
}

void QOpenGLPixelTransferOptions_SetRowLength(QOpenGLPixelTransferOptions* self, int rowLength) {
    self->setRowLength(static_cast<int>(rowLength));
}

int QOpenGLPixelTransferOptions_RowLength(const QOpenGLPixelTransferOptions* self) {
    return self->rowLength();
}

void QOpenGLPixelTransferOptions_SetLeastSignificantByteFirst(QOpenGLPixelTransferOptions* self, bool lsbFirst) {
    self->setLeastSignificantByteFirst(lsbFirst);
}

bool QOpenGLPixelTransferOptions_IsLeastSignificantBitFirst(const QOpenGLPixelTransferOptions* self) {
    return self->isLeastSignificantBitFirst();
}

void QOpenGLPixelTransferOptions_SetSwapBytesEnabled(QOpenGLPixelTransferOptions* self, bool swapBytes) {
    self->setSwapBytesEnabled(swapBytes);
}

bool QOpenGLPixelTransferOptions_IsSwapBytesEnabled(const QOpenGLPixelTransferOptions* self) {
    return self->isSwapBytesEnabled();
}

void QOpenGLPixelTransferOptions_Delete(QOpenGLPixelTransferOptions* self) {
    delete self;
}
