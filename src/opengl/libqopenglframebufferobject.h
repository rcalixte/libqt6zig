#pragma once
#ifndef SRC_OPENGLC_LIBQOPENGLFRAMEBUFFEROBJECT_H
#define SRC_OPENGLC_LIBQOPENGLFRAMEBUFFEROBJECT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QImage QImage;
typedef struct QOpenGLFramebufferObject QOpenGLFramebufferObject;
typedef struct QOpenGLFramebufferObjectFormat QOpenGLFramebufferObjectFormat;
typedef struct QRect QRect;
typedef struct QSize QSize;
#endif

QOpenGLFramebufferObject* QOpenGLFramebufferObject_new(const QSize* size);
QOpenGLFramebufferObject* QOpenGLFramebufferObject_new2(int width, int height);
QOpenGLFramebufferObject* QOpenGLFramebufferObject_new3(const QSize* size, int attachment);
QOpenGLFramebufferObject* QOpenGLFramebufferObject_new4(int width, int height, int attachment);
QOpenGLFramebufferObject* QOpenGLFramebufferObject_new5(const QSize* size, const QOpenGLFramebufferObjectFormat* format);
QOpenGLFramebufferObject* QOpenGLFramebufferObject_new6(int width, int height, const QOpenGLFramebufferObjectFormat* format);
QOpenGLFramebufferObject* QOpenGLFramebufferObject_new7(const QSize* size, uint32_t target);
QOpenGLFramebufferObject* QOpenGLFramebufferObject_new8(int width, int height, uint32_t target);
QOpenGLFramebufferObject* QOpenGLFramebufferObject_new9(const QSize* size, int attachment, uint32_t target);
QOpenGLFramebufferObject* QOpenGLFramebufferObject_new10(const QSize* size, int attachment, uint32_t target, uint32_t internalFormat);
QOpenGLFramebufferObject* QOpenGLFramebufferObject_new11(int width, int height, int attachment, uint32_t target);
QOpenGLFramebufferObject* QOpenGLFramebufferObject_new12(int width, int height, int attachment, uint32_t target, uint32_t internalFormat);
void QOpenGLFramebufferObject_AddColorAttachment(QOpenGLFramebufferObject* self, const QSize* size);
void QOpenGLFramebufferObject_AddColorAttachment2(QOpenGLFramebufferObject* self, int width, int height);
QOpenGLFramebufferObjectFormat* QOpenGLFramebufferObject_Format(const QOpenGLFramebufferObject* self);
bool QOpenGLFramebufferObject_IsValid(const QOpenGLFramebufferObject* self);
bool QOpenGLFramebufferObject_IsBound(const QOpenGLFramebufferObject* self);
bool QOpenGLFramebufferObject_Bind(QOpenGLFramebufferObject* self);
bool QOpenGLFramebufferObject_Release(QOpenGLFramebufferObject* self);
int QOpenGLFramebufferObject_Width(const QOpenGLFramebufferObject* self);
int QOpenGLFramebufferObject_Height(const QOpenGLFramebufferObject* self);
uint32_t QOpenGLFramebufferObject_Texture(const QOpenGLFramebufferObject* self);
libqt_list /* of uint32_t */ QOpenGLFramebufferObject_Textures(const QOpenGLFramebufferObject* self);
uint32_t QOpenGLFramebufferObject_TakeTexture(QOpenGLFramebufferObject* self);
uint32_t QOpenGLFramebufferObject_TakeTexture2(QOpenGLFramebufferObject* self, int colorAttachmentIndex);
QSize* QOpenGLFramebufferObject_Size(const QOpenGLFramebufferObject* self);
libqt_list /* of QSize* */ QOpenGLFramebufferObject_Sizes(const QOpenGLFramebufferObject* self);
QImage* QOpenGLFramebufferObject_ToImage(const QOpenGLFramebufferObject* self);
QImage* QOpenGLFramebufferObject_ToImage2(const QOpenGLFramebufferObject* self, bool flipped, int colorAttachmentIndex);
int QOpenGLFramebufferObject_Attachment(const QOpenGLFramebufferObject* self);
void QOpenGLFramebufferObject_SetAttachment(QOpenGLFramebufferObject* self, int attachment);
uint32_t QOpenGLFramebufferObject_Handle(const QOpenGLFramebufferObject* self);
bool QOpenGLFramebufferObject_BindDefault();
bool QOpenGLFramebufferObject_HasOpenGLFramebufferObjects();
bool QOpenGLFramebufferObject_HasOpenGLFramebufferBlit();
void QOpenGLFramebufferObject_BlitFramebuffer(QOpenGLFramebufferObject* target, const QRect* targetRect, QOpenGLFramebufferObject* source, const QRect* sourceRect, uint32_t buffers, uint32_t filter, int readColorAttachmentIndex, int drawColorAttachmentIndex, int restorePolicy);
void QOpenGLFramebufferObject_BlitFramebuffer2(QOpenGLFramebufferObject* target, const QRect* targetRect, QOpenGLFramebufferObject* source, const QRect* sourceRect, uint32_t buffers, uint32_t filter, int readColorAttachmentIndex, int drawColorAttachmentIndex);
void QOpenGLFramebufferObject_BlitFramebuffer3(QOpenGLFramebufferObject* target, const QRect* targetRect, QOpenGLFramebufferObject* source, const QRect* sourceRect);
void QOpenGLFramebufferObject_BlitFramebuffer4(QOpenGLFramebufferObject* target, QOpenGLFramebufferObject* source);
void QOpenGLFramebufferObject_AddColorAttachment22(QOpenGLFramebufferObject* self, const QSize* size, uint32_t internalFormat);
void QOpenGLFramebufferObject_AddColorAttachment3(QOpenGLFramebufferObject* self, int width, int height, uint32_t internalFormat);
QImage* QOpenGLFramebufferObject_ToImage1(const QOpenGLFramebufferObject* self, bool flipped);
void QOpenGLFramebufferObject_BlitFramebuffer5(QOpenGLFramebufferObject* target, const QRect* targetRect, QOpenGLFramebufferObject* source, const QRect* sourceRect, uint32_t buffers);
void QOpenGLFramebufferObject_BlitFramebuffer6(QOpenGLFramebufferObject* target, const QRect* targetRect, QOpenGLFramebufferObject* source, const QRect* sourceRect, uint32_t buffers, uint32_t filter);
void QOpenGLFramebufferObject_BlitFramebuffer32(QOpenGLFramebufferObject* target, QOpenGLFramebufferObject* source, uint32_t buffers);
void QOpenGLFramebufferObject_BlitFramebuffer42(QOpenGLFramebufferObject* target, QOpenGLFramebufferObject* source, uint32_t buffers, uint32_t filter);
void QOpenGLFramebufferObject_Delete(QOpenGLFramebufferObject* self);

