#pragma once
#ifndef SRCC_LIBQANYSTRINGVIEW_H
#define SRCC_LIBQANYSTRINGVIEW_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChar QChar;
#endif

int QAnyStringView_Compare(libqt_string lhs, libqt_string rhs);
bool QAnyStringView_Equal(libqt_string lhs, libqt_string rhs);
int QAnyStringView_Compare3(libqt_string lhs, libqt_string rhs, int cs);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
