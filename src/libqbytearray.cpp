#include <QByteArray>
#define WORKAROUND_INNER_CLASS_DEFINITION_QByteArray__FromBase64Result
#include <QList>
#include <qbytearray.h>
#include "libqbytearray.h"
#include "libqbytearray.hxx"

libqt_string QByteArray_Number(int param1) {
    QByteArray _qb = QByteArray::number(static_cast<int>(param1));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QByteArray_Number2(unsigned int param1) {
    QByteArray _qb = QByteArray::number(static_cast<uint>(param1));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QByteArray_Number3(long param1) {
    QByteArray _qb = QByteArray::number(static_cast<long>(param1));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QByteArray_Number4(unsigned long param1) {
    QByteArray _qb = QByteArray::number(static_cast<ulong>(param1));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QByteArray_Number5(long long param1) {
    QByteArray _qb = QByteArray::number(static_cast<qlonglong>(param1));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QByteArray_Number6(unsigned long long param1) {
    QByteArray _qb = QByteArray::number(static_cast<qulonglong>(param1));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QByteArray_Number7(double param1) {
    QByteArray _qb = QByteArray::number(static_cast<double>(param1));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QByteArray_FromRawData(const char* data, ptrdiff_t size) {
    QByteArray _qb = QByteArray::fromRawData(data, (qsizetype)(size));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

QByteArray__FromBase64Result* QByteArray_FromBase64Encoding(const libqt_string base64) {
    QByteArray base64_QByteArray(base64.data, base64.len);
    return new QByteArray::FromBase64Result(QByteArray::fromBase64Encoding(base64_QByteArray));
}

libqt_string QByteArray_FromBase64(const libqt_string base64) {
    QByteArray base64_QByteArray(base64.data, base64.len);
    QByteArray _qb = QByteArray::fromBase64(base64_QByteArray);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QByteArray_FromHex(const libqt_string hexEncoded) {
    QByteArray hexEncoded_QByteArray(hexEncoded.data, hexEncoded.len);
    QByteArray _qb = QByteArray::fromHex(hexEncoded_QByteArray);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QByteArray_FromPercentEncoding(const libqt_string pctEncoded) {
    QByteArray pctEncoded_QByteArray(pctEncoded.data, pctEncoded.len);
    QByteArray _qb = QByteArray::fromPercentEncoding(pctEncoded_QByteArray);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

ptrdiff_t QByteArray_MaxSize2() {
    return static_cast<ptrdiff_t>(QByteArray::maxSize());
}

libqt_string QByteArray_Number22(int param1, int base) {
    QByteArray _qb = QByteArray::number(static_cast<int>(param1), static_cast<int>(base));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QByteArray_Number23(unsigned int param1, int base) {
    QByteArray _qb = QByteArray::number(static_cast<uint>(param1), static_cast<int>(base));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QByteArray_Number24(long param1, int base) {
    QByteArray _qb = QByteArray::number(static_cast<long>(param1), static_cast<int>(base));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QByteArray_Number25(unsigned long param1, int base) {
    QByteArray _qb = QByteArray::number(static_cast<ulong>(param1), static_cast<int>(base));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QByteArray_Number26(long long param1, int base) {
    QByteArray _qb = QByteArray::number(static_cast<qlonglong>(param1), static_cast<int>(base));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QByteArray_Number27(unsigned long long param1, int base) {
    QByteArray _qb = QByteArray::number(static_cast<qulonglong>(param1), static_cast<int>(base));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QByteArray_Number28(double param1, char format) {
    QByteArray _qb = QByteArray::number(static_cast<double>(param1), static_cast<char>(format));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QByteArray_Number32(double param1, char format, int precision) {
    QByteArray _qb = QByteArray::number(static_cast<double>(param1), static_cast<char>(format), static_cast<int>(precision));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

QByteArray__FromBase64Result* QByteArray_FromBase64Encoding2(const libqt_string base64, int options) {
    QByteArray base64_QByteArray(base64.data, base64.len);
    return new QByteArray::FromBase64Result(QByteArray::fromBase64Encoding(base64_QByteArray, static_cast<QByteArray::Base64Options>(options)));
}

libqt_string QByteArray_FromBase642(const libqt_string base64, int options) {
    QByteArray base64_QByteArray(base64.data, base64.len);
    QByteArray _qb = QByteArray::fromBase64(base64_QByteArray, static_cast<QByteArray::Base64Options>(options));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QByteArray_FromPercentEncoding2(const libqt_string pctEncoded, char percent) {
    QByteArray pctEncoded_QByteArray(pctEncoded.data, pctEncoded.len);
    QByteArray _qb = QByteArray::fromPercentEncoding(pctEncoded_QByteArray, static_cast<char>(percent));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string qbytearray_QCompress(const unsigned char* data, ptrdiff_t nbytes, int compressionLevel) {
    QByteArray _qb = qCompress(static_cast<const uchar*>(data), (qsizetype)(nbytes), static_cast<int>(compressionLevel));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string qbytearray_QUncompress(const unsigned char* data, ptrdiff_t nbytes) {
    QByteArray _qb = qUncompress(static_cast<const uchar*>(data), (qsizetype)(nbytes));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string qbytearray_QCompress2(const libqt_string data, int compressionLevel) {
    QByteArray data_QByteArray(data.data, data.len);
    QByteArray _qb = qCompress(data_QByteArray, static_cast<int>(compressionLevel));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string qbytearray_QUncompress2(const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    QByteArray _qb = qUncompress(data_QByteArray);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

size_t qbytearray_QHash(const QByteArray__FromBase64Result* key, size_t seed) {
    return qHash(*key, static_cast<size_t>(seed));
}

QByteArray__FromBase64Result* QByteArray__FromBase64Result_new() {
    return new QByteArray::FromBase64Result();
}

QByteArray__FromBase64Result* QByteArray__FromBase64Result_new2(const QByteArray__FromBase64Result* param1) {
    return new QByteArray::FromBase64Result(*param1);
}

libqt_string QByteArray__FromBase64Result_Decoded(const QByteArray__FromBase64Result* self) {
    QByteArray decoded_qb = self->decoded;
    libqt_string decoded_str;
    decoded_str.len = decoded_qb.length();
    decoded_str.data = static_cast<char*>(malloc(decoded_str.len));
    memcpy((void*)decoded_str.data, decoded_qb.data(), decoded_str.len);
    return decoded_str;
}

void QByteArray__FromBase64Result_SetDecoded(QByteArray__FromBase64Result* self, libqt_string decoded) {
    QByteArray decoded_QByteArray(decoded.data, decoded.len);
    self->decoded = decoded_QByteArray;
}

int QByteArray__FromBase64Result_DecodingStatus(const QByteArray__FromBase64Result* self) {
    return static_cast<int>(self->decodingStatus);
}

void QByteArray__FromBase64Result_SetDecodingStatus(QByteArray__FromBase64Result* self, int decodingStatus) {
    self->decodingStatus = static_cast<QByteArray::Base64DecodingStatus>(decodingStatus);
}

void QByteArray__FromBase64Result_Swap(QByteArray__FromBase64Result* self, QByteArray__FromBase64Result* other) {
    self->swap(*other);
}

bool QByteArray__FromBase64Result_ToBool(const QByteArray__FromBase64Result* self) {
    return self->operator bool();
}

libqt_string QByteArray__FromBase64Result_OperatorMultiply(QByteArray__FromBase64Result* self) {
    QByteArray _qb = self->operator*();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QByteArray__FromBase64Result_OperatorMultiply2(const QByteArray__FromBase64Result* self) {
    const QByteArray _qb = self->operator*();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QByteArray__FromBase64Result_OperatorAssign(QByteArray__FromBase64Result* self, const QByteArray__FromBase64Result* param1) {
    self->operator=(*param1);
}

void QByteArray__FromBase64Result_Delete(QByteArray__FromBase64Result* self) {
    delete self;
}
