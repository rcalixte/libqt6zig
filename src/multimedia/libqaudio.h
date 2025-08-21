#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQAUDIO_H
#define SRC_MULTIMEDIAC_LIBQAUDIO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAudio QAudio;
#endif

float QAudio_ConvertVolume(float param1, int param2, int param3);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
