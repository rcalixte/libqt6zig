#include <QOpenGLContext>
#include <QOpenGLFunctions_3_2_Compatibility>
#include <qopenglfunctions_3_2_compatibility.h>
#include "libqopenglfunctions_3_2_compatibility.h"
#include "libqopenglfunctions_3_2_compatibility.hxx"

QOpenGLFunctions_3_2_Compatibility* QOpenGLFunctions_3_2_Compatibility_new() {
    return new VirtualQOpenGLFunctions_3_2_Compatibility();
}

bool QOpenGLFunctions_3_2_Compatibility_InitializeOpenGLFunctions(QOpenGLFunctions_3_2_Compatibility* self) {
    auto* vqopenglfunctions_3_2_compatibility = dynamic_cast<VirtualQOpenGLFunctions_3_2_Compatibility*>(self);
    if (vqopenglfunctions_3_2_compatibility && vqopenglfunctions_3_2_compatibility->isVirtualQOpenGLFunctions_3_2_Compatibility) {
        return self->initializeOpenGLFunctions();
    } else {
        return ((VirtualQOpenGLFunctions_3_2_Compatibility*)self)->initializeOpenGLFunctions();
    }
}

void QOpenGLFunctions_3_2_Compatibility_GlViewport(QOpenGLFunctions_3_2_Compatibility* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glViewport(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_3_2_Compatibility_GlDepthRange(QOpenGLFunctions_3_2_Compatibility* self, double nearVal, double farVal) {
    self->glDepthRange(static_cast<GLdouble>(nearVal), static_cast<GLdouble>(farVal));
}

unsigned char QOpenGLFunctions_3_2_Compatibility_GlIsEnabled(QOpenGLFunctions_3_2_Compatibility* self, uint32_t cap) {
    return self->glIsEnabled(static_cast<GLenum>(cap));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetTexLevelParameteriv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params) {
    self->glGetTexLevelParameteriv(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetTexLevelParameterfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, uint32_t pname, float* params) {
    self->glGetTexLevelParameterfv(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetTexParameteriv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetTexParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetTexParameterfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, float* params) {
    self->glGetTexParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetTexImage(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, uint32_t format, uint32_t typeVal, void* pixels) {
    self->glGetTexImage(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

const uint8_t* QOpenGLFunctions_3_2_Compatibility_GlGetString(QOpenGLFunctions_3_2_Compatibility* self, uint32_t name) {
    return (const uint8_t*)self->glGetString(static_cast<GLenum>(name));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetIntegerv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, int32_t* params) {
    self->glGetIntegerv(static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetFloatv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, float* params) {
    self->glGetFloatv(static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetDoublev(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, double* params) {
    self->glGetDoublev(static_cast<GLenum>(pname), static_cast<GLdouble*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetBooleanv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, unsigned char* params) {
    self->glGetBooleanv(static_cast<GLenum>(pname), static_cast<GLboolean*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlReadPixels(QOpenGLFunctions_3_2_Compatibility* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, void* pixels) {
    self->glReadPixels(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_3_2_Compatibility_GlReadBuffer(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode) {
    self->glReadBuffer(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Compatibility_GlPixelStorei(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, int32_t param) {
    self->glPixelStorei(static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlPixelStoref(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, float param) {
    self->glPixelStoref(static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlDepthFunc(QOpenGLFunctions_3_2_Compatibility* self, uint32_t func) {
    self->glDepthFunc(static_cast<GLenum>(func));
}

void QOpenGLFunctions_3_2_Compatibility_GlStencilOp(QOpenGLFunctions_3_2_Compatibility* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
    self->glStencilOp(static_cast<GLenum>(fail), static_cast<GLenum>(zfail), static_cast<GLenum>(zpass));
}

void QOpenGLFunctions_3_2_Compatibility_GlStencilFunc(QOpenGLFunctions_3_2_Compatibility* self, uint32_t func, int32_t ref, uint32_t mask) {
    self->glStencilFunc(static_cast<GLenum>(func), static_cast<GLint>(ref), static_cast<GLuint>(mask));
}

void QOpenGLFunctions_3_2_Compatibility_GlLogicOp(QOpenGLFunctions_3_2_Compatibility* self, uint32_t opcode) {
    self->glLogicOp(static_cast<GLenum>(opcode));
}

void QOpenGLFunctions_3_2_Compatibility_GlBlendFunc(QOpenGLFunctions_3_2_Compatibility* self, uint32_t sfactor, uint32_t dfactor) {
    self->glBlendFunc(static_cast<GLenum>(sfactor), static_cast<GLenum>(dfactor));
}

void QOpenGLFunctions_3_2_Compatibility_GlFlush(QOpenGLFunctions_3_2_Compatibility* self) {
    self->glFlush();
}

void QOpenGLFunctions_3_2_Compatibility_GlFinish(QOpenGLFunctions_3_2_Compatibility* self) {
    self->glFinish();
}

void QOpenGLFunctions_3_2_Compatibility_GlEnable(QOpenGLFunctions_3_2_Compatibility* self, uint32_t cap) {
    self->glEnable(static_cast<GLenum>(cap));
}

void QOpenGLFunctions_3_2_Compatibility_GlDisable(QOpenGLFunctions_3_2_Compatibility* self, uint32_t cap) {
    self->glDisable(static_cast<GLenum>(cap));
}

void QOpenGLFunctions_3_2_Compatibility_GlDepthMask(QOpenGLFunctions_3_2_Compatibility* self, unsigned char flag) {
    self->glDepthMask(static_cast<GLboolean>(flag));
}

void QOpenGLFunctions_3_2_Compatibility_GlColorMask(QOpenGLFunctions_3_2_Compatibility* self, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
    self->glColorMask(static_cast<GLboolean>(red), static_cast<GLboolean>(green), static_cast<GLboolean>(blue), static_cast<GLboolean>(alpha));
}

void QOpenGLFunctions_3_2_Compatibility_GlStencilMask(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mask) {
    self->glStencilMask(static_cast<GLuint>(mask));
}

void QOpenGLFunctions_3_2_Compatibility_GlClearDepth(QOpenGLFunctions_3_2_Compatibility* self, double depth) {
    self->glClearDepth(static_cast<GLdouble>(depth));
}

void QOpenGLFunctions_3_2_Compatibility_GlClearStencil(QOpenGLFunctions_3_2_Compatibility* self, int32_t s) {
    self->glClearStencil(static_cast<GLint>(s));
}

void QOpenGLFunctions_3_2_Compatibility_GlClearColor(QOpenGLFunctions_3_2_Compatibility* self, float red, float green, float blue, float alpha) {
    self->glClearColor(static_cast<GLfloat>(red), static_cast<GLfloat>(green), static_cast<GLfloat>(blue), static_cast<GLfloat>(alpha));
}

void QOpenGLFunctions_3_2_Compatibility_GlClear(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mask) {
    self->glClear(static_cast<GLbitfield>(mask));
}

void QOpenGLFunctions_3_2_Compatibility_GlDrawBuffer(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode) {
    self->glDrawBuffer(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexImage2D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLint>(border), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_3_2_Compatibility_GlTexImage1D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(internalformat), static_cast<GLsizei>(width), static_cast<GLint>(border), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_3_2_Compatibility_GlTexParameteriv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, const int32_t* params) {
    self->glTexParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexParameteri(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, int32_t param) {
    self->glTexParameteri(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexParameterfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, const float* params) {
    self->glTexParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexParameterf(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, float param) {
    self->glTexParameterf(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlScissor(QOpenGLFunctions_3_2_Compatibility* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glScissor(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_3_2_Compatibility_GlPolygonMode(QOpenGLFunctions_3_2_Compatibility* self, uint32_t face, uint32_t mode) {
    self->glPolygonMode(static_cast<GLenum>(face), static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Compatibility_GlPointSize(QOpenGLFunctions_3_2_Compatibility* self, float size) {
    self->glPointSize(static_cast<GLfloat>(size));
}

void QOpenGLFunctions_3_2_Compatibility_GlLineWidth(QOpenGLFunctions_3_2_Compatibility* self, float width) {
    self->glLineWidth(static_cast<GLfloat>(width));
}

void QOpenGLFunctions_3_2_Compatibility_GlHint(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t mode) {
    self->glHint(static_cast<GLenum>(target), static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Compatibility_GlFrontFace(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode) {
    self->glFrontFace(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Compatibility_GlCullFace(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode) {
    self->glCullFace(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Compatibility_GlIndexubv(QOpenGLFunctions_3_2_Compatibility* self, const uint8_t* c) {
    self->glIndexubv(static_cast<const GLubyte*>(c));
}

void QOpenGLFunctions_3_2_Compatibility_GlIndexub(QOpenGLFunctions_3_2_Compatibility* self, uint8_t c) {
    self->glIndexub(static_cast<GLubyte>(c));
}

unsigned char QOpenGLFunctions_3_2_Compatibility_GlIsTexture(QOpenGLFunctions_3_2_Compatibility* self, uint32_t texture) {
    return self->glIsTexture(static_cast<GLuint>(texture));
}

void QOpenGLFunctions_3_2_Compatibility_GlGenTextures(QOpenGLFunctions_3_2_Compatibility* self, int32_t n, uint32_t* textures) {
    self->glGenTextures(static_cast<GLsizei>(n), static_cast<GLuint*>(textures));
}

void QOpenGLFunctions_3_2_Compatibility_GlDeleteTextures(QOpenGLFunctions_3_2_Compatibility* self, int32_t n, const uint32_t* textures) {
    self->glDeleteTextures(static_cast<GLsizei>(n), static_cast<const GLuint*>(textures));
}

void QOpenGLFunctions_3_2_Compatibility_GlBindTexture(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t texture) {
    self->glBindTexture(static_cast<GLenum>(target), static_cast<GLuint>(texture));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexSubImage2D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexSubImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_3_2_Compatibility_GlTexSubImage1D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexSubImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLsizei>(width), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_3_2_Compatibility_GlCopyTexSubImage2D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glCopyTexSubImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_3_2_Compatibility_GlCopyTexSubImage1D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width) {
    self->glCopyTexSubImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width));
}

void QOpenGLFunctions_3_2_Compatibility_GlCopyTexImage2D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
    self->glCopyTexImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLint>(border));
}

void QOpenGLFunctions_3_2_Compatibility_GlCopyTexImage1D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border) {
    self->glCopyTexImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLint>(border));
}

void QOpenGLFunctions_3_2_Compatibility_GlPolygonOffset(QOpenGLFunctions_3_2_Compatibility* self, float factor, float units) {
    self->glPolygonOffset(static_cast<GLfloat>(factor), static_cast<GLfloat>(units));
}

void QOpenGLFunctions_3_2_Compatibility_GlDrawElements(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices) {
    self->glDrawElements(static_cast<GLenum>(mode), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices);
}

void QOpenGLFunctions_3_2_Compatibility_GlDrawArrays(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode, int32_t first, int32_t count) {
    self->glDrawArrays(static_cast<GLenum>(mode), static_cast<GLint>(first), static_cast<GLsizei>(count));
}

void QOpenGLFunctions_3_2_Compatibility_GlCopyTexSubImage3D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glCopyTexSubImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexSubImage3D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexSubImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_3_2_Compatibility_GlTexImage3D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLint>(border), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_3_2_Compatibility_GlDrawRangeElements(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices) {
    self->glDrawRangeElements(static_cast<GLenum>(mode), static_cast<GLuint>(start), static_cast<GLuint>(end), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices);
}

void QOpenGLFunctions_3_2_Compatibility_GlBlendEquation(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode) {
    self->glBlendEquation(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Compatibility_GlBlendColor(QOpenGLFunctions_3_2_Compatibility* self, float red, float green, float blue, float alpha) {
    self->glBlendColor(static_cast<GLfloat>(red), static_cast<GLfloat>(green), static_cast<GLfloat>(blue), static_cast<GLfloat>(alpha));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetCompressedTexImage(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, void* img) {
    self->glGetCompressedTexImage(static_cast<GLenum>(target), static_cast<GLint>(level), img);
}

void QOpenGLFunctions_3_2_Compatibility_GlCompressedTexSubImage1D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, const void* data) {
    self->glCompressedTexSubImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLsizei>(width), static_cast<GLenum>(format), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_3_2_Compatibility_GlCompressedTexSubImage2D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, const void* data) {
    self->glCompressedTexSubImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_3_2_Compatibility_GlCompressedTexSubImage3D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, const void* data) {
    self->glCompressedTexSubImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLenum>(format), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_3_2_Compatibility_GlCompressedTexImage1D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, const void* data) {
    self->glCompressedTexImage1D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLint>(border), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_3_2_Compatibility_GlCompressedTexImage2D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, const void* data) {
    self->glCompressedTexImage2D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLint>(border), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_3_2_Compatibility_GlCompressedTexImage3D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, const void* data) {
    self->glCompressedTexImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLint>(border), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLFunctions_3_2_Compatibility_GlSampleCoverage(QOpenGLFunctions_3_2_Compatibility* self, float value, unsigned char invert) {
    self->glSampleCoverage(static_cast<GLfloat>(value), static_cast<GLboolean>(invert));
}

void QOpenGLFunctions_3_2_Compatibility_GlActiveTexture(QOpenGLFunctions_3_2_Compatibility* self, uint32_t texture) {
    self->glActiveTexture(static_cast<GLenum>(texture));
}

void QOpenGLFunctions_3_2_Compatibility_GlPointParameteriv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, const int32_t* params) {
    self->glPointParameteriv(static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlPointParameteri(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, int32_t param) {
    self->glPointParameteri(static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlPointParameterfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, const float* params) {
    self->glPointParameterfv(static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlPointParameterf(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, float param) {
    self->glPointParameterf(static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiDrawArrays(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode, const int32_t* first, const int32_t* count, int32_t drawcount) {
    self->glMultiDrawArrays(static_cast<GLenum>(mode), static_cast<const GLint*>(first), static_cast<const GLsizei*>(count), static_cast<GLsizei>(drawcount));
}

void QOpenGLFunctions_3_2_Compatibility_GlBlendFuncSeparate(QOpenGLFunctions_3_2_Compatibility* self, uint32_t sfactorRGB, uint32_t dfactorRGB, uint32_t sfactorAlpha, uint32_t dfactorAlpha) {
    self->glBlendFuncSeparate(static_cast<GLenum>(sfactorRGB), static_cast<GLenum>(dfactorRGB), static_cast<GLenum>(sfactorAlpha), static_cast<GLenum>(dfactorAlpha));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetBufferParameteriv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetBufferParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

unsigned char QOpenGLFunctions_3_2_Compatibility_GlUnmapBuffer(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target) {
    return self->glUnmapBuffer(static_cast<GLenum>(target));
}

void* QOpenGLFunctions_3_2_Compatibility_GlMapBuffer(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t access) {
    return self->glMapBuffer(static_cast<GLenum>(target), static_cast<GLenum>(access));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetBufferSubData(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int64_t offset, int64_t size, void* data) {
    self->glGetBufferSubData(static_cast<GLenum>(target), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(size), data);
}

void QOpenGLFunctions_3_2_Compatibility_GlBufferSubData(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int64_t offset, int64_t size, const void* data) {
    self->glBufferSubData(static_cast<GLenum>(target), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(size), data);
}

void QOpenGLFunctions_3_2_Compatibility_GlBufferData(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int64_t size, const void* data, uint32_t usage) {
    self->glBufferData(static_cast<GLenum>(target), static_cast<GLsizeiptr>(size), data, static_cast<GLenum>(usage));
}

unsigned char QOpenGLFunctions_3_2_Compatibility_GlIsBuffer(QOpenGLFunctions_3_2_Compatibility* self, uint32_t buffer) {
    return self->glIsBuffer(static_cast<GLuint>(buffer));
}

void QOpenGLFunctions_3_2_Compatibility_GlGenBuffers(QOpenGLFunctions_3_2_Compatibility* self, int32_t n, uint32_t* buffers) {
    self->glGenBuffers(static_cast<GLsizei>(n), static_cast<GLuint*>(buffers));
}

void QOpenGLFunctions_3_2_Compatibility_GlDeleteBuffers(QOpenGLFunctions_3_2_Compatibility* self, int32_t n, const uint32_t* buffers) {
    self->glDeleteBuffers(static_cast<GLsizei>(n), static_cast<const GLuint*>(buffers));
}

void QOpenGLFunctions_3_2_Compatibility_GlBindBuffer(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t buffer) {
    self->glBindBuffer(static_cast<GLenum>(target), static_cast<GLuint>(buffer));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetQueryObjectuiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t id, uint32_t pname, uint32_t* params) {
    self->glGetQueryObjectuiv(static_cast<GLuint>(id), static_cast<GLenum>(pname), static_cast<GLuint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetQueryObjectiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t id, uint32_t pname, int32_t* params) {
    self->glGetQueryObjectiv(static_cast<GLuint>(id), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetQueryiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetQueryiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlEndQuery(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target) {
    self->glEndQuery(static_cast<GLenum>(target));
}

void QOpenGLFunctions_3_2_Compatibility_GlBeginQuery(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t id) {
    self->glBeginQuery(static_cast<GLenum>(target), static_cast<GLuint>(id));
}

unsigned char QOpenGLFunctions_3_2_Compatibility_GlIsQuery(QOpenGLFunctions_3_2_Compatibility* self, uint32_t id) {
    return self->glIsQuery(static_cast<GLuint>(id));
}

void QOpenGLFunctions_3_2_Compatibility_GlDeleteQueries(QOpenGLFunctions_3_2_Compatibility* self, int32_t n, const uint32_t* ids) {
    self->glDeleteQueries(static_cast<GLsizei>(n), static_cast<const GLuint*>(ids));
}

void QOpenGLFunctions_3_2_Compatibility_GlGenQueries(QOpenGLFunctions_3_2_Compatibility* self, int32_t n, uint32_t* ids) {
    self->glGenQueries(static_cast<GLsizei>(n), static_cast<GLuint*>(ids));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribPointer(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, int32_t size, uint32_t typeVal, unsigned char normalized, int32_t stride, const void* pointer) {
    self->glVertexAttribPointer(static_cast<GLuint>(index), static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLboolean>(normalized), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_3_2_Compatibility_GlValidateProgram(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program) {
    self->glValidateProgram(static_cast<GLuint>(program));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniformMatrix4fv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix4fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniformMatrix3fv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix3fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniformMatrix2fv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix2fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform4iv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, const int32_t* value) {
    self->glUniform4iv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform3iv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, const int32_t* value) {
    self->glUniform3iv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform2iv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, const int32_t* value) {
    self->glUniform2iv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform1iv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, const int32_t* value) {
    self->glUniform1iv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform4fv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, const float* value) {
    self->glUniform4fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform3fv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, const float* value) {
    self->glUniform3fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform2fv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, const float* value) {
    self->glUniform2fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform1fv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, const float* value) {
    self->glUniform1fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform4i(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3) {
    self->glUniform4i(static_cast<GLint>(location), static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2), static_cast<GLint>(v3));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform3i(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t v0, int32_t v1, int32_t v2) {
    self->glUniform3i(static_cast<GLint>(location), static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform2i(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t v0, int32_t v1) {
    self->glUniform2i(static_cast<GLint>(location), static_cast<GLint>(v0), static_cast<GLint>(v1));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform1i(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t v0) {
    self->glUniform1i(static_cast<GLint>(location), static_cast<GLint>(v0));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform4f(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, float v0, float v1, float v2, float v3) {
    self->glUniform4f(static_cast<GLint>(location), static_cast<GLfloat>(v0), static_cast<GLfloat>(v1), static_cast<GLfloat>(v2), static_cast<GLfloat>(v3));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform3f(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, float v0, float v1, float v2) {
    self->glUniform3f(static_cast<GLint>(location), static_cast<GLfloat>(v0), static_cast<GLfloat>(v1), static_cast<GLfloat>(v2));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform2f(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, float v0, float v1) {
    self->glUniform2f(static_cast<GLint>(location), static_cast<GLfloat>(v0), static_cast<GLfloat>(v1));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform1f(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, float v0) {
    self->glUniform1f(static_cast<GLint>(location), static_cast<GLfloat>(v0));
}

void QOpenGLFunctions_3_2_Compatibility_GlUseProgram(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program) {
    self->glUseProgram(static_cast<GLuint>(program));
}

void QOpenGLFunctions_3_2_Compatibility_GlLinkProgram(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program) {
    self->glLinkProgram(static_cast<GLuint>(program));
}

unsigned char QOpenGLFunctions_3_2_Compatibility_GlIsShader(QOpenGLFunctions_3_2_Compatibility* self, uint32_t shader) {
    return self->glIsShader(static_cast<GLuint>(shader));
}

unsigned char QOpenGLFunctions_3_2_Compatibility_GlIsProgram(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program) {
    return self->glIsProgram(static_cast<GLuint>(program));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetVertexAttribiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, uint32_t pname, int32_t* params) {
    self->glGetVertexAttribiv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetVertexAttribfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, uint32_t pname, float* params) {
    self->glGetVertexAttribfv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetVertexAttribdv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, uint32_t pname, double* params) {
    self->glGetVertexAttribdv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLdouble*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetUniformiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program, int32_t location, int32_t* params) {
    self->glGetUniformiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetUniformfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program, int32_t location, float* params) {
    self->glGetUniformfv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLfloat*>(params));
}

int32_t QOpenGLFunctions_3_2_Compatibility_GlGetUniformLocation(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program, const GLchar* name) {
    return self->glGetUniformLocation(static_cast<GLuint>(program), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetShaderSource(QOpenGLFunctions_3_2_Compatibility* self, uint32_t shader, int32_t bufSize, int32_t* length, GLchar* source) {
    self->glGetShaderSource(static_cast<GLuint>(shader), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(source));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetShaderInfoLog(QOpenGLFunctions_3_2_Compatibility* self, uint32_t shader, int32_t bufSize, int32_t* length, GLchar* infoLog) {
    self->glGetShaderInfoLog(static_cast<GLuint>(shader), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(infoLog));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetShaderiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t shader, uint32_t pname, int32_t* params) {
    self->glGetShaderiv(static_cast<GLuint>(shader), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetProgramInfoLog(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program, int32_t bufSize, int32_t* length, GLchar* infoLog) {
    self->glGetProgramInfoLog(static_cast<GLuint>(program), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(infoLog));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetProgramiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program, uint32_t pname, int32_t* params) {
    self->glGetProgramiv(static_cast<GLuint>(program), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

int32_t QOpenGLFunctions_3_2_Compatibility_GlGetAttribLocation(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program, const GLchar* name) {
    return self->glGetAttribLocation(static_cast<GLuint>(program), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetAttachedShaders(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program, int32_t maxCount, int32_t* count, uint32_t* obj) {
    self->glGetAttachedShaders(static_cast<GLuint>(program), static_cast<GLsizei>(maxCount), static_cast<GLsizei*>(count), static_cast<GLuint*>(obj));
}

void QOpenGLFunctions_3_2_Compatibility_GlEnableVertexAttribArray(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index) {
    self->glEnableVertexAttribArray(static_cast<GLuint>(index));
}

void QOpenGLFunctions_3_2_Compatibility_GlDisableVertexAttribArray(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index) {
    self->glDisableVertexAttribArray(static_cast<GLuint>(index));
}

void QOpenGLFunctions_3_2_Compatibility_GlDetachShader(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program, uint32_t shader) {
    self->glDetachShader(static_cast<GLuint>(program), static_cast<GLuint>(shader));
}

void QOpenGLFunctions_3_2_Compatibility_GlDeleteShader(QOpenGLFunctions_3_2_Compatibility* self, uint32_t shader) {
    self->glDeleteShader(static_cast<GLuint>(shader));
}

void QOpenGLFunctions_3_2_Compatibility_GlDeleteProgram(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program) {
    self->glDeleteProgram(static_cast<GLuint>(program));
}

uint32_t QOpenGLFunctions_3_2_Compatibility_GlCreateShader(QOpenGLFunctions_3_2_Compatibility* self, uint32_t typeVal) {
    return self->glCreateShader(static_cast<GLenum>(typeVal));
}

uint32_t QOpenGLFunctions_3_2_Compatibility_GlCreateProgram(QOpenGLFunctions_3_2_Compatibility* self) {
    return self->glCreateProgram();
}

void QOpenGLFunctions_3_2_Compatibility_GlCompileShader(QOpenGLFunctions_3_2_Compatibility* self, uint32_t shader) {
    self->glCompileShader(static_cast<GLuint>(shader));
}

void QOpenGLFunctions_3_2_Compatibility_GlBindAttribLocation(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program, uint32_t index, const GLchar* name) {
    self->glBindAttribLocation(static_cast<GLuint>(program), static_cast<GLuint>(index), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_3_2_Compatibility_GlAttachShader(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program, uint32_t shader) {
    self->glAttachShader(static_cast<GLuint>(program), static_cast<GLuint>(shader));
}

void QOpenGLFunctions_3_2_Compatibility_GlStencilMaskSeparate(QOpenGLFunctions_3_2_Compatibility* self, uint32_t face, uint32_t mask) {
    self->glStencilMaskSeparate(static_cast<GLenum>(face), static_cast<GLuint>(mask));
}

void QOpenGLFunctions_3_2_Compatibility_GlStencilFuncSeparate(QOpenGLFunctions_3_2_Compatibility* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask) {
    self->glStencilFuncSeparate(static_cast<GLenum>(face), static_cast<GLenum>(func), static_cast<GLint>(ref), static_cast<GLuint>(mask));
}

void QOpenGLFunctions_3_2_Compatibility_GlStencilOpSeparate(QOpenGLFunctions_3_2_Compatibility* self, uint32_t face, uint32_t sfail, uint32_t dpfail, uint32_t dppass) {
    self->glStencilOpSeparate(static_cast<GLenum>(face), static_cast<GLenum>(sfail), static_cast<GLenum>(dpfail), static_cast<GLenum>(dppass));
}

void QOpenGLFunctions_3_2_Compatibility_GlBlendEquationSeparate(QOpenGLFunctions_3_2_Compatibility* self, uint32_t modeRGB, uint32_t modeAlpha) {
    self->glBlendEquationSeparate(static_cast<GLenum>(modeRGB), static_cast<GLenum>(modeAlpha));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniformMatrix4x3fv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix4x3fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniformMatrix3x4fv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix3x4fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniformMatrix4x2fv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix4x2fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniformMatrix2x4fv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix2x4fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniformMatrix3x2fv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix3x2fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniformMatrix2x3fv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix2x3fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

unsigned char QOpenGLFunctions_3_2_Compatibility_GlIsVertexArray(QOpenGLFunctions_3_2_Compatibility* self, uint32_t array) {
    return self->glIsVertexArray(static_cast<GLuint>(array));
}

void QOpenGLFunctions_3_2_Compatibility_GlGenVertexArrays(QOpenGLFunctions_3_2_Compatibility* self, int32_t n, uint32_t* arrays) {
    self->glGenVertexArrays(static_cast<GLsizei>(n), static_cast<GLuint*>(arrays));
}

void QOpenGLFunctions_3_2_Compatibility_GlDeleteVertexArrays(QOpenGLFunctions_3_2_Compatibility* self, int32_t n, const uint32_t* arrays) {
    self->glDeleteVertexArrays(static_cast<GLsizei>(n), static_cast<const GLuint*>(arrays));
}

void QOpenGLFunctions_3_2_Compatibility_GlBindVertexArray(QOpenGLFunctions_3_2_Compatibility* self, uint32_t array) {
    self->glBindVertexArray(static_cast<GLuint>(array));
}

void QOpenGLFunctions_3_2_Compatibility_GlFlushMappedBufferRange(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int64_t offset, int64_t length) {
    self->glFlushMappedBufferRange(static_cast<GLenum>(target), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(length));
}

void* QOpenGLFunctions_3_2_Compatibility_GlMapBufferRange(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int64_t offset, int64_t length, uint32_t access) {
    return self->glMapBufferRange(static_cast<GLenum>(target), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(length), static_cast<GLbitfield>(access));
}

void QOpenGLFunctions_3_2_Compatibility_GlFramebufferTextureLayer(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer) {
    self->glFramebufferTextureLayer(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(layer));
}

void QOpenGLFunctions_3_2_Compatibility_GlRenderbufferStorageMultisample(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height) {
    self->glRenderbufferStorageMultisample(static_cast<GLenum>(target), static_cast<GLsizei>(samples), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_3_2_Compatibility_GlBlitFramebuffer(QOpenGLFunctions_3_2_Compatibility* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter) {
    self->glBlitFramebuffer(static_cast<GLint>(srcX0), static_cast<GLint>(srcY0), static_cast<GLint>(srcX1), static_cast<GLint>(srcY1), static_cast<GLint>(dstX0), static_cast<GLint>(dstY0), static_cast<GLint>(dstX1), static_cast<GLint>(dstY1), static_cast<GLbitfield>(mask), static_cast<GLenum>(filter));
}

void QOpenGLFunctions_3_2_Compatibility_GlGenerateMipmap(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target) {
    self->glGenerateMipmap(static_cast<GLenum>(target));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetFramebufferAttachmentParameteriv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params) {
    self->glGetFramebufferAttachmentParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlFramebufferRenderbuffer(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer) {
    self->glFramebufferRenderbuffer(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLenum>(renderbuffertarget), static_cast<GLuint>(renderbuffer));
}

void QOpenGLFunctions_3_2_Compatibility_GlFramebufferTexture3D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level, int32_t zoffset) {
    self->glFramebufferTexture3D(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLenum>(textarget), static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(zoffset));
}

void QOpenGLFunctions_3_2_Compatibility_GlFramebufferTexture2D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
    self->glFramebufferTexture2D(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLenum>(textarget), static_cast<GLuint>(texture), static_cast<GLint>(level));
}

void QOpenGLFunctions_3_2_Compatibility_GlFramebufferTexture1D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
    self->glFramebufferTexture1D(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLenum>(textarget), static_cast<GLuint>(texture), static_cast<GLint>(level));
}

void QOpenGLFunctions_3_2_Compatibility_GlGenFramebuffers(QOpenGLFunctions_3_2_Compatibility* self, int32_t n, uint32_t* framebuffers) {
    self->glGenFramebuffers(static_cast<GLsizei>(n), static_cast<GLuint*>(framebuffers));
}

void QOpenGLFunctions_3_2_Compatibility_GlDeleteFramebuffers(QOpenGLFunctions_3_2_Compatibility* self, int32_t n, const uint32_t* framebuffers) {
    self->glDeleteFramebuffers(static_cast<GLsizei>(n), static_cast<const GLuint*>(framebuffers));
}

void QOpenGLFunctions_3_2_Compatibility_GlBindFramebuffer(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t framebuffer) {
    self->glBindFramebuffer(static_cast<GLenum>(target), static_cast<GLuint>(framebuffer));
}

unsigned char QOpenGLFunctions_3_2_Compatibility_GlIsFramebuffer(QOpenGLFunctions_3_2_Compatibility* self, uint32_t framebuffer) {
    return self->glIsFramebuffer(static_cast<GLuint>(framebuffer));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetRenderbufferParameteriv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetRenderbufferParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlRenderbufferStorage(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height) {
    self->glRenderbufferStorage(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_3_2_Compatibility_GlGenRenderbuffers(QOpenGLFunctions_3_2_Compatibility* self, int32_t n, uint32_t* renderbuffers) {
    self->glGenRenderbuffers(static_cast<GLsizei>(n), static_cast<GLuint*>(renderbuffers));
}

void QOpenGLFunctions_3_2_Compatibility_GlDeleteRenderbuffers(QOpenGLFunctions_3_2_Compatibility* self, int32_t n, const uint32_t* renderbuffers) {
    self->glDeleteRenderbuffers(static_cast<GLsizei>(n), static_cast<const GLuint*>(renderbuffers));
}

void QOpenGLFunctions_3_2_Compatibility_GlBindRenderbuffer(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t renderbuffer) {
    self->glBindRenderbuffer(static_cast<GLenum>(target), static_cast<GLuint>(renderbuffer));
}

unsigned char QOpenGLFunctions_3_2_Compatibility_GlIsRenderbuffer(QOpenGLFunctions_3_2_Compatibility* self, uint32_t renderbuffer) {
    return self->glIsRenderbuffer(static_cast<GLuint>(renderbuffer));
}

const uint8_t* QOpenGLFunctions_3_2_Compatibility_GlGetStringi(QOpenGLFunctions_3_2_Compatibility* self, uint32_t name, uint32_t index) {
    return (const uint8_t*)self->glGetStringi(static_cast<GLenum>(name), static_cast<GLuint>(index));
}

void QOpenGLFunctions_3_2_Compatibility_GlClearBufferfi(QOpenGLFunctions_3_2_Compatibility* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil) {
    self->glClearBufferfi(static_cast<GLenum>(buffer), static_cast<GLint>(drawbuffer), static_cast<GLfloat>(depth), static_cast<GLint>(stencil));
}

void QOpenGLFunctions_3_2_Compatibility_GlClearBufferfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t buffer, int32_t drawbuffer, const float* value) {
    self->glClearBufferfv(static_cast<GLenum>(buffer), static_cast<GLint>(drawbuffer), static_cast<const GLfloat*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlClearBufferuiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t buffer, int32_t drawbuffer, const uint32_t* value) {
    self->glClearBufferuiv(static_cast<GLenum>(buffer), static_cast<GLint>(drawbuffer), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlClearBufferiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t buffer, int32_t drawbuffer, const int32_t* value) {
    self->glClearBufferiv(static_cast<GLenum>(buffer), static_cast<GLint>(drawbuffer), static_cast<const GLint*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetTexParameterIuiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, uint32_t* params) {
    self->glGetTexParameterIuiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLuint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetTexParameterIiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetTexParameterIiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexParameterIuiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, const uint32_t* params) {
    self->glTexParameterIuiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLuint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexParameterIiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, const int32_t* params) {
    self->glTexParameterIiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform4uiv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, const uint32_t* value) {
    self->glUniform4uiv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform3uiv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, const uint32_t* value) {
    self->glUniform3uiv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform2uiv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, const uint32_t* value) {
    self->glUniform2uiv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform1uiv(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, int32_t count, const uint32_t* value) {
    self->glUniform1uiv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform4ui(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3) {
    self->glUniform4ui(static_cast<GLint>(location), static_cast<GLuint>(v0), static_cast<GLuint>(v1), static_cast<GLuint>(v2), static_cast<GLuint>(v3));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform3ui(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2) {
    self->glUniform3ui(static_cast<GLint>(location), static_cast<GLuint>(v0), static_cast<GLuint>(v1), static_cast<GLuint>(v2));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform2ui(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, uint32_t v0, uint32_t v1) {
    self->glUniform2ui(static_cast<GLint>(location), static_cast<GLuint>(v0), static_cast<GLuint>(v1));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniform1ui(QOpenGLFunctions_3_2_Compatibility* self, int32_t location, uint32_t v0) {
    self->glUniform1ui(static_cast<GLint>(location), static_cast<GLuint>(v0));
}

int32_t QOpenGLFunctions_3_2_Compatibility_GlGetFragDataLocation(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program, const GLchar* name) {
    return self->glGetFragDataLocation(static_cast<GLuint>(program), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_3_2_Compatibility_GlBindFragDataLocation(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program, uint32_t color, const GLchar* name) {
    self->glBindFragDataLocation(static_cast<GLuint>(program), static_cast<GLuint>(color), static_cast<const GLchar*>(name));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetUniformuiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program, int32_t location, uint32_t* params) {
    self->glGetUniformuiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLuint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetVertexAttribIuiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, uint32_t pname, uint32_t* params) {
    self->glGetVertexAttribIuiv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLuint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetVertexAttribIiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, uint32_t pname, int32_t* params) {
    self->glGetVertexAttribIiv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribIPointer(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
    self->glVertexAttribIPointer(static_cast<GLuint>(index), static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_3_2_Compatibility_GlEndConditionalRender(QOpenGLFunctions_3_2_Compatibility* self) {
    self->glEndConditionalRender();
}

void QOpenGLFunctions_3_2_Compatibility_GlBeginConditionalRender(QOpenGLFunctions_3_2_Compatibility* self, uint32_t id, uint32_t mode) {
    self->glBeginConditionalRender(static_cast<GLuint>(id), static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Compatibility_GlClampColor(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t clamp) {
    self->glClampColor(static_cast<GLenum>(target), static_cast<GLenum>(clamp));
}

void QOpenGLFunctions_3_2_Compatibility_GlBindBufferBase(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t index, uint32_t buffer) {
    self->glBindBufferBase(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLuint>(buffer));
}

void QOpenGLFunctions_3_2_Compatibility_GlBindBufferRange(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t index, uint32_t buffer, int64_t offset, int64_t size) {
    self->glBindBufferRange(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLuint>(buffer), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(size));
}

void QOpenGLFunctions_3_2_Compatibility_GlEndTransformFeedback(QOpenGLFunctions_3_2_Compatibility* self) {
    self->glEndTransformFeedback();
}

void QOpenGLFunctions_3_2_Compatibility_GlBeginTransformFeedback(QOpenGLFunctions_3_2_Compatibility* self, uint32_t primitiveMode) {
    self->glBeginTransformFeedback(static_cast<GLenum>(primitiveMode));
}

unsigned char QOpenGLFunctions_3_2_Compatibility_GlIsEnabledi(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t index) {
    return self->glIsEnabledi(static_cast<GLenum>(target), static_cast<GLuint>(index));
}

void QOpenGLFunctions_3_2_Compatibility_GlDisablei(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t index) {
    self->glDisablei(static_cast<GLenum>(target), static_cast<GLuint>(index));
}

void QOpenGLFunctions_3_2_Compatibility_GlEnablei(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t index) {
    self->glEnablei(static_cast<GLenum>(target), static_cast<GLuint>(index));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetIntegeriV(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t index, int32_t* data) {
    self->glGetIntegeri_v(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLint*>(data));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetBooleaniV(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t index, unsigned char* data) {
    self->glGetBooleani_v(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLboolean*>(data));
}

void QOpenGLFunctions_3_2_Compatibility_GlColorMaski(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
    self->glColorMaski(static_cast<GLuint>(index), static_cast<GLboolean>(r), static_cast<GLboolean>(g), static_cast<GLboolean>(b), static_cast<GLboolean>(a));
}

void QOpenGLFunctions_3_2_Compatibility_GlCopyBufferSubData(QOpenGLFunctions_3_2_Compatibility* self, uint32_t readTarget, uint32_t writeTarget, int64_t readOffset, int64_t writeOffset, int64_t size) {
    self->glCopyBufferSubData(static_cast<GLenum>(readTarget), static_cast<GLenum>(writeTarget), static_cast<GLintptr>(readOffset), static_cast<GLintptr>(writeOffset), static_cast<GLsizeiptr>(size));
}

void QOpenGLFunctions_3_2_Compatibility_GlUniformBlockBinding(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding) {
    self->glUniformBlockBinding(static_cast<GLuint>(program), static_cast<GLuint>(uniformBlockIndex), static_cast<GLuint>(uniformBlockBinding));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetActiveUniformBlockName(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, GLchar* uniformBlockName) {
    self->glGetActiveUniformBlockName(static_cast<GLuint>(program), static_cast<GLuint>(uniformBlockIndex), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(uniformBlockName));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetActiveUniformBlockiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params) {
    self->glGetActiveUniformBlockiv(static_cast<GLuint>(program), static_cast<GLuint>(uniformBlockIndex), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

uint32_t QOpenGLFunctions_3_2_Compatibility_GlGetUniformBlockIndex(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program, const GLchar* uniformBlockName) {
    return self->glGetUniformBlockIndex(static_cast<GLuint>(program), static_cast<const GLchar*>(uniformBlockName));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetActiveUniformName(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program, uint32_t uniformIndex, int32_t bufSize, int32_t* length, GLchar* uniformName) {
    self->glGetActiveUniformName(static_cast<GLuint>(program), static_cast<GLuint>(uniformIndex), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(uniformName));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetActiveUniformsiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t program, int32_t uniformCount, const uint32_t* uniformIndices, uint32_t pname, int32_t* params) {
    self->glGetActiveUniformsiv(static_cast<GLuint>(program), static_cast<GLsizei>(uniformCount), static_cast<const GLuint*>(uniformIndices), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlPrimitiveRestartIndex(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index) {
    self->glPrimitiveRestartIndex(static_cast<GLuint>(index));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexBuffer(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t internalformat, uint32_t buffer) {
    self->glTexBuffer(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLuint>(buffer));
}

void QOpenGLFunctions_3_2_Compatibility_GlDrawElementsInstanced(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount) {
    self->glDrawElementsInstanced(static_cast<GLenum>(mode), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLsizei>(instancecount));
}

void QOpenGLFunctions_3_2_Compatibility_GlDrawArraysInstanced(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount) {
    self->glDrawArraysInstanced(static_cast<GLenum>(mode), static_cast<GLint>(first), static_cast<GLsizei>(count), static_cast<GLsizei>(instancecount));
}

void QOpenGLFunctions_3_2_Compatibility_GlSampleMaski(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, uint32_t mask) {
    self->glSampleMaski(static_cast<GLuint>(index), static_cast<GLbitfield>(mask));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetMultisamplefv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, uint32_t index, float* val) {
    self->glGetMultisamplefv(static_cast<GLenum>(pname), static_cast<GLuint>(index), static_cast<GLfloat*>(val));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexImage3DMultisample(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, int32_t depth, unsigned char fixedsamplelocations) {
    self->glTexImage3DMultisample(static_cast<GLenum>(target), static_cast<GLsizei>(samples), static_cast<GLint>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLboolean>(fixedsamplelocations));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexImage2DMultisample(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, unsigned char fixedsamplelocations) {
    self->glTexImage2DMultisample(static_cast<GLenum>(target), static_cast<GLsizei>(samples), static_cast<GLint>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLboolean>(fixedsamplelocations));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetInteger64v(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, int64_t* params) {
    self->glGetInteger64v(static_cast<GLenum>(pname), static_cast<GLint64*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlProvokingVertex(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode) {
    self->glProvokingVertex(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Compatibility_GlDrawElementsInstancedBaseVertex(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount, int32_t basevertex) {
    self->glDrawElementsInstancedBaseVertex(static_cast<GLenum>(mode), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLsizei>(instancecount), static_cast<GLint>(basevertex));
}

void QOpenGLFunctions_3_2_Compatibility_GlDrawRangeElementsBaseVertex(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices, int32_t basevertex) {
    self->glDrawRangeElementsBaseVertex(static_cast<GLenum>(mode), static_cast<GLuint>(start), static_cast<GLuint>(end), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLint>(basevertex));
}

void QOpenGLFunctions_3_2_Compatibility_GlDrawElementsBaseVertex(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t basevertex) {
    self->glDrawElementsBaseVertex(static_cast<GLenum>(mode), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLint>(basevertex));
}

void QOpenGLFunctions_3_2_Compatibility_GlFramebufferTexture(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level) {
    self->glFramebufferTexture(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLuint>(texture), static_cast<GLint>(level));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetBufferParameteri64v(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, int64_t* params) {
    self->glGetBufferParameteri64v(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint64*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetInteger64iV(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t index, int64_t* data) {
    self->glGetInteger64i_v(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLint64*>(data));
}

void QOpenGLFunctions_3_2_Compatibility_GlTranslatef(QOpenGLFunctions_3_2_Compatibility* self, float x, float y, float z) {
    self->glTranslatef(static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlTranslated(QOpenGLFunctions_3_2_Compatibility* self, double x, double y, double z) {
    self->glTranslated(static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlScalef(QOpenGLFunctions_3_2_Compatibility* self, float x, float y, float z) {
    self->glScalef(static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlScaled(QOpenGLFunctions_3_2_Compatibility* self, double x, double y, double z) {
    self->glScaled(static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlRotatef(QOpenGLFunctions_3_2_Compatibility* self, float angle, float x, float y, float z) {
    self->glRotatef(static_cast<GLfloat>(angle), static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlRotated(QOpenGLFunctions_3_2_Compatibility* self, double angle, double x, double y, double z) {
    self->glRotated(static_cast<GLdouble>(angle), static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlPushMatrix(QOpenGLFunctions_3_2_Compatibility* self) {
    self->glPushMatrix();
}

void QOpenGLFunctions_3_2_Compatibility_GlPopMatrix(QOpenGLFunctions_3_2_Compatibility* self) {
    self->glPopMatrix();
}

void QOpenGLFunctions_3_2_Compatibility_GlOrtho(QOpenGLFunctions_3_2_Compatibility* self, double left, double right, double bottom, double top, double zNear, double zFar) {
    self->glOrtho(static_cast<GLdouble>(left), static_cast<GLdouble>(right), static_cast<GLdouble>(bottom), static_cast<GLdouble>(top), static_cast<GLdouble>(zNear), static_cast<GLdouble>(zFar));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultMatrixd(QOpenGLFunctions_3_2_Compatibility* self, const double* m) {
    self->glMultMatrixd(static_cast<const GLdouble*>(m));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultMatrixf(QOpenGLFunctions_3_2_Compatibility* self, const float* m) {
    self->glMultMatrixf(static_cast<const GLfloat*>(m));
}

void QOpenGLFunctions_3_2_Compatibility_GlMatrixMode(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode) {
    self->glMatrixMode(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Compatibility_GlLoadMatrixd(QOpenGLFunctions_3_2_Compatibility* self, const double* m) {
    self->glLoadMatrixd(static_cast<const GLdouble*>(m));
}

void QOpenGLFunctions_3_2_Compatibility_GlLoadMatrixf(QOpenGLFunctions_3_2_Compatibility* self, const float* m) {
    self->glLoadMatrixf(static_cast<const GLfloat*>(m));
}

void QOpenGLFunctions_3_2_Compatibility_GlLoadIdentity(QOpenGLFunctions_3_2_Compatibility* self) {
    self->glLoadIdentity();
}

void QOpenGLFunctions_3_2_Compatibility_GlFrustum(QOpenGLFunctions_3_2_Compatibility* self, double left, double right, double bottom, double top, double zNear, double zFar) {
    self->glFrustum(static_cast<GLdouble>(left), static_cast<GLdouble>(right), static_cast<GLdouble>(bottom), static_cast<GLdouble>(top), static_cast<GLdouble>(zNear), static_cast<GLdouble>(zFar));
}

unsigned char QOpenGLFunctions_3_2_Compatibility_GlIsList(QOpenGLFunctions_3_2_Compatibility* self, uint32_t list) {
    return self->glIsList(static_cast<GLuint>(list));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetTexGeniv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t coord, uint32_t pname, int32_t* params) {
    self->glGetTexGeniv(static_cast<GLenum>(coord), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetTexGenfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t coord, uint32_t pname, float* params) {
    self->glGetTexGenfv(static_cast<GLenum>(coord), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetTexGendv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t coord, uint32_t pname, double* params) {
    self->glGetTexGendv(static_cast<GLenum>(coord), static_cast<GLenum>(pname), static_cast<GLdouble*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetTexEnviv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetTexEnviv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetTexEnvfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, float* params) {
    self->glGetTexEnvfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetPolygonStipple(QOpenGLFunctions_3_2_Compatibility* self, uint8_t* mask) {
    self->glGetPolygonStipple(static_cast<GLubyte*>(mask));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetPixelMapusv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mapVal, uint16_t* values) {
    self->glGetPixelMapusv(static_cast<GLenum>(mapVal), static_cast<GLushort*>(values));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetPixelMapuiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mapVal, uint32_t* values) {
    self->glGetPixelMapuiv(static_cast<GLenum>(mapVal), static_cast<GLuint*>(values));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetPixelMapfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mapVal, float* values) {
    self->glGetPixelMapfv(static_cast<GLenum>(mapVal), static_cast<GLfloat*>(values));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetMaterialiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t face, uint32_t pname, int32_t* params) {
    self->glGetMaterialiv(static_cast<GLenum>(face), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetMaterialfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t face, uint32_t pname, float* params) {
    self->glGetMaterialfv(static_cast<GLenum>(face), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetMapiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t query, int32_t* v) {
    self->glGetMapiv(static_cast<GLenum>(target), static_cast<GLenum>(query), static_cast<GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetMapfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t query, float* v) {
    self->glGetMapfv(static_cast<GLenum>(target), static_cast<GLenum>(query), static_cast<GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetMapdv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t query, double* v) {
    self->glGetMapdv(static_cast<GLenum>(target), static_cast<GLenum>(query), static_cast<GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetLightiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t light, uint32_t pname, int32_t* params) {
    self->glGetLightiv(static_cast<GLenum>(light), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetLightfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t light, uint32_t pname, float* params) {
    self->glGetLightfv(static_cast<GLenum>(light), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetClipPlane(QOpenGLFunctions_3_2_Compatibility* self, uint32_t plane, double* equation) {
    self->glGetClipPlane(static_cast<GLenum>(plane), static_cast<GLdouble*>(equation));
}

void QOpenGLFunctions_3_2_Compatibility_GlDrawPixels(QOpenGLFunctions_3_2_Compatibility* self, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glDrawPixels(static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLFunctions_3_2_Compatibility_GlCopyPixels(QOpenGLFunctions_3_2_Compatibility* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t typeVal) {
    self->glCopyPixels(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(typeVal));
}

void QOpenGLFunctions_3_2_Compatibility_GlPixelMapusv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mapVal, int32_t mapsize, const uint16_t* values) {
    self->glPixelMapusv(static_cast<GLenum>(mapVal), static_cast<GLint>(mapsize), static_cast<const GLushort*>(values));
}

void QOpenGLFunctions_3_2_Compatibility_GlPixelMapuiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mapVal, int32_t mapsize, const uint32_t* values) {
    self->glPixelMapuiv(static_cast<GLenum>(mapVal), static_cast<GLint>(mapsize), static_cast<const GLuint*>(values));
}

void QOpenGLFunctions_3_2_Compatibility_GlPixelMapfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mapVal, int32_t mapsize, const float* values) {
    self->glPixelMapfv(static_cast<GLenum>(mapVal), static_cast<GLint>(mapsize), static_cast<const GLfloat*>(values));
}

void QOpenGLFunctions_3_2_Compatibility_GlPixelTransferi(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, int32_t param) {
    self->glPixelTransferi(static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlPixelTransferf(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, float param) {
    self->glPixelTransferf(static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlPixelZoom(QOpenGLFunctions_3_2_Compatibility* self, float xfactor, float yfactor) {
    self->glPixelZoom(static_cast<GLfloat>(xfactor), static_cast<GLfloat>(yfactor));
}

void QOpenGLFunctions_3_2_Compatibility_GlAlphaFunc(QOpenGLFunctions_3_2_Compatibility* self, uint32_t func, float ref) {
    self->glAlphaFunc(static_cast<GLenum>(func), static_cast<GLfloat>(ref));
}

void QOpenGLFunctions_3_2_Compatibility_GlEvalPoint2(QOpenGLFunctions_3_2_Compatibility* self, int32_t i, int32_t j) {
    self->glEvalPoint2(static_cast<GLint>(i), static_cast<GLint>(j));
}

void QOpenGLFunctions_3_2_Compatibility_GlEvalMesh2(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode, int32_t i1Val, int32_t i2Val, int32_t j1, int32_t j2) {
    self->glEvalMesh2(static_cast<GLenum>(mode), static_cast<GLint>(i1Val), static_cast<GLint>(i2Val), static_cast<GLint>(j1), static_cast<GLint>(j2));
}

void QOpenGLFunctions_3_2_Compatibility_GlEvalPoint1(QOpenGLFunctions_3_2_Compatibility* self, int32_t i) {
    self->glEvalPoint1(static_cast<GLint>(i));
}

void QOpenGLFunctions_3_2_Compatibility_GlEvalMesh1(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode, int32_t i1Val, int32_t i2Val) {
    self->glEvalMesh1(static_cast<GLenum>(mode), static_cast<GLint>(i1Val), static_cast<GLint>(i2Val));
}

void QOpenGLFunctions_3_2_Compatibility_GlEvalCoord2fv(QOpenGLFunctions_3_2_Compatibility* self, const float* u) {
    self->glEvalCoord2fv(static_cast<const GLfloat*>(u));
}

void QOpenGLFunctions_3_2_Compatibility_GlEvalCoord2f(QOpenGLFunctions_3_2_Compatibility* self, float u, float v) {
    self->glEvalCoord2f(static_cast<GLfloat>(u), static_cast<GLfloat>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlEvalCoord2dv(QOpenGLFunctions_3_2_Compatibility* self, const double* u) {
    self->glEvalCoord2dv(static_cast<const GLdouble*>(u));
}

void QOpenGLFunctions_3_2_Compatibility_GlEvalCoord2d(QOpenGLFunctions_3_2_Compatibility* self, double u, double v) {
    self->glEvalCoord2d(static_cast<GLdouble>(u), static_cast<GLdouble>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlEvalCoord1fv(QOpenGLFunctions_3_2_Compatibility* self, const float* u) {
    self->glEvalCoord1fv(static_cast<const GLfloat*>(u));
}

void QOpenGLFunctions_3_2_Compatibility_GlEvalCoord1f(QOpenGLFunctions_3_2_Compatibility* self, float u) {
    self->glEvalCoord1f(static_cast<GLfloat>(u));
}

void QOpenGLFunctions_3_2_Compatibility_GlEvalCoord1dv(QOpenGLFunctions_3_2_Compatibility* self, const double* u) {
    self->glEvalCoord1dv(static_cast<const GLdouble*>(u));
}

void QOpenGLFunctions_3_2_Compatibility_GlEvalCoord1d(QOpenGLFunctions_3_2_Compatibility* self, double u) {
    self->glEvalCoord1d(static_cast<GLdouble>(u));
}

void QOpenGLFunctions_3_2_Compatibility_GlMapGrid2f(QOpenGLFunctions_3_2_Compatibility* self, int32_t un, float u1Val, float u2Val, int32_t vn, float v1, float v2) {
    self->glMapGrid2f(static_cast<GLint>(un), static_cast<GLfloat>(u1Val), static_cast<GLfloat>(u2Val), static_cast<GLint>(vn), static_cast<GLfloat>(v1), static_cast<GLfloat>(v2));
}

void QOpenGLFunctions_3_2_Compatibility_GlMapGrid2d(QOpenGLFunctions_3_2_Compatibility* self, int32_t un, double u1Val, double u2Val, int32_t vn, double v1, double v2) {
    self->glMapGrid2d(static_cast<GLint>(un), static_cast<GLdouble>(u1Val), static_cast<GLdouble>(u2Val), static_cast<GLint>(vn), static_cast<GLdouble>(v1), static_cast<GLdouble>(v2));
}

void QOpenGLFunctions_3_2_Compatibility_GlMapGrid1f(QOpenGLFunctions_3_2_Compatibility* self, int32_t un, float u1Val, float u2Val) {
    self->glMapGrid1f(static_cast<GLint>(un), static_cast<GLfloat>(u1Val), static_cast<GLfloat>(u2Val));
}

void QOpenGLFunctions_3_2_Compatibility_GlMapGrid1d(QOpenGLFunctions_3_2_Compatibility* self, int32_t un, double u1Val, double u2Val) {
    self->glMapGrid1d(static_cast<GLint>(un), static_cast<GLdouble>(u1Val), static_cast<GLdouble>(u2Val));
}

void QOpenGLFunctions_3_2_Compatibility_GlMap2f(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, float u1Val, float u2Val, int32_t ustride, int32_t uorder, float v1, float v2, int32_t vstride, int32_t vorder, const float* points) {
    self->glMap2f(static_cast<GLenum>(target), static_cast<GLfloat>(u1Val), static_cast<GLfloat>(u2Val), static_cast<GLint>(ustride), static_cast<GLint>(uorder), static_cast<GLfloat>(v1), static_cast<GLfloat>(v2), static_cast<GLint>(vstride), static_cast<GLint>(vorder), static_cast<const GLfloat*>(points));
}

void QOpenGLFunctions_3_2_Compatibility_GlMap2d(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, double u1Val, double u2Val, int32_t ustride, int32_t uorder, double v1, double v2, int32_t vstride, int32_t vorder, const double* points) {
    self->glMap2d(static_cast<GLenum>(target), static_cast<GLdouble>(u1Val), static_cast<GLdouble>(u2Val), static_cast<GLint>(ustride), static_cast<GLint>(uorder), static_cast<GLdouble>(v1), static_cast<GLdouble>(v2), static_cast<GLint>(vstride), static_cast<GLint>(vorder), static_cast<const GLdouble*>(points));
}

void QOpenGLFunctions_3_2_Compatibility_GlMap1f(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, float u1Val, float u2Val, int32_t stride, int32_t order, const float* points) {
    self->glMap1f(static_cast<GLenum>(target), static_cast<GLfloat>(u1Val), static_cast<GLfloat>(u2Val), static_cast<GLint>(stride), static_cast<GLint>(order), static_cast<const GLfloat*>(points));
}

void QOpenGLFunctions_3_2_Compatibility_GlMap1d(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, double u1Val, double u2Val, int32_t stride, int32_t order, const double* points) {
    self->glMap1d(static_cast<GLenum>(target), static_cast<GLdouble>(u1Val), static_cast<GLdouble>(u2Val), static_cast<GLint>(stride), static_cast<GLint>(order), static_cast<const GLdouble*>(points));
}

void QOpenGLFunctions_3_2_Compatibility_GlPushAttrib(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mask) {
    self->glPushAttrib(static_cast<GLbitfield>(mask));
}

void QOpenGLFunctions_3_2_Compatibility_GlPopAttrib(QOpenGLFunctions_3_2_Compatibility* self) {
    self->glPopAttrib();
}

void QOpenGLFunctions_3_2_Compatibility_GlAccum(QOpenGLFunctions_3_2_Compatibility* self, uint32_t op, float value) {
    self->glAccum(static_cast<GLenum>(op), static_cast<GLfloat>(value));
}

void QOpenGLFunctions_3_2_Compatibility_GlIndexMask(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mask) {
    self->glIndexMask(static_cast<GLuint>(mask));
}

void QOpenGLFunctions_3_2_Compatibility_GlClearIndex(QOpenGLFunctions_3_2_Compatibility* self, float c) {
    self->glClearIndex(static_cast<GLfloat>(c));
}

void QOpenGLFunctions_3_2_Compatibility_GlClearAccum(QOpenGLFunctions_3_2_Compatibility* self, float red, float green, float blue, float alpha) {
    self->glClearAccum(static_cast<GLfloat>(red), static_cast<GLfloat>(green), static_cast<GLfloat>(blue), static_cast<GLfloat>(alpha));
}

void QOpenGLFunctions_3_2_Compatibility_GlPushName(QOpenGLFunctions_3_2_Compatibility* self, uint32_t name) {
    self->glPushName(static_cast<GLuint>(name));
}

void QOpenGLFunctions_3_2_Compatibility_GlPopName(QOpenGLFunctions_3_2_Compatibility* self) {
    self->glPopName();
}

void QOpenGLFunctions_3_2_Compatibility_GlPassThrough(QOpenGLFunctions_3_2_Compatibility* self, float token) {
    self->glPassThrough(static_cast<GLfloat>(token));
}

void QOpenGLFunctions_3_2_Compatibility_GlLoadName(QOpenGLFunctions_3_2_Compatibility* self, uint32_t name) {
    self->glLoadName(static_cast<GLuint>(name));
}

void QOpenGLFunctions_3_2_Compatibility_GlInitNames(QOpenGLFunctions_3_2_Compatibility* self) {
    self->glInitNames();
}

int32_t QOpenGLFunctions_3_2_Compatibility_GlRenderMode(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode) {
    return self->glRenderMode(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Compatibility_GlSelectBuffer(QOpenGLFunctions_3_2_Compatibility* self, int32_t size, uint32_t* buffer) {
    self->glSelectBuffer(static_cast<GLsizei>(size), static_cast<GLuint*>(buffer));
}

void QOpenGLFunctions_3_2_Compatibility_GlFeedbackBuffer(QOpenGLFunctions_3_2_Compatibility* self, int32_t size, uint32_t typeVal, float* buffer) {
    self->glFeedbackBuffer(static_cast<GLsizei>(size), static_cast<GLenum>(typeVal), static_cast<GLfloat*>(buffer));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexGeniv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t coord, uint32_t pname, const int32_t* params) {
    self->glTexGeniv(static_cast<GLenum>(coord), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexGeni(QOpenGLFunctions_3_2_Compatibility* self, uint32_t coord, uint32_t pname, int32_t param) {
    self->glTexGeni(static_cast<GLenum>(coord), static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexGenfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t coord, uint32_t pname, const float* params) {
    self->glTexGenfv(static_cast<GLenum>(coord), static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexGenf(QOpenGLFunctions_3_2_Compatibility* self, uint32_t coord, uint32_t pname, float param) {
    self->glTexGenf(static_cast<GLenum>(coord), static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexGendv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t coord, uint32_t pname, const double* params) {
    self->glTexGendv(static_cast<GLenum>(coord), static_cast<GLenum>(pname), static_cast<const GLdouble*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexGend(QOpenGLFunctions_3_2_Compatibility* self, uint32_t coord, uint32_t pname, double param) {
    self->glTexGend(static_cast<GLenum>(coord), static_cast<GLenum>(pname), static_cast<GLdouble>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexEnviv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, const int32_t* params) {
    self->glTexEnviv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexEnvi(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, int32_t param) {
    self->glTexEnvi(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexEnvfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, const float* params) {
    self->glTexEnvfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexEnvf(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, float param) {
    self->glTexEnvf(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlShadeModel(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode) {
    self->glShadeModel(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Compatibility_GlPolygonStipple(QOpenGLFunctions_3_2_Compatibility* self, const uint8_t* mask) {
    self->glPolygonStipple(static_cast<const GLubyte*>(mask));
}

void QOpenGLFunctions_3_2_Compatibility_GlMaterialiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t face, uint32_t pname, const int32_t* params) {
    self->glMaterialiv(static_cast<GLenum>(face), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlMateriali(QOpenGLFunctions_3_2_Compatibility* self, uint32_t face, uint32_t pname, int32_t param) {
    self->glMateriali(static_cast<GLenum>(face), static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlMaterialfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t face, uint32_t pname, const float* params) {
    self->glMaterialfv(static_cast<GLenum>(face), static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlMaterialf(QOpenGLFunctions_3_2_Compatibility* self, uint32_t face, uint32_t pname, float param) {
    self->glMaterialf(static_cast<GLenum>(face), static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlLineStipple(QOpenGLFunctions_3_2_Compatibility* self, int32_t factor, uint16_t pattern) {
    self->glLineStipple(static_cast<GLint>(factor), static_cast<GLushort>(pattern));
}

void QOpenGLFunctions_3_2_Compatibility_GlLightModeliv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, const int32_t* params) {
    self->glLightModeliv(static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlLightModeli(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, int32_t param) {
    self->glLightModeli(static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlLightModelfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, const float* params) {
    self->glLightModelfv(static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlLightModelf(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, float param) {
    self->glLightModelf(static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlLightiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t light, uint32_t pname, const int32_t* params) {
    self->glLightiv(static_cast<GLenum>(light), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlLighti(QOpenGLFunctions_3_2_Compatibility* self, uint32_t light, uint32_t pname, int32_t param) {
    self->glLighti(static_cast<GLenum>(light), static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlLightfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t light, uint32_t pname, const float* params) {
    self->glLightfv(static_cast<GLenum>(light), static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlLightf(QOpenGLFunctions_3_2_Compatibility* self, uint32_t light, uint32_t pname, float param) {
    self->glLightf(static_cast<GLenum>(light), static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlFogiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, const int32_t* params) {
    self->glFogiv(static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlFogi(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, int32_t param) {
    self->glFogi(static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlFogfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, const float* params) {
    self->glFogfv(static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlFogf(QOpenGLFunctions_3_2_Compatibility* self, uint32_t pname, float param) {
    self->glFogf(static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLFunctions_3_2_Compatibility_GlColorMaterial(QOpenGLFunctions_3_2_Compatibility* self, uint32_t face, uint32_t mode) {
    self->glColorMaterial(static_cast<GLenum>(face), static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Compatibility_GlClipPlane(QOpenGLFunctions_3_2_Compatibility* self, uint32_t plane, const double* equation) {
    self->glClipPlane(static_cast<GLenum>(plane), static_cast<const GLdouble*>(equation));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex4sv(QOpenGLFunctions_3_2_Compatibility* self, const int16_t* v) {
    self->glVertex4sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex4s(QOpenGLFunctions_3_2_Compatibility* self, int16_t x, int16_t y, int16_t z, int16_t w) {
    self->glVertex4s(static_cast<GLshort>(x), static_cast<GLshort>(y), static_cast<GLshort>(z), static_cast<GLshort>(w));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex4iv(QOpenGLFunctions_3_2_Compatibility* self, const int32_t* v) {
    self->glVertex4iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex4i(QOpenGLFunctions_3_2_Compatibility* self, int32_t x, int32_t y, int32_t z, int32_t w) {
    self->glVertex4i(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLint>(z), static_cast<GLint>(w));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex4fv(QOpenGLFunctions_3_2_Compatibility* self, const float* v) {
    self->glVertex4fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex4f(QOpenGLFunctions_3_2_Compatibility* self, float x, float y, float z, float w) {
    self->glVertex4f(static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z), static_cast<GLfloat>(w));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex4dv(QOpenGLFunctions_3_2_Compatibility* self, const double* v) {
    self->glVertex4dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex4d(QOpenGLFunctions_3_2_Compatibility* self, double x, double y, double z, double w) {
    self->glVertex4d(static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z), static_cast<GLdouble>(w));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex3sv(QOpenGLFunctions_3_2_Compatibility* self, const int16_t* v) {
    self->glVertex3sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex3s(QOpenGLFunctions_3_2_Compatibility* self, int16_t x, int16_t y, int16_t z) {
    self->glVertex3s(static_cast<GLshort>(x), static_cast<GLshort>(y), static_cast<GLshort>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex3iv(QOpenGLFunctions_3_2_Compatibility* self, const int32_t* v) {
    self->glVertex3iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex3i(QOpenGLFunctions_3_2_Compatibility* self, int32_t x, int32_t y, int32_t z) {
    self->glVertex3i(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLint>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex3fv(QOpenGLFunctions_3_2_Compatibility* self, const float* v) {
    self->glVertex3fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex3f(QOpenGLFunctions_3_2_Compatibility* self, float x, float y, float z) {
    self->glVertex3f(static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex3dv(QOpenGLFunctions_3_2_Compatibility* self, const double* v) {
    self->glVertex3dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex3d(QOpenGLFunctions_3_2_Compatibility* self, double x, double y, double z) {
    self->glVertex3d(static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex2sv(QOpenGLFunctions_3_2_Compatibility* self, const int16_t* v) {
    self->glVertex2sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex2s(QOpenGLFunctions_3_2_Compatibility* self, int16_t x, int16_t y) {
    self->glVertex2s(static_cast<GLshort>(x), static_cast<GLshort>(y));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex2iv(QOpenGLFunctions_3_2_Compatibility* self, const int32_t* v) {
    self->glVertex2iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex2i(QOpenGLFunctions_3_2_Compatibility* self, int32_t x, int32_t y) {
    self->glVertex2i(static_cast<GLint>(x), static_cast<GLint>(y));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex2fv(QOpenGLFunctions_3_2_Compatibility* self, const float* v) {
    self->glVertex2fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex2f(QOpenGLFunctions_3_2_Compatibility* self, float x, float y) {
    self->glVertex2f(static_cast<GLfloat>(x), static_cast<GLfloat>(y));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex2dv(QOpenGLFunctions_3_2_Compatibility* self, const double* v) {
    self->glVertex2dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertex2d(QOpenGLFunctions_3_2_Compatibility* self, double x, double y) {
    self->glVertex2d(static_cast<GLdouble>(x), static_cast<GLdouble>(y));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord4sv(QOpenGLFunctions_3_2_Compatibility* self, const int16_t* v) {
    self->glTexCoord4sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord4s(QOpenGLFunctions_3_2_Compatibility* self, int16_t s, int16_t t, int16_t r, int16_t q) {
    self->glTexCoord4s(static_cast<GLshort>(s), static_cast<GLshort>(t), static_cast<GLshort>(r), static_cast<GLshort>(q));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord4iv(QOpenGLFunctions_3_2_Compatibility* self, const int32_t* v) {
    self->glTexCoord4iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord4i(QOpenGLFunctions_3_2_Compatibility* self, int32_t s, int32_t t, int32_t r, int32_t q) {
    self->glTexCoord4i(static_cast<GLint>(s), static_cast<GLint>(t), static_cast<GLint>(r), static_cast<GLint>(q));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord4fv(QOpenGLFunctions_3_2_Compatibility* self, const float* v) {
    self->glTexCoord4fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord4f(QOpenGLFunctions_3_2_Compatibility* self, float s, float t, float r, float q) {
    self->glTexCoord4f(static_cast<GLfloat>(s), static_cast<GLfloat>(t), static_cast<GLfloat>(r), static_cast<GLfloat>(q));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord4dv(QOpenGLFunctions_3_2_Compatibility* self, const double* v) {
    self->glTexCoord4dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord4d(QOpenGLFunctions_3_2_Compatibility* self, double s, double t, double r, double q) {
    self->glTexCoord4d(static_cast<GLdouble>(s), static_cast<GLdouble>(t), static_cast<GLdouble>(r), static_cast<GLdouble>(q));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord3sv(QOpenGLFunctions_3_2_Compatibility* self, const int16_t* v) {
    self->glTexCoord3sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord3s(QOpenGLFunctions_3_2_Compatibility* self, int16_t s, int16_t t, int16_t r) {
    self->glTexCoord3s(static_cast<GLshort>(s), static_cast<GLshort>(t), static_cast<GLshort>(r));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord3iv(QOpenGLFunctions_3_2_Compatibility* self, const int32_t* v) {
    self->glTexCoord3iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord3i(QOpenGLFunctions_3_2_Compatibility* self, int32_t s, int32_t t, int32_t r) {
    self->glTexCoord3i(static_cast<GLint>(s), static_cast<GLint>(t), static_cast<GLint>(r));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord3fv(QOpenGLFunctions_3_2_Compatibility* self, const float* v) {
    self->glTexCoord3fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord3f(QOpenGLFunctions_3_2_Compatibility* self, float s, float t, float r) {
    self->glTexCoord3f(static_cast<GLfloat>(s), static_cast<GLfloat>(t), static_cast<GLfloat>(r));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord3dv(QOpenGLFunctions_3_2_Compatibility* self, const double* v) {
    self->glTexCoord3dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord3d(QOpenGLFunctions_3_2_Compatibility* self, double s, double t, double r) {
    self->glTexCoord3d(static_cast<GLdouble>(s), static_cast<GLdouble>(t), static_cast<GLdouble>(r));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord2sv(QOpenGLFunctions_3_2_Compatibility* self, const int16_t* v) {
    self->glTexCoord2sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord2s(QOpenGLFunctions_3_2_Compatibility* self, int16_t s, int16_t t) {
    self->glTexCoord2s(static_cast<GLshort>(s), static_cast<GLshort>(t));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord2iv(QOpenGLFunctions_3_2_Compatibility* self, const int32_t* v) {
    self->glTexCoord2iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord2i(QOpenGLFunctions_3_2_Compatibility* self, int32_t s, int32_t t) {
    self->glTexCoord2i(static_cast<GLint>(s), static_cast<GLint>(t));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord2fv(QOpenGLFunctions_3_2_Compatibility* self, const float* v) {
    self->glTexCoord2fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord2f(QOpenGLFunctions_3_2_Compatibility* self, float s, float t) {
    self->glTexCoord2f(static_cast<GLfloat>(s), static_cast<GLfloat>(t));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord2dv(QOpenGLFunctions_3_2_Compatibility* self, const double* v) {
    self->glTexCoord2dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord2d(QOpenGLFunctions_3_2_Compatibility* self, double s, double t) {
    self->glTexCoord2d(static_cast<GLdouble>(s), static_cast<GLdouble>(t));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord1sv(QOpenGLFunctions_3_2_Compatibility* self, const int16_t* v) {
    self->glTexCoord1sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord1s(QOpenGLFunctions_3_2_Compatibility* self, int16_t s) {
    self->glTexCoord1s(static_cast<GLshort>(s));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord1iv(QOpenGLFunctions_3_2_Compatibility* self, const int32_t* v) {
    self->glTexCoord1iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord1i(QOpenGLFunctions_3_2_Compatibility* self, int32_t s) {
    self->glTexCoord1i(static_cast<GLint>(s));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord1fv(QOpenGLFunctions_3_2_Compatibility* self, const float* v) {
    self->glTexCoord1fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord1f(QOpenGLFunctions_3_2_Compatibility* self, float s) {
    self->glTexCoord1f(static_cast<GLfloat>(s));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord1dv(QOpenGLFunctions_3_2_Compatibility* self, const double* v) {
    self->glTexCoord1dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoord1d(QOpenGLFunctions_3_2_Compatibility* self, double s) {
    self->glTexCoord1d(static_cast<GLdouble>(s));
}

void QOpenGLFunctions_3_2_Compatibility_GlRectsv(QOpenGLFunctions_3_2_Compatibility* self, const int16_t* v1, const int16_t* v2) {
    self->glRectsv(static_cast<const GLshort*>(v1), static_cast<const GLshort*>(v2));
}

void QOpenGLFunctions_3_2_Compatibility_GlRects(QOpenGLFunctions_3_2_Compatibility* self, int16_t x1, int16_t y1, int16_t x2, int16_t y2) {
    self->glRects(static_cast<GLshort>(x1), static_cast<GLshort>(y1), static_cast<GLshort>(x2), static_cast<GLshort>(y2));
}

void QOpenGLFunctions_3_2_Compatibility_GlRectiv(QOpenGLFunctions_3_2_Compatibility* self, const int32_t* v1, const int32_t* v2) {
    self->glRectiv(static_cast<const GLint*>(v1), static_cast<const GLint*>(v2));
}

void QOpenGLFunctions_3_2_Compatibility_GlRecti(QOpenGLFunctions_3_2_Compatibility* self, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
    self->glRecti(static_cast<GLint>(x1), static_cast<GLint>(y1), static_cast<GLint>(x2), static_cast<GLint>(y2));
}

void QOpenGLFunctions_3_2_Compatibility_GlRectfv(QOpenGLFunctions_3_2_Compatibility* self, const float* v1, const float* v2) {
    self->glRectfv(static_cast<const GLfloat*>(v1), static_cast<const GLfloat*>(v2));
}

void QOpenGLFunctions_3_2_Compatibility_GlRectf(QOpenGLFunctions_3_2_Compatibility* self, float x1, float y1, float x2, float y2) {
    self->glRectf(static_cast<GLfloat>(x1), static_cast<GLfloat>(y1), static_cast<GLfloat>(x2), static_cast<GLfloat>(y2));
}

void QOpenGLFunctions_3_2_Compatibility_GlRectdv(QOpenGLFunctions_3_2_Compatibility* self, const double* v1, const double* v2) {
    self->glRectdv(static_cast<const GLdouble*>(v1), static_cast<const GLdouble*>(v2));
}

void QOpenGLFunctions_3_2_Compatibility_GlRectd(QOpenGLFunctions_3_2_Compatibility* self, double x1, double y1, double x2, double y2) {
    self->glRectd(static_cast<GLdouble>(x1), static_cast<GLdouble>(y1), static_cast<GLdouble>(x2), static_cast<GLdouble>(y2));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos4sv(QOpenGLFunctions_3_2_Compatibility* self, const int16_t* v) {
    self->glRasterPos4sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos4s(QOpenGLFunctions_3_2_Compatibility* self, int16_t x, int16_t y, int16_t z, int16_t w) {
    self->glRasterPos4s(static_cast<GLshort>(x), static_cast<GLshort>(y), static_cast<GLshort>(z), static_cast<GLshort>(w));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos4iv(QOpenGLFunctions_3_2_Compatibility* self, const int32_t* v) {
    self->glRasterPos4iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos4i(QOpenGLFunctions_3_2_Compatibility* self, int32_t x, int32_t y, int32_t z, int32_t w) {
    self->glRasterPos4i(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLint>(z), static_cast<GLint>(w));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos4fv(QOpenGLFunctions_3_2_Compatibility* self, const float* v) {
    self->glRasterPos4fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos4f(QOpenGLFunctions_3_2_Compatibility* self, float x, float y, float z, float w) {
    self->glRasterPos4f(static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z), static_cast<GLfloat>(w));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos4dv(QOpenGLFunctions_3_2_Compatibility* self, const double* v) {
    self->glRasterPos4dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos4d(QOpenGLFunctions_3_2_Compatibility* self, double x, double y, double z, double w) {
    self->glRasterPos4d(static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z), static_cast<GLdouble>(w));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos3sv(QOpenGLFunctions_3_2_Compatibility* self, const int16_t* v) {
    self->glRasterPos3sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos3s(QOpenGLFunctions_3_2_Compatibility* self, int16_t x, int16_t y, int16_t z) {
    self->glRasterPos3s(static_cast<GLshort>(x), static_cast<GLshort>(y), static_cast<GLshort>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos3iv(QOpenGLFunctions_3_2_Compatibility* self, const int32_t* v) {
    self->glRasterPos3iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos3i(QOpenGLFunctions_3_2_Compatibility* self, int32_t x, int32_t y, int32_t z) {
    self->glRasterPos3i(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLint>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos3fv(QOpenGLFunctions_3_2_Compatibility* self, const float* v) {
    self->glRasterPos3fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos3f(QOpenGLFunctions_3_2_Compatibility* self, float x, float y, float z) {
    self->glRasterPos3f(static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos3dv(QOpenGLFunctions_3_2_Compatibility* self, const double* v) {
    self->glRasterPos3dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos3d(QOpenGLFunctions_3_2_Compatibility* self, double x, double y, double z) {
    self->glRasterPos3d(static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos2sv(QOpenGLFunctions_3_2_Compatibility* self, const int16_t* v) {
    self->glRasterPos2sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos2s(QOpenGLFunctions_3_2_Compatibility* self, int16_t x, int16_t y) {
    self->glRasterPos2s(static_cast<GLshort>(x), static_cast<GLshort>(y));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos2iv(QOpenGLFunctions_3_2_Compatibility* self, const int32_t* v) {
    self->glRasterPos2iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos2i(QOpenGLFunctions_3_2_Compatibility* self, int32_t x, int32_t y) {
    self->glRasterPos2i(static_cast<GLint>(x), static_cast<GLint>(y));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos2fv(QOpenGLFunctions_3_2_Compatibility* self, const float* v) {
    self->glRasterPos2fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos2f(QOpenGLFunctions_3_2_Compatibility* self, float x, float y) {
    self->glRasterPos2f(static_cast<GLfloat>(x), static_cast<GLfloat>(y));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos2dv(QOpenGLFunctions_3_2_Compatibility* self, const double* v) {
    self->glRasterPos2dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlRasterPos2d(QOpenGLFunctions_3_2_Compatibility* self, double x, double y) {
    self->glRasterPos2d(static_cast<GLdouble>(x), static_cast<GLdouble>(y));
}

void QOpenGLFunctions_3_2_Compatibility_GlNormal3sv(QOpenGLFunctions_3_2_Compatibility* self, const int16_t* v) {
    self->glNormal3sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlNormal3s(QOpenGLFunctions_3_2_Compatibility* self, int16_t nx, int16_t ny, int16_t nz) {
    self->glNormal3s(static_cast<GLshort>(nx), static_cast<GLshort>(ny), static_cast<GLshort>(nz));
}

void QOpenGLFunctions_3_2_Compatibility_GlNormal3iv(QOpenGLFunctions_3_2_Compatibility* self, const int32_t* v) {
    self->glNormal3iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlNormal3i(QOpenGLFunctions_3_2_Compatibility* self, int32_t nx, int32_t ny, int32_t nz) {
    self->glNormal3i(static_cast<GLint>(nx), static_cast<GLint>(ny), static_cast<GLint>(nz));
}

void QOpenGLFunctions_3_2_Compatibility_GlNormal3fv(QOpenGLFunctions_3_2_Compatibility* self, const float* v) {
    self->glNormal3fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlNormal3f(QOpenGLFunctions_3_2_Compatibility* self, float nx, float ny, float nz) {
    self->glNormal3f(static_cast<GLfloat>(nx), static_cast<GLfloat>(ny), static_cast<GLfloat>(nz));
}

void QOpenGLFunctions_3_2_Compatibility_GlNormal3dv(QOpenGLFunctions_3_2_Compatibility* self, const double* v) {
    self->glNormal3dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlNormal3d(QOpenGLFunctions_3_2_Compatibility* self, double nx, double ny, double nz) {
    self->glNormal3d(static_cast<GLdouble>(nx), static_cast<GLdouble>(ny), static_cast<GLdouble>(nz));
}

void QOpenGLFunctions_3_2_Compatibility_GlNormal3bv(QOpenGLFunctions_3_2_Compatibility* self, const signed char* v) {
    self->glNormal3bv(static_cast<const GLbyte*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlNormal3b(QOpenGLFunctions_3_2_Compatibility* self, signed char nx, signed char ny, signed char nz) {
    self->glNormal3b(static_cast<GLbyte>(nx), static_cast<GLbyte>(ny), static_cast<GLbyte>(nz));
}

void QOpenGLFunctions_3_2_Compatibility_GlIndexsv(QOpenGLFunctions_3_2_Compatibility* self, const int16_t* c) {
    self->glIndexsv(static_cast<const GLshort*>(c));
}

void QOpenGLFunctions_3_2_Compatibility_GlIndexs(QOpenGLFunctions_3_2_Compatibility* self, int16_t c) {
    self->glIndexs(static_cast<GLshort>(c));
}

void QOpenGLFunctions_3_2_Compatibility_GlIndexiv(QOpenGLFunctions_3_2_Compatibility* self, const int32_t* c) {
    self->glIndexiv(static_cast<const GLint*>(c));
}

void QOpenGLFunctions_3_2_Compatibility_GlIndexi(QOpenGLFunctions_3_2_Compatibility* self, int32_t c) {
    self->glIndexi(static_cast<GLint>(c));
}

void QOpenGLFunctions_3_2_Compatibility_GlIndexfv(QOpenGLFunctions_3_2_Compatibility* self, const float* c) {
    self->glIndexfv(static_cast<const GLfloat*>(c));
}

void QOpenGLFunctions_3_2_Compatibility_GlIndexf(QOpenGLFunctions_3_2_Compatibility* self, float c) {
    self->glIndexf(static_cast<GLfloat>(c));
}

void QOpenGLFunctions_3_2_Compatibility_GlIndexdv(QOpenGLFunctions_3_2_Compatibility* self, const double* c) {
    self->glIndexdv(static_cast<const GLdouble*>(c));
}

void QOpenGLFunctions_3_2_Compatibility_GlIndexd(QOpenGLFunctions_3_2_Compatibility* self, double c) {
    self->glIndexd(static_cast<GLdouble>(c));
}

void QOpenGLFunctions_3_2_Compatibility_GlEnd(QOpenGLFunctions_3_2_Compatibility* self) {
    self->glEnd();
}

void QOpenGLFunctions_3_2_Compatibility_GlEdgeFlagv(QOpenGLFunctions_3_2_Compatibility* self, const unsigned char* flag) {
    self->glEdgeFlagv(static_cast<const GLboolean*>(flag));
}

void QOpenGLFunctions_3_2_Compatibility_GlEdgeFlag(QOpenGLFunctions_3_2_Compatibility* self, unsigned char flag) {
    self->glEdgeFlag(static_cast<GLboolean>(flag));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor4usv(QOpenGLFunctions_3_2_Compatibility* self, const uint16_t* v) {
    self->glColor4usv(static_cast<const GLushort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor4us(QOpenGLFunctions_3_2_Compatibility* self, uint16_t red, uint16_t green, uint16_t blue, uint16_t alpha) {
    self->glColor4us(static_cast<GLushort>(red), static_cast<GLushort>(green), static_cast<GLushort>(blue), static_cast<GLushort>(alpha));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor4uiv(QOpenGLFunctions_3_2_Compatibility* self, const uint32_t* v) {
    self->glColor4uiv(static_cast<const GLuint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor4ui(QOpenGLFunctions_3_2_Compatibility* self, uint32_t red, uint32_t green, uint32_t blue, uint32_t alpha) {
    self->glColor4ui(static_cast<GLuint>(red), static_cast<GLuint>(green), static_cast<GLuint>(blue), static_cast<GLuint>(alpha));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor4ubv(QOpenGLFunctions_3_2_Compatibility* self, const uint8_t* v) {
    self->glColor4ubv(static_cast<const GLubyte*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor4ub(QOpenGLFunctions_3_2_Compatibility* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
    self->glColor4ub(static_cast<GLubyte>(red), static_cast<GLubyte>(green), static_cast<GLubyte>(blue), static_cast<GLubyte>(alpha));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor4sv(QOpenGLFunctions_3_2_Compatibility* self, const int16_t* v) {
    self->glColor4sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor4s(QOpenGLFunctions_3_2_Compatibility* self, int16_t red, int16_t green, int16_t blue, int16_t alpha) {
    self->glColor4s(static_cast<GLshort>(red), static_cast<GLshort>(green), static_cast<GLshort>(blue), static_cast<GLshort>(alpha));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor4iv(QOpenGLFunctions_3_2_Compatibility* self, const int32_t* v) {
    self->glColor4iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor4i(QOpenGLFunctions_3_2_Compatibility* self, int32_t red, int32_t green, int32_t blue, int32_t alpha) {
    self->glColor4i(static_cast<GLint>(red), static_cast<GLint>(green), static_cast<GLint>(blue), static_cast<GLint>(alpha));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor4fv(QOpenGLFunctions_3_2_Compatibility* self, const float* v) {
    self->glColor4fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor4f(QOpenGLFunctions_3_2_Compatibility* self, float red, float green, float blue, float alpha) {
    self->glColor4f(static_cast<GLfloat>(red), static_cast<GLfloat>(green), static_cast<GLfloat>(blue), static_cast<GLfloat>(alpha));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor4dv(QOpenGLFunctions_3_2_Compatibility* self, const double* v) {
    self->glColor4dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor4d(QOpenGLFunctions_3_2_Compatibility* self, double red, double green, double blue, double alpha) {
    self->glColor4d(static_cast<GLdouble>(red), static_cast<GLdouble>(green), static_cast<GLdouble>(blue), static_cast<GLdouble>(alpha));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor4bv(QOpenGLFunctions_3_2_Compatibility* self, const signed char* v) {
    self->glColor4bv(static_cast<const GLbyte*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor4b(QOpenGLFunctions_3_2_Compatibility* self, signed char red, signed char green, signed char blue, signed char alpha) {
    self->glColor4b(static_cast<GLbyte>(red), static_cast<GLbyte>(green), static_cast<GLbyte>(blue), static_cast<GLbyte>(alpha));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor3usv(QOpenGLFunctions_3_2_Compatibility* self, const uint16_t* v) {
    self->glColor3usv(static_cast<const GLushort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor3us(QOpenGLFunctions_3_2_Compatibility* self, uint16_t red, uint16_t green, uint16_t blue) {
    self->glColor3us(static_cast<GLushort>(red), static_cast<GLushort>(green), static_cast<GLushort>(blue));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor3uiv(QOpenGLFunctions_3_2_Compatibility* self, const uint32_t* v) {
    self->glColor3uiv(static_cast<const GLuint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor3ui(QOpenGLFunctions_3_2_Compatibility* self, uint32_t red, uint32_t green, uint32_t blue) {
    self->glColor3ui(static_cast<GLuint>(red), static_cast<GLuint>(green), static_cast<GLuint>(blue));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor3ubv(QOpenGLFunctions_3_2_Compatibility* self, const uint8_t* v) {
    self->glColor3ubv(static_cast<const GLubyte*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor3ub(QOpenGLFunctions_3_2_Compatibility* self, uint8_t red, uint8_t green, uint8_t blue) {
    self->glColor3ub(static_cast<GLubyte>(red), static_cast<GLubyte>(green), static_cast<GLubyte>(blue));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor3sv(QOpenGLFunctions_3_2_Compatibility* self, const int16_t* v) {
    self->glColor3sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor3s(QOpenGLFunctions_3_2_Compatibility* self, int16_t red, int16_t green, int16_t blue) {
    self->glColor3s(static_cast<GLshort>(red), static_cast<GLshort>(green), static_cast<GLshort>(blue));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor3iv(QOpenGLFunctions_3_2_Compatibility* self, const int32_t* v) {
    self->glColor3iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor3i(QOpenGLFunctions_3_2_Compatibility* self, int32_t red, int32_t green, int32_t blue) {
    self->glColor3i(static_cast<GLint>(red), static_cast<GLint>(green), static_cast<GLint>(blue));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor3fv(QOpenGLFunctions_3_2_Compatibility* self, const float* v) {
    self->glColor3fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor3f(QOpenGLFunctions_3_2_Compatibility* self, float red, float green, float blue) {
    self->glColor3f(static_cast<GLfloat>(red), static_cast<GLfloat>(green), static_cast<GLfloat>(blue));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor3dv(QOpenGLFunctions_3_2_Compatibility* self, const double* v) {
    self->glColor3dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor3d(QOpenGLFunctions_3_2_Compatibility* self, double red, double green, double blue) {
    self->glColor3d(static_cast<GLdouble>(red), static_cast<GLdouble>(green), static_cast<GLdouble>(blue));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor3bv(QOpenGLFunctions_3_2_Compatibility* self, const signed char* v) {
    self->glColor3bv(static_cast<const GLbyte*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlColor3b(QOpenGLFunctions_3_2_Compatibility* self, signed char red, signed char green, signed char blue) {
    self->glColor3b(static_cast<GLbyte>(red), static_cast<GLbyte>(green), static_cast<GLbyte>(blue));
}

void QOpenGLFunctions_3_2_Compatibility_GlBitmap(QOpenGLFunctions_3_2_Compatibility* self, int32_t width, int32_t height, float xorig, float yorig, float xmove, float ymove, const uint8_t* bitmap) {
    self->glBitmap(static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLfloat>(xorig), static_cast<GLfloat>(yorig), static_cast<GLfloat>(xmove), static_cast<GLfloat>(ymove), static_cast<const GLubyte*>(bitmap));
}

void QOpenGLFunctions_3_2_Compatibility_GlBegin(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mode) {
    self->glBegin(static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Compatibility_GlListBase(QOpenGLFunctions_3_2_Compatibility* self, uint32_t base) {
    self->glListBase(static_cast<GLuint>(base));
}

uint32_t QOpenGLFunctions_3_2_Compatibility_GlGenLists(QOpenGLFunctions_3_2_Compatibility* self, int32_t range) {
    return self->glGenLists(static_cast<GLsizei>(range));
}

void QOpenGLFunctions_3_2_Compatibility_GlDeleteLists(QOpenGLFunctions_3_2_Compatibility* self, uint32_t list, int32_t range) {
    self->glDeleteLists(static_cast<GLuint>(list), static_cast<GLsizei>(range));
}

void QOpenGLFunctions_3_2_Compatibility_GlCallLists(QOpenGLFunctions_3_2_Compatibility* self, int32_t n, uint32_t typeVal, const void* lists) {
    self->glCallLists(static_cast<GLsizei>(n), static_cast<GLenum>(typeVal), lists);
}

void QOpenGLFunctions_3_2_Compatibility_GlCallList(QOpenGLFunctions_3_2_Compatibility* self, uint32_t list) {
    self->glCallList(static_cast<GLuint>(list));
}

void QOpenGLFunctions_3_2_Compatibility_GlEndList(QOpenGLFunctions_3_2_Compatibility* self) {
    self->glEndList();
}

void QOpenGLFunctions_3_2_Compatibility_GlNewList(QOpenGLFunctions_3_2_Compatibility* self, uint32_t list, uint32_t mode) {
    self->glNewList(static_cast<GLuint>(list), static_cast<GLenum>(mode));
}

void QOpenGLFunctions_3_2_Compatibility_GlPushClientAttrib(QOpenGLFunctions_3_2_Compatibility* self, uint32_t mask) {
    self->glPushClientAttrib(static_cast<GLbitfield>(mask));
}

void QOpenGLFunctions_3_2_Compatibility_GlPopClientAttrib(QOpenGLFunctions_3_2_Compatibility* self) {
    self->glPopClientAttrib();
}

void QOpenGLFunctions_3_2_Compatibility_GlPrioritizeTextures(QOpenGLFunctions_3_2_Compatibility* self, int32_t n, const uint32_t* textures, const float* priorities) {
    self->glPrioritizeTextures(static_cast<GLsizei>(n), static_cast<const GLuint*>(textures), static_cast<const GLfloat*>(priorities));
}

unsigned char QOpenGLFunctions_3_2_Compatibility_GlAreTexturesResident(QOpenGLFunctions_3_2_Compatibility* self, int32_t n, const uint32_t* textures, unsigned char* residences) {
    return self->glAreTexturesResident(static_cast<GLsizei>(n), static_cast<const GLuint*>(textures), static_cast<GLboolean*>(residences));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexPointer(QOpenGLFunctions_3_2_Compatibility* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
    self->glVertexPointer(static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_3_2_Compatibility_GlTexCoordPointer(QOpenGLFunctions_3_2_Compatibility* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
    self->glTexCoordPointer(static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_3_2_Compatibility_GlNormalPointer(QOpenGLFunctions_3_2_Compatibility* self, uint32_t typeVal, int32_t stride, const void* pointer) {
    self->glNormalPointer(static_cast<GLenum>(typeVal), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_3_2_Compatibility_GlInterleavedArrays(QOpenGLFunctions_3_2_Compatibility* self, uint32_t format, int32_t stride, const void* pointer) {
    self->glInterleavedArrays(static_cast<GLenum>(format), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_3_2_Compatibility_GlIndexPointer(QOpenGLFunctions_3_2_Compatibility* self, uint32_t typeVal, int32_t stride, const void* pointer) {
    self->glIndexPointer(static_cast<GLenum>(typeVal), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_3_2_Compatibility_GlEnableClientState(QOpenGLFunctions_3_2_Compatibility* self, uint32_t array) {
    self->glEnableClientState(static_cast<GLenum>(array));
}

void QOpenGLFunctions_3_2_Compatibility_GlEdgeFlagPointer(QOpenGLFunctions_3_2_Compatibility* self, int32_t stride, const void* pointer) {
    self->glEdgeFlagPointer(static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_3_2_Compatibility_GlDisableClientState(QOpenGLFunctions_3_2_Compatibility* self, uint32_t array) {
    self->glDisableClientState(static_cast<GLenum>(array));
}

void QOpenGLFunctions_3_2_Compatibility_GlColorPointer(QOpenGLFunctions_3_2_Compatibility* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
    self->glColorPointer(static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_3_2_Compatibility_GlArrayElement(QOpenGLFunctions_3_2_Compatibility* self, int32_t i) {
    self->glArrayElement(static_cast<GLint>(i));
}

void QOpenGLFunctions_3_2_Compatibility_GlResetMinmax(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target) {
    self->glResetMinmax(static_cast<GLenum>(target));
}

void QOpenGLFunctions_3_2_Compatibility_GlResetHistogram(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target) {
    self->glResetHistogram(static_cast<GLenum>(target));
}

void QOpenGLFunctions_3_2_Compatibility_GlMinmax(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t internalformat, unsigned char sink) {
    self->glMinmax(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLboolean>(sink));
}

void QOpenGLFunctions_3_2_Compatibility_GlHistogram(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t width, uint32_t internalformat, unsigned char sink) {
    self->glHistogram(static_cast<GLenum>(target), static_cast<GLsizei>(width), static_cast<GLenum>(internalformat), static_cast<GLboolean>(sink));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetMinmaxParameteriv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetMinmaxParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetMinmaxParameterfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, float* params) {
    self->glGetMinmaxParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetMinmax(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, unsigned char reset, uint32_t format, uint32_t typeVal, void* values) {
    self->glGetMinmax(static_cast<GLenum>(target), static_cast<GLboolean>(reset), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), values);
}

void QOpenGLFunctions_3_2_Compatibility_GlGetHistogramParameteriv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetHistogramParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetHistogramParameterfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, float* params) {
    self->glGetHistogramParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetHistogram(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, unsigned char reset, uint32_t format, uint32_t typeVal, void* values) {
    self->glGetHistogram(static_cast<GLenum>(target), static_cast<GLboolean>(reset), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), values);
}

void QOpenGLFunctions_3_2_Compatibility_GlSeparableFilter2D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* row, const void* column) {
    self->glSeparableFilter2D(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), row, column);
}

void QOpenGLFunctions_3_2_Compatibility_GlGetSeparableFilter(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t format, uint32_t typeVal, void* row, void* column, void* span) {
    self->glGetSeparableFilter(static_cast<GLenum>(target), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), row, column, span);
}

void QOpenGLFunctions_3_2_Compatibility_GlGetConvolutionParameteriv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetConvolutionParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetConvolutionParameterfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, float* params) {
    self->glGetConvolutionParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetConvolutionFilter(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t format, uint32_t typeVal, void* image) {
    self->glGetConvolutionFilter(static_cast<GLenum>(target), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), image);
}

void QOpenGLFunctions_3_2_Compatibility_GlCopyConvolutionFilter2D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glCopyConvolutionFilter2D(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLFunctions_3_2_Compatibility_GlCopyConvolutionFilter1D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width) {
    self->glCopyConvolutionFilter1D(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width));
}

void QOpenGLFunctions_3_2_Compatibility_GlConvolutionParameteriv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, const int32_t* params) {
    self->glConvolutionParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlConvolutionParameteri(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, int32_t params) {
    self->glConvolutionParameteri(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlConvolutionParameterfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, const float* params) {
    self->glConvolutionParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlConvolutionParameterf(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, float params) {
    self->glConvolutionParameterf(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlConvolutionFilter2D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, const void* image) {
    self->glConvolutionFilter2D(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), image);
}

void QOpenGLFunctions_3_2_Compatibility_GlConvolutionFilter1D(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t internalformat, int32_t width, uint32_t format, uint32_t typeVal, const void* image) {
    self->glConvolutionFilter1D(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), image);
}

void QOpenGLFunctions_3_2_Compatibility_GlCopyColorSubTable(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t start, int32_t x, int32_t y, int32_t width) {
    self->glCopyColorSubTable(static_cast<GLenum>(target), static_cast<GLsizei>(start), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width));
}

void QOpenGLFunctions_3_2_Compatibility_GlColorSubTable(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t start, int32_t count, uint32_t format, uint32_t typeVal, const void* data) {
    self->glColorSubTable(static_cast<GLenum>(target), static_cast<GLsizei>(start), static_cast<GLsizei>(count), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), data);
}

void QOpenGLFunctions_3_2_Compatibility_GlGetColorTableParameteriv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetColorTableParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetColorTableParameterfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, float* params) {
    self->glGetColorTableParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlGetColorTable(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t format, uint32_t typeVal, void* table) {
    self->glGetColorTable(static_cast<GLenum>(target), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), table);
}

void QOpenGLFunctions_3_2_Compatibility_GlCopyColorTable(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width) {
    self->glCopyColorTable(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width));
}

void QOpenGLFunctions_3_2_Compatibility_GlColorTableParameteriv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, const int32_t* params) {
    self->glColorTableParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlColorTableParameterfv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t pname, const float* params) {
    self->glColorTableParameterfv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLfloat*>(params));
}

void QOpenGLFunctions_3_2_Compatibility_GlColorTable(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, uint32_t internalformat, int32_t width, uint32_t format, uint32_t typeVal, const void* table) {
    self->glColorTable(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), table);
}

void QOpenGLFunctions_3_2_Compatibility_GlMultTransposeMatrixd(QOpenGLFunctions_3_2_Compatibility* self, const double* m) {
    self->glMultTransposeMatrixd(static_cast<const GLdouble*>(m));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultTransposeMatrixf(QOpenGLFunctions_3_2_Compatibility* self, const float* m) {
    self->glMultTransposeMatrixf(static_cast<const GLfloat*>(m));
}

void QOpenGLFunctions_3_2_Compatibility_GlLoadTransposeMatrixd(QOpenGLFunctions_3_2_Compatibility* self, const double* m) {
    self->glLoadTransposeMatrixd(static_cast<const GLdouble*>(m));
}

void QOpenGLFunctions_3_2_Compatibility_GlLoadTransposeMatrixf(QOpenGLFunctions_3_2_Compatibility* self, const float* m) {
    self->glLoadTransposeMatrixf(static_cast<const GLfloat*>(m));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord4sv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, const int16_t* v) {
    self->glMultiTexCoord4sv(static_cast<GLenum>(target), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord4s(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int16_t s, int16_t t, int16_t r, int16_t q) {
    self->glMultiTexCoord4s(static_cast<GLenum>(target), static_cast<GLshort>(s), static_cast<GLshort>(t), static_cast<GLshort>(r), static_cast<GLshort>(q));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord4iv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, const int32_t* v) {
    self->glMultiTexCoord4iv(static_cast<GLenum>(target), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord4i(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t s, int32_t t, int32_t r, int32_t q) {
    self->glMultiTexCoord4i(static_cast<GLenum>(target), static_cast<GLint>(s), static_cast<GLint>(t), static_cast<GLint>(r), static_cast<GLint>(q));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord4fv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, const float* v) {
    self->glMultiTexCoord4fv(static_cast<GLenum>(target), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord4f(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, float s, float t, float r, float q) {
    self->glMultiTexCoord4f(static_cast<GLenum>(target), static_cast<GLfloat>(s), static_cast<GLfloat>(t), static_cast<GLfloat>(r), static_cast<GLfloat>(q));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord4dv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, const double* v) {
    self->glMultiTexCoord4dv(static_cast<GLenum>(target), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord4d(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, double s, double t, double r, double q) {
    self->glMultiTexCoord4d(static_cast<GLenum>(target), static_cast<GLdouble>(s), static_cast<GLdouble>(t), static_cast<GLdouble>(r), static_cast<GLdouble>(q));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord3sv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, const int16_t* v) {
    self->glMultiTexCoord3sv(static_cast<GLenum>(target), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord3s(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int16_t s, int16_t t, int16_t r) {
    self->glMultiTexCoord3s(static_cast<GLenum>(target), static_cast<GLshort>(s), static_cast<GLshort>(t), static_cast<GLshort>(r));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord3iv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, const int32_t* v) {
    self->glMultiTexCoord3iv(static_cast<GLenum>(target), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord3i(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t s, int32_t t, int32_t r) {
    self->glMultiTexCoord3i(static_cast<GLenum>(target), static_cast<GLint>(s), static_cast<GLint>(t), static_cast<GLint>(r));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord3fv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, const float* v) {
    self->glMultiTexCoord3fv(static_cast<GLenum>(target), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord3f(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, float s, float t, float r) {
    self->glMultiTexCoord3f(static_cast<GLenum>(target), static_cast<GLfloat>(s), static_cast<GLfloat>(t), static_cast<GLfloat>(r));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord3dv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, const double* v) {
    self->glMultiTexCoord3dv(static_cast<GLenum>(target), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord3d(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, double s, double t, double r) {
    self->glMultiTexCoord3d(static_cast<GLenum>(target), static_cast<GLdouble>(s), static_cast<GLdouble>(t), static_cast<GLdouble>(r));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord2sv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, const int16_t* v) {
    self->glMultiTexCoord2sv(static_cast<GLenum>(target), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord2s(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int16_t s, int16_t t) {
    self->glMultiTexCoord2s(static_cast<GLenum>(target), static_cast<GLshort>(s), static_cast<GLshort>(t));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord2iv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, const int32_t* v) {
    self->glMultiTexCoord2iv(static_cast<GLenum>(target), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord2i(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t s, int32_t t) {
    self->glMultiTexCoord2i(static_cast<GLenum>(target), static_cast<GLint>(s), static_cast<GLint>(t));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord2fv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, const float* v) {
    self->glMultiTexCoord2fv(static_cast<GLenum>(target), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord2f(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, float s, float t) {
    self->glMultiTexCoord2f(static_cast<GLenum>(target), static_cast<GLfloat>(s), static_cast<GLfloat>(t));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord2dv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, const double* v) {
    self->glMultiTexCoord2dv(static_cast<GLenum>(target), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord2d(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, double s, double t) {
    self->glMultiTexCoord2d(static_cast<GLenum>(target), static_cast<GLdouble>(s), static_cast<GLdouble>(t));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord1sv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, const int16_t* v) {
    self->glMultiTexCoord1sv(static_cast<GLenum>(target), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord1s(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int16_t s) {
    self->glMultiTexCoord1s(static_cast<GLenum>(target), static_cast<GLshort>(s));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord1iv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, const int32_t* v) {
    self->glMultiTexCoord1iv(static_cast<GLenum>(target), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord1i(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, int32_t s) {
    self->glMultiTexCoord1i(static_cast<GLenum>(target), static_cast<GLint>(s));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord1fv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, const float* v) {
    self->glMultiTexCoord1fv(static_cast<GLenum>(target), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord1f(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, float s) {
    self->glMultiTexCoord1f(static_cast<GLenum>(target), static_cast<GLfloat>(s));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord1dv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, const double* v) {
    self->glMultiTexCoord1dv(static_cast<GLenum>(target), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlMultiTexCoord1d(QOpenGLFunctions_3_2_Compatibility* self, uint32_t target, double s) {
    self->glMultiTexCoord1d(static_cast<GLenum>(target), static_cast<GLdouble>(s));
}

void QOpenGLFunctions_3_2_Compatibility_GlClientActiveTexture(QOpenGLFunctions_3_2_Compatibility* self, uint32_t texture) {
    self->glClientActiveTexture(static_cast<GLenum>(texture));
}

void QOpenGLFunctions_3_2_Compatibility_GlWindowPos3sv(QOpenGLFunctions_3_2_Compatibility* self, const int16_t* v) {
    self->glWindowPos3sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlWindowPos3s(QOpenGLFunctions_3_2_Compatibility* self, int16_t x, int16_t y, int16_t z) {
    self->glWindowPos3s(static_cast<GLshort>(x), static_cast<GLshort>(y), static_cast<GLshort>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlWindowPos3iv(QOpenGLFunctions_3_2_Compatibility* self, const int32_t* v) {
    self->glWindowPos3iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlWindowPos3i(QOpenGLFunctions_3_2_Compatibility* self, int32_t x, int32_t y, int32_t z) {
    self->glWindowPos3i(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLint>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlWindowPos3fv(QOpenGLFunctions_3_2_Compatibility* self, const float* v) {
    self->glWindowPos3fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlWindowPos3f(QOpenGLFunctions_3_2_Compatibility* self, float x, float y, float z) {
    self->glWindowPos3f(static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlWindowPos3dv(QOpenGLFunctions_3_2_Compatibility* self, const double* v) {
    self->glWindowPos3dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlWindowPos3d(QOpenGLFunctions_3_2_Compatibility* self, double x, double y, double z) {
    self->glWindowPos3d(static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlWindowPos2sv(QOpenGLFunctions_3_2_Compatibility* self, const int16_t* v) {
    self->glWindowPos2sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlWindowPos2s(QOpenGLFunctions_3_2_Compatibility* self, int16_t x, int16_t y) {
    self->glWindowPos2s(static_cast<GLshort>(x), static_cast<GLshort>(y));
}

void QOpenGLFunctions_3_2_Compatibility_GlWindowPos2iv(QOpenGLFunctions_3_2_Compatibility* self, const int32_t* v) {
    self->glWindowPos2iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlWindowPos2i(QOpenGLFunctions_3_2_Compatibility* self, int32_t x, int32_t y) {
    self->glWindowPos2i(static_cast<GLint>(x), static_cast<GLint>(y));
}

void QOpenGLFunctions_3_2_Compatibility_GlWindowPos2fv(QOpenGLFunctions_3_2_Compatibility* self, const float* v) {
    self->glWindowPos2fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlWindowPos2f(QOpenGLFunctions_3_2_Compatibility* self, float x, float y) {
    self->glWindowPos2f(static_cast<GLfloat>(x), static_cast<GLfloat>(y));
}

void QOpenGLFunctions_3_2_Compatibility_GlWindowPos2dv(QOpenGLFunctions_3_2_Compatibility* self, const double* v) {
    self->glWindowPos2dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlWindowPos2d(QOpenGLFunctions_3_2_Compatibility* self, double x, double y) {
    self->glWindowPos2d(static_cast<GLdouble>(x), static_cast<GLdouble>(y));
}

void QOpenGLFunctions_3_2_Compatibility_GlSecondaryColorPointer(QOpenGLFunctions_3_2_Compatibility* self, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
    self->glSecondaryColorPointer(static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3usv(QOpenGLFunctions_3_2_Compatibility* self, const uint16_t* v) {
    self->glSecondaryColor3usv(static_cast<const GLushort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3us(QOpenGLFunctions_3_2_Compatibility* self, uint16_t red, uint16_t green, uint16_t blue) {
    self->glSecondaryColor3us(static_cast<GLushort>(red), static_cast<GLushort>(green), static_cast<GLushort>(blue));
}

void QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3uiv(QOpenGLFunctions_3_2_Compatibility* self, const uint32_t* v) {
    self->glSecondaryColor3uiv(static_cast<const GLuint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3ui(QOpenGLFunctions_3_2_Compatibility* self, uint32_t red, uint32_t green, uint32_t blue) {
    self->glSecondaryColor3ui(static_cast<GLuint>(red), static_cast<GLuint>(green), static_cast<GLuint>(blue));
}

void QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3ubv(QOpenGLFunctions_3_2_Compatibility* self, const uint8_t* v) {
    self->glSecondaryColor3ubv(static_cast<const GLubyte*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3ub(QOpenGLFunctions_3_2_Compatibility* self, uint8_t red, uint8_t green, uint8_t blue) {
    self->glSecondaryColor3ub(static_cast<GLubyte>(red), static_cast<GLubyte>(green), static_cast<GLubyte>(blue));
}

void QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3sv(QOpenGLFunctions_3_2_Compatibility* self, const int16_t* v) {
    self->glSecondaryColor3sv(static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3s(QOpenGLFunctions_3_2_Compatibility* self, int16_t red, int16_t green, int16_t blue) {
    self->glSecondaryColor3s(static_cast<GLshort>(red), static_cast<GLshort>(green), static_cast<GLshort>(blue));
}

void QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3iv(QOpenGLFunctions_3_2_Compatibility* self, const int32_t* v) {
    self->glSecondaryColor3iv(static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3i(QOpenGLFunctions_3_2_Compatibility* self, int32_t red, int32_t green, int32_t blue) {
    self->glSecondaryColor3i(static_cast<GLint>(red), static_cast<GLint>(green), static_cast<GLint>(blue));
}

void QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3fv(QOpenGLFunctions_3_2_Compatibility* self, const float* v) {
    self->glSecondaryColor3fv(static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3f(QOpenGLFunctions_3_2_Compatibility* self, float red, float green, float blue) {
    self->glSecondaryColor3f(static_cast<GLfloat>(red), static_cast<GLfloat>(green), static_cast<GLfloat>(blue));
}

void QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3dv(QOpenGLFunctions_3_2_Compatibility* self, const double* v) {
    self->glSecondaryColor3dv(static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3d(QOpenGLFunctions_3_2_Compatibility* self, double red, double green, double blue) {
    self->glSecondaryColor3d(static_cast<GLdouble>(red), static_cast<GLdouble>(green), static_cast<GLdouble>(blue));
}

void QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3bv(QOpenGLFunctions_3_2_Compatibility* self, const signed char* v) {
    self->glSecondaryColor3bv(static_cast<const GLbyte*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlSecondaryColor3b(QOpenGLFunctions_3_2_Compatibility* self, signed char red, signed char green, signed char blue) {
    self->glSecondaryColor3b(static_cast<GLbyte>(red), static_cast<GLbyte>(green), static_cast<GLbyte>(blue));
}

void QOpenGLFunctions_3_2_Compatibility_GlFogCoordPointer(QOpenGLFunctions_3_2_Compatibility* self, uint32_t typeVal, int32_t stride, const void* pointer) {
    self->glFogCoordPointer(static_cast<GLenum>(typeVal), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLFunctions_3_2_Compatibility_GlFogCoorddv(QOpenGLFunctions_3_2_Compatibility* self, const double* coord) {
    self->glFogCoorddv(static_cast<const GLdouble*>(coord));
}

void QOpenGLFunctions_3_2_Compatibility_GlFogCoordd(QOpenGLFunctions_3_2_Compatibility* self, double coord) {
    self->glFogCoordd(static_cast<GLdouble>(coord));
}

void QOpenGLFunctions_3_2_Compatibility_GlFogCoordfv(QOpenGLFunctions_3_2_Compatibility* self, const float* coord) {
    self->glFogCoordfv(static_cast<const GLfloat*>(coord));
}

void QOpenGLFunctions_3_2_Compatibility_GlFogCoordf(QOpenGLFunctions_3_2_Compatibility* self, float coord) {
    self->glFogCoordf(static_cast<GLfloat>(coord));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4usv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const uint16_t* v) {
    self->glVertexAttrib4usv(static_cast<GLuint>(index), static_cast<const GLushort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4uiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const uint32_t* v) {
    self->glVertexAttrib4uiv(static_cast<GLuint>(index), static_cast<const GLuint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4ubv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const uint8_t* v) {
    self->glVertexAttrib4ubv(static_cast<GLuint>(index), static_cast<const GLubyte*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4sv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const int16_t* v) {
    self->glVertexAttrib4sv(static_cast<GLuint>(index), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4s(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, int16_t x, int16_t y, int16_t z, int16_t w) {
    self->glVertexAttrib4s(static_cast<GLuint>(index), static_cast<GLshort>(x), static_cast<GLshort>(y), static_cast<GLshort>(z), static_cast<GLshort>(w));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4iv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const int32_t* v) {
    self->glVertexAttrib4iv(static_cast<GLuint>(index), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4fv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const float* v) {
    self->glVertexAttrib4fv(static_cast<GLuint>(index), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4f(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, float x, float y, float z, float w) {
    self->glVertexAttrib4f(static_cast<GLuint>(index), static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z), static_cast<GLfloat>(w));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4dv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const double* v) {
    self->glVertexAttrib4dv(static_cast<GLuint>(index), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4d(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, double x, double y, double z, double w) {
    self->glVertexAttrib4d(static_cast<GLuint>(index), static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z), static_cast<GLdouble>(w));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4bv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const signed char* v) {
    self->glVertexAttrib4bv(static_cast<GLuint>(index), static_cast<const GLbyte*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4Nusv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const uint16_t* v) {
    self->glVertexAttrib4Nusv(static_cast<GLuint>(index), static_cast<const GLushort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4Nuiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const uint32_t* v) {
    self->glVertexAttrib4Nuiv(static_cast<GLuint>(index), static_cast<const GLuint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4Nubv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const uint8_t* v) {
    self->glVertexAttrib4Nubv(static_cast<GLuint>(index), static_cast<const GLubyte*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4Nub(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, uint8_t x, uint8_t y, uint8_t z, uint8_t w) {
    self->glVertexAttrib4Nub(static_cast<GLuint>(index), static_cast<GLubyte>(x), static_cast<GLubyte>(y), static_cast<GLubyte>(z), static_cast<GLubyte>(w));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4Nsv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const int16_t* v) {
    self->glVertexAttrib4Nsv(static_cast<GLuint>(index), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4Niv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const int32_t* v) {
    self->glVertexAttrib4Niv(static_cast<GLuint>(index), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib4Nbv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const signed char* v) {
    self->glVertexAttrib4Nbv(static_cast<GLuint>(index), static_cast<const GLbyte*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib3sv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const int16_t* v) {
    self->glVertexAttrib3sv(static_cast<GLuint>(index), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib3s(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, int16_t x, int16_t y, int16_t z) {
    self->glVertexAttrib3s(static_cast<GLuint>(index), static_cast<GLshort>(x), static_cast<GLshort>(y), static_cast<GLshort>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib3fv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const float* v) {
    self->glVertexAttrib3fv(static_cast<GLuint>(index), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib3f(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, float x, float y, float z) {
    self->glVertexAttrib3f(static_cast<GLuint>(index), static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib3dv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const double* v) {
    self->glVertexAttrib3dv(static_cast<GLuint>(index), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib3d(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, double x, double y, double z) {
    self->glVertexAttrib3d(static_cast<GLuint>(index), static_cast<GLdouble>(x), static_cast<GLdouble>(y), static_cast<GLdouble>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib2sv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const int16_t* v) {
    self->glVertexAttrib2sv(static_cast<GLuint>(index), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib2s(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, int16_t x, int16_t y) {
    self->glVertexAttrib2s(static_cast<GLuint>(index), static_cast<GLshort>(x), static_cast<GLshort>(y));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib2fv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const float* v) {
    self->glVertexAttrib2fv(static_cast<GLuint>(index), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib2f(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, float x, float y) {
    self->glVertexAttrib2f(static_cast<GLuint>(index), static_cast<GLfloat>(x), static_cast<GLfloat>(y));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib2dv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const double* v) {
    self->glVertexAttrib2dv(static_cast<GLuint>(index), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib2d(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, double x, double y) {
    self->glVertexAttrib2d(static_cast<GLuint>(index), static_cast<GLdouble>(x), static_cast<GLdouble>(y));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib1sv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const int16_t* v) {
    self->glVertexAttrib1sv(static_cast<GLuint>(index), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib1s(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, int16_t x) {
    self->glVertexAttrib1s(static_cast<GLuint>(index), static_cast<GLshort>(x));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib1fv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const float* v) {
    self->glVertexAttrib1fv(static_cast<GLuint>(index), static_cast<const GLfloat*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib1f(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, float x) {
    self->glVertexAttrib1f(static_cast<GLuint>(index), static_cast<GLfloat>(x));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib1dv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const double* v) {
    self->glVertexAttrib1dv(static_cast<GLuint>(index), static_cast<const GLdouble*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttrib1d(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, double x) {
    self->glVertexAttrib1d(static_cast<GLuint>(index), static_cast<GLdouble>(x));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI4usv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const uint16_t* v) {
    self->glVertexAttribI4usv(static_cast<GLuint>(index), static_cast<const GLushort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI4ubv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const uint8_t* v) {
    self->glVertexAttribI4ubv(static_cast<GLuint>(index), static_cast<const GLubyte*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI4sv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const int16_t* v) {
    self->glVertexAttribI4sv(static_cast<GLuint>(index), static_cast<const GLshort*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI4bv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const signed char* v) {
    self->glVertexAttribI4bv(static_cast<GLuint>(index), static_cast<const GLbyte*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI4uiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const uint32_t* v) {
    self->glVertexAttribI4uiv(static_cast<GLuint>(index), static_cast<const GLuint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI3uiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const uint32_t* v) {
    self->glVertexAttribI3uiv(static_cast<GLuint>(index), static_cast<const GLuint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI2uiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const uint32_t* v) {
    self->glVertexAttribI2uiv(static_cast<GLuint>(index), static_cast<const GLuint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI1uiv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const uint32_t* v) {
    self->glVertexAttribI1uiv(static_cast<GLuint>(index), static_cast<const GLuint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI4iv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const int32_t* v) {
    self->glVertexAttribI4iv(static_cast<GLuint>(index), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI3iv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const int32_t* v) {
    self->glVertexAttribI3iv(static_cast<GLuint>(index), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI2iv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const int32_t* v) {
    self->glVertexAttribI2iv(static_cast<GLuint>(index), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI1iv(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, const int32_t* v) {
    self->glVertexAttribI1iv(static_cast<GLuint>(index), static_cast<const GLint*>(v));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI4ui(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, uint32_t x, uint32_t y, uint32_t z, uint32_t w) {
    self->glVertexAttribI4ui(static_cast<GLuint>(index), static_cast<GLuint>(x), static_cast<GLuint>(y), static_cast<GLuint>(z), static_cast<GLuint>(w));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI3ui(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, uint32_t x, uint32_t y, uint32_t z) {
    self->glVertexAttribI3ui(static_cast<GLuint>(index), static_cast<GLuint>(x), static_cast<GLuint>(y), static_cast<GLuint>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI2ui(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, uint32_t x, uint32_t y) {
    self->glVertexAttribI2ui(static_cast<GLuint>(index), static_cast<GLuint>(x), static_cast<GLuint>(y));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI1ui(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, uint32_t x) {
    self->glVertexAttribI1ui(static_cast<GLuint>(index), static_cast<GLuint>(x));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI4i(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, int32_t x, int32_t y, int32_t z, int32_t w) {
    self->glVertexAttribI4i(static_cast<GLuint>(index), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLint>(z), static_cast<GLint>(w));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI3i(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, int32_t x, int32_t y, int32_t z) {
    self->glVertexAttribI3i(static_cast<GLuint>(index), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLint>(z));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI2i(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, int32_t x, int32_t y) {
    self->glVertexAttribI2i(static_cast<GLuint>(index), static_cast<GLint>(x), static_cast<GLint>(y));
}

void QOpenGLFunctions_3_2_Compatibility_GlVertexAttribI1i(QOpenGLFunctions_3_2_Compatibility* self, uint32_t index, int32_t x) {
    self->glVertexAttribI1i(static_cast<GLuint>(index), static_cast<GLint>(x));
}

// Base class handler implementation
bool QOpenGLFunctions_3_2_Compatibility_QBaseInitializeOpenGLFunctions(QOpenGLFunctions_3_2_Compatibility* self) {
    auto* vqopenglfunctions_3_2_compatibility = dynamic_cast<VirtualQOpenGLFunctions_3_2_Compatibility*>(self);
    if (vqopenglfunctions_3_2_compatibility && vqopenglfunctions_3_2_compatibility->isVirtualQOpenGLFunctions_3_2_Compatibility) {
        vqopenglfunctions_3_2_compatibility->setQOpenGLFunctions_3_2_Compatibility_InitializeOpenGLFunctions_IsBase(true);
        return vqopenglfunctions_3_2_compatibility->initializeOpenGLFunctions();
    } else {
        return self->QOpenGLFunctions_3_2_Compatibility::initializeOpenGLFunctions();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_3_2_Compatibility_OnInitializeOpenGLFunctions(QOpenGLFunctions_3_2_Compatibility* self, intptr_t slot) {
    auto* vqopenglfunctions_3_2_compatibility = dynamic_cast<VirtualQOpenGLFunctions_3_2_Compatibility*>(self);
    if (vqopenglfunctions_3_2_compatibility && vqopenglfunctions_3_2_compatibility->isVirtualQOpenGLFunctions_3_2_Compatibility) {
        vqopenglfunctions_3_2_compatibility->setQOpenGLFunctions_3_2_Compatibility_InitializeOpenGLFunctions_Callback(reinterpret_cast<VirtualQOpenGLFunctions_3_2_Compatibility::QOpenGLFunctions_3_2_Compatibility_InitializeOpenGLFunctions_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLFunctions_3_2_Compatibility_IsInitialized(const QOpenGLFunctions_3_2_Compatibility* self) {
    auto* vqopenglfunctions_3_2_compatibility = const_cast<VirtualQOpenGLFunctions_3_2_Compatibility*>(dynamic_cast<const VirtualQOpenGLFunctions_3_2_Compatibility*>(self));
    if (vqopenglfunctions_3_2_compatibility && vqopenglfunctions_3_2_compatibility->isVirtualQOpenGLFunctions_3_2_Compatibility) {
        return vqopenglfunctions_3_2_compatibility->isInitialized();
    } else {
        return ((VirtualQOpenGLFunctions_3_2_Compatibility*)self)->isInitialized();
    }
}

// Base class handler implementation
bool QOpenGLFunctions_3_2_Compatibility_QBaseIsInitialized(const QOpenGLFunctions_3_2_Compatibility* self) {
    auto* vqopenglfunctions_3_2_compatibility = const_cast<VirtualQOpenGLFunctions_3_2_Compatibility*>(dynamic_cast<const VirtualQOpenGLFunctions_3_2_Compatibility*>(self));
    if (vqopenglfunctions_3_2_compatibility && vqopenglfunctions_3_2_compatibility->isVirtualQOpenGLFunctions_3_2_Compatibility) {
        vqopenglfunctions_3_2_compatibility->setQOpenGLFunctions_3_2_Compatibility_IsInitialized_IsBase(true);
        return vqopenglfunctions_3_2_compatibility->isInitialized();
    } else {
        return ((VirtualQOpenGLFunctions_3_2_Compatibility*)self)->isInitialized();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_3_2_Compatibility_OnIsInitialized(const QOpenGLFunctions_3_2_Compatibility* self, intptr_t slot) {
    auto* vqopenglfunctions_3_2_compatibility = const_cast<VirtualQOpenGLFunctions_3_2_Compatibility*>(dynamic_cast<const VirtualQOpenGLFunctions_3_2_Compatibility*>(self));
    if (vqopenglfunctions_3_2_compatibility && vqopenglfunctions_3_2_compatibility->isVirtualQOpenGLFunctions_3_2_Compatibility) {
        vqopenglfunctions_3_2_compatibility->setQOpenGLFunctions_3_2_Compatibility_IsInitialized_Callback(reinterpret_cast<VirtualQOpenGLFunctions_3_2_Compatibility::QOpenGLFunctions_3_2_Compatibility_IsInitialized_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLFunctions_3_2_Compatibility_SetOwningContext(QOpenGLFunctions_3_2_Compatibility* self, const QOpenGLContext* context) {
    auto* vqopenglfunctions_3_2_compatibility = dynamic_cast<VirtualQOpenGLFunctions_3_2_Compatibility*>(self);
    if (vqopenglfunctions_3_2_compatibility && vqopenglfunctions_3_2_compatibility->isVirtualQOpenGLFunctions_3_2_Compatibility) {
        vqopenglfunctions_3_2_compatibility->setOwningContext(context);
    } else {
        ((VirtualQOpenGLFunctions_3_2_Compatibility*)self)->setOwningContext(context);
    }
}

// Base class handler implementation
void QOpenGLFunctions_3_2_Compatibility_QBaseSetOwningContext(QOpenGLFunctions_3_2_Compatibility* self, const QOpenGLContext* context) {
    auto* vqopenglfunctions_3_2_compatibility = dynamic_cast<VirtualQOpenGLFunctions_3_2_Compatibility*>(self);
    if (vqopenglfunctions_3_2_compatibility && vqopenglfunctions_3_2_compatibility->isVirtualQOpenGLFunctions_3_2_Compatibility) {
        vqopenglfunctions_3_2_compatibility->setQOpenGLFunctions_3_2_Compatibility_SetOwningContext_IsBase(true);
        vqopenglfunctions_3_2_compatibility->setOwningContext(context);
    } else {
        ((VirtualQOpenGLFunctions_3_2_Compatibility*)self)->setOwningContext(context);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_3_2_Compatibility_OnSetOwningContext(QOpenGLFunctions_3_2_Compatibility* self, intptr_t slot) {
    auto* vqopenglfunctions_3_2_compatibility = dynamic_cast<VirtualQOpenGLFunctions_3_2_Compatibility*>(self);
    if (vqopenglfunctions_3_2_compatibility && vqopenglfunctions_3_2_compatibility->isVirtualQOpenGLFunctions_3_2_Compatibility) {
        vqopenglfunctions_3_2_compatibility->setQOpenGLFunctions_3_2_Compatibility_SetOwningContext_Callback(reinterpret_cast<VirtualQOpenGLFunctions_3_2_Compatibility::QOpenGLFunctions_3_2_Compatibility_SetOwningContext_Callback>(slot));
    }
}

// Derived class handler implementation
QOpenGLContext* QOpenGLFunctions_3_2_Compatibility_OwningContext(const QOpenGLFunctions_3_2_Compatibility* self) {
    auto* vqopenglfunctions_3_2_compatibility = const_cast<VirtualQOpenGLFunctions_3_2_Compatibility*>(dynamic_cast<const VirtualQOpenGLFunctions_3_2_Compatibility*>(self));
    if (vqopenglfunctions_3_2_compatibility && vqopenglfunctions_3_2_compatibility->isVirtualQOpenGLFunctions_3_2_Compatibility) {
        return vqopenglfunctions_3_2_compatibility->owningContext();
    } else {
        return ((VirtualQOpenGLFunctions_3_2_Compatibility*)self)->owningContext();
    }
}

// Base class handler implementation
QOpenGLContext* QOpenGLFunctions_3_2_Compatibility_QBaseOwningContext(const QOpenGLFunctions_3_2_Compatibility* self) {
    auto* vqopenglfunctions_3_2_compatibility = const_cast<VirtualQOpenGLFunctions_3_2_Compatibility*>(dynamic_cast<const VirtualQOpenGLFunctions_3_2_Compatibility*>(self));
    if (vqopenglfunctions_3_2_compatibility && vqopenglfunctions_3_2_compatibility->isVirtualQOpenGLFunctions_3_2_Compatibility) {
        vqopenglfunctions_3_2_compatibility->setQOpenGLFunctions_3_2_Compatibility_OwningContext_IsBase(true);
        return vqopenglfunctions_3_2_compatibility->owningContext();
    } else {
        return ((VirtualQOpenGLFunctions_3_2_Compatibility*)self)->owningContext();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLFunctions_3_2_Compatibility_OnOwningContext(const QOpenGLFunctions_3_2_Compatibility* self, intptr_t slot) {
    auto* vqopenglfunctions_3_2_compatibility = const_cast<VirtualQOpenGLFunctions_3_2_Compatibility*>(dynamic_cast<const VirtualQOpenGLFunctions_3_2_Compatibility*>(self));
    if (vqopenglfunctions_3_2_compatibility && vqopenglfunctions_3_2_compatibility->isVirtualQOpenGLFunctions_3_2_Compatibility) {
        vqopenglfunctions_3_2_compatibility->setQOpenGLFunctions_3_2_Compatibility_OwningContext_Callback(reinterpret_cast<VirtualQOpenGLFunctions_3_2_Compatibility::QOpenGLFunctions_3_2_Compatibility_OwningContext_Callback>(slot));
    }
}

void QOpenGLFunctions_3_2_Compatibility_Delete(QOpenGLFunctions_3_2_Compatibility* self) {
    delete self;
}
