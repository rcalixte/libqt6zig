#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBPASTE_H
#define SRC_EXTRAS_KIOC_LIBPASTE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KFileItem KFileItem;
typedef struct KIO KIO;
typedef struct QMimeData QMimeData;
#endif

bool KIO_CanPasteMimeData(const QMimeData* data);
libqt_string KIO_PasteActionText(const QMimeData* mimeData, bool* enable, const KFileItem* destItem);
void KIO_SetClipboardDataCut(QMimeData* mimeData, bool cut);
bool KIO_IsClipboardDataCut(const QMimeData* mimeData);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
