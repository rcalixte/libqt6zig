#pragma once
#ifndef SRC_PDFC_LIBQPDFSELECTION_H
#define SRC_PDFC_LIBQPDFSELECTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPdfSelection QPdfSelection;
typedef struct QRectF QRectF;
#endif

#ifdef __cplusplus
typedef QPdfSelection::QtGadgetHelper QtGadgetHelper; // C++ QFlags
#else
typedef void QtGadgetHelper; // C ABI QFlags
#endif

QPdfSelection* QPdfSelection_new(const QPdfSelection* other);
void QPdfSelection_OperatorAssign(QPdfSelection* self, const QPdfSelection* other);
void QPdfSelection_Swap(QPdfSelection* self, QPdfSelection* other);
bool QPdfSelection_IsValid(const QPdfSelection* self);
libqt_string QPdfSelection_Text(const QPdfSelection* self);
QRectF* QPdfSelection_BoundingRectangle(const QPdfSelection* self);
int QPdfSelection_StartIndex(const QPdfSelection* self);
int QPdfSelection_EndIndex(const QPdfSelection* self);
void QPdfSelection_CopyToClipboard(const QPdfSelection* self);
void QPdfSelection_CopyToClipboard1(const QPdfSelection* self, int mode);
void QPdfSelection_Delete(QPdfSelection* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
