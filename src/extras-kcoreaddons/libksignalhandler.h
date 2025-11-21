#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKSIGNALHANDLER_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKSIGNALHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KSignalHandler KSignalHandler;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* KSignalHandler_MetaObject(const KSignalHandler* self);
void* KSignalHandler_Metacast(KSignalHandler* self, const char* param1);
int KSignalHandler_Metacall(KSignalHandler* self, int param1, int param2, void** param3);
void KSignalHandler_WatchSignal(KSignalHandler* self, int signal);
KSignalHandler* KSignalHandler_Self();
void KSignalHandler_SignalReceived(KSignalHandler* self, int signal);
void KSignalHandler_Connect_SignalReceived(KSignalHandler* self, intptr_t slot);
void KSignalHandler_Delete(KSignalHandler* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
