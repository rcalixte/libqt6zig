#pragma once
#ifndef EXTRAS_KICONTHEMES_LIBKPIXMAPSEQUENCELOADER_H
#define EXTRAS_KICONTHEMES_LIBKPIXMAPSEQUENCELOADER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KPixmapSequence KPixmapSequence;
typedef struct KPixmapSequenceLoader KPixmapSequenceLoader;
#endif

KPixmapSequence* KPixmapSequenceLoader_Load(const libqt_string iconName, int size);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
