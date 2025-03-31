#pragma once
#ifndef SRCC_LIBQSTRINGTOKENIZER_H
#define SRCC_LIBQSTRINGTOKENIZER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QStringTokenizerBaseBase QStringTokenizerBaseBase;
#endif

QStringTokenizerBaseBase* QStringTokenizerBaseBase_new(QStringTokenizerBaseBase* other);
QStringTokenizerBaseBase* QStringTokenizerBaseBase_new2(QStringTokenizerBaseBase* param1);
void QStringTokenizerBaseBase_CopyAssign(QStringTokenizerBaseBase* self, QStringTokenizerBaseBase* other);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
