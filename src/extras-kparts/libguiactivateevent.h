#pragma once
#ifndef SRC_EXTRAS_KPARTSC_LIBGUIACTIVATEEVENT_H
#define SRC_EXTRAS_KPARTSC_LIBGUIACTIVATEEVENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KParts__GUIActivateEvent)
typedef KParts::GUIActivateEvent KParts__GUIActivateEvent;
#endif
#else
typedef struct KParts__GUIActivateEvent KParts__GUIActivateEvent;
typedef struct QEvent QEvent;
#endif

KParts__GUIActivateEvent* KParts__GUIActivateEvent_new(bool activated);
bool KParts__GUIActivateEvent_Activated(const KParts__GUIActivateEvent* self);
bool KParts__GUIActivateEvent_Test(const QEvent* event);
void KParts__GUIActivateEvent_SetAccepted(KParts__GUIActivateEvent* self, bool accepted);
void KParts__GUIActivateEvent_OnSetAccepted(KParts__GUIActivateEvent* self, intptr_t slot);
void KParts__GUIActivateEvent_QBaseSetAccepted(KParts__GUIActivateEvent* self, bool accepted);
QEvent* KParts__GUIActivateEvent_Clone(const KParts__GUIActivateEvent* self);
void KParts__GUIActivateEvent_OnClone(const KParts__GUIActivateEvent* self, intptr_t slot);
QEvent* KParts__GUIActivateEvent_QBaseClone(const KParts__GUIActivateEvent* self);
void KParts__GUIActivateEvent_Delete(KParts__GUIActivateEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
