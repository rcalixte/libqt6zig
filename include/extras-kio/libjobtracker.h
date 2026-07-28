#pragma once
#ifndef EXTRAS_KIO_LIBJOBTRACKER_H
#define EXTRAS_KIO_LIBJOBTRACKER_H

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
void KIO_SetJobTracker(KJobTrackerInterface* tracker);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
