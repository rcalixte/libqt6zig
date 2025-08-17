#pragma once
#ifndef SRCC_LIBQPIXELFORMAT_H
#define SRCC_LIBQPIXELFORMAT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPixelFormat QPixelFormat;
#endif

QPixelFormat* QPixelFormat_new(const QPixelFormat* other);
QPixelFormat* QPixelFormat_new2(QPixelFormat* other);
QPixelFormat* QPixelFormat_new3();
QPixelFormat* QPixelFormat_new4(int colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int alphaUsage, int alphaPosition, int premultiplied, int typeInterpretation);
QPixelFormat* QPixelFormat_new5(const QPixelFormat* param1);
QPixelFormat* QPixelFormat_new6(int colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int alphaUsage, int alphaPosition, int premultiplied, int typeInterpretation, int byteOrder);
QPixelFormat* QPixelFormat_new7(int colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int alphaUsage, int alphaPosition, int premultiplied, int typeInterpretation, int byteOrder, unsigned char subEnum);
void QPixelFormat_CopyAssign(QPixelFormat* self, QPixelFormat* other);
void QPixelFormat_MoveAssign(QPixelFormat* self, QPixelFormat* other);
int QPixelFormat_ColorModel(const QPixelFormat* self);
unsigned char QPixelFormat_ChannelCount(const QPixelFormat* self);
unsigned char QPixelFormat_RedSize(const QPixelFormat* self);
unsigned char QPixelFormat_GreenSize(const QPixelFormat* self);
unsigned char QPixelFormat_BlueSize(const QPixelFormat* self);
unsigned char QPixelFormat_CyanSize(const QPixelFormat* self);
unsigned char QPixelFormat_MagentaSize(const QPixelFormat* self);
unsigned char QPixelFormat_YellowSize(const QPixelFormat* self);
unsigned char QPixelFormat_BlackSize(const QPixelFormat* self);
unsigned char QPixelFormat_HueSize(const QPixelFormat* self);
unsigned char QPixelFormat_SaturationSize(const QPixelFormat* self);
unsigned char QPixelFormat_LightnessSize(const QPixelFormat* self);
unsigned char QPixelFormat_BrightnessSize(const QPixelFormat* self);
unsigned char QPixelFormat_AlphaSize(const QPixelFormat* self);
unsigned char QPixelFormat_BitsPerPixel(const QPixelFormat* self);
int QPixelFormat_AlphaUsage(const QPixelFormat* self);
int QPixelFormat_AlphaPosition(const QPixelFormat* self);
int QPixelFormat_Premultiplied(const QPixelFormat* self);
int QPixelFormat_TypeInterpretation(const QPixelFormat* self);
int QPixelFormat_ByteOrder(const QPixelFormat* self);
int QPixelFormat_YuvLayout(const QPixelFormat* self);
unsigned char QPixelFormat_SubEnum(const QPixelFormat* self);
void QPixelFormat_Delete(QPixelFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
