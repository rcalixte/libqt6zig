#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBBUILDSERVICEJOB_H
#define SRC_EXTRAS_ATTICAC_LIBBUILDSERVICEJOB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__BuildServiceJob)
typedef Attica::BuildServiceJob Attica__BuildServiceJob;
#endif
#else
typedef struct Attica__BuildServiceJob Attica__BuildServiceJob;
#endif

Attica__BuildServiceJob* Attica__BuildServiceJob_new();
Attica__BuildServiceJob* Attica__BuildServiceJob_new2(const Attica__BuildServiceJob* other);
void Attica__BuildServiceJob_OperatorAssign(Attica__BuildServiceJob* self, const Attica__BuildServiceJob* other);
void Attica__BuildServiceJob_SetId(Attica__BuildServiceJob* self, const libqt_string id);
libqt_string Attica__BuildServiceJob_Id(const Attica__BuildServiceJob* self);
void Attica__BuildServiceJob_SetName(Attica__BuildServiceJob* self, const libqt_string name);
libqt_string Attica__BuildServiceJob_Name(const Attica__BuildServiceJob* self);
void Attica__BuildServiceJob_SetUrl(Attica__BuildServiceJob* self, const libqt_string url);
libqt_string Attica__BuildServiceJob_Url(const Attica__BuildServiceJob* self);
void Attica__BuildServiceJob_SetProjectId(Attica__BuildServiceJob* self, const libqt_string projectId);
libqt_string Attica__BuildServiceJob_ProjectId(const Attica__BuildServiceJob* self);
void Attica__BuildServiceJob_SetBuildServiceId(Attica__BuildServiceJob* self, const libqt_string buildServiceId);
libqt_string Attica__BuildServiceJob_BuildServiceId(const Attica__BuildServiceJob* self);
void Attica__BuildServiceJob_SetMessage(Attica__BuildServiceJob* self, const libqt_string message);
libqt_string Attica__BuildServiceJob_Message(const Attica__BuildServiceJob* self);
void Attica__BuildServiceJob_SetTarget(Attica__BuildServiceJob* self, const libqt_string target);
libqt_string Attica__BuildServiceJob_Target(const Attica__BuildServiceJob* self);
void Attica__BuildServiceJob_SetProgress(Attica__BuildServiceJob* self, const double progress);
double Attica__BuildServiceJob_Progress(const Attica__BuildServiceJob* self);
void Attica__BuildServiceJob_SetStatus(Attica__BuildServiceJob* self, const int status);
bool Attica__BuildServiceJob_IsRunning(const Attica__BuildServiceJob* self);
bool Attica__BuildServiceJob_IsCompleted(const Attica__BuildServiceJob* self);
bool Attica__BuildServiceJob_IsFailed(const Attica__BuildServiceJob* self);
bool Attica__BuildServiceJob_IsValid(const Attica__BuildServiceJob* self);
void Attica__BuildServiceJob_Delete(Attica__BuildServiceJob* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
