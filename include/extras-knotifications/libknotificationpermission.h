#pragma once
#ifndef EXTRAS_KNOTIFICATIONS_LIBKNOTIFICATIONPERMISSION_H
#define EXTRAS_KNOTIFICATIONS_LIBKNOTIFICATIONPERMISSION_H

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
void KNotificationPermission_RequestPermission(QObject* context, intptr_t callback);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
