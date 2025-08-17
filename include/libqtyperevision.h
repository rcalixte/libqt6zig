#pragma once
#ifndef SRCC_LIBQTYPEREVISION_H
#define SRCC_LIBQTYPEREVISION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QTypeRevision QTypeRevision;
#endif

QTypeRevision* QTypeRevision_new(const QTypeRevision* other);
QTypeRevision* QTypeRevision_new2(QTypeRevision* other);
QTypeRevision* QTypeRevision_new3();
QTypeRevision* QTypeRevision_new4(const QTypeRevision* param1);
void QTypeRevision_CopyAssign(QTypeRevision* self, QTypeRevision* other);
void QTypeRevision_MoveAssign(QTypeRevision* self, QTypeRevision* other);
QTypeRevision* QTypeRevision_Zero();
bool QTypeRevision_HasMajorVersion(const QTypeRevision* self);
unsigned char QTypeRevision_MajorVersion(const QTypeRevision* self);
bool QTypeRevision_HasMinorVersion(const QTypeRevision* self);
unsigned char QTypeRevision_MinorVersion(const QTypeRevision* self);
bool QTypeRevision_IsValid(const QTypeRevision* self);
void QTypeRevision_Delete(QTypeRevision* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
