#pragma once
#ifndef SRC_EXTRAS_KCODECSC_LIBKCODECS_H
#define SRC_EXTRAS_KCODECSC_LIBKCODECS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCodecs__Codec)
typedef KCodecs::Codec KCodecs__Codec;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCodecs__Decoder)
typedef KCodecs::Decoder KCodecs__Decoder;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KCodecs__Encoder)
typedef KCodecs::Encoder KCodecs__Encoder;
#endif
#else
typedef struct KCodecs KCodecs;
typedef struct KCodecs__Codec KCodecs__Codec;
typedef struct KCodecs__Decoder KCodecs__Decoder;
typedef struct KCodecs__Encoder KCodecs__Encoder;
typedef struct QByteArrayView QByteArrayView;
#endif

libqt_string KCodecs_QuotedPrintableEncode(QByteArrayView* param1, bool param2);
void KCodecs_QuotedPrintableEncode2(QByteArrayView* param1, libqt_string param2, bool param3);
libqt_string KCodecs_QuotedPrintableDecode(QByteArrayView* param1);
void KCodecs_QuotedPrintableDecode2(QByteArrayView* param1, libqt_string param2);
libqt_string KCodecs_Uudecode(QByteArrayView* param1);
void KCodecs_Uudecode2(QByteArrayView* param1, libqt_string param2);
libqt_string KCodecs_Base64Encode(QByteArrayView* param1);
void KCodecs_Base64Encode2(QByteArrayView* param1, libqt_string param2, bool param3);
libqt_string KCodecs_Base64Decode(QByteArrayView* param1);
void KCodecs_Base64Decode2(QByteArrayView* param1, libqt_string param2);
libqt_string KCodecs_Base45Decode(QByteArrayView* param1);

KCodecs__Codec* KCodecs__Codec_CodecForName(QByteArrayView* name);
ptrdiff_t KCodecs__Codec_MaxEncodedSizeFor(const KCodecs__Codec* self, ptrdiff_t insize, int newline);
ptrdiff_t KCodecs__Codec_MaxDecodedSizeFor(const KCodecs__Codec* self, ptrdiff_t insize, int newline);
KCodecs__Encoder* KCodecs__Codec_MakeEncoder(const KCodecs__Codec* self, int newline);
KCodecs__Decoder* KCodecs__Codec_MakeDecoder(const KCodecs__Codec* self, int newline);
bool KCodecs__Codec_Encode(const KCodecs__Codec* self, const char* scursor, const char* send, char* dcursor, const char* dend, int newline);
bool KCodecs__Codec_Decode(const KCodecs__Codec* self, const char* scursor, const char* send, char* dcursor, const char* dend, int newline);
libqt_string KCodecs__Codec_Encode2(const KCodecs__Codec* self, QByteArrayView* src);
libqt_string KCodecs__Codec_Decode2(const KCodecs__Codec* self, QByteArrayView* src);
const char* KCodecs__Codec_Name(const KCodecs__Codec* self);
libqt_string KCodecs__Codec_Encode22(const KCodecs__Codec* self, QByteArrayView* src, int newline);
libqt_string KCodecs__Codec_Decode22(const KCodecs__Codec* self, QByteArrayView* src, int newline);
void KCodecs__Codec_Delete(KCodecs__Codec* self);

bool KCodecs__Decoder_Decode(KCodecs__Decoder* self, const char* scursor, const char* send, char* dcursor, const char* dend);
bool KCodecs__Decoder_Finish(KCodecs__Decoder* self, char* dcursor, const char* dend);
void KCodecs__Decoder_Delete(KCodecs__Decoder* self);

bool KCodecs__Encoder_Encode(KCodecs__Encoder* self, const char* scursor, const char* send, char* dcursor, const char* dend);
bool KCodecs__Encoder_Finish(KCodecs__Encoder* self, char* dcursor, const char* dend);
void KCodecs__Encoder_Delete(KCodecs__Encoder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
