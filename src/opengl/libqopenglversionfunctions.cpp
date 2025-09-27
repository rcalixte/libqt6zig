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

libqt_pair /* tuple of int and int */ QOpenGLVersionStatus_Version(const QOpenGLVersionStatus* self) {
    QPair<int, int> version_ret = self->version;
    // Convert QPair<> from C++ memory to manually-managed C memory
    int* version_first = static_cast<int*>(malloc(sizeof(int)));
    int* version_second = static_cast<int*>(malloc(sizeof(int)));
    *version_first = version_ret.first;
    *version_second = version_ret.second;
    libqt_pair version_out;
    version_out.first = static_cast<void*>(version_first);
    version_out.second = static_cast<void*>(version_second);
    return version_out;
}

void QOpenGLVersionStatus_SetVersion(QOpenGLVersionStatus* self, libqt_pair /* tuple of int and int */ version) {
    QPair<int, int> version_QPair;
    int* version_first = static_cast<int*>(version.first);
    int* version_second = static_cast<int*>(version.second);
    version_QPair.first = static_cast<int>(version_first[0]);
    version_QPair.second = static_cast<int>(version_second[0]);
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

bool QAbstractOpenGLFunctions_InitializeOpenGLFunctions(QAbstractOpenGLFunctions* self) {
    return self->initializeOpenGLFunctions();
}

void QAbstractOpenGLFunctions_Delete(QAbstractOpenGLFunctions* self) {
    delete self;
}
