#pragma once
#ifndef SRC_EXTRAS_KCOLORSCHEMEC_LIBKSTATEFULBRUSH_H
#define SRC_EXTRAS_KCOLORSCHEMEC_LIBKSTATEFULBRUSH_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KStatefulBrush KStatefulBrush;
typedef struct QBrush QBrush;
typedef struct QPalette QPalette;
#endif

KStatefulBrush* KStatefulBrush_new();
KStatefulBrush* KStatefulBrush_new2(int param1, int param2);
KStatefulBrush* KStatefulBrush_new3(int param1, int param2);
KStatefulBrush* KStatefulBrush_new4(int param1, int param2);
KStatefulBrush* KStatefulBrush_new5(const QBrush* param1);
KStatefulBrush* KStatefulBrush_new6(const QBrush* param1, const QBrush* background);
KStatefulBrush* KStatefulBrush_new7(const KStatefulBrush* param1);
void KStatefulBrush_OperatorAssign(KStatefulBrush* self, const KStatefulBrush* param1);
QBrush* KStatefulBrush_Brush(const KStatefulBrush* self, int param1);
QBrush* KStatefulBrush_Brush2(const KStatefulBrush* self, const QPalette* param1);
void KStatefulBrush_Delete(KStatefulBrush* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
