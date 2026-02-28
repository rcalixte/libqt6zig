#include <QOpenGLContext>
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_0_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_0_DeprecatedBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_1_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_1_DeprecatedBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_2_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_2_DeprecatedBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_3_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_3_DeprecatedBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_4_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_4_DeprecatedBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_1_5_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_2_0_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_2_0_DeprecatedBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_2_1_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_3_0_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_3_0_DeprecatedBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_3_1_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_3_2_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_3_3_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_3_3_DeprecatedBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_4_0_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_4_1_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_4_2_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_4_3_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_4_4_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_4_5_CoreBackend__Functions
#define WORKAROUND_INNER_CLASS_DEFINITION_QOpenGLFunctions_4_5_DeprecatedBackend__Functions
#include <QPair>
#include <qopenglversionfunctions.h>
#include "libqopenglversionfunctions.h"
#include "libqopenglversionfunctions.hxx"

QOpenGLVersionStatus* QOpenGLVersionStatus_new(const QOpenGLVersionStatus* other) {
    return new QOpenGLVersionStatus(*other);
}

QOpenGLVersionStatus* QOpenGLVersionStatus_new2(QOpenGLVersionStatus* other) {
    return new QOpenGLVersionStatus(std::move(*other));
}

QOpenGLVersionStatus* QOpenGLVersionStatus_new3() {
    return new QOpenGLVersionStatus();
}

QOpenGLVersionStatus* QOpenGLVersionStatus_new4(int majorVersion, int minorVersion, int functionStatus) {
    return new QOpenGLVersionStatus(static_cast<int>(majorVersion), static_cast<int>(minorVersion), static_cast<QOpenGLVersionStatus::OpenGLStatus>(functionStatus));
}

QOpenGLVersionStatus* QOpenGLVersionStatus_new5(const QOpenGLVersionStatus* param1) {
    return new QOpenGLVersionStatus(*param1);
}

pair_int_int /* tuple of int and int */ QOpenGLVersionStatus_Version(const QOpenGLVersionStatus* self) {
    QPair<int, int> version_ret = self->version;
    // Convert QPair<> from C++ memory to manually-managed C memory
    pair_int_int /* tuple of int and int */ version_out;
    version_out.first = version_ret.first;
    version_out.second = version_ret.second;
    return version_out;
}

void QOpenGLVersionStatus_SetVersion(QOpenGLVersionStatus* self, pair_int_int /* tuple of int and int */ version) {
    QPair<int, int> version_QPair;
    version_QPair.first = version.first;
    version_QPair.second = version.second;
    self->version = version_QPair;
}

int QOpenGLVersionStatus_Status(const QOpenGLVersionStatus* self) {
    return static_cast<int>(self->status);
}

void QOpenGLVersionStatus_SetStatus(QOpenGLVersionStatus* self, int status) {
    self->status = static_cast<QOpenGLVersionStatus::OpenGLStatus>(status);
}

void QOpenGLVersionStatus_OperatorAssign(QOpenGLVersionStatus* self, const QOpenGLVersionStatus* param1) {
    self->operator=(*param1);
}

void QOpenGLVersionStatus_Delete(QOpenGLVersionStatus* self) {
    delete self;
}

QOpenGLContext* QOpenGLVersionFunctionsBackend_Context(const QOpenGLVersionFunctionsBackend* self) {
    return self->context;
}

void QOpenGLVersionFunctionsBackend_SetContext(QOpenGLVersionFunctionsBackend* self, QOpenGLContext* context) {
    self->context = context;
}

void QOpenGLVersionFunctionsBackend_Delete(QOpenGLVersionFunctionsBackend* self) {
    delete self;
}

QOpenGLVersionFunctionsBackend** QOpenGLVersionFunctionsStorage_Backends(const QOpenGLVersionFunctionsStorage* self) {
    return self->backends;
}

void QOpenGLVersionFunctionsStorage_SetBackends(QOpenGLVersionFunctionsStorage* self, QOpenGLVersionFunctionsBackend** backends) {
    self->backends = backends;
}

void QOpenGLVersionFunctionsStorage_Delete(QOpenGLVersionFunctionsStorage* self) {
    delete self;
}

