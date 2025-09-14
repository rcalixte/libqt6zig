#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBJOBTRACKER_H
#define SRC_EXTRAS_KIOC_LIBJOBTRACKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KIO KIO;
typedef struct KJobTrackerInterface KJobTrackerInterface;
#endif

KJobTrackerInterface* KIO_GetJobTracker();
void KIO_SetJobTracker(KJobTrackerInterface* param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
