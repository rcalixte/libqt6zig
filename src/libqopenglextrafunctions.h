#pragma once
#ifndef SRCC_LIBQOPENGLEXTRAFUNCTIONS_H
#define SRCC_LIBQOPENGLEXTRAFUNCTIONS_H

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
typedef struct QOpenGLExtraFunctions QOpenGLExtraFunctions;
typedef struct QOpenGLFunctions QOpenGLFunctions;
#endif

QOpenGLExtraFunctions* QOpenGLExtraFunctions_new();
QOpenGLExtraFunctions* QOpenGLExtraFunctions_new2(QOpenGLContext* context);
QOpenGLExtraFunctions* QOpenGLExtraFunctions_new3(const QOpenGLExtraFunctions* param1);
void QOpenGLExtraFunctions_GlReadBuffer(QOpenGLExtraFunctions* self, uint32_t mode);
void QOpenGLExtraFunctions_GlDrawRangeElements(QOpenGLExtraFunctions* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices);
void QOpenGLExtraFunctions_GlTexImage3D(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t typeVal, const void* pixels);
void QOpenGLExtraFunctions_GlTexSubImage3D(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t typeVal, const void* pixels);
void QOpenGLExtraFunctions_GlCopyTexSubImage3D(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height);
void QOpenGLExtraFunctions_GlCompressedTexImage3D(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, const void* data);
void QOpenGLExtraFunctions_GlCompressedTexSubImage3D(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, const void* data);
void QOpenGLExtraFunctions_GlGenQueries(QOpenGLExtraFunctions* self, int32_t n, uint32_t* ids);
void QOpenGLExtraFunctions_GlDeleteQueries(QOpenGLExtraFunctions* self, int32_t n, const uint32_t* ids);
unsigned char QOpenGLExtraFunctions_GlIsQuery(QOpenGLExtraFunctions* self, uint32_t id);
void QOpenGLExtraFunctions_GlBeginQuery(QOpenGLExtraFunctions* self, uint32_t target, uint32_t id);
void QOpenGLExtraFunctions_GlEndQuery(QOpenGLExtraFunctions* self, uint32_t target);
void QOpenGLExtraFunctions_GlGetQueryiv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, int32_t* params);
void QOpenGLExtraFunctions_GlGetQueryObjectuiv(QOpenGLExtraFunctions* self, uint32_t id, uint32_t pname, uint32_t* params);
unsigned char QOpenGLExtraFunctions_GlUnmapBuffer(QOpenGLExtraFunctions* self, uint32_t target);
void QOpenGLExtraFunctions_GlGetBufferPointerv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, void** params);
void QOpenGLExtraFunctions_GlUniformMatrix2x3fv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value);
void QOpenGLExtraFunctions_GlUniformMatrix3x2fv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value);
void QOpenGLExtraFunctions_GlUniformMatrix2x4fv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value);
void QOpenGLExtraFunctions_GlUniformMatrix4x2fv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value);
void QOpenGLExtraFunctions_GlUniformMatrix3x4fv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value);
void QOpenGLExtraFunctions_GlUniformMatrix4x3fv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, unsigned char transpose, const float* value);
void QOpenGLExtraFunctions_GlBlitFramebuffer(QOpenGLExtraFunctions* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter);
void QOpenGLExtraFunctions_GlRenderbufferStorageMultisample(QOpenGLExtraFunctions* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height);
void QOpenGLExtraFunctions_GlFramebufferTextureLayer(QOpenGLExtraFunctions* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer);
void* QOpenGLExtraFunctions_GlMapBufferRange(QOpenGLExtraFunctions* self, uint32_t target, int64_t offset, int64_t length, uint32_t access);
void QOpenGLExtraFunctions_GlFlushMappedBufferRange(QOpenGLExtraFunctions* self, uint32_t target, int64_t offset, int64_t length);
void QOpenGLExtraFunctions_GlBindVertexArray(QOpenGLExtraFunctions* self, uint32_t array);
void QOpenGLExtraFunctions_GlDeleteVertexArrays(QOpenGLExtraFunctions* self, int32_t n, const uint32_t* arrays);
void QOpenGLExtraFunctions_GlGenVertexArrays(QOpenGLExtraFunctions* self, int32_t n, uint32_t* arrays);
unsigned char QOpenGLExtraFunctions_GlIsVertexArray(QOpenGLExtraFunctions* self, uint32_t array);
void QOpenGLExtraFunctions_GlGetIntegeriV(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index, int32_t* data);
void QOpenGLExtraFunctions_GlBeginTransformFeedback(QOpenGLExtraFunctions* self, uint32_t primitiveMode);
void QOpenGLExtraFunctions_GlEndTransformFeedback(QOpenGLExtraFunctions* self);
void QOpenGLExtraFunctions_GlBindBufferRange(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index, uint32_t buffer, int64_t offset, int64_t size);
void QOpenGLExtraFunctions_GlBindBufferBase(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index, uint32_t buffer);
void QOpenGLExtraFunctions_GlVertexAttribIPointer(QOpenGLExtraFunctions* self, uint32_t index, int32_t size, uint32_t typeVal, int32_t stride, const void* pointer);
void QOpenGLExtraFunctions_GlGetVertexAttribIiv(QOpenGLExtraFunctions* self, uint32_t index, uint32_t pname, int32_t* params);
void QOpenGLExtraFunctions_GlGetVertexAttribIuiv(QOpenGLExtraFunctions* self, uint32_t index, uint32_t pname, uint32_t* params);
void QOpenGLExtraFunctions_GlVertexAttribI4i(QOpenGLExtraFunctions* self, uint32_t index, int32_t x, int32_t y, int32_t z, int32_t w);
void QOpenGLExtraFunctions_GlVertexAttribI4ui(QOpenGLExtraFunctions* self, uint32_t index, uint32_t x, uint32_t y, uint32_t z, uint32_t w);
void QOpenGLExtraFunctions_GlVertexAttribI4iv(QOpenGLExtraFunctions* self, uint32_t index, const int32_t* v);
void QOpenGLExtraFunctions_GlVertexAttribI4uiv(QOpenGLExtraFunctions* self, uint32_t index, const uint32_t* v);
void QOpenGLExtraFunctions_GlGetUniformuiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, uint32_t* params);
int32_t QOpenGLExtraFunctions_GlGetFragDataLocation(QOpenGLExtraFunctions* self, uint32_t program, const GLchar* name);
void QOpenGLExtraFunctions_GlUniform1ui(QOpenGLExtraFunctions* self, int32_t location, uint32_t v0);
void QOpenGLExtraFunctions_GlUniform2ui(QOpenGLExtraFunctions* self, int32_t location, uint32_t v0, uint32_t v1);
void QOpenGLExtraFunctions_GlUniform3ui(QOpenGLExtraFunctions* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2);
void QOpenGLExtraFunctions_GlUniform4ui(QOpenGLExtraFunctions* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3);
void QOpenGLExtraFunctions_GlUniform1uiv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, const uint32_t* value);
void QOpenGLExtraFunctions_GlUniform2uiv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, const uint32_t* value);
void QOpenGLExtraFunctions_GlUniform3uiv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, const uint32_t* value);
void QOpenGLExtraFunctions_GlUniform4uiv(QOpenGLExtraFunctions* self, int32_t location, int32_t count, const uint32_t* value);
void QOpenGLExtraFunctions_GlClearBufferiv(QOpenGLExtraFunctions* self, uint32_t buffer, int32_t drawbuffer, const int32_t* value);
void QOpenGLExtraFunctions_GlClearBufferuiv(QOpenGLExtraFunctions* self, uint32_t buffer, int32_t drawbuffer, const uint32_t* value);
void QOpenGLExtraFunctions_GlClearBufferfv(QOpenGLExtraFunctions* self, uint32_t buffer, int32_t drawbuffer, const float* value);
void QOpenGLExtraFunctions_GlClearBufferfi(QOpenGLExtraFunctions* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil);
const uint8_t* QOpenGLExtraFunctions_GlGetStringi(QOpenGLExtraFunctions* self, uint32_t name, uint32_t index);
void QOpenGLExtraFunctions_GlCopyBufferSubData(QOpenGLExtraFunctions* self, uint32_t readTarget, uint32_t writeTarget, int64_t readOffset, int64_t writeOffset, int64_t size);
void QOpenGLExtraFunctions_GlGetActiveUniformsiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t uniformCount, const uint32_t* uniformIndices, uint32_t pname, int32_t* params);
uint32_t QOpenGLExtraFunctions_GlGetUniformBlockIndex(QOpenGLExtraFunctions* self, uint32_t program, const GLchar* uniformBlockName);
void QOpenGLExtraFunctions_GlGetActiveUniformBlockiv(QOpenGLExtraFunctions* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params);
void QOpenGLExtraFunctions_GlGetActiveUniformBlockName(QOpenGLExtraFunctions* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, GLchar* uniformBlockName);
void QOpenGLExtraFunctions_GlUniformBlockBinding(QOpenGLExtraFunctions* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding);
void QOpenGLExtraFunctions_GlDrawArraysInstanced(QOpenGLExtraFunctions* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount);
void QOpenGLExtraFunctions_GlDrawElementsInstanced(QOpenGLExtraFunctions* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount);
void QOpenGLExtraFunctions_GlGetInteger64v(QOpenGLExtraFunctions* self, uint32_t pname, int64_t* data);
void QOpenGLExtraFunctions_GlGetInteger64iV(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index, int64_t* data);
void QOpenGLExtraFunctions_GlGetBufferParameteri64v(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, int64_t* params);
void QOpenGLExtraFunctions_GlGenSamplers(QOpenGLExtraFunctions* self, int32_t count, uint32_t* samplers);
void QOpenGLExtraFunctions_GlDeleteSamplers(QOpenGLExtraFunctions* self, int32_t count, const uint32_t* samplers);
unsigned char QOpenGLExtraFunctions_GlIsSampler(QOpenGLExtraFunctions* self, uint32_t sampler);
void QOpenGLExtraFunctions_GlBindSampler(QOpenGLExtraFunctions* self, uint32_t unit, uint32_t sampler);
void QOpenGLExtraFunctions_GlSamplerParameteri(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, int32_t param);
void QOpenGLExtraFunctions_GlSamplerParameteriv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, const int32_t* param);
void QOpenGLExtraFunctions_GlSamplerParameterf(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, float param);
void QOpenGLExtraFunctions_GlSamplerParameterfv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, const float* param);
void QOpenGLExtraFunctions_GlGetSamplerParameteriv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, int32_t* params);
void QOpenGLExtraFunctions_GlGetSamplerParameterfv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, float* params);
void QOpenGLExtraFunctions_GlVertexAttribDivisor(QOpenGLExtraFunctions* self, uint32_t index, uint32_t divisor);
void QOpenGLExtraFunctions_GlBindTransformFeedback(QOpenGLExtraFunctions* self, uint32_t target, uint32_t id);
void QOpenGLExtraFunctions_GlDeleteTransformFeedbacks(QOpenGLExtraFunctions* self, int32_t n, const uint32_t* ids);
void QOpenGLExtraFunctions_GlGenTransformFeedbacks(QOpenGLExtraFunctions* self, int32_t n, uint32_t* ids);
unsigned char QOpenGLExtraFunctions_GlIsTransformFeedback(QOpenGLExtraFunctions* self, uint32_t id);
void QOpenGLExtraFunctions_GlPauseTransformFeedback(QOpenGLExtraFunctions* self);
void QOpenGLExtraFunctions_GlResumeTransformFeedback(QOpenGLExtraFunctions* self);
void QOpenGLExtraFunctions_GlProgramBinary(QOpenGLExtraFunctions* self, uint32_t program, uint32_t binaryFormat, const void* binary, int32_t length);
void QOpenGLExtraFunctions_GlProgramParameteri(QOpenGLExtraFunctions* self, uint32_t program, uint32_t pname, int32_t value);
void QOpenGLExtraFunctions_GlTexStorage2D(QOpenGLExtraFunctions* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height);
void QOpenGLExtraFunctions_GlTexStorage3D(QOpenGLExtraFunctions* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height, int32_t depth);
void QOpenGLExtraFunctions_GlGetInternalformativ(QOpenGLExtraFunctions* self, uint32_t target, uint32_t internalformat, uint32_t pname, int32_t bufSize, int32_t* params);
void QOpenGLExtraFunctions_GlDispatchCompute(QOpenGLExtraFunctions* self, uint32_t num_groups_x, uint32_t num_groups_y, uint32_t num_groups_z);
void QOpenGLExtraFunctions_GlDispatchComputeIndirect(QOpenGLExtraFunctions* self, int64_t indirect);
void QOpenGLExtraFunctions_GlDrawArraysIndirect(QOpenGLExtraFunctions* self, uint32_t mode, const void* indirect);
void QOpenGLExtraFunctions_GlDrawElementsIndirect(QOpenGLExtraFunctions* self, uint32_t mode, uint32_t typeVal, const void* indirect);
void QOpenGLExtraFunctions_GlFramebufferParameteri(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, int32_t param);
void QOpenGLExtraFunctions_GlGetFramebufferParameteriv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, int32_t* params);
void QOpenGLExtraFunctions_GlGetProgramInterfaceiv(QOpenGLExtraFunctions* self, uint32_t program, uint32_t programInterface, uint32_t pname, int32_t* params);
uint32_t QOpenGLExtraFunctions_GlGetProgramResourceIndex(QOpenGLExtraFunctions* self, uint32_t program, uint32_t programInterface, const GLchar* name);
void QOpenGLExtraFunctions_GlGetProgramResourceName(QOpenGLExtraFunctions* self, uint32_t program, uint32_t programInterface, uint32_t index, int32_t bufSize, int32_t* length, GLchar* name);
int32_t QOpenGLExtraFunctions_GlGetProgramResourceLocation(QOpenGLExtraFunctions* self, uint32_t program, uint32_t programInterface, const GLchar* name);
void QOpenGLExtraFunctions_GlUseProgramStages(QOpenGLExtraFunctions* self, uint32_t pipeline, uint32_t stages, uint32_t program);
void QOpenGLExtraFunctions_GlActiveShaderProgram(QOpenGLExtraFunctions* self, uint32_t pipeline, uint32_t program);
void QOpenGLExtraFunctions_GlBindProgramPipeline(QOpenGLExtraFunctions* self, uint32_t pipeline);
void QOpenGLExtraFunctions_GlDeleteProgramPipelines(QOpenGLExtraFunctions* self, int32_t n, const uint32_t* pipelines);
void QOpenGLExtraFunctions_GlGenProgramPipelines(QOpenGLExtraFunctions* self, int32_t n, uint32_t* pipelines);
unsigned char QOpenGLExtraFunctions_GlIsProgramPipeline(QOpenGLExtraFunctions* self, uint32_t pipeline);
void QOpenGLExtraFunctions_GlGetProgramPipelineiv(QOpenGLExtraFunctions* self, uint32_t pipeline, uint32_t pname, int32_t* params);
void QOpenGLExtraFunctions_GlProgramUniform1i(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t v0);
void QOpenGLExtraFunctions_GlProgramUniform2i(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t v0, int32_t v1);
void QOpenGLExtraFunctions_GlProgramUniform3i(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2);
void QOpenGLExtraFunctions_GlProgramUniform4i(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3);
void QOpenGLExtraFunctions_GlProgramUniform1ui(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, uint32_t v0);
void QOpenGLExtraFunctions_GlProgramUniform2ui(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1);
void QOpenGLExtraFunctions_GlProgramUniform3ui(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2);
void QOpenGLExtraFunctions_GlProgramUniform4ui(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3);
void QOpenGLExtraFunctions_GlProgramUniform1f(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, float v0);
void QOpenGLExtraFunctions_GlProgramUniform2f(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, float v0, float v1);
void QOpenGLExtraFunctions_GlProgramUniform3f(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, float v0, float v1, float v2);
void QOpenGLExtraFunctions_GlProgramUniform4f(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, float v0, float v1, float v2, float v3);
void QOpenGLExtraFunctions_GlProgramUniform1iv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const int32_t* value);
void QOpenGLExtraFunctions_GlProgramUniform2iv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const int32_t* value);
void QOpenGLExtraFunctions_GlProgramUniform3iv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const int32_t* value);
void QOpenGLExtraFunctions_GlProgramUniform4iv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const int32_t* value);
void QOpenGLExtraFunctions_GlProgramUniform1uiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value);
void QOpenGLExtraFunctions_GlProgramUniform2uiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value);
void QOpenGLExtraFunctions_GlProgramUniform3uiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value);
void QOpenGLExtraFunctions_GlProgramUniform4uiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const uint32_t* value);
void QOpenGLExtraFunctions_GlProgramUniform1fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const float* value);
void QOpenGLExtraFunctions_GlProgramUniform2fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const float* value);
void QOpenGLExtraFunctions_GlProgramUniform3fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const float* value);
void QOpenGLExtraFunctions_GlProgramUniform4fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, const float* value);
void QOpenGLExtraFunctions_GlProgramUniformMatrix2fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value);
void QOpenGLExtraFunctions_GlProgramUniformMatrix3fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value);
void QOpenGLExtraFunctions_GlProgramUniformMatrix4fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value);
void QOpenGLExtraFunctions_GlProgramUniformMatrix2x3fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value);
void QOpenGLExtraFunctions_GlProgramUniformMatrix3x2fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value);
void QOpenGLExtraFunctions_GlProgramUniformMatrix2x4fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value);
void QOpenGLExtraFunctions_GlProgramUniformMatrix4x2fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value);
void QOpenGLExtraFunctions_GlProgramUniformMatrix3x4fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value);
void QOpenGLExtraFunctions_GlProgramUniformMatrix4x3fv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t count, unsigned char transpose, const float* value);
void QOpenGLExtraFunctions_GlValidateProgramPipeline(QOpenGLExtraFunctions* self, uint32_t pipeline);
void QOpenGLExtraFunctions_GlGetProgramPipelineInfoLog(QOpenGLExtraFunctions* self, uint32_t pipeline, int32_t bufSize, int32_t* length, GLchar* infoLog);
void QOpenGLExtraFunctions_GlBindImageTexture(QOpenGLExtraFunctions* self, uint32_t unit, uint32_t texture, int32_t level, unsigned char layered, int32_t layer, uint32_t access, uint32_t format);
void QOpenGLExtraFunctions_GlGetBooleaniV(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index, unsigned char* data);
void QOpenGLExtraFunctions_GlMemoryBarrier(QOpenGLExtraFunctions* self, uint32_t barriers);
void QOpenGLExtraFunctions_GlMemoryBarrierByRegion(QOpenGLExtraFunctions* self, uint32_t barriers);
void QOpenGLExtraFunctions_GlTexStorage2DMultisample(QOpenGLExtraFunctions* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, unsigned char fixedsamplelocations);
void QOpenGLExtraFunctions_GlGetMultisamplefv(QOpenGLExtraFunctions* self, uint32_t pname, uint32_t index, float* val);
void QOpenGLExtraFunctions_GlSampleMaski(QOpenGLExtraFunctions* self, uint32_t maskNumber, uint32_t mask);
void QOpenGLExtraFunctions_GlGetTexLevelParameteriv(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params);
void QOpenGLExtraFunctions_GlGetTexLevelParameterfv(QOpenGLExtraFunctions* self, uint32_t target, int32_t level, uint32_t pname, float* params);
void QOpenGLExtraFunctions_GlBindVertexBuffer(QOpenGLExtraFunctions* self, uint32_t bindingindex, uint32_t buffer, int64_t offset, int32_t stride);
void QOpenGLExtraFunctions_GlVertexAttribFormat(QOpenGLExtraFunctions* self, uint32_t attribindex, int32_t size, uint32_t typeVal, unsigned char normalized, uint32_t relativeoffset);
void QOpenGLExtraFunctions_GlVertexAttribIFormat(QOpenGLExtraFunctions* self, uint32_t attribindex, int32_t size, uint32_t typeVal, uint32_t relativeoffset);
void QOpenGLExtraFunctions_GlVertexAttribBinding(QOpenGLExtraFunctions* self, uint32_t attribindex, uint32_t bindingindex);
void QOpenGLExtraFunctions_GlVertexBindingDivisor(QOpenGLExtraFunctions* self, uint32_t bindingindex, uint32_t divisor);
void QOpenGLExtraFunctions_GlBlendBarrier(QOpenGLExtraFunctions* self);
void QOpenGLExtraFunctions_GlCopyImageSubData(QOpenGLExtraFunctions* self, uint32_t srcName, uint32_t srcTarget, int32_t srcLevel, int32_t srcX, int32_t srcY, int32_t srcZ, uint32_t dstName, uint32_t dstTarget, int32_t dstLevel, int32_t dstX, int32_t dstY, int32_t dstZ, int32_t srcWidth, int32_t srcHeight, int32_t srcDepth);
void QOpenGLExtraFunctions_GlDebugMessageControl(QOpenGLExtraFunctions* self, uint32_t source, uint32_t typeVal, uint32_t severity, int32_t count, const uint32_t* ids, unsigned char enabled);
void QOpenGLExtraFunctions_GlDebugMessageInsert(QOpenGLExtraFunctions* self, uint32_t source, uint32_t typeVal, uint32_t id, uint32_t severity, int32_t length, const GLchar* buf);
void QOpenGLExtraFunctions_GlPushDebugGroup(QOpenGLExtraFunctions* self, uint32_t source, uint32_t id, int32_t length, const GLchar* message);
void QOpenGLExtraFunctions_GlPopDebugGroup(QOpenGLExtraFunctions* self);
void QOpenGLExtraFunctions_GlObjectLabel(QOpenGLExtraFunctions* self, uint32_t identifier, uint32_t name, int32_t length, const GLchar* label);
void QOpenGLExtraFunctions_GlGetObjectLabel(QOpenGLExtraFunctions* self, uint32_t identifier, uint32_t name, int32_t bufSize, int32_t* length, GLchar* label);
void QOpenGLExtraFunctions_GlObjectPtrLabel(QOpenGLExtraFunctions* self, const void* ptr, int32_t length, const GLchar* label);
void QOpenGLExtraFunctions_GlGetObjectPtrLabel(QOpenGLExtraFunctions* self, const void* ptr, int32_t bufSize, int32_t* length, GLchar* label);
void QOpenGLExtraFunctions_GlGetPointerv(QOpenGLExtraFunctions* self, uint32_t pname, void** params);
void QOpenGLExtraFunctions_GlEnablei(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index);
void QOpenGLExtraFunctions_GlDisablei(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index);
void QOpenGLExtraFunctions_GlBlendEquationi(QOpenGLExtraFunctions* self, uint32_t buf, uint32_t mode);
void QOpenGLExtraFunctions_GlBlendEquationSeparatei(QOpenGLExtraFunctions* self, uint32_t buf, uint32_t modeRGB, uint32_t modeAlpha);
void QOpenGLExtraFunctions_GlBlendFunci(QOpenGLExtraFunctions* self, uint32_t buf, uint32_t src, uint32_t dst);
void QOpenGLExtraFunctions_GlBlendFuncSeparatei(QOpenGLExtraFunctions* self, uint32_t buf, uint32_t srcRGB, uint32_t dstRGB, uint32_t srcAlpha, uint32_t dstAlpha);
void QOpenGLExtraFunctions_GlColorMaski(QOpenGLExtraFunctions* self, uint32_t index, unsigned char r, unsigned char g, unsigned char b, unsigned char a);
unsigned char QOpenGLExtraFunctions_GlIsEnabledi(QOpenGLExtraFunctions* self, uint32_t target, uint32_t index);
void QOpenGLExtraFunctions_GlDrawElementsBaseVertex(QOpenGLExtraFunctions* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t basevertex);
void QOpenGLExtraFunctions_GlDrawRangeElementsBaseVertex(QOpenGLExtraFunctions* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t typeVal, const void* indices, int32_t basevertex);
void QOpenGLExtraFunctions_GlDrawElementsInstancedBaseVertex(QOpenGLExtraFunctions* self, uint32_t mode, int32_t count, uint32_t typeVal, const void* indices, int32_t instancecount, int32_t basevertex);
void QOpenGLExtraFunctions_GlFramebufferTexture(QOpenGLExtraFunctions* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level);
void QOpenGLExtraFunctions_GlPrimitiveBoundingBox(QOpenGLExtraFunctions* self, float minX, float minY, float minZ, float minW, float maxX, float maxY, float maxZ, float maxW);
void QOpenGLExtraFunctions_GlReadnPixels(QOpenGLExtraFunctions* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t typeVal, int32_t bufSize, void* data);
void QOpenGLExtraFunctions_GlGetnUniformfv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t bufSize, float* params);
void QOpenGLExtraFunctions_GlGetnUniformiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t bufSize, int32_t* params);
void QOpenGLExtraFunctions_GlGetnUniformuiv(QOpenGLExtraFunctions* self, uint32_t program, int32_t location, int32_t bufSize, uint32_t* params);
void QOpenGLExtraFunctions_GlMinSampleShading(QOpenGLExtraFunctions* self, float value);
void QOpenGLExtraFunctions_GlPatchParameteri(QOpenGLExtraFunctions* self, uint32_t pname, int32_t value);
void QOpenGLExtraFunctions_GlTexParameterIiv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, const int32_t* params);
void QOpenGLExtraFunctions_GlTexParameterIuiv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, const uint32_t* params);
void QOpenGLExtraFunctions_GlGetTexParameterIiv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, int32_t* params);
void QOpenGLExtraFunctions_GlGetTexParameterIuiv(QOpenGLExtraFunctions* self, uint32_t target, uint32_t pname, uint32_t* params);
void QOpenGLExtraFunctions_GlSamplerParameterIiv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, const int32_t* param);
void QOpenGLExtraFunctions_GlSamplerParameterIuiv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, const uint32_t* param);
void QOpenGLExtraFunctions_GlGetSamplerParameterIiv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, int32_t* params);
void QOpenGLExtraFunctions_GlGetSamplerParameterIuiv(QOpenGLExtraFunctions* self, uint32_t sampler, uint32_t pname, uint32_t* params);
void QOpenGLExtraFunctions_GlTexBuffer(QOpenGLExtraFunctions* self, uint32_t target, uint32_t internalformat, uint32_t buffer);
void QOpenGLExtraFunctions_GlTexBufferRange(QOpenGLExtraFunctions* self, uint32_t target, uint32_t internalformat, uint32_t buffer, int64_t offset, int64_t size);
void QOpenGLExtraFunctions_GlTexStorage3DMultisample(QOpenGLExtraFunctions* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, unsigned char fixedsamplelocations);
void QOpenGLExtraFunctions_Delete(QOpenGLExtraFunctions* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