bool QAbstractOpenGLFunctions_InitializeOpenGLFunctions(QAbstractOpenGLFunctions* self) {
    return self->initializeOpenGLFunctions();
}

void QAbstractOpenGLFunctions_Delete(QAbstractOpenGLFunctions* self) {
    delete self;
}

intptr_t QOpenGLFunctions_1_0_CoreBackend__Functions_IsEnabled(const QOpenGLFunctions_1_0_CoreBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->IsEnabled);
}

void QOpenGLFunctions_1_0_CoreBackend__Functions_SetIsEnabled(QOpenGLFunctions_1_0_CoreBackend__Functions* self, intptr_t isEnabled) {
    auto isEnabled_func = reinterpret_cast<GLboolean (*)(GLenum)>(isEnabled);
    self->IsEnabled = isEnabled_func;
}

void QOpenGLFunctions_1_0_CoreBackend__Functions_Delete(QOpenGLFunctions_1_0_CoreBackend__Functions* self) {
    delete self;
}

intptr_t QOpenGLFunctions_1_1_CoreBackend__Functions_IsTexture(const QOpenGLFunctions_1_1_CoreBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->IsTexture);
}

void QOpenGLFunctions_1_1_CoreBackend__Functions_SetIsTexture(QOpenGLFunctions_1_1_CoreBackend__Functions* self, intptr_t isTexture) {
    auto isTexture_func = reinterpret_cast<GLboolean (*)(GLuint)>(isTexture);
    self->IsTexture = isTexture_func;
}

void QOpenGLFunctions_1_1_CoreBackend__Functions_Delete(QOpenGLFunctions_1_1_CoreBackend__Functions* self) {
    delete self;
}

intptr_t QOpenGLFunctions_1_5_CoreBackend__Functions_UnmapBuffer(const QOpenGLFunctions_1_5_CoreBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->UnmapBuffer);
}

void QOpenGLFunctions_1_5_CoreBackend__Functions_SetUnmapBuffer(QOpenGLFunctions_1_5_CoreBackend__Functions* self, intptr_t unmapBuffer) {
    auto unmapBuffer_func = reinterpret_cast<GLboolean (*)(GLenum)>(unmapBuffer);
    self->UnmapBuffer = unmapBuffer_func;
}

intptr_t QOpenGLFunctions_1_5_CoreBackend__Functions_IsBuffer(const QOpenGLFunctions_1_5_CoreBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->IsBuffer);
}

void QOpenGLFunctions_1_5_CoreBackend__Functions_SetIsBuffer(QOpenGLFunctions_1_5_CoreBackend__Functions* self, intptr_t isBuffer) {
    auto isBuffer_func = reinterpret_cast<GLboolean (*)(GLuint)>(isBuffer);
    self->IsBuffer = isBuffer_func;
}

intptr_t QOpenGLFunctions_1_5_CoreBackend__Functions_IsQuery(const QOpenGLFunctions_1_5_CoreBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->IsQuery);
}

void QOpenGLFunctions_1_5_CoreBackend__Functions_SetIsQuery(QOpenGLFunctions_1_5_CoreBackend__Functions* self, intptr_t isQuery) {
    auto isQuery_func = reinterpret_cast<GLboolean (*)(GLuint)>(isQuery);
    self->IsQuery = isQuery_func;
}

void QOpenGLFunctions_1_5_CoreBackend__Functions_Delete(QOpenGLFunctions_1_5_CoreBackend__Functions* self) {
    delete self;
}

intptr_t QOpenGLFunctions_2_0_CoreBackend__Functions_IsShader(const QOpenGLFunctions_2_0_CoreBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->IsShader);
}

void QOpenGLFunctions_2_0_CoreBackend__Functions_SetIsShader(QOpenGLFunctions_2_0_CoreBackend__Functions* self, intptr_t isShader) {
    auto isShader_func = reinterpret_cast<GLboolean (*)(GLuint)>(isShader);
    self->IsShader = isShader_func;
}

intptr_t QOpenGLFunctions_2_0_CoreBackend__Functions_IsProgram(const QOpenGLFunctions_2_0_CoreBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->IsProgram);
}

