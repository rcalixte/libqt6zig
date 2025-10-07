#pragma once
#ifndef SRC_EXTRAS_KCRASHC_LIBKCRASH_H
#define SRC_EXTRAS_KCRASHC_LIBKCRASH_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCrash KCrash;
typedef struct QVariant QVariant;
#endif

void KCrash_Initialize();
void KCrash_DefaultCrashHandler(int param1);
void KCrash_SetFlags(int param1);
void KCrash_SetDrKonqiEnabled(bool param1);
bool KCrash_IsDrKonqiEnabled();
void KCrash_SetErrorMessage(const libqt_string param1);
void KCrash_SetErrorTags(const libqt_map /* of libqt_string to libqt_string */ param1);
void KCrash_SetErrorExtraData(const libqt_map /* of libqt_string to libqt_string */ param1);
void KCrash_SetGPUData(const libqt_map /* of libqt_string to QVariant* */ param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
