#include <KCodecs>
#define WORKAROUND_INNER_CLASS_DEFINITION_KCodecs__Codec
#define WORKAROUND_INNER_CLASS_DEFINITION_KCodecs__Decoder
#define WORKAROUND_INNER_CLASS_DEFINITION_KCodecs__Encoder
#include <QByteArray>
#include <QByteArrayView>
#include <kcodecs.h>
#include "libkcodecs.h"
#include "libkcodecs.hxx"

libqt_string KCodecs_QuotedPrintableEncode(libqt_string param1, bool param2) {
    QByteArrayView param1_QByteArrayView(param1.data, param1.len);
    QByteArray _qb = KCodecs::quotedPrintableEncode(param1_QByteArrayView, param2);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void KCodecs_QuotedPrintableEncode2(libqt_string param1, libqt_string param2, bool param3) {
    QByteArrayView param1_QByteArrayView(param1.data, param1.len);
    QByteArray param2_QByteArray(param2.data, param2.len);
    KCodecs::quotedPrintableEncode(param1_QByteArrayView, param2_QByteArray, param3);
}

libqt_string KCodecs_QuotedPrintableDecode(libqt_string param1) {
    QByteArrayView param1_QByteArrayView(param1.data, param1.len);
    QByteArray _qb = KCodecs::quotedPrintableDecode(param1_QByteArrayView);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void KCodecs_QuotedPrintableDecode2(libqt_string param1, libqt_string param2) {
    QByteArrayView param1_QByteArrayView(param1.data, param1.len);
    QByteArray param2_QByteArray(param2.data, param2.len);
    KCodecs::quotedPrintableDecode(param1_QByteArrayView, param2_QByteArray);
}

libqt_string KCodecs_Uudecode(libqt_string param1) {
    QByteArrayView param1_QByteArrayView(param1.data, param1.len);
    QByteArray _qb = KCodecs::uudecode(param1_QByteArrayView);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void KCodecs_Uudecode2(libqt_string param1, libqt_string param2) {
    QByteArrayView param1_QByteArrayView(param1.data, param1.len);
    QByteArray param2_QByteArray(param2.data, param2.len);
    KCodecs::uudecode(param1_QByteArrayView, param2_QByteArray);
}

libqt_string KCodecs_Base64Encode(libqt_string param1) {
    QByteArrayView param1_QByteArrayView(param1.data, param1.len);
    QByteArray _qb = KCodecs::base64Encode(param1_QByteArrayView);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void KCodecs_Base64Encode2(libqt_string param1, libqt_string param2, bool param3) {
    QByteArrayView param1_QByteArrayView(param1.data, param1.len);
    QByteArray param2_QByteArray(param2.data, param2.len);
    KCodecs::base64Encode(param1_QByteArrayView, param2_QByteArray, param3);
}

libqt_string KCodecs_Base64Decode(libqt_string param1) {
    QByteArrayView param1_QByteArrayView(param1.data, param1.len);
    QByteArray _qb = KCodecs::base64Decode(param1_QByteArrayView);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void KCodecs_Base64Decode2(libqt_string param1, libqt_string param2) {
    QByteArrayView param1_QByteArrayView(param1.data, param1.len);
    QByteArray param2_QByteArray(param2.data, param2.len);
    KCodecs::base64Decode(param1_QByteArrayView, param2_QByteArray);
}

libqt_string KCodecs_Base45Decode(libqt_string param1) {
    QByteArrayView param1_QByteArrayView(param1.data, param1.len);
    QByteArray _qb = KCodecs::base45Decode(param1_QByteArrayView);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

KCodecs__Codec* KCodecs__Codec_CodecForName(libqt_string name) {
    QByteArrayView name_QByteArrayView(name.data, name.len);
    return KCodecs::Codec::codecForName(name_QByteArrayView);
}

ptrdiff_t KCodecs__Codec_MaxEncodedSizeFor(const KCodecs__Codec* self, ptrdiff_t insize, int newline) {
    return static_cast<ptrdiff_t>(self->maxEncodedSizeFor((qsizetype)(insize), static_cast<KCodecs::Codec::NewlineType>(newline)));
}

ptrdiff_t KCodecs__Codec_MaxDecodedSizeFor(const KCodecs__Codec* self, ptrdiff_t insize, int newline) {
    return static_cast<ptrdiff_t>(self->maxDecodedSizeFor((qsizetype)(insize), static_cast<KCodecs::Codec::NewlineType>(newline)));
}

KCodecs__Encoder* KCodecs__Codec_MakeEncoder(const KCodecs__Codec* self, int newline) {
    return self->makeEncoder(static_cast<KCodecs::Codec::NewlineType>(newline));
}

KCodecs__Decoder* KCodecs__Codec_MakeDecoder(const KCodecs__Codec* self, int newline) {
    return self->makeDecoder(static_cast<KCodecs::Codec::NewlineType>(newline));
}

bool KCodecs__Codec_Encode(const KCodecs__Codec* self, const char* scursor, const char* send, char* dcursor, const char* dend, int newline) {
    return self->encode(scursor, send, dcursor, dend, static_cast<KCodecs::Codec::NewlineType>(newline));
}

bool KCodecs__Codec_Decode(const KCodecs__Codec* self, const char* scursor, const char* send, char* dcursor, const char* dend, int newline) {
    return self->decode(scursor, send, dcursor, dend, static_cast<KCodecs::Codec::NewlineType>(newline));
}

libqt_string KCodecs__Codec_Encode2(const KCodecs__Codec* self, libqt_string src) {
    QByteArrayView src_QByteArrayView(src.data, src.len);
    QByteArray _qb = self->encode(src_QByteArrayView);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string KCodecs__Codec_Decode2(const KCodecs__Codec* self, libqt_string src) {
    QByteArrayView src_QByteArrayView(src.data, src.len);
    QByteArray _qb = self->decode(src_QByteArrayView);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

const char* KCodecs__Codec_Name(const KCodecs__Codec* self) {
    return (const char*)self->name();
}

libqt_string KCodecs__Codec_Encode22(const KCodecs__Codec* self, libqt_string src, int newline) {
    QByteArrayView src_QByteArrayView(src.data, src.len);
    QByteArray _qb = self->encode(src_QByteArrayView, static_cast<KCodecs::Codec::NewlineType>(newline));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string KCodecs__Codec_Decode22(const KCodecs__Codec* self, libqt_string src, int newline) {
    QByteArrayView src_QByteArrayView(src.data, src.len);
    QByteArray _qb = self->decode(src_QByteArrayView, static_cast<KCodecs::Codec::NewlineType>(newline));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void KCodecs__Codec_Delete(KCodecs__Codec* self) {
    delete self;
}

bool KCodecs__Decoder_Decode(KCodecs__Decoder* self, const char* scursor, const char* send, char* dcursor, const char* dend) {
    return self->decode(scursor, send, dcursor, dend);
}

bool KCodecs__Decoder_Finish(KCodecs__Decoder* self, char* dcursor, const char* dend) {
    return self->finish(dcursor, dend);
}

void KCodecs__Decoder_Delete(KCodecs__Decoder* self) {
    delete self;
}

bool KCodecs__Encoder_Encode(KCodecs__Encoder* self, const char* scursor, const char* send, char* dcursor, const char* dend) {
    return self->encode(scursor, send, dcursor, dend);
}

bool KCodecs__Encoder_Finish(KCodecs__Encoder* self, char* dcursor, const char* dend) {
    return self->finish(dcursor, dend);
}

void KCodecs__Encoder_Delete(KCodecs__Encoder* self) {
    delete self;
}