void QOpenGLFunctions_2_0_CoreBackend__Functions_SetIsProgram(QOpenGLFunctions_2_0_CoreBackend__Functions* self, intptr_t isProgram) {
    auto isProgram_func = reinterpret_cast<GLboolean (*)(GLuint)>(isProgram);
    self->IsProgram = isProgram_func;
}

intptr_t QOpenGLFunctions_2_0_CoreBackend__Functions_CreateShader(const QOpenGLFunctions_2_0_CoreBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->CreateShader);
}

void QOpenGLFunctions_2_0_CoreBackend__Functions_SetCreateShader(QOpenGLFunctions_2_0_CoreBackend__Functions* self, intptr_t createShader) {
    auto createShader_func = reinterpret_cast<GLuint (*)(GLenum)>(createShader);
    self->CreateShader = createShader_func;
}

intptr_t QOpenGLFunctions_2_0_CoreBackend__Functions_CreateProgram(const QOpenGLFunctions_2_0_CoreBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->CreateProgram);
}

void QOpenGLFunctions_2_0_CoreBackend__Functions_SetCreateProgram(QOpenGLFunctions_2_0_CoreBackend__Functions* self, intptr_t createProgram) {
    auto createProgram_func = reinterpret_cast<GLuint (*)()>(createProgram);
    self->CreateProgram = createProgram_func;
}

void QOpenGLFunctions_2_0_CoreBackend__Functions_Delete(QOpenGLFunctions_2_0_CoreBackend__Functions* self) {
    delete self;
}

intptr_t QOpenGLFunctions_3_0_CoreBackend__Functions_IsVertexArray(const QOpenGLFunctions_3_0_CoreBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->IsVertexArray);
}

void QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsVertexArray(QOpenGLFunctions_3_0_CoreBackend__Functions* self, intptr_t isVertexArray) {
    auto isVertexArray_func = reinterpret_cast<GLboolean (*)(GLuint)>(isVertexArray);
    self->IsVertexArray = isVertexArray_func;
}

intptr_t QOpenGLFunctions_3_0_CoreBackend__Functions_IsFramebuffer(const QOpenGLFunctions_3_0_CoreBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->IsFramebuffer);
}

void QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsFramebuffer(QOpenGLFunctions_3_0_CoreBackend__Functions* self, intptr_t isFramebuffer) {
    auto isFramebuffer_func = reinterpret_cast<GLboolean (*)(GLuint)>(isFramebuffer);
    self->IsFramebuffer = isFramebuffer_func;
}

intptr_t QOpenGLFunctions_3_0_CoreBackend__Functions_IsRenderbuffer(const QOpenGLFunctions_3_0_CoreBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->IsRenderbuffer);
}

void QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsRenderbuffer(QOpenGLFunctions_3_0_CoreBackend__Functions* self, intptr_t isRenderbuffer) {
    auto isRenderbuffer_func = reinterpret_cast<GLboolean (*)(GLuint)>(isRenderbuffer);
    self->IsRenderbuffer = isRenderbuffer_func;
}

intptr_t QOpenGLFunctions_3_0_CoreBackend__Functions_IsEnabledi(const QOpenGLFunctions_3_0_CoreBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->IsEnabledi);
}

void QOpenGLFunctions_3_0_CoreBackend__Functions_SetIsEnabledi(QOpenGLFunctions_3_0_CoreBackend__Functions* self, intptr_t isEnabledi) {
    auto isEnabledi_func = reinterpret_cast<GLboolean (*)(GLenum, GLuint)>(isEnabledi);
    self->IsEnabledi = isEnabledi_func;
}

void QOpenGLFunctions_3_0_CoreBackend__Functions_Delete(QOpenGLFunctions_3_0_CoreBackend__Functions* self) {
    delete self;
}

intptr_t QOpenGLFunctions_3_3_CoreBackend__Functions_IsSampler(const QOpenGLFunctions_3_3_CoreBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->IsSampler);
}

void QOpenGLFunctions_3_3_CoreBackend__Functions_SetIsSampler(QOpenGLFunctions_3_3_CoreBackend__Functions* self, intptr_t isSampler) {
    auto isSampler_func = reinterpret_cast<GLboolean (*)(GLuint)>(isSampler);
    self->IsSampler = isSampler_func;
}

void QOpenGLFunctions_3_3_CoreBackend__Functions_Delete(QOpenGLFunctions_3_3_CoreBackend__Functions* self) {
    delete self;
}

