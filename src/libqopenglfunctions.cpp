#include <QOpenGLContext>
#include <QOpenGLFunctions>
#include <qopenglfunctions.h>
#include "libqopenglfunctions.h"
#include "libqopenglfunctions.hxx"

QOpenGLFunctions* QOpenGLFunctions_new() {
    return new QOpenGLFunctions();
}

QOpenGLFunctions* QOpenGLFunctions_new2(QOpenGLContext* context) {
    return new QOpenGLFunctions(context);
}

int QOpenGLFunctions_OpenGLFeatures(const QOpenGLFunctions* self) {
    return static_cast<int>(self->openGLFeatures());
}

bool QOpenGLFunctions_HasOpenGLFeature(const QOpenGLFunctions* self, int feature) {
    return self->hasOpenGLFeature(static_cast<QOpenGLFunctions::OpenGLFeature>(feature));
}

void QOpenGLFunctions_InitializeOpenGLFunctions(QOpenGLFunctions* self) {
    self->initializeOpenGLFunctions();
}

void QOpenGLFunctions_GlBindTexture(QOpenGLFunctions* self, uint32_t target, uint32_t texture) {
    self->glBindTexture(static_cast<GLenum>(target), static_cast<GLuint>(texture));
}

void QOpenGLFunctions_GlBlendFunc(QOpenGLFunctions* self, uint32_t sfactor, uint32_t dfactor) {
    self->glBlendFunc(static_cast<GLenum>(sfactor), static_cast<GLenum>(dfactor));
}

void QOpenGLFunctions_GlClear(QOpenGLFunctions* self, uint32_t mask) {
    self->glClear(static_cast<GLbitfield>(mask));
}

void QOpenGLFunctions_GlClearColor(QOpenGLFunctions* self, GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
    self->glClearColor(red, green, blue, alpha);
}

void QOpenGLFunctions_GlClearStencil(QOpenGLFunctions* self, int32_t s) {
    self->glClearStencil(static_cast<GLint>(s));
}

void QOpenGLFunctions_GlColorMask(QOpenGLFunctions* self, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
    self->glColorMask(static_cast<GLboolean>(red), static_cast<GLboolean>(green), static_cast<GLboolean>(blue), static_cast<GLboolean>(alpha));
}

void QOpenGLFunctions_GlCopyTexImage2D(QOpenGLFunctions* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
    self->glCopyTexImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLint>(border));
}

