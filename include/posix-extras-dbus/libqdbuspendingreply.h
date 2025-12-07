#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSPENDINGREPLY_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSPENDINGREPLY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDBusPendingCall QDBusPendingCall;
typedef struct QDBusPendingReplyBase QDBusPendingReplyBase;
#endif

QDBusPendingReplyBase* QDBusPendingReplyBase_new(const QDBusPendingReplyBase* param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
