#include <QOpenGLContext>
#include <QOpenGLFunctions_4_5_Core>
#include <qopenglfunctions_4_5_core.h>
#include "libqopenglfunctions_4_5_core.h"
#include "libqopenglfunctions_4_5_core.hxx"

QOpenGLFunctions_4_5_Core* QOpenGLFunctions_4_5_Core_new() {
    return new VirtualQOpenGLFunctions_4_5_Core();
}

bool QOpenGLFunctions_4_5_Core_InitializeOpenGLFunctions(QOpenGLFunctions_4_5_Core* self) {
    auto* vqopenglfunctions_4_5_core = dynamic_cast<VirtualQOpenGLFunctions_4_5_Core*>(self);
    if (vqopenglfunctions_4_5_core && vqopenglfunctions_4_5_core->isVirtualQOpenGLFunctions_4_5_Core) {
        return self->initializeOpenGLFunctions();
    } else {
        return ((VirtualQOpenGLFunctions_4_5_Core*)self)->initializeOpenGLFunctions();
    }
}

void QOpenGLFunctions_4_5_Core_GlViewport(QOpenGLFunctions_4_5_Core* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glViewport(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_4_5_Core_GlDepthRange(QOpenGLFunctions_4_5_Core* self, double nearVal, double farVal) {
    self->glDepthRange(static_cast<GLdouble>(nearVal), static_cast<GLdouble>(farVal));
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsEnabled(QOpenGLFunctions_4_5_Core* self, uint32_t cap) {
    return self->glIsEnabled(static_cast<GLenum>(cap));
}

void QOpenGLFunctions_4_5_Core_GlGetTexLevelParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params) {
    self->glGetTexLevelParameteriv(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetTexLevelParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, uint32_t pname, float* params) {
    self->glGetTexLevelParameterfv(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetTexParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetTexParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetTexParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, float* params) {
    self->glGetTexParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetTexImage(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, uint32_t format, uint32_t typeVal, void* pixels) {
    self->glGetTexImage(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

const uint8_t* QOpenGLFunctions_4_5_Core_GlGetString(QOpenGLFunctions_4_5_Core* self, uint32_t name) {
    return (const uint8_t*)self->glGetString(static_cast<GLenum>(name));
}

void QOpenGLFunctions_4_5_Core_GlGetIntegerv(QOpenGLFunctions_4_5_Core* self, uint32_t pname, int32_t* data) {
    self->glGetIntegerv(static_cast<GLenum>(pname), static_cast<GLint*>(data));
}

void QOpenGLFunctions_4_5_Core_GlGetFloatv(QOpenGLFunctions_4_5_Core* self, uint32_t pname, float* data) {
    self->glGetFloatv(static_cast<GLenum>(pname), static_cast<GLfloat*>(data));
}

void QOpenGLFunctions_4_5_Core_GlGetDoublev(QOpenGLFunctions_4_5_Core* self, uint32_t pname, double* data) {
    self->glGetDoublev(static_cast<GLenum>(pname), static_cast<GLdouble*>(data));
}

void QOpenGLFunctions_4_5_Core_GlGetBooleanv(QOpenGLFunctions_4_5_Core* self, uint32_t pname, unsigned char* data) {
    self->glGetBooleanv(static_cast<GLenum>(pname), static_cast<GLboolean*>(data));
}

void QOpenGLFunctions_4_5_Core_GlReadPixels(QOpenGLFunctions_4_5_Core* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, void* pixels) {
    self->glReadPixels(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_4_5_Core_GlReadBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t src) {
    self->glReadBuffer(static_cast<GLenum>(src));
}

void QOpenGLFunctions_4_5_Core_GlPixelStorei(QOpenGLFunctions_4_5_Core* self, uint32_t pname, int32_t param) {
    self->glPixelStorei(static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_4_5_Core_GlPixelStoref(QOpenGLFunctions_4_5_Core* self, uint32_t pname, float param) {
    self->glPixelStoref(static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_4_5_Core_GlDepthFunc(QOpenGLFunctions_4_5_Core* self, uint32_t func) {
    self->glDepthFunc(static_cast<GLenum>(func));
}

void QOpenGLFunctions_4_5_Core_GlStencilOp(QOpenGLFunctions_4_5_Core* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
    self->glStencilOp(static_cast<GLenum>(fail), static_cast<GLenum>(zfail), static_cast<GLenum>(zpass));
}

void QOpenGLFunctions_4_5_Core_GlStencilFunc(QOpenGLFunctions_4_5_Core* self, uint32_t func, int32_t ref, uint32_t mask) {
    self->glStencilFunc(static_cast<GLenum>(func), static_cast<GLint>(ref), static_cast<GLuint>(mask));
}

void QOpenGLFunctions_4_5_Core_GlLogicOp(QOpenGLFunctions_4_5_Core* self, uint32_t opcode) {
    self->glLogicOp(static_cast<GLenum>(opcode));
}

void QOpenGLFunctions_4_5_Core_GlBlendFunc(QOpenGLFunctions_4_5_Core* self, uint32_t sfactor, uint32_t dfactor) {
    self->glBlendFunc(static_cast<GLenum>(sfactor), static_cast<GLenum>(dfactor));
}

void QOpenGLFunctions_4_5_Core_GlFlush(QOpenGLFunctions_4_5_Core* self) {
    self->glFlush();
}

void QOpenGLFunctions_4_5_Core_GlFinish(QOpenGLFunctions_4_5_Core* self) {
    self->glFinish();
}

void QOpenGLFunctions_4_5_Core_GlEnable(QOpenGLFunctions_4_5_Core* self, uint32_t cap) {
    self->glEnable(static_cast<GLenum>(cap));
}

void QOpenGLFunctions_4_5_Core_GlDisable(QOpenGLFunctions_4_5_Core* self, uint32_t cap) {
    self->glDisable(static_cast<GLenum>(cap));
}

void QOpenGLFunctions_4_5_Core_GlDepthMask(QOpenGLFunctions_4_5_Core* self, unsigned char flag) {
    self->glDepthMask(static_cast<GLboolean>(flag));
}

void QOpenGLFunctions_4_5_Core_GlColorMask(QOpenGLFunctions_4_5_Core* self, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
    self->glColorMask(static_cast<GLboolean>(red), static_cast<GLboolean>(green), static_cast<GLboolean>(blue), static_cast<GLboolean>(alpha));
}

void QOpenGLFunctions_4_5_Core_GlStencilMask(QOpenGLFunctions_4_5_Core* self, uint32_t mask) {
    self->glStencilMask(static_cast<GLuint>(mask));
}

void QOpenGLFunctions_4_5_Core_GlClearDepth(QOpenGLFunctions_4_5_Core* self, double depth) {
    self->glClearDepth(static_cast<GLdouble>(depth));
}

void QOpenGLFunctions_4_5_Core_GlClearStencil(QOpenGLFunctions_4_5_Core* self, int32_t s) {
    self->glClearStencil(static_cast<GLint>(s));
}

void QOpenGLFunctions_4_5_Core_GlClearColor(QOpenGLFunctions_4_5_Core* self, float red, float green, float blue, float alpha) {
    self->glClearColor(static_cast<GLfloat>(red), static_cast<GLfloat>(green), static_cast<GLfloat>(blue), static_cast<GLfloat>(alpha));
}

void QOpenGLFunctions_4_5_Core_GlClear(QOpenGLFunctions_4_5_Core* self, uint32_t mask) {
    self->glClear(static_cast<GLbitfield>(mask));
}

void QOpenGLFunctions_4_5_Core_GlDrawBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t buf) {
    self->glDrawBuffer(static_cast<GLenum>(buf));
}

void QOpenGLFunctions_4_5_Core_GlTexImage2D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLint>(border), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_4_5_Core_GlTexImage1D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(internalformat), static_cast<GLsizei>(width), static_cast<GLint>(border), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_4_5_Core_GlTexParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, const int32_t* params) {
    self->glTexParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlTexParameteri(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, int32_t param) {
    self->glTexParameteri(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_4_5_Core_GlTexParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, const float* params) {
    self->glTexParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_4_5_Core_GlTexParameterf(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, float param) {
    self->glTexParameterf(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_4_5_Core_GlScissor(QOpenGLFunctions_4_5_Core* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glScissor(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_4_5_Core_GlPolygonMode(QOpenGLFunctions_4_5_Core* self, uint32_t face, uint32_t mode) {
    self->glPolygonMode(static_cast<GLenum>(face), static_cast<GLenum>(mode));
}

void QOpenGLFunctions_4_5_Core_GlPointSize(QOpenGLFunctions_4_5_Core* self, float size) {
    self->glPointSize(static_cast<GLfloat>(size));
}

void QOpenGLFunctions_4_5_Core_GlLineWidth(QOpenGLFunctions_4_5_Core* self, float width) {
    self->glLineWidth(static_cast<GLfloat>(width));
}

void QOpenGLFunctions_4_5_Core_GlHint(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t mode) {
    self->glHint(static_cast<GLenum>(target), static_cast<GLenum>(mode));
}

void QOpenGLFunctions_4_5_Core_GlFrontFace(QOpenGLFunctions_4_5_Core* self, uint32_t mode) {
    self->glFrontFace(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_4_5_Core_GlCullFace(QOpenGLFunctions_4_5_Core* self, uint32_t mode) {
    self->glCullFace(static_cast<GLenum>(mode));
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsTexture(QOpenGLFunctions_4_5_Core* self, uint32_t texture) {
    return self->glIsTexture(static_cast<GLuint>(texture));
}

void QOpenGLFunctions_4_5_Core_GlGenTextures(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* textures) {
    self->glGenTextures(static_cast<GLsizei>(n), static_cast<GLuint*>(textures));
}

void QOpenGLFunctions_4_5_Core_GlDeleteTextures(QOpenGLFunctions_4_5_Core* self, int32_t n, const uint32_t* textures) {
    self->glDeleteTextures(static_cast<GLsizei>(n), static_cast<const GLuint*>(textures));
}

void QOpenGLFunctions_4_5_Core_GlBindTexture(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t texture) {
    self->glBindTexture(static_cast<GLenum>(target), static_cast<GLuint>(texture));
}

void QOpenGLFunctions_4_5_Core_GlTexSubImage2D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexSubImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_4_5_Core_GlTexSubImage1D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexSubImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLsizei>(width), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_4_5_Core_GlCopyTexSubImage2D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glCopyTexSubImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_4_5_Core_GlCopyTexSubImage1D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width) {
    self->glCopyTexSubImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width));
}

void QOpenGLFunctions_4_5_Core_GlCopyTexImage2D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
    self->glCopyTexImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLint>(border));
}

void QOpenGLFunctions_4_5_Core_GlCopyTexImage1D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border) {
    self->glCopyTexImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLint>(border));
}

void QOpenGLFunctions_4_5_Core_GlPolygonOffset(QOpenGLFunctions_4_5_Core* self, float factor, float units) {
    self->glPolygonOffset(static_cast<GLfloat>(factor), static_cast<GLfloat>(units));
}

void QOpenGLFunctions_4_5_Core_GlDrawElements(QOpenGLFunctions_4_5_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices) {
    self->glDrawElements(static_cast<GLenum>(mode), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices);
}

void QOpenGLFunctions_4_5_Core_GlDrawArrays(QOpenGLFunctions_4_5_Core* self, uint32_t mode, int32_t first, int32_t count) {
    self->glDrawArrays(static_cast<GLenum>(mode), static_cast<GLint>(first), static_cast<GLsizei>(count));
}

void QOpenGLFunctions_4_5_Core_GlBlendColor(QOpenGLFunctions_4_5_Core* self, float red, float green, float blue, float alpha) {
    self->glBlendColor(static_cast<GLfloat>(red), static_cast<GLfloat>(green), static_cast<GLfloat>(blue), static_cast<GLfloat>(alpha));
}

void QOpenGLFunctions_4_5_Core_GlBlendEquation(QOpenGLFunctions_4_5_Core* self, uint32_t mode) {
    self->glBlendEquation(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_4_5_Core_GlCopyTexSubImage3D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glCopyTexSubImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_4_5_Core_GlTexSubImage3D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexSubImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_4_5_Core_GlTexImage3D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLint>(border), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_4_5_Core_GlDrawRangeElements(QOpenGLFunctions_4_5_Core* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices) {
    self->glDrawRangeElements(static_cast<GLenum>(mode), static_cast<GLuint>(start), static_cast<GLuint>(end), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices);
}

void QOpenGLFunctions_4_5_Core_GlGetCompressedTexImage(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, void* img) {
    self->glGetCompressedTexImage(static_cast<GLenum>(target), static_cast<GLint>(level), img);
}

void QOpenGLFunctions_4_5_Core_GlCompressedTexSubImage1D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, const void* data) {
    self->glCompressedTexSubImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLsizei>(width), static_cast<GLenum>(format), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_4_5_Core_GlCompressedTexSubImage2D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, const void* data) {
    self->glCompressedTexSubImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_4_5_Core_GlCompressedTexSubImage3D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, const void* data) {
    self->glCompressedTexSubImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLenum>(format), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_4_5_Core_GlCompressedTexImage1D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, const void* data) {
    self->glCompressedTexImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLint>(border), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_4_5_Core_GlCompressedTexImage2D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, const void* data) {
    self->glCompressedTexImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLint>(border), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_4_5_Core_GlCompressedTexImage3D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, const void* data) {
    self->glCompressedTexImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLint>(border), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_4_5_Core_GlSampleCoverage(QOpenGLFunctions_4_5_Core* self, float value, unsigned char invert) {
    self->glSampleCoverage(static_cast<GLfloat>(value), static_cast<GLboolean>(invert));
}

void QOpenGLFunctions_4_5_Core_GlActiveTexture(QOpenGLFunctions_4_5_Core* self, uint32_t texture) {
    self->glActiveTexture(static_cast<GLenum>(texture));
}

void QOpenGLFunctions_4_5_Core_GlPointParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t pname, const int32_t* params) {
    self->glPointParameteriv(static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlPointParameteri(QOpenGLFunctions_4_5_Core* self, uint32_t pname, int32_t param) {
    self->glPointParameteri(static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_4_5_Core_GlPointParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t pname, const float* params) {
    self->glPointParameterfv(static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_4_5_Core_GlPointParameterf(QOpenGLFunctions_4_5_Core* self, uint32_t pname, float param) {
    self->glPointParameterf(static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_4_5_Core_GlMultiDrawElements(QOpenGLFunctions_4_5_Core* self, uint32_t mode, const int32_t* count, uint32_t typeVal, const void** indices, int32_t drawcount) {
    self->glMultiDrawElements(static_cast<GLenum>(mode), static_cast<const GLsizei*>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLsizei>(drawcount));
}

void QOpenGLFunctions_4_5_Core_GlMultiDrawArrays(QOpenGLFunctions_4_5_Core* self, uint32_t mode, const int32_t* first, const int32_t* count, int32_t drawcount) {
    self->glMultiDrawArrays(static_cast<GLenum>(mode), static_cast<const GLint*>(first), static_cast<const GLsizei*>(count), static_cast<GLsizei>(drawcount));
}

void QOpenGLFunctions_4_5_Core_GlBlendFuncSeparate(QOpenGLFunctions_4_5_Core* self, uint32_t sfactorRGB, uint32_t dfactorRGB, uint32_t sfactorAlpha, uint32_t dfactorAlpha) {
    self->glBlendFuncSeparate(static_cast<GLenum>(sfactorRGB), static_cast<GLenum>(dfactorRGB), static_cast<GLenum>(sfactorAlpha), static_cast<GLenum>(dfactorAlpha));
}

void QOpenGLFunctions_4_5_Core_GlGetBufferPointerv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, void** params) {
    self->glGetBufferPointerv(static_cast<GLenum>(target), static_cast<GLenum>(pname), params);
}

void QOpenGLFunctions_4_5_Core_GlGetBufferParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetBufferParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

unsigned char QOpenGLFunctions_4_5_Core_GlUnmapBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t target) {
    return self->glUnmapBuffer(static_cast<GLenum>(target));
}

void* QOpenGLFunctions_4_5_Core_GlMapBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t access) {
    return self->glMapBuffer(static_cast<GLenum>(target), static_cast<GLenum>(access));
}

void QOpenGLFunctions_4_5_Core_GlGetBufferSubData(QOpenGLFunctions_4_5_Core* self, uint32_t target, int64_t offset, int64_t size, void* data) {
    self->glGetBufferSubData(static_cast<GLenum>(target), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(size), data);
}

void QOpenGLFunctions_4_5_Core_GlBufferSubData(QOpenGLFunctions_4_5_Core* self, uint32_t target, int64_t offset, int64_t size, const void* data) {
    self->glBufferSubData(static_cast<GLenum>(target), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(size), data);
}

void QOpenGLFunctions_4_5_Core_GlBufferData(QOpenGLFunctions_4_5_Core* self, uint32_t target, int64_t size, const void* data, uint32_t usage) {
    self->glBufferData(static_cast<GLenum>(target), static_cast<GLsizeiptr>(size), data, static_cast<GLenum>(usage));
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t buffer) {
    return self->glIsBuffer(static_cast<GLuint>(buffer));
}

void QOpenGLFunctions_4_5_Core_GlGenBuffers(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* buffers) {
    self->glGenBuffers(static_cast<GLsizei>(n), static_cast<GLuint*>(buffers));
}

void QOpenGLFunctions_4_5_Core_GlDeleteBuffers(QOpenGLFunctions_4_5_Core* self, int32_t n, const uint32_t* buffers) {
    self->glDeleteBuffers(static_cast<GLsizei>(n), static_cast<const GLuint*>(buffers));
}

void QOpenGLFunctions_4_5_Core_GlBindBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t buffer) {
    self->glBindBuffer(static_cast<GLenum>(target), static_cast<GLuint>(buffer));
}

void QOpenGLFunctions_4_5_Core_GlGetQueryObjectuiv(QOpenGLFunctions_4_5_Core* self, uint32_t id, uint32_t pname, uint32_t* params) {
    self->glGetQueryObjectuiv(static_cast<GLuint>(id), static_cast<GLenum>(pname), static_cast<GLuint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetQueryObjectiv(QOpenGLFunctions_4_5_Core* self, uint32_t id, uint32_t pname, int32_t* params) {
    self->glGetQueryObjectiv(static_cast<GLuint>(id), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetQueryiv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetQueryiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlEndQuery(QOpenGLFunctions_4_5_Core* self, uint32_t target) {
    self->glEndQuery(static_cast<GLenum>(target));
}

void QOpenGLFunctions_4_5_Core_GlBeginQuery(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t id) {
    self->glBeginQuery(static_cast<GLenum>(target), static_cast<GLuint>(id));
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsQuery(QOpenGLFunctions_4_5_Core* self, uint32_t id) {
    return self->glIsQuery(static_cast<GLuint>(id));
}

void QOpenGLFunctions_4_5_Core_GlDeleteQueries(QOpenGLFunctions_4_5_Core* self, int32_t n, const uint32_t* ids) {
    self->glDeleteQueries(static_cast<GLsizei>(n), static_cast<const GLuint*>(ids));
}

void QOpenGLFunctions_4_5_Core_GlGenQueries(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* ids) {
    self->glGenQueries(static_cast<GLsizei>(n), static_cast<GLuint*>(ids));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribPointer(QOpenGLFunctions_4_5_Core* self, uint32_t index, int32_t size, uint32_t typeVal, unsigned char normalized, int32_t stride, const void* pointer) {
    self->glVertexAttribPointer(static_cast<GLuint>(index), static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLboolean>(normalized), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4usv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint16_t* v) {
    self->glVertexAttrib4usv(static_cast<GLuint>(index), static_cast<const GLushort*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4uiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint32_t* v) {
    self->glVertexAttrib4uiv(static_cast<GLuint>(index), static_cast<const GLuint*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4ubv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint8_t* v) {
    self->glVertexAttrib4ubv(static_cast<GLuint>(index), static_cast<const GLubyte*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4sv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int16_t* v) {
    self->glVertexAttrib4sv(static_cast<GLuint>(index), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4s(QOpenGLFunctions_4_5_Core* self, uint32_t index, int16_t x, int16_t y, int16_t z, int16_t w) {
    self->glVertexAttrib4s(static_cast<GLuint>(index), static_cast<GLshort>(x), static_cast<GLshort>(y), static_cast<GLshort>(z), static_cast<GLshort>(w));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4iv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int32_t* v) {
    self->glVertexAttrib4iv(static_cast<GLuint>(index), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4fv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const float* v) {
    self->glVertexAttrib4fv(static_cast<GLuint>(index), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4f(QOpenGLFunctions_4_5_Core* self, uint32_t index, float x, float y, float z, float w) {
    self->glVertexAttrib4f(static_cast<GLuint>(index), static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z), static_cast<GLfloat>(w));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4dv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const double* v) {
    self->glVertexAttrib4dv(static_cast<GLuint>(index), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4d(QOpenGLFunctions_4_5_Core* self, uint32_t index, double x, double y, double z, double w) {
    self->glVertexAttrib4d(static_cast<GLuint>(index), static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z), static_cast<GLdouble>(w));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4bv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const signed char* v) {
    self->glVertexAttrib4bv(static_cast<GLuint>(index), static_cast<const GLbyte*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4Nusv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint16_t* v) {
    self->glVertexAttrib4Nusv(static_cast<GLuint>(index), static_cast<const GLushort*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4Nuiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint32_t* v) {
    self->glVertexAttrib4Nuiv(static_cast<GLuint>(index), static_cast<const GLuint*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4Nubv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint8_t* v) {
    self->glVertexAttrib4Nubv(static_cast<GLuint>(index), static_cast<const GLubyte*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4Nub(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint8_t x, uint8_t y, uint8_t z, uint8_t w) {
    self->glVertexAttrib4Nub(static_cast<GLuint>(index), static_cast<GLubyte>(x), static_cast<GLubyte>(y), static_cast<GLubyte>(z), static_cast<GLubyte>(w));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4Nsv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int16_t* v) {
    self->glVertexAttrib4Nsv(static_cast<GLuint>(index), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4Niv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int32_t* v) {
    self->glVertexAttrib4Niv(static_cast<GLuint>(index), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib4Nbv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const signed char* v) {
    self->glVertexAttrib4Nbv(static_cast<GLuint>(index), static_cast<const GLbyte*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib3sv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int16_t* v) {
    self->glVertexAttrib3sv(static_cast<GLuint>(index), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib3s(QOpenGLFunctions_4_5_Core* self, uint32_t index, int16_t x, int16_t y, int16_t z) {
    self->glVertexAttrib3s(static_cast<GLuint>(index), static_cast<GLshort>(x), static_cast<GLshort>(y), static_cast<GLshort>(z));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib3fv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const float* v) {
    self->glVertexAttrib3fv(static_cast<GLuint>(index), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib3f(QOpenGLFunctions_4_5_Core* self, uint32_t index, float x, float y, float z) {
    self->glVertexAttrib3f(static_cast<GLuint>(index), static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib3dv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const double* v) {
    self->glVertexAttrib3dv(static_cast<GLuint>(index), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib3d(QOpenGLFunctions_4_5_Core* self, uint32_t index, double x, double y, double z) {
    self->glVertexAttrib3d(static_cast<GLuint>(index), static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib2sv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int16_t* v) {
    self->glVertexAttrib2sv(static_cast<GLuint>(index), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib2s(QOpenGLFunctions_4_5_Core* self, uint32_t index, int16_t x, int16_t y) {
    self->glVertexAttrib2s(static_cast<GLuint>(index), static_cast<GLshort>(x), static_cast<GLshort>(y));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib2fv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const float* v) {
    self->glVertexAttrib2fv(static_cast<GLuint>(index), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib2f(QOpenGLFunctions_4_5_Core* self, uint32_t index, float x, float y) {
    self->glVertexAttrib2f(static_cast<GLuint>(index), static_cast<GLfloat>(x), static_cast<GLfloat>(y));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib2dv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const double* v) {
    self->glVertexAttrib2dv(static_cast<GLuint>(index), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib2d(QOpenGLFunctions_4_5_Core* self, uint32_t index, double x, double y) {
    self->glVertexAttrib2d(static_cast<GLuint>(index), static_cast<GLdouble>(x), static_cast<GLdouble>(y));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib1sv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int16_t* v) {
    self->glVertexAttrib1sv(static_cast<GLuint>(index), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib1s(QOpenGLFunctions_4_5_Core* self, uint32_t index, int16_t x) {
    self->glVertexAttrib1s(static_cast<GLuint>(index), static_cast<GLshort>(x));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib1fv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const float* v) {
    self->glVertexAttrib1fv(static_cast<GLuint>(index), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib1f(QOpenGLFunctions_4_5_Core* self, uint32_t index, float x) {
    self->glVertexAttrib1f(static_cast<GLuint>(index), static_cast<GLfloat>(x));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib1dv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const double* v) {
    self->glVertexAttrib1dv(static_cast<GLuint>(index), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttrib1d(QOpenGLFunctions_4_5_Core* self, uint32_t index, double x) {
    self->glVertexAttrib1d(static_cast<GLuint>(index), static_cast<GLdouble>(x));
}

void QOpenGLFunctions_4_5_Core_GlValidateProgram(QOpenGLFunctions_4_5_Core* self, uint32_t program) {
    self->glValidateProgram(static_cast<GLuint>(program));
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix4fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix4fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix3fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix3fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix2fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix2fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniform4iv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const int32_t* value) {
    self->glUniform4iv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniform3iv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const int32_t* value) {
    self->glUniform3iv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniform2iv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const int32_t* value) {
    self->glUniform2iv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniform1iv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const int32_t* value) {
    self->glUniform1iv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniform4fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const float* value) {
    self->glUniform4fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniform3fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const float* value) {
    self->glUniform3fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniform2fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const float* value) {
    self->glUniform2fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniform1fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const float* value) {
    self->glUniform1fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniform4i(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3) {
    self->glUniform4i(static_cast<GLint>(location), static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2), static_cast<GLint>(v3));
}

void QOpenGLFunctions_4_5_Core_GlUniform3i(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t v0, int32_t v1, int32_t v2) {
    self->glUniform3i(static_cast<GLint>(location), static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2));
}

void QOpenGLFunctions_4_5_Core_GlUniform2i(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t v0, int32_t v1) {
    self->glUniform2i(static_cast<GLint>(location), static_cast<GLint>(v0), static_cast<GLint>(v1));
}

void QOpenGLFunctions_4_5_Core_GlUniform1i(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t v0) {
    self->glUniform1i(static_cast<GLint>(location), static_cast<GLint>(v0));
}

void QOpenGLFunctions_4_5_Core_GlUniform4f(QOpenGLFunctions_4_5_Core* self, int32_t location, float v0, float v1, float v2, float v3) {
    self->glUniform4f(static_cast<GLint>(location), static_cast<GLfloat>(v0), static_cast<GLfloat>(v1), static_cast<GLfloat>(v2), static_cast<GLfloat>(v3));
}

void QOpenGLFunctions_4_5_Core_GlUniform3f(QOpenGLFunctions_4_5_Core* self, int32_t location, float v0, float v1, float v2) {
    self->glUniform3f(static_cast<GLint>(location), static_cast<GLfloat>(v0), static_cast<GLfloat>(v1), static_cast<GLfloat>(v2));
}

void QOpenGLFunctions_4_5_Core_GlUniform2f(QOpenGLFunctions_4_5_Core* self, int32_t location, float v0, float v1) {
    self->glUniform2f(static_cast<GLint>(location), static_cast<GLfloat>(v0), static_cast<GLfloat>(v1));
}

void QOpenGLFunctions_4_5_Core_GlUniform1f(QOpenGLFunctions_4_5_Core* self, int32_t location, float v0) {
    self->glUniform1f(static_cast<GLint>(location), static_cast<GLfloat>(v0));
}

void QOpenGLFunctions_4_5_Core_GlUseProgram(QOpenGLFunctions_4_5_Core* self, uint32_t program) {
    self->glUseProgram(static_cast<GLuint>(program));
}

void QOpenGLFunctions_4_5_Core_GlLinkProgram(QOpenGLFunctions_4_5_Core* self, uint32_t program) {
    self->glLinkProgram(static_cast<GLuint>(program));
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsShader(QOpenGLFunctions_4_5_Core* self, uint32_t shader) {
    return self->glIsShader(static_cast<GLuint>(shader));
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsProgram(QOpenGLFunctions_4_5_Core* self, uint32_t program) {
    return self->glIsProgram(static_cast<GLuint>(program));
}

void QOpenGLFunctions_4_5_Core_GlGetVertexAttribPointerv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t pname, void** pointer) {
    self->glGetVertexAttribPointerv(static_cast<GLuint>(index), static_cast<GLenum>(pname), pointer);
}

void QOpenGLFunctions_4_5_Core_GlGetVertexAttribiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t pname, int32_t* params) {
    self->glGetVertexAttribiv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetVertexAttribfv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t pname, float* params) {
    self->glGetVertexAttribfv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetVertexAttribdv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t pname, double* params) {
    self->glGetVertexAttribdv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLdouble*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetUniformiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t* params) {
    self->glGetUniformiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetUniformfv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, float* params) {
    self->glGetUniformfv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLfloat*>(params));
}

int32_t QOpenGLFunctions_4_5_Core_GlGetUniformLocation(QOpenGLFunctions_4_5_Core* self, uint32_t program, const GLchar* name) {
    return self->glGetUniformLocation(static_cast<GLuint>(program), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_4_5_Core_GlGetShaderSource(QOpenGLFunctions_4_5_Core* self, uint32_t shader, int32_t bufSize, int32_t* length, GLchar* source) {
    self->glGetShaderSource(static_cast<GLuint>(shader), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(source));
}

void QOpenGLFunctions_4_5_Core_GlGetShaderInfoLog(QOpenGLFunctions_4_5_Core* self, uint32_t shader, int32_t bufSize, int32_t* length, GLchar* infoLog) {
    self->glGetShaderInfoLog(static_cast<GLuint>(shader), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(infoLog));
}

void QOpenGLFunctions_4_5_Core_GlGetShaderiv(QOpenGLFunctions_4_5_Core* self, uint32_t shader, uint32_t pname, int32_t* params) {
    self->glGetShaderiv(static_cast<GLuint>(shader), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetProgramInfoLog(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t bufSize, int32_t* length, GLchar* infoLog) {
    self->glGetProgramInfoLog(static_cast<GLuint>(program), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(infoLog));
}

void QOpenGLFunctions_4_5_Core_GlGetProgramiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t pname, int32_t* params) {
    self->glGetProgramiv(static_cast<GLuint>(program), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

int32_t QOpenGLFunctions_4_5_Core_GlGetAttribLocation(QOpenGLFunctions_4_5_Core* self, uint32_t program, const GLchar* name) {
    return self->glGetAttribLocation(static_cast<GLuint>(program), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_4_5_Core_GlGetAttachedShaders(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t maxCount, int32_t* count, uint32_t* shaders) {
    self->glGetAttachedShaders(static_cast<GLuint>(program), static_cast<GLsizei>(maxCount), static_cast<GLsizei*>(count), static_cast<GLuint*>(shaders));
}

void QOpenGLFunctions_4_5_Core_GlEnableVertexAttribArray(QOpenGLFunctions_4_5_Core* self, uint32_t index) {
    self->glEnableVertexAttribArray(static_cast<GLuint>(index));
}

void QOpenGLFunctions_4_5_Core_GlDisableVertexAttribArray(QOpenGLFunctions_4_5_Core* self, uint32_t index) {
    self->glDisableVertexAttribArray(static_cast<GLuint>(index));
}

void QOpenGLFunctions_4_5_Core_GlDetachShader(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t shader) {
    self->glDetachShader(static_cast<GLuint>(program), static_cast<GLuint>(shader));
}

void QOpenGLFunctions_4_5_Core_GlDeleteShader(QOpenGLFunctions_4_5_Core* self, uint32_t shader) {
    self->glDeleteShader(static_cast<GLuint>(shader));
}

void QOpenGLFunctions_4_5_Core_GlDeleteProgram(QOpenGLFunctions_4_5_Core* self, uint32_t program) {
    self->glDeleteProgram(static_cast<GLuint>(program));
}

uint32_t QOpenGLFunctions_4_5_Core_GlCreateShader(QOpenGLFunctions_4_5_Core* self, uint32_t typeVal) {
    return self->glCreateShader(static_cast<GLenum>(typeVal));
}

uint32_t QOpenGLFunctions_4_5_Core_GlCreateProgram(QOpenGLFunctions_4_5_Core* self) {
    return self->glCreateProgram();
}

void QOpenGLFunctions_4_5_Core_GlCompileShader(QOpenGLFunctions_4_5_Core* self, uint32_t shader) {
    self->glCompileShader(static_cast<GLuint>(shader));
}

void QOpenGLFunctions_4_5_Core_GlBindAttribLocation(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t index, const GLchar* name) {
    self->glBindAttribLocation(static_cast<GLuint>(program), static_cast<GLuint>(index), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_4_5_Core_GlAttachShader(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t shader) {
    self->glAttachShader(static_cast<GLuint>(program), static_cast<GLuint>(shader));
}

void QOpenGLFunctions_4_5_Core_GlStencilMaskSeparate(QOpenGLFunctions_4_5_Core* self, uint32_t face, uint32_t mask) {
    self->glStencilMaskSeparate(static_cast<GLenum>(face), static_cast<GLuint>(mask));
}

void QOpenGLFunctions_4_5_Core_GlStencilFuncSeparate(QOpenGLFunctions_4_5_Core* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask) {
    self->glStencilFuncSeparate(static_cast<GLenum>(face), static_cast<GLenum>(func), static_cast<GLint>(ref), static_cast<GLuint>(mask));
}

void QOpenGLFunctions_4_5_Core_GlStencilOpSeparate(QOpenGLFunctions_4_5_Core* self, uint32_t face, uint32_t sfail, uint32_t dpfail, uint32_t dppass) {
    self->glStencilOpSeparate(static_cast<GLenum>(face), static_cast<GLenum>(sfail), static_cast<GLenum>(dpfail), static_cast<GLenum>(dppass));
}

void QOpenGLFunctions_4_5_Core_GlBlendEquationSeparate(QOpenGLFunctions_4_5_Core* self, uint32_t modeRGB, uint32_t modeAlpha) {
    self->glBlendEquationSeparate(static_cast<GLenum>(modeRGB), static_cast<GLenum>(modeAlpha));
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix4x3fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix4x3fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix3x4fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix3x4fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix4x2fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix4x2fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix2x4fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix2x4fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix3x2fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix3x2fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix2x3fv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix2x3fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsVertexArray(QOpenGLFunctions_4_5_Core* self, uint32_t array) {
    return self->glIsVertexArray(static_cast<GLuint>(array));
}

void QOpenGLFunctions_4_5_Core_GlGenVertexArrays(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* arrays) {
    self->glGenVertexArrays(static_cast<GLsizei>(n), static_cast<GLuint*>(arrays));
}

void QOpenGLFunctions_4_5_Core_GlDeleteVertexArrays(QOpenGLFunctions_4_5_Core* self, int32_t n, const uint32_t* arrays) {
    self->glDeleteVertexArrays(static_cast<GLsizei>(n), static_cast<const GLuint*>(arrays));
}

void QOpenGLFunctions_4_5_Core_GlBindVertexArray(QOpenGLFunctions_4_5_Core* self, uint32_t array) {
    self->glBindVertexArray(static_cast<GLuint>(array));
}

void QOpenGLFunctions_4_5_Core_GlFlushMappedBufferRange(QOpenGLFunctions_4_5_Core* self, uint32_t target, int64_t offset, int64_t length) {
    self->glFlushMappedBufferRange(static_cast<GLenum>(target), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(length));
}

void* QOpenGLFunctions_4_5_Core_GlMapBufferRange(QOpenGLFunctions_4_5_Core* self, uint32_t target, int64_t offset, int64_t length, uint32_t access) {
    return self->glMapBufferRange(static_cast<GLenum>(target), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(length), static_cast<GLbitfield>(access));
}

void QOpenGLFunctions_4_5_Core_GlFramebufferTextureLayer(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer) {
    self->glFramebufferTextureLayer(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(layer));
}

void QOpenGLFunctions_4_5_Core_GlRenderbufferStorageMultisample(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height) {
    self->glRenderbufferStorageMultisample(static_cast<GLenum>(target), static_cast<GLsizei>(samples), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_4_5_Core_GlBlitFramebuffer(QOpenGLFunctions_4_5_Core* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter) {
    self->glBlitFramebuffer(static_cast<GLint>(srcX0), static_cast<GLint>(srcY0), static_cast<GLint>(srcX1), static_cast<GLint>(srcY1), static_cast<GLint>(dstX0), static_cast<GLint>(dstY0), static_cast<GLint>(dstX1), static_cast<GLint>(dstY1), static_cast<GLbitfield>(mask), static_cast<GLenum>(filter));
}

void QOpenGLFunctions_4_5_Core_GlGenerateMipmap(QOpenGLFunctions_4_5_Core* self, uint32_t target) {
    self->glGenerateMipmap(static_cast<GLenum>(target));
}

void QOpenGLFunctions_4_5_Core_GlGetFramebufferAttachmentParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params) {
    self->glGetFramebufferAttachmentParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlFramebufferRenderbuffer(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer) {
    self->glFramebufferRenderbuffer(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLenum>(renderbuffertarget), static_cast<GLuint>(renderbuffer));
}

void QOpenGLFunctions_4_5_Core_GlFramebufferTexture3D(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level, int32_t zoffset) {
    self->glFramebufferTexture3D(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLenum>(textarget), static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(zoffset));
}

void QOpenGLFunctions_4_5_Core_GlFramebufferTexture2D(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
    self->glFramebufferTexture2D(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLenum>(textarget), static_cast<GLuint>(texture), static_cast<GLint>(level));
}

void QOpenGLFunctions_4_5_Core_GlFramebufferTexture1D(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
    self->glFramebufferTexture1D(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLenum>(textarget), static_cast<GLuint>(texture), static_cast<GLint>(level));
}

void QOpenGLFunctions_4_5_Core_GlGenFramebuffers(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* framebuffers) {
    self->glGenFramebuffers(static_cast<GLsizei>(n), static_cast<GLuint*>(framebuffers));
}

void QOpenGLFunctions_4_5_Core_GlDeleteFramebuffers(QOpenGLFunctions_4_5_Core* self, int32_t n, const uint32_t* framebuffers) {
    self->glDeleteFramebuffers(static_cast<GLsizei>(n), static_cast<const GLuint*>(framebuffers));
}

void QOpenGLFunctions_4_5_Core_GlBindFramebuffer(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t framebuffer) {
    self->glBindFramebuffer(static_cast<GLenum>(target), static_cast<GLuint>(framebuffer));
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsFramebuffer(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer) {
    return self->glIsFramebuffer(static_cast<GLuint>(framebuffer));
}

void QOpenGLFunctions_4_5_Core_GlGetRenderbufferParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetRenderbufferParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlRenderbufferStorage(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height) {
    self->glRenderbufferStorage(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_4_5_Core_GlGenRenderbuffers(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* renderbuffers) {
    self->glGenRenderbuffers(static_cast<GLsizei>(n), static_cast<GLuint*>(renderbuffers));
}

void QOpenGLFunctions_4_5_Core_GlDeleteRenderbuffers(QOpenGLFunctions_4_5_Core* self, int32_t n, const uint32_t* renderbuffers) {
    self->glDeleteRenderbuffers(static_cast<GLsizei>(n), static_cast<const GLuint*>(renderbuffers));
}

void QOpenGLFunctions_4_5_Core_GlBindRenderbuffer(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t renderbuffer) {
    self->glBindRenderbuffer(static_cast<GLenum>(target), static_cast<GLuint>(renderbuffer));
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsRenderbuffer(QOpenGLFunctions_4_5_Core* self, uint32_t renderbuffer) {
    return self->glIsRenderbuffer(static_cast<GLuint>(renderbuffer));
}

const uint8_t* QOpenGLFunctions_4_5_Core_GlGetStringi(QOpenGLFunctions_4_5_Core* self, uint32_t name, uint32_t index) {
    return (const uint8_t*)self->glGetStringi(static_cast<GLenum>(name), static_cast<GLuint>(index));
}

void QOpenGLFunctions_4_5_Core_GlClearBufferfi(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil) {
    self->glClearBufferfi(static_cast<GLenum>(buffer), static_cast<GLint>(drawbuffer), static_cast<GLfloat>(depth), static_cast<GLint>(stencil));
}

void QOpenGLFunctions_4_5_Core_GlClearBufferfv(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int32_t drawbuffer, const float* value) {
    self->glClearBufferfv(static_cast<GLenum>(buffer), static_cast<GLint>(drawbuffer), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlClearBufferuiv(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int32_t drawbuffer, const uint32_t* value) {
    self->glClearBufferuiv(static_cast<GLenum>(buffer), static_cast<GLint>(drawbuffer), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlClearBufferiv(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int32_t drawbuffer, const int32_t* value) {
    self->glClearBufferiv(static_cast<GLenum>(buffer), static_cast<GLint>(drawbuffer), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlGetTexParameterIuiv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, uint32_t* params) {
    self->glGetTexParameterIuiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLuint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetTexParameterIiv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetTexParameterIiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlTexParameterIuiv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, const uint32_t* params) {
    self->glTexParameterIuiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLuint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlTexParameterIiv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, const int32_t* params) {
    self->glTexParameterIiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlUniform4uiv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const uint32_t* value) {
    self->glUniform4uiv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniform3uiv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const uint32_t* value) {
    self->glUniform3uiv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniform2uiv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const uint32_t* value) {
    self->glUniform2uiv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniform1uiv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const uint32_t* value) {
    self->glUniform1uiv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniform4ui(QOpenGLFunctions_4_5_Core* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3) {
    self->glUniform4ui(static_cast<GLint>(location), static_cast<GLuint>(v0), static_cast<GLuint>(v1), static_cast<GLuint>(v2), static_cast<GLuint>(v3));
}

void QOpenGLFunctions_4_5_Core_GlUniform3ui(QOpenGLFunctions_4_5_Core* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2) {
    self->glUniform3ui(static_cast<GLint>(location), static_cast<GLuint>(v0), static_cast<GLuint>(v1), static_cast<GLuint>(v2));
}

void QOpenGLFunctions_4_5_Core_GlUniform2ui(QOpenGLFunctions_4_5_Core* self, int32_t location, uint32_t v0, uint32_t v1) {
    self->glUniform2ui(static_cast<GLint>(location), static_cast<GLuint>(v0), static_cast<GLuint>(v1));
}

void QOpenGLFunctions_4_5_Core_GlUniform1ui(QOpenGLFunctions_4_5_Core* self, int32_t location, uint32_t v0) {
    self->glUniform1ui(static_cast<GLint>(location), static_cast<GLuint>(v0));
}

int32_t QOpenGLFunctions_4_5_Core_GlGetFragDataLocation(QOpenGLFunctions_4_5_Core* self, uint32_t program, const GLchar* name) {
    return self->glGetFragDataLocation(static_cast<GLuint>(program), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_4_5_Core_GlBindFragDataLocation(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t color, const GLchar* name) {
    self->glBindFragDataLocation(static_cast<GLuint>(program), static_cast<GLuint>(color), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_4_5_Core_GlGetUniformuiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, uint32_t* params) {
    self->glGetUniformuiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLuint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI4usv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint16_t* v) {
    self->glVertexAttribI4usv(static_cast<GLuint>(index), static_cast<const GLushort*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI4ubv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint8_t* v) {
    self->glVertexAttribI4ubv(static_cast<GLuint>(index), static_cast<const GLubyte*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI4sv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int16_t* v) {
    self->glVertexAttribI4sv(static_cast<GLuint>(index), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI4bv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const signed char* v) {
    self->glVertexAttribI4bv(static_cast<GLuint>(index), static_cast<const GLbyte*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI4uiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint32_t* v) {
    self->glVertexAttribI4uiv(static_cast<GLuint>(index), static_cast<const GLuint*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI3uiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint32_t* v) {
    self->glVertexAttribI3uiv(static_cast<GLuint>(index), static_cast<const GLuint*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI2uiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint32_t* v) {
    self->glVertexAttribI2uiv(static_cast<GLuint>(index), static_cast<const GLuint*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI1uiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const uint32_t* v) {
    self->glVertexAttribI1uiv(static_cast<GLuint>(index), static_cast<const GLuint*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI4iv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int32_t* v) {
    self->glVertexAttribI4iv(static_cast<GLuint>(index), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI3iv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int32_t* v) {
    self->glVertexAttribI3iv(static_cast<GLuint>(index), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI2iv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int32_t* v) {
    self->glVertexAttribI2iv(static_cast<GLuint>(index), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI1iv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int32_t* v) {
    self->glVertexAttribI1iv(static_cast<GLuint>(index), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI4ui(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t x, uint32_t y, uint32_t z, uint32_t w) {
    self->glVertexAttribI4ui(static_cast<GLuint>(index), static_cast<GLuint>(x), static_cast<GLuint>(y), static_cast<GLuint>(z), static_cast<GLuint>(w));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI3ui(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t x, uint32_t y, uint32_t z) {
    self->glVertexAttribI3ui(static_cast<GLuint>(index), static_cast<GLuint>(x), static_cast<GLuint>(y), static_cast<GLuint>(z));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI2ui(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t x, uint32_t y) {
    self->glVertexAttribI2ui(static_cast<GLuint>(index), static_cast<GLuint>(x), static_cast<GLuint>(y));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI1ui(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t x) {
    self->glVertexAttribI1ui(static_cast<GLuint>(index), static_cast<GLuint>(x));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI4i(QOpenGLFunctions_4_5_Core* self, uint32_t index, int32_t x, int32_t y, int32_t z, int32_t w) {
    self->glVertexAttribI4i(static_cast<GLuint>(index), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLint>(z), static_cast<GLint>(w));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI3i(QOpenGLFunctions_4_5_Core* self, uint32_t index, int32_t x, int32_t y, int32_t z) {
    self->glVertexAttribI3i(static_cast<GLuint>(index), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLint>(z));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI2i(QOpenGLFunctions_4_5_Core* self, uint32_t index, int32_t x, int32_t y) {
    self->glVertexAttribI2i(static_cast<GLuint>(index), static_cast<GLint>(x), static_cast<GLint>(y));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribI1i(QOpenGLFunctions_4_5_Core* self, uint32_t index, int32_t x) {
    self->glVertexAttribI1i(static_cast<GLuint>(index), static_cast<GLint>(x));
}

void QOpenGLFunctions_4_5_Core_GlGetVertexAttribIuiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t pname, uint32_t* params) {
    self->glGetVertexAttribIuiv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLuint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetVertexAttribIiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t pname, int32_t* params) {
    self->glGetVertexAttribIiv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribIPointer(QOpenGLFunctions_4_5_Core* self, uint32_t index, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
    self->glVertexAttribIPointer(static_cast<GLuint>(index), static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_4_5_Core_GlEndConditionalRender(QOpenGLFunctions_4_5_Core* self) {
    self->glEndConditionalRender();
}

void QOpenGLFunctions_4_5_Core_GlBeginConditionalRender(QOpenGLFunctions_4_5_Core* self, uint32_t id, uint32_t mode) {
    self->glBeginConditionalRender(static_cast<GLuint>(id), static_cast<GLenum>(mode));
}

void QOpenGLFunctions_4_5_Core_GlClampColor(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t clamp) {
    self->glClampColor(static_cast<GLenum>(target), static_cast<GLenum>(clamp));
}

void QOpenGLFunctions_4_5_Core_GlBindBufferBase(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index, uint32_t buffer) {
    self->glBindBufferBase(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLuint>(buffer));
}

void QOpenGLFunctions_4_5_Core_GlBindBufferRange(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index, uint32_t buffer, int64_t offset, int64_t size) {
    self->glBindBufferRange(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLuint>(buffer), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(size));
}

void QOpenGLFunctions_4_5_Core_GlEndTransformFeedback(QOpenGLFunctions_4_5_Core* self) {
    self->glEndTransformFeedback();
}

void QOpenGLFunctions_4_5_Core_GlBeginTransformFeedback(QOpenGLFunctions_4_5_Core* self, uint32_t primitiveMode) {
    self->glBeginTransformFeedback(static_cast<GLenum>(primitiveMode));
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsEnabledi(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index) {
    return self->glIsEnabledi(static_cast<GLenum>(target), static_cast<GLuint>(index));
}

void QOpenGLFunctions_4_5_Core_GlDisablei(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index) {
    self->glDisablei(static_cast<GLenum>(target), static_cast<GLuint>(index));
}

void QOpenGLFunctions_4_5_Core_GlEnablei(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index) {
    self->glEnablei(static_cast<GLenum>(target), static_cast<GLuint>(index));
}

void QOpenGLFunctions_4_5_Core_GlGetIntegeriV(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index, int32_t* data) {
    self->glGetIntegeri_v(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLint*>(data));
}

void QOpenGLFunctions_4_5_Core_GlGetBooleaniV(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index, unsigned char* data) {
    self->glGetBooleani_v(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLboolean*>(data));
}

void QOpenGLFunctions_4_5_Core_GlColorMaski(QOpenGLFunctions_4_5_Core* self, uint32_t index, unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
    self->glColorMaski(static_cast<GLuint>(index), static_cast<GLboolean>(r), static_cast<GLboolean>(g), static_cast<GLboolean>(b), static_cast<GLboolean>(a));
}

void QOpenGLFunctions_4_5_Core_GlUniformBlockBinding(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding) {
    self->glUniformBlockBinding(static_cast<GLuint>(program), static_cast<GLuint>(uniformBlockIndex), static_cast<GLuint>(uniformBlockBinding));
}

void QOpenGLFunctions_4_5_Core_GlGetActiveUniformBlockName(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, GLchar* uniformBlockName) {
    self->glGetActiveUniformBlockName(static_cast<GLuint>(program), static_cast<GLuint>(uniformBlockIndex), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(uniformBlockName));
}

void QOpenGLFunctions_4_5_Core_GlGetActiveUniformBlockiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params) {
    self->glGetActiveUniformBlockiv(static_cast<GLuint>(program), static_cast<GLuint>(uniformBlockIndex), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

uint32_t QOpenGLFunctions_4_5_Core_GlGetUniformBlockIndex(QOpenGLFunctions_4_5_Core* self, uint32_t program, const GLchar* uniformBlockName) {
    return self->glGetUniformBlockIndex(static_cast<GLuint>(program), static_cast<const GLchar*>(uniformBlockName));
}

void QOpenGLFunctions_4_5_Core_GlGetActiveUniformName(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t uniformIndex, int32_t bufSize, int32_t* length, GLchar* uniformName) {
    self->glGetActiveUniformName(static_cast<GLuint>(program), static_cast<GLuint>(uniformIndex), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(uniformName));
}

void QOpenGLFunctions_4_5_Core_GlGetActiveUniformsiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t uniformCount, const uint32_t* uniformIndices, uint32_t pname, int32_t* params) {
    self->glGetActiveUniformsiv(static_cast<GLuint>(program), static_cast<GLsizei>(uniformCount), static_cast<const GLuint*>(uniformIndices), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlCopyBufferSubData(QOpenGLFunctions_4_5_Core* self, uint32_t readTarget, uint32_t writeTarget, int64_t readOffset, int64_t writeOffset, int64_t size) {
    self->glCopyBufferSubData(static_cast<GLenum>(readTarget), static_cast<GLenum>(writeTarget), static_cast<GLintptr>(readOffset), static_cast<GLintptr>(writeOffset), static_cast<GLsizeiptr>(size));
}

void QOpenGLFunctions_4_5_Core_GlPrimitiveRestartIndex(QOpenGLFunctions_4_5_Core* self, uint32_t index) {
    self->glPrimitiveRestartIndex(static_cast<GLuint>(index));
}

void QOpenGLFunctions_4_5_Core_GlTexBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t internalformat, uint32_t buffer) {
    self->glTexBuffer(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLuint>(buffer));
}

void QOpenGLFunctions_4_5_Core_GlDrawElementsInstanced(QOpenGLFunctions_4_5_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount) {
    self->glDrawElementsInstanced(static_cast<GLenum>(mode), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLsizei>(instancecount));
}

void QOpenGLFunctions_4_5_Core_GlDrawArraysInstanced(QOpenGLFunctions_4_5_Core* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount) {
    self->glDrawArraysInstanced(static_cast<GLenum>(mode), static_cast<GLint>(first), static_cast<GLsizei>(count), static_cast<GLsizei>(instancecount));
}

void QOpenGLFunctions_4_5_Core_GlSampleMaski(QOpenGLFunctions_4_5_Core* self, uint32_t maskNumber, uint32_t mask) {
    self->glSampleMaski(static_cast<GLuint>(maskNumber), static_cast<GLbitfield>(mask));
}

void QOpenGLFunctions_4_5_Core_GlGetMultisamplefv(QOpenGLFunctions_4_5_Core* self, uint32_t pname, uint32_t index, float* val) {
    self->glGetMultisamplefv(static_cast<GLenum>(pname), static_cast<GLuint>(index), static_cast<GLfloat*>(val));
}

void QOpenGLFunctions_4_5_Core_GlTexImage3DMultisample(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, unsigned char fixedsamplelocations) {
    self->glTexImage3DMultisample(static_cast<GLenum>(target), static_cast<GLsizei>(samples), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLboolean>(fixedsamplelocations));
}

void QOpenGLFunctions_4_5_Core_GlTexImage2DMultisample(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, unsigned char fixedsamplelocations) {
    self->glTexImage2DMultisample(static_cast<GLenum>(target), static_cast<GLsizei>(samples), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLboolean>(fixedsamplelocations));
}

void QOpenGLFunctions_4_5_Core_GlFramebufferTexture(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level) {
    self->glFramebufferTexture(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLuint>(texture), static_cast<GLint>(level));
}

void QOpenGLFunctions_4_5_Core_GlGetBufferParameteri64v(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, int64_t* params) {
    self->glGetBufferParameteri64v(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint64*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetInteger64iV(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index, int64_t* data) {
    self->glGetInteger64i_v(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLint64*>(data));
}

void QOpenGLFunctions_4_5_Core_GlGetInteger64v(QOpenGLFunctions_4_5_Core* self, uint32_t pname, int64_t* data) {
    self->glGetInteger64v(static_cast<GLenum>(pname), static_cast<GLint64*>(data));
}

void QOpenGLFunctions_4_5_Core_GlProvokingVertex(QOpenGLFunctions_4_5_Core* self, uint32_t mode) {
    self->glProvokingVertex(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_4_5_Core_GlMultiDrawElementsBaseVertex(QOpenGLFunctions_4_5_Core* self, uint32_t mode, const int32_t* count, uint32_t typeVal, const void** indices, int32_t drawcount, const int32_t* basevertex) {
    self->glMultiDrawElementsBaseVertex(static_cast<GLenum>(mode), static_cast<const GLsizei*>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLsizei>(drawcount), static_cast<const GLint*>(basevertex));
}

void QOpenGLFunctions_4_5_Core_GlDrawElementsInstancedBaseVertex(QOpenGLFunctions_4_5_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount, int32_t basevertex) {
    self->glDrawElementsInstancedBaseVertex(static_cast<GLenum>(mode), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLsizei>(instancecount), static_cast<GLint>(basevertex));
}

void QOpenGLFunctions_4_5_Core_GlDrawRangeElementsBaseVertex(QOpenGLFunctions_4_5_Core* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices, int32_t basevertex) {
    self->glDrawRangeElementsBaseVertex(static_cast<GLenum>(mode), static_cast<GLuint>(start), static_cast<GLuint>(end), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLint>(basevertex));
}

void QOpenGLFunctions_4_5_Core_GlDrawElementsBaseVertex(QOpenGLFunctions_4_5_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t basevertex) {
    self->glDrawElementsBaseVertex(static_cast<GLenum>(mode), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLint>(basevertex));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribP4uiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, const uint32_t* value) {
    self->glVertexAttribP4uiv(static_cast<GLuint>(index), static_cast<GLenum>(typeVal), static_cast<GLboolean>(normalized), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribP4ui(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, uint32_t value) {
    self->glVertexAttribP4ui(static_cast<GLuint>(index), static_cast<GLenum>(typeVal), static_cast<GLboolean>(normalized), static_cast<GLuint>(value));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribP3uiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, const uint32_t* value) {
    self->glVertexAttribP3uiv(static_cast<GLuint>(index), static_cast<GLenum>(typeVal), static_cast<GLboolean>(normalized), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribP3ui(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, uint32_t value) {
    self->glVertexAttribP3ui(static_cast<GLuint>(index), static_cast<GLenum>(typeVal), static_cast<GLboolean>(normalized), static_cast<GLuint>(value));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribP2uiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, const uint32_t* value) {
    self->glVertexAttribP2uiv(static_cast<GLuint>(index), static_cast<GLenum>(typeVal), static_cast<GLboolean>(normalized), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribP2ui(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, uint32_t value) {
    self->glVertexAttribP2ui(static_cast<GLuint>(index), static_cast<GLenum>(typeVal), static_cast<GLboolean>(normalized), static_cast<GLuint>(value));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribP1uiv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, const uint32_t* value) {
    self->glVertexAttribP1uiv(static_cast<GLuint>(index), static_cast<GLenum>(typeVal), static_cast<GLboolean>(normalized), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribP1ui(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t typeVal, unsigned char normalized, uint32_t value) {
    self->glVertexAttribP1ui(static_cast<GLuint>(index), static_cast<GLenum>(typeVal), static_cast<GLboolean>(normalized), static_cast<GLuint>(value));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribDivisor(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t divisor) {
    self->glVertexAttribDivisor(static_cast<GLuint>(index), static_cast<GLuint>(divisor));
}

void QOpenGLFunctions_4_5_Core_GlGetQueryObjectui64v(QOpenGLFunctions_4_5_Core* self, uint32_t id, uint32_t pname, uint64_t* params) {
    self->glGetQueryObjectui64v(static_cast<GLuint>(id), static_cast<GLenum>(pname), static_cast<GLuint64*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetQueryObjecti64v(QOpenGLFunctions_4_5_Core* self, uint32_t id, uint32_t pname, int64_t* params) {
    self->glGetQueryObjecti64v(static_cast<GLuint>(id), static_cast<GLenum>(pname), static_cast<GLint64*>(params));
}

void QOpenGLFunctions_4_5_Core_GlQueryCounter(QOpenGLFunctions_4_5_Core* self, uint32_t id, uint32_t target) {
    self->glQueryCounter(static_cast<GLuint>(id), static_cast<GLenum>(target));
}

void QOpenGLFunctions_4_5_Core_GlGetSamplerParameterIuiv(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, uint32_t* params) {
    self->glGetSamplerParameterIuiv(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<GLuint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetSamplerParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, float* params) {
    self->glGetSamplerParameterfv(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetSamplerParameterIiv(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, int32_t* params) {
    self->glGetSamplerParameterIiv(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetSamplerParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, int32_t* params) {
    self->glGetSamplerParameteriv(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlSamplerParameterIuiv(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, const uint32_t* param) {
    self->glSamplerParameterIuiv(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<const GLuint*>(param));
}

void QOpenGLFunctions_4_5_Core_GlSamplerParameterIiv(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, const int32_t* param) {
    self->glSamplerParameterIiv(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<const GLint*>(param));
}

void QOpenGLFunctions_4_5_Core_GlSamplerParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, const float* param) {
    self->glSamplerParameterfv(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<const GLfloat*>(param));
}

void QOpenGLFunctions_4_5_Core_GlSamplerParameterf(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, float param) {
    self->glSamplerParameterf(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_4_5_Core_GlSamplerParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, const int32_t* param) {
    self->glSamplerParameteriv(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<const GLint*>(param));
}

void QOpenGLFunctions_4_5_Core_GlSamplerParameteri(QOpenGLFunctions_4_5_Core* self, uint32_t sampler, uint32_t pname, int32_t param) {
    self->glSamplerParameteri(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_4_5_Core_GlBindSampler(QOpenGLFunctions_4_5_Core* self, uint32_t unit, uint32_t sampler) {
    self->glBindSampler(static_cast<GLuint>(unit), static_cast<GLuint>(sampler));
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsSampler(QOpenGLFunctions_4_5_Core* self, uint32_t sampler) {
    return self->glIsSampler(static_cast<GLuint>(sampler));
}

void QOpenGLFunctions_4_5_Core_GlDeleteSamplers(QOpenGLFunctions_4_5_Core* self, int32_t count, const uint32_t* samplers) {
    self->glDeleteSamplers(static_cast<GLsizei>(count), static_cast<const GLuint*>(samplers));
}

void QOpenGLFunctions_4_5_Core_GlGenSamplers(QOpenGLFunctions_4_5_Core* self, int32_t count, uint32_t* samplers) {
    self->glGenSamplers(static_cast<GLsizei>(count), static_cast<GLuint*>(samplers));
}

int32_t QOpenGLFunctions_4_5_Core_GlGetFragDataIndex(QOpenGLFunctions_4_5_Core* self, uint32_t program, const GLchar* name) {
    return self->glGetFragDataIndex(static_cast<GLuint>(program), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_4_5_Core_GlBindFragDataLocationIndexed(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t colorNumber, uint32_t index, const GLchar* name) {
    self->glBindFragDataLocationIndexed(static_cast<GLuint>(program), static_cast<GLuint>(colorNumber), static_cast<GLuint>(index), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_4_5_Core_GlGetQueryIndexediv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index, uint32_t pname, int32_t* params) {
    self->glGetQueryIndexediv(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlEndQueryIndexed(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index) {
    self->glEndQueryIndexed(static_cast<GLenum>(target), static_cast<GLuint>(index));
}

void QOpenGLFunctions_4_5_Core_GlBeginQueryIndexed(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index, uint32_t id) {
    self->glBeginQueryIndexed(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLuint>(id));
}

void QOpenGLFunctions_4_5_Core_GlDrawTransformFeedbackStream(QOpenGLFunctions_4_5_Core* self, uint32_t mode, uint32_t id, uint32_t stream) {
    self->glDrawTransformFeedbackStream(static_cast<GLenum>(mode), static_cast<GLuint>(id), static_cast<GLuint>(stream));
}

void QOpenGLFunctions_4_5_Core_GlDrawTransformFeedback(QOpenGLFunctions_4_5_Core* self, uint32_t mode, uint32_t id) {
    self->glDrawTransformFeedback(static_cast<GLenum>(mode), static_cast<GLuint>(id));
}

void QOpenGLFunctions_4_5_Core_GlResumeTransformFeedback(QOpenGLFunctions_4_5_Core* self) {
    self->glResumeTransformFeedback();
}

void QOpenGLFunctions_4_5_Core_GlPauseTransformFeedback(QOpenGLFunctions_4_5_Core* self) {
    self->glPauseTransformFeedback();
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsTransformFeedback(QOpenGLFunctions_4_5_Core* self, uint32_t id) {
    return self->glIsTransformFeedback(static_cast<GLuint>(id));
}

void QOpenGLFunctions_4_5_Core_GlGenTransformFeedbacks(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* ids) {
    self->glGenTransformFeedbacks(static_cast<GLsizei>(n), static_cast<GLuint*>(ids));
}

void QOpenGLFunctions_4_5_Core_GlDeleteTransformFeedbacks(QOpenGLFunctions_4_5_Core* self, int32_t n, const uint32_t* ids) {
    self->glDeleteTransformFeedbacks(static_cast<GLsizei>(n), static_cast<const GLuint*>(ids));
}

void QOpenGLFunctions_4_5_Core_GlBindTransformFeedback(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t id) {
    self->glBindTransformFeedback(static_cast<GLenum>(target), static_cast<GLuint>(id));
}

void QOpenGLFunctions_4_5_Core_GlPatchParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t pname, const float* values) {
    self->glPatchParameterfv(static_cast<GLenum>(pname), static_cast<const GLfloat*>(values));
}

void QOpenGLFunctions_4_5_Core_GlPatchParameteri(QOpenGLFunctions_4_5_Core* self, uint32_t pname, int32_t value) {
    self->glPatchParameteri(static_cast<GLenum>(pname), static_cast<GLint>(value));
}

void QOpenGLFunctions_4_5_Core_GlGetProgramStageiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t shadertype, uint32_t pname, int32_t* values) {
    self->glGetProgramStageiv(static_cast<GLuint>(program), static_cast<GLenum>(shadertype), static_cast<GLenum>(pname), static_cast<GLint*>(values));
}

void QOpenGLFunctions_4_5_Core_GlGetUniformSubroutineuiv(QOpenGLFunctions_4_5_Core* self, uint32_t shadertype, int32_t location, uint32_t* params) {
    self->glGetUniformSubroutineuiv(static_cast<GLenum>(shadertype), static_cast<GLint>(location), static_cast<GLuint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlUniformSubroutinesuiv(QOpenGLFunctions_4_5_Core* self, uint32_t shadertype, int32_t count, const uint32_t* indices) {
    self->glUniformSubroutinesuiv(static_cast<GLenum>(shadertype), static_cast<GLsizei>(count), static_cast<const GLuint*>(indices));
}

void QOpenGLFunctions_4_5_Core_GlGetActiveSubroutineName(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t shadertype, uint32_t index, int32_t bufsize, int32_t* length, GLchar* name) {
    self->glGetActiveSubroutineName(static_cast<GLuint>(program), static_cast<GLenum>(shadertype), static_cast<GLuint>(index), static_cast<GLsizei>(bufsize), static_cast<GLsizei*>(length), static_cast<GLchar*>(name));
}

void QOpenGLFunctions_4_5_Core_GlGetActiveSubroutineUniformName(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t shadertype, uint32_t index, int32_t bufsize, int32_t* length, GLchar* name) {
    self->glGetActiveSubroutineUniformName(static_cast<GLuint>(program), static_cast<GLenum>(shadertype), static_cast<GLuint>(index), static_cast<GLsizei>(bufsize), static_cast<GLsizei*>(length), static_cast<GLchar*>(name));
}

void QOpenGLFunctions_4_5_Core_GlGetActiveSubroutineUniformiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t shadertype, uint32_t index, uint32_t pname, int32_t* values) {
    self->glGetActiveSubroutineUniformiv(static_cast<GLuint>(program), static_cast<GLenum>(shadertype), static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLint*>(values));
}

uint32_t QOpenGLFunctions_4_5_Core_GlGetSubroutineIndex(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t shadertype, const GLchar* name) {
    return self->glGetSubroutineIndex(static_cast<GLuint>(program), static_cast<GLenum>(shadertype), static_cast<const GLchar*>(name));
}

int32_t QOpenGLFunctions_4_5_Core_GlGetSubroutineUniformLocation(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t shadertype, const GLchar* name) {
    return self->glGetSubroutineUniformLocation(static_cast<GLuint>(program), static_cast<GLenum>(shadertype), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_4_5_Core_GlGetUniformdv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, double* params) {
    self->glGetUniformdv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLdouble*>(params));
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix4x3dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
    self->glUniformMatrix4x3dv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix4x2dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
    self->glUniformMatrix4x2dv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix3x4dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
    self->glUniformMatrix3x4dv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix3x2dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
    self->glUniformMatrix3x2dv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix2x4dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
    self->glUniformMatrix2x4dv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix2x3dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
    self->glUniformMatrix2x3dv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix4dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
    self->glUniformMatrix4dv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix3dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
    self->glUniformMatrix3dv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniformMatrix2dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, unsigned char transpose, const double* value) {
    self->glUniformMatrix2dv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniform4dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const double* value) {
    self->glUniform4dv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniform3dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const double* value) {
    self->glUniform3dv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniform2dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const double* value) {
    self->glUniform2dv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniform1dv(QOpenGLFunctions_4_5_Core* self, int32_t location, int32_t count, const double* value) {
    self->glUniform1dv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlUniform4d(QOpenGLFunctions_4_5_Core* self, int32_t location, double x, double y, double z, double w) {
    self->glUniform4d(static_cast<GLint>(location), static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z), static_cast<GLdouble>(w));
}

void QOpenGLFunctions_4_5_Core_GlUniform3d(QOpenGLFunctions_4_5_Core* self, int32_t location, double x, double y, double z) {
    self->glUniform3d(static_cast<GLint>(location), static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z));
}

void QOpenGLFunctions_4_5_Core_GlUniform2d(QOpenGLFunctions_4_5_Core* self, int32_t location, double x, double y) {
    self->glUniform2d(static_cast<GLint>(location), static_cast<GLdouble>(x), static_cast<GLdouble>(y));
}

void QOpenGLFunctions_4_5_Core_GlUniform1d(QOpenGLFunctions_4_5_Core* self, int32_t location, double x) {
    self->glUniform1d(static_cast<GLint>(location), static_cast<GLdouble>(x));
}

void QOpenGLFunctions_4_5_Core_GlDrawElementsIndirect(QOpenGLFunctions_4_5_Core* self, uint32_t mode, uint32_t typeVal, const void* indirect) {
    self->glDrawElementsIndirect(static_cast<GLenum>(mode), static_cast<GLenum>(typeVal), indirect);
}

void QOpenGLFunctions_4_5_Core_GlDrawArraysIndirect(QOpenGLFunctions_4_5_Core* self, uint32_t mode, const void* indirect) {
    self->glDrawArraysIndirect(static_cast<GLenum>(mode), indirect);
}

void QOpenGLFunctions_4_5_Core_GlBlendFuncSeparatei(QOpenGLFunctions_4_5_Core* self, uint32_t buf, uint32_t srcRGB, uint32_t dstRGB, uint32_t srcAlpha, uint32_t dstAlpha) {
    self->glBlendFuncSeparatei(static_cast<GLuint>(buf), static_cast<GLenum>(srcRGB), static_cast<GLenum>(dstRGB), static_cast<GLenum>(srcAlpha), static_cast<GLenum>(dstAlpha));
}

void QOpenGLFunctions_4_5_Core_GlBlendFunci(QOpenGLFunctions_4_5_Core* self, uint32_t buf, uint32_t src, uint32_t dst) {
    self->glBlendFunci(static_cast<GLuint>(buf), static_cast<GLenum>(src), static_cast<GLenum>(dst));
}

void QOpenGLFunctions_4_5_Core_GlBlendEquationSeparatei(QOpenGLFunctions_4_5_Core* self, uint32_t buf, uint32_t modeRGB, uint32_t modeAlpha) {
    self->glBlendEquationSeparatei(static_cast<GLuint>(buf), static_cast<GLenum>(modeRGB), static_cast<GLenum>(modeAlpha));
}

void QOpenGLFunctions_4_5_Core_GlBlendEquationi(QOpenGLFunctions_4_5_Core* self, uint32_t buf, uint32_t mode) {
    self->glBlendEquationi(static_cast<GLuint>(buf), static_cast<GLenum>(mode));
}

void QOpenGLFunctions_4_5_Core_GlMinSampleShading(QOpenGLFunctions_4_5_Core* self, float value) {
    self->glMinSampleShading(static_cast<GLfloat>(value));
}

void QOpenGLFunctions_4_5_Core_GlGetDoubleiV(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index, double* data) {
    self->glGetDoublei_v(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLdouble*>(data));
}

void QOpenGLFunctions_4_5_Core_GlGetFloatiV(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t index, float* data) {
    self->glGetFloati_v(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLfloat*>(data));
}

void QOpenGLFunctions_4_5_Core_GlDepthRangeIndexed(QOpenGLFunctions_4_5_Core* self, uint32_t index, double n, double f) {
    self->glDepthRangeIndexed(static_cast<GLuint>(index), static_cast<GLdouble>(n), static_cast<GLdouble>(f));
}

void QOpenGLFunctions_4_5_Core_GlDepthRangeArrayv(QOpenGLFunctions_4_5_Core* self, uint32_t first, int32_t count, const double* v) {
    self->glDepthRangeArrayv(static_cast<GLuint>(first), static_cast<GLsizei>(count), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_4_5_Core_GlScissorIndexedv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const int32_t* v) {
    self->glScissorIndexedv(static_cast<GLuint>(index), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_4_5_Core_GlScissorIndexed(QOpenGLFunctions_4_5_Core* self, uint32_t index, int32_t left, int32_t bottom, int32_t width, int32_t height) {
    self->glScissorIndexed(static_cast<GLuint>(index), static_cast<GLint>(left), static_cast<GLint>(bottom), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_4_5_Core_GlScissorArrayv(QOpenGLFunctions_4_5_Core* self, uint32_t first, int32_t count, const int32_t* v) {
    self->glScissorArrayv(static_cast<GLuint>(first), static_cast<GLsizei>(count), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_4_5_Core_GlViewportIndexedfv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const float* v) {
    self->glViewportIndexedfv(static_cast<GLuint>(index), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_4_5_Core_GlViewportIndexedf(QOpenGLFunctions_4_5_Core* self, uint32_t index, float x, float y, float w, float h) {
    self->glViewportIndexedf(static_cast<GLuint>(index), static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(w), static_cast<GLfloat>(h));
}

void QOpenGLFunctions_4_5_Core_GlViewportArrayv(QOpenGLFunctions_4_5_Core* self, uint32_t first, int32_t count, const float* v) {
    self->glViewportArrayv(static_cast<GLuint>(first), static_cast<GLsizei>(count), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_4_5_Core_GlGetVertexAttribLdv(QOpenGLFunctions_4_5_Core* self, uint32_t index, uint32_t pname, double* params) {
    self->glGetVertexAttribLdv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLdouble*>(params));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribLPointer(QOpenGLFunctions_4_5_Core* self, uint32_t index, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
    self->glVertexAttribLPointer(static_cast<GLuint>(index), static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribL4dv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const double* v) {
    self->glVertexAttribL4dv(static_cast<GLuint>(index), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribL3dv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const double* v) {
    self->glVertexAttribL3dv(static_cast<GLuint>(index), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribL2dv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const double* v) {
    self->glVertexAttribL2dv(static_cast<GLuint>(index), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribL1dv(QOpenGLFunctions_4_5_Core* self, uint32_t index, const double* v) {
    self->glVertexAttribL1dv(static_cast<GLuint>(index), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribL4d(QOpenGLFunctions_4_5_Core* self, uint32_t index, double x, double y, double z, double w) {
    self->glVertexAttribL4d(static_cast<GLuint>(index), static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z), static_cast<GLdouble>(w));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribL3d(QOpenGLFunctions_4_5_Core* self, uint32_t index, double x, double y, double z) {
    self->glVertexAttribL3d(static_cast<GLuint>(index), static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribL2d(QOpenGLFunctions_4_5_Core* self, uint32_t index, double x, double y) {
    self->glVertexAttribL2d(static_cast<GLuint>(index), static_cast<GLdouble>(x), static_cast<GLdouble>(y));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribL1d(QOpenGLFunctions_4_5_Core* self, uint32_t index, double x) {
    self->glVertexAttribL1d(static_cast<GLuint>(index), static_cast<GLdouble>(x));
}

void QOpenGLFunctions_4_5_Core_GlGetProgramPipelineInfoLog(QOpenGLFunctions_4_5_Core* self, uint32_t pipeline, int32_t bufSize, int32_t* length, GLchar* infoLog) {
    self->glGetProgramPipelineInfoLog(static_cast<GLuint>(pipeline), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(infoLog));
}

void QOpenGLFunctions_4_5_Core_GlValidateProgramPipeline(QOpenGLFunctions_4_5_Core* self, uint32_t pipeline) {
    self->glValidateProgramPipeline(static_cast<GLuint>(pipeline));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix4x3dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
    self->glProgramUniformMatrix4x3dv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix3x4dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
    self->glProgramUniformMatrix3x4dv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix4x2dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
    self->glProgramUniformMatrix4x2dv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix2x4dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
    self->glProgramUniformMatrix2x4dv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix3x2dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
    self->glProgramUniformMatrix3x2dv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix2x3dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
    self->glProgramUniformMatrix2x3dv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix4x3fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glProgramUniformMatrix4x3fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix3x4fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glProgramUniformMatrix3x4fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix4x2fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glProgramUniformMatrix4x2fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix2x4fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glProgramUniformMatrix2x4fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix3x2fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glProgramUniformMatrix3x2fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix2x3fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glProgramUniformMatrix2x3fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix4dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
    self->glProgramUniformMatrix4dv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix3dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
    self->glProgramUniformMatrix3dv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix2dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const double* value) {
    self->glProgramUniformMatrix2dv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix4fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glProgramUniformMatrix4fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix3fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glProgramUniformMatrix3fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniformMatrix2fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glProgramUniformMatrix2fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform4uiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
    self->glProgramUniform4uiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform4ui(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3) {
    self->glProgramUniform4ui(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLuint>(v0), static_cast<GLuint>(v1), static_cast<GLuint>(v2), static_cast<GLuint>(v3));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform4dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const double* value) {
    self->glProgramUniform4dv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform4d(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, double v0, double v1, double v2, double v3) {
    self->glProgramUniform4d(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLdouble>(v0), static_cast<GLdouble>(v1), static_cast<GLdouble>(v2), static_cast<GLdouble>(v3));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform4fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const float* value) {
    self->glProgramUniform4fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform4f(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, float v0, float v1, float v2, float v3) {
    self->glProgramUniform4f(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLfloat>(v0), static_cast<GLfloat>(v1), static_cast<GLfloat>(v2), static_cast<GLfloat>(v3));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform4iv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
    self->glProgramUniform4iv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform4i(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3) {
    self->glProgramUniform4i(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2), static_cast<GLint>(v3));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform3uiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
    self->glProgramUniform3uiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform3ui(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2) {
    self->glProgramUniform3ui(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLuint>(v0), static_cast<GLuint>(v1), static_cast<GLuint>(v2));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform3dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const double* value) {
    self->glProgramUniform3dv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform3d(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, double v0, double v1, double v2) {
    self->glProgramUniform3d(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLdouble>(v0), static_cast<GLdouble>(v1), static_cast<GLdouble>(v2));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform3fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const float* value) {
    self->glProgramUniform3fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform3f(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, float v0, float v1, float v2) {
    self->glProgramUniform3f(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLfloat>(v0), static_cast<GLfloat>(v1), static_cast<GLfloat>(v2));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform3iv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
    self->glProgramUniform3iv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform3i(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2) {
    self->glProgramUniform3i(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform2uiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
    self->glProgramUniform2uiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform2ui(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1) {
    self->glProgramUniform2ui(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLuint>(v0), static_cast<GLuint>(v1));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform2dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const double* value) {
    self->glProgramUniform2dv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform2d(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, double v0, double v1) {
    self->glProgramUniform2d(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLdouble>(v0), static_cast<GLdouble>(v1));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform2fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const float* value) {
    self->glProgramUniform2fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform2f(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, float v0, float v1) {
    self->glProgramUniform2f(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLfloat>(v0), static_cast<GLfloat>(v1));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform2iv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
    self->glProgramUniform2iv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform2i(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t v0, int32_t v1) {
    self->glProgramUniform2i(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLint>(v0), static_cast<GLint>(v1));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform1uiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
    self->glProgramUniform1uiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform1ui(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, uint32_t v0) {
    self->glProgramUniform1ui(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLuint>(v0));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform1dv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const double* value) {
    self->glProgramUniform1dv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLdouble*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform1d(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, double v0) {
    self->glProgramUniform1d(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLdouble>(v0));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform1fv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const float* value) {
    self->glProgramUniform1fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform1f(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, float v0) {
    self->glProgramUniform1f(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLfloat>(v0));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform1iv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
    self->glProgramUniform1iv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramUniform1i(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t v0) {
    self->glProgramUniform1i(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLint>(v0));
}

void QOpenGLFunctions_4_5_Core_GlGetProgramPipelineiv(QOpenGLFunctions_4_5_Core* self, uint32_t pipeline, uint32_t pname, int32_t* params) {
    self->glGetProgramPipelineiv(static_cast<GLuint>(pipeline), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

unsigned char QOpenGLFunctions_4_5_Core_GlIsProgramPipeline(QOpenGLFunctions_4_5_Core* self, uint32_t pipeline) {
    return self->glIsProgramPipeline(static_cast<GLuint>(pipeline));
}

void QOpenGLFunctions_4_5_Core_GlGenProgramPipelines(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* pipelines) {
    self->glGenProgramPipelines(static_cast<GLsizei>(n), static_cast<GLuint*>(pipelines));
}

void QOpenGLFunctions_4_5_Core_GlDeleteProgramPipelines(QOpenGLFunctions_4_5_Core* self, int32_t n, const uint32_t* pipelines) {
    self->glDeleteProgramPipelines(static_cast<GLsizei>(n), static_cast<const GLuint*>(pipelines));
}

void QOpenGLFunctions_4_5_Core_GlBindProgramPipeline(QOpenGLFunctions_4_5_Core* self, uint32_t pipeline) {
    self->glBindProgramPipeline(static_cast<GLuint>(pipeline));
}

void QOpenGLFunctions_4_5_Core_GlActiveShaderProgram(QOpenGLFunctions_4_5_Core* self, uint32_t pipeline, uint32_t program) {
    self->glActiveShaderProgram(static_cast<GLuint>(pipeline), static_cast<GLuint>(program));
}

void QOpenGLFunctions_4_5_Core_GlUseProgramStages(QOpenGLFunctions_4_5_Core* self, uint32_t pipeline, uint32_t stages, uint32_t program) {
    self->glUseProgramStages(static_cast<GLuint>(pipeline), static_cast<GLbitfield>(stages), static_cast<GLuint>(program));
}

void QOpenGLFunctions_4_5_Core_GlProgramParameteri(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t pname, int32_t value) {
    self->glProgramParameteri(static_cast<GLuint>(program), static_cast<GLenum>(pname), static_cast<GLint>(value));
}

void QOpenGLFunctions_4_5_Core_GlProgramBinary(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t binaryFormat, const void* binary, int32_t length) {
    self->glProgramBinary(static_cast<GLuint>(program), static_cast<GLenum>(binaryFormat), binary, static_cast<GLsizei>(length));
}

void QOpenGLFunctions_4_5_Core_GlClearDepthf(QOpenGLFunctions_4_5_Core* self, float dd) {
    self->glClearDepthf(static_cast<GLfloat>(dd));
}

void QOpenGLFunctions_4_5_Core_GlDepthRangef(QOpenGLFunctions_4_5_Core* self, float n, float f) {
    self->glDepthRangef(static_cast<GLfloat>(n), static_cast<GLfloat>(f));
}

void QOpenGLFunctions_4_5_Core_GlGetShaderPrecisionFormat(QOpenGLFunctions_4_5_Core* self, uint32_t shadertype, uint32_t precisiontype, int32_t* range, int32_t* precision) {
    self->glGetShaderPrecisionFormat(static_cast<GLenum>(shadertype), static_cast<GLenum>(precisiontype), static_cast<GLint*>(range), static_cast<GLint*>(precision));
}

void QOpenGLFunctions_4_5_Core_GlShaderBinary(QOpenGLFunctions_4_5_Core* self, int32_t count, const uint32_t* shaders, uint32_t binaryformat, const void* binary, int32_t length) {
    self->glShaderBinary(static_cast<GLsizei>(count), static_cast<const GLuint*>(shaders), static_cast<GLenum>(binaryformat), binary, static_cast<GLsizei>(length));
}

void QOpenGLFunctions_4_5_Core_GlReleaseShaderCompiler(QOpenGLFunctions_4_5_Core* self) {
    self->glReleaseShaderCompiler();
}

void QOpenGLFunctions_4_5_Core_GlDrawTransformFeedbackStreamInstanced(QOpenGLFunctions_4_5_Core* self, uint32_t mode, uint32_t id, uint32_t stream, int32_t instancecount) {
    self->glDrawTransformFeedbackStreamInstanced(static_cast<GLenum>(mode), static_cast<GLuint>(id), static_cast<GLuint>(stream), static_cast<GLsizei>(instancecount));
}

void QOpenGLFunctions_4_5_Core_GlDrawTransformFeedbackInstanced(QOpenGLFunctions_4_5_Core* self, uint32_t mode, uint32_t id, int32_t instancecount) {
    self->glDrawTransformFeedbackInstanced(static_cast<GLenum>(mode), static_cast<GLuint>(id), static_cast<GLsizei>(instancecount));
}

void QOpenGLFunctions_4_5_Core_GlTexStorage3D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height, int32_t depth) {
    self->glTexStorage3D(static_cast<GLenum>(target), static_cast<GLsizei>(levels), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth));
}

void QOpenGLFunctions_4_5_Core_GlTexStorage2D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height) {
    self->glTexStorage2D(static_cast<GLenum>(target), static_cast<GLsizei>(levels), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_4_5_Core_GlTexStorage1D(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width) {
    self->glTexStorage1D(static_cast<GLenum>(target), static_cast<GLsizei>(levels), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width));
}

void QOpenGLFunctions_4_5_Core_GlMemoryBarrier(QOpenGLFunctions_4_5_Core* self, uint32_t barriers) {
    self->glMemoryBarrier(static_cast<GLbitfield>(barriers));
}

void QOpenGLFunctions_4_5_Core_GlBindImageTexture(QOpenGLFunctions_4_5_Core* self, uint32_t unit, uint32_t texture, int32_t level, unsigned char layered, int32_t layer, uint32_t access, uint32_t format) {
    self->glBindImageTexture(static_cast<GLuint>(unit), static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLboolean>(layered), static_cast<GLint>(layer), static_cast<GLenum>(access), static_cast<GLenum>(format));
}

void QOpenGLFunctions_4_5_Core_GlGetActiveAtomicCounterBufferiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t bufferIndex, uint32_t pname, int32_t* params) {
    self->glGetActiveAtomicCounterBufferiv(static_cast<GLuint>(program), static_cast<GLuint>(bufferIndex), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetInternalformativ(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t internalformat, uint32_t pname, int32_t bufSize, int32_t* params) {
    self->glGetInternalformativ(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLenum>(pname), static_cast<GLsizei>(bufSize), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlDrawElementsInstancedBaseVertexBaseInstance(QOpenGLFunctions_4_5_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount, int32_t basevertex, uint32_t baseinstance) {
    self->glDrawElementsInstancedBaseVertexBaseInstance(static_cast<GLenum>(mode), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLsizei>(instancecount), static_cast<GLint>(basevertex), static_cast<GLuint>(baseinstance));
}

void QOpenGLFunctions_4_5_Core_GlDrawElementsInstancedBaseInstance(QOpenGLFunctions_4_5_Core* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount, uint32_t baseinstance) {
    self->glDrawElementsInstancedBaseInstance(static_cast<GLenum>(mode), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLsizei>(instancecount), static_cast<GLuint>(baseinstance));
}

void QOpenGLFunctions_4_5_Core_GlDrawArraysInstancedBaseInstance(QOpenGLFunctions_4_5_Core* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount, uint32_t baseinstance) {
    self->glDrawArraysInstancedBaseInstance(static_cast<GLenum>(mode), static_cast<GLint>(first), static_cast<GLsizei>(count), static_cast<GLsizei>(instancecount), static_cast<GLuint>(baseinstance));
}

void QOpenGLFunctions_4_5_Core_GlGetObjectPtrLabel(QOpenGLFunctions_4_5_Core* self, const void* ptr, int32_t bufSize, int32_t* length, GLchar* label) {
    self->glGetObjectPtrLabel(ptr, static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(label));
}

void QOpenGLFunctions_4_5_Core_GlObjectPtrLabel(QOpenGLFunctions_4_5_Core* self, const void* ptr, int32_t length, const GLchar* label) {
    self->glObjectPtrLabel(ptr, static_cast<GLsizei>(length), static_cast<const GLchar*>(label));
}

void QOpenGLFunctions_4_5_Core_GlGetObjectLabel(QOpenGLFunctions_4_5_Core* self, uint32_t identifier, uint32_t name, int32_t bufSize, int32_t* length, GLchar* label) {
    self->glGetObjectLabel(static_cast<GLenum>(identifier), static_cast<GLuint>(name), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(label));
}

void QOpenGLFunctions_4_5_Core_GlObjectLabel(QOpenGLFunctions_4_5_Core* self, uint32_t identifier, uint32_t name, int32_t length, const GLchar* label) {
    self->glObjectLabel(static_cast<GLenum>(identifier), static_cast<GLuint>(name), static_cast<GLsizei>(length), static_cast<const GLchar*>(label));
}

void QOpenGLFunctions_4_5_Core_GlPopDebugGroup(QOpenGLFunctions_4_5_Core* self) {
    self->glPopDebugGroup();
}

void QOpenGLFunctions_4_5_Core_GlPushDebugGroup(QOpenGLFunctions_4_5_Core* self, uint32_t source, uint32_t id, int32_t length, const GLchar* message) {
    self->glPushDebugGroup(static_cast<GLenum>(source), static_cast<GLuint>(id), static_cast<GLsizei>(length), static_cast<const GLchar*>(message));
}

void QOpenGLFunctions_4_5_Core_GlDebugMessageInsert(QOpenGLFunctions_4_5_Core* self, uint32_t source, uint32_t typeVal, uint32_t id, uint32_t severity, int32_t length, const GLchar* buf) {
    self->glDebugMessageInsert(static_cast<GLenum>(source), static_cast<GLenum>(typeVal), static_cast<GLuint>(id), static_cast<GLenum>(severity), static_cast<GLsizei>(length), static_cast<const GLchar*>(buf));
}

void QOpenGLFunctions_4_5_Core_GlDebugMessageControl(QOpenGLFunctions_4_5_Core* self, uint32_t source, uint32_t typeVal, uint32_t severity, int32_t count, const uint32_t* ids, unsigned char enabled) {
    self->glDebugMessageControl(static_cast<GLenum>(source), static_cast<GLenum>(typeVal), static_cast<GLenum>(severity), static_cast<GLsizei>(count), static_cast<const GLuint*>(ids), static_cast<GLboolean>(enabled));
}

void QOpenGLFunctions_4_5_Core_GlVertexBindingDivisor(QOpenGLFunctions_4_5_Core* self, uint32_t bindingindex, uint32_t divisor) {
    self->glVertexBindingDivisor(static_cast<GLuint>(bindingindex), static_cast<GLuint>(divisor));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribBinding(QOpenGLFunctions_4_5_Core* self, uint32_t attribindex, uint32_t bindingindex) {
    self->glVertexAttribBinding(static_cast<GLuint>(attribindex), static_cast<GLuint>(bindingindex));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribLFormat(QOpenGLFunctions_4_5_Core* self, uint32_t attribindex, int32_t size, uint32_t typeVal, uint32_t relativeoffset) {
    self->glVertexAttribLFormat(static_cast<GLuint>(attribindex), static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLuint>(relativeoffset));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribIFormat(QOpenGLFunctions_4_5_Core* self, uint32_t attribindex, int32_t size, uint32_t typeVal, uint32_t relativeoffset) {
    self->glVertexAttribIFormat(static_cast<GLuint>(attribindex), static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLuint>(relativeoffset));
}

void QOpenGLFunctions_4_5_Core_GlVertexAttribFormat(QOpenGLFunctions_4_5_Core* self, uint32_t attribindex, int32_t size, uint32_t typeVal, unsigned char normalized, uint32_t relativeoffset) {
    self->glVertexAttribFormat(static_cast<GLuint>(attribindex), static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLboolean>(normalized), static_cast<GLuint>(relativeoffset));
}

void QOpenGLFunctions_4_5_Core_GlBindVertexBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t bindingindex, uint32_t buffer, int64_t offset, int32_t stride) {
    self->glBindVertexBuffer(static_cast<GLuint>(bindingindex), static_cast<GLuint>(buffer), static_cast<GLintptr>(offset), static_cast<GLsizei>(stride));
}

void QOpenGLFunctions_4_5_Core_GlTextureView(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t target, uint32_t origtexture, uint32_t internalformat, uint32_t minlevel, uint32_t numlevels, uint32_t minlayer, uint32_t numlayers) {
    self->glTextureView(static_cast<GLuint>(texture), static_cast<GLenum>(target), static_cast<GLuint>(origtexture), static_cast<GLenum>(internalformat), static_cast<GLuint>(minlevel), static_cast<GLuint>(numlevels), static_cast<GLuint>(minlayer), static_cast<GLuint>(numlayers));
}

void QOpenGLFunctions_4_5_Core_GlTexStorage3DMultisample(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, unsigned char fixedsamplelocations) {
    self->glTexStorage3DMultisample(static_cast<GLenum>(target), static_cast<GLsizei>(samples), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLboolean>(fixedsamplelocations));
}

void QOpenGLFunctions_4_5_Core_GlTexStorage2DMultisample(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, unsigned char fixedsamplelocations) {
    self->glTexStorage2DMultisample(static_cast<GLenum>(target), static_cast<GLsizei>(samples), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLboolean>(fixedsamplelocations));
}

void QOpenGLFunctions_4_5_Core_GlTexBufferRange(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t internalformat, uint32_t buffer, int64_t offset, int64_t size) {
    self->glTexBufferRange(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLuint>(buffer), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(size));
}

void QOpenGLFunctions_4_5_Core_GlShaderStorageBlockBinding(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t storageBlockIndex, uint32_t storageBlockBinding) {
    self->glShaderStorageBlockBinding(static_cast<GLuint>(program), static_cast<GLuint>(storageBlockIndex), static_cast<GLuint>(storageBlockBinding));
}

int32_t QOpenGLFunctions_4_5_Core_GlGetProgramResourceLocationIndex(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t programInterface, const GLchar* name) {
    return self->glGetProgramResourceLocationIndex(static_cast<GLuint>(program), static_cast<GLenum>(programInterface), static_cast<const GLchar*>(name));
}

int32_t QOpenGLFunctions_4_5_Core_GlGetProgramResourceLocation(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t programInterface, const GLchar* name) {
    return self->glGetProgramResourceLocation(static_cast<GLuint>(program), static_cast<GLenum>(programInterface), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_4_5_Core_GlGetProgramResourceName(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t programInterface, uint32_t index, int32_t bufSize, int32_t* length, GLchar* name) {
    self->glGetProgramResourceName(static_cast<GLuint>(program), static_cast<GLenum>(programInterface), static_cast<GLuint>(index), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(name));
}

uint32_t QOpenGLFunctions_4_5_Core_GlGetProgramResourceIndex(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t programInterface, const GLchar* name) {
    return self->glGetProgramResourceIndex(static_cast<GLuint>(program), static_cast<GLenum>(programInterface), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_4_5_Core_GlGetProgramInterfaceiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, uint32_t programInterface, uint32_t pname, int32_t* params) {
    self->glGetProgramInterfaceiv(static_cast<GLuint>(program), static_cast<GLenum>(programInterface), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlMultiDrawElementsIndirect(QOpenGLFunctions_4_5_Core* self, uint32_t mode, uint32_t typeVal, const void* indirect, int32_t drawcount, int32_t stride) {
    self->glMultiDrawElementsIndirect(static_cast<GLenum>(mode), static_cast<GLenum>(typeVal), indirect, static_cast<GLsizei>(drawcount), static_cast<GLsizei>(stride));
}

void QOpenGLFunctions_4_5_Core_GlMultiDrawArraysIndirect(QOpenGLFunctions_4_5_Core* self, uint32_t mode, const void* indirect, int32_t drawcount, int32_t stride) {
    self->glMultiDrawArraysIndirect(static_cast<GLenum>(mode), indirect, static_cast<GLsizei>(drawcount), static_cast<GLsizei>(stride));
}

void QOpenGLFunctions_4_5_Core_GlInvalidateBufferData(QOpenGLFunctions_4_5_Core* self, uint32_t buffer) {
    self->glInvalidateBufferData(static_cast<GLuint>(buffer));
}

void QOpenGLFunctions_4_5_Core_GlInvalidateBufferSubData(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int64_t offset, int64_t length) {
    self->glInvalidateBufferSubData(static_cast<GLuint>(buffer), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(length));
}

void QOpenGLFunctions_4_5_Core_GlInvalidateTexImage(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level) {
    self->glInvalidateTexImage(static_cast<GLuint>(texture), static_cast<GLint>(level));
}

void QOpenGLFunctions_4_5_Core_GlInvalidateTexSubImage(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth) {
    self->glInvalidateTexSubImage(static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth));
}

void QOpenGLFunctions_4_5_Core_GlGetInternalformati64v(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t internalformat, uint32_t pname, int32_t bufSize, int64_t* params) {
    self->glGetInternalformati64v(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLenum>(pname), static_cast<GLsizei>(bufSize), static_cast<GLint64*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetFramebufferParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetFramebufferParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlFramebufferParameteri(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t pname, int32_t param) {
    self->glFramebufferParameteri(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_4_5_Core_GlCopyImageSubData(QOpenGLFunctions_4_5_Core* self, uint32_t srcName, uint32_t srcTarget, int32_t srcLevel, int32_t srcX, int32_t srcY, int32_t srcZ, uint32_t dstName, uint32_t dstTarget, int32_t dstLevel, int32_t dstX, int32_t dstY, int32_t dstZ, int32_t srcWidth, int32_t srcHeight, int32_t srcDepth) {
    self->glCopyImageSubData(static_cast<GLuint>(srcName), static_cast<GLenum>(srcTarget), static_cast<GLint>(srcLevel), static_cast<GLint>(srcX), static_cast<GLint>(srcY), static_cast<GLint>(srcZ), static_cast<GLuint>(dstName), static_cast<GLenum>(dstTarget), static_cast<GLint>(dstLevel), static_cast<GLint>(dstX), static_cast<GLint>(dstY), static_cast<GLint>(dstZ), static_cast<GLsizei>(srcWidth), static_cast<GLsizei>(srcHeight), static_cast<GLsizei>(srcDepth));
}

void QOpenGLFunctions_4_5_Core_GlDispatchComputeIndirect(QOpenGLFunctions_4_5_Core* self, int64_t indirect) {
    self->glDispatchComputeIndirect(static_cast<GLintptr>(indirect));
}

void QOpenGLFunctions_4_5_Core_GlDispatchCompute(QOpenGLFunctions_4_5_Core* self, uint32_t num_groups_x, uint32_t num_groups_y, uint32_t num_groups_z) {
    self->glDispatchCompute(static_cast<GLuint>(num_groups_x), static_cast<GLuint>(num_groups_y), static_cast<GLuint>(num_groups_z));
}

void QOpenGLFunctions_4_5_Core_GlClearBufferSubData(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t internalformat, int64_t offset, int64_t size, uint32_t format, uint32_t typeVal, const void* data) {
    self->glClearBufferSubData(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(size), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), data);
}

void QOpenGLFunctions_4_5_Core_GlClearBufferData(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t internalformat, uint32_t format, uint32_t typeVal, const void* data) {
    self->glClearBufferData(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), data);
}

void QOpenGLFunctions_4_5_Core_GlBindVertexBuffers(QOpenGLFunctions_4_5_Core* self, uint32_t first, int32_t count, const uint32_t* buffers, const int64_t* offsets, const int32_t* strides) {
    self->glBindVertexBuffers(static_cast<GLuint>(first), static_cast<GLsizei>(count), static_cast<const GLuint*>(buffers), static_cast<const GLintptr*>(offsets), static_cast<const GLsizei*>(strides));
}

void QOpenGLFunctions_4_5_Core_GlBindImageTextures(QOpenGLFunctions_4_5_Core* self, uint32_t first, int32_t count, const uint32_t* textures) {
    self->glBindImageTextures(static_cast<GLuint>(first), static_cast<GLsizei>(count), static_cast<const GLuint*>(textures));
}

void QOpenGLFunctions_4_5_Core_GlBindSamplers(QOpenGLFunctions_4_5_Core* self, uint32_t first, int32_t count, const uint32_t* samplers) {
    self->glBindSamplers(static_cast<GLuint>(first), static_cast<GLsizei>(count), static_cast<const GLuint*>(samplers));
}

void QOpenGLFunctions_4_5_Core_GlBindTextures(QOpenGLFunctions_4_5_Core* self, uint32_t first, int32_t count, const uint32_t* textures) {
    self->glBindTextures(static_cast<GLuint>(first), static_cast<GLsizei>(count), static_cast<const GLuint*>(textures));
}

void QOpenGLFunctions_4_5_Core_GlBindBuffersRange(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t first, int32_t count, const uint32_t* buffers, const int64_t* offsets, const int64_t* sizes) {
    self->glBindBuffersRange(static_cast<GLenum>(target), static_cast<GLuint>(first), static_cast<GLsizei>(count), static_cast<const GLuint*>(buffers), static_cast<const GLintptr*>(offsets), static_cast<const GLsizeiptr*>(sizes));
}

void QOpenGLFunctions_4_5_Core_GlBindBuffersBase(QOpenGLFunctions_4_5_Core* self, uint32_t target, uint32_t first, int32_t count, const uint32_t* buffers) {
    self->glBindBuffersBase(static_cast<GLenum>(target), static_cast<GLuint>(first), static_cast<GLsizei>(count), static_cast<const GLuint*>(buffers));
}

void QOpenGLFunctions_4_5_Core_GlClearTexSubImage(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t typeVal, const void* data) {
    self->glClearTexSubImage(static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), data);
}

void QOpenGLFunctions_4_5_Core_GlClearTexImage(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, uint32_t format, uint32_t typeVal, const void* data) {
    self->glClearTexImage(static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), data);
}

void QOpenGLFunctions_4_5_Core_GlBufferStorage(QOpenGLFunctions_4_5_Core* self, uint32_t target, int64_t size, const void* data, uint32_t flags) {
    self->glBufferStorage(static_cast<GLenum>(target), static_cast<GLsizeiptr>(size), data, static_cast<GLbitfield>(flags));
}

void QOpenGLFunctions_4_5_Core_GlTextureBarrier(QOpenGLFunctions_4_5_Core* self) {
    self->glTextureBarrier();
}

void QOpenGLFunctions_4_5_Core_GlReadnPixels(QOpenGLFunctions_4_5_Core* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, int32_t bufSize, void* data) {
    self->glReadnPixels(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), static_cast<GLsizei>(bufSize), data);
}

void QOpenGLFunctions_4_5_Core_GlGetnUniformuiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t bufSize, uint32_t* params) {
    self->glGetnUniformuiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(bufSize), static_cast<GLuint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetnUniformiv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t bufSize, int32_t* params) {
    self->glGetnUniformiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(bufSize), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetnUniformfv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t bufSize, float* params) {
    self->glGetnUniformfv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(bufSize), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetnUniformdv(QOpenGLFunctions_4_5_Core* self, uint32_t program, int32_t location, int32_t bufSize, double* params) {
    self->glGetnUniformdv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(bufSize), static_cast<GLdouble*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetnTexImage(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t level, uint32_t format, uint32_t typeVal, int32_t bufSize, void* pixels) {
    self->glGetnTexImage(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), static_cast<GLsizei>(bufSize), pixels);
}

void QOpenGLFunctions_4_5_Core_GlGetnCompressedTexImage(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t lod, int32_t bufSize, void* pixels) {
    self->glGetnCompressedTexImage(static_cast<GLenum>(target), static_cast<GLint>(lod), static_cast<GLsizei>(bufSize), pixels);
}

void QOpenGLFunctions_4_5_Core_GlGetCompressedTextureSubImage(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, int32_t bufSize, void* pixels) {
    self->glGetCompressedTextureSubImage(static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLsizei>(bufSize), pixels);
}

void QOpenGLFunctions_4_5_Core_GlGetTextureSubImage(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t typeVal, int32_t bufSize, void* pixels) {
    self->glGetTextureSubImage(static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), static_cast<GLsizei>(bufSize), pixels);
}

void QOpenGLFunctions_4_5_Core_GlMemoryBarrierByRegion(QOpenGLFunctions_4_5_Core* self, uint32_t barriers) {
    self->glMemoryBarrierByRegion(static_cast<GLbitfield>(barriers));
}

void QOpenGLFunctions_4_5_Core_GlCreateQueries(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t n, uint32_t* ids) {
    self->glCreateQueries(static_cast<GLenum>(target), static_cast<GLsizei>(n), static_cast<GLuint*>(ids));
}

void QOpenGLFunctions_4_5_Core_GlCreateProgramPipelines(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* pipelines) {
    self->glCreateProgramPipelines(static_cast<GLsizei>(n), static_cast<GLuint*>(pipelines));
}

void QOpenGLFunctions_4_5_Core_GlCreateSamplers(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* samplers) {
    self->glCreateSamplers(static_cast<GLsizei>(n), static_cast<GLuint*>(samplers));
}

void QOpenGLFunctions_4_5_Core_GlGetVertexArrayIndexed64iv(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t index, uint32_t pname, int64_t* param) {
    self->glGetVertexArrayIndexed64iv(static_cast<GLuint>(vaobj), static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLint64*>(param));
}

void QOpenGLFunctions_4_5_Core_GlGetVertexArrayIndexediv(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t index, uint32_t pname, int32_t* param) {
    self->glGetVertexArrayIndexediv(static_cast<GLuint>(vaobj), static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLint*>(param));
}

void QOpenGLFunctions_4_5_Core_GlGetVertexArrayiv(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t pname, int32_t* param) {
    self->glGetVertexArrayiv(static_cast<GLuint>(vaobj), static_cast<GLenum>(pname), static_cast<GLint*>(param));
}

void QOpenGLFunctions_4_5_Core_GlVertexArrayBindingDivisor(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t bindingindex, uint32_t divisor) {
    self->glVertexArrayBindingDivisor(static_cast<GLuint>(vaobj), static_cast<GLuint>(bindingindex), static_cast<GLuint>(divisor));
}

void QOpenGLFunctions_4_5_Core_GlVertexArrayAttribLFormat(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t attribindex, int32_t size, uint32_t typeVal, uint32_t relativeoffset) {
    self->glVertexArrayAttribLFormat(static_cast<GLuint>(vaobj), static_cast<GLuint>(attribindex), static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLuint>(relativeoffset));
}

void QOpenGLFunctions_4_5_Core_GlVertexArrayAttribIFormat(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t attribindex, int32_t size, uint32_t typeVal, uint32_t relativeoffset) {
    self->glVertexArrayAttribIFormat(static_cast<GLuint>(vaobj), static_cast<GLuint>(attribindex), static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLuint>(relativeoffset));
}

void QOpenGLFunctions_4_5_Core_GlVertexArrayAttribFormat(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t attribindex, int32_t size, uint32_t typeVal, unsigned char normalized, uint32_t relativeoffset) {
    self->glVertexArrayAttribFormat(static_cast<GLuint>(vaobj), static_cast<GLuint>(attribindex), static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLboolean>(normalized), static_cast<GLuint>(relativeoffset));
}

void QOpenGLFunctions_4_5_Core_GlVertexArrayAttribBinding(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t attribindex, uint32_t bindingindex) {
    self->glVertexArrayAttribBinding(static_cast<GLuint>(vaobj), static_cast<GLuint>(attribindex), static_cast<GLuint>(bindingindex));
}

void QOpenGLFunctions_4_5_Core_GlVertexArrayVertexBuffers(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t first, int32_t count, const uint32_t* buffers, const int64_t* offsets, const int32_t* strides) {
    self->glVertexArrayVertexBuffers(static_cast<GLuint>(vaobj), static_cast<GLuint>(first), static_cast<GLsizei>(count), static_cast<const GLuint*>(buffers), static_cast<const GLintptr*>(offsets), static_cast<const GLsizei*>(strides));
}

void QOpenGLFunctions_4_5_Core_GlVertexArrayVertexBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t bindingindex, uint32_t buffer, int64_t offset, int32_t stride) {
    self->glVertexArrayVertexBuffer(static_cast<GLuint>(vaobj), static_cast<GLuint>(bindingindex), static_cast<GLuint>(buffer), static_cast<GLintptr>(offset), static_cast<GLsizei>(stride));
}

void QOpenGLFunctions_4_5_Core_GlVertexArrayElementBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t buffer) {
    self->glVertexArrayElementBuffer(static_cast<GLuint>(vaobj), static_cast<GLuint>(buffer));
}

void QOpenGLFunctions_4_5_Core_GlEnableVertexArrayAttrib(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t index) {
    self->glEnableVertexArrayAttrib(static_cast<GLuint>(vaobj), static_cast<GLuint>(index));
}

void QOpenGLFunctions_4_5_Core_GlDisableVertexArrayAttrib(QOpenGLFunctions_4_5_Core* self, uint32_t vaobj, uint32_t index) {
    self->glDisableVertexArrayAttrib(static_cast<GLuint>(vaobj), static_cast<GLuint>(index));
}

void QOpenGLFunctions_4_5_Core_GlCreateVertexArrays(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* arrays) {
    self->glCreateVertexArrays(static_cast<GLsizei>(n), static_cast<GLuint*>(arrays));
}

void QOpenGLFunctions_4_5_Core_GlGetTextureParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, int32_t* params) {
    self->glGetTextureParameteriv(static_cast<GLuint>(texture), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetTextureParameterIuiv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, uint32_t* params) {
    self->glGetTextureParameterIuiv(static_cast<GLuint>(texture), static_cast<GLenum>(pname), static_cast<GLuint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetTextureParameterIiv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, int32_t* params) {
    self->glGetTextureParameterIiv(static_cast<GLuint>(texture), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetTextureParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, float* params) {
    self->glGetTextureParameterfv(static_cast<GLuint>(texture), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetTextureLevelParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, uint32_t pname, int32_t* params) {
    self->glGetTextureLevelParameteriv(static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetTextureLevelParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, uint32_t pname, float* params) {
    self->glGetTextureLevelParameterfv(static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetCompressedTextureImage(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t bufSize, void* pixels) {
    self->glGetCompressedTextureImage(static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLsizei>(bufSize), pixels);
}

void QOpenGLFunctions_4_5_Core_GlGetTextureImage(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, uint32_t format, uint32_t typeVal, int32_t bufSize, void* pixels) {
    self->glGetTextureImage(static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), static_cast<GLsizei>(bufSize), pixels);
}

void QOpenGLFunctions_4_5_Core_GlBindTextureUnit(QOpenGLFunctions_4_5_Core* self, uint32_t unit, uint32_t texture) {
    self->glBindTextureUnit(static_cast<GLuint>(unit), static_cast<GLuint>(texture));
}

void QOpenGLFunctions_4_5_Core_GlGenerateTextureMipmap(QOpenGLFunctions_4_5_Core* self, uint32_t texture) {
    self->glGenerateTextureMipmap(static_cast<GLuint>(texture));
}

void QOpenGLFunctions_4_5_Core_GlTextureParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, const int32_t* param) {
    self->glTextureParameteriv(static_cast<GLuint>(texture), static_cast<GLenum>(pname), static_cast<const GLint*>(param));
}

void QOpenGLFunctions_4_5_Core_GlTextureParameterIuiv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, const uint32_t* params) {
    self->glTextureParameterIuiv(static_cast<GLuint>(texture), static_cast<GLenum>(pname), static_cast<const GLuint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlTextureParameterIiv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, const int32_t* params) {
    self->glTextureParameterIiv(static_cast<GLuint>(texture), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlTextureParameteri(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, int32_t param) {
    self->glTextureParameteri(static_cast<GLuint>(texture), static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_4_5_Core_GlTextureParameterfv(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, const float* param) {
    self->glTextureParameterfv(static_cast<GLuint>(texture), static_cast<GLenum>(pname), static_cast<const GLfloat*>(param));
}

void QOpenGLFunctions_4_5_Core_GlTextureParameterf(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t pname, float param) {
    self->glTextureParameterf(static_cast<GLuint>(texture), static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_4_5_Core_GlCopyTextureSubImage3D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glCopyTextureSubImage3D(static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_4_5_Core_GlCopyTextureSubImage2D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glCopyTextureSubImage2D(static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_4_5_Core_GlCopyTextureSubImage1D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width) {
    self->glCopyTextureSubImage1D(static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width));
}

void QOpenGLFunctions_4_5_Core_GlCompressedTextureSubImage3D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, const void* data) {
    self->glCompressedTextureSubImage3D(static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLenum>(format), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_4_5_Core_GlCompressedTextureSubImage2D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, const void* data) {
    self->glCompressedTextureSubImage2D(static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_4_5_Core_GlCompressedTextureSubImage1D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, const void* data) {
    self->glCompressedTextureSubImage1D(static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLsizei>(width), static_cast<GLenum>(format), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_4_5_Core_GlTextureSubImage3D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTextureSubImage3D(static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_4_5_Core_GlTextureSubImage2D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTextureSubImage2D(static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_4_5_Core_GlTextureSubImage1D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTextureSubImage1D(static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLsizei>(width), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_4_5_Core_GlTextureStorage3DMultisample(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, unsigned char fixedsamplelocations) {
    self->glTextureStorage3DMultisample(static_cast<GLuint>(texture), static_cast<GLsizei>(samples), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLboolean>(fixedsamplelocations));
}

void QOpenGLFunctions_4_5_Core_GlTextureStorage2DMultisample(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, unsigned char fixedsamplelocations) {
    self->glTextureStorage2DMultisample(static_cast<GLuint>(texture), static_cast<GLsizei>(samples), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLboolean>(fixedsamplelocations));
}

void QOpenGLFunctions_4_5_Core_GlTextureStorage3D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t levels, uint32_t internalformat, int32_t width, int32_t height, int32_t depth) {
    self->glTextureStorage3D(static_cast<GLuint>(texture), static_cast<GLsizei>(levels), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth));
}

void QOpenGLFunctions_4_5_Core_GlTextureStorage2D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t levels, uint32_t internalformat, int32_t width, int32_t height) {
    self->glTextureStorage2D(static_cast<GLuint>(texture), static_cast<GLsizei>(levels), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_4_5_Core_GlTextureStorage1D(QOpenGLFunctions_4_5_Core* self, uint32_t texture, int32_t levels, uint32_t internalformat, int32_t width) {
    self->glTextureStorage1D(static_cast<GLuint>(texture), static_cast<GLsizei>(levels), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width));
}

void QOpenGLFunctions_4_5_Core_GlTextureBufferRange(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t internalformat, uint32_t buffer, int64_t offset, int32_t size) {
    self->glTextureBufferRange(static_cast<GLuint>(texture), static_cast<GLenum>(internalformat), static_cast<GLuint>(buffer), static_cast<GLintptr>(offset), static_cast<GLsizei>(size));
}

void QOpenGLFunctions_4_5_Core_GlTextureBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t texture, uint32_t internalformat, uint32_t buffer) {
    self->glTextureBuffer(static_cast<GLuint>(texture), static_cast<GLenum>(internalformat), static_cast<GLuint>(buffer));
}

void QOpenGLFunctions_4_5_Core_GlCreateTextures(QOpenGLFunctions_4_5_Core* self, uint32_t target, int32_t n, uint32_t* textures) {
    self->glCreateTextures(static_cast<GLenum>(target), static_cast<GLsizei>(n), static_cast<GLuint*>(textures));
}

void QOpenGLFunctions_4_5_Core_GlGetNamedRenderbufferParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t renderbuffer, uint32_t pname, int32_t* params) {
    self->glGetNamedRenderbufferParameteriv(static_cast<GLuint>(renderbuffer), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlNamedRenderbufferStorageMultisample(QOpenGLFunctions_4_5_Core* self, uint32_t renderbuffer, int32_t samples, uint32_t internalformat, int32_t width, int32_t height) {
    self->glNamedRenderbufferStorageMultisample(static_cast<GLuint>(renderbuffer), static_cast<GLsizei>(samples), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_4_5_Core_GlNamedRenderbufferStorage(QOpenGLFunctions_4_5_Core* self, uint32_t renderbuffer, uint32_t internalformat, int32_t width, int32_t height) {
    self->glNamedRenderbufferStorage(static_cast<GLuint>(renderbuffer), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_4_5_Core_GlCreateRenderbuffers(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* renderbuffers) {
    self->glCreateRenderbuffers(static_cast<GLsizei>(n), static_cast<GLuint*>(renderbuffers));
}

void QOpenGLFunctions_4_5_Core_GlGetNamedFramebufferAttachmentParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t attachment, uint32_t pname, int32_t* params) {
    self->glGetNamedFramebufferAttachmentParameteriv(static_cast<GLuint>(framebuffer), static_cast<GLenum>(attachment), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetNamedFramebufferParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t pname, int32_t* param) {
    self->glGetNamedFramebufferParameteriv(static_cast<GLuint>(framebuffer), static_cast<GLenum>(pname), static_cast<GLint*>(param));
}

void QOpenGLFunctions_4_5_Core_GlBlitNamedFramebuffer(QOpenGLFunctions_4_5_Core* self, uint32_t readFramebuffer, uint32_t drawFramebuffer, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter) {
    self->glBlitNamedFramebuffer(static_cast<GLuint>(readFramebuffer), static_cast<GLuint>(drawFramebuffer), static_cast<GLint>(srcX0), static_cast<GLint>(srcY0), static_cast<GLint>(srcX1), static_cast<GLint>(srcY1), static_cast<GLint>(dstX0), static_cast<GLint>(dstY0), static_cast<GLint>(dstX1), static_cast<GLint>(dstY1), static_cast<GLbitfield>(mask), static_cast<GLenum>(filter));
}

void QOpenGLFunctions_4_5_Core_GlClearNamedFramebufferfi(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t buffer, float depth, int32_t stencil) {
    self->glClearNamedFramebufferfi(static_cast<GLuint>(framebuffer), static_cast<GLenum>(buffer), static_cast<GLfloat>(depth), static_cast<GLint>(stencil));
}

void QOpenGLFunctions_4_5_Core_GlClearNamedFramebufferfv(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t buffer, int32_t drawbuffer, const float* value) {
    self->glClearNamedFramebufferfv(static_cast<GLuint>(framebuffer), static_cast<GLenum>(buffer), static_cast<GLint>(drawbuffer), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_4_5_Core_GlClearNamedFramebufferuiv(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t buffer, int32_t drawbuffer, const uint32_t* value) {
    self->glClearNamedFramebufferuiv(static_cast<GLuint>(framebuffer), static_cast<GLenum>(buffer), static_cast<GLint>(drawbuffer), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlClearNamedFramebufferiv(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t buffer, int32_t drawbuffer, const int32_t* value) {
    self->glClearNamedFramebufferiv(static_cast<GLuint>(framebuffer), static_cast<GLenum>(buffer), static_cast<GLint>(drawbuffer), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_4_5_Core_GlNamedFramebufferReadBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t src) {
    self->glNamedFramebufferReadBuffer(static_cast<GLuint>(framebuffer), static_cast<GLenum>(src));
}

void QOpenGLFunctions_4_5_Core_GlNamedFramebufferDrawBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t buf) {
    self->glNamedFramebufferDrawBuffer(static_cast<GLuint>(framebuffer), static_cast<GLenum>(buf));
}

void QOpenGLFunctions_4_5_Core_GlNamedFramebufferTextureLayer(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer) {
    self->glNamedFramebufferTextureLayer(static_cast<GLuint>(framebuffer), static_cast<GLenum>(attachment), static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(layer));
}

void QOpenGLFunctions_4_5_Core_GlNamedFramebufferTexture(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t attachment, uint32_t texture, int32_t level) {
    self->glNamedFramebufferTexture(static_cast<GLuint>(framebuffer), static_cast<GLenum>(attachment), static_cast<GLuint>(texture), static_cast<GLint>(level));
}

void QOpenGLFunctions_4_5_Core_GlNamedFramebufferParameteri(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t pname, int32_t param) {
    self->glNamedFramebufferParameteri(static_cast<GLuint>(framebuffer), static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_4_5_Core_GlNamedFramebufferRenderbuffer(QOpenGLFunctions_4_5_Core* self, uint32_t framebuffer, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer) {
    self->glNamedFramebufferRenderbuffer(static_cast<GLuint>(framebuffer), static_cast<GLenum>(attachment), static_cast<GLenum>(renderbuffertarget), static_cast<GLuint>(renderbuffer));
}

void QOpenGLFunctions_4_5_Core_GlCreateFramebuffers(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* framebuffers) {
    self->glCreateFramebuffers(static_cast<GLsizei>(n), static_cast<GLuint*>(framebuffers));
}

void QOpenGLFunctions_4_5_Core_GlGetNamedBufferSubData(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int64_t offset, int64_t size, void* data) {
    self->glGetNamedBufferSubData(static_cast<GLuint>(buffer), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(size), data);
}

void QOpenGLFunctions_4_5_Core_GlGetNamedBufferPointerv(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, uint32_t pname, void** params) {
    self->glGetNamedBufferPointerv(static_cast<GLuint>(buffer), static_cast<GLenum>(pname), params);
}

void QOpenGLFunctions_4_5_Core_GlGetNamedBufferParameteri64v(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, uint32_t pname, int64_t* params) {
    self->glGetNamedBufferParameteri64v(static_cast<GLuint>(buffer), static_cast<GLenum>(pname), static_cast<GLint64*>(params));
}

void QOpenGLFunctions_4_5_Core_GlGetNamedBufferParameteriv(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, uint32_t pname, int32_t* params) {
    self->glGetNamedBufferParameteriv(static_cast<GLuint>(buffer), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_4_5_Core_GlFlushMappedNamedBufferRange(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int64_t offset, int64_t length) {
    self->glFlushMappedNamedBufferRange(static_cast<GLuint>(buffer), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(length));
}

unsigned char QOpenGLFunctions_4_5_Core_GlUnmapNamedBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t buffer) {
    return self->glUnmapNamedBuffer(static_cast<GLuint>(buffer));
}

void* QOpenGLFunctions_4_5_Core_GlMapNamedBufferRange(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int64_t offset, int64_t length, uint32_t access) {
    return self->glMapNamedBufferRange(static_cast<GLuint>(buffer), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(length), static_cast<GLbitfield>(access));
}

void* QOpenGLFunctions_4_5_Core_GlMapNamedBuffer(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, uint32_t access) {
    return self->glMapNamedBuffer(static_cast<GLuint>(buffer), static_cast<GLenum>(access));
}

void QOpenGLFunctions_4_5_Core_GlClearNamedBufferSubData(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, uint32_t internalformat, int64_t offset, int64_t size, uint32_t format, uint32_t typeVal, const void* data) {
    self->glClearNamedBufferSubData(static_cast<GLuint>(buffer), static_cast<GLenum>(internalformat), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(size), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), data);
}

void QOpenGLFunctions_4_5_Core_GlClearNamedBufferData(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, uint32_t internalformat, uint32_t format, uint32_t typeVal, const void* data) {
    self->glClearNamedBufferData(static_cast<GLuint>(buffer), static_cast<GLenum>(internalformat), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), data);
}

void QOpenGLFunctions_4_5_Core_GlCopyNamedBufferSubData(QOpenGLFunctions_4_5_Core* self, uint32_t readBuffer, uint32_t writeBuffer, int64_t readOffset, int64_t writeOffset, int64_t size) {
    self->glCopyNamedBufferSubData(static_cast<GLuint>(readBuffer), static_cast<GLuint>(writeBuffer), static_cast<GLintptr>(readOffset), static_cast<GLintptr>(writeOffset), static_cast<GLsizeiptr>(size));
}

void QOpenGLFunctions_4_5_Core_GlNamedBufferSubData(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int64_t offset, int64_t size, const void* data) {
    self->glNamedBufferSubData(static_cast<GLuint>(buffer), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(size), data);
}

void QOpenGLFunctions_4_5_Core_GlNamedBufferData(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int64_t size, const void* data, uint32_t usage) {
    self->glNamedBufferData(static_cast<GLuint>(buffer), static_cast<GLsizeiptr>(size), data, static_cast<GLenum>(usage));
}

void QOpenGLFunctions_4_5_Core_GlNamedBufferStorage(QOpenGLFunctions_4_5_Core* self, uint32_t buffer, int64_t size, const void* data, uint32_t flags) {
    self->glNamedBufferStorage(static_cast<GLuint>(buffer), static_cast<GLsizeiptr>(size), data, static_cast<GLbitfield>(flags));
}

void QOpenGLFunctions_4_5_Core_GlCreateBuffers(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* buffers) {
    self->glCreateBuffers(static_cast<GLsizei>(n), static_cast<GLuint*>(buffers));
}

void QOpenGLFunctions_4_5_Core_GlGetTransformFeedbacki64V(QOpenGLFunctions_4_5_Core* self, uint32_t xfb, uint32_t pname, uint32_t index, int64_t* param) {
    self->glGetTransformFeedbacki64_v(static_cast<GLuint>(xfb), static_cast<GLenum>(pname), static_cast<GLuint>(index), static_cast<GLint64*>(param));
}

void QOpenGLFunctions_4_5_Core_GlGetTransformFeedbackiV(QOpenGLFunctions_4_5_Core* self, uint32_t xfb, uint32_t pname, uint32_t index, int32_t* param) {
    self->glGetTransformFeedbacki_v(static_cast<GLuint>(xfb), static_cast<GLenum>(pname), static_cast<GLuint>(index), static_cast<GLint*>(param));
}

void QOpenGLFunctions_4_5_Core_GlGetTransformFeedbackiv(QOpenGLFunctions_4_5_Core* self, uint32_t xfb, uint32_t pname, int32_t* param) {
    self->glGetTransformFeedbackiv(static_cast<GLuint>(xfb), static_cast<GLenum>(pname), static_cast<GLint*>(param));
}

void QOpenGLFunctions_4_5_Core_GlTransformFeedbackBufferRange(QOpenGLFunctions_4_5_Core* self, uint32_t xfb, uint32_t index, uint32_t buffer, int64_t offset, int64_t size) {
    self->glTransformFeedbackBufferRange(static_cast<GLuint>(xfb), static_cast<GLuint>(index), static_cast<GLuint>(buffer), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(size));
}

void QOpenGLFunctions_4_5_Core_GlTransformFeedbackBufferBase(QOpenGLFunctions_4_5_Core* self, uint32_t xfb, uint32_t index, uint32_t buffer) {
    self->glTransformFeedbackBufferBase(static_cast<GLuint>(xfb), static_cast<GLuint>(index), static_cast<GLuint>(buffer));
}

void QOpenGLFunctions_4_5_Core_GlCreateTransformFeedbacks(QOpenGLFunctions_4_5_Core* self, int32_t n, uint32_t* ids) {
    self->glCreateTransformFeedbacks(static_cast<GLsizei>(n), static_cast<GLuint*>(ids));
}

void QOpenGLFunctions_4_5_Core_GlClipControl(QOpenGLFunctions_4_5_Core* self, uint32_t origin, uint32_t depth) {
    self->glClipControl(static_cast<GLenum>(origin), static_cast<GLenum>(depth));
}

// Base class handler implementation
bool QOpenGLFunctions_4_5_Core_QBaseInitializeOpenGLFunctions(QOpenGLFunctions_4_5_Core* self) {
    auto* vqopenglfunctions_4_5_core = dynamic_cast<VirtualQOpenGLFunctions_4_5_Core*>(self);
    if (vqopenglfunctions_4_5_core && vqopenglfunctions_4_5_core->isVirtualQOpenGLFunctions_4_5_Core) {
        vqopenglfunctions_4_5_core->setQOpenGLFunctions_4_5_Core_InitializeOpenGLFunctions_IsBase(true);
        return vqopenglfunctions_4_5_core->initializeOpenGLFunctions();
    } else {
        return self->QOpenGLFunctions_4_5_Core::initializeOpenGLFunctions();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_4_5_Core_OnInitializeOpenGLFunctions(QOpenGLFunctions_4_5_Core* self, intptr_t slot) {
    auto* vqopenglfunctions_4_5_core = dynamic_cast<VirtualQOpenGLFunctions_4_5_Core*>(self);
    if (vqopenglfunctions_4_5_core && vqopenglfunctions_4_5_core->isVirtualQOpenGLFunctions_4_5_Core) {
        vqopenglfunctions_4_5_core->setQOpenGLFunctions_4_5_Core_InitializeOpenGLFunctions_Callback(reinterpret_cast<VirtualQOpenGLFunctions_4_5_Core::QOpenGLFunctions_4_5_Core_InitializeOpenGLFunctions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLFunctions_4_5_Core_IsInitialized(const QOpenGLFunctions_4_5_Core* self) {
    auto* vqopenglfunctions_4_5_core = const_cast<VirtualQOpenGLFunctions_4_5_Core*>(dynamic_cast<const VirtualQOpenGLFunctions_4_5_Core*>(self));
    if (vqopenglfunctions_4_5_core && vqopenglfunctions_4_5_core->isVirtualQOpenGLFunctions_4_5_Core) {
        return vqopenglfunctions_4_5_core->isInitialized();
    } else {
        return ((VirtualQOpenGLFunctions_4_5_Core*)self)->isInitialized();
    }
}

// Base class handler implementation
bool QOpenGLFunctions_4_5_Core_QBaseIsInitialized(const QOpenGLFunctions_4_5_Core* self) {
    auto* vqopenglfunctions_4_5_core = const_cast<VirtualQOpenGLFunctions_4_5_Core*>(dynamic_cast<const VirtualQOpenGLFunctions_4_5_Core*>(self));
    if (vqopenglfunctions_4_5_core && vqopenglfunctions_4_5_core->isVirtualQOpenGLFunctions_4_5_Core) {
        vqopenglfunctions_4_5_core->setQOpenGLFunctions_4_5_Core_IsInitialized_IsBase(true);
        return vqopenglfunctions_4_5_core->isInitialized();
    } else {
        return ((VirtualQOpenGLFunctions_4_5_Core*)self)->isInitialized();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_4_5_Core_OnIsInitialized(const QOpenGLFunctions_4_5_Core* self, intptr_t slot) {
    auto* vqopenglfunctions_4_5_core = const_cast<VirtualQOpenGLFunctions_4_5_Core*>(dynamic_cast<const VirtualQOpenGLFunctions_4_5_Core*>(self));
    if (vqopenglfunctions_4_5_core && vqopenglfunctions_4_5_core->isVirtualQOpenGLFunctions_4_5_Core) {
        vqopenglfunctions_4_5_core->setQOpenGLFunctions_4_5_Core_IsInitialized_Callback(reinterpret_cast<VirtualQOpenGLFunctions_4_5_Core::QOpenGLFunctions_4_5_Core_IsInitialized_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLFunctions_4_5_Core_SetOwningContext(QOpenGLFunctions_4_5_Core* self, const QOpenGLContext* context) {
    auto* vqopenglfunctions_4_5_core = dynamic_cast<VirtualQOpenGLFunctions_4_5_Core*>(self);
    if (vqopenglfunctions_4_5_core && vqopenglfunctions_4_5_core->isVirtualQOpenGLFunctions_4_5_Core) {
        vqopenglfunctions_4_5_core->setOwningContext(context);
    } else {
        ((VirtualQOpenGLFunctions_4_5_Core*)self)->setOwningContext(context);
    }
}

// Base class handler implementation
void QOpenGLFunctions_4_5_Core_QBaseSetOwningContext(QOpenGLFunctions_4_5_Core* self, const QOpenGLContext* context) {
    auto* vqopenglfunctions_4_5_core = dynamic_cast<VirtualQOpenGLFunctions_4_5_Core*>(self);
    if (vqopenglfunctions_4_5_core && vqopenglfunctions_4_5_core->isVirtualQOpenGLFunctions_4_5_Core) {
        vqopenglfunctions_4_5_core->setQOpenGLFunctions_4_5_Core_SetOwningContext_IsBase(true);
        vqopenglfunctions_4_5_core->setOwningContext(context);
    } else {
        ((VirtualQOpenGLFunctions_4_5_Core*)self)->setOwningContext(context);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_4_5_Core_OnSetOwningContext(QOpenGLFunctions_4_5_Core* self, intptr_t slot) {
    auto* vqopenglfunctions_4_5_core = dynamic_cast<VirtualQOpenGLFunctions_4_5_Core*>(self);
    if (vqopenglfunctions_4_5_core && vqopenglfunctions_4_5_core->isVirtualQOpenGLFunctions_4_5_Core) {
        vqopenglfunctions_4_5_core->setQOpenGLFunctions_4_5_Core_SetOwningContext_Callback(reinterpret_cast<VirtualQOpenGLFunctions_4_5_Core::QOpenGLFunctions_4_5_Core_SetOwningContext_Callback>(slot));
    }
}

// Derived class handler implementation
QOpenGLContext* QOpenGLFunctions_4_5_Core_OwningContext(const QOpenGLFunctions_4_5_Core* self) {
    auto* vqopenglfunctions_4_5_core = const_cast<VirtualQOpenGLFunctions_4_5_Core*>(dynamic_cast<const VirtualQOpenGLFunctions_4_5_Core*>(self));
    if (vqopenglfunctions_4_5_core && vqopenglfunctions_4_5_core->isVirtualQOpenGLFunctions_4_5_Core) {
        return vqopenglfunctions_4_5_core->owningContext();
    } else {
        return ((VirtualQOpenGLFunctions_4_5_Core*)self)->owningContext();
    }
}

// Base class handler implementation
QOpenGLContext* QOpenGLFunctions_4_5_Core_QBaseOwningContext(const QOpenGLFunctions_4_5_Core* self) {
    auto* vqopenglfunctions_4_5_core = const_cast<VirtualQOpenGLFunctions_4_5_Core*>(dynamic_cast<const VirtualQOpenGLFunctions_4_5_Core*>(self));
    if (vqopenglfunctions_4_5_core && vqopenglfunctions_4_5_core->isVirtualQOpenGLFunctions_4_5_Core) {
        vqopenglfunctions_4_5_core->setQOpenGLFunctions_4_5_Core_OwningContext_IsBase(true);
        return vqopenglfunctions_4_5_core->owningContext();
    } else {
        return ((VirtualQOpenGLFunctions_4_5_Core*)self)->owningContext();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_4_5_Core_OnOwningContext(const QOpenGLFunctions_4_5_Core* self, intptr_t slot) {
    auto* vqopenglfunctions_4_5_core = const_cast<VirtualQOpenGLFunctions_4_5_Core*>(dynamic_cast<const VirtualQOpenGLFunctions_4_5_Core*>(self));
    if (vqopenglfunctions_4_5_core && vqopenglfunctions_4_5_core->isVirtualQOpenGLFunctions_4_5_Core) {
        vqopenglfunctions_4_5_core->setQOpenGLFunctions_4_5_Core_OwningContext_Callback(reinterpret_cast<VirtualQOpenGLFunctions_4_5_Core::QOpenGLFunctions_4_5_Core_OwningContext_Callback>(slot));
    }
}

void QOpenGLFunctions_4_5_Core_Delete(QOpenGLFunctions_4_5_Core* self) {
    delete self;
}
