#pragma once
#ifndef SRC_EXTRAS_KCODECSC_LIBKENCODINGPROBER_H
#define SRC_EXTRAS_KCODECSC_LIBKENCODINGPROBER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KEncodingProber KEncodingProber;
typedef struct QByteArrayView QByteArrayView;
#endif

KEncodingProber* KEncodingProber_new();
KEncodingProber* KEncodingProber_new2(int proberType);
libqt_string KEncodingProber_Tr(const char* sourceText);
void KEncodingProber_Reset(KEncodingProber* self);
int KEncodingProber_Feed(KEncodingProber* self, QByteArrayView* data);
int KEncodingProber_Feed2(KEncodingProber* self, const char* data, ptrdiff_t lenVal);
int KEncodingProber_State(const KEncodingProber* self);
libqt_string KEncodingProber_Encoding(const KEncodingProber* self);
float KEncodingProber_Confidence(const KEncodingProber* self);
int KEncodingProber_ProberType(const KEncodingProber* self);
void KEncodingProber_SetProberType(KEncodingProber* self, int proberType);
int KEncodingProber_ProberTypeForName(const libqt_string lang);
libqt_string KEncodingProber_NameForProberType(int proberType);
libqt_string KEncodingProber_Tr2(const char* sourceText, const char* disambiguation);
libqt_string KEncodingProber_Tr3(const char* sourceText, const char* disambiguation, int n);
void KEncodingProber_Delete(KEncodingProber* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