void QOpenGLFunctions_GlCopyTexSubImage2D(QOpenGLFunctions* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glCopyTexSubImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_GlCullFace(QOpenGLFunctions* self, uint32_t mode) {
    self->glCullFace(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_GlDeleteTextures(QOpenGLFunctions* self, int32_t n, const uint32_t* textures) {
    self->glDeleteTextures(static_cast<GLsizei>(n), static_cast<const GLuint*>(textures));
}

void QOpenGLFunctions_GlDepthFunc(QOpenGLFunctions* self, uint32_t func) {
    self->glDepthFunc(static_cast<GLenum>(func));
}

void QOpenGLFunctions_GlDepthMask(QOpenGLFunctions* self, unsigned char flag) {
    self->glDepthMask(static_cast<GLboolean>(flag));
}

void QOpenGLFunctions_GlDisable(QOpenGLFunctions* self, uint32_t cap) {
    self->glDisable(static_cast<GLenum>(cap));
}

void QOpenGLFunctions_GlDrawArrays(QOpenGLFunctions* self, uint32_t mode, int32_t first, int32_t count) {
    self->glDrawArrays(static_cast<GLenum>(mode), static_cast<GLint>(first), static_cast<GLsizei>(count));
}

void QOpenGLFunctions_GlDrawElements(QOpenGLFunctions* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices) {
    self->glDrawElements(static_cast<GLenum>(mode), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices);
}

void QOpenGLFunctions_GlEnable(QOpenGLFunctions* self, uint32_t cap) {
    self->glEnable(static_cast<GLenum>(cap));
}

void QOpenGLFunctions_GlFinish(QOpenGLFunctions* self) {
    self->glFinish();
}

void QOpenGLFunctions_GlFlush(QOpenGLFunctions* self) {
    self->glFlush();
}

void QOpenGLFunctions_GlFrontFace(QOpenGLFunctions* self, uint32_t mode) {
    self->glFrontFace(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_GlGenTextures(QOpenGLFunctions* self, int32_t n, uint32_t* textures) {
    self->glGenTextures(static_cast<GLsizei>(n), static_cast<GLuint*>(textures));
}

void QOpenGLFunctions_GlGetBooleanv(QOpenGLFunctions* self, uint32_t pname, unsigned char* params) {
    self->glGetBooleanv(static_cast<GLenum>(pname), static_cast<GLboolean*>(params));
}

void QOpenGLFunctions_GlGetFloatv(QOpenGLFunctions* self, uint32_t pname, float* params) {
    self->glGetFloatv(static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_GlGetIntegerv(QOpenGLFunctions* self, uint32_t pname, int32_t* params) {
    self->glGetIntegerv(static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

const uint8_t* QOpenGLFunctions_GlGetString(QOpenGLFunctions* self, uint32_t name) {
    return (const uint8_t*)self->glGetString(static_cast<GLenum>(name));
}

void QOpenGLFunctions_GlGetTexParameterfv(QOpenGLFunctions* self, uint32_t target, uint32_t pname, float* params) {
    self->glGetTexParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_GlGetTexParameteriv(QOpenGLFunctions* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetTexParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_GlHint(QOpenGLFunctions* self, uint32_t target, uint32_t mode) {
    self->glHint(static_cast<GLenum>(target), static_cast<GLenum>(mode));
}

unsigned char QOpenGLFunctions_GlIsEnabled(QOpenGLFunctions* self, uint32_t cap) {
    return self->glIsEnabled(static_cast<GLenum>(cap));
}

unsigned char QOpenGLFunctions_GlIsTexture(QOpenGLFunctions* self, uint32_t texture) {
    return self->glIsTexture(static_cast<GLuint>(texture));
}

void QOpenGLFunctions_GlLineWidth(QOpenGLFunctions* self, float width) {
    self->glLineWidth(static_cast<GLfloat>(width));
}

void QOpenGLFunctions_GlPixelStorei(QOpenGLFunctions* self, uint32_t pname, int32_t param) {
    self->glPixelStorei(static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_GlPolygonOffset(QOpenGLFunctions* self, float factor, float units) {
    self->glPolygonOffset(static_cast<GLfloat>(factor), static_cast<GLfloat>(units));
}

void QOpenGLFunctions_GlReadPixels(QOpenGLFunctions* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, void* pixels) {
    self->glReadPixels(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_GlScissor(QOpenGLFunctions* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glScissor(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_GlStencilFunc(QOpenGLFunctions* self, uint32_t func, int32_t ref, uint32_t mask) {
    self->glStencilFunc(static_cast<GLenum>(func), static_cast<GLint>(ref), static_cast<GLuint>(mask));
}

void QOpenGLFunctions_GlStencilMask(QOpenGLFunctions* self, uint32_t mask) {
    self->glStencilMask(static_cast<GLuint>(mask));
}

void QOpenGLFunctions_GlStencilOp(QOpenGLFunctions* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
    self->glStencilOp(static_cast<GLenum>(fail), static_cast<GLenum>(zfail), static_cast<GLenum>(zpass));
}

void QOpenGLFunctions_GlTexImage2D(QOpenGLFunctions* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLint>(border), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_GlTexParameterf(QOpenGLFunctions* self, uint32_t target, uint32_t pname, float param) {
    self->glTexParameterf(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_GlTexParameterfv(QOpenGLFunctions* self, uint32_t target, uint32_t pname, const float* params) {
    self->glTexParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_GlTexParameteri(QOpenGLFunctions* self, uint32_t target, uint32_t pname, int32_t param) {
    self->glTexParameteri(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_GlTexParameteriv(QOpenGLFunctions* self, uint32_t target, uint32_t pname, const int32_t* params) {
    self->glTexParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_GlTexSubImage2D(QOpenGLFunctions* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexSubImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_GlViewport(QOpenGLFunctions* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glViewport(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_GlActiveTexture(QOpenGLFunctions* self, uint32_t texture) {
    self->glActiveTexture(static_cast<GLenum>(texture));
}

void QOpenGLFunctions_GlAttachShader(QOpenGLFunctions* self, uint32_t program, uint32_t shader) {
    self->glAttachShader(static_cast<GLuint>(program), static_cast<GLuint>(shader));
}

void QOpenGLFunctions_GlBindAttribLocation(QOpenGLFunctions* self, uint32_t program, uint32_t index, const char* name) {
    self->glBindAttribLocation(static_cast<GLuint>(program), static_cast<GLuint>(index), name);
}

void QOpenGLFunctions_GlBindBuffer(QOpenGLFunctions* self, uint32_t target, uint32_t buffer) {
    self->glBindBuffer(static_cast<GLenum>(target), static_cast<GLuint>(buffer));
}

void QOpenGLFunctions_GlBindFramebuffer(QOpenGLFunctions* self, uint32_t target, uint32_t framebuffer) {
    self->glBindFramebuffer(static_cast<GLenum>(target), static_cast<GLuint>(framebuffer));
}

void QOpenGLFunctions_GlBindRenderbuffer(QOpenGLFunctions* self, uint32_t target, uint32_t renderbuffer) {
    self->glBindRenderbuffer(static_cast<GLenum>(target), static_cast<GLuint>(renderbuffer));
}

void QOpenGLFunctions_GlBlendColor(QOpenGLFunctions* self, GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
    self->glBlendColor(red, green, blue, alpha);
}

void QOpenGLFunctions_GlBlendEquation(QOpenGLFunctions* self, uint32_t mode) {
    self->glBlendEquation(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_GlBlendEquationSeparate(QOpenGLFunctions* self, uint32_t modeRGB, uint32_t modeAlpha) {
    self->glBlendEquationSeparate(static_cast<GLenum>(modeRGB), static_cast<GLenum>(modeAlpha));
}

void QOpenGLFunctions_GlBlendFuncSeparate(QOpenGLFunctions* self, uint32_t srcRGB, uint32_t dstRGB, uint32_t srcAlpha, uint32_t dstAlpha) {
    self->glBlendFuncSeparate(static_cast<GLenum>(srcRGB), static_cast<GLenum>(dstRGB), static_cast<GLenum>(srcAlpha), static_cast<GLenum>(dstAlpha));
}

void QOpenGLFunctions_GlBufferData(QOpenGLFunctions* self, uint32_t target, ptrdiff_t size, const void* data, uint32_t usage) {
    self->glBufferData(static_cast<GLenum>(target), static_cast<qopengl_GLsizeiptr>(size), data, static_cast<GLenum>(usage));
}

void QOpenGLFunctions_GlBufferSubData(QOpenGLFunctions* self, uint32_t target, ptrdiff_t offset, ptrdiff_t size, const void* data) {
    self->glBufferSubData(static_cast<GLenum>(target), static_cast<qopengl_GLintptr>(offset), static_cast<qopengl_GLsizeiptr>(size), data);
}

void QOpenGLFunctions_GlClearDepthf(QOpenGLFunctions* self, GLclampf depth) {
    self->glClearDepthf(depth);
}

void QOpenGLFunctions_GlCompileShader(QOpenGLFunctions* self, uint32_t shader) {
    self->glCompileShader(static_cast<GLuint>(shader));
}

void QOpenGLFunctions_GlCompressedTexImage2D(QOpenGLFunctions* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, const void* data) {
    self->glCompressedTexImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLint>(border), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_GlCompressedTexSubImage2D(QOpenGLFunctions* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, const void* data) {
    self->glCompressedTexSubImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLsizei>(imageSize), data);
}

uint32_t QOpenGLFunctions_GlCreateProgram(QOpenGLFunctions* self) {
    return self->glCreateProgram();
}

uint32_t QOpenGLFunctions_GlCreateShader(QOpenGLFunctions* self, uint32_t typeVal) {
    return self->glCreateShader(static_cast<GLenum>(typeVal));
}

void QOpenGLFunctions_GlDeleteBuffers(QOpenGLFunctions* self, int32_t n, const uint32_t* buffers) {
    self->glDeleteBuffers(static_cast<GLsizei>(n), static_cast<const GLuint*>(buffers));
}

void QOpenGLFunctions_GlDeleteFramebuffers(QOpenGLFunctions* self, int32_t n, const uint32_t* framebuffers) {
    self->glDeleteFramebuffers(static_cast<GLsizei>(n), static_cast<const GLuint*>(framebuffers));
}

void QOpenGLFunctions_GlDeleteProgram(QOpenGLFunctions* self, uint32_t program) {
    self->glDeleteProgram(static_cast<GLuint>(program));
}

void QOpenGLFunctions_GlDeleteRenderbuffers(QOpenGLFunctions* self, int32_t n, const uint32_t* renderbuffers) {
    self->glDeleteRenderbuffers(static_cast<GLsizei>(n), static_cast<const GLuint*>(renderbuffers));
}

void QOpenGLFunctions_GlDeleteShader(QOpenGLFunctions* self, uint32_t shader) {
    self->glDeleteShader(static_cast<GLuint>(shader));
}

void QOpenGLFunctions_GlDepthRangef(QOpenGLFunctions* self, GLclampf zNear, GLclampf zFar) {
    self->glDepthRangef(zNear, zFar);
}

void QOpenGLFunctions_GlDetachShader(QOpenGLFunctions* self, uint32_t program, uint32_t shader) {
    self->glDetachShader(static_cast<GLuint>(program), static_cast<GLuint>(shader));
}

void QOpenGLFunctions_GlDisableVertexAttribArray(QOpenGLFunctions* self, uint32_t index) {
    self->glDisableVertexAttribArray(static_cast<GLuint>(index));
}

void QOpenGLFunctions_GlEnableVertexAttribArray(QOpenGLFunctions* self, uint32_t index) {
    self->glEnableVertexAttribArray(static_cast<GLuint>(index));
}

void QOpenGLFunctions_GlFramebufferRenderbuffer(QOpenGLFunctions* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer) {
    self->glFramebufferRenderbuffer(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLenum>(renderbuffertarget), static_cast<GLuint>(renderbuffer));
}

void QOpenGLFunctions_GlFramebufferTexture2D(QOpenGLFunctions* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
    self->glFramebufferTexture2D(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLenum>(textarget), static_cast<GLuint>(texture), static_cast<GLint>(level));
}

void QOpenGLFunctions_GlGenBuffers(QOpenGLFunctions* self, int32_t n, uint32_t* buffers) {
    self->glGenBuffers(static_cast<GLsizei>(n), static_cast<GLuint*>(buffers));
}

void QOpenGLFunctions_GlGenerateMipmap(QOpenGLFunctions* self, uint32_t target) {
    self->glGenerateMipmap(static_cast<GLenum>(target));
}

void QOpenGLFunctions_GlGenFramebuffers(QOpenGLFunctions* self, int32_t n, uint32_t* framebuffers) {
    self->glGenFramebuffers(static_cast<GLsizei>(n), static_cast<GLuint*>(framebuffers));
}

void QOpenGLFunctions_GlGenRenderbuffers(QOpenGLFunctions* self, int32_t n, uint32_t* renderbuffers) {
    self->glGenRenderbuffers(static_cast<GLsizei>(n), static_cast<GLuint*>(renderbuffers));
}

void QOpenGLFunctions_GlGetAttachedShaders(QOpenGLFunctions* self, uint32_t program, int32_t maxcount, int32_t* count, uint32_t* shaders) {
    self->glGetAttachedShaders(static_cast<GLuint>(program), static_cast<GLsizei>(maxcount), static_cast<GLsizei*>(count), static_cast<GLuint*>(shaders));
}

int32_t QOpenGLFunctions_GlGetAttribLocation(QOpenGLFunctions* self, uint32_t program, const char* name) {
    return self->glGetAttribLocation(static_cast<GLuint>(program), name);
}

void QOpenGLFunctions_GlGetBufferParameteriv(QOpenGLFunctions* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetBufferParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_GlGetFramebufferAttachmentParameteriv(QOpenGLFunctions* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params) {
    self->glGetFramebufferAttachmentParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_GlGetProgramiv(QOpenGLFunctions* self, uint32_t program, uint32_t pname, int32_t* params) {
    self->glGetProgramiv(static_cast<GLuint>(program), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_GlGetProgramInfoLog(QOpenGLFunctions* self, uint32_t program, int32_t bufsize, int32_t* length, char* infolog) {
    self->glGetProgramInfoLog(static_cast<GLuint>(program), static_cast<GLsizei>(bufsize), static_cast<GLsizei*>(length), infolog);
}

void QOpenGLFunctions_GlGetRenderbufferParameteriv(QOpenGLFunctions* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetRenderbufferParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_GlGetShaderiv(QOpenGLFunctions* self, uint32_t shader, uint32_t pname, int32_t* params) {
    self->glGetShaderiv(static_cast<GLuint>(shader), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_GlGetShaderInfoLog(QOpenGLFunctions* self, uint32_t shader, int32_t bufsize, int32_t* length, char* infolog) {
    self->glGetShaderInfoLog(static_cast<GLuint>(shader), static_cast<GLsizei>(bufsize), static_cast<GLsizei*>(length), infolog);
}

void QOpenGLFunctions_GlGetShaderPrecisionFormat(QOpenGLFunctions* self, uint32_t shadertype, uint32_t precisiontype, int32_t* range, int32_t* precision) {
    self->glGetShaderPrecisionFormat(static_cast<GLenum>(shadertype), static_cast<GLenum>(precisiontype), static_cast<GLint*>(range), static_cast<GLint*>(precision));
}

void QOpenGLFunctions_GlGetShaderSource(QOpenGLFunctions* self, uint32_t shader, int32_t bufsize, int32_t* length, char* source) {
    self->glGetShaderSource(static_cast<GLuint>(shader), static_cast<GLsizei>(bufsize), static_cast<GLsizei*>(length), source);
}

void QOpenGLFunctions_GlGetUniformfv(QOpenGLFunctions* self, uint32_t program, int32_t location, float* params) {
    self->glGetUniformfv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_GlGetUniformiv(QOpenGLFunctions* self, uint32_t program, int32_t location, int32_t* params) {
    self->glGetUniformiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLint*>(params));
}

int32_t QOpenGLFunctions_GlGetUniformLocation(QOpenGLFunctions* self, uint32_t program, const char* name) {
    return self->glGetUniformLocation(static_cast<GLuint>(program), name);
}

void QOpenGLFunctions_GlGetVertexAttribfv(QOpenGLFunctions* self, uint32_t index, uint32_t pname, float* params) {
    self->glGetVertexAttribfv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_GlGetVertexAttribiv(QOpenGLFunctions* self, uint32_t index, uint32_t pname, int32_t* params) {
    self->glGetVertexAttribiv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_GlGetVertexAttribPointerv(QOpenGLFunctions* self, uint32_t index, uint32_t pname, void** pointer) {
    self->glGetVertexAttribPointerv(static_cast<GLuint>(index), static_cast<GLenum>(pname), pointer);
}

unsigned char QOpenGLFunctions_GlIsBuffer(QOpenGLFunctions* self, uint32_t buffer) {
    return self->glIsBuffer(static_cast<GLuint>(buffer));
}

unsigned char QOpenGLFunctions_GlIsFramebuffer(QOpenGLFunctions* self, uint32_t framebuffer) {
    return self->glIsFramebuffer(static_cast<GLuint>(framebuffer));
}

unsigned char QOpenGLFunctions_GlIsProgram(QOpenGLFunctions* self, uint32_t program) {
    return self->glIsProgram(static_cast<GLuint>(program));
}

unsigned char QOpenGLFunctions_GlIsRenderbuffer(QOpenGLFunctions* self, uint32_t renderbuffer) {
    return self->glIsRenderbuffer(static_cast<GLuint>(renderbuffer));
}

unsigned char QOpenGLFunctions_GlIsShader(QOpenGLFunctions* self, uint32_t shader) {
    return self->glIsShader(static_cast<GLuint>(shader));
}

void QOpenGLFunctions_GlLinkProgram(QOpenGLFunctions* self, uint32_t program) {
    self->glLinkProgram(static_cast<GLuint>(program));
}

void QOpenGLFunctions_GlReleaseShaderCompiler(QOpenGLFunctions* self) {
    self->glReleaseShaderCompiler();
}

void QOpenGLFunctions_GlRenderbufferStorage(QOpenGLFunctions* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height) {
    self->glRenderbufferStorage(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_GlSampleCoverage(QOpenGLFunctions* self, GLclampf value, unsigned char invert) {
    self->glSampleCoverage(value, static_cast<GLboolean>(invert));
}

void QOpenGLFunctions_GlShaderBinary(QOpenGLFunctions* self, int32_t n, const uint32_t* shaders, uint32_t binaryformat, const void* binary, int32_t length) {
    self->glShaderBinary(static_cast<GLint>(n), static_cast<const GLuint*>(shaders), static_cast<GLenum>(binaryformat), binary, static_cast<GLint>(length));
}

void QOpenGLFunctions_GlShaderSource(QOpenGLFunctions* self, uint32_t shader, int32_t count, const char** stringVal, const int32_t* length) {
    self->glShaderSource(static_cast<GLuint>(shader), static_cast<GLsizei>(count), stringVal, static_cast<const GLint*>(length));
}

void QOpenGLFunctions_GlStencilFuncSeparate(QOpenGLFunctions* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask) {
    self->glStencilFuncSeparate(static_cast<GLenum>(face), static_cast<GLenum>(func), static_cast<GLint>(ref), static_cast<GLuint>(mask));
}

void QOpenGLFunctions_GlStencilMaskSeparate(QOpenGLFunctions* self, uint32_t face, uint32_t mask) {
    self->glStencilMaskSeparate(static_cast<GLenum>(face), static_cast<GLuint>(mask));
}

void QOpenGLFunctions_GlStencilOpSeparate(QOpenGLFunctions* self, uint32_t face, uint32_t fail, uint32_t zfail, uint32_t zpass) {
    self->glStencilOpSeparate(static_cast<GLenum>(face), static_cast<GLenum>(fail), static_cast<GLenum>(zfail), static_cast<GLenum>(zpass));
}

void QOpenGLFunctions_GlUniform1f(QOpenGLFunctions* self, int32_t location, float x) {
    self->glUniform1f(static_cast<GLint>(location), static_cast<GLfloat>(x));
}

void QOpenGLFunctions_GlUniform1fv(QOpenGLFunctions* self, int32_t location, int32_t count, const float* v) {
    self->glUniform1fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_GlUniform1i(QOpenGLFunctions* self, int32_t location, int32_t x) {
    self->glUniform1i(static_cast<GLint>(location), static_cast<GLint>(x));
}

void QOpenGLFunctions_GlUniform1iv(QOpenGLFunctions* self, int32_t location, int32_t count, const int32_t* v) {
    self->glUniform1iv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_GlUniform2f(QOpenGLFunctions* self, int32_t location, float x, float y) {
    self->glUniform2f(static_cast<GLint>(location), static_cast<GLfloat>(x), static_cast<GLfloat>(y));
}

void QOpenGLFunctions_GlUniform2fv(QOpenGLFunctions* self, int32_t location, int32_t count, const float* v) {
    self->glUniform2fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_GlUniform2i(QOpenGLFunctions* self, int32_t location, int32_t x, int32_t y) {
    self->glUniform2i(static_cast<GLint>(location), static_cast<GLint>(x), static_cast<GLint>(y));
}

void QOpenGLFunctions_GlUniform2iv(QOpenGLFunctions* self, int32_t location, int32_t count, const int32_t* v) {
    self->glUniform2iv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_GlUniform3f(QOpenGLFunctions* self, int32_t location, float x, float y, float z) {
    self->glUniform3f(static_cast<GLint>(location), static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLFunctions_GlUniform3fv(QOpenGLFunctions* self, int32_t location, int32_t count, const float* v) {
    self->glUniform3fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_GlUniform3i(QOpenGLFunctions* self, int32_t location, int32_t x, int32_t y, int32_t z) {
    self->glUniform3i(static_cast<GLint>(location), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLint>(z));
}

void QOpenGLFunctions_GlUniform3iv(QOpenGLFunctions* self, int32_t location, int32_t count, const int32_t* v) {
    self->glUniform3iv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_GlUniform4f(QOpenGLFunctions* self, int32_t location, float x, float y, float z, float w) {
    self->glUniform4f(static_cast<GLint>(location), static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z), static_cast<GLfloat>(w));
}

void QOpenGLFunctions_GlUniform4fv(QOpenGLFunctions* self, int32_t location, int32_t count, const float* v) {
    self->glUniform4fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_GlUniform4i(QOpenGLFunctions* self, int32_t location, int32_t x, int32_t y, int32_t z, int32_t w) {
    self->glUniform4i(static_cast<GLint>(location), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLint>(z), static_cast<GLint>(w));
}

void QOpenGLFunctions_GlUniform4iv(QOpenGLFunctions* self, int32_t location, int32_t count, const int32_t* v) {
    self->glUniform4iv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_GlUniformMatrix2fv(QOpenGLFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix2fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_GlUniformMatrix3fv(QOpenGLFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix3fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_GlUniformMatrix4fv(QOpenGLFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix4fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_GlUseProgram(QOpenGLFunctions* self, uint32_t program) {
    self->glUseProgram(static_cast<GLuint>(program));
}

void QOpenGLFunctions_GlValidateProgram(QOpenGLFunctions* self, uint32_t program) {
    self->glValidateProgram(static_cast<GLuint>(program));
}

void QOpenGLFunctions_GlVertexAttrib1f(QOpenGLFunctions* self, uint32_t indx, float x) {
    self->glVertexAttrib1f(static_cast<GLuint>(indx), static_cast<GLfloat>(x));
}

void QOpenGLFunctions_GlVertexAttrib1fv(QOpenGLFunctions* self, uint32_t indx, const float* values) {
    self->glVertexAttrib1fv(static_cast<GLuint>(indx), static_cast<const GLfloat*>(values));
}

void QOpenGLFunctions_GlVertexAttrib2f(QOpenGLFunctions* self, uint32_t indx, float x, float y) {
    self->glVertexAttrib2f(static_cast<GLuint>(indx), static_cast<GLfloat>(x), static_cast<GLfloat>(y));
}

void QOpenGLFunctions_GlVertexAttrib2fv(QOpenGLFunctions* self, uint32_t indx, const float* values) {
    self->glVertexAttrib2fv(static_cast<GLuint>(indx), static_cast<const GLfloat*>(values));
}

void QOpenGLFunctions_GlVertexAttrib3f(QOpenGLFunctions* self, uint32_t indx, float x, float y, float z) {
    self->glVertexAttrib3f(static_cast<GLuint>(indx), static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLFunctions_GlVertexAttrib3fv(QOpenGLFunctions* self, uint32_t indx, const float* values) {
    self->glVertexAttrib3fv(static_cast<GLuint>(indx), static_cast<const GLfloat*>(values));
}

void QOpenGLFunctions_GlVertexAttrib4f(QOpenGLFunctions* self, uint32_t indx, float x, float y, float z, float w) {
    self->glVertexAttrib4f(static_cast<GLuint>(indx), static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z), static_cast<GLfloat>(w));
}

void QOpenGLFunctions_GlVertexAttrib4fv(QOpenGLFunctions* self, uint32_t indx, const float* values) {
    self->glVertexAttrib4fv(static_cast<GLuint>(indx), static_cast<const GLfloat*>(values));
}

void QOpenGLFunctions_GlVertexAttribPointer(QOpenGLFunctions* self, uint32_t indx, int32_t size, uint32_t typeVal, unsigned char normalized, int32_t stride, const void* ptr) {
    self->glVertexAttribPointer(static_cast<GLuint>(indx), static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLboolean>(normalized), static_cast<GLsizei>(stride), ptr);
}

void QOpenGLFunctions_Delete(QOpenGLFunctions* self) {
    delete self;
}
