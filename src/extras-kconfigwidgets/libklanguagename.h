#pragma once
#ifndef SRC_EXTRAS_KCONFIGWIDGETSC_LIBKLANGUAGENAME_H
#define SRC_EXTRAS_KCONFIGWIDGETSC_LIBKLANGUAGENAME_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KLanguageName KLanguageName;
#endif

libqt_string KLanguageName_NameForCode(const libqt_string code);
libqt_string KLanguageName_NameForCodeInLocale(const libqt_string code, const libqt_string outputLocale);
libqt_list /* of libqt_string */ KLanguageName_AllLanguageCodes();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
