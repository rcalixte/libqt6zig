#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCIDOCUMENT_H
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCIDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>

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
QsciDocument* QsciDocument_new2(const QsciDocument* param1);
void QsciDocument_OperatorAssign(QsciDocument* self, const QsciDocument* param1);
void QsciDocument_Delete(QsciDocument* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
