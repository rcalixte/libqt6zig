#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKUSERTIMESTAMP_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBKUSERTIMESTAMP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KUserTimestamp KUserTimestamp;
#endif

unsigned long KUserTimestamp_UserTimestamp();
void KUserTimestamp_UpdateUserTimestamp(unsigned long param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
