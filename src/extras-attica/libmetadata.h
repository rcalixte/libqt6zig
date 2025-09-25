#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBMETADATA_H
#define SRC_EXTRAS_ATTICAC_LIBMETADATA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__Metadata)
typedef Attica::Metadata Attica__Metadata;
#endif
#else
typedef struct Attica__Metadata Attica__Metadata;
#endif

Attica__Metadata* Attica__Metadata_new();
Attica__Metadata* Attica__Metadata_new2(const Attica__Metadata* other);
void Attica__Metadata_OperatorAssign(Attica__Metadata* self, const Attica__Metadata* other);
int Attica__Metadata_Error(const Attica__Metadata* self);
void Attica__Metadata_SetError(Attica__Metadata* self, int errorVal);
int Attica__Metadata_StatusCode(const Attica__Metadata* self);
void Attica__Metadata_SetStatusCode(Attica__Metadata* self, int code);
libqt_string Attica__Metadata_StatusString(const Attica__Metadata* self);
void Attica__Metadata_SetStatusString(Attica__Metadata* self, const libqt_string status);
libqt_string Attica__Metadata_Message(Attica__Metadata* self);
void Attica__Metadata_SetMessage(Attica__Metadata* self, const libqt_string message);
int Attica__Metadata_TotalItems(Attica__Metadata* self);
void Attica__Metadata_SetTotalItems(Attica__Metadata* self, int items);
int Attica__Metadata_ItemsPerPage(Attica__Metadata* self);
void Attica__Metadata_SetItemsPerPage(Attica__Metadata* self, int itemsPerPage);
libqt_string Attica__Metadata_ResultingId(Attica__Metadata* self);
void Attica__Metadata_SetResultingId(Attica__Metadata* self, const libqt_string id);
libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ Attica__Metadata_Headers(const Attica__Metadata* self);
void Attica__Metadata_Delete(Attica__Metadata* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
