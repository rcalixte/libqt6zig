#pragma once
#ifndef SRC_EXTRAS_KICONTHEMESC_LIBKPIXMAPSEQUENCELOADER_H
#define SRC_EXTRAS_KICONTHEMESC_LIBKPIXMAPSEQUENCELOADER_H

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

KPixmapSequence* KPixmapSequenceLoader_Load(const libqt_string param1, int param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
