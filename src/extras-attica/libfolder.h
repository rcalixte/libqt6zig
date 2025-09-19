#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBFOLDER_H
#define SRC_EXTRAS_ATTICAC_LIBFOLDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Folder)
typedef Attica::Folder Attica__Folder;
#endif
#else
typedef struct Attica__Folder Attica__Folder;
#endif

Attica__Folder* Attica__Folder_new();
Attica__Folder* Attica__Folder_new2(const Attica__Folder* other);
void Attica__Folder_OperatorAssign(Attica__Folder* self, const Attica__Folder* other);
void Attica__Folder_SetId(Attica__Folder* self, const libqt_string id);
libqt_string Attica__Folder_Id(const Attica__Folder* self);
void Attica__Folder_SetName(Attica__Folder* self, const libqt_string name);
libqt_string Attica__Folder_Name(const Attica__Folder* self);
void Attica__Folder_SetMessageCount(Attica__Folder* self, int messageCount);
int Attica__Folder_MessageCount(const Attica__Folder* self);
void Attica__Folder_SetType(Attica__Folder* self, const libqt_string typeVal);
libqt_string Attica__Folder_Type(const Attica__Folder* self);
bool Attica__Folder_IsValid(const Attica__Folder* self);
void Attica__Folder_Delete(Attica__Folder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
