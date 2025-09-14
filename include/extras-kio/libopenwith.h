#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBOPENWITH_H
#define SRC_EXTRAS_KIOC_LIBOPENWITH_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__OpenWith)
typedef KIO::OpenWith KIO__OpenWith;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__OpenWith__AcceptResult)
typedef KIO::OpenWith::AcceptResult KIO__OpenWith__AcceptResult;
#endif
#else
typedef struct KIO__OpenWith KIO__OpenWith;
typedef struct KIO__OpenWith__AcceptResult KIO__OpenWith__AcceptResult;
#endif

KIO__OpenWith* KIO__OpenWith_new(const KIO__OpenWith* other);
KIO__OpenWith* KIO__OpenWith_new2(KIO__OpenWith* other);
void KIO__OpenWith_CopyAssign(KIO__OpenWith* self, KIO__OpenWith* other);
void KIO__OpenWith_MoveAssign(KIO__OpenWith* self, KIO__OpenWith* other);
void KIO__OpenWith_Delete(KIO__OpenWith* self);

KIO__OpenWith__AcceptResult* KIO__OpenWith__AcceptResult_new(const KIO__OpenWith__AcceptResult* param1);
bool KIO__OpenWith__AcceptResult_Accept(const KIO__OpenWith__AcceptResult* self);
void KIO__OpenWith__AcceptResult_SetAccept(KIO__OpenWith__AcceptResult* self, bool accept);
libqt_string KIO__OpenWith__AcceptResult_Error(const KIO__OpenWith__AcceptResult* self);
void KIO__OpenWith__AcceptResult_SetError(KIO__OpenWith__AcceptResult* self, libqt_string error);
bool KIO__OpenWith__AcceptResult_RebuildSycoca(const KIO__OpenWith__AcceptResult* self);
void KIO__OpenWith__AcceptResult_SetRebuildSycoca(KIO__OpenWith__AcceptResult* self, bool rebuildSycoca);
void KIO__OpenWith__AcceptResult_OperatorAssign(KIO__OpenWith__AcceptResult* self, const KIO__OpenWith__AcceptResult* param1);
void KIO__OpenWith__AcceptResult_Delete(KIO__OpenWith__AcceptResult* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
