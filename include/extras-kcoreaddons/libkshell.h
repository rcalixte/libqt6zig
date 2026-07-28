#pragma once
#ifndef EXTRAS_KCOREADDONS_LIBKSHELL_H
#define EXTRAS_KCOREADDONS_LIBKSHELL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KShell KShell;
#endif

libqt_list /* of libqt_string */ KShell_SplitArgs(const libqt_string cmd, int flags, int* err);
libqt_string KShell_JoinArgs(const libqt_list /* of libqt_string */ args);
libqt_string KShell_QuoteArg(const libqt_string arg);
libqt_string KShell_TildeExpand(const libqt_string path);
libqt_string KShell_TildeCollapse(const libqt_string path);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
