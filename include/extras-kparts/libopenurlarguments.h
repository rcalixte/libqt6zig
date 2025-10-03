#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBOPENURLARGUMENTS_H
#define SRC_EXTRAS_KPARTSC_LIBOPENURLARGUMENTS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KParts::OpenUrlArguments KParts__OpenUrlArguments;
#else
typedef struct KParts__OpenUrlArguments KParts__OpenUrlArguments;
#endif

KParts__OpenUrlArguments* KParts__OpenUrlArguments_new();
KParts__OpenUrlArguments* KParts__OpenUrlArguments_new2(const KParts__OpenUrlArguments* other);
void KParts__OpenUrlArguments_OperatorAssign(KParts__OpenUrlArguments* self, const KParts__OpenUrlArguments* other);
bool KParts__OpenUrlArguments_Reload(const KParts__OpenUrlArguments* self);
void KParts__OpenUrlArguments_SetReload(KParts__OpenUrlArguments* self, bool b);
int KParts__OpenUrlArguments_XOffset(const KParts__OpenUrlArguments* self);
void KParts__OpenUrlArguments_SetXOffset(KParts__OpenUrlArguments* self, int x);
int KParts__OpenUrlArguments_YOffset(const KParts__OpenUrlArguments* self);
void KParts__OpenUrlArguments_SetYOffset(KParts__OpenUrlArguments* self, int y);
libqt_string KParts__OpenUrlArguments_MimeType(const KParts__OpenUrlArguments* self);
void KParts__OpenUrlArguments_SetMimeType(KParts__OpenUrlArguments* self, const libqt_string mime);
bool KParts__OpenUrlArguments_ActionRequestedByUser(const KParts__OpenUrlArguments* self);
void KParts__OpenUrlArguments_SetActionRequestedByUser(KParts__OpenUrlArguments* self, bool userRequested);
libqt_map /* of libqt_string to libqt_string */ KParts__OpenUrlArguments_MetaData(KParts__OpenUrlArguments* self);
libqt_map /* of libqt_string to libqt_string */ KParts__OpenUrlArguments_MetaData2(const KParts__OpenUrlArguments* self);
void KParts__OpenUrlArguments_Delete(KParts__OpenUrlArguments* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
