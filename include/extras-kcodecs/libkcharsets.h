#pragma once
#ifndef SRC_EXTRAS_KCODECSC_LIBKCHARSETS_H
#define SRC_EXTRAS_KCODECSC_LIBKCHARSETS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCharsets KCharsets;
typedef struct QChar QChar;
#endif

libqt_string KCharsets_Tr(const char* sourceText);
KCharsets* KCharsets_Charsets();
libqt_string KCharsets_ToEntity(const QChar* ch);
libqt_string KCharsets_ResolveEntities(const libqt_string text);
libqt_list /* of libqt_string */ KCharsets_AvailableEncodingNames(const KCharsets* self);
libqt_list /* of libqt_string */ KCharsets_DescriptiveEncodingNames(const KCharsets* self);
libqt_list /* of libqt_list  of libqt_string  */ KCharsets_EncodingsByScript(const KCharsets* self);
libqt_string KCharsets_EncodingForName(const KCharsets* self, const libqt_string descriptiveName);
libqt_string KCharsets_Tr2(const char* sourceText, const char* disambiguation);
libqt_string KCharsets_Tr3(const char* sourceText, const char* disambiguation, int n);
void KCharsets_Delete(KCharsets* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
