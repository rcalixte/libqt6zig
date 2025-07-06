#include <QByteArray>
#include <QByteArrayView>
#include <QCryptographicHash>
#include <QIODevice>
#include <QSpan>
#include <qcryptographichash.h>
#include "libqcryptographichash.h"
#include "libqcryptographichash.hxx"

QCryptographicHash* QCryptographicHash_new(int method) {
    return new QCryptographicHash(static_cast<QCryptographicHash::Algorithm>(method));
}

void QCryptographicHash_Swap(QCryptographicHash* self, QCryptographicHash* other) {
    self->swap(*other);
}

void QCryptographicHash_Reset(QCryptographicHash* self) {
    self->reset();
}

int QCryptographicHash_Algorithm(const QCryptographicHash* self) {
    return static_cast<int>(self->algorithm());
}

void QCryptographicHash_AddData(QCryptographicHash* self, const char* data, ptrdiff_t length) {
    self->addData(data, (qsizetype)(length));
}

void QCryptographicHash_AddDataWithData(QCryptographicHash* self, QByteArrayView* data) {
    self->addData(*data);
}

bool QCryptographicHash_AddDataWithDevice(QCryptographicHash* self, QIODevice* device) {
    return self->addData(device);
}

libqt_string QCryptographicHash_Result(const QCryptographicHash* self) {
    QByteArray _qb = self->result();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QByteArrayView* QCryptographicHash_ResultView(const QCryptographicHash* self) {
    return new QByteArrayView(self->resultView());
}

libqt_string QCryptographicHash_Hash(QByteArrayView* data, int method) {
    QByteArray _qb = QCryptographicHash::hash(*data, static_cast<QCryptographicHash::Algorithm>(method));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QByteArrayView* QCryptographicHash_HashInto(libqt_list /* of char */ buffer, QByteArrayView* data, int method) {
    QList<char> buffer_QSpan;
    buffer_QSpan.reserve(buffer.len);
    char* buffer_arr = static_cast<char*>(buffer.data);
    for (size_t i = 0; i < buffer.len; ++i) {
        buffer_QSpan.push_back(static_cast<char>(buffer_arr[i]));
    }
    return new QByteArrayView(QCryptographicHash::hashInto(buffer_QSpan, *data, static_cast<QCryptographicHash::Algorithm>(method)));
}

QByteArrayView* QCryptographicHash_HashInto2(libqt_list /* of unsigned char */ buffer, QByteArrayView* data, int method) {
    QList<unsigned char> buffer_QSpan;
    buffer_QSpan.reserve(buffer.len);
    unsigned char* buffer_arr = static_cast<unsigned char*>(buffer.data);
    for (size_t i = 0; i < buffer.len; ++i) {
        buffer_QSpan.push_back(static_cast<unsigned char>(buffer_arr[i]));
    }
    return new QByteArrayView(QCryptographicHash::hashInto(buffer_QSpan, *data, static_cast<QCryptographicHash::Algorithm>(method)));
}

QByteArrayView* QCryptographicHash_HashInto4(libqt_list /* of char */ buffer, libqt_list /* of QByteArrayView* */ data, int method) {
    QList<char> buffer_QSpan;
    buffer_QSpan.reserve(buffer.len);
    char* buffer_arr = static_cast<char*>(buffer.data);
    for (size_t i = 0; i < buffer.len; ++i) {
        buffer_QSpan.push_back(static_cast<char>(buffer_arr[i]));
    }
    QList<QByteArrayView> data_QSpan;
    data_QSpan.reserve(data.len);
    QByteArrayView** data_arr = static_cast<QByteArrayView**>(data.data);
    for (size_t i = 0; i < data.len; ++i) {
        data_QSpan.push_back(*(data_arr[i]));
    }
    return new QByteArrayView(QCryptographicHash::hashInto(buffer_QSpan, data_QSpan, static_cast<QCryptographicHash::Algorithm>(method)));
}

QByteArrayView* QCryptographicHash_HashInto5(libqt_list /* of unsigned char */ buffer, libqt_list /* of QByteArrayView* */ data, int method) {
    QList<unsigned char> buffer_QSpan;
    buffer_QSpan.reserve(buffer.len);
    unsigned char* buffer_arr = static_cast<unsigned char*>(buffer.data);
    for (size_t i = 0; i < buffer.len; ++i) {
        buffer_QSpan.push_back(static_cast<unsigned char>(buffer_arr[i]));
    }
    QList<QByteArrayView> data_QSpan;
    data_QSpan.reserve(data.len);
    QByteArrayView** data_arr = static_cast<QByteArrayView**>(data.data);
    for (size_t i = 0; i < data.len; ++i) {
        data_QSpan.push_back(*(data_arr[i]));
    }
    return new QByteArrayView(QCryptographicHash::hashInto(buffer_QSpan, data_QSpan, static_cast<QCryptographicHash::Algorithm>(method)));
}

int QCryptographicHash_HashLength(int method) {
    return QCryptographicHash::hashLength(static_cast<QCryptographicHash::Algorithm>(method));
}

bool QCryptographicHash_SupportsAlgorithm(int method) {
    return QCryptographicHash::supportsAlgorithm(static_cast<QCryptographicHash::Algorithm>(method));
}

void QCryptographicHash_Delete(QCryptographicHash* self) {
    delete self;
}
