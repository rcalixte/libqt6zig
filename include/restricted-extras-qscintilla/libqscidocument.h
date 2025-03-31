#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCIDOCUMENT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCIDOCUMENT_H

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
typedef struct QsciDocument QsciDocument;
#endif

QsciDocument* QsciDocument_new();
QsciDocument* QsciDocument_new2(QsciDocument* param1);
void QsciDocument_OperatorAssign(QsciDocument* self, QsciDocument* param1);
void QsciDocument_Delete(QsciDocument* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
