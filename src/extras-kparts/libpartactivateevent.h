#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBPARTACTIVATEEVENT_H
#define SRC_EXTRAS_KPARTSC_LIBPARTACTIVATEEVENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__Part)
typedef KParts::Part KParts__Part;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__PartActivateEvent)
typedef KParts::PartActivateEvent KParts__PartActivateEvent;
#endif
#else
typedef struct KParts__Part KParts__Part;
typedef struct KParts__PartActivateEvent KParts__PartActivateEvent;
typedef struct QEvent QEvent;
typedef struct QWidget QWidget;
#endif

KParts__PartActivateEvent* KParts__PartActivateEvent_new(bool activated, KParts__Part* part, QWidget* widget);
bool KParts__PartActivateEvent_Activated(const KParts__PartActivateEvent* self);
KParts__Part* KParts__PartActivateEvent_Part(const KParts__PartActivateEvent* self);
QWidget* KParts__PartActivateEvent_Widget(const KParts__PartActivateEvent* self);
bool KParts__PartActivateEvent_Test(const QEvent* event);
void KParts__PartActivateEvent_SetAccepted(KParts__PartActivateEvent* self, bool accepted);
void KParts__PartActivateEvent_OnSetAccepted(KParts__PartActivateEvent* self, intptr_t slot);
void KParts__PartActivateEvent_QBaseSetAccepted(KParts__PartActivateEvent* self, bool accepted);
QEvent* KParts__PartActivateEvent_Clone(const KParts__PartActivateEvent* self);
void KParts__PartActivateEvent_OnClone(const KParts__PartActivateEvent* self, intptr_t slot);
QEvent* KParts__PartActivateEvent_QBaseClone(const KParts__PartActivateEvent* self);
void KParts__PartActivateEvent_Delete(KParts__PartActivateEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
