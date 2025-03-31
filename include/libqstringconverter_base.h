#pragma once
#ifndef SRCC_LIBQSTRINGCONVERTER_BASE_H
#define SRCC_LIBQSTRINGCONVERTER_BASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QStringConverterBase__State)
typedef QStringConverterBase::State QStringConverterBase__State;
#endif
#else
typedef struct QStringConverter QStringConverter;
typedef struct QStringConverterBase QStringConverterBase;
typedef struct QStringConverterBase__State QStringConverterBase__State;
#endif

#ifdef __cplusplus
typedef QStringConverter::Encoding Encoding;                       // C++ enum
typedef QStringConverterBase::Flag Flag;                           // C++ enum
typedef QStringConverterBase::Flags Flags;                         // C++ QFlags
typedef QStringConverterBase::State::ClearDataFn StateClearDataFn; // C++ QFlags
#else
typedef int Encoding; // C ABI enum
typedef int Flag;     // C ABI enum
typedef int Flags;    // C ABI QFlags
#endif

bool QStringConverter_IsValid(const QStringConverter* self);
void QStringConverter_ResetState(QStringConverter* self);
bool QStringConverter_HasError(const QStringConverter* self);
const char* QStringConverter_Name(const QStringConverter* self);
const char* QStringConverter_NameForEncoding(int e);

QStringConverterBase__State* QStringConverterBase__State_new();
QStringConverterBase__State* QStringConverterBase__State_new2(int f);
void QStringConverterBase__State_Clear(QStringConverterBase__State* self);
void QStringConverterBase__State_Reset(QStringConverterBase__State* self);
void QStringConverterBase__State_Delete(QStringConverterBase__State* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
