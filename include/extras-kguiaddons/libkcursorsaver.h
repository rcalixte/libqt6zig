#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBKCURSORSAVER_H
#define SRC_EXTRAS_KGUIADDONSC_LIBKCURSORSAVER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCursorSaver KCursorSaver;
#endif

KCursorSaver* KCursorSaver_new(int shape);
void KCursorSaver_RestoreCursor(KCursorSaver* self);
void KCursorSaver_Delete(KCursorSaver* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