QOpenGLFramebufferObjectFormat* QOpenGLFramebufferObjectFormat_new();
QOpenGLFramebufferObjectFormat* QOpenGLFramebufferObjectFormat_new2(const QOpenGLFramebufferObjectFormat* other);
void QOpenGLFramebufferObjectFormat_OperatorAssign(QOpenGLFramebufferObjectFormat* self, const QOpenGLFramebufferObjectFormat* other);
void QOpenGLFramebufferObjectFormat_SetSamples(QOpenGLFramebufferObjectFormat* self, int samples);
int QOpenGLFramebufferObjectFormat_Samples(const QOpenGLFramebufferObjectFormat* self);
void QOpenGLFramebufferObjectFormat_SetMipmap(QOpenGLFramebufferObjectFormat* self, bool enabled);
bool QOpenGLFramebufferObjectFormat_Mipmap(const QOpenGLFramebufferObjectFormat* self);
void QOpenGLFramebufferObjectFormat_SetAttachment(QOpenGLFramebufferObjectFormat* self, int attachment);
int QOpenGLFramebufferObjectFormat_Attachment(const QOpenGLFramebufferObjectFormat* self);
void QOpenGLFramebufferObjectFormat_SetTextureTarget(QOpenGLFramebufferObjectFormat* self, uint32_t target);
void QOpenGLFramebufferObjectFormat_SetInternalTextureFormat(QOpenGLFramebufferObjectFormat* self, uint32_t internalTextureFormat);
bool QOpenGLFramebufferObjectFormat_OperatorEqual(const QOpenGLFramebufferObjectFormat* self, const QOpenGLFramebufferObjectFormat* other);
bool QOpenGLFramebufferObjectFormat_OperatorNotEqual(const QOpenGLFramebufferObjectFormat* self, const QOpenGLFramebufferObjectFormat* other);
void QOpenGLFramebufferObjectFormat_Delete(QOpenGLFramebufferObjectFormat* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
