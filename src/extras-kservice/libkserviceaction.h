#pragma once
#ifndef SRC_EXTRAS_KSERVICEC_LIBKSERVICEACTION_H
#define SRC_EXTRAS_KSERVICEC_LIBKSERVICEACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KServiceAction KServiceAction;
typedef struct QVariant QVariant;
#endif

KServiceAction* KServiceAction_new();
KServiceAction* KServiceAction_new2(const KServiceAction* other);
void KServiceAction_OperatorAssign(KServiceAction* self, const KServiceAction* other);
void KServiceAction_SetData(KServiceAction* self, const QVariant* userData);
QVariant* KServiceAction_Data(const KServiceAction* self);
libqt_string KServiceAction_Name(const KServiceAction* self);
libqt_string KServiceAction_Text(const KServiceAction* self);
libqt_string KServiceAction_Icon(const KServiceAction* self);
libqt_string KServiceAction_Exec(const KServiceAction* self);
bool KServiceAction_NoDisplay(const KServiceAction* self);
bool KServiceAction_IsSeparator(const KServiceAction* self);
void KServiceAction_Delete(KServiceAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
