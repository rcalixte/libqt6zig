#pragma once
#ifndef FOSS_EXTRAS_KWINDOWSYSTEM_LIBKUSERTIMESTAMP_H
#define FOSS_EXTRAS_KWINDOWSYSTEM_LIBKUSERTIMESTAMP_H

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
void KUserTimestamp_UpdateUserTimestamp(unsigned long time);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