intptr_t QOpenGLFunctions_4_0_CoreBackend__Functions_IsTransformFeedback(const QOpenGLFunctions_4_0_CoreBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->IsTransformFeedback);
}

void QOpenGLFunctions_4_0_CoreBackend__Functions_SetIsTransformFeedback(QOpenGLFunctions_4_0_CoreBackend__Functions* self, intptr_t isTransformFeedback) {
    auto isTransformFeedback_func = reinterpret_cast<GLboolean (*)(GLuint)>(isTransformFeedback);
    self->IsTransformFeedback = isTransformFeedback_func;
}

void QOpenGLFunctions_4_0_CoreBackend__Functions_Delete(QOpenGLFunctions_4_0_CoreBackend__Functions* self) {
    delete self;
}

intptr_t QOpenGLFunctions_4_1_CoreBackend__Functions_IsProgramPipeline(const QOpenGLFunctions_4_1_CoreBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->IsProgramPipeline);
}

void QOpenGLFunctions_4_1_CoreBackend__Functions_SetIsProgramPipeline(QOpenGLFunctions_4_1_CoreBackend__Functions* self, intptr_t isProgramPipeline) {
    auto isProgramPipeline_func = reinterpret_cast<GLboolean (*)(GLuint)>(isProgramPipeline);
    self->IsProgramPipeline = isProgramPipeline_func;
}

void QOpenGLFunctions_4_1_CoreBackend__Functions_Delete(QOpenGLFunctions_4_1_CoreBackend__Functions* self) {
    delete self;
}

intptr_t QOpenGLFunctions_4_5_CoreBackend__Functions_UnmapNamedBuffer(const QOpenGLFunctions_4_5_CoreBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->UnmapNamedBuffer);
}

void QOpenGLFunctions_4_5_CoreBackend__Functions_SetUnmapNamedBuffer(QOpenGLFunctions_4_5_CoreBackend__Functions* self, intptr_t unmapNamedBuffer) {
    auto unmapNamedBuffer_func = reinterpret_cast<GLboolean (*)(GLuint)>(unmapNamedBuffer);
    self->UnmapNamedBuffer = unmapNamedBuffer_func;
}

void QOpenGLFunctions_4_5_CoreBackend__Functions_Delete(QOpenGLFunctions_4_5_CoreBackend__Functions* self) {
    delete self;
}

intptr_t QOpenGLFunctions_1_0_DeprecatedBackend__Functions_IsList(const QOpenGLFunctions_1_0_DeprecatedBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->IsList);
}

void QOpenGLFunctions_1_0_DeprecatedBackend__Functions_SetIsList(QOpenGLFunctions_1_0_DeprecatedBackend__Functions* self, intptr_t isList) {
    auto isList_func = reinterpret_cast<GLboolean (*)(GLuint)>(isList);
    self->IsList = isList_func;
}

intptr_t QOpenGLFunctions_1_0_DeprecatedBackend__Functions_RenderMode(const QOpenGLFunctions_1_0_DeprecatedBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->RenderMode);
}

void QOpenGLFunctions_1_0_DeprecatedBackend__Functions_SetRenderMode(QOpenGLFunctions_1_0_DeprecatedBackend__Functions* self, intptr_t renderMode) {
    auto renderMode_func = reinterpret_cast<GLint (*)(GLenum)>(renderMode);
    self->RenderMode = renderMode_func;
}

intptr_t QOpenGLFunctions_1_0_DeprecatedBackend__Functions_GenLists(const QOpenGLFunctions_1_0_DeprecatedBackend__Functions* self) {
    return reinterpret_cast<intptr_t>(self->GenLists);
}

void QOpenGLFunctions_1_0_DeprecatedBackend__Functions_SetGenLists(QOpenGLFunctions_1_0_DeprecatedBackend__Functions* self, intptr_t genLists) {
    auto genLists_func = reinterpret_cast<GLuint (*)(GLsizei)>(genLists);
    self->GenLists = genLists_func;
}

void QOpenGLFunctions_1_0_DeprecatedBackend__Functions_Delete(QOpenGLFunctions_1_0_DeprecatedBackend__Functions* self) {
    delete self;
}
