#pragma once
#ifndef SRC_EXTRAS_KNOTIFICATIONSC_LIBKNOTIFICATIONPERMISSION_H
#define SRC_EXTRAS_KNOTIFICATIONSC_LIBKNOTIFICATIONPERMISSION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KNotificationPermission KNotificationPermission;
typedef struct QObject QObject;
#endif

int KNotificationPermission_CheckPermission();
void KNotificationPermission_RequestPermission(QObject* param1, intptr_t param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
