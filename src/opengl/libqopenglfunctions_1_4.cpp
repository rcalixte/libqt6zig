#include <QOpenGLContext>
#include <QOpenGLFunctions_1_4>
#include <qopenglfunctions_1_4.h>
#include "libqopenglfunctions_1_4.h"
#include "libqopenglfunctions_1_4.hxx"

QOpenGLFunctions_1_4* QOpenGLFunctions_1_4_new() {
    return new VirtualQOpenGLFunctions_1_4();
}

bool QOpenGLFunctions_1_4_InitializeOpenGLFunctions(QOpenGLFunctions_1_4* self) {
    auto* vqopenglfunctions_1_4 = dynamic_cast<VirtualQOpenGLFunctions_1_4*>(self);
    if (vqopenglfunctions_1_4 && vqopenglfunctions_1_4->isVirtualQOpenGLFunctions_1_4) {
        return self->initializeOpenGLFunctions();
    } else {
        return ((VirtualQOpenGLFunctions_1_4*)self)->initializeOpenGLFunctions();
    }
}

void QOpenGLFunctions_1_4_GlViewport(QOpenGLFunctions_1_4* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glViewport(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_1_4_GlDepthRange(QOpenGLFunctions_1_4* self, double nearVal, double farVal) {
    self->glDepthRange(static_cast<GLdouble>(nearVal), static_cast<GLdouble>(farVal));
}

unsigned char QOpenGLFunctions_1_4_GlIsEnabled(QOpenGLFunctions_1_4* self, uint32_t cap) {
    return self->glIsEnabled(static_cast<GLenum>(cap));
}

void QOpenGLFunctions_1_4_GlGetTexLevelParameteriv(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params) {
    self->glGetTexLevelParameteriv(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_1_4_GlGetTexLevelParameterfv(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, uint32_t pname, float* params) {
    self->glGetTexLevelParameterfv(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlGetTexParameteriv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetTexParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_1_4_GlGetTexParameterfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, float* params) {
    self->glGetTexParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlGetTexImage(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, uint32_t format, uint32_t typeVal, void* pixels) {
    self->glGetTexImage(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

const uint8_t* QOpenGLFunctions_1_4_GlGetString(QOpenGLFunctions_1_4* self, uint32_t name) {
    return (const uint8_t*)self->glGetString(static_cast<GLenum>(name));
}

void QOpenGLFunctions_1_4_GlGetIntegerv(QOpenGLFunctions_1_4* self, uint32_t pname, int32_t* params) {
    self->glGetIntegerv(static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_1_4_GlGetFloatv(QOpenGLFunctions_1_4* self, uint32_t pname, float* params) {
    self->glGetFloatv(static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlGetDoublev(QOpenGLFunctions_1_4* self, uint32_t pname, double* params) {
    self->glGetDoublev(static_cast<GLenum>(pname), static_cast<GLdouble*>(params));
}

void QOpenGLFunctions_1_4_GlGetBooleanv(QOpenGLFunctions_1_4* self, uint32_t pname, unsigned char* params) {
    self->glGetBooleanv(static_cast<GLenum>(pname), static_cast<GLboolean*>(params));
}

void QOpenGLFunctions_1_4_GlReadPixels(QOpenGLFunctions_1_4* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, void* pixels) {
    self->glReadPixels(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_1_4_GlReadBuffer(QOpenGLFunctions_1_4* self, uint32_t mode) {
    self->glReadBuffer(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_1_4_GlPixelStorei(QOpenGLFunctions_1_4* self, uint32_t pname, int32_t param) {
    self->glPixelStorei(static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_1_4_GlPixelStoref(QOpenGLFunctions_1_4* self, uint32_t pname, float param) {
    self->glPixelStoref(static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_1_4_GlDepthFunc(QOpenGLFunctions_1_4* self, uint32_t func) {
    self->glDepthFunc(static_cast<GLenum>(func));
}

void QOpenGLFunctions_1_4_GlStencilOp(QOpenGLFunctions_1_4* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
    self->glStencilOp(static_cast<GLenum>(fail), static_cast<GLenum>(zfail), static_cast<GLenum>(zpass));
}

void QOpenGLFunctions_1_4_GlStencilFunc(QOpenGLFunctions_1_4* self, uint32_t func, int32_t ref, uint32_t mask) {
    self->glStencilFunc(static_cast<GLenum>(func), static_cast<GLint>(ref), static_cast<GLuint>(mask));
}

void QOpenGLFunctions_1_4_GlLogicOp(QOpenGLFunctions_1_4* self, uint32_t opcode) {
    self->glLogicOp(static_cast<GLenum>(opcode));
}

void QOpenGLFunctions_1_4_GlBlendFunc(QOpenGLFunctions_1_4* self, uint32_t sfactor, uint32_t dfactor) {
    self->glBlendFunc(static_cast<GLenum>(sfactor), static_cast<GLenum>(dfactor));
}

void QOpenGLFunctions_1_4_GlFlush(QOpenGLFunctions_1_4* self) {
    self->glFlush();
}

void QOpenGLFunctions_1_4_GlFinish(QOpenGLFunctions_1_4* self) {
    self->glFinish();
}

void QOpenGLFunctions_1_4_GlEnable(QOpenGLFunctions_1_4* self, uint32_t cap) {
    self->glEnable(static_cast<GLenum>(cap));
}

void QOpenGLFunctions_1_4_GlDisable(QOpenGLFunctions_1_4* self, uint32_t cap) {
    self->glDisable(static_cast<GLenum>(cap));
}

void QOpenGLFunctions_1_4_GlDepthMask(QOpenGLFunctions_1_4* self, unsigned char flag) {
    self->glDepthMask(static_cast<GLboolean>(flag));
}

void QOpenGLFunctions_1_4_GlColorMask(QOpenGLFunctions_1_4* self, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
    self->glColorMask(static_cast<GLboolean>(red), static_cast<GLboolean>(green), static_cast<GLboolean>(blue), static_cast<GLboolean>(alpha));
}

void QOpenGLFunctions_1_4_GlStencilMask(QOpenGLFunctions_1_4* self, uint32_t mask) {
    self->glStencilMask(static_cast<GLuint>(mask));
}

void QOpenGLFunctions_1_4_GlClearDepth(QOpenGLFunctions_1_4* self, double depth) {
    self->glClearDepth(static_cast<GLdouble>(depth));
}

void QOpenGLFunctions_1_4_GlClearStencil(QOpenGLFunctions_1_4* self, int32_t s) {
    self->glClearStencil(static_cast<GLint>(s));
}

void QOpenGLFunctions_1_4_GlClearColor(QOpenGLFunctions_1_4* self, float red, float green, float blue, float alpha) {
    self->glClearColor(static_cast<GLfloat>(red), static_cast<GLfloat>(green), static_cast<GLfloat>(blue), static_cast<GLfloat>(alpha));
}

void QOpenGLFunctions_1_4_GlClear(QOpenGLFunctions_1_4* self, uint32_t mask) {
    self->glClear(static_cast<GLbitfield>(mask));
}

void QOpenGLFunctions_1_4_GlDrawBuffer(QOpenGLFunctions_1_4* self, uint32_t mode) {
    self->glDrawBuffer(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_1_4_GlTexImage2D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLint>(border), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_1_4_GlTexImage1D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(internalformat), static_cast<GLsizei>(width), static_cast<GLint>(border), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_1_4_GlTexParameteriv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, const int32_t* params) {
    self->glTexParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_1_4_GlTexParameteri(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, int32_t param) {
    self->glTexParameteri(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_1_4_GlTexParameterfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, const float* params) {
    self->glTexParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlTexParameterf(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, float param) {
    self->glTexParameterf(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_1_4_GlScissor(QOpenGLFunctions_1_4* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glScissor(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_1_4_GlPolygonMode(QOpenGLFunctions_1_4* self, uint32_t face, uint32_t mode) {
    self->glPolygonMode(static_cast<GLenum>(face), static_cast<GLenum>(mode));
}

void QOpenGLFunctions_1_4_GlPointSize(QOpenGLFunctions_1_4* self, float size) {
    self->glPointSize(static_cast<GLfloat>(size));
}

void QOpenGLFunctions_1_4_GlLineWidth(QOpenGLFunctions_1_4* self, float width) {
    self->glLineWidth(static_cast<GLfloat>(width));
}

void QOpenGLFunctions_1_4_GlHint(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t mode) {
    self->glHint(static_cast<GLenum>(target), static_cast<GLenum>(mode));
}

void QOpenGLFunctions_1_4_GlFrontFace(QOpenGLFunctions_1_4* self, uint32_t mode) {
    self->glFrontFace(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_1_4_GlCullFace(QOpenGLFunctions_1_4* self, uint32_t mode) {
    self->glCullFace(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_1_4_GlIndexubv(QOpenGLFunctions_1_4* self, const uint8_t* c) {
    self->glIndexubv(static_cast<const GLubyte*>(c));
}

void QOpenGLFunctions_1_4_GlIndexub(QOpenGLFunctions_1_4* self, uint8_t c) {
    self->glIndexub(static_cast<GLubyte>(c));
}

unsigned char QOpenGLFunctions_1_4_GlIsTexture(QOpenGLFunctions_1_4* self, uint32_t texture) {
    return self->glIsTexture(static_cast<GLuint>(texture));
}

void QOpenGLFunctions_1_4_GlGenTextures(QOpenGLFunctions_1_4* self, int32_t n, uint32_t* textures) {
    self->glGenTextures(static_cast<GLsizei>(n), static_cast<GLuint*>(textures));
}

void QOpenGLFunctions_1_4_GlDeleteTextures(QOpenGLFunctions_1_4* self, int32_t n, const uint32_t* textures) {
    self->glDeleteTextures(static_cast<GLsizei>(n), static_cast<const GLuint*>(textures));
}

void QOpenGLFunctions_1_4_GlBindTexture(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t texture) {
    self->glBindTexture(static_cast<GLenum>(target), static_cast<GLuint>(texture));
}

void QOpenGLFunctions_1_4_GlTexSubImage2D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexSubImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_1_4_GlTexSubImage1D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexSubImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLsizei>(width), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_1_4_GlCopyTexSubImage2D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glCopyTexSubImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_1_4_GlCopyTexSubImage1D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width) {
    self->glCopyTexSubImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width));
}

void QOpenGLFunctions_1_4_GlCopyTexImage2D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
    self->glCopyTexImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLint>(border));
}

void QOpenGLFunctions_1_4_GlCopyTexImage1D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border) {
    self->glCopyTexImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLint>(border));
}

void QOpenGLFunctions_1_4_GlPolygonOffset(QOpenGLFunctions_1_4* self, float factor, float units) {
    self->glPolygonOffset(static_cast<GLfloat>(factor), static_cast<GLfloat>(units));
}

void QOpenGLFunctions_1_4_GlDrawElements(QOpenGLFunctions_1_4* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices) {
    self->glDrawElements(static_cast<GLenum>(mode), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices);
}

void QOpenGLFunctions_1_4_GlDrawArrays(QOpenGLFunctions_1_4* self, uint32_t mode, int32_t first, int32_t count) {
    self->glDrawArrays(static_cast<GLenum>(mode), static_cast<GLint>(first), static_cast<GLsizei>(count));
}

void QOpenGLFunctions_1_4_GlCopyTexSubImage3D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glCopyTexSubImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_1_4_GlTexSubImage3D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexSubImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_1_4_GlTexImage3D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLint>(border), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_1_4_GlDrawRangeElements(QOpenGLFunctions_1_4* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices) {
    self->glDrawRangeElements(static_cast<GLenum>(mode), static_cast<GLuint>(start), static_cast<GLuint>(end), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices);
}

void QOpenGLFunctions_1_4_GlBlendEquation(QOpenGLFunctions_1_4* self, uint32_t mode) {
    self->glBlendEquation(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_1_4_GlBlendColor(QOpenGLFunctions_1_4* self, float red, float green, float blue, float alpha) {
    self->glBlendColor(static_cast<GLfloat>(red), static_cast<GLfloat>(green), static_cast<GLfloat>(blue), static_cast<GLfloat>(alpha));
}

void QOpenGLFunctions_1_4_GlGetCompressedTexImage(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, void* img) {
    self->glGetCompressedTexImage(static_cast<GLenum>(target), static_cast<GLint>(level), img);
}

void QOpenGLFunctions_1_4_GlCompressedTexSubImage1D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, const void* data) {
    self->glCompressedTexSubImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLsizei>(width), static_cast<GLenum>(format), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_1_4_GlCompressedTexSubImage2D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, const void* data) {
    self->glCompressedTexSubImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_1_4_GlCompressedTexSubImage3D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, const void* data) {
    self->glCompressedTexSubImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLenum>(format), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_1_4_GlCompressedTexImage1D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, const void* data) {
    self->glCompressedTexImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLint>(border), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_1_4_GlCompressedTexImage2D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, const void* data) {
    self->glCompressedTexImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLint>(border), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_1_4_GlCompressedTexImage3D(QOpenGLFunctions_1_4* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, const void* data) {
    self->glCompressedTexImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLint>(border), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_1_4_GlSampleCoverage(QOpenGLFunctions_1_4* self, float value, unsigned char invert) {
    self->glSampleCoverage(static_cast<GLfloat>(value), static_cast<GLboolean>(invert));
}

void QOpenGLFunctions_1_4_GlActiveTexture(QOpenGLFunctions_1_4* self, uint32_t texture) {
    self->glActiveTexture(static_cast<GLenum>(texture));
}

void QOpenGLFunctions_1_4_GlPointParameteriv(QOpenGLFunctions_1_4* self, uint32_t pname, const int32_t* params) {
    self->glPointParameteriv(static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_1_4_GlPointParameteri(QOpenGLFunctions_1_4* self, uint32_t pname, int32_t param) {
    self->glPointParameteri(static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_1_4_GlPointParameterfv(QOpenGLFunctions_1_4* self, uint32_t pname, const float* params) {
    self->glPointParameterfv(static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlPointParameterf(QOpenGLFunctions_1_4* self, uint32_t pname, float param) {
    self->glPointParameterf(static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_1_4_GlMultiDrawArrays(QOpenGLFunctions_1_4* self, uint32_t mode, const int32_t* first, const int32_t* count, int32_t drawcount) {
    self->glMultiDrawArrays(static_cast<GLenum>(mode), static_cast<const GLint*>(first), static_cast<const GLsizei*>(count), static_cast<GLsizei>(drawcount));
}

void QOpenGLFunctions_1_4_GlBlendFuncSeparate(QOpenGLFunctions_1_4* self, uint32_t sfactorRGB, uint32_t dfactorRGB, uint32_t sfactorAlpha, uint32_t dfactorAlpha) {
    self->glBlendFuncSeparate(static_cast<GLenum>(sfactorRGB), static_cast<GLenum>(dfactorRGB), static_cast<GLenum>(sfactorAlpha), static_cast<GLenum>(dfactorAlpha));
}

void QOpenGLFunctions_1_4_GlTranslatef(QOpenGLFunctions_1_4* self, float x, float y, float z) {
    self->glTranslatef(static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLFunctions_1_4_GlTranslated(QOpenGLFunctions_1_4* self, double x, double y, double z) {
    self->glTranslated(static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z));
}

void QOpenGLFunctions_1_4_GlScalef(QOpenGLFunctions_1_4* self, float x, float y, float z) {
    self->glScalef(static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLFunctions_1_4_GlScaled(QOpenGLFunctions_1_4* self, double x, double y, double z) {
    self->glScaled(static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z));
}

void QOpenGLFunctions_1_4_GlRotatef(QOpenGLFunctions_1_4* self, float angle, float x, float y, float z) {
    self->glRotatef(static_cast<GLfloat>(angle), static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLFunctions_1_4_GlRotated(QOpenGLFunctions_1_4* self, double angle, double x, double y, double z) {
    self->glRotated(static_cast<GLdouble>(angle), static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z));
}

void QOpenGLFunctions_1_4_GlPushMatrix(QOpenGLFunctions_1_4* self) {
    self->glPushMatrix();
}

void QOpenGLFunctions_1_4_GlPopMatrix(QOpenGLFunctions_1_4* self) {
    self->glPopMatrix();
}

void QOpenGLFunctions_1_4_GlOrtho(QOpenGLFunctions_1_4* self, double left, double right, double bottom, double top, double zNear, double zFar) {
    self->glOrtho(static_cast<GLdouble>(left), static_cast<GLdouble>(right), static_cast<GLdouble>(bottom), static_cast<GLdouble>(top), static_cast<GLdouble>(zNear), static_cast<GLdouble>(zFar));
}

void QOpenGLFunctions_1_4_GlMultMatrixd(QOpenGLFunctions_1_4* self, const double* m) {
    self->glMultMatrixd(static_cast<const GLdouble*>(m));
}

void QOpenGLFunctions_1_4_GlMultMatrixf(QOpenGLFunctions_1_4* self, const float* m) {
    self->glMultMatrixf(static_cast<const GLfloat*>(m));
}

void QOpenGLFunctions_1_4_GlMatrixMode(QOpenGLFunctions_1_4* self, uint32_t mode) {
    self->glMatrixMode(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_1_4_GlLoadMatrixd(QOpenGLFunctions_1_4* self, const double* m) {
    self->glLoadMatrixd(static_cast<const GLdouble*>(m));
}

void QOpenGLFunctions_1_4_GlLoadMatrixf(QOpenGLFunctions_1_4* self, const float* m) {
    self->glLoadMatrixf(static_cast<const GLfloat*>(m));
}

void QOpenGLFunctions_1_4_GlLoadIdentity(QOpenGLFunctions_1_4* self) {
    self->glLoadIdentity();
}

void QOpenGLFunctions_1_4_GlFrustum(QOpenGLFunctions_1_4* self, double left, double right, double bottom, double top, double zNear, double zFar) {
    self->glFrustum(static_cast<GLdouble>(left), static_cast<GLdouble>(right), static_cast<GLdouble>(bottom), static_cast<GLdouble>(top), static_cast<GLdouble>(zNear), static_cast<GLdouble>(zFar));
}

unsigned char QOpenGLFunctions_1_4_GlIsList(QOpenGLFunctions_1_4* self, uint32_t list) {
    return self->glIsList(static_cast<GLuint>(list));
}

void QOpenGLFunctions_1_4_GlGetTexGeniv(QOpenGLFunctions_1_4* self, uint32_t coord, uint32_t pname, int32_t* params) {
    self->glGetTexGeniv(static_cast<GLenum>(coord), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_1_4_GlGetTexGenfv(QOpenGLFunctions_1_4* self, uint32_t coord, uint32_t pname, float* params) {
    self->glGetTexGenfv(static_cast<GLenum>(coord), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlGetTexGendv(QOpenGLFunctions_1_4* self, uint32_t coord, uint32_t pname, double* params) {
    self->glGetTexGendv(static_cast<GLenum>(coord), static_cast<GLenum>(pname), static_cast<GLdouble*>(params));
}

void QOpenGLFunctions_1_4_GlGetTexEnviv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetTexEnviv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_1_4_GlGetTexEnvfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, float* params) {
    self->glGetTexEnvfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlGetPolygonStipple(QOpenGLFunctions_1_4* self, uint8_t* mask) {
    self->glGetPolygonStipple(static_cast<GLubyte*>(mask));
}

void QOpenGLFunctions_1_4_GlGetPixelMapusv(QOpenGLFunctions_1_4* self, uint32_t mapVal, uint16_t* values) {
    self->glGetPixelMapusv(static_cast<GLenum>(mapVal), static_cast<GLushort*>(values));
}

void QOpenGLFunctions_1_4_GlGetPixelMapuiv(QOpenGLFunctions_1_4* self, uint32_t mapVal, uint32_t* values) {
    self->glGetPixelMapuiv(static_cast<GLenum>(mapVal), static_cast<GLuint*>(values));
}

void QOpenGLFunctions_1_4_GlGetPixelMapfv(QOpenGLFunctions_1_4* self, uint32_t mapVal, float* values) {
    self->glGetPixelMapfv(static_cast<GLenum>(mapVal), static_cast<GLfloat*>(values));
}

void QOpenGLFunctions_1_4_GlGetMaterialiv(QOpenGLFunctions_1_4* self, uint32_t face, uint32_t pname, int32_t* params) {
    self->glGetMaterialiv(static_cast<GLenum>(face), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_1_4_GlGetMaterialfv(QOpenGLFunctions_1_4* self, uint32_t face, uint32_t pname, float* params) {
    self->glGetMaterialfv(static_cast<GLenum>(face), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlGetMapiv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t query, int32_t* v) {
    self->glGetMapiv(static_cast<GLenum>(target), static_cast<GLenum>(query), static_cast<GLint*>(v));
}

void QOpenGLFunctions_1_4_GlGetMapfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t query, float* v) {
    self->glGetMapfv(static_cast<GLenum>(target), static_cast<GLenum>(query), static_cast<GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlGetMapdv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t query, double* v) {
    self->glGetMapdv(static_cast<GLenum>(target), static_cast<GLenum>(query), static_cast<GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlGetLightiv(QOpenGLFunctions_1_4* self, uint32_t light, uint32_t pname, int32_t* params) {
    self->glGetLightiv(static_cast<GLenum>(light), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_1_4_GlGetLightfv(QOpenGLFunctions_1_4* self, uint32_t light, uint32_t pname, float* params) {
    self->glGetLightfv(static_cast<GLenum>(light), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlGetClipPlane(QOpenGLFunctions_1_4* self, uint32_t plane, double* equation) {
    self->glGetClipPlane(static_cast<GLenum>(plane), static_cast<GLdouble*>(equation));
}

void QOpenGLFunctions_1_4_GlDrawPixels(QOpenGLFunctions_1_4* self, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glDrawPixels(static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_1_4_GlCopyPixels(QOpenGLFunctions_1_4* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t typeVal) {
    self->glCopyPixels(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(typeVal));
}

void QOpenGLFunctions_1_4_GlPixelMapusv(QOpenGLFunctions_1_4* self, uint32_t mapVal, int32_t mapsize, const uint16_t* values) {
    self->glPixelMapusv(static_cast<GLenum>(mapVal), static_cast<GLint>(mapsize), static_cast<const GLushort*>(values));
}

void QOpenGLFunctions_1_4_GlPixelMapuiv(QOpenGLFunctions_1_4* self, uint32_t mapVal, int32_t mapsize, const uint32_t* values) {
    self->glPixelMapuiv(static_cast<GLenum>(mapVal), static_cast<GLint>(mapsize), static_cast<const GLuint*>(values));
}

void QOpenGLFunctions_1_4_GlPixelMapfv(QOpenGLFunctions_1_4* self, uint32_t mapVal, int32_t mapsize, const float* values) {
    self->glPixelMapfv(static_cast<GLenum>(mapVal), static_cast<GLint>(mapsize), static_cast<const GLfloat*>(values));
}

void QOpenGLFunctions_1_4_GlPixelTransferi(QOpenGLFunctions_1_4* self, uint32_t pname, int32_t param) {
    self->glPixelTransferi(static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_1_4_GlPixelTransferf(QOpenGLFunctions_1_4* self, uint32_t pname, float param) {
    self->glPixelTransferf(static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_1_4_GlPixelZoom(QOpenGLFunctions_1_4* self, float xfactor, float yfactor) {
    self->glPixelZoom(static_cast<GLfloat>(xfactor), static_cast<GLfloat>(yfactor));
}

void QOpenGLFunctions_1_4_GlAlphaFunc(QOpenGLFunctions_1_4* self, uint32_t func, float ref) {
    self->glAlphaFunc(static_cast<GLenum>(func), static_cast<GLfloat>(ref));
}

void QOpenGLFunctions_1_4_GlEvalPoint2(QOpenGLFunctions_1_4* self, int32_t i, int32_t j) {
    self->glEvalPoint2(static_cast<GLint>(i), static_cast<GLint>(j));
}

void QOpenGLFunctions_1_4_GlEvalMesh2(QOpenGLFunctions_1_4* self, uint32_t mode, int32_t i1Val, int32_t i2Val, int32_t j1, int32_t j2) {
    self->glEvalMesh2(static_cast<GLenum>(mode), static_cast<GLint>(i1Val), static_cast<GLint>(i2Val), static_cast<GLint>(j1), static_cast<GLint>(j2));
}

void QOpenGLFunctions_1_4_GlEvalPoint1(QOpenGLFunctions_1_4* self, int32_t i) {
    self->glEvalPoint1(static_cast<GLint>(i));
}

void QOpenGLFunctions_1_4_GlEvalMesh1(QOpenGLFunctions_1_4* self, uint32_t mode, int32_t i1Val, int32_t i2Val) {
    self->glEvalMesh1(static_cast<GLenum>(mode), static_cast<GLint>(i1Val), static_cast<GLint>(i2Val));
}

void QOpenGLFunctions_1_4_GlEvalCoord2fv(QOpenGLFunctions_1_4* self, const float* u) {
    self->glEvalCoord2fv(static_cast<const GLfloat*>(u));
}

void QOpenGLFunctions_1_4_GlEvalCoord2f(QOpenGLFunctions_1_4* self, float u, float v) {
    self->glEvalCoord2f(static_cast<GLfloat>(u), static_cast<GLfloat>(v));
}

void QOpenGLFunctions_1_4_GlEvalCoord2dv(QOpenGLFunctions_1_4* self, const double* u) {
    self->glEvalCoord2dv(static_cast<const GLdouble*>(u));
}

void QOpenGLFunctions_1_4_GlEvalCoord2d(QOpenGLFunctions_1_4* self, double u, double v) {
    self->glEvalCoord2d(static_cast<GLdouble>(u), static_cast<GLdouble>(v));
}

void QOpenGLFunctions_1_4_GlEvalCoord1fv(QOpenGLFunctions_1_4* self, const float* u) {
    self->glEvalCoord1fv(static_cast<const GLfloat*>(u));
}

void QOpenGLFunctions_1_4_GlEvalCoord1f(QOpenGLFunctions_1_4* self, float u) {
    self->glEvalCoord1f(static_cast<GLfloat>(u));
}

void QOpenGLFunctions_1_4_GlEvalCoord1dv(QOpenGLFunctions_1_4* self, const double* u) {
    self->glEvalCoord1dv(static_cast<const GLdouble*>(u));
}

void QOpenGLFunctions_1_4_GlEvalCoord1d(QOpenGLFunctions_1_4* self, double u) {
    self->glEvalCoord1d(static_cast<GLdouble>(u));
}

void QOpenGLFunctions_1_4_GlMapGrid2f(QOpenGLFunctions_1_4* self, int32_t un, float u1Val, float u2Val, int32_t vn, float v1, float v2) {
    self->glMapGrid2f(static_cast<GLint>(un), static_cast<GLfloat>(u1Val), static_cast<GLfloat>(u2Val), static_cast<GLint>(vn), static_cast<GLfloat>(v1), static_cast<GLfloat>(v2));
}

void QOpenGLFunctions_1_4_GlMapGrid2d(QOpenGLFunctions_1_4* self, int32_t un, double u1Val, double u2Val, int32_t vn, double v1, double v2) {
    self->glMapGrid2d(static_cast<GLint>(un), static_cast<GLdouble>(u1Val), static_cast<GLdouble>(u2Val), static_cast<GLint>(vn), static_cast<GLdouble>(v1), static_cast<GLdouble>(v2));
}

void QOpenGLFunctions_1_4_GlMapGrid1f(QOpenGLFunctions_1_4* self, int32_t un, float u1Val, float u2Val) {
    self->glMapGrid1f(static_cast<GLint>(un), static_cast<GLfloat>(u1Val), static_cast<GLfloat>(u2Val));
}

void QOpenGLFunctions_1_4_GlMapGrid1d(QOpenGLFunctions_1_4* self, int32_t un, double u1Val, double u2Val) {
    self->glMapGrid1d(static_cast<GLint>(un), static_cast<GLdouble>(u1Val), static_cast<GLdouble>(u2Val));
}

void QOpenGLFunctions_1_4_GlMap2f(QOpenGLFunctions_1_4* self, uint32_t target, float u1Val, float u2Val, int32_t ustride, int32_t uorder, float v1, float v2, int32_t vstride, int32_t vorder, const float* points) {
    self->glMap2f(static_cast<GLenum>(target), static_cast<GLfloat>(u1Val), static_cast<GLfloat>(u2Val), static_cast<GLint>(ustride), static_cast<GLint>(uorder), static_cast<GLfloat>(v1), static_cast<GLfloat>(v2), static_cast<GLint>(vstride), static_cast<GLint>(vorder), static_cast<const GLfloat*>(points));
}

void QOpenGLFunctions_1_4_GlMap2d(QOpenGLFunctions_1_4* self, uint32_t target, double u1Val, double u2Val, int32_t ustride, int32_t uorder, double v1, double v2, int32_t vstride, int32_t vorder, const double* points) {
    self->glMap2d(static_cast<GLenum>(target), static_cast<GLdouble>(u1Val), static_cast<GLdouble>(u2Val), static_cast<GLint>(ustride), static_cast<GLint>(uorder), static_cast<GLdouble>(v1), static_cast<GLdouble>(v2), static_cast<GLint>(vstride), static_cast<GLint>(vorder), static_cast<const GLdouble*>(points));
}

void QOpenGLFunctions_1_4_GlMap1f(QOpenGLFunctions_1_4* self, uint32_t target, float u1Val, float u2Val, int32_t stride, int32_t order, const float* points) {
    self->glMap1f(static_cast<GLenum>(target), static_cast<GLfloat>(u1Val), static_cast<GLfloat>(u2Val), static_cast<GLint>(stride), static_cast<GLint>(order), static_cast<const GLfloat*>(points));
}

void QOpenGLFunctions_1_4_GlMap1d(QOpenGLFunctions_1_4* self, uint32_t target, double u1Val, double u2Val, int32_t stride, int32_t order, const double* points) {
    self->glMap1d(static_cast<GLenum>(target), static_cast<GLdouble>(u1Val), static_cast<GLdouble>(u2Val), static_cast<GLint>(stride), static_cast<GLint>(order), static_cast<const GLdouble*>(points));
}

void QOpenGLFunctions_1_4_GlPushAttrib(QOpenGLFunctions_1_4* self, uint32_t mask) {
    self->glPushAttrib(static_cast<GLbitfield>(mask));
}

void QOpenGLFunctions_1_4_GlPopAttrib(QOpenGLFunctions_1_4* self) {
    self->glPopAttrib();
}

void QOpenGLFunctions_1_4_GlAccum(QOpenGLFunctions_1_4* self, uint32_t op, float value) {
    self->glAccum(static_cast<GLenum>(op), static_cast<GLfloat>(value));
}

void QOpenGLFunctions_1_4_GlIndexMask(QOpenGLFunctions_1_4* self, uint32_t mask) {
    self->glIndexMask(static_cast<GLuint>(mask));
}

void QOpenGLFunctions_1_4_GlClearIndex(QOpenGLFunctions_1_4* self, float c) {
    self->glClearIndex(static_cast<GLfloat>(c));
}

void QOpenGLFunctions_1_4_GlClearAccum(QOpenGLFunctions_1_4* self, float red, float green, float blue, float alpha) {
    self->glClearAccum(static_cast<GLfloat>(red), static_cast<GLfloat>(green), static_cast<GLfloat>(blue), static_cast<GLfloat>(alpha));
}

void QOpenGLFunctions_1_4_GlPushName(QOpenGLFunctions_1_4* self, uint32_t name) {
    self->glPushName(static_cast<GLuint>(name));
}

void QOpenGLFunctions_1_4_GlPopName(QOpenGLFunctions_1_4* self) {
    self->glPopName();
}

void QOpenGLFunctions_1_4_GlPassThrough(QOpenGLFunctions_1_4* self, float token) {
    self->glPassThrough(static_cast<GLfloat>(token));
}

void QOpenGLFunctions_1_4_GlLoadName(QOpenGLFunctions_1_4* self, uint32_t name) {
    self->glLoadName(static_cast<GLuint>(name));
}

void QOpenGLFunctions_1_4_GlInitNames(QOpenGLFunctions_1_4* self) {
    self->glInitNames();
}

int32_t QOpenGLFunctions_1_4_GlRenderMode(QOpenGLFunctions_1_4* self, uint32_t mode) {
    return self->glRenderMode(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_1_4_GlSelectBuffer(QOpenGLFunctions_1_4* self, int32_t size, uint32_t* buffer) {
    self->glSelectBuffer(static_cast<GLsizei>(size), static_cast<GLuint*>(buffer));
}

void QOpenGLFunctions_1_4_GlFeedbackBuffer(QOpenGLFunctions_1_4* self, int32_t size, uint32_t typeVal, float* buffer) {
    self->glFeedbackBuffer(static_cast<GLsizei>(size), static_cast<GLenum>(typeVal), static_cast<GLfloat*>(buffer));
}

void QOpenGLFunctions_1_4_GlTexGeniv(QOpenGLFunctions_1_4* self, uint32_t coord, uint32_t pname, const int32_t* params) {
    self->glTexGeniv(static_cast<GLenum>(coord), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_1_4_GlTexGeni(QOpenGLFunctions_1_4* self, uint32_t coord, uint32_t pname, int32_t param) {
    self->glTexGeni(static_cast<GLenum>(coord), static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_1_4_GlTexGenfv(QOpenGLFunctions_1_4* self, uint32_t coord, uint32_t pname, const float* params) {
    self->glTexGenfv(static_cast<GLenum>(coord), static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlTexGenf(QOpenGLFunctions_1_4* self, uint32_t coord, uint32_t pname, float param) {
    self->glTexGenf(static_cast<GLenum>(coord), static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_1_4_GlTexGendv(QOpenGLFunctions_1_4* self, uint32_t coord, uint32_t pname, const double* params) {
    self->glTexGendv(static_cast<GLenum>(coord), static_cast<GLenum>(pname), static_cast<const GLdouble*>(params));
}

void QOpenGLFunctions_1_4_GlTexGend(QOpenGLFunctions_1_4* self, uint32_t coord, uint32_t pname, double param) {
    self->glTexGend(static_cast<GLenum>(coord), static_cast<GLenum>(pname), static_cast<GLdouble>(param));
}

void QOpenGLFunctions_1_4_GlTexEnviv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, const int32_t* params) {
    self->glTexEnviv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_1_4_GlTexEnvi(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, int32_t param) {
    self->glTexEnvi(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_1_4_GlTexEnvfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, const float* params) {
    self->glTexEnvfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlTexEnvf(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, float param) {
    self->glTexEnvf(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_1_4_GlShadeModel(QOpenGLFunctions_1_4* self, uint32_t mode) {
    self->glShadeModel(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_1_4_GlPolygonStipple(QOpenGLFunctions_1_4* self, const uint8_t* mask) {
    self->glPolygonStipple(static_cast<const GLubyte*>(mask));
}

void QOpenGLFunctions_1_4_GlMaterialiv(QOpenGLFunctions_1_4* self, uint32_t face, uint32_t pname, const int32_t* params) {
    self->glMaterialiv(static_cast<GLenum>(face), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_1_4_GlMateriali(QOpenGLFunctions_1_4* self, uint32_t face, uint32_t pname, int32_t param) {
    self->glMateriali(static_cast<GLenum>(face), static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_1_4_GlMaterialfv(QOpenGLFunctions_1_4* self, uint32_t face, uint32_t pname, const float* params) {
    self->glMaterialfv(static_cast<GLenum>(face), static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlMaterialf(QOpenGLFunctions_1_4* self, uint32_t face, uint32_t pname, float param) {
    self->glMaterialf(static_cast<GLenum>(face), static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_1_4_GlLineStipple(QOpenGLFunctions_1_4* self, int32_t factor, uint16_t pattern) {
    self->glLineStipple(static_cast<GLint>(factor), static_cast<GLushort>(pattern));
}

void QOpenGLFunctions_1_4_GlLightModeliv(QOpenGLFunctions_1_4* self, uint32_t pname, const int32_t* params) {
    self->glLightModeliv(static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_1_4_GlLightModeli(QOpenGLFunctions_1_4* self, uint32_t pname, int32_t param) {
    self->glLightModeli(static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_1_4_GlLightModelfv(QOpenGLFunctions_1_4* self, uint32_t pname, const float* params) {
    self->glLightModelfv(static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlLightModelf(QOpenGLFunctions_1_4* self, uint32_t pname, float param) {
    self->glLightModelf(static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_1_4_GlLightiv(QOpenGLFunctions_1_4* self, uint32_t light, uint32_t pname, const int32_t* params) {
    self->glLightiv(static_cast<GLenum>(light), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_1_4_GlLighti(QOpenGLFunctions_1_4* self, uint32_t light, uint32_t pname, int32_t param) {
    self->glLighti(static_cast<GLenum>(light), static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_1_4_GlLightfv(QOpenGLFunctions_1_4* self, uint32_t light, uint32_t pname, const float* params) {
    self->glLightfv(static_cast<GLenum>(light), static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlLightf(QOpenGLFunctions_1_4* self, uint32_t light, uint32_t pname, float param) {
    self->glLightf(static_cast<GLenum>(light), static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_1_4_GlFogiv(QOpenGLFunctions_1_4* self, uint32_t pname, const int32_t* params) {
    self->glFogiv(static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_1_4_GlFogi(QOpenGLFunctions_1_4* self, uint32_t pname, int32_t param) {
    self->glFogi(static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_1_4_GlFogfv(QOpenGLFunctions_1_4* self, uint32_t pname, const float* params) {
    self->glFogfv(static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlFogf(QOpenGLFunctions_1_4* self, uint32_t pname, float param) {
    self->glFogf(static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_1_4_GlColorMaterial(QOpenGLFunctions_1_4* self, uint32_t face, uint32_t mode) {
    self->glColorMaterial(static_cast<GLenum>(face), static_cast<GLenum>(mode));
}

void QOpenGLFunctions_1_4_GlClipPlane(QOpenGLFunctions_1_4* self, uint32_t plane, const double* equation) {
    self->glClipPlane(static_cast<GLenum>(plane), static_cast<const GLdouble*>(equation));
}

void QOpenGLFunctions_1_4_GlVertex4sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
    self->glVertex4sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlVertex4s(QOpenGLFunctions_1_4* self, int16_t x, int16_t y, int16_t z, int16_t w) {
    self->glVertex4s(static_cast<GLshort>(x), static_cast<GLshort>(y), static_cast<GLshort>(z), static_cast<GLshort>(w));
}

void QOpenGLFunctions_1_4_GlVertex4iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
    self->glVertex4iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlVertex4i(QOpenGLFunctions_1_4* self, int32_t x, int32_t y, int32_t z, int32_t w) {
    self->glVertex4i(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLint>(z), static_cast<GLint>(w));
}

void QOpenGLFunctions_1_4_GlVertex4fv(QOpenGLFunctions_1_4* self, const float* v) {
    self->glVertex4fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlVertex4f(QOpenGLFunctions_1_4* self, float x, float y, float z, float w) {
    self->glVertex4f(static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z), static_cast<GLfloat>(w));
}

void QOpenGLFunctions_1_4_GlVertex4dv(QOpenGLFunctions_1_4* self, const double* v) {
    self->glVertex4dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlVertex4d(QOpenGLFunctions_1_4* self, double x, double y, double z, double w) {
    self->glVertex4d(static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z), static_cast<GLdouble>(w));
}

void QOpenGLFunctions_1_4_GlVertex3sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
    self->glVertex3sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlVertex3s(QOpenGLFunctions_1_4* self, int16_t x, int16_t y, int16_t z) {
    self->glVertex3s(static_cast<GLshort>(x), static_cast<GLshort>(y), static_cast<GLshort>(z));
}

void QOpenGLFunctions_1_4_GlVertex3iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
    self->glVertex3iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlVertex3i(QOpenGLFunctions_1_4* self, int32_t x, int32_t y, int32_t z) {
    self->glVertex3i(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLint>(z));
}

void QOpenGLFunctions_1_4_GlVertex3fv(QOpenGLFunctions_1_4* self, const float* v) {
    self->glVertex3fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlVertex3f(QOpenGLFunctions_1_4* self, float x, float y, float z) {
    self->glVertex3f(static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLFunctions_1_4_GlVertex3dv(QOpenGLFunctions_1_4* self, const double* v) {
    self->glVertex3dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlVertex3d(QOpenGLFunctions_1_4* self, double x, double y, double z) {
    self->glVertex3d(static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z));
}

void QOpenGLFunctions_1_4_GlVertex2sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
    self->glVertex2sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlVertex2s(QOpenGLFunctions_1_4* self, int16_t x, int16_t y) {
    self->glVertex2s(static_cast<GLshort>(x), static_cast<GLshort>(y));
}

void QOpenGLFunctions_1_4_GlVertex2iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
    self->glVertex2iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlVertex2i(QOpenGLFunctions_1_4* self, int32_t x, int32_t y) {
    self->glVertex2i(static_cast<GLint>(x), static_cast<GLint>(y));
}

void QOpenGLFunctions_1_4_GlVertex2fv(QOpenGLFunctions_1_4* self, const float* v) {
    self->glVertex2fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlVertex2f(QOpenGLFunctions_1_4* self, float x, float y) {
    self->glVertex2f(static_cast<GLfloat>(x), static_cast<GLfloat>(y));
}

void QOpenGLFunctions_1_4_GlVertex2dv(QOpenGLFunctions_1_4* self, const double* v) {
    self->glVertex2dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlVertex2d(QOpenGLFunctions_1_4* self, double x, double y) {
    self->glVertex2d(static_cast<GLdouble>(x), static_cast<GLdouble>(y));
}

void QOpenGLFunctions_1_4_GlTexCoord4sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
    self->glTexCoord4sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlTexCoord4s(QOpenGLFunctions_1_4* self, int16_t s, int16_t t, int16_t r, int16_t q) {
    self->glTexCoord4s(static_cast<GLshort>(s), static_cast<GLshort>(t), static_cast<GLshort>(r), static_cast<GLshort>(q));
}

void QOpenGLFunctions_1_4_GlTexCoord4iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
    self->glTexCoord4iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlTexCoord4i(QOpenGLFunctions_1_4* self, int32_t s, int32_t t, int32_t r, int32_t q) {
    self->glTexCoord4i(static_cast<GLint>(s), static_cast<GLint>(t), static_cast<GLint>(r), static_cast<GLint>(q));
}

void QOpenGLFunctions_1_4_GlTexCoord4fv(QOpenGLFunctions_1_4* self, const float* v) {
    self->glTexCoord4fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlTexCoord4f(QOpenGLFunctions_1_4* self, float s, float t, float r, float q) {
    self->glTexCoord4f(static_cast<GLfloat>(s), static_cast<GLfloat>(t), static_cast<GLfloat>(r), static_cast<GLfloat>(q));
}

void QOpenGLFunctions_1_4_GlTexCoord4dv(QOpenGLFunctions_1_4* self, const double* v) {
    self->glTexCoord4dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlTexCoord4d(QOpenGLFunctions_1_4* self, double s, double t, double r, double q) {
    self->glTexCoord4d(static_cast<GLdouble>(s), static_cast<GLdouble>(t), static_cast<GLdouble>(r), static_cast<GLdouble>(q));
}

void QOpenGLFunctions_1_4_GlTexCoord3sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
    self->glTexCoord3sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlTexCoord3s(QOpenGLFunctions_1_4* self, int16_t s, int16_t t, int16_t r) {
    self->glTexCoord3s(static_cast<GLshort>(s), static_cast<GLshort>(t), static_cast<GLshort>(r));
}

void QOpenGLFunctions_1_4_GlTexCoord3iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
    self->glTexCoord3iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlTexCoord3i(QOpenGLFunctions_1_4* self, int32_t s, int32_t t, int32_t r) {
    self->glTexCoord3i(static_cast<GLint>(s), static_cast<GLint>(t), static_cast<GLint>(r));
}

void QOpenGLFunctions_1_4_GlTexCoord3fv(QOpenGLFunctions_1_4* self, const float* v) {
    self->glTexCoord3fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlTexCoord3f(QOpenGLFunctions_1_4* self, float s, float t, float r) {
    self->glTexCoord3f(static_cast<GLfloat>(s), static_cast<GLfloat>(t), static_cast<GLfloat>(r));
}

void QOpenGLFunctions_1_4_GlTexCoord3dv(QOpenGLFunctions_1_4* self, const double* v) {
    self->glTexCoord3dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlTexCoord3d(QOpenGLFunctions_1_4* self, double s, double t, double r) {
    self->glTexCoord3d(static_cast<GLdouble>(s), static_cast<GLdouble>(t), static_cast<GLdouble>(r));
}

void QOpenGLFunctions_1_4_GlTexCoord2sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
    self->glTexCoord2sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlTexCoord2s(QOpenGLFunctions_1_4* self, int16_t s, int16_t t) {
    self->glTexCoord2s(static_cast<GLshort>(s), static_cast<GLshort>(t));
}

void QOpenGLFunctions_1_4_GlTexCoord2iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
    self->glTexCoord2iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlTexCoord2i(QOpenGLFunctions_1_4* self, int32_t s, int32_t t) {
    self->glTexCoord2i(static_cast<GLint>(s), static_cast<GLint>(t));
}

void QOpenGLFunctions_1_4_GlTexCoord2fv(QOpenGLFunctions_1_4* self, const float* v) {
    self->glTexCoord2fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlTexCoord2f(QOpenGLFunctions_1_4* self, float s, float t) {
    self->glTexCoord2f(static_cast<GLfloat>(s), static_cast<GLfloat>(t));
}

void QOpenGLFunctions_1_4_GlTexCoord2dv(QOpenGLFunctions_1_4* self, const double* v) {
    self->glTexCoord2dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlTexCoord2d(QOpenGLFunctions_1_4* self, double s, double t) {
    self->glTexCoord2d(static_cast<GLdouble>(s), static_cast<GLdouble>(t));
}

void QOpenGLFunctions_1_4_GlTexCoord1sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
    self->glTexCoord1sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlTexCoord1s(QOpenGLFunctions_1_4* self, int16_t s) {
    self->glTexCoord1s(static_cast<GLshort>(s));
}

void QOpenGLFunctions_1_4_GlTexCoord1iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
    self->glTexCoord1iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlTexCoord1i(QOpenGLFunctions_1_4* self, int32_t s) {
    self->glTexCoord1i(static_cast<GLint>(s));
}

void QOpenGLFunctions_1_4_GlTexCoord1fv(QOpenGLFunctions_1_4* self, const float* v) {
    self->glTexCoord1fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlTexCoord1f(QOpenGLFunctions_1_4* self, float s) {
    self->glTexCoord1f(static_cast<GLfloat>(s));
}

void QOpenGLFunctions_1_4_GlTexCoord1dv(QOpenGLFunctions_1_4* self, const double* v) {
    self->glTexCoord1dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlTexCoord1d(QOpenGLFunctions_1_4* self, double s) {
    self->glTexCoord1d(static_cast<GLdouble>(s));
}

void QOpenGLFunctions_1_4_GlRectsv(QOpenGLFunctions_1_4* self, const int16_t* v1, const int16_t* v2) {
    self->glRectsv(static_cast<const GLshort*>(v1), static_cast<const GLshort*>(v2));
}

void QOpenGLFunctions_1_4_GlRects(QOpenGLFunctions_1_4* self, int16_t x1, int16_t y1, int16_t x2, int16_t y2) {
    self->glRects(static_cast<GLshort>(x1), static_cast<GLshort>(y1), static_cast<GLshort>(x2), static_cast<GLshort>(y2));
}

void QOpenGLFunctions_1_4_GlRectiv(QOpenGLFunctions_1_4* self, const int32_t* v1, const int32_t* v2) {
    self->glRectiv(static_cast<const GLint*>(v1), static_cast<const GLint*>(v2));
}

void QOpenGLFunctions_1_4_GlRecti(QOpenGLFunctions_1_4* self, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
    self->glRecti(static_cast<GLint>(x1), static_cast<GLint>(y1), static_cast<GLint>(x2), static_cast<GLint>(y2));
}

void QOpenGLFunctions_1_4_GlRectfv(QOpenGLFunctions_1_4* self, const float* v1, const float* v2) {
    self->glRectfv(static_cast<const GLfloat*>(v1), static_cast<const GLfloat*>(v2));
}

void QOpenGLFunctions_1_4_GlRectf(QOpenGLFunctions_1_4* self, float x1, float y1, float x2, float y2) {
    self->glRectf(static_cast<GLfloat>(x1), static_cast<GLfloat>(y1), static_cast<GLfloat>(x2), static_cast<GLfloat>(y2));
}

void QOpenGLFunctions_1_4_GlRectdv(QOpenGLFunctions_1_4* self, const double* v1, const double* v2) {
    self->glRectdv(static_cast<const GLdouble*>(v1), static_cast<const GLdouble*>(v2));
}

void QOpenGLFunctions_1_4_GlRectd(QOpenGLFunctions_1_4* self, double x1, double y1, double x2, double y2) {
    self->glRectd(static_cast<GLdouble>(x1), static_cast<GLdouble>(y1), static_cast<GLdouble>(x2), static_cast<GLdouble>(y2));
}

void QOpenGLFunctions_1_4_GlRasterPos4sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
    self->glRasterPos4sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlRasterPos4s(QOpenGLFunctions_1_4* self, int16_t x, int16_t y, int16_t z, int16_t w) {
    self->glRasterPos4s(static_cast<GLshort>(x), static_cast<GLshort>(y), static_cast<GLshort>(z), static_cast<GLshort>(w));
}

void QOpenGLFunctions_1_4_GlRasterPos4iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
    self->glRasterPos4iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlRasterPos4i(QOpenGLFunctions_1_4* self, int32_t x, int32_t y, int32_t z, int32_t w) {
    self->glRasterPos4i(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLint>(z), static_cast<GLint>(w));
}

void QOpenGLFunctions_1_4_GlRasterPos4fv(QOpenGLFunctions_1_4* self, const float* v) {
    self->glRasterPos4fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlRasterPos4f(QOpenGLFunctions_1_4* self, float x, float y, float z, float w) {
    self->glRasterPos4f(static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z), static_cast<GLfloat>(w));
}

void QOpenGLFunctions_1_4_GlRasterPos4dv(QOpenGLFunctions_1_4* self, const double* v) {
    self->glRasterPos4dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlRasterPos4d(QOpenGLFunctions_1_4* self, double x, double y, double z, double w) {
    self->glRasterPos4d(static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z), static_cast<GLdouble>(w));
}

void QOpenGLFunctions_1_4_GlRasterPos3sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
    self->glRasterPos3sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlRasterPos3s(QOpenGLFunctions_1_4* self, int16_t x, int16_t y, int16_t z) {
    self->glRasterPos3s(static_cast<GLshort>(x), static_cast<GLshort>(y), static_cast<GLshort>(z));
}

void QOpenGLFunctions_1_4_GlRasterPos3iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
    self->glRasterPos3iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlRasterPos3i(QOpenGLFunctions_1_4* self, int32_t x, int32_t y, int32_t z) {
    self->glRasterPos3i(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLint>(z));
}

void QOpenGLFunctions_1_4_GlRasterPos3fv(QOpenGLFunctions_1_4* self, const float* v) {
    self->glRasterPos3fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlRasterPos3f(QOpenGLFunctions_1_4* self, float x, float y, float z) {
    self->glRasterPos3f(static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLFunctions_1_4_GlRasterPos3dv(QOpenGLFunctions_1_4* self, const double* v) {
    self->glRasterPos3dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlRasterPos3d(QOpenGLFunctions_1_4* self, double x, double y, double z) {
    self->glRasterPos3d(static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z));
}

void QOpenGLFunctions_1_4_GlRasterPos2sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
    self->glRasterPos2sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlRasterPos2s(QOpenGLFunctions_1_4* self, int16_t x, int16_t y) {
    self->glRasterPos2s(static_cast<GLshort>(x), static_cast<GLshort>(y));
}

void QOpenGLFunctions_1_4_GlRasterPos2iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
    self->glRasterPos2iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlRasterPos2i(QOpenGLFunctions_1_4* self, int32_t x, int32_t y) {
    self->glRasterPos2i(static_cast<GLint>(x), static_cast<GLint>(y));
}

void QOpenGLFunctions_1_4_GlRasterPos2fv(QOpenGLFunctions_1_4* self, const float* v) {
    self->glRasterPos2fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlRasterPos2f(QOpenGLFunctions_1_4* self, float x, float y) {
    self->glRasterPos2f(static_cast<GLfloat>(x), static_cast<GLfloat>(y));
}

void QOpenGLFunctions_1_4_GlRasterPos2dv(QOpenGLFunctions_1_4* self, const double* v) {
    self->glRasterPos2dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlRasterPos2d(QOpenGLFunctions_1_4* self, double x, double y) {
    self->glRasterPos2d(static_cast<GLdouble>(x), static_cast<GLdouble>(y));
}

void QOpenGLFunctions_1_4_GlNormal3sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
    self->glNormal3sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlNormal3s(QOpenGLFunctions_1_4* self, int16_t nx, int16_t ny, int16_t nz) {
    self->glNormal3s(static_cast<GLshort>(nx), static_cast<GLshort>(ny), static_cast<GLshort>(nz));
}

void QOpenGLFunctions_1_4_GlNormal3iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
    self->glNormal3iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlNormal3i(QOpenGLFunctions_1_4* self, int32_t nx, int32_t ny, int32_t nz) {
    self->glNormal3i(static_cast<GLint>(nx), static_cast<GLint>(ny), static_cast<GLint>(nz));
}

void QOpenGLFunctions_1_4_GlNormal3fv(QOpenGLFunctions_1_4* self, const float* v) {
    self->glNormal3fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlNormal3f(QOpenGLFunctions_1_4* self, float nx, float ny, float nz) {
    self->glNormal3f(static_cast<GLfloat>(nx), static_cast<GLfloat>(ny), static_cast<GLfloat>(nz));
}

void QOpenGLFunctions_1_4_GlNormal3dv(QOpenGLFunctions_1_4* self, const double* v) {
    self->glNormal3dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlNormal3d(QOpenGLFunctions_1_4* self, double nx, double ny, double nz) {
    self->glNormal3d(static_cast<GLdouble>(nx), static_cast<GLdouble>(ny), static_cast<GLdouble>(nz));
}

void QOpenGLFunctions_1_4_GlNormal3bv(QOpenGLFunctions_1_4* self, const signed char* v) {
    self->glNormal3bv(static_cast<const GLbyte*>(v));
}

void QOpenGLFunctions_1_4_GlNormal3b(QOpenGLFunctions_1_4* self, signed char nx, signed char ny, signed char nz) {
    self->glNormal3b(static_cast<GLbyte>(nx), static_cast<GLbyte>(ny), static_cast<GLbyte>(nz));
}

void QOpenGLFunctions_1_4_GlIndexsv(QOpenGLFunctions_1_4* self, const int16_t* c) {
    self->glIndexsv(static_cast<const GLshort*>(c));
}

void QOpenGLFunctions_1_4_GlIndexs(QOpenGLFunctions_1_4* self, int16_t c) {
    self->glIndexs(static_cast<GLshort>(c));
}

void QOpenGLFunctions_1_4_GlIndexiv(QOpenGLFunctions_1_4* self, const int32_t* c) {
    self->glIndexiv(static_cast<const GLint*>(c));
}

void QOpenGLFunctions_1_4_GlIndexi(QOpenGLFunctions_1_4* self, int32_t c) {
    self->glIndexi(static_cast<GLint>(c));
}

void QOpenGLFunctions_1_4_GlIndexfv(QOpenGLFunctions_1_4* self, const float* c) {
    self->glIndexfv(static_cast<const GLfloat*>(c));
}

void QOpenGLFunctions_1_4_GlIndexf(QOpenGLFunctions_1_4* self, float c) {
    self->glIndexf(static_cast<GLfloat>(c));
}

void QOpenGLFunctions_1_4_GlIndexdv(QOpenGLFunctions_1_4* self, const double* c) {
    self->glIndexdv(static_cast<const GLdouble*>(c));
}

void QOpenGLFunctions_1_4_GlIndexd(QOpenGLFunctions_1_4* self, double c) {
    self->glIndexd(static_cast<GLdouble>(c));
}

void QOpenGLFunctions_1_4_GlEnd(QOpenGLFunctions_1_4* self) {
    self->glEnd();
}

void QOpenGLFunctions_1_4_GlEdgeFlagv(QOpenGLFunctions_1_4* self, const unsigned char* flag) {
    self->glEdgeFlagv(static_cast<const GLboolean*>(flag));
}

void QOpenGLFunctions_1_4_GlEdgeFlag(QOpenGLFunctions_1_4* self, unsigned char flag) {
    self->glEdgeFlag(static_cast<GLboolean>(flag));
}

void QOpenGLFunctions_1_4_GlColor4usv(QOpenGLFunctions_1_4* self, const uint16_t* v) {
    self->glColor4usv(static_cast<const GLushort*>(v));
}

void QOpenGLFunctions_1_4_GlColor4us(QOpenGLFunctions_1_4* self, uint16_t red, uint16_t green, uint16_t blue, uint16_t alpha) {
    self->glColor4us(static_cast<GLushort>(red), static_cast<GLushort>(green), static_cast<GLushort>(blue), static_cast<GLushort>(alpha));
}

void QOpenGLFunctions_1_4_GlColor4uiv(QOpenGLFunctions_1_4* self, const uint32_t* v) {
    self->glColor4uiv(static_cast<const GLuint*>(v));
}

void QOpenGLFunctions_1_4_GlColor4ui(QOpenGLFunctions_1_4* self, uint32_t red, uint32_t green, uint32_t blue, uint32_t alpha) {
    self->glColor4ui(static_cast<GLuint>(red), static_cast<GLuint>(green), static_cast<GLuint>(blue), static_cast<GLuint>(alpha));
}

void QOpenGLFunctions_1_4_GlColor4ubv(QOpenGLFunctions_1_4* self, const uint8_t* v) {
    self->glColor4ubv(static_cast<const GLubyte*>(v));
}

void QOpenGLFunctions_1_4_GlColor4ub(QOpenGLFunctions_1_4* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
    self->glColor4ub(static_cast<GLubyte>(red), static_cast<GLubyte>(green), static_cast<GLubyte>(blue), static_cast<GLubyte>(alpha));
}

void QOpenGLFunctions_1_4_GlColor4sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
    self->glColor4sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlColor4s(QOpenGLFunctions_1_4* self, int16_t red, int16_t green, int16_t blue, int16_t alpha) {
    self->glColor4s(static_cast<GLshort>(red), static_cast<GLshort>(green), static_cast<GLshort>(blue), static_cast<GLshort>(alpha));
}

void QOpenGLFunctions_1_4_GlColor4iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
    self->glColor4iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlColor4i(QOpenGLFunctions_1_4* self, int32_t red, int32_t green, int32_t blue, int32_t alpha) {
    self->glColor4i(static_cast<GLint>(red), static_cast<GLint>(green), static_cast<GLint>(blue), static_cast<GLint>(alpha));
}

void QOpenGLFunctions_1_4_GlColor4fv(QOpenGLFunctions_1_4* self, const float* v) {
    self->glColor4fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlColor4f(QOpenGLFunctions_1_4* self, float red, float green, float blue, float alpha) {
    self->glColor4f(static_cast<GLfloat>(red), static_cast<GLfloat>(green), static_cast<GLfloat>(blue), static_cast<GLfloat>(alpha));
}

void QOpenGLFunctions_1_4_GlColor4dv(QOpenGLFunctions_1_4* self, const double* v) {
    self->glColor4dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlColor4d(QOpenGLFunctions_1_4* self, double red, double green, double blue, double alpha) {
    self->glColor4d(static_cast<GLdouble>(red), static_cast<GLdouble>(green), static_cast<GLdouble>(blue), static_cast<GLdouble>(alpha));
}

void QOpenGLFunctions_1_4_GlColor4bv(QOpenGLFunctions_1_4* self, const signed char* v) {
    self->glColor4bv(static_cast<const GLbyte*>(v));
}

void QOpenGLFunctions_1_4_GlColor4b(QOpenGLFunctions_1_4* self, signed char red, signed char green, signed char blue, signed char alpha) {
    self->glColor4b(static_cast<GLbyte>(red), static_cast<GLbyte>(green), static_cast<GLbyte>(blue), static_cast<GLbyte>(alpha));
}

void QOpenGLFunctions_1_4_GlColor3usv(QOpenGLFunctions_1_4* self, const uint16_t* v) {
    self->glColor3usv(static_cast<const GLushort*>(v));
}

void QOpenGLFunctions_1_4_GlColor3us(QOpenGLFunctions_1_4* self, uint16_t red, uint16_t green, uint16_t blue) {
    self->glColor3us(static_cast<GLushort>(red), static_cast<GLushort>(green), static_cast<GLushort>(blue));
}

void QOpenGLFunctions_1_4_GlColor3uiv(QOpenGLFunctions_1_4* self, const uint32_t* v) {
    self->glColor3uiv(static_cast<const GLuint*>(v));
}

void QOpenGLFunctions_1_4_GlColor3ui(QOpenGLFunctions_1_4* self, uint32_t red, uint32_t green, uint32_t blue) {
    self->glColor3ui(static_cast<GLuint>(red), static_cast<GLuint>(green), static_cast<GLuint>(blue));
}

void QOpenGLFunctions_1_4_GlColor3ubv(QOpenGLFunctions_1_4* self, const uint8_t* v) {
    self->glColor3ubv(static_cast<const GLubyte*>(v));
}

void QOpenGLFunctions_1_4_GlColor3ub(QOpenGLFunctions_1_4* self, uint8_t red, uint8_t green, uint8_t blue) {
    self->glColor3ub(static_cast<GLubyte>(red), static_cast<GLubyte>(green), static_cast<GLubyte>(blue));
}

void QOpenGLFunctions_1_4_GlColor3sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
    self->glColor3sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlColor3s(QOpenGLFunctions_1_4* self, int16_t red, int16_t green, int16_t blue) {
    self->glColor3s(static_cast<GLshort>(red), static_cast<GLshort>(green), static_cast<GLshort>(blue));
}

void QOpenGLFunctions_1_4_GlColor3iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
    self->glColor3iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlColor3i(QOpenGLFunctions_1_4* self, int32_t red, int32_t green, int32_t blue) {
    self->glColor3i(static_cast<GLint>(red), static_cast<GLint>(green), static_cast<GLint>(blue));
}

void QOpenGLFunctions_1_4_GlColor3fv(QOpenGLFunctions_1_4* self, const float* v) {
    self->glColor3fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlColor3f(QOpenGLFunctions_1_4* self, float red, float green, float blue) {
    self->glColor3f(static_cast<GLfloat>(red), static_cast<GLfloat>(green), static_cast<GLfloat>(blue));
}

void QOpenGLFunctions_1_4_GlColor3dv(QOpenGLFunctions_1_4* self, const double* v) {
    self->glColor3dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlColor3d(QOpenGLFunctions_1_4* self, double red, double green, double blue) {
    self->glColor3d(static_cast<GLdouble>(red), static_cast<GLdouble>(green), static_cast<GLdouble>(blue));
}

void QOpenGLFunctions_1_4_GlColor3bv(QOpenGLFunctions_1_4* self, const signed char* v) {
    self->glColor3bv(static_cast<const GLbyte*>(v));
}

void QOpenGLFunctions_1_4_GlColor3b(QOpenGLFunctions_1_4* self, signed char red, signed char green, signed char blue) {
    self->glColor3b(static_cast<GLbyte>(red), static_cast<GLbyte>(green), static_cast<GLbyte>(blue));
}

void QOpenGLFunctions_1_4_GlBitmap(QOpenGLFunctions_1_4* self, int32_t width, int32_t height, float xorig, float yorig, float xmove, float ymove, const uint8_t* bitmap) {
    self->glBitmap(static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLfloat>(xorig), static_cast<GLfloat>(yorig), static_cast<GLfloat>(xmove), static_cast<GLfloat>(ymove), static_cast<const GLubyte*>(bitmap));
}

void QOpenGLFunctions_1_4_GlBegin(QOpenGLFunctions_1_4* self, uint32_t mode) {
    self->glBegin(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_1_4_GlListBase(QOpenGLFunctions_1_4* self, uint32_t base) {
    self->glListBase(static_cast<GLuint>(base));
}

uint32_t QOpenGLFunctions_1_4_GlGenLists(QOpenGLFunctions_1_4* self, int32_t range) {
    return self->glGenLists(static_cast<GLsizei>(range));
}

void QOpenGLFunctions_1_4_GlDeleteLists(QOpenGLFunctions_1_4* self, uint32_t list, int32_t range) {
    self->glDeleteLists(static_cast<GLuint>(list), static_cast<GLsizei>(range));
}

void QOpenGLFunctions_1_4_GlCallLists(QOpenGLFunctions_1_4* self, int32_t n, uint32_t typeVal, const void* lists) {
    self->glCallLists(static_cast<GLsizei>(n), static_cast<GLenum>(typeVal), lists);
}

void QOpenGLFunctions_1_4_GlCallList(QOpenGLFunctions_1_4* self, uint32_t list) {
    self->glCallList(static_cast<GLuint>(list));
}

void QOpenGLFunctions_1_4_GlEndList(QOpenGLFunctions_1_4* self) {
    self->glEndList();
}

void QOpenGLFunctions_1_4_GlNewList(QOpenGLFunctions_1_4* self, uint32_t list, uint32_t mode) {
    self->glNewList(static_cast<GLuint>(list), static_cast<GLenum>(mode));
}

void QOpenGLFunctions_1_4_GlPushClientAttrib(QOpenGLFunctions_1_4* self, uint32_t mask) {
    self->glPushClientAttrib(static_cast<GLbitfield>(mask));
}

void QOpenGLFunctions_1_4_GlPopClientAttrib(QOpenGLFunctions_1_4* self) {
    self->glPopClientAttrib();
}

void QOpenGLFunctions_1_4_GlPrioritizeTextures(QOpenGLFunctions_1_4* self, int32_t n, const uint32_t* textures, const float* priorities) {
    self->glPrioritizeTextures(static_cast<GLsizei>(n), static_cast<const GLuint*>(textures), static_cast<const GLfloat*>(priorities));
}

unsigned char QOpenGLFunctions_1_4_GlAreTexturesResident(QOpenGLFunctions_1_4* self, int32_t n, const uint32_t* textures, unsigned char* residences) {
    return self->glAreTexturesResident(static_cast<GLsizei>(n), static_cast<const GLuint*>(textures), static_cast<GLboolean*>(residences));
}

void QOpenGLFunctions_1_4_GlVertexPointer(QOpenGLFunctions_1_4* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
    self->glVertexPointer(static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_1_4_GlTexCoordPointer(QOpenGLFunctions_1_4* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
    self->glTexCoordPointer(static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_1_4_GlNormalPointer(QOpenGLFunctions_1_4* self, uint32_t typeVal, int32_t stride, const void* pointer) {
    self->glNormalPointer(static_cast<GLenum>(typeVal), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_1_4_GlInterleavedArrays(QOpenGLFunctions_1_4* self, uint32_t format, int32_t stride, const void* pointer) {
    self->glInterleavedArrays(static_cast<GLenum>(format), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_1_4_GlIndexPointer(QOpenGLFunctions_1_4* self, uint32_t typeVal, int32_t stride, const void* pointer) {
    self->glIndexPointer(static_cast<GLenum>(typeVal), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_1_4_GlEnableClientState(QOpenGLFunctions_1_4* self, uint32_t array) {
    self->glEnableClientState(static_cast<GLenum>(array));
}

void QOpenGLFunctions_1_4_GlEdgeFlagPointer(QOpenGLFunctions_1_4* self, int32_t stride, const void* pointer) {
    self->glEdgeFlagPointer(static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_1_4_GlDisableClientState(QOpenGLFunctions_1_4* self, uint32_t array) {
    self->glDisableClientState(static_cast<GLenum>(array));
}

void QOpenGLFunctions_1_4_GlColorPointer(QOpenGLFunctions_1_4* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
    self->glColorPointer(static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_1_4_GlArrayElement(QOpenGLFunctions_1_4* self, int32_t i) {
    self->glArrayElement(static_cast<GLint>(i));
}

void QOpenGLFunctions_1_4_GlResetMinmax(QOpenGLFunctions_1_4* self, uint32_t target) {
    self->glResetMinmax(static_cast<GLenum>(target));
}

void QOpenGLFunctions_1_4_GlResetHistogram(QOpenGLFunctions_1_4* self, uint32_t target) {
    self->glResetHistogram(static_cast<GLenum>(target));
}

void QOpenGLFunctions_1_4_GlMinmax(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t internalformat, unsigned char sink) {
    self->glMinmax(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLboolean>(sink));
}

void QOpenGLFunctions_1_4_GlHistogram(QOpenGLFunctions_1_4* self, uint32_t target, int32_t width, uint32_t internalformat, unsigned char sink) {
    self->glHistogram(static_cast<GLenum>(target), static_cast<GLsizei>(width), static_cast<GLenum>(internalformat), static_cast<GLboolean>(sink));
}

void QOpenGLFunctions_1_4_GlGetMinmaxParameteriv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetMinmaxParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_1_4_GlGetMinmaxParameterfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, float* params) {
    self->glGetMinmaxParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlGetMinmax(QOpenGLFunctions_1_4* self, uint32_t target, unsigned char reset, uint32_t format, uint32_t typeVal, void* values) {
    self->glGetMinmax(static_cast<GLenum>(target), static_cast<GLboolean>(reset), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), values);
}

void QOpenGLFunctions_1_4_GlGetHistogramParameteriv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetHistogramParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_1_4_GlGetHistogramParameterfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, float* params) {
    self->glGetHistogramParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlGetHistogram(QOpenGLFunctions_1_4* self, uint32_t target, unsigned char reset, uint32_t format, uint32_t typeVal, void* values) {
    self->glGetHistogram(static_cast<GLenum>(target), static_cast<GLboolean>(reset), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), values);
}

void QOpenGLFunctions_1_4_GlSeparableFilter2D(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* row, const void* column) {
    self->glSeparableFilter2D(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), row, column);
}

void QOpenGLFunctions_1_4_GlGetSeparableFilter(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t format, uint32_t typeVal, void* row, void* column, void* span) {
    self->glGetSeparableFilter(static_cast<GLenum>(target), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), row, column, span);
}

void QOpenGLFunctions_1_4_GlGetConvolutionParameteriv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetConvolutionParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_1_4_GlGetConvolutionParameterfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, float* params) {
    self->glGetConvolutionParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlGetConvolutionFilter(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t format, uint32_t typeVal, void* image) {
    self->glGetConvolutionFilter(static_cast<GLenum>(target), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), image);
}

void QOpenGLFunctions_1_4_GlCopyConvolutionFilter2D(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glCopyConvolutionFilter2D(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_1_4_GlCopyConvolutionFilter1D(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width) {
    self->glCopyConvolutionFilter1D(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width));
}

void QOpenGLFunctions_1_4_GlConvolutionParameteriv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, const int32_t* params) {
    self->glConvolutionParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_1_4_GlConvolutionParameteri(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, int32_t params) {
    self->glConvolutionParameteri(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint>(params));
}

void QOpenGLFunctions_1_4_GlConvolutionParameterfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, const float* params) {
    self->glConvolutionParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlConvolutionParameterf(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, float params) {
    self->glConvolutionParameterf(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat>(params));
}

void QOpenGLFunctions_1_4_GlConvolutionFilter2D(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* image) {
    self->glConvolutionFilter2D(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), image);
}

void QOpenGLFunctions_1_4_GlConvolutionFilter1D(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t internalformat, int32_t width, uint32_t format, uint32_t typeVal, const void* image) {
    self->glConvolutionFilter1D(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), image);
}

void QOpenGLFunctions_1_4_GlCopyColorSubTable(QOpenGLFunctions_1_4* self, uint32_t target, int32_t start, int32_t x, int32_t y, int32_t width) {
    self->glCopyColorSubTable(static_cast<GLenum>(target), static_cast<GLsizei>(start), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width));
}

void QOpenGLFunctions_1_4_GlColorSubTable(QOpenGLFunctions_1_4* self, uint32_t target, int32_t start, int32_t count, uint32_t format, uint32_t typeVal, const void* data) {
    self->glColorSubTable(static_cast<GLenum>(target), static_cast<GLsizei>(start), static_cast<GLsizei>(count), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), data);
}

void QOpenGLFunctions_1_4_GlGetColorTableParameteriv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetColorTableParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_1_4_GlGetColorTableParameterfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, float* params) {
    self->glGetColorTableParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlGetColorTable(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t format, uint32_t typeVal, void* table) {
    self->glGetColorTable(static_cast<GLenum>(target), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), table);
}

void QOpenGLFunctions_1_4_GlCopyColorTable(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width) {
    self->glCopyColorTable(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width));
}

void QOpenGLFunctions_1_4_GlColorTableParameteriv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, const int32_t* params) {
    self->glColorTableParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_1_4_GlColorTableParameterfv(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t pname, const float* params) {
    self->glColorTableParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_1_4_GlColorTable(QOpenGLFunctions_1_4* self, uint32_t target, uint32_t internalformat, int32_t width, uint32_t format, uint32_t typeVal, const void* table) {
    self->glColorTable(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), table);
}

void QOpenGLFunctions_1_4_GlMultTransposeMatrixd(QOpenGLFunctions_1_4* self, const double* m) {
    self->glMultTransposeMatrixd(static_cast<const GLdouble*>(m));
}

void QOpenGLFunctions_1_4_GlMultTransposeMatrixf(QOpenGLFunctions_1_4* self, const float* m) {
    self->glMultTransposeMatrixf(static_cast<const GLfloat*>(m));
}

void QOpenGLFunctions_1_4_GlLoadTransposeMatrixd(QOpenGLFunctions_1_4* self, const double* m) {
    self->glLoadTransposeMatrixd(static_cast<const GLdouble*>(m));
}

void QOpenGLFunctions_1_4_GlLoadTransposeMatrixf(QOpenGLFunctions_1_4* self, const float* m) {
    self->glLoadTransposeMatrixf(static_cast<const GLfloat*>(m));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord4sv(QOpenGLFunctions_1_4* self, uint32_t target, const int16_t* v) {
    self->glMultiTexCoord4sv(static_cast<GLenum>(target), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord4s(QOpenGLFunctions_1_4* self, uint32_t target, int16_t s, int16_t t, int16_t r, int16_t q) {
    self->glMultiTexCoord4s(static_cast<GLenum>(target), static_cast<GLshort>(s), static_cast<GLshort>(t), static_cast<GLshort>(r), static_cast<GLshort>(q));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord4iv(QOpenGLFunctions_1_4* self, uint32_t target, const int32_t* v) {
    self->glMultiTexCoord4iv(static_cast<GLenum>(target), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord4i(QOpenGLFunctions_1_4* self, uint32_t target, int32_t s, int32_t t, int32_t r, int32_t q) {
    self->glMultiTexCoord4i(static_cast<GLenum>(target), static_cast<GLint>(s), static_cast<GLint>(t), static_cast<GLint>(r), static_cast<GLint>(q));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord4fv(QOpenGLFunctions_1_4* self, uint32_t target, const float* v) {
    self->glMultiTexCoord4fv(static_cast<GLenum>(target), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord4f(QOpenGLFunctions_1_4* self, uint32_t target, float s, float t, float r, float q) {
    self->glMultiTexCoord4f(static_cast<GLenum>(target), static_cast<GLfloat>(s), static_cast<GLfloat>(t), static_cast<GLfloat>(r), static_cast<GLfloat>(q));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord4dv(QOpenGLFunctions_1_4* self, uint32_t target, const double* v) {
    self->glMultiTexCoord4dv(static_cast<GLenum>(target), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord4d(QOpenGLFunctions_1_4* self, uint32_t target, double s, double t, double r, double q) {
    self->glMultiTexCoord4d(static_cast<GLenum>(target), static_cast<GLdouble>(s), static_cast<GLdouble>(t), static_cast<GLdouble>(r), static_cast<GLdouble>(q));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord3sv(QOpenGLFunctions_1_4* self, uint32_t target, const int16_t* v) {
    self->glMultiTexCoord3sv(static_cast<GLenum>(target), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord3s(QOpenGLFunctions_1_4* self, uint32_t target, int16_t s, int16_t t, int16_t r) {
    self->glMultiTexCoord3s(static_cast<GLenum>(target), static_cast<GLshort>(s), static_cast<GLshort>(t), static_cast<GLshort>(r));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord3iv(QOpenGLFunctions_1_4* self, uint32_t target, const int32_t* v) {
    self->glMultiTexCoord3iv(static_cast<GLenum>(target), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord3i(QOpenGLFunctions_1_4* self, uint32_t target, int32_t s, int32_t t, int32_t r) {
    self->glMultiTexCoord3i(static_cast<GLenum>(target), static_cast<GLint>(s), static_cast<GLint>(t), static_cast<GLint>(r));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord3fv(QOpenGLFunctions_1_4* self, uint32_t target, const float* v) {
    self->glMultiTexCoord3fv(static_cast<GLenum>(target), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord3f(QOpenGLFunctions_1_4* self, uint32_t target, float s, float t, float r) {
    self->glMultiTexCoord3f(static_cast<GLenum>(target), static_cast<GLfloat>(s), static_cast<GLfloat>(t), static_cast<GLfloat>(r));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord3dv(QOpenGLFunctions_1_4* self, uint32_t target, const double* v) {
    self->glMultiTexCoord3dv(static_cast<GLenum>(target), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord3d(QOpenGLFunctions_1_4* self, uint32_t target, double s, double t, double r) {
    self->glMultiTexCoord3d(static_cast<GLenum>(target), static_cast<GLdouble>(s), static_cast<GLdouble>(t), static_cast<GLdouble>(r));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord2sv(QOpenGLFunctions_1_4* self, uint32_t target, const int16_t* v) {
    self->glMultiTexCoord2sv(static_cast<GLenum>(target), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord2s(QOpenGLFunctions_1_4* self, uint32_t target, int16_t s, int16_t t) {
    self->glMultiTexCoord2s(static_cast<GLenum>(target), static_cast<GLshort>(s), static_cast<GLshort>(t));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord2iv(QOpenGLFunctions_1_4* self, uint32_t target, const int32_t* v) {
    self->glMultiTexCoord2iv(static_cast<GLenum>(target), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord2i(QOpenGLFunctions_1_4* self, uint32_t target, int32_t s, int32_t t) {
    self->glMultiTexCoord2i(static_cast<GLenum>(target), static_cast<GLint>(s), static_cast<GLint>(t));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord2fv(QOpenGLFunctions_1_4* self, uint32_t target, const float* v) {
    self->glMultiTexCoord2fv(static_cast<GLenum>(target), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord2f(QOpenGLFunctions_1_4* self, uint32_t target, float s, float t) {
    self->glMultiTexCoord2f(static_cast<GLenum>(target), static_cast<GLfloat>(s), static_cast<GLfloat>(t));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord2dv(QOpenGLFunctions_1_4* self, uint32_t target, const double* v) {
    self->glMultiTexCoord2dv(static_cast<GLenum>(target), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord2d(QOpenGLFunctions_1_4* self, uint32_t target, double s, double t) {
    self->glMultiTexCoord2d(static_cast<GLenum>(target), static_cast<GLdouble>(s), static_cast<GLdouble>(t));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord1sv(QOpenGLFunctions_1_4* self, uint32_t target, const int16_t* v) {
    self->glMultiTexCoord1sv(static_cast<GLenum>(target), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord1s(QOpenGLFunctions_1_4* self, uint32_t target, int16_t s) {
    self->glMultiTexCoord1s(static_cast<GLenum>(target), static_cast<GLshort>(s));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord1iv(QOpenGLFunctions_1_4* self, uint32_t target, const int32_t* v) {
    self->glMultiTexCoord1iv(static_cast<GLenum>(target), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord1i(QOpenGLFunctions_1_4* self, uint32_t target, int32_t s) {
    self->glMultiTexCoord1i(static_cast<GLenum>(target), static_cast<GLint>(s));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord1fv(QOpenGLFunctions_1_4* self, uint32_t target, const float* v) {
    self->glMultiTexCoord1fv(static_cast<GLenum>(target), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord1f(QOpenGLFunctions_1_4* self, uint32_t target, float s) {
    self->glMultiTexCoord1f(static_cast<GLenum>(target), static_cast<GLfloat>(s));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord1dv(QOpenGLFunctions_1_4* self, uint32_t target, const double* v) {
    self->glMultiTexCoord1dv(static_cast<GLenum>(target), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlMultiTexCoord1d(QOpenGLFunctions_1_4* self, uint32_t target, double s) {
    self->glMultiTexCoord1d(static_cast<GLenum>(target), static_cast<GLdouble>(s));
}

void QOpenGLFunctions_1_4_GlClientActiveTexture(QOpenGLFunctions_1_4* self, uint32_t texture) {
    self->glClientActiveTexture(static_cast<GLenum>(texture));
}

void QOpenGLFunctions_1_4_GlWindowPos3sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
    self->glWindowPos3sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlWindowPos3s(QOpenGLFunctions_1_4* self, int16_t x, int16_t y, int16_t z) {
    self->glWindowPos3s(static_cast<GLshort>(x), static_cast<GLshort>(y), static_cast<GLshort>(z));
}

void QOpenGLFunctions_1_4_GlWindowPos3iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
    self->glWindowPos3iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlWindowPos3i(QOpenGLFunctions_1_4* self, int32_t x, int32_t y, int32_t z) {
    self->glWindowPos3i(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLint>(z));
}

void QOpenGLFunctions_1_4_GlWindowPos3fv(QOpenGLFunctions_1_4* self, const float* v) {
    self->glWindowPos3fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlWindowPos3f(QOpenGLFunctions_1_4* self, float x, float y, float z) {
    self->glWindowPos3f(static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLFunctions_1_4_GlWindowPos3dv(QOpenGLFunctions_1_4* self, const double* v) {
    self->glWindowPos3dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlWindowPos3d(QOpenGLFunctions_1_4* self, double x, double y, double z) {
    self->glWindowPos3d(static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z));
}

void QOpenGLFunctions_1_4_GlWindowPos2sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
    self->glWindowPos2sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlWindowPos2s(QOpenGLFunctions_1_4* self, int16_t x, int16_t y) {
    self->glWindowPos2s(static_cast<GLshort>(x), static_cast<GLshort>(y));
}

void QOpenGLFunctions_1_4_GlWindowPos2iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
    self->glWindowPos2iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlWindowPos2i(QOpenGLFunctions_1_4* self, int32_t x, int32_t y) {
    self->glWindowPos2i(static_cast<GLint>(x), static_cast<GLint>(y));
}

void QOpenGLFunctions_1_4_GlWindowPos2fv(QOpenGLFunctions_1_4* self, const float* v) {
    self->glWindowPos2fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlWindowPos2f(QOpenGLFunctions_1_4* self, float x, float y) {
    self->glWindowPos2f(static_cast<GLfloat>(x), static_cast<GLfloat>(y));
}

void QOpenGLFunctions_1_4_GlWindowPos2dv(QOpenGLFunctions_1_4* self, const double* v) {
    self->glWindowPos2dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlWindowPos2d(QOpenGLFunctions_1_4* self, double x, double y) {
    self->glWindowPos2d(static_cast<GLdouble>(x), static_cast<GLdouble>(y));
}

void QOpenGLFunctions_1_4_GlSecondaryColorPointer(QOpenGLFunctions_1_4* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
    self->glSecondaryColorPointer(static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_1_4_GlSecondaryColor3usv(QOpenGLFunctions_1_4* self, const uint16_t* v) {
    self->glSecondaryColor3usv(static_cast<const GLushort*>(v));
}

void QOpenGLFunctions_1_4_GlSecondaryColor3us(QOpenGLFunctions_1_4* self, uint16_t red, uint16_t green, uint16_t blue) {
    self->glSecondaryColor3us(static_cast<GLushort>(red), static_cast<GLushort>(green), static_cast<GLushort>(blue));
}

void QOpenGLFunctions_1_4_GlSecondaryColor3uiv(QOpenGLFunctions_1_4* self, const uint32_t* v) {
    self->glSecondaryColor3uiv(static_cast<const GLuint*>(v));
}

void QOpenGLFunctions_1_4_GlSecondaryColor3ui(QOpenGLFunctions_1_4* self, uint32_t red, uint32_t green, uint32_t blue) {
    self->glSecondaryColor3ui(static_cast<GLuint>(red), static_cast<GLuint>(green), static_cast<GLuint>(blue));
}

void QOpenGLFunctions_1_4_GlSecondaryColor3ubv(QOpenGLFunctions_1_4* self, const uint8_t* v) {
    self->glSecondaryColor3ubv(static_cast<const GLubyte*>(v));
}

void QOpenGLFunctions_1_4_GlSecondaryColor3ub(QOpenGLFunctions_1_4* self, uint8_t red, uint8_t green, uint8_t blue) {
    self->glSecondaryColor3ub(static_cast<GLubyte>(red), static_cast<GLubyte>(green), static_cast<GLubyte>(blue));
}

void QOpenGLFunctions_1_4_GlSecondaryColor3sv(QOpenGLFunctions_1_4* self, const int16_t* v) {
    self->glSecondaryColor3sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_1_4_GlSecondaryColor3s(QOpenGLFunctions_1_4* self, int16_t red, int16_t green, int16_t blue) {
    self->glSecondaryColor3s(static_cast<GLshort>(red), static_cast<GLshort>(green), static_cast<GLshort>(blue));
}

void QOpenGLFunctions_1_4_GlSecondaryColor3iv(QOpenGLFunctions_1_4* self, const int32_t* v) {
    self->glSecondaryColor3iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_1_4_GlSecondaryColor3i(QOpenGLFunctions_1_4* self, int32_t red, int32_t green, int32_t blue) {
    self->glSecondaryColor3i(static_cast<GLint>(red), static_cast<GLint>(green), static_cast<GLint>(blue));
}

void QOpenGLFunctions_1_4_GlSecondaryColor3fv(QOpenGLFunctions_1_4* self, const float* v) {
    self->glSecondaryColor3fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_1_4_GlSecondaryColor3f(QOpenGLFunctions_1_4* self, float red, float green, float blue) {
    self->glSecondaryColor3f(static_cast<GLfloat>(red), static_cast<GLfloat>(green), static_cast<GLfloat>(blue));
}

void QOpenGLFunctions_1_4_GlSecondaryColor3dv(QOpenGLFunctions_1_4* self, const double* v) {
    self->glSecondaryColor3dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_1_4_GlSecondaryColor3d(QOpenGLFunctions_1_4* self, double red, double green, double blue) {
    self->glSecondaryColor3d(static_cast<GLdouble>(red), static_cast<GLdouble>(green), static_cast<GLdouble>(blue));
}

void QOpenGLFunctions_1_4_GlSecondaryColor3bv(QOpenGLFunctions_1_4* self, const signed char* v) {
    self->glSecondaryColor3bv(static_cast<const GLbyte*>(v));
}

void QOpenGLFunctions_1_4_GlSecondaryColor3b(QOpenGLFunctions_1_4* self, signed char red, signed char green, signed char blue) {
    self->glSecondaryColor3b(static_cast<GLbyte>(red), static_cast<GLbyte>(green), static_cast<GLbyte>(blue));
}

void QOpenGLFunctions_1_4_GlFogCoordPointer(QOpenGLFunctions_1_4* self, uint32_t typeVal, int32_t stride, const void* pointer) {
    self->glFogCoordPointer(static_cast<GLenum>(typeVal), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_1_4_GlFogCoorddv(QOpenGLFunctions_1_4* self, const double* coord) {
    self->glFogCoorddv(static_cast<const GLdouble*>(coord));
}

void QOpenGLFunctions_1_4_GlFogCoordd(QOpenGLFunctions_1_4* self, double coord) {
    self->glFogCoordd(static_cast<GLdouble>(coord));
}

void QOpenGLFunctions_1_4_GlFogCoordfv(QOpenGLFunctions_1_4* self, const float* coord) {
    self->glFogCoordfv(static_cast<const GLfloat*>(coord));
}

void QOpenGLFunctions_1_4_GlFogCoordf(QOpenGLFunctions_1_4* self, float coord) {
    self->glFogCoordf(static_cast<GLfloat>(coord));
}

// Base class handler implementation
bool QOpenGLFunctions_1_4_QBaseInitializeOpenGLFunctions(QOpenGLFunctions_1_4* self) {
    auto* vqopenglfunctions_1_4 = dynamic_cast<VirtualQOpenGLFunctions_1_4*>(self);
    if (vqopenglfunctions_1_4 && vqopenglfunctions_1_4->isVirtualQOpenGLFunctions_1_4) {
        vqopenglfunctions_1_4->setQOpenGLFunctions_1_4_InitializeOpenGLFunctions_IsBase(true);
        return vqopenglfunctions_1_4->initializeOpenGLFunctions();
    } else {
        return self->QOpenGLFunctions_1_4::initializeOpenGLFunctions();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_1_4_OnInitializeOpenGLFunctions(QOpenGLFunctions_1_4* self, intptr_t slot) {
    auto* vqopenglfunctions_1_4 = dynamic_cast<VirtualQOpenGLFunctions_1_4*>(self);
    if (vqopenglfunctions_1_4 && vqopenglfunctions_1_4->isVirtualQOpenGLFunctions_1_4) {
        vqopenglfunctions_1_4->setQOpenGLFunctions_1_4_InitializeOpenGLFunctions_Callback(reinterpret_cast<VirtualQOpenGLFunctions_1_4::QOpenGLFunctions_1_4_InitializeOpenGLFunctions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLFunctions_1_4_IsInitialized(const QOpenGLFunctions_1_4* self) {
    auto* vqopenglfunctions_1_4 = const_cast<VirtualQOpenGLFunctions_1_4*>(dynamic_cast<const VirtualQOpenGLFunctions_1_4*>(self));
    if (vqopenglfunctions_1_4 && vqopenglfunctions_1_4->isVirtualQOpenGLFunctions_1_4) {
        return vqopenglfunctions_1_4->isInitialized();
    } else {
        return ((VirtualQOpenGLFunctions_1_4*)self)->isInitialized();
    }
}

// Base class handler implementation
bool QOpenGLFunctions_1_4_QBaseIsInitialized(const QOpenGLFunctions_1_4* self) {
    auto* vqopenglfunctions_1_4 = const_cast<VirtualQOpenGLFunctions_1_4*>(dynamic_cast<const VirtualQOpenGLFunctions_1_4*>(self));
    if (vqopenglfunctions_1_4 && vqopenglfunctions_1_4->isVirtualQOpenGLFunctions_1_4) {
        vqopenglfunctions_1_4->setQOpenGLFunctions_1_4_IsInitialized_IsBase(true);
        return vqopenglfunctions_1_4->isInitialized();
    } else {
        return ((VirtualQOpenGLFunctions_1_4*)self)->isInitialized();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_1_4_OnIsInitialized(const QOpenGLFunctions_1_4* self, intptr_t slot) {
    auto* vqopenglfunctions_1_4 = const_cast<VirtualQOpenGLFunctions_1_4*>(dynamic_cast<const VirtualQOpenGLFunctions_1_4*>(self));
    if (vqopenglfunctions_1_4 && vqopenglfunctions_1_4->isVirtualQOpenGLFunctions_1_4) {
        vqopenglfunctions_1_4->setQOpenGLFunctions_1_4_IsInitialized_Callback(reinterpret_cast<VirtualQOpenGLFunctions_1_4::QOpenGLFunctions_1_4_IsInitialized_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLFunctions_1_4_SetOwningContext(QOpenGLFunctions_1_4* self, const QOpenGLContext* context) {
    auto* vqopenglfunctions_1_4 = dynamic_cast<VirtualQOpenGLFunctions_1_4*>(self);
    if (vqopenglfunctions_1_4 && vqopenglfunctions_1_4->isVirtualQOpenGLFunctions_1_4) {
        vqopenglfunctions_1_4->setOwningContext(context);
    } else {
        ((VirtualQOpenGLFunctions_1_4*)self)->setOwningContext(context);
    }
}

// Base class handler implementation
void QOpenGLFunctions_1_4_QBaseSetOwningContext(QOpenGLFunctions_1_4* self, const QOpenGLContext* context) {
    auto* vqopenglfunctions_1_4 = dynamic_cast<VirtualQOpenGLFunctions_1_4*>(self);
    if (vqopenglfunctions_1_4 && vqopenglfunctions_1_4->isVirtualQOpenGLFunctions_1_4) {
        vqopenglfunctions_1_4->setQOpenGLFunctions_1_4_SetOwningContext_IsBase(true);
        vqopenglfunctions_1_4->setOwningContext(context);
    } else {
        ((VirtualQOpenGLFunctions_1_4*)self)->setOwningContext(context);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_1_4_OnSetOwningContext(QOpenGLFunctions_1_4* self, intptr_t slot) {
    auto* vqopenglfunctions_1_4 = dynamic_cast<VirtualQOpenGLFunctions_1_4*>(self);
    if (vqopenglfunctions_1_4 && vqopenglfunctions_1_4->isVirtualQOpenGLFunctions_1_4) {
        vqopenglfunctions_1_4->setQOpenGLFunctions_1_4_SetOwningContext_Callback(reinterpret_cast<VirtualQOpenGLFunctions_1_4::QOpenGLFunctions_1_4_SetOwningContext_Callback>(slot));
    }
}

// Derived class handler implementation
QOpenGLContext* QOpenGLFunctions_1_4_OwningContext(const QOpenGLFunctions_1_4* self) {
    auto* vqopenglfunctions_1_4 = const_cast<VirtualQOpenGLFunctions_1_4*>(dynamic_cast<const VirtualQOpenGLFunctions_1_4*>(self));
    if (vqopenglfunctions_1_4 && vqopenglfunctions_1_4->isVirtualQOpenGLFunctions_1_4) {
        return vqopenglfunctions_1_4->owningContext();
    } else {
        return ((VirtualQOpenGLFunctions_1_4*)self)->owningContext();
    }
}

// Base class handler implementation
QOpenGLContext* QOpenGLFunctions_1_4_QBaseOwningContext(const QOpenGLFunctions_1_4* self) {
    auto* vqopenglfunctions_1_4 = const_cast<VirtualQOpenGLFunctions_1_4*>(dynamic_cast<const VirtualQOpenGLFunctions_1_4*>(self));
    if (vqopenglfunctions_1_4 && vqopenglfunctions_1_4->isVirtualQOpenGLFunctions_1_4) {
        vqopenglfunctions_1_4->setQOpenGLFunctions_1_4_OwningContext_IsBase(true);
        return vqopenglfunctions_1_4->owningContext();
    } else {
        return ((VirtualQOpenGLFunctions_1_4*)self)->owningContext();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_1_4_OnOwningContext(const QOpenGLFunctions_1_4* self, intptr_t slot) {
    auto* vqopenglfunctions_1_4 = const_cast<VirtualQOpenGLFunctions_1_4*>(dynamic_cast<const VirtualQOpenGLFunctions_1_4*>(self));
    if (vqopenglfunctions_1_4 && vqopenglfunctions_1_4->isVirtualQOpenGLFunctions_1_4) {
        vqopenglfunctions_1_4->setQOpenGLFunctions_1_4_OwningContext_Callback(reinterpret_cast<VirtualQOpenGLFunctions_1_4::QOpenGLFunctions_1_4_OwningContext_Callback>(slot));
    }
}

void QOpenGLFunctions_1_4_Delete(QOpenGLFunctions_1_4* self) {
    delete self;
}
