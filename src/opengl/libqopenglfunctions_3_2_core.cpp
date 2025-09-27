#include <QOpenGLContext>
#include <QOpenGLFunctions_3_2_Core>
#include <qopenglfunctions_3_2_core.h>
#include "libqopenglfunctions_3_2_core.h"
#include "libqopenglfunctions_3_2_core.hxx"

QOpenGLFunctions_3_2_Core* QOpenGLFunctions_3_2_Core_new() {
    return new VirtualQOpenGLFunctions_3_2_Core();
}

bool QOpenGLFunctions_3_2_Core_InitializeOpenGLFunctions(QOpenGLFunctions_3_2_Core* self) {
    auto* vqopenglfunctions_3_2_core = dynamic_cast<VirtualQOpenGLFunctions_3_2_Core*>(self);
    if (vqopenglfunctions_3_2_core && vqopenglfunctions_3_2_core->isVirtualQOpenGLFunctions_3_2_Core) {
        return self->initializeOpenGLFunctions();
    } else {
        return ((VirtualQOpenGLFunctions_3_2_Core*)self)->initializeOpenGLFunctions();
    }
}

void QOpenGLFunctions_3_2_Core_GlViewport(QOpenGLFunctions_3_2_Core* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glViewport(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_3_2_Core_GlDepthRange(QOpenGLFunctions_3_2_Core* self, double nearVal, double farVal) {
    self->glDepthRange(static_cast<GLdouble>(nearVal), static_cast<GLdouble>(farVal));
}

unsigned char QOpenGLFunctions_3_2_Core_GlIsEnabled(QOpenGLFunctions_3_2_Core* self, uint32_t cap) {
    return self->glIsEnabled(static_cast<GLenum>(cap));
}

void QOpenGLFunctions_3_2_Core_GlGetTexLevelParameteriv(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params) {
    self->glGetTexLevelParameteriv(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlGetTexLevelParameterfv(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, uint32_t pname, float* params) {
    self->glGetTexLevelParameterfv(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Core_GlGetTexParameteriv(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetTexParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlGetTexParameterfv(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t pname, float* params) {
    self->glGetTexParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Core_GlGetTexImage(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, uint32_t format, uint32_t typeVal, void* pixels) {
    self->glGetTexImage(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

const uint8_t* QOpenGLFunctions_3_2_Core_GlGetString(QOpenGLFunctions_3_2_Core* self, uint32_t name) {
    return (const uint8_t*)self->glGetString(static_cast<GLenum>(name));
}

void QOpenGLFunctions_3_2_Core_GlGetIntegerv(QOpenGLFunctions_3_2_Core* self, uint32_t pname, int32_t* params) {
    self->glGetIntegerv(static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlGetFloatv(QOpenGLFunctions_3_2_Core* self, uint32_t pname, float* params) {
    self->glGetFloatv(static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Core_GlGetDoublev(QOpenGLFunctions_3_2_Core* self, uint32_t pname, double* params) {
    self->glGetDoublev(static_cast<GLenum>(pname), static_cast<GLdouble*>(params));
}

void QOpenGLFunctions_3_2_Core_GlGetBooleanv(QOpenGLFunctions_3_2_Core* self, uint32_t pname, unsigned char* params) {
    self->glGetBooleanv(static_cast<GLenum>(pname), static_cast<GLboolean*>(params));
}

void QOpenGLFunctions_3_2_Core_GlReadPixels(QOpenGLFunctions_3_2_Core* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, void* pixels) {
    self->glReadPixels(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_3_2_Core_GlReadBuffer(QOpenGLFunctions_3_2_Core* self, uint32_t mode) {
    self->glReadBuffer(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Core_GlPixelStorei(QOpenGLFunctions_3_2_Core* self, uint32_t pname, int32_t param) {
    self->glPixelStorei(static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_3_2_Core_GlPixelStoref(QOpenGLFunctions_3_2_Core* self, uint32_t pname, float param) {
    self->glPixelStoref(static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_3_2_Core_GlDepthFunc(QOpenGLFunctions_3_2_Core* self, uint32_t func) {
    self->glDepthFunc(static_cast<GLenum>(func));
}

void QOpenGLFunctions_3_2_Core_GlStencilOp(QOpenGLFunctions_3_2_Core* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
    self->glStencilOp(static_cast<GLenum>(fail), static_cast<GLenum>(zfail), static_cast<GLenum>(zpass));
}

void QOpenGLFunctions_3_2_Core_GlStencilFunc(QOpenGLFunctions_3_2_Core* self, uint32_t func, int32_t ref, uint32_t mask) {
    self->glStencilFunc(static_cast<GLenum>(func), static_cast<GLint>(ref), static_cast<GLuint>(mask));
}

void QOpenGLFunctions_3_2_Core_GlLogicOp(QOpenGLFunctions_3_2_Core* self, uint32_t opcode) {
    self->glLogicOp(static_cast<GLenum>(opcode));
}

void QOpenGLFunctions_3_2_Core_GlBlendFunc(QOpenGLFunctions_3_2_Core* self, uint32_t sfactor, uint32_t dfactor) {
    self->glBlendFunc(static_cast<GLenum>(sfactor), static_cast<GLenum>(dfactor));
}

void QOpenGLFunctions_3_2_Core_GlFlush(QOpenGLFunctions_3_2_Core* self) {
    self->glFlush();
}

void QOpenGLFunctions_3_2_Core_GlFinish(QOpenGLFunctions_3_2_Core* self) {
    self->glFinish();
}

void QOpenGLFunctions_3_2_Core_GlEnable(QOpenGLFunctions_3_2_Core* self, uint32_t cap) {
    self->glEnable(static_cast<GLenum>(cap));
}

void QOpenGLFunctions_3_2_Core_GlDisable(QOpenGLFunctions_3_2_Core* self, uint32_t cap) {
    self->glDisable(static_cast<GLenum>(cap));
}

void QOpenGLFunctions_3_2_Core_GlDepthMask(QOpenGLFunctions_3_2_Core* self, unsigned char flag) {
    self->glDepthMask(static_cast<GLboolean>(flag));
}

void QOpenGLFunctions_3_2_Core_GlColorMask(QOpenGLFunctions_3_2_Core* self, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
    self->glColorMask(static_cast<GLboolean>(red), static_cast<GLboolean>(green), static_cast<GLboolean>(blue), static_cast<GLboolean>(alpha));
}

void QOpenGLFunctions_3_2_Core_GlStencilMask(QOpenGLFunctions_3_2_Core* self, uint32_t mask) {
    self->glStencilMask(static_cast<GLuint>(mask));
}

void QOpenGLFunctions_3_2_Core_GlClearDepth(QOpenGLFunctions_3_2_Core* self, double depth) {
    self->glClearDepth(static_cast<GLdouble>(depth));
}

void QOpenGLFunctions_3_2_Core_GlClearStencil(QOpenGLFunctions_3_2_Core* self, int32_t s) {
    self->glClearStencil(static_cast<GLint>(s));
}

void QOpenGLFunctions_3_2_Core_GlClearColor(QOpenGLFunctions_3_2_Core* self, float red, float green, float blue, float alpha) {
    self->glClearColor(static_cast<GLfloat>(red), static_cast<GLfloat>(green), static_cast<GLfloat>(blue), static_cast<GLfloat>(alpha));
}

void QOpenGLFunctions_3_2_Core_GlClear(QOpenGLFunctions_3_2_Core* self, uint32_t mask) {
    self->glClear(static_cast<GLbitfield>(mask));
}

void QOpenGLFunctions_3_2_Core_GlDrawBuffer(QOpenGLFunctions_3_2_Core* self, uint32_t mode) {
    self->glDrawBuffer(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Core_GlTexImage2D(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLint>(border), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_3_2_Core_GlTexImage1D(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(internalformat), static_cast<GLsizei>(width), static_cast<GLint>(border), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_3_2_Core_GlTexParameteriv(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t pname, const int32_t* params) {
    self->glTexParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlTexParameteri(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t pname, int32_t param) {
    self->glTexParameteri(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_3_2_Core_GlTexParameterfv(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t pname, const float* params) {
    self->glTexParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Core_GlTexParameterf(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t pname, float param) {
    self->glTexParameterf(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_3_2_Core_GlScissor(QOpenGLFunctions_3_2_Core* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glScissor(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_3_2_Core_GlPolygonMode(QOpenGLFunctions_3_2_Core* self, uint32_t face, uint32_t mode) {
    self->glPolygonMode(static_cast<GLenum>(face), static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Core_GlPointSize(QOpenGLFunctions_3_2_Core* self, float size) {
    self->glPointSize(static_cast<GLfloat>(size));
}

void QOpenGLFunctions_3_2_Core_GlLineWidth(QOpenGLFunctions_3_2_Core* self, float width) {
    self->glLineWidth(static_cast<GLfloat>(width));
}

void QOpenGLFunctions_3_2_Core_GlHint(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t mode) {
    self->glHint(static_cast<GLenum>(target), static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Core_GlFrontFace(QOpenGLFunctions_3_2_Core* self, uint32_t mode) {
    self->glFrontFace(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Core_GlCullFace(QOpenGLFunctions_3_2_Core* self, uint32_t mode) {
    self->glCullFace(static_cast<GLenum>(mode));
}

unsigned char QOpenGLFunctions_3_2_Core_GlIsTexture(QOpenGLFunctions_3_2_Core* self, uint32_t texture) {
    return self->glIsTexture(static_cast<GLuint>(texture));
}

void QOpenGLFunctions_3_2_Core_GlGenTextures(QOpenGLFunctions_3_2_Core* self, int32_t n, uint32_t* textures) {
    self->glGenTextures(static_cast<GLsizei>(n), static_cast<GLuint*>(textures));
}

void QOpenGLFunctions_3_2_Core_GlDeleteTextures(QOpenGLFunctions_3_2_Core* self, int32_t n, const uint32_t* textures) {
    self->glDeleteTextures(static_cast<GLsizei>(n), static_cast<const GLuint*>(textures));
}

void QOpenGLFunctions_3_2_Core_GlBindTexture(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t texture) {
    self->glBindTexture(static_cast<GLenum>(target), static_cast<GLuint>(texture));
}

void QOpenGLFunctions_3_2_Core_GlTexSubImage2D(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexSubImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_3_2_Core_GlTexSubImage1D(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexSubImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLsizei>(width), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_3_2_Core_GlCopyTexSubImage2D(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glCopyTexSubImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_3_2_Core_GlCopyTexSubImage1D(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width) {
    self->glCopyTexSubImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width));
}

void QOpenGLFunctions_3_2_Core_GlCopyTexImage2D(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
    self->glCopyTexImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLint>(border));
}

void QOpenGLFunctions_3_2_Core_GlCopyTexImage1D(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border) {
    self->glCopyTexImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLint>(border));
}

void QOpenGLFunctions_3_2_Core_GlPolygonOffset(QOpenGLFunctions_3_2_Core* self, float factor, float units) {
    self->glPolygonOffset(static_cast<GLfloat>(factor), static_cast<GLfloat>(units));
}

void QOpenGLFunctions_3_2_Core_GlDrawElements(QOpenGLFunctions_3_2_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices) {
    self->glDrawElements(static_cast<GLenum>(mode), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices);
}

void QOpenGLFunctions_3_2_Core_GlDrawArrays(QOpenGLFunctions_3_2_Core* self, uint32_t mode, int32_t first, int32_t count) {
    self->glDrawArrays(static_cast<GLenum>(mode), static_cast<GLint>(first), static_cast<GLsizei>(count));
}

void QOpenGLFunctions_3_2_Core_GlCopyTexSubImage3D(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glCopyTexSubImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_3_2_Core_GlTexSubImage3D(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexSubImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_3_2_Core_GlTexImage3D(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLint>(border), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_3_2_Core_GlDrawRangeElements(QOpenGLFunctions_3_2_Core* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices) {
    self->glDrawRangeElements(static_cast<GLenum>(mode), static_cast<GLuint>(start), static_cast<GLuint>(end), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices);
}

void QOpenGLFunctions_3_2_Core_GlBlendEquation(QOpenGLFunctions_3_2_Core* self, uint32_t mode) {
    self->glBlendEquation(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Core_GlBlendColor(QOpenGLFunctions_3_2_Core* self, float red, float green, float blue, float alpha) {
    self->glBlendColor(static_cast<GLfloat>(red), static_cast<GLfloat>(green), static_cast<GLfloat>(blue), static_cast<GLfloat>(alpha));
}

void QOpenGLFunctions_3_2_Core_GlGetCompressedTexImage(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, void* img) {
    self->glGetCompressedTexImage(static_cast<GLenum>(target), static_cast<GLint>(level), img);
}

void QOpenGLFunctions_3_2_Core_GlCompressedTexSubImage1D(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, const void* data) {
    self->glCompressedTexSubImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLsizei>(width), static_cast<GLenum>(format), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_3_2_Core_GlCompressedTexSubImage2D(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, const void* data) {
    self->glCompressedTexSubImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_3_2_Core_GlCompressedTexSubImage3D(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, const void* data) {
    self->glCompressedTexSubImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLenum>(format), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_3_2_Core_GlCompressedTexImage1D(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, const void* data) {
    self->glCompressedTexImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLint>(border), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_3_2_Core_GlCompressedTexImage2D(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, const void* data) {
    self->glCompressedTexImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLint>(border), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_3_2_Core_GlCompressedTexImage3D(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, const void* data) {
    self->glCompressedTexImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLint>(border), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_3_2_Core_GlSampleCoverage(QOpenGLFunctions_3_2_Core* self, float value, unsigned char invert) {
    self->glSampleCoverage(static_cast<GLfloat>(value), static_cast<GLboolean>(invert));
}

void QOpenGLFunctions_3_2_Core_GlActiveTexture(QOpenGLFunctions_3_2_Core* self, uint32_t texture) {
    self->glActiveTexture(static_cast<GLenum>(texture));
}

void QOpenGLFunctions_3_2_Core_GlPointParameteriv(QOpenGLFunctions_3_2_Core* self, uint32_t pname, const int32_t* params) {
    self->glPointParameteriv(static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlPointParameteri(QOpenGLFunctions_3_2_Core* self, uint32_t pname, int32_t param) {
    self->glPointParameteri(static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_3_2_Core_GlPointParameterfv(QOpenGLFunctions_3_2_Core* self, uint32_t pname, const float* params) {
    self->glPointParameterfv(static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Core_GlPointParameterf(QOpenGLFunctions_3_2_Core* self, uint32_t pname, float param) {
    self->glPointParameterf(static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_3_2_Core_GlMultiDrawArrays(QOpenGLFunctions_3_2_Core* self, uint32_t mode, const int32_t* first, const int32_t* count, int32_t drawcount) {
    self->glMultiDrawArrays(static_cast<GLenum>(mode), static_cast<const GLint*>(first), static_cast<const GLsizei*>(count), static_cast<GLsizei>(drawcount));
}

void QOpenGLFunctions_3_2_Core_GlBlendFuncSeparate(QOpenGLFunctions_3_2_Core* self, uint32_t sfactorRGB, uint32_t dfactorRGB, uint32_t sfactorAlpha, uint32_t dfactorAlpha) {
    self->glBlendFuncSeparate(static_cast<GLenum>(sfactorRGB), static_cast<GLenum>(dfactorRGB), static_cast<GLenum>(sfactorAlpha), static_cast<GLenum>(dfactorAlpha));
}

void QOpenGLFunctions_3_2_Core_GlGetBufferParameteriv(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetBufferParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

unsigned char QOpenGLFunctions_3_2_Core_GlUnmapBuffer(QOpenGLFunctions_3_2_Core* self, uint32_t target) {
    return self->glUnmapBuffer(static_cast<GLenum>(target));
}

void* QOpenGLFunctions_3_2_Core_GlMapBuffer(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t access) {
    return self->glMapBuffer(static_cast<GLenum>(target), static_cast<GLenum>(access));
}

void QOpenGLFunctions_3_2_Core_GlGetBufferSubData(QOpenGLFunctions_3_2_Core* self, uint32_t target, int64_t offset, int64_t size, void* data) {
    self->glGetBufferSubData(static_cast<GLenum>(target), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(size), data);
}

void QOpenGLFunctions_3_2_Core_GlBufferSubData(QOpenGLFunctions_3_2_Core* self, uint32_t target, int64_t offset, int64_t size, const void* data) {
    self->glBufferSubData(static_cast<GLenum>(target), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(size), data);
}

void QOpenGLFunctions_3_2_Core_GlBufferData(QOpenGLFunctions_3_2_Core* self, uint32_t target, int64_t size, const void* data, uint32_t usage) {
    self->glBufferData(static_cast<GLenum>(target), static_cast<GLsizeiptr>(size), data, static_cast<GLenum>(usage));
}

unsigned char QOpenGLFunctions_3_2_Core_GlIsBuffer(QOpenGLFunctions_3_2_Core* self, uint32_t buffer) {
    return self->glIsBuffer(static_cast<GLuint>(buffer));
}

void QOpenGLFunctions_3_2_Core_GlGenBuffers(QOpenGLFunctions_3_2_Core* self, int32_t n, uint32_t* buffers) {
    self->glGenBuffers(static_cast<GLsizei>(n), static_cast<GLuint*>(buffers));
}

void QOpenGLFunctions_3_2_Core_GlDeleteBuffers(QOpenGLFunctions_3_2_Core* self, int32_t n, const uint32_t* buffers) {
    self->glDeleteBuffers(static_cast<GLsizei>(n), static_cast<const GLuint*>(buffers));
}

void QOpenGLFunctions_3_2_Core_GlBindBuffer(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t buffer) {
    self->glBindBuffer(static_cast<GLenum>(target), static_cast<GLuint>(buffer));
}

void QOpenGLFunctions_3_2_Core_GlGetQueryObjectuiv(QOpenGLFunctions_3_2_Core* self, uint32_t id, uint32_t pname, uint32_t* params) {
    self->glGetQueryObjectuiv(static_cast<GLuint>(id), static_cast<GLenum>(pname), static_cast<GLuint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlGetQueryObjectiv(QOpenGLFunctions_3_2_Core* self, uint32_t id, uint32_t pname, int32_t* params) {
    self->glGetQueryObjectiv(static_cast<GLuint>(id), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlGetQueryiv(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetQueryiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlEndQuery(QOpenGLFunctions_3_2_Core* self, uint32_t target) {
    self->glEndQuery(static_cast<GLenum>(target));
}

void QOpenGLFunctions_3_2_Core_GlBeginQuery(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t id) {
    self->glBeginQuery(static_cast<GLenum>(target), static_cast<GLuint>(id));
}

unsigned char QOpenGLFunctions_3_2_Core_GlIsQuery(QOpenGLFunctions_3_2_Core* self, uint32_t id) {
    return self->glIsQuery(static_cast<GLuint>(id));
}

void QOpenGLFunctions_3_2_Core_GlDeleteQueries(QOpenGLFunctions_3_2_Core* self, int32_t n, const uint32_t* ids) {
    self->glDeleteQueries(static_cast<GLsizei>(n), static_cast<const GLuint*>(ids));
}

void QOpenGLFunctions_3_2_Core_GlGenQueries(QOpenGLFunctions_3_2_Core* self, int32_t n, uint32_t* ids) {
    self->glGenQueries(static_cast<GLsizei>(n), static_cast<GLuint*>(ids));
}

void QOpenGLFunctions_3_2_Core_GlVertexAttribPointer(QOpenGLFunctions_3_2_Core* self, uint32_t index, int32_t size, uint32_t typeVal, unsigned char normalized, int32_t stride, const void* pointer) {
    self->glVertexAttribPointer(static_cast<GLuint>(index), static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLboolean>(normalized), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_3_2_Core_GlValidateProgram(QOpenGLFunctions_3_2_Core* self, uint32_t program) {
    self->glValidateProgram(static_cast<GLuint>(program));
}

void QOpenGLFunctions_3_2_Core_GlUniformMatrix4fv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix4fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniformMatrix3fv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix3fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniformMatrix2fv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix2fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniform4iv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, const int32_t* value) {
    self->glUniform4iv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniform3iv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, const int32_t* value) {
    self->glUniform3iv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniform2iv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, const int32_t* value) {
    self->glUniform2iv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniform1iv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, const int32_t* value) {
    self->glUniform1iv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniform4fv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, const float* value) {
    self->glUniform4fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniform3fv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, const float* value) {
    self->glUniform3fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniform2fv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, const float* value) {
    self->glUniform2fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniform1fv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, const float* value) {
    self->glUniform1fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniform4i(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3) {
    self->glUniform4i(static_cast<GLint>(location), static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2), static_cast<GLint>(v3));
}

void QOpenGLFunctions_3_2_Core_GlUniform3i(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t v0, int32_t v1, int32_t v2) {
    self->glUniform3i(static_cast<GLint>(location), static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2));
}

void QOpenGLFunctions_3_2_Core_GlUniform2i(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t v0, int32_t v1) {
    self->glUniform2i(static_cast<GLint>(location), static_cast<GLint>(v0), static_cast<GLint>(v1));
}

void QOpenGLFunctions_3_2_Core_GlUniform1i(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t v0) {
    self->glUniform1i(static_cast<GLint>(location), static_cast<GLint>(v0));
}

void QOpenGLFunctions_3_2_Core_GlUniform4f(QOpenGLFunctions_3_2_Core* self, int32_t location, float v0, float v1, float v2, float v3) {
    self->glUniform4f(static_cast<GLint>(location), static_cast<GLfloat>(v0), static_cast<GLfloat>(v1), static_cast<GLfloat>(v2), static_cast<GLfloat>(v3));
}

void QOpenGLFunctions_3_2_Core_GlUniform3f(QOpenGLFunctions_3_2_Core* self, int32_t location, float v0, float v1, float v2) {
    self->glUniform3f(static_cast<GLint>(location), static_cast<GLfloat>(v0), static_cast<GLfloat>(v1), static_cast<GLfloat>(v2));
}

void QOpenGLFunctions_3_2_Core_GlUniform2f(QOpenGLFunctions_3_2_Core* self, int32_t location, float v0, float v1) {
    self->glUniform2f(static_cast<GLint>(location), static_cast<GLfloat>(v0), static_cast<GLfloat>(v1));
}

void QOpenGLFunctions_3_2_Core_GlUniform1f(QOpenGLFunctions_3_2_Core* self, int32_t location, float v0) {
    self->glUniform1f(static_cast<GLint>(location), static_cast<GLfloat>(v0));
}

void QOpenGLFunctions_3_2_Core_GlUseProgram(QOpenGLFunctions_3_2_Core* self, uint32_t program) {
    self->glUseProgram(static_cast<GLuint>(program));
}

void QOpenGLFunctions_3_2_Core_GlLinkProgram(QOpenGLFunctions_3_2_Core* self, uint32_t program) {
    self->glLinkProgram(static_cast<GLuint>(program));
}

unsigned char QOpenGLFunctions_3_2_Core_GlIsShader(QOpenGLFunctions_3_2_Core* self, uint32_t shader) {
    return self->glIsShader(static_cast<GLuint>(shader));
}

unsigned char QOpenGLFunctions_3_2_Core_GlIsProgram(QOpenGLFunctions_3_2_Core* self, uint32_t program) {
    return self->glIsProgram(static_cast<GLuint>(program));
}

void QOpenGLFunctions_3_2_Core_GlGetVertexAttribiv(QOpenGLFunctions_3_2_Core* self, uint32_t index, uint32_t pname, int32_t* params) {
    self->glGetVertexAttribiv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlGetVertexAttribfv(QOpenGLFunctions_3_2_Core* self, uint32_t index, uint32_t pname, float* params) {
    self->glGetVertexAttribfv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Core_GlGetVertexAttribdv(QOpenGLFunctions_3_2_Core* self, uint32_t index, uint32_t pname, double* params) {
    self->glGetVertexAttribdv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLdouble*>(params));
}

void QOpenGLFunctions_3_2_Core_GlGetUniformiv(QOpenGLFunctions_3_2_Core* self, uint32_t program, int32_t location, int32_t* params) {
    self->glGetUniformiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlGetUniformfv(QOpenGLFunctions_3_2_Core* self, uint32_t program, int32_t location, float* params) {
    self->glGetUniformfv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLfloat*>(params));
}

int32_t QOpenGLFunctions_3_2_Core_GlGetUniformLocation(QOpenGLFunctions_3_2_Core* self, uint32_t program, const GLchar* name) {
    return self->glGetUniformLocation(static_cast<GLuint>(program), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_3_2_Core_GlGetShaderSource(QOpenGLFunctions_3_2_Core* self, uint32_t shader, int32_t bufSize, int32_t* length, GLchar* source) {
    self->glGetShaderSource(static_cast<GLuint>(shader), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(source));
}

void QOpenGLFunctions_3_2_Core_GlGetShaderInfoLog(QOpenGLFunctions_3_2_Core* self, uint32_t shader, int32_t bufSize, int32_t* length, GLchar* infoLog) {
    self->glGetShaderInfoLog(static_cast<GLuint>(shader), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(infoLog));
}

void QOpenGLFunctions_3_2_Core_GlGetShaderiv(QOpenGLFunctions_3_2_Core* self, uint32_t shader, uint32_t pname, int32_t* params) {
    self->glGetShaderiv(static_cast<GLuint>(shader), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlGetProgramInfoLog(QOpenGLFunctions_3_2_Core* self, uint32_t program, int32_t bufSize, int32_t* length, GLchar* infoLog) {
    self->glGetProgramInfoLog(static_cast<GLuint>(program), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(infoLog));
}

void QOpenGLFunctions_3_2_Core_GlGetProgramiv(QOpenGLFunctions_3_2_Core* self, uint32_t program, uint32_t pname, int32_t* params) {
    self->glGetProgramiv(static_cast<GLuint>(program), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

int32_t QOpenGLFunctions_3_2_Core_GlGetAttribLocation(QOpenGLFunctions_3_2_Core* self, uint32_t program, const GLchar* name) {
    return self->glGetAttribLocation(static_cast<GLuint>(program), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_3_2_Core_GlGetAttachedShaders(QOpenGLFunctions_3_2_Core* self, uint32_t program, int32_t maxCount, int32_t* count, uint32_t* obj) {
    self->glGetAttachedShaders(static_cast<GLuint>(program), static_cast<GLsizei>(maxCount), static_cast<GLsizei*>(count), static_cast<GLuint*>(obj));
}

void QOpenGLFunctions_3_2_Core_GlEnableVertexAttribArray(QOpenGLFunctions_3_2_Core* self, uint32_t index) {
    self->glEnableVertexAttribArray(static_cast<GLuint>(index));
}

void QOpenGLFunctions_3_2_Core_GlDisableVertexAttribArray(QOpenGLFunctions_3_2_Core* self, uint32_t index) {
    self->glDisableVertexAttribArray(static_cast<GLuint>(index));
}

void QOpenGLFunctions_3_2_Core_GlDetachShader(QOpenGLFunctions_3_2_Core* self, uint32_t program, uint32_t shader) {
    self->glDetachShader(static_cast<GLuint>(program), static_cast<GLuint>(shader));
}

void QOpenGLFunctions_3_2_Core_GlDeleteShader(QOpenGLFunctions_3_2_Core* self, uint32_t shader) {
    self->glDeleteShader(static_cast<GLuint>(shader));
}

void QOpenGLFunctions_3_2_Core_GlDeleteProgram(QOpenGLFunctions_3_2_Core* self, uint32_t program) {
    self->glDeleteProgram(static_cast<GLuint>(program));
}

uint32_t QOpenGLFunctions_3_2_Core_GlCreateShader(QOpenGLFunctions_3_2_Core* self, uint32_t typeVal) {
    return self->glCreateShader(static_cast<GLenum>(typeVal));
}

uint32_t QOpenGLFunctions_3_2_Core_GlCreateProgram(QOpenGLFunctions_3_2_Core* self) {
    return self->glCreateProgram();
}

void QOpenGLFunctions_3_2_Core_GlCompileShader(QOpenGLFunctions_3_2_Core* self, uint32_t shader) {
    self->glCompileShader(static_cast<GLuint>(shader));
}

void QOpenGLFunctions_3_2_Core_GlBindAttribLocation(QOpenGLFunctions_3_2_Core* self, uint32_t program, uint32_t index, const GLchar* name) {
    self->glBindAttribLocation(static_cast<GLuint>(program), static_cast<GLuint>(index), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_3_2_Core_GlAttachShader(QOpenGLFunctions_3_2_Core* self, uint32_t program, uint32_t shader) {
    self->glAttachShader(static_cast<GLuint>(program), static_cast<GLuint>(shader));
}

void QOpenGLFunctions_3_2_Core_GlStencilMaskSeparate(QOpenGLFunctions_3_2_Core* self, uint32_t face, uint32_t mask) {
    self->glStencilMaskSeparate(static_cast<GLenum>(face), static_cast<GLuint>(mask));
}

void QOpenGLFunctions_3_2_Core_GlStencilFuncSeparate(QOpenGLFunctions_3_2_Core* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask) {
    self->glStencilFuncSeparate(static_cast<GLenum>(face), static_cast<GLenum>(func), static_cast<GLint>(ref), static_cast<GLuint>(mask));
}

void QOpenGLFunctions_3_2_Core_GlStencilOpSeparate(QOpenGLFunctions_3_2_Core* self, uint32_t face, uint32_t sfail, uint32_t dpfail, uint32_t dppass) {
    self->glStencilOpSeparate(static_cast<GLenum>(face), static_cast<GLenum>(sfail), static_cast<GLenum>(dpfail), static_cast<GLenum>(dppass));
}

void QOpenGLFunctions_3_2_Core_GlBlendEquationSeparate(QOpenGLFunctions_3_2_Core* self, uint32_t modeRGB, uint32_t modeAlpha) {
    self->glBlendEquationSeparate(static_cast<GLenum>(modeRGB), static_cast<GLenum>(modeAlpha));
}

void QOpenGLFunctions_3_2_Core_GlUniformMatrix4x3fv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix4x3fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniformMatrix3x4fv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix3x4fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniformMatrix4x2fv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix4x2fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniformMatrix2x4fv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix2x4fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniformMatrix3x2fv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix3x2fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniformMatrix2x3fv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix2x3fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

unsigned char QOpenGLFunctions_3_2_Core_GlIsVertexArray(QOpenGLFunctions_3_2_Core* self, uint32_t array) {
    return self->glIsVertexArray(static_cast<GLuint>(array));
}

void QOpenGLFunctions_3_2_Core_GlGenVertexArrays(QOpenGLFunctions_3_2_Core* self, int32_t n, uint32_t* arrays) {
    self->glGenVertexArrays(static_cast<GLsizei>(n), static_cast<GLuint*>(arrays));
}

void QOpenGLFunctions_3_2_Core_GlDeleteVertexArrays(QOpenGLFunctions_3_2_Core* self, int32_t n, const uint32_t* arrays) {
    self->glDeleteVertexArrays(static_cast<GLsizei>(n), static_cast<const GLuint*>(arrays));
}

void QOpenGLFunctions_3_2_Core_GlBindVertexArray(QOpenGLFunctions_3_2_Core* self, uint32_t array) {
    self->glBindVertexArray(static_cast<GLuint>(array));
}

void QOpenGLFunctions_3_2_Core_GlFlushMappedBufferRange(QOpenGLFunctions_3_2_Core* self, uint32_t target, int64_t offset, int64_t length) {
    self->glFlushMappedBufferRange(static_cast<GLenum>(target), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(length));
}

void* QOpenGLFunctions_3_2_Core_GlMapBufferRange(QOpenGLFunctions_3_2_Core* self, uint32_t target, int64_t offset, int64_t length, uint32_t access) {
    return self->glMapBufferRange(static_cast<GLenum>(target), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(length), static_cast<GLbitfield>(access));
}

void QOpenGLFunctions_3_2_Core_GlFramebufferTextureLayer(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer) {
    self->glFramebufferTextureLayer(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(layer));
}

void QOpenGLFunctions_3_2_Core_GlRenderbufferStorageMultisample(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height) {
    self->glRenderbufferStorageMultisample(static_cast<GLenum>(target), static_cast<GLsizei>(samples), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_3_2_Core_GlBlitFramebuffer(QOpenGLFunctions_3_2_Core* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter) {
    self->glBlitFramebuffer(static_cast<GLint>(srcX0), static_cast<GLint>(srcY0), static_cast<GLint>(srcX1), static_cast<GLint>(srcY1), static_cast<GLint>(dstX0), static_cast<GLint>(dstY0), static_cast<GLint>(dstX1), static_cast<GLint>(dstY1), static_cast<GLbitfield>(mask), static_cast<GLenum>(filter));
}

void QOpenGLFunctions_3_2_Core_GlGenerateMipmap(QOpenGLFunctions_3_2_Core* self, uint32_t target) {
    self->glGenerateMipmap(static_cast<GLenum>(target));
}

void QOpenGLFunctions_3_2_Core_GlGetFramebufferAttachmentParameteriv(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params) {
    self->glGetFramebufferAttachmentParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlFramebufferRenderbuffer(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer) {
    self->glFramebufferRenderbuffer(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLenum>(renderbuffertarget), static_cast<GLuint>(renderbuffer));
}

void QOpenGLFunctions_3_2_Core_GlFramebufferTexture3D(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level, int32_t zoffset) {
    self->glFramebufferTexture3D(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLenum>(textarget), static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(zoffset));
}

void QOpenGLFunctions_3_2_Core_GlFramebufferTexture2D(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
    self->glFramebufferTexture2D(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLenum>(textarget), static_cast<GLuint>(texture), static_cast<GLint>(level));
}

void QOpenGLFunctions_3_2_Core_GlFramebufferTexture1D(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
    self->glFramebufferTexture1D(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLenum>(textarget), static_cast<GLuint>(texture), static_cast<GLint>(level));
}

void QOpenGLFunctions_3_2_Core_GlGenFramebuffers(QOpenGLFunctions_3_2_Core* self, int32_t n, uint32_t* framebuffers) {
    self->glGenFramebuffers(static_cast<GLsizei>(n), static_cast<GLuint*>(framebuffers));
}

void QOpenGLFunctions_3_2_Core_GlDeleteFramebuffers(QOpenGLFunctions_3_2_Core* self, int32_t n, const uint32_t* framebuffers) {
    self->glDeleteFramebuffers(static_cast<GLsizei>(n), static_cast<const GLuint*>(framebuffers));
}

void QOpenGLFunctions_3_2_Core_GlBindFramebuffer(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t framebuffer) {
    self->glBindFramebuffer(static_cast<GLenum>(target), static_cast<GLuint>(framebuffer));
}

unsigned char QOpenGLFunctions_3_2_Core_GlIsFramebuffer(QOpenGLFunctions_3_2_Core* self, uint32_t framebuffer) {
    return self->glIsFramebuffer(static_cast<GLuint>(framebuffer));
}

void QOpenGLFunctions_3_2_Core_GlGetRenderbufferParameteriv(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetRenderbufferParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlRenderbufferStorage(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height) {
    self->glRenderbufferStorage(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_3_2_Core_GlGenRenderbuffers(QOpenGLFunctions_3_2_Core* self, int32_t n, uint32_t* renderbuffers) {
    self->glGenRenderbuffers(static_cast<GLsizei>(n), static_cast<GLuint*>(renderbuffers));
}

void QOpenGLFunctions_3_2_Core_GlDeleteRenderbuffers(QOpenGLFunctions_3_2_Core* self, int32_t n, const uint32_t* renderbuffers) {
    self->glDeleteRenderbuffers(static_cast<GLsizei>(n), static_cast<const GLuint*>(renderbuffers));
}

void QOpenGLFunctions_3_2_Core_GlBindRenderbuffer(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t renderbuffer) {
    self->glBindRenderbuffer(static_cast<GLenum>(target), static_cast<GLuint>(renderbuffer));
}

unsigned char QOpenGLFunctions_3_2_Core_GlIsRenderbuffer(QOpenGLFunctions_3_2_Core* self, uint32_t renderbuffer) {
    return self->glIsRenderbuffer(static_cast<GLuint>(renderbuffer));
}

const uint8_t* QOpenGLFunctions_3_2_Core_GlGetStringi(QOpenGLFunctions_3_2_Core* self, uint32_t name, uint32_t index) {
    return (const uint8_t*)self->glGetStringi(static_cast<GLenum>(name), static_cast<GLuint>(index));
}

void QOpenGLFunctions_3_2_Core_GlClearBufferfi(QOpenGLFunctions_3_2_Core* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil) {
    self->glClearBufferfi(static_cast<GLenum>(buffer), static_cast<GLint>(drawbuffer), static_cast<GLfloat>(depth), static_cast<GLint>(stencil));
}

void QOpenGLFunctions_3_2_Core_GlClearBufferfv(QOpenGLFunctions_3_2_Core* self, uint32_t buffer, int32_t drawbuffer, const float* value) {
    self->glClearBufferfv(static_cast<GLenum>(buffer), static_cast<GLint>(drawbuffer), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Core_GlClearBufferuiv(QOpenGLFunctions_3_2_Core* self, uint32_t buffer, int32_t drawbuffer, const uint32_t* value) {
    self->glClearBufferuiv(static_cast<GLenum>(buffer), static_cast<GLint>(drawbuffer), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_3_2_Core_GlClearBufferiv(QOpenGLFunctions_3_2_Core* self, uint32_t buffer, int32_t drawbuffer, const int32_t* value) {
    self->glClearBufferiv(static_cast<GLenum>(buffer), static_cast<GLint>(drawbuffer), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_3_2_Core_GlGetTexParameterIuiv(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t pname, uint32_t* params) {
    self->glGetTexParameterIuiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLuint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlGetTexParameterIiv(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetTexParameterIiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlTexParameterIuiv(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t pname, const uint32_t* params) {
    self->glTexParameterIuiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLuint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlTexParameterIiv(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t pname, const int32_t* params) {
    self->glTexParameterIiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlUniform4uiv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, const uint32_t* value) {
    self->glUniform4uiv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniform3uiv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, const uint32_t* value) {
    self->glUniform3uiv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniform2uiv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, const uint32_t* value) {
    self->glUniform2uiv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniform1uiv(QOpenGLFunctions_3_2_Core* self, int32_t location, int32_t count, const uint32_t* value) {
    self->glUniform1uiv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_3_2_Core_GlUniform4ui(QOpenGLFunctions_3_2_Core* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3) {
    self->glUniform4ui(static_cast<GLint>(location), static_cast<GLuint>(v0), static_cast<GLuint>(v1), static_cast<GLuint>(v2), static_cast<GLuint>(v3));
}

void QOpenGLFunctions_3_2_Core_GlUniform3ui(QOpenGLFunctions_3_2_Core* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2) {
    self->glUniform3ui(static_cast<GLint>(location), static_cast<GLuint>(v0), static_cast<GLuint>(v1), static_cast<GLuint>(v2));
}

void QOpenGLFunctions_3_2_Core_GlUniform2ui(QOpenGLFunctions_3_2_Core* self, int32_t location, uint32_t v0, uint32_t v1) {
    self->glUniform2ui(static_cast<GLint>(location), static_cast<GLuint>(v0), static_cast<GLuint>(v1));
}

void QOpenGLFunctions_3_2_Core_GlUniform1ui(QOpenGLFunctions_3_2_Core* self, int32_t location, uint32_t v0) {
    self->glUniform1ui(static_cast<GLint>(location), static_cast<GLuint>(v0));
}

int32_t QOpenGLFunctions_3_2_Core_GlGetFragDataLocation(QOpenGLFunctions_3_2_Core* self, uint32_t program, const GLchar* name) {
    return self->glGetFragDataLocation(static_cast<GLuint>(program), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_3_2_Core_GlBindFragDataLocation(QOpenGLFunctions_3_2_Core* self, uint32_t program, uint32_t color, const GLchar* name) {
    self->glBindFragDataLocation(static_cast<GLuint>(program), static_cast<GLuint>(color), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_3_2_Core_GlGetUniformuiv(QOpenGLFunctions_3_2_Core* self, uint32_t program, int32_t location, uint32_t* params) {
    self->glGetUniformuiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLuint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlGetVertexAttribIuiv(QOpenGLFunctions_3_2_Core* self, uint32_t index, uint32_t pname, uint32_t* params) {
    self->glGetVertexAttribIuiv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLuint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlGetVertexAttribIiv(QOpenGLFunctions_3_2_Core* self, uint32_t index, uint32_t pname, int32_t* params) {
    self->glGetVertexAttribIiv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlVertexAttribIPointer(QOpenGLFunctions_3_2_Core* self, uint32_t index, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
    self->glVertexAttribIPointer(static_cast<GLuint>(index), static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_3_2_Core_GlEndConditionalRender(QOpenGLFunctions_3_2_Core* self) {
    self->glEndConditionalRender();
}

void QOpenGLFunctions_3_2_Core_GlBeginConditionalRender(QOpenGLFunctions_3_2_Core* self, uint32_t id, uint32_t mode) {
    self->glBeginConditionalRender(static_cast<GLuint>(id), static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Core_GlClampColor(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t clamp) {
    self->glClampColor(static_cast<GLenum>(target), static_cast<GLenum>(clamp));
}

void QOpenGLFunctions_3_2_Core_GlBindBufferBase(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t index, uint32_t buffer) {
    self->glBindBufferBase(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLuint>(buffer));
}

void QOpenGLFunctions_3_2_Core_GlBindBufferRange(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t index, uint32_t buffer, int64_t offset, int64_t size) {
    self->glBindBufferRange(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLuint>(buffer), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(size));
}

void QOpenGLFunctions_3_2_Core_GlEndTransformFeedback(QOpenGLFunctions_3_2_Core* self) {
    self->glEndTransformFeedback();
}

void QOpenGLFunctions_3_2_Core_GlBeginTransformFeedback(QOpenGLFunctions_3_2_Core* self, uint32_t primitiveMode) {
    self->glBeginTransformFeedback(static_cast<GLenum>(primitiveMode));
}

unsigned char QOpenGLFunctions_3_2_Core_GlIsEnabledi(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t index) {
    return self->glIsEnabledi(static_cast<GLenum>(target), static_cast<GLuint>(index));
}

void QOpenGLFunctions_3_2_Core_GlDisablei(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t index) {
    self->glDisablei(static_cast<GLenum>(target), static_cast<GLuint>(index));
}

void QOpenGLFunctions_3_2_Core_GlEnablei(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t index) {
    self->glEnablei(static_cast<GLenum>(target), static_cast<GLuint>(index));
}

void QOpenGLFunctions_3_2_Core_GlGetIntegeriV(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t index, int32_t* data) {
    self->glGetIntegeri_v(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLint*>(data));
}

void QOpenGLFunctions_3_2_Core_GlGetBooleaniV(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t index, unsigned char* data) {
    self->glGetBooleani_v(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLboolean*>(data));
}

void QOpenGLFunctions_3_2_Core_GlColorMaski(QOpenGLFunctions_3_2_Core* self, uint32_t index, unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
    self->glColorMaski(static_cast<GLuint>(index), static_cast<GLboolean>(r), static_cast<GLboolean>(g), static_cast<GLboolean>(b), static_cast<GLboolean>(a));
}

void QOpenGLFunctions_3_2_Core_GlCopyBufferSubData(QOpenGLFunctions_3_2_Core* self, uint32_t readTarget, uint32_t writeTarget, int64_t readOffset, int64_t writeOffset, int64_t size) {
    self->glCopyBufferSubData(static_cast<GLenum>(readTarget), static_cast<GLenum>(writeTarget), static_cast<GLintptr>(readOffset), static_cast<GLintptr>(writeOffset), static_cast<GLsizeiptr>(size));
}

void QOpenGLFunctions_3_2_Core_GlUniformBlockBinding(QOpenGLFunctions_3_2_Core* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding) {
    self->glUniformBlockBinding(static_cast<GLuint>(program), static_cast<GLuint>(uniformBlockIndex), static_cast<GLuint>(uniformBlockBinding));
}

void QOpenGLFunctions_3_2_Core_GlGetActiveUniformBlockName(QOpenGLFunctions_3_2_Core* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, GLchar* uniformBlockName) {
    self->glGetActiveUniformBlockName(static_cast<GLuint>(program), static_cast<GLuint>(uniformBlockIndex), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(uniformBlockName));
}

void QOpenGLFunctions_3_2_Core_GlGetActiveUniformBlockiv(QOpenGLFunctions_3_2_Core* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params) {
    self->glGetActiveUniformBlockiv(static_cast<GLuint>(program), static_cast<GLuint>(uniformBlockIndex), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

uint32_t QOpenGLFunctions_3_2_Core_GlGetUniformBlockIndex(QOpenGLFunctions_3_2_Core* self, uint32_t program, const GLchar* uniformBlockName) {
    return self->glGetUniformBlockIndex(static_cast<GLuint>(program), static_cast<const GLchar*>(uniformBlockName));
}

void QOpenGLFunctions_3_2_Core_GlGetActiveUniformName(QOpenGLFunctions_3_2_Core* self, uint32_t program, uint32_t uniformIndex, int32_t bufSize, int32_t* length, GLchar* uniformName) {
    self->glGetActiveUniformName(static_cast<GLuint>(program), static_cast<GLuint>(uniformIndex), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(uniformName));
}

void QOpenGLFunctions_3_2_Core_GlGetActiveUniformsiv(QOpenGLFunctions_3_2_Core* self, uint32_t program, int32_t uniformCount, const uint32_t* uniformIndices, uint32_t pname, int32_t* params) {
    self->glGetActiveUniformsiv(static_cast<GLuint>(program), static_cast<GLsizei>(uniformCount), static_cast<const GLuint*>(uniformIndices), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Core_GlPrimitiveRestartIndex(QOpenGLFunctions_3_2_Core* self, uint32_t index) {
    self->glPrimitiveRestartIndex(static_cast<GLuint>(index));
}

void QOpenGLFunctions_3_2_Core_GlTexBuffer(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t internalformat, uint32_t buffer) {
    self->glTexBuffer(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLuint>(buffer));
}

void QOpenGLFunctions_3_2_Core_GlDrawElementsInstanced(QOpenGLFunctions_3_2_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount) {
    self->glDrawElementsInstanced(static_cast<GLenum>(mode), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLsizei>(instancecount));
}

void QOpenGLFunctions_3_2_Core_GlDrawArraysInstanced(QOpenGLFunctions_3_2_Core* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount) {
    self->glDrawArraysInstanced(static_cast<GLenum>(mode), static_cast<GLint>(first), static_cast<GLsizei>(count), static_cast<GLsizei>(instancecount));
}

void QOpenGLFunctions_3_2_Core_GlSampleMaski(QOpenGLFunctions_3_2_Core* self, uint32_t index, uint32_t mask) {
    self->glSampleMaski(static_cast<GLuint>(index), static_cast<GLbitfield>(mask));
}

void QOpenGLFunctions_3_2_Core_GlGetMultisamplefv(QOpenGLFunctions_3_2_Core* self, uint32_t pname, uint32_t index, float* val) {
    self->glGetMultisamplefv(static_cast<GLenum>(pname), static_cast<GLuint>(index), static_cast<GLfloat*>(val));
}

void QOpenGLFunctions_3_2_Core_GlTexImage3DMultisample(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, int32_t depth, unsigned char fixedsamplelocations) {
    self->glTexImage3DMultisample(static_cast<GLenum>(target), static_cast<GLsizei>(samples), static_cast<GLint>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLboolean>(fixedsamplelocations));
}

void QOpenGLFunctions_3_2_Core_GlTexImage2DMultisample(QOpenGLFunctions_3_2_Core* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, unsigned char fixedsamplelocations) {
    self->glTexImage2DMultisample(static_cast<GLenum>(target), static_cast<GLsizei>(samples), static_cast<GLint>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLboolean>(fixedsamplelocations));
}

void QOpenGLFunctions_3_2_Core_GlGetInteger64v(QOpenGLFunctions_3_2_Core* self, uint32_t pname, int64_t* params) {
    self->glGetInteger64v(static_cast<GLenum>(pname), static_cast<GLint64*>(params));
}

void QOpenGLFunctions_3_2_Core_GlProvokingVertex(QOpenGLFunctions_3_2_Core* self, uint32_t mode) {
    self->glProvokingVertex(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Core_GlDrawElementsInstancedBaseVertex(QOpenGLFunctions_3_2_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount, int32_t basevertex) {
    self->glDrawElementsInstancedBaseVertex(static_cast<GLenum>(mode), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLsizei>(instancecount), static_cast<GLint>(basevertex));
}

void QOpenGLFunctions_3_2_Core_GlDrawRangeElementsBaseVertex(QOpenGLFunctions_3_2_Core* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices, int32_t basevertex) {
    self->glDrawRangeElementsBaseVertex(static_cast<GLenum>(mode), static_cast<GLuint>(start), static_cast<GLuint>(end), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLint>(basevertex));
}

void QOpenGLFunctions_3_2_Core_GlDrawElementsBaseVertex(QOpenGLFunctions_3_2_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t basevertex) {
    self->glDrawElementsBaseVertex(static_cast<GLenum>(mode), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLint>(basevertex));
}

void QOpenGLFunctions_3_2_Core_GlFramebufferTexture(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level) {
    self->glFramebufferTexture(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLuint>(texture), static_cast<GLint>(level));
}

void QOpenGLFunctions_3_2_Core_GlGetBufferParameteri64v(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t pname, int64_t* params) {
    self->glGetBufferParameteri64v(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint64*>(params));
}

void QOpenGLFunctions_3_2_Core_GlGetInteger64iV(QOpenGLFunctions_3_2_Core* self, uint32_t target, uint32_t index, int64_t* data) {
    self->glGetInteger64i_v(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLint64*>(data));
}

// Base class handler implementation
bool QOpenGLFunctions_3_2_Core_QBaseInitializeOpenGLFunctions(QOpenGLFunctions_3_2_Core* self) {
    auto* vqopenglfunctions_3_2_core = dynamic_cast<VirtualQOpenGLFunctions_3_2_Core*>(self);
    if (vqopenglfunctions_3_2_core && vqopenglfunctions_3_2_core->isVirtualQOpenGLFunctions_3_2_Core) {
        vqopenglfunctions_3_2_core->setQOpenGLFunctions_3_2_Core_InitializeOpenGLFunctions_IsBase(true);
        return vqopenglfunctions_3_2_core->initializeOpenGLFunctions();
    } else {
        return self->QOpenGLFunctions_3_2_Core::initializeOpenGLFunctions();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_3_2_Core_OnInitializeOpenGLFunctions(QOpenGLFunctions_3_2_Core* self, intptr_t slot) {
    auto* vqopenglfunctions_3_2_core = dynamic_cast<VirtualQOpenGLFunctions_3_2_Core*>(self);
    if (vqopenglfunctions_3_2_core && vqopenglfunctions_3_2_core->isVirtualQOpenGLFunctions_3_2_Core) {
        vqopenglfunctions_3_2_core->setQOpenGLFunctions_3_2_Core_InitializeOpenGLFunctions_Callback(reinterpret_cast<VirtualQOpenGLFunctions_3_2_Core::QOpenGLFunctions_3_2_Core_InitializeOpenGLFunctions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLFunctions_3_2_Core_IsInitialized(const QOpenGLFunctions_3_2_Core* self) {
    auto* vqopenglfunctions_3_2_core = const_cast<VirtualQOpenGLFunctions_3_2_Core*>(dynamic_cast<const VirtualQOpenGLFunctions_3_2_Core*>(self));
    if (vqopenglfunctions_3_2_core && vqopenglfunctions_3_2_core->isVirtualQOpenGLFunctions_3_2_Core) {
        return vqopenglfunctions_3_2_core->isInitialized();
    } else {
        return ((VirtualQOpenGLFunctions_3_2_Core*)self)->isInitialized();
    }
}

// Base class handler implementation
bool QOpenGLFunctions_3_2_Core_QBaseIsInitialized(const QOpenGLFunctions_3_2_Core* self) {
    auto* vqopenglfunctions_3_2_core = const_cast<VirtualQOpenGLFunctions_3_2_Core*>(dynamic_cast<const VirtualQOpenGLFunctions_3_2_Core*>(self));
    if (vqopenglfunctions_3_2_core && vqopenglfunctions_3_2_core->isVirtualQOpenGLFunctions_3_2_Core) {
        vqopenglfunctions_3_2_core->setQOpenGLFunctions_3_2_Core_IsInitialized_IsBase(true);
        return vqopenglfunctions_3_2_core->isInitialized();
    } else {
        return ((VirtualQOpenGLFunctions_3_2_Core*)self)->isInitialized();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_3_2_Core_OnIsInitialized(const QOpenGLFunctions_3_2_Core* self, intptr_t slot) {
    auto* vqopenglfunctions_3_2_core = const_cast<VirtualQOpenGLFunctions_3_2_Core*>(dynamic_cast<const VirtualQOpenGLFunctions_3_2_Core*>(self));
    if (vqopenglfunctions_3_2_core && vqopenglfunctions_3_2_core->isVirtualQOpenGLFunctions_3_2_Core) {
        vqopenglfunctions_3_2_core->setQOpenGLFunctions_3_2_Core_IsInitialized_Callback(reinterpret_cast<VirtualQOpenGLFunctions_3_2_Core::QOpenGLFunctions_3_2_Core_IsInitialized_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLFunctions_3_2_Core_SetOwningContext(QOpenGLFunctions_3_2_Core* self, const QOpenGLContext* context) {
    auto* vqopenglfunctions_3_2_core = dynamic_cast<VirtualQOpenGLFunctions_3_2_Core*>(self);
    if (vqopenglfunctions_3_2_core && vqopenglfunctions_3_2_core->isVirtualQOpenGLFunctions_3_2_Core) {
        vqopenglfunctions_3_2_core->setOwningContext(context);
    } else {
        ((VirtualQOpenGLFunctions_3_2_Core*)self)->setOwningContext(context);
    }
}

// Base class handler implementation
void QOpenGLFunctions_3_2_Core_QBaseSetOwningContext(QOpenGLFunctions_3_2_Core* self, const QOpenGLContext* context) {
    auto* vqopenglfunctions_3_2_core = dynamic_cast<VirtualQOpenGLFunctions_3_2_Core*>(self);
    if (vqopenglfunctions_3_2_core && vqopenglfunctions_3_2_core->isVirtualQOpenGLFunctions_3_2_Core) {
        vqopenglfunctions_3_2_core->setQOpenGLFunctions_3_2_Core_SetOwningContext_IsBase(true);
        vqopenglfunctions_3_2_core->setOwningContext(context);
    } else {
        ((VirtualQOpenGLFunctions_3_2_Core*)self)->setOwningContext(context);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_3_2_Core_OnSetOwningContext(QOpenGLFunctions_3_2_Core* self, intptr_t slot) {
    auto* vqopenglfunctions_3_2_core = dynamic_cast<VirtualQOpenGLFunctions_3_2_Core*>(self);
    if (vqopenglfunctions_3_2_core && vqopenglfunctions_3_2_core->isVirtualQOpenGLFunctions_3_2_Core) {
        vqopenglfunctions_3_2_core->setQOpenGLFunctions_3_2_Core_SetOwningContext_Callback(reinterpret_cast<VirtualQOpenGLFunctions_3_2_Core::QOpenGLFunctions_3_2_Core_SetOwningContext_Callback>(slot));
    }
}

// Derived class handler implementation
QOpenGLContext* QOpenGLFunctions_3_2_Core_OwningContext(const QOpenGLFunctions_3_2_Core* self) {
    auto* vqopenglfunctions_3_2_core = const_cast<VirtualQOpenGLFunctions_3_2_Core*>(dynamic_cast<const VirtualQOpenGLFunctions_3_2_Core*>(self));
    if (vqopenglfunctions_3_2_core && vqopenglfunctions_3_2_core->isVirtualQOpenGLFunctions_3_2_Core) {
        return vqopenglfunctions_3_2_core->owningContext();
    } else {
        return ((VirtualQOpenGLFunctions_3_2_Core*)self)->owningContext();
    }
}

// Base class handler implementation
QOpenGLContext* QOpenGLFunctions_3_2_Core_QBaseOwningContext(const QOpenGLFunctions_3_2_Core* self) {
    auto* vqopenglfunctions_3_2_core = const_cast<VirtualQOpenGLFunctions_3_2_Core*>(dynamic_cast<const VirtualQOpenGLFunctions_3_2_Core*>(self));
    if (vqopenglfunctions_3_2_core && vqopenglfunctions_3_2_core->isVirtualQOpenGLFunctions_3_2_Core) {
        vqopenglfunctions_3_2_core->setQOpenGLFunctions_3_2_Core_OwningContext_IsBase(true);
        return vqopenglfunctions_3_2_core->owningContext();
    } else {
        return ((VirtualQOpenGLFunctions_3_2_Core*)self)->owningContext();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_3_2_Core_OnOwningContext(const QOpenGLFunctions_3_2_Core* self, intptr_t slot) {
    auto* vqopenglfunctions_3_2_core = const_cast<VirtualQOpenGLFunctions_3_2_Core*>(dynamic_cast<const VirtualQOpenGLFunctions_3_2_Core*>(self));
    if (vqopenglfunctions_3_2_core && vqopenglfunctions_3_2_core->isVirtualQOpenGLFunctions_3_2_Core) {
        vqopenglfunctions_3_2_core->setQOpenGLFunctions_3_2_Core_OwningContext_Callback(reinterpret_cast<VirtualQOpenGLFunctions_3_2_Core::QOpenGLFunctions_3_2_Core_OwningContext_Callback>(slot));
    }
}

void QOpenGLFunctions_3_2_Core_Delete(QOpenGLFunctions_3_2_Core* self) {
    delete self;
}
