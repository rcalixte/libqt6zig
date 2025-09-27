#include <QOpenGLContext>
#include <QOpenGLExtraFunctions>
#include <QOpenGLFunctions>
#include <qopenglextrafunctions.h>
#include "libqopenglextrafunctions.h"
#include "libqopenglextrafunctions.hxx"

QOpenGLExtraFunctions* QOpenGLExtraFunctions_new() {
    return new QOpenGLExtraFunctions();
}

QOpenGLExtraFunctions* QOpenGLExtraFunctions_new2(QOpenGLContext* context) {
    return new QOpenGLExtraFunctions(context);
}

QOpenGLExtraFunctions* QOpenGLExtraFunctions_new3(const QOpenGLExtraFunctions* param1) {
    return new QOpenGLExtraFunctions(*param1);
}

void QOpenGLExtraFunctions_GlReadBuffer(QOpenGLExtraFunctions* self, uint32_t mode) {
    self->glReadBuffer(static_cast<GLenum>(mode));
}

void QOpenGLExtraFunctions_GlDrawRangeElements(QOpenGLExtraFunctions* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices) {
    self->glDrawRangeElements(static_cast<GLenum>(mode), static_cast<GLuint>(start), static_cast<GLuint>(end), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices);
}

void QOpenGLExtraFunctions_GlTexImage3D(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLint>(border), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLExtraFunctions_GlTexSubImage3D(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t typeVal, const void* pixels) {
    self->glTexSubImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), pixels);
}

