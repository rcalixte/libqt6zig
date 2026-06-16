#include <KCodecs>
#define WORKAROUND_INNER_CLASS_DEFINITION_KCodecs__Codec
#define WORKAROUND_INNER_CLASS_DEFINITION_KCodecs__Decoder
#define WORKAROUND_INNER_CLASS_DEFINITION_KCodecs__Encoder
#include <QByteArray>
#include <QByteArrayView>
#include <QString>
#include <kcodecs.h>
#include "libkcodecs.h"
#include "libkcodecs.hxx"

libqt_string KCodecs_QuotedPrintableEncode(libqt_string in, bool useCRLF) {
    QByteArrayView in_QByteArrayView(in.data, in.len);
    QByteArray _qb = KCodecs::quotedPrintableEncode(in_QByteArrayView, useCRLF);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void KCodecs_QuotedPrintableEncode2(libqt_string in, libqt_string out, bool useCRLF) {
    QByteArrayView in_QByteArrayView(in.data, in.len);
    QByteArray out_QByteArray(out.data, out.len);
    KCodecs::quotedPrintableEncode(in_QByteArrayView, out_QByteArray, useCRLF);
}

libqt_string KCodecs_QuotedPrintableDecode(libqt_string in) {
    QByteArrayView in_QByteArrayView(in.data, in.len);
    QByteArray _qb = KCodecs::quotedPrintableDecode(in_QByteArrayView);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void KCodecs_QuotedPrintableDecode2(libqt_string in, libqt_string out) {
    QByteArrayView in_QByteArrayView(in.data, in.len);
    QByteArray out_QByteArray(out.data, out.len);
    KCodecs::quotedPrintableDecode(in_QByteArrayView, out_QByteArray);
}

libqt_string KCodecs_Uudecode(libqt_string in) {
    QByteArrayView in_QByteArrayView(in.data, in.len);
    QByteArray _qb = KCodecs::uudecode(in_QByteArrayView);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void KCodecs_Uudecode2(libqt_string in, libqt_string out) {
    QByteArrayView in_QByteArrayView(in.data, in.len);
    QByteArray out_QByteArray(out.data, out.len);
    KCodecs::uudecode(in_QByteArrayView, out_QByteArray);
}

libqt_string KCodecs_Base64Encode(libqt_string in) {
    QByteArrayView in_QByteArrayView(in.data, in.len);
    QByteArray _qb = KCodecs::base64Encode(in_QByteArrayView);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void KCodecs_Base64Encode2(libqt_string in, libqt_string out, bool insertLFs) {
    QByteArrayView in_QByteArrayView(in.data, in.len);
    QByteArray out_QByteArray(out.data, out.len);
    KCodecs::base64Encode(in_QByteArrayView, out_QByteArray, insertLFs);
}

libqt_string KCodecs_Base64Decode(libqt_string in) {
    QByteArrayView in_QByteArrayView(in.data, in.len);
    QByteArray _qb = KCodecs::base64Decode(in_QByteArrayView);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void KCodecs_Base64Decode2(libqt_string in, libqt_string out) {
    QByteArrayView in_QByteArrayView(in.data, in.len);
    QByteArray out_QByteArray(out.data, out.len);
    KCodecs::base64Decode(in_QByteArrayView, out_QByteArray);
}

libqt_string KCodecs_DecodeRFC2047String(libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto _ret = KCodecs::decodeRFC2047String(text_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCodecs_EncodeRFC2047String(libqt_string src, const libqt_string charset) {
    QString src_QString = QString::fromUtf8(src.data, src.len);
    QByteArray charset_QByteArray(charset.data, charset.len);
    QByteArray _qb = KCodecs::encodeRFC2047String(src_QString, charset_QByteArray);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string KCodecs_Base45Decode(libqt_string in) {
    QByteArrayView in_QByteArrayView(in.data, in.len);
    QByteArray _qb = KCodecs::base45Decode(in_QByteArrayView);
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
