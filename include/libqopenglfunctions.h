#pragma once
#ifndef SRCC_LIBQOPENGLFUNCTIONS_H
#define SRCC_LIBQOPENGLFUNCTIONS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef char GLchar;
typedef float GLclampf;
typedef struct QOpenGLContext QOpenGLContext;
typedef struct QOpenGLFunctions QOpenGLFunctions;
#endif

QOpenGLFunctions* QOpenGLFunctions_new();
QOpenGLFunctions* QOpenGLFunctions_new2(QOpenGLContext* context);
int QOpenGLFunctions_OpenGLFeatures(const QOpenGLFunctions* self);
bool QOpenGLFunctions_HasOpenGLFeature(const QOpenGLFunctions* self, int feature);
void QOpenGLFunctions_InitializeOpenGLFunctions(QOpenGLFunctions* self);
void QOpenGLFunctions_GlBindTexture(QOpenGLFunctions* self, uint32_t target, uint32_t texture);
void QOpenGLFunctions_GlBlendFunc(QOpenGLFunctions* self, uint32_t sfactor, uint32_t dfactor);
void QOpenGLFunctions_GlClear(QOpenGLFunctions* self, uint32_t mask);
void QOpenGLFunctions_GlClearColor(QOpenGLFunctions* self, GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
void QOpenGLFunctions_GlClearStencil(QOpenGLFunctions* self, int32_t s);
void QOpenGLFunctions_GlColorMask(QOpenGLFunctions* self, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);
void QOpenGLFunctions_GlCopyTexImage2D(QOpenGLFunctions* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border);
void QOpenGLFunctions_GlCopyTexSubImage2D(QOpenGLFunctions* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height);
void QOpenGLFunctions_GlCullFace(QOpenGLFunctions* self, uint32_t mode);
void QOpenGLFunctions_GlDeleteTextures(QOpenGLFunctions* self, int32_t n, const uint32_t* textures);
void QOpenGLFunctions_GlDepthFunc(QOpenGLFunctions* self, uint32_t func);
void QOpenGLFunctions_GlDepthMask(QOpenGLFunctions* self, unsigned char flag);
void QOpenGLFunctions_GlDisable(QOpenGLFunctions* self, uint32_t cap);
void QOpenGLFunctions_GlDrawArrays(QOpenGLFunctions* self, uint32_t mode, int32_t first, int32_t count);
void QOpenGLFunctions_GlDrawElements(QOpenGLFunctions* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices);
void QOpenGLFunctions_GlEnable(QOpenGLFunctions* self, uint32_t cap);
void QOpenGLFunctions_GlFinish(QOpenGLFunctions* self);
void QOpenGLFunctions_GlFlush(QOpenGLFunctions* self);
void QOpenGLFunctions_GlFrontFace(QOpenGLFunctions* self, uint32_t mode);
void QOpenGLFunctions_GlGenTextures(QOpenGLFunctions* self, int32_t n, uint32_t* textures);
void QOpenGLFunctions_GlGetBooleanv(QOpenGLFunctions* self, uint32_t pname, unsigned char* params);
void QOpenGLFunctions_GlGetFloatv(QOpenGLFunctions* self, uint32_t pname, float* params);
void QOpenGLFunctions_GlGetIntegerv(QOpenGLFunctions* self, uint32_t pname, int32_t* params);
const uint8_t* QOpenGLFunctions_GlGetString(QOpenGLFunctions* self, uint32_t name);
void QOpenGLFunctions_GlGetTexParameterfv(QOpenGLFunctions* self, uint32_t target, uint32_t pname, float* params);
void QOpenGLFunctions_GlGetTexParameteriv(QOpenGLFunctions* self, uint32_t target, uint32_t pname, int32_t* params);
void QOpenGLFunctions_GlHint(QOpenGLFunctions* self, uint32_t target, uint32_t mode);
unsigned char QOpenGLFunctions_GlIsEnabled(QOpenGLFunctions* self, uint32_t cap);
unsigned char QOpenGLFunctions_GlIsTexture(QOpenGLFunctions* self, uint32_t texture);
void QOpenGLFunctions_GlLineWidth(QOpenGLFunctions* self, float width);
void QOpenGLFunctions_GlPixelStorei(QOpenGLFunctions* self, uint32_t pname, int32_t param);
void QOpenGLFunctions_GlPolygonOffset(QOpenGLFunctions* self, float factor, float units);
void QOpenGLFunctions_GlReadPixels(QOpenGLFunctions* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, void* pixels);
void QOpenGLFunctions_GlScissor(QOpenGLFunctions* self, int32_t x, int32_t y, int32_t width, int32_t height);
void QOpenGLFunctions_GlStencilFunc(QOpenGLFunctions* self, uint32_t func, int32_t ref, uint32_t mask);
void QOpenGLFunctions_GlStencilMask(QOpenGLFunctions* self, uint32_t mask);
void QOpenGLFunctions_GlStencilOp(QOpenGLFunctions* self, uint32_t fail, uint32_t zfail, uint32_t zpass);
void QOpenGLFunctions_GlTexImage2D(QOpenGLFunctions* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels);
void QOpenGLFunctions_GlTexParameterf(QOpenGLFunctions* self, uint32_t target, uint32_t pname, float param);
void QOpenGLFunctions_GlTexParameterfv(QOpenGLFunctions* self, uint32_t target, uint32_t pname, const float* params);
void QOpenGLFunctions_GlTexParameteri(QOpenGLFunctions* self, uint32_t target, uint32_t pname, int32_t param);
void QOpenGLFunctions_GlTexParameteriv(QOpenGLFunctions* self, uint32_t target, uint32_t pname, const int32_t* params);
void QOpenGLFunctions_GlTexSubImage2D(QOpenGLFunctions* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels);
void QOpenGLFunctions_GlViewport(QOpenGLFunctions* self, int32_t x, int32_t y, int32_t width, int32_t height);
void QOpenGLFunctions_GlActiveTexture(QOpenGLFunctions* self, uint32_t texture);
void QOpenGLFunctions_GlAttachShader(QOpenGLFunctions* self, uint32_t program, uint32_t shader);
void QOpenGLFunctions_GlBindAttribLocation(QOpenGLFunctions* self, uint32_t program, uint32_t index, const char* name);
void QOpenGLFunctions_GlBindBuffer(QOpenGLFunctions* self, uint32_t target, uint32_t buffer);
void QOpenGLFunctions_GlBindFramebuffer(QOpenGLFunctions* self, uint32_t target, uint32_t framebuffer);
void QOpenGLFunctions_GlBindRenderbuffer(QOpenGLFunctions* self, uint32_t target, uint32_t renderbuffer);
void QOpenGLFunctions_GlBlendColor(QOpenGLFunctions* self, GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
void QOpenGLFunctions_GlBlendEquation(QOpenGLFunctions* self, uint32_t mode);
void QOpenGLFunctions_GlBlendEquationSeparate(QOpenGLFunctions* self, uint32_t modeRGB, uint32_t modeAlpha);
void QOpenGLFunctions_GlBlendFuncSeparate(QOpenGLFunctions* self, uint32_t srcRGB, uint32_t dstRGB, uint32_t srcAlpha, uint32_t dstAlpha);
void QOpenGLFunctions_GlBufferData(QOpenGLFunctions* self, uint32_t target, ptrdiff_t size, const void* data, uint32_t usage);
void QOpenGLFunctions_GlBufferSubData(QOpenGLFunctions* self, uint32_t target, ptrdiff_t offset, ptrdiff_t size, const void* data);
void QOpenGLFunctions_GlClearDepthf(QOpenGLFunctions* self, GLclampf depth);
void QOpenGLFunctions_GlCompileShader(QOpenGLFunctions* self, uint32_t shader);
void QOpenGLFunctions_GlCompressedTexImage2D(QOpenGLFunctions* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, const void* data);
void QOpenGLFunctions_GlCompressedTexSubImage2D(QOpenGLFunctions* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, const void* data);
uint32_t QOpenGLFunctions_GlCreateProgram(QOpenGLFunctions* self);
uint32_t QOpenGLFunctions_GlCreateShader(QOpenGLFunctions* self, uint32_t typeVal);
void QOpenGLFunctions_GlDeleteBuffers(QOpenGLFunctions* self, int32_t n, const uint32_t* buffers);
void QOpenGLFunctions_GlDeleteFramebuffers(QOpenGLFunctions* self, int32_t n, const uint32_t* framebuffers);
void QOpenGLFunctions_GlDeleteProgram(QOpenGLFunctions* self, uint32_t program);
void QOpenGLFunctions_GlDeleteRenderbuffers(QOpenGLFunctions* self, int32_t n, const uint32_t* renderbuffers);
void QOpenGLFunctions_GlDeleteShader(QOpenGLFunctions* self, uint32_t shader);
void QOpenGLFunctions_GlDepthRangef(QOpenGLFunctions* self, GLclampf zNear, GLclampf zFar);
void QOpenGLFunctions_GlDetachShader(QOpenGLFunctions* self, uint32_t program, uint32_t shader);
void QOpenGLFunctions_GlDisableVertexAttribArray(QOpenGLFunctions* self, uint32_t index);
void QOpenGLFunctions_GlEnableVertexAttribArray(QOpenGLFunctions* self, uint32_t index);
void QOpenGLFunctions_GlFramebufferRenderbuffer(QOpenGLFunctions* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer);
void QOpenGLFunctions_GlFramebufferTexture2D(QOpenGLFunctions* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level);
void QOpenGLFunctions_GlGenBuffers(QOpenGLFunctions* self, int32_t n, uint32_t* buffers);
void QOpenGLFunctions_GlGenerateMipmap(QOpenGLFunctions* self, uint32_t target);
void QOpenGLFunctions_GlGenFramebuffers(QOpenGLFunctions* self, int32_t n, uint32_t* framebuffers);
void QOpenGLFunctions_GlGenRenderbuffers(QOpenGLFunctions* self, int32_t n, uint32_t* renderbuffers);
void QOpenGLFunctions_GlGetAttachedShaders(QOpenGLFunctions* self, uint32_t program, int32_t maxcount, int32_t* count, uint32_t* shaders);
int32_t QOpenGLFunctions_GlGetAttribLocation(QOpenGLFunctions* self, uint32_t program, const char* name);
void QOpenGLFunctions_GlGetBufferParameteriv(QOpenGLFunctions* self, uint32_t target, uint32_t pname, int32_t* params);
void QOpenGLFunctions_GlGetFramebufferAttachmentParameteriv(QOpenGLFunctions* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params);
void QOpenGLFunctions_GlGetProgramiv(QOpenGLFunctions* self, uint32_t program, uint32_t pname, int32_t* params);
void QOpenGLFunctions_GlGetProgramInfoLog(QOpenGLFunctions* self, uint32_t program, int32_t bufsize, int32_t* length, char* infolog);
void QOpenGLFunctions_GlGetRenderbufferParameteriv(QOpenGLFunctions* self, uint32_t target, uint32_t pname, int32_t* params);
void QOpenGLFunctions_GlGetShaderiv(QOpenGLFunctions* self, uint32_t shader, uint32_t pname, int32_t* params);
void QOpenGLFunctions_GlGetShaderInfoLog(QOpenGLFunctions* self, uint32_t shader, int32_t bufsize, int32_t* length, char* infolog);
void QOpenGLFunctions_GlGetShaderPrecisionFormat(QOpenGLFunctions* self, uint32_t shadertype, uint32_t precisiontype, int32_t* range, int32_t* precision);
void QOpenGLFunctions_GlGetShaderSource(QOpenGLFunctions* self, uint32_t shader, int32_t bufsize, int32_t* length, char* source);
void QOpenGLFunctions_GlGetUniformfv(QOpenGLFunctions* self, uint32_t program, int32_t location, float* params);
void QOpenGLFunctions_GlGetUniformiv(QOpenGLFunctions* self, uint32_t program, int32_t location, int32_t* params);
int32_t QOpenGLFunctions_GlGetUniformLocation(QOpenGLFunctions* self, uint32_t program, const char* name);
void QOpenGLFunctions_GlGetVertexAttribfv(QOpenGLFunctions* self, uint32_t index, uint32_t pname, float* params);
void QOpenGLFunctions_GlGetVertexAttribiv(QOpenGLFunctions* self, uint32_t index, uint32_t pname, int32_t* params);
void QOpenGLFunctions_GlGetVertexAttribPointerv(QOpenGLFunctions* self, uint32_t index, uint32_t pname, void** pointer);
unsigned char QOpenGLFunctions_GlIsBuffer(QOpenGLFunctions* self, uint32_t buffer);
unsigned char QOpenGLFunctions_GlIsFramebuffer(QOpenGLFunctions* self, uint32_t framebuffer);
unsigned char QOpenGLFunctions_GlIsProgram(QOpenGLFunctions* self, uint32_t program);
unsigned char QOpenGLFunctions_GlIsRenderbuffer(QOpenGLFunctions* self, uint32_t renderbuffer);
unsigned char QOpenGLFunctions_GlIsShader(QOpenGLFunctions* self, uint32_t shader);
void QOpenGLFunctions_GlLinkProgram(QOpenGLFunctions* self, uint32_t program);
void QOpenGLFunctions_GlReleaseShaderCompiler(QOpenGLFunctions* self);
void QOpenGLFunctions_GlRenderbufferStorage(QOpenGLFunctions* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height);
void QOpenGLFunctions_GlSampleCoverage(QOpenGLFunctions* self, GLclampf value, unsigned char invert);
void QOpenGLFunctions_GlShaderBinary(QOpenGLFunctions* self, int32_t n, const uint32_t* shaders, uint32_t binaryformat, const void* binary, int32_t length);
void QOpenGLFunctions_GlShaderSource(QOpenGLFunctions* self, uint32_t shader, int32_t count, const char** stringVal, const int32_t* length);
void QOpenGLFunctions_GlStencilFuncSeparate(QOpenGLFunctions* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask);
void QOpenGLFunctions_GlStencilMaskSeparate(QOpenGLFunctions* self, uint32_t face, uint32_t mask);
void QOpenGLFunctions_GlStencilOpSeparate(QOpenGLFunctions* self, uint32_t face, uint32_t fail, uint32_t zfail, uint32_t zpass);
void QOpenGLFunctions_GlUniform1f(QOpenGLFunctions* self, int32_t location, float x);
void QOpenGLFunctions_GlUniform1fv(QOpenGLFunctions* self, int32_t location, int32_t count, const float* v);
void QOpenGLFunctions_GlUniform1i(QOpenGLFunctions* self, int32_t location, int32_t x);
void QOpenGLFunctions_GlUniform1iv(QOpenGLFunctions* self, int32_t location, int32_t count, const int32_t* v);
void QOpenGLFunctions_GlUniform2f(QOpenGLFunctions* self, int32_t location, float x, float y);
void QOpenGLFunctions_GlUniform2fv(QOpenGLFunctions* self, int32_t location, int32_t count, const float* v);
void QOpenGLFunctions_GlUniform2i(QOpenGLFunctions* self, int32_t location, int32_t x, int32_t y);
void QOpenGLFunctions_GlUniform2iv(QOpenGLFunctions* self, int32_t location, int32_t count, const int32_t* v);
void QOpenGLFunctions_GlUniform3f(QOpenGLFunctions* self, int32_t location, float x, float y, float z);
void QOpenGLFunctions_GlUniform3fv(QOpenGLFunctions* self, int32_t location, int32_t count, const float* v);
void QOpenGLFunctions_GlUniform3i(QOpenGLFunctions* self, int32_t location, int32_t x, int32_t y, int32_t z);
void QOpenGLFunctions_GlUniform3iv(QOpenGLFunctions* self, int32_t location, int32_t count, const int32_t* v);
void QOpenGLFunctions_GlUniform4f(QOpenGLFunctions* self, int32_t location, float x, float y, float z, float w);
void QOpenGLFunctions_GlUniform4fv(QOpenGLFunctions* self, int32_t location, int32_t count, const float* v);
void QOpenGLFunctions_GlUniform4i(QOpenGLFunctions* self, int32_t location, int32_t x, int32_t y, int32_t z, int32_t w);
void QOpenGLFunctions_GlUniform4iv(QOpenGLFunctions* self, int32_t location, int32_t count, const int32_t* v);
void QOpenGLFunctions_GlUniformMatrix2fv(QOpenGLFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value);
void QOpenGLFunctions_GlUniformMatrix3fv(QOpenGLFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value);
void QOpenGLFunctions_GlUniformMatrix4fv(QOpenGLFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value);
void QOpenGLFunctions_GlUseProgram(QOpenGLFunctions* self, uint32_t program);
void QOpenGLFunctions_GlValidateProgram(QOpenGLFunctions* self, uint32_t program);
void QOpenGLFunctions_GlVertexAttrib1f(QOpenGLFunctions* self, uint32_t indx, float x);
void QOpenGLFunctions_GlVertexAttrib1fv(QOpenGLFunctions* self, uint32_t indx, const float* values);
void QOpenGLFunctions_GlVertexAttrib2f(QOpenGLFunctions* self, uint32_t indx, float x, float y);
void QOpenGLFunctions_GlVertexAttrib2fv(QOpenGLFunctions* self, uint32_t indx, const float* values);
void QOpenGLFunctions_GlVertexAttrib3f(QOpenGLFunctions* self, uint32_t indx, float x, float y, float z);
void QOpenGLFunctions_GlVertexAttrib3fv(QOpenGLFunctions* self, uint32_t indx, const float* values);
void QOpenGLFunctions_GlVertexAttrib4f(QOpenGLFunctions* self, uint32_t indx, float x, float y, float z, float w);
void QOpenGLFunctions_GlVertexAttrib4fv(QOpenGLFunctions* self, uint32_t indx, const float* values);
void QOpenGLFunctions_GlVertexAttribPointer(QOpenGLFunctions* self, uint32_t indx, int32_t size, uint32_t typeVal, unsigned char normalized, int32_t stride, const void* ptr);
void QOpenGLFunctions_Delete(QOpenGLFunctions* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
