#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBOPENURLEVENT_H
#define SRC_EXTRAS_KPARTSC_LIBOPENURLEVENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KParts::OpenUrlArguments KParts__OpenUrlArguments;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__OpenUrlEvent)
typedef KParts::OpenUrlEvent KParts__OpenUrlEvent;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__ReadOnlyPart)
typedef KParts::ReadOnlyPart KParts__ReadOnlyPart;
#endif
#else
typedef struct KParts__OpenUrlArguments KParts__OpenUrlArguments;
typedef struct KParts__OpenUrlEvent KParts__OpenUrlEvent;
typedef struct KParts__ReadOnlyPart KParts__ReadOnlyPart;
typedef struct QEvent QEvent;
typedef struct QUrl QUrl;
#endif

KParts__OpenUrlEvent* KParts__OpenUrlEvent_new(KParts__ReadOnlyPart* part, const QUrl* url);
KParts__OpenUrlEvent* KParts__OpenUrlEvent_new2(KParts__ReadOnlyPart* part, const QUrl* url, const KParts__OpenUrlArguments* args);
KParts__ReadOnlyPart* KParts__OpenUrlEvent_Part(const KParts__OpenUrlEvent* self);
QUrl* KParts__OpenUrlEvent_Url(const KParts__OpenUrlEvent* self);
KParts__OpenUrlArguments* KParts__OpenUrlEvent_Arguments(const KParts__OpenUrlEvent* self);
bool KParts__OpenUrlEvent_Test(const QEvent* event);
void KParts__OpenUrlEvent_SetAccepted(KParts__OpenUrlEvent* self, bool accepted);
void KParts__OpenUrlEvent_OnSetAccepted(KParts__OpenUrlEvent* self, intptr_t slot);
void KParts__OpenUrlEvent_QBaseSetAccepted(KParts__OpenUrlEvent* self, bool accepted);
QEvent* KParts__OpenUrlEvent_Clone(const KParts__OpenUrlEvent* self);
void KParts__OpenUrlEvent_OnClone(const KParts__OpenUrlEvent* self, intptr_t slot);
QEvent* KParts__OpenUrlEvent_QBaseClone(const KParts__OpenUrlEvent* self);
void KParts__OpenUrlEvent_Delete(KParts__OpenUrlEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
