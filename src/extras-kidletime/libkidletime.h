#pragma once
#ifndef SRC_EXTRAS_KIDLETIMEC_LIBKIDLETIME_H
#define SRC_EXTRAS_KIDLETIMEC_LIBKIDLETIME_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KIdleTime KIdleTime;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* KIdleTime_MetaObject(const KIdleTime* self);
void* KIdleTime_Metacast(KIdleTime* self, const char* param1);
int KIdleTime_Metacall(KIdleTime* self, int param1, int param2, void** param3);
KIdleTime* KIdleTime_Instance();
int KIdleTime_IdleTime(const KIdleTime* self);
libqt_map /* of int to int */ KIdleTime_IdleTimeouts(const KIdleTime* self);
void KIdleTime_SimulateUserActivity(KIdleTime* self);
int KIdleTime_AddIdleTimeout(KIdleTime* self, int msec);
int KIdleTime_AddIdleTimeout2(KIdleTime* self, int64_t msec);
void KIdleTime_RemoveIdleTimeout(KIdleTime* self, int identifier);
void KIdleTime_RemoveAllIdleTimeouts(KIdleTime* self);
void KIdleTime_CatchNextResumeEvent(KIdleTime* self);
void KIdleTime_StopCatchingResumeEvent(KIdleTime* self);
void KIdleTime_ResumingFromIdle(KIdleTime* self);
void KIdleTime_Connect_ResumingFromIdle(KIdleTime* self, intptr_t slot);
void KIdleTime_TimeoutReached(KIdleTime* self, int identifier, int msec);
void KIdleTime_Connect_TimeoutReached(KIdleTime* self, intptr_t slot);
void KIdleTime_Delete(KIdleTime* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
