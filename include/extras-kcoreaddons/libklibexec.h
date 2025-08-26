#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKLIBEXEC_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKLIBEXEC_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KLibexec KLibexec;
#endif

libqt_string KLibexec_PathFromAddress(const libqt_string param1, void* param2);
libqt_list /* of libqt_string */ KLibexec_PathCandidates(const libqt_string param1);
libqt_string KLibexec_Path(const libqt_string param1);
libqt_list /* of libqt_string */ KLibexec_KdeFrameworksPaths(const libqt_string param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
