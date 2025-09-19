#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBBUILDSERVICEJOBOUTPUT_H
#define SRC_EXTRAS_ATTICAC_LIBBUILDSERVICEJOBOUTPUT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__BuildServiceJobOutput)
typedef Attica::BuildServiceJobOutput Attica__BuildServiceJobOutput;
#endif
#else
typedef struct Attica__BuildServiceJobOutput Attica__BuildServiceJobOutput;
#endif

Attica__BuildServiceJobOutput* Attica__BuildServiceJobOutput_new();
Attica__BuildServiceJobOutput* Attica__BuildServiceJobOutput_new2(const Attica__BuildServiceJobOutput* other);
void Attica__BuildServiceJobOutput_OperatorAssign(Attica__BuildServiceJobOutput* self, const Attica__BuildServiceJobOutput* other);
void Attica__BuildServiceJobOutput_SetOutput(Attica__BuildServiceJobOutput* self, const libqt_string output);
libqt_string Attica__BuildServiceJobOutput_Output(const Attica__BuildServiceJobOutput* self);
bool Attica__BuildServiceJobOutput_IsRunning(const Attica__BuildServiceJobOutput* self);
bool Attica__BuildServiceJobOutput_IsCompleted(const Attica__BuildServiceJobOutput* self);
bool Attica__BuildServiceJobOutput_IsFailed(const Attica__BuildServiceJobOutput* self);
bool Attica__BuildServiceJobOutput_IsValid(const Attica__BuildServiceJobOutput* self);
void Attica__BuildServiceJobOutput_Delete(Attica__BuildServiceJobOutput* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
