#pragma once
#ifndef MULTIMEDIA_LIBQAUDIO_H
#define MULTIMEDIA_LIBQAUDIO_H

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

float QAudio_ConvertVolume(float volume, int from, int to);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
