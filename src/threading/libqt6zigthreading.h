#pragma once
#ifndef SRCC_LIBQT6ZIGTHREADING_H
#define SRCC_LIBQT6ZIGTHREADING_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Direct
void Threading_ExecNow(void* context, intptr_t cb);

// Auto
void Threading_Exec(void* context, intptr_t cb);
void Threading_ExecUnique(void* context, intptr_t cb);
void Threading_ExecOnce(void* context, intptr_t cb);

// Queued
void Threading_Async(void* context, intptr_t cb);
void Threading_AsyncUnique(void* context, intptr_t cb);
void Threading_AsyncOnce(void* context, intptr_t cb);
void Threading_AsyncUniqueOnce(void* context, intptr_t cb);

// Blocking
void Threading_Sync(void* context, intptr_t cb);
void Threading_SyncUnique(void* context, intptr_t cb);
void Threading_SyncOnce(void* context, intptr_t cb);
void Threading_SyncUniqueOnce(void* context, intptr_t cb);

#ifdef __cplusplus
}
#endif

#endif