void QOpenGLExtraFunctions_GlCopyTexSubImage3D(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    self->glCopyTexSubImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLExtraFunctions_GlCompressedTexImage3D(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, const void* data) {
    self->glCompressedTexImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLint>(border), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLExtraFunctions_GlCompressedTexSubImage3D(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, const void* data) {
    self->glCompressedTexSubImage3D(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLint>(xoffset), static_cast<GLint>(yoffset), static_cast<GLint>(zoffset), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLenum>(format), static_cast<GLsizei>(imageSize), data);
}

void QOpenGLExtraFunctions_GlGenQueries(QOpenGLExtraFunctions* self, int32_t n, uint32_t* ids) {
    self->glGenQueries(static_cast<GLsizei>(n), static_cast<GLuint*>(ids));
}

void QOpenGLExtraFunctions_GlDeleteQueries(QOpenGLExtraFunctions* self, int32_t n, const uint32_t* ids) {
    self->glDeleteQueries(static_cast<GLsizei>(n), static_cast<const GLuint*>(ids));
}

unsigned char QOpenGLExtraFunctions_GlIsQuery(QOpenGLExtraFunctions* self, uint32_t id) {
    return self->glIsQuery(static_cast<GLuint>(id));
}

void QOpenGLExtraFunctions_GlBeginQuery(QOpenGLExtraFunctions* self, uint32_t target, uint32_t id) {
    self->glBeginQuery(static_cast<GLenum>(target), static_cast<GLuint>(id));
}

void QOpenGLExtraFunctions_GlEndQuery(QOpenGLExtraFunctions* self, uint32_t target) {
    self->glEndQuery(static_cast<GLenum>(target));
}

void QOpenGLExtraFunctions_GlGetQueryiv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetQueryiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLExtraFunctions_GlGetQueryObjectuiv(QOpenGLExtraFunctions* self, uint32_t id, uint32_t pname, uint32_t* params) {
    self->glGetQueryObjectuiv(static_cast<GLuint>(id), static_cast<GLenum>(pname), static_cast<GLuint*>(params));
}

unsigned char QOpenGLExtraFunctions_GlUnmapBuffer(QOpenGLExtraFunctions* self, uint32_t target) {
    return self->glUnmapBuffer(static_cast<GLenum>(target));
}

void QOpenGLExtraFunctions_GlGetBufferPointerv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, void** params) {
    self->glGetBufferPointerv(static_cast<GLenum>(target), static_cast<GLenum>(pname), params);
}

void QOpenGLExtraFunctions_GlUniformMatrix2x3fv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix2x3fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlUniformMatrix3x2fv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix3x2fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlUniformMatrix2x4fv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix2x4fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlUniformMatrix4x2fv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix4x2fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlUniformMatrix3x4fv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix3x4fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlUniformMatrix4x3fv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glUniformMatrix4x3fv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlBlitFramebuffer(QOpenGLExtraFunctions* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter) {
    self->glBlitFramebuffer(static_cast<GLint>(srcX0), static_cast<GLint>(srcY0), static_cast<GLint>(srcX1), static_cast<GLint>(srcY1), static_cast<GLint>(dstX0), static_cast<GLint>(dstY0), static_cast<GLint>(dstX1), static_cast<GLint>(dstY1), static_cast<GLbitfield>(mask), static_cast<GLenum>(filter));
}

void QOpenGLExtraFunctions_GlRenderbufferStorageMultisample(QOpenGLExtraFunctions* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height) {
    self->glRenderbufferStorageMultisample(static_cast<GLenum>(target), static_cast<GLsizei>(samples), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLExtraFunctions_GlFramebufferTextureLayer(QOpenGLExtraFunctions* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer) {
    self->glFramebufferTextureLayer(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLint>(layer));
}

void* QOpenGLExtraFunctions_GlMapBufferRange(QOpenGLExtraFunctions* self, uint32_t target, int64_t offset, int64_t length, uint32_t access) {
    return self->glMapBufferRange(static_cast<GLenum>(target), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(length), static_cast<GLbitfield>(access));
}

void QOpenGLExtraFunctions_GlFlushMappedBufferRange(QOpenGLExtraFunctions* self, uint32_t target, int64_t offset, int64_t length) {
    self->glFlushMappedBufferRange(static_cast<GLenum>(target), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(length));
}

void QOpenGLExtraFunctions_GlBindVertexArray(QOpenGLExtraFunctions* self, uint32_t array) {
    self->glBindVertexArray(static_cast<GLuint>(array));
}

void QOpenGLExtraFunctions_GlDeleteVertexArrays(QOpenGLExtraFunctions* self, int32_t n, const uint32_t* arrays) {
    self->glDeleteVertexArrays(static_cast<GLsizei>(n), static_cast<const GLuint*>(arrays));
}

void QOpenGLExtraFunctions_GlGenVertexArrays(QOpenGLExtraFunctions* self, int32_t n, uint32_t* arrays) {
    self->glGenVertexArrays(static_cast<GLsizei>(n), static_cast<GLuint*>(arrays));
}

unsigned char QOpenGLExtraFunctions_GlIsVertexArray(QOpenGLExtraFunctions* self, uint32_t array) {
    return self->glIsVertexArray(static_cast<GLuint>(array));
}

void QOpenGLExtraFunctions_GlGetIntegeriV(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index, int32_t* data) {
    self->glGetIntegeri_v(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLint*>(data));
}

void QOpenGLExtraFunctions_GlBeginTransformFeedback(QOpenGLExtraFunctions* self, uint32_t primitiveMode) {
    self->glBeginTransformFeedback(static_cast<GLenum>(primitiveMode));
}

void QOpenGLExtraFunctions_GlEndTransformFeedback(QOpenGLExtraFunctions* self) {
    self->glEndTransformFeedback();
}

void QOpenGLExtraFunctions_GlBindBufferRange(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index, uint32_t buffer, int64_t offset, int64_t size) {
    self->glBindBufferRange(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLuint>(buffer), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(size));
}

void QOpenGLExtraFunctions_GlBindBufferBase(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index, uint32_t buffer) {
    self->glBindBufferBase(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLuint>(buffer));
}

void QOpenGLExtraFunctions_GlVertexAttribIPointer(QOpenGLExtraFunctions* self, uint32_t index, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer) {
    self->glVertexAttribIPointer(static_cast<GLuint>(index), static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLsizei>(stride), pointer);
}

void QOpenGLExtraFunctions_GlGetVertexAttribIiv(QOpenGLExtraFunctions* self, uint32_t index, uint32_t pname, int32_t* params) {
    self->glGetVertexAttribIiv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLExtraFunctions_GlGetVertexAttribIuiv(QOpenGLExtraFunctions* self, uint32_t index, uint32_t pname, uint32_t* params) {
    self->glGetVertexAttribIuiv(static_cast<GLuint>(index), static_cast<GLenum>(pname), static_cast<GLuint*>(params));
}

void QOpenGLExtraFunctions_GlVertexAttribI4i(QOpenGLExtraFunctions* self, uint32_t index, int32_t x, int32_t y, int32_t z, int32_t w) {
    self->glVertexAttribI4i(static_cast<GLuint>(index), static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLint>(z), static_cast<GLint>(w));
}

void QOpenGLExtraFunctions_GlVertexAttribI4ui(QOpenGLExtraFunctions* self, uint32_t index, uint32_t x, uint32_t y, uint32_t z, uint32_t w) {
    self->glVertexAttribI4ui(static_cast<GLuint>(index), static_cast<GLuint>(x), static_cast<GLuint>(y), static_cast<GLuint>(z), static_cast<GLuint>(w));
}

void QOpenGLExtraFunctions_GlVertexAttribI4iv(QOpenGLExtraFunctions* self, uint32_t index, const int32_t* v) {
    self->glVertexAttribI4iv(static_cast<GLuint>(index), static_cast<const GLint*>(v));
}

void QOpenGLExtraFunctions_GlVertexAttribI4uiv(QOpenGLExtraFunctions* self, uint32_t index, const uint32_t* v) {
    self->glVertexAttribI4uiv(static_cast<GLuint>(index), static_cast<const GLuint*>(v));
}

void QOpenGLExtraFunctions_GlGetUniformuiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, uint32_t* params) {
    self->glGetUniformuiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLuint*>(params));
}

int32_t QOpenGLExtraFunctions_GlGetFragDataLocation(QOpenGLExtraFunctions* self, uint32_t program, const GLchar* name) {
    return self->glGetFragDataLocation(static_cast<GLuint>(program), static_cast<const GLchar*>(name));
}

void QOpenGLExtraFunctions_GlUniform1ui(QOpenGLExtraFunctions* self, int32_t location, uint32_t v0) {
    self->glUniform1ui(static_cast<GLint>(location), static_cast<GLuint>(v0));
}

void QOpenGLExtraFunctions_GlUniform2ui(QOpenGLExtraFunctions* self, int32_t location, uint32_t v0, uint32_t v1) {
    self->glUniform2ui(static_cast<GLint>(location), static_cast<GLuint>(v0), static_cast<GLuint>(v1));
}

void QOpenGLExtraFunctions_GlUniform3ui(QOpenGLExtraFunctions* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2) {
    self->glUniform3ui(static_cast<GLint>(location), static_cast<GLuint>(v0), static_cast<GLuint>(v1), static_cast<GLuint>(v2));
}

void QOpenGLExtraFunctions_GlUniform4ui(QOpenGLExtraFunctions* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3) {
    self->glUniform4ui(static_cast<GLint>(location), static_cast<GLuint>(v0), static_cast<GLuint>(v1), static_cast<GLuint>(v2), static_cast<GLuint>(v3));
}

void QOpenGLExtraFunctions_GlUniform1uiv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, const uint32_t* value) {
    self->glUniform1uiv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLExtraFunctions_GlUniform2uiv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, const uint32_t* value) {
    self->glUniform2uiv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLExtraFunctions_GlUniform3uiv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, const uint32_t* value) {
    self->glUniform3uiv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLExtraFunctions_GlUniform4uiv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, const uint32_t* value) {
    self->glUniform4uiv(static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLExtraFunctions_GlClearBufferiv(QOpenGLExtraFunctions* self, uint32_t buffer, int32_t drawbuffer, const int32_t* value) {
    self->glClearBufferiv(static_cast<GLenum>(buffer), static_cast<GLint>(drawbuffer), static_cast<const GLint*>(value));
}

void QOpenGLExtraFunctions_GlClearBufferuiv(QOpenGLExtraFunctions* self, uint32_t buffer, int32_t drawbuffer, const uint32_t* value) {
    self->glClearBufferuiv(static_cast<GLenum>(buffer), static_cast<GLint>(drawbuffer), static_cast<const GLuint*>(value));
}

void QOpenGLExtraFunctions_GlClearBufferfv(QOpenGLExtraFunctions* self, uint32_t buffer, int32_t drawbuffer, const float* value) {
    self->glClearBufferfv(static_cast<GLenum>(buffer), static_cast<GLint>(drawbuffer), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlClearBufferfi(QOpenGLExtraFunctions* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil) {
    self->glClearBufferfi(static_cast<GLenum>(buffer), static_cast<GLint>(drawbuffer), static_cast<GLfloat>(depth), static_cast<GLint>(stencil));
}

const uint8_t* QOpenGLExtraFunctions_GlGetStringi(QOpenGLExtraFunctions* self, uint32_t name, uint32_t index) {
    return (const uint8_t*)self->glGetStringi(static_cast<GLenum>(name), static_cast<GLuint>(index));
}

void QOpenGLExtraFunctions_GlCopyBufferSubData(QOpenGLExtraFunctions* self, uint32_t readTarget, uint32_t writeTarget, int64_t readOffset, int64_t writeOffset, int64_t size) {
    self->glCopyBufferSubData(static_cast<GLenum>(readTarget), static_cast<GLenum>(writeTarget), static_cast<GLintptr>(readOffset), static_cast<GLintptr>(writeOffset), static_cast<GLsizeiptr>(size));
}

void QOpenGLExtraFunctions_GlGetActiveUniformsiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t uniformCount, const uint32_t* uniformIndices, uint32_t pname, int32_t* params) {
    self->glGetActiveUniformsiv(static_cast<GLuint>(program), static_cast<GLsizei>(uniformCount), static_cast<const GLuint*>(uniformIndices), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

uint32_t QOpenGLExtraFunctions_GlGetUniformBlockIndex(QOpenGLExtraFunctions* self, uint32_t program, const GLchar* uniformBlockName) {
    return self->glGetUniformBlockIndex(static_cast<GLuint>(program), static_cast<const GLchar*>(uniformBlockName));
}

void QOpenGLExtraFunctions_GlGetActiveUniformBlockiv(QOpenGLExtraFunctions* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params) {
    self->glGetActiveUniformBlockiv(static_cast<GLuint>(program), static_cast<GLuint>(uniformBlockIndex), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLExtraFunctions_GlGetActiveUniformBlockName(QOpenGLExtraFunctions* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, GLchar* uniformBlockName) {
    self->glGetActiveUniformBlockName(static_cast<GLuint>(program), static_cast<GLuint>(uniformBlockIndex), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(uniformBlockName));
}

void QOpenGLExtraFunctions_GlUniformBlockBinding(QOpenGLExtraFunctions* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding) {
    self->glUniformBlockBinding(static_cast<GLuint>(program), static_cast<GLuint>(uniformBlockIndex), static_cast<GLuint>(uniformBlockBinding));
}

void QOpenGLExtraFunctions_GlDrawArraysInstanced(QOpenGLExtraFunctions* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount) {
    self->glDrawArraysInstanced(static_cast<GLenum>(mode), static_cast<GLint>(first), static_cast<GLsizei>(count), static_cast<GLsizei>(instancecount));
}

void QOpenGLExtraFunctions_GlDrawElementsInstanced(QOpenGLExtraFunctions* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount) {
    self->glDrawElementsInstanced(static_cast<GLenum>(mode), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLsizei>(instancecount));
}

void QOpenGLExtraFunctions_GlGetInteger64v(QOpenGLExtraFunctions* self, uint32_t pname, int64_t* data) {
    self->glGetInteger64v(static_cast<GLenum>(pname), static_cast<GLint64*>(data));
}

void QOpenGLExtraFunctions_GlGetInteger64iV(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index, int64_t* data) {
    self->glGetInteger64i_v(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLint64*>(data));
}

void QOpenGLExtraFunctions_GlGetBufferParameteri64v(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, int64_t* params) {
    self->glGetBufferParameteri64v(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint64*>(params));
}

void QOpenGLExtraFunctions_GlGenSamplers(QOpenGLExtraFunctions* self, int32_t count, uint32_t* samplers) {
    self->glGenSamplers(static_cast<GLsizei>(count), static_cast<GLuint*>(samplers));
}

void QOpenGLExtraFunctions_GlDeleteSamplers(QOpenGLExtraFunctions* self, int32_t count, const uint32_t* samplers) {
    self->glDeleteSamplers(static_cast<GLsizei>(count), static_cast<const GLuint*>(samplers));
}

unsigned char QOpenGLExtraFunctions_GlIsSampler(QOpenGLExtraFunctions* self, uint32_t sampler) {
    return self->glIsSampler(static_cast<GLuint>(sampler));
}

void QOpenGLExtraFunctions_GlBindSampler(QOpenGLExtraFunctions* self, uint32_t unit, uint32_t sampler) {
    self->glBindSampler(static_cast<GLuint>(unit), static_cast<GLuint>(sampler));
}

void QOpenGLExtraFunctions_GlSamplerParameteri(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, int32_t param) {
    self->glSamplerParameteri(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLExtraFunctions_GlSamplerParameteriv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, const int32_t* param) {
    self->glSamplerParameteriv(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<const GLint*>(param));
}

void QOpenGLExtraFunctions_GlSamplerParameterf(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, float param) {
    self->glSamplerParameterf(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<GLfloat>(param));
}

void QOpenGLExtraFunctions_GlSamplerParameterfv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, const float* param) {
    self->glSamplerParameterfv(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<const GLfloat*>(param));
}

void QOpenGLExtraFunctions_GlGetSamplerParameteriv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, int32_t* params) {
    self->glGetSamplerParameteriv(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLExtraFunctions_GlGetSamplerParameterfv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, float* params) {
    self->glGetSamplerParameterfv(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLExtraFunctions_GlVertexAttribDivisor(QOpenGLExtraFunctions* self, uint32_t index, uint32_t divisor) {
    self->glVertexAttribDivisor(static_cast<GLuint>(index), static_cast<GLuint>(divisor));
}

void QOpenGLExtraFunctions_GlBindTransformFeedback(QOpenGLExtraFunctions* self, uint32_t target, uint32_t id) {
    self->glBindTransformFeedback(static_cast<GLenum>(target), static_cast<GLuint>(id));
}

void QOpenGLExtraFunctions_GlDeleteTransformFeedbacks(QOpenGLExtraFunctions* self, int32_t n, const uint32_t* ids) {
    self->glDeleteTransformFeedbacks(static_cast<GLsizei>(n), static_cast<const GLuint*>(ids));
}

void QOpenGLExtraFunctions_GlGenTransformFeedbacks(QOpenGLExtraFunctions* self, int32_t n, uint32_t* ids) {
    self->glGenTransformFeedbacks(static_cast<GLsizei>(n), static_cast<GLuint*>(ids));
}

unsigned char QOpenGLExtraFunctions_GlIsTransformFeedback(QOpenGLExtraFunctions* self, uint32_t id) {
    return self->glIsTransformFeedback(static_cast<GLuint>(id));
}

void QOpenGLExtraFunctions_GlPauseTransformFeedback(QOpenGLExtraFunctions* self) {
    self->glPauseTransformFeedback();
}

void QOpenGLExtraFunctions_GlResumeTransformFeedback(QOpenGLExtraFunctions* self) {
    self->glResumeTransformFeedback();
}

void QOpenGLExtraFunctions_GlProgramBinary(QOpenGLExtraFunctions* self, uint32_t program, uint32_t binaryFormat, const void* binary, int32_t length) {
    self->glProgramBinary(static_cast<GLuint>(program), static_cast<GLenum>(binaryFormat), binary, static_cast<GLsizei>(length));
}

void QOpenGLExtraFunctions_GlProgramParameteri(QOpenGLExtraFunctions* self, uint32_t program, uint32_t pname, int32_t value) {
    self->glProgramParameteri(static_cast<GLuint>(program), static_cast<GLenum>(pname), static_cast<GLint>(value));
}

void QOpenGLExtraFunctions_GlTexStorage2D(QOpenGLExtraFunctions* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height) {
    self->glTexStorage2D(static_cast<GLenum>(target), static_cast<GLsizei>(levels), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void QOpenGLExtraFunctions_GlTexStorage3D(QOpenGLExtraFunctions* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height, int32_t depth) {
    self->glTexStorage3D(static_cast<GLenum>(target), static_cast<GLsizei>(levels), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth));
}

void QOpenGLExtraFunctions_GlGetInternalformativ(QOpenGLExtraFunctions* self, uint32_t target, uint32_t internalformat, uint32_t pname, int32_t bufSize, int32_t* params) {
    self->glGetInternalformativ(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLenum>(pname), static_cast<GLsizei>(bufSize), static_cast<GLint*>(params));
}

void QOpenGLExtraFunctions_GlDispatchCompute(QOpenGLExtraFunctions* self, uint32_t num_groups_x, uint32_t num_groups_y, uint32_t num_groups_z) {
    self->glDispatchCompute(static_cast<GLuint>(num_groups_x), static_cast<GLuint>(num_groups_y), static_cast<GLuint>(num_groups_z));
}

void QOpenGLExtraFunctions_GlDispatchComputeIndirect(QOpenGLExtraFunctions* self, int64_t indirect) {
    self->glDispatchComputeIndirect(static_cast<GLintptr>(indirect));
}

void QOpenGLExtraFunctions_GlDrawArraysIndirect(QOpenGLExtraFunctions* self, uint32_t mode, const void* indirect) {
    self->glDrawArraysIndirect(static_cast<GLenum>(mode), indirect);
}

void QOpenGLExtraFunctions_GlDrawElementsIndirect(QOpenGLExtraFunctions* self, uint32_t mode, uint32_t typeVal, const void* indirect) {
    self->glDrawElementsIndirect(static_cast<GLenum>(mode), static_cast<GLenum>(typeVal), indirect);
}

void QOpenGLExtraFunctions_GlFramebufferParameteri(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, int32_t param) {
    self->glFramebufferParameteri(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint>(param));
}

void QOpenGLExtraFunctions_GlGetFramebufferParameteriv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetFramebufferParameteriv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLExtraFunctions_GlGetProgramInterfaceiv(QOpenGLExtraFunctions* self, uint32_t program, uint32_t programInterface, uint32_t pname, int32_t* params) {
    self->glGetProgramInterfaceiv(static_cast<GLuint>(program), static_cast<GLenum>(programInterface), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

uint32_t QOpenGLExtraFunctions_GlGetProgramResourceIndex(QOpenGLExtraFunctions* self, uint32_t program, uint32_t programInterface, const GLchar* name) {
    return self->glGetProgramResourceIndex(static_cast<GLuint>(program), static_cast<GLenum>(programInterface), static_cast<const GLchar*>(name));
}

void QOpenGLExtraFunctions_GlGetProgramResourceName(QOpenGLExtraFunctions* self, uint32_t program, uint32_t programInterface, uint32_t index, int32_t bufSize, int32_t* length, GLchar* name) {
    self->glGetProgramResourceName(static_cast<GLuint>(program), static_cast<GLenum>(programInterface), static_cast<GLuint>(index), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(name));
}

int32_t QOpenGLExtraFunctions_GlGetProgramResourceLocation(QOpenGLExtraFunctions* self, uint32_t program, uint32_t programInterface, const GLchar* name) {
    return self->glGetProgramResourceLocation(static_cast<GLuint>(program), static_cast<GLenum>(programInterface), static_cast<const GLchar*>(name));
}

void QOpenGLExtraFunctions_GlUseProgramStages(QOpenGLExtraFunctions* self, uint32_t pipeline, uint32_t stages, uint32_t program) {
    self->glUseProgramStages(static_cast<GLuint>(pipeline), static_cast<GLbitfield>(stages), static_cast<GLuint>(program));
}

void QOpenGLExtraFunctions_GlActiveShaderProgram(QOpenGLExtraFunctions* self, uint32_t pipeline, uint32_t program) {
    self->glActiveShaderProgram(static_cast<GLuint>(pipeline), static_cast<GLuint>(program));
}

void QOpenGLExtraFunctions_GlBindProgramPipeline(QOpenGLExtraFunctions* self, uint32_t pipeline) {
    self->glBindProgramPipeline(static_cast<GLuint>(pipeline));
}

void QOpenGLExtraFunctions_GlDeleteProgramPipelines(QOpenGLExtraFunctions* self, int32_t n, const uint32_t* pipelines) {
    self->glDeleteProgramPipelines(static_cast<GLsizei>(n), static_cast<const GLuint*>(pipelines));
}

void QOpenGLExtraFunctions_GlGenProgramPipelines(QOpenGLExtraFunctions* self, int32_t n, uint32_t* pipelines) {
    self->glGenProgramPipelines(static_cast<GLsizei>(n), static_cast<GLuint*>(pipelines));
}

unsigned char QOpenGLExtraFunctions_GlIsProgramPipeline(QOpenGLExtraFunctions* self, uint32_t pipeline) {
    return self->glIsProgramPipeline(static_cast<GLuint>(pipeline));
}

void QOpenGLExtraFunctions_GlGetProgramPipelineiv(QOpenGLExtraFunctions* self, uint32_t pipeline, uint32_t pname, int32_t* params) {
    self->glGetProgramPipelineiv(static_cast<GLuint>(pipeline), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLExtraFunctions_GlProgramUniform1i(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t v0) {
    self->glProgramUniform1i(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLint>(v0));
}

void QOpenGLExtraFunctions_GlProgramUniform2i(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t v0, int32_t v1) {
    self->glProgramUniform2i(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLint>(v0), static_cast<GLint>(v1));
}

void QOpenGLExtraFunctions_GlProgramUniform3i(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2) {
    self->glProgramUniform3i(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2));
}

void QOpenGLExtraFunctions_GlProgramUniform4i(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3) {
    self->glProgramUniform4i(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLint>(v0), static_cast<GLint>(v1), static_cast<GLint>(v2), static_cast<GLint>(v3));
}

void QOpenGLExtraFunctions_GlProgramUniform1ui(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, uint32_t v0) {
    self->glProgramUniform1ui(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLuint>(v0));
}

void QOpenGLExtraFunctions_GlProgramUniform2ui(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1) {
    self->glProgramUniform2ui(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLuint>(v0), static_cast<GLuint>(v1));
}

void QOpenGLExtraFunctions_GlProgramUniform3ui(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2) {
    self->glProgramUniform3ui(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLuint>(v0), static_cast<GLuint>(v1), static_cast<GLuint>(v2));
}

void QOpenGLExtraFunctions_GlProgramUniform4ui(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3) {
    self->glProgramUniform4ui(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLuint>(v0), static_cast<GLuint>(v1), static_cast<GLuint>(v2), static_cast<GLuint>(v3));
}

void QOpenGLExtraFunctions_GlProgramUniform1f(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, float v0) {
    self->glProgramUniform1f(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLfloat>(v0));
}

void QOpenGLExtraFunctions_GlProgramUniform2f(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, float v0, float v1) {
    self->glProgramUniform2f(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLfloat>(v0), static_cast<GLfloat>(v1));
}

void QOpenGLExtraFunctions_GlProgramUniform3f(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, float v0, float v1, float v2) {
    self->glProgramUniform3f(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLfloat>(v0), static_cast<GLfloat>(v1), static_cast<GLfloat>(v2));
}

void QOpenGLExtraFunctions_GlProgramUniform4f(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, float v0, float v1, float v2, float v3) {
    self->glProgramUniform4f(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLfloat>(v0), static_cast<GLfloat>(v1), static_cast<GLfloat>(v2), static_cast<GLfloat>(v3));
}

void QOpenGLExtraFunctions_GlProgramUniform1iv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
    self->glProgramUniform1iv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniform2iv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
    self->glProgramUniform2iv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniform3iv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
    self->glProgramUniform3iv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniform4iv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const int32_t* value) {
    self->glProgramUniform4iv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLint*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniform1uiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
    self->glProgramUniform1uiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniform2uiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
    self->glProgramUniform2uiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniform3uiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
    self->glProgramUniform3uiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniform4uiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value) {
    self->glProgramUniform4uiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLuint*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniform1fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const float* value) {
    self->glProgramUniform1fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniform2fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const float* value) {
    self->glProgramUniform2fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniform3fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const float* value) {
    self->glProgramUniform3fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniform4fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const float* value) {
    self->glProgramUniform4fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniformMatrix2fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glProgramUniformMatrix2fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniformMatrix3fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glProgramUniformMatrix3fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniformMatrix4fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glProgramUniformMatrix4fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniformMatrix2x3fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glProgramUniformMatrix2x3fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniformMatrix3x2fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glProgramUniformMatrix3x2fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniformMatrix2x4fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glProgramUniformMatrix2x4fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniformMatrix4x2fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glProgramUniformMatrix4x2fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniformMatrix3x4fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glProgramUniformMatrix3x4fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlProgramUniformMatrix4x3fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value) {
    self->glProgramUniformMatrix4x3fv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(count), static_cast<GLboolean>(transpose), static_cast<const GLfloat*>(value));
}

void QOpenGLExtraFunctions_GlValidateProgramPipeline(QOpenGLExtraFunctions* self, uint32_t pipeline) {
    self->glValidateProgramPipeline(static_cast<GLuint>(pipeline));
}

void QOpenGLExtraFunctions_GlGetProgramPipelineInfoLog(QOpenGLExtraFunctions* self, uint32_t pipeline, int32_t bufSize, int32_t* length, GLchar* infoLog) {
    self->glGetProgramPipelineInfoLog(static_cast<GLuint>(pipeline), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(infoLog));
}

void QOpenGLExtraFunctions_GlBindImageTexture(QOpenGLExtraFunctions* self, uint32_t unit, uint32_t texture, int32_t level, unsigned char layered, int32_t layer, uint32_t access, uint32_t format) {
    self->glBindImageTexture(static_cast<GLuint>(unit), static_cast<GLuint>(texture), static_cast<GLint>(level), static_cast<GLboolean>(layered), static_cast<GLint>(layer), static_cast<GLenum>(access), static_cast<GLenum>(format));
}

void QOpenGLExtraFunctions_GlGetBooleaniV(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index, unsigned char* data) {
    self->glGetBooleani_v(static_cast<GLenum>(target), static_cast<GLuint>(index), static_cast<GLboolean*>(data));
}

void QOpenGLExtraFunctions_GlMemoryBarrier(QOpenGLExtraFunctions* self, uint32_t barriers) {
    self->glMemoryBarrier(static_cast<GLbitfield>(barriers));
}

void QOpenGLExtraFunctions_GlMemoryBarrierByRegion(QOpenGLExtraFunctions* self, uint32_t barriers) {
    self->glMemoryBarrierByRegion(static_cast<GLbitfield>(barriers));
}

void QOpenGLExtraFunctions_GlTexStorage2DMultisample(QOpenGLExtraFunctions* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, unsigned char fixedsamplelocations) {
    self->glTexStorage2DMultisample(static_cast<GLenum>(target), static_cast<GLsizei>(samples), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLboolean>(fixedsamplelocations));
}

void QOpenGLExtraFunctions_GlGetMultisamplefv(QOpenGLExtraFunctions* self, uint32_t pname, uint32_t index, float* val) {
    self->glGetMultisamplefv(static_cast<GLenum>(pname), static_cast<GLuint>(index), static_cast<GLfloat*>(val));
}

void QOpenGLExtraFunctions_GlSampleMaski(QOpenGLExtraFunctions* self, uint32_t maskNumber, uint32_t mask) {
    self->glSampleMaski(static_cast<GLuint>(maskNumber), static_cast<GLbitfield>(mask));
}

void QOpenGLExtraFunctions_GlGetTexLevelParameteriv(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params) {
    self->glGetTexLevelParameteriv(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLExtraFunctions_GlGetTexLevelParameterfv(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, uint32_t pname, float* params) {
    self->glGetTexLevelParameterfv(static_cast<GLenum>(target), static_cast<GLint>(level), static_cast<GLenum>(pname), static_cast<GLfloat*>(params));
}

void QOpenGLExtraFunctions_GlBindVertexBuffer(QOpenGLExtraFunctions* self, uint32_t bindingindex, uint32_t buffer, int64_t offset, int32_t stride) {
    self->glBindVertexBuffer(static_cast<GLuint>(bindingindex), static_cast<GLuint>(buffer), static_cast<GLintptr>(offset), static_cast<GLsizei>(stride));
}

void QOpenGLExtraFunctions_GlVertexAttribFormat(QOpenGLExtraFunctions* self, uint32_t attribindex, int32_t size, uint32_t typeVal, unsigned char normalized, uint32_t relativeoffset) {
    self->glVertexAttribFormat(static_cast<GLuint>(attribindex), static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLboolean>(normalized), static_cast<GLuint>(relativeoffset));
}

void QOpenGLExtraFunctions_GlVertexAttribIFormat(QOpenGLExtraFunctions* self, uint32_t attribindex, int32_t size, uint32_t typeVal, uint32_t relativeoffset) {
    self->glVertexAttribIFormat(static_cast<GLuint>(attribindex), static_cast<GLint>(size), static_cast<GLenum>(typeVal), static_cast<GLuint>(relativeoffset));
}

void QOpenGLExtraFunctions_GlVertexAttribBinding(QOpenGLExtraFunctions* self, uint32_t attribindex, uint32_t bindingindex) {
    self->glVertexAttribBinding(static_cast<GLuint>(attribindex), static_cast<GLuint>(bindingindex));
}

void QOpenGLExtraFunctions_GlVertexBindingDivisor(QOpenGLExtraFunctions* self, uint32_t bindingindex, uint32_t divisor) {
    self->glVertexBindingDivisor(static_cast<GLuint>(bindingindex), static_cast<GLuint>(divisor));
}

void QOpenGLExtraFunctions_GlBlendBarrier(QOpenGLExtraFunctions* self) {
    self->glBlendBarrier();
}

void QOpenGLExtraFunctions_GlCopyImageSubData(QOpenGLExtraFunctions* self, uint32_t srcName, uint32_t srcTarget, int32_t srcLevel, int32_t srcX, int32_t srcY, int32_t srcZ, uint32_t dstName, uint32_t dstTarget, int32_t dstLevel, int32_t dstX, int32_t dstY, int32_t dstZ, int32_t srcWidth, int32_t srcHeight, int32_t srcDepth) {
    self->glCopyImageSubData(static_cast<GLuint>(srcName), static_cast<GLenum>(srcTarget), static_cast<GLint>(srcLevel), static_cast<GLint>(srcX), static_cast<GLint>(srcY), static_cast<GLint>(srcZ), static_cast<GLuint>(dstName), static_cast<GLenum>(dstTarget), static_cast<GLint>(dstLevel), static_cast<GLint>(dstX), static_cast<GLint>(dstY), static_cast<GLint>(dstZ), static_cast<GLsizei>(srcWidth), static_cast<GLsizei>(srcHeight), static_cast<GLsizei>(srcDepth));
}

void QOpenGLExtraFunctions_GlDebugMessageControl(QOpenGLExtraFunctions* self, uint32_t source, uint32_t typeVal, uint32_t severity, int32_t count, const uint32_t* ids, unsigned char enabled) {
    self->glDebugMessageControl(static_cast<GLenum>(source), static_cast<GLenum>(typeVal), static_cast<GLenum>(severity), static_cast<GLsizei>(count), static_cast<const GLuint*>(ids), static_cast<GLboolean>(enabled));
}

void QOpenGLExtraFunctions_GlDebugMessageInsert(QOpenGLExtraFunctions* self, uint32_t source, uint32_t typeVal, uint32_t id, uint32_t severity, int32_t length, const GLchar* buf) {
    self->glDebugMessageInsert(static_cast<GLenum>(source), static_cast<GLenum>(typeVal), static_cast<GLuint>(id), static_cast<GLenum>(severity), static_cast<GLsizei>(length), static_cast<const GLchar*>(buf));
}

void QOpenGLExtraFunctions_GlPushDebugGroup(QOpenGLExtraFunctions* self, uint32_t source, uint32_t id, int32_t length, const GLchar* message) {
    self->glPushDebugGroup(static_cast<GLenum>(source), static_cast<GLuint>(id), static_cast<GLsizei>(length), static_cast<const GLchar*>(message));
}

void QOpenGLExtraFunctions_GlPopDebugGroup(QOpenGLExtraFunctions* self) {
    self->glPopDebugGroup();
}

void QOpenGLExtraFunctions_GlObjectLabel(QOpenGLExtraFunctions* self, uint32_t identifier, uint32_t name, int32_t length, const GLchar* label) {
    self->glObjectLabel(static_cast<GLenum>(identifier), static_cast<GLuint>(name), static_cast<GLsizei>(length), static_cast<const GLchar*>(label));
}

void QOpenGLExtraFunctions_GlGetObjectLabel(QOpenGLExtraFunctions* self, uint32_t identifier, uint32_t name, int32_t bufSize, int32_t* length, GLchar* label) {
    self->glGetObjectLabel(static_cast<GLenum>(identifier), static_cast<GLuint>(name), static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(label));
}

void QOpenGLExtraFunctions_GlObjectPtrLabel(QOpenGLExtraFunctions* self, const void* ptr, int32_t length, const GLchar* label) {
    self->glObjectPtrLabel(ptr, static_cast<GLsizei>(length), static_cast<const GLchar*>(label));
}

void QOpenGLExtraFunctions_GlGetObjectPtrLabel(QOpenGLExtraFunctions* self, const void* ptr, int32_t bufSize, int32_t* length, GLchar* label) {
    self->glGetObjectPtrLabel(ptr, static_cast<GLsizei>(bufSize), static_cast<GLsizei*>(length), static_cast<GLchar*>(label));
}

void QOpenGLExtraFunctions_GlGetPointerv(QOpenGLExtraFunctions* self, uint32_t pname, void** params) {
    self->glGetPointerv(static_cast<GLenum>(pname), params);
}

void QOpenGLExtraFunctions_GlEnablei(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index) {
    self->glEnablei(static_cast<GLenum>(target), static_cast<GLuint>(index));
}

void QOpenGLExtraFunctions_GlDisablei(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index) {
    self->glDisablei(static_cast<GLenum>(target), static_cast<GLuint>(index));
}

void QOpenGLExtraFunctions_GlBlendEquationi(QOpenGLExtraFunctions* self, uint32_t buf, uint32_t mode) {
    self->glBlendEquationi(static_cast<GLuint>(buf), static_cast<GLenum>(mode));
}

void QOpenGLExtraFunctions_GlBlendEquationSeparatei(QOpenGLExtraFunctions* self, uint32_t buf, uint32_t modeRGB, uint32_t modeAlpha) {
    self->glBlendEquationSeparatei(static_cast<GLuint>(buf), static_cast<GLenum>(modeRGB), static_cast<GLenum>(modeAlpha));
}

void QOpenGLExtraFunctions_GlBlendFunci(QOpenGLExtraFunctions* self, uint32_t buf, uint32_t src, uint32_t dst) {
    self->glBlendFunci(static_cast<GLuint>(buf), static_cast<GLenum>(src), static_cast<GLenum>(dst));
}

void QOpenGLExtraFunctions_GlBlendFuncSeparatei(QOpenGLExtraFunctions* self, uint32_t buf, uint32_t srcRGB, uint32_t dstRGB, uint32_t srcAlpha, uint32_t dstAlpha) {
    self->glBlendFuncSeparatei(static_cast<GLuint>(buf), static_cast<GLenum>(srcRGB), static_cast<GLenum>(dstRGB), static_cast<GLenum>(srcAlpha), static_cast<GLenum>(dstAlpha));
}

void QOpenGLExtraFunctions_GlColorMaski(QOpenGLExtraFunctions* self, uint32_t index, unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
    self->glColorMaski(static_cast<GLuint>(index), static_cast<GLboolean>(r), static_cast<GLboolean>(g), static_cast<GLboolean>(b), static_cast<GLboolean>(a));
}

unsigned char QOpenGLExtraFunctions_GlIsEnabledi(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index) {
    return self->glIsEnabledi(static_cast<GLenum>(target), static_cast<GLuint>(index));
}

void QOpenGLExtraFunctions_GlDrawElementsBaseVertex(QOpenGLExtraFunctions* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t basevertex) {
    self->glDrawElementsBaseVertex(static_cast<GLenum>(mode), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLint>(basevertex));
}

void QOpenGLExtraFunctions_GlDrawRangeElementsBaseVertex(QOpenGLExtraFunctions* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices, int32_t basevertex) {
    self->glDrawRangeElementsBaseVertex(static_cast<GLenum>(mode), static_cast<GLuint>(start), static_cast<GLuint>(end), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLint>(basevertex));
}

void QOpenGLExtraFunctions_GlDrawElementsInstancedBaseVertex(QOpenGLExtraFunctions* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount, int32_t basevertex) {
    self->glDrawElementsInstancedBaseVertex(static_cast<GLenum>(mode), static_cast<GLsizei>(count), static_cast<GLenum>(typeVal), indices, static_cast<GLsizei>(instancecount), static_cast<GLint>(basevertex));
}

void QOpenGLExtraFunctions_GlFramebufferTexture(QOpenGLExtraFunctions* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level) {
    self->glFramebufferTexture(static_cast<GLenum>(target), static_cast<GLenum>(attachment), static_cast<GLuint>(texture), static_cast<GLint>(level));
}

void QOpenGLExtraFunctions_GlPrimitiveBoundingBox(QOpenGLExtraFunctions* self, float minX, float minY, float minZ, float minW, float maxX, float maxY, float maxZ, float maxW) {
    self->glPrimitiveBoundingBox(static_cast<GLfloat>(minX), static_cast<GLfloat>(minY), static_cast<GLfloat>(minZ), static_cast<GLfloat>(minW), static_cast<GLfloat>(maxX), static_cast<GLfloat>(maxY), static_cast<GLfloat>(maxZ), static_cast<GLfloat>(maxW));
}

void QOpenGLExtraFunctions_GlReadnPixels(QOpenGLExtraFunctions* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, int32_t bufSize, void* data) {
    self->glReadnPixels(static_cast<GLint>(x), static_cast<GLint>(y), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLenum>(format), static_cast<GLenum>(typeVal), static_cast<GLsizei>(bufSize), data);
}

void QOpenGLExtraFunctions_GlGetnUniformfv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t bufSize, float* params) {
    self->glGetnUniformfv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(bufSize), static_cast<GLfloat*>(params));
}

void QOpenGLExtraFunctions_GlGetnUniformiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t bufSize, int32_t* params) {
    self->glGetnUniformiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(bufSize), static_cast<GLint*>(params));
}

void QOpenGLExtraFunctions_GlGetnUniformuiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t bufSize, uint32_t* params) {
    self->glGetnUniformuiv(static_cast<GLuint>(program), static_cast<GLint>(location), static_cast<GLsizei>(bufSize), static_cast<GLuint*>(params));
}

void QOpenGLExtraFunctions_GlMinSampleShading(QOpenGLExtraFunctions* self, float value) {
    self->glMinSampleShading(static_cast<GLfloat>(value));
}

void QOpenGLExtraFunctions_GlPatchParameteri(QOpenGLExtraFunctions* self, uint32_t pname, int32_t value) {
    self->glPatchParameteri(static_cast<GLenum>(pname), static_cast<GLint>(value));
}

void QOpenGLExtraFunctions_GlTexParameterIiv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, const int32_t* params) {
    self->glTexParameterIiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLint*>(params));
}

void QOpenGLExtraFunctions_GlTexParameterIuiv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, const uint32_t* params) {
    self->glTexParameterIuiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<const GLuint*>(params));
}

void QOpenGLExtraFunctions_GlGetTexParameterIiv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, int32_t* params) {
    self->glGetTexParameterIiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLExtraFunctions_GlGetTexParameterIuiv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, uint32_t* params) {
    self->glGetTexParameterIuiv(static_cast<GLenum>(target), static_cast<GLenum>(pname), static_cast<GLuint*>(params));
}

void QOpenGLExtraFunctions_GlSamplerParameterIiv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, const int32_t* param) {
    self->glSamplerParameterIiv(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<const GLint*>(param));
}

void QOpenGLExtraFunctions_GlSamplerParameterIuiv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, const uint32_t* param) {
    self->glSamplerParameterIuiv(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<const GLuint*>(param));
}

void QOpenGLExtraFunctions_GlGetSamplerParameterIiv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, int32_t* params) {
    self->glGetSamplerParameterIiv(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<GLint*>(params));
}

void QOpenGLExtraFunctions_GlGetSamplerParameterIuiv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, uint32_t* params) {
    self->glGetSamplerParameterIuiv(static_cast<GLuint>(sampler), static_cast<GLenum>(pname), static_cast<GLuint*>(params));
}

void QOpenGLExtraFunctions_GlTexBuffer(QOpenGLExtraFunctions* self, uint32_t target, uint32_t internalformat, uint32_t buffer) {
    self->glTexBuffer(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLuint>(buffer));
}

void QOpenGLExtraFunctions_GlTexBufferRange(QOpenGLExtraFunctions* self, uint32_t target, uint32_t internalformat, uint32_t buffer, int64_t offset, int64_t size) {
    self->glTexBufferRange(static_cast<GLenum>(target), static_cast<GLenum>(internalformat), static_cast<GLuint>(buffer), static_cast<GLintptr>(offset), static_cast<GLsizeiptr>(size));
}

void QOpenGLExtraFunctions_GlTexStorage3DMultisample(QOpenGLExtraFunctions* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, unsigned char fixedsamplelocations) {
    self->glTexStorage3DMultisample(static_cast<GLenum>(target), static_cast<GLsizei>(samples), static_cast<GLenum>(internalformat), static_cast<GLsizei>(width), static_cast<GLsizei>(height), static_cast<GLsizei>(depth), static_cast<GLboolean>(fixedsamplelocations));
}

void QOpenGLExtraFunctions_Delete(QOpenGLExtraFunctions* self) {
    delete self;
}
