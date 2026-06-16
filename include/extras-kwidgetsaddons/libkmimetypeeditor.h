#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKMIMETYPEEDITOR_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKMIMETYPEEDITOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KMimeTypeEditor KMimeTypeEditor;
typedef struct QWidget QWidget;
#endif

void KMimeTypeEditor_EditMimeType(const libqt_string mimeType, QWidget* widget);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
