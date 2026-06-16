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
void KCrash_DefaultCrashHandler(int signal);
void KCrash_SetCrashHandler(intptr_t handler);
intptr_t KCrash_CrashHandler();
void KCrash_SetEmergencySaveFunction(intptr_t saveFunction);
intptr_t KCrash_EmergencySaveFunction();
void KCrash_SetFlags(int flags);
void KCrash_SetDrKonqiEnabled(bool enabled);
bool KCrash_IsDrKonqiEnabled();
void KCrash_SetErrorMessage(const libqt_string message);
void KCrash_SetErrorTags(const libqt_map /* of libqt_string to libqt_string */ details);
void KCrash_SetErrorExtraData(const libqt_map /* of libqt_string to libqt_string */ details);
void KCrash_SetGPUData(const libqt_map /* of libqt_string to QVariant* */ data);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
