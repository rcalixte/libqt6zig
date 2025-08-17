#pragma once
#ifndef SRCC_LIBQPDFOUTPUTINTENT_H
#define SRCC_LIBQPDFOUTPUTINTENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QColorSpace QColorSpace;
typedef struct QPdfOutputIntent QPdfOutputIntent;
typedef struct QUrl QUrl;
#endif

QPdfOutputIntent* QPdfOutputIntent_new();
QPdfOutputIntent* QPdfOutputIntent_new2(const QPdfOutputIntent* other);
void QPdfOutputIntent_OperatorAssign(QPdfOutputIntent* self, const QPdfOutputIntent* other);
void QPdfOutputIntent_Swap(QPdfOutputIntent* self, QPdfOutputIntent* other);
libqt_string QPdfOutputIntent_OutputConditionIdentifier(const QPdfOutputIntent* self);
void QPdfOutputIntent_SetOutputConditionIdentifier(QPdfOutputIntent* self, const libqt_string identifier);
libqt_string QPdfOutputIntent_OutputCondition(const QPdfOutputIntent* self);
void QPdfOutputIntent_SetOutputCondition(QPdfOutputIntent* self, const libqt_string condition);
QUrl* QPdfOutputIntent_RegistryName(const QPdfOutputIntent* self);
void QPdfOutputIntent_SetRegistryName(QPdfOutputIntent* self, const QUrl* name);
QColorSpace* QPdfOutputIntent_OutputProfile(const QPdfOutputIntent* self);
void QPdfOutputIntent_SetOutputProfile(QPdfOutputIntent* self, const QColorSpace* profile);
void QPdfOutputIntent_Delete(QPdfOutputIntent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
