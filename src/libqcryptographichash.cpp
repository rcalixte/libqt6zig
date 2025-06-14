#include <QByteArray>
#include <QByteArrayView>
#include <QCryptographicHash>
#include <QIODevice>
#include <qcryptographichash.h>
#include "libqcryptographichash.h"
#include "libqcryptographichash.hxx"

QCryptographicHash* QCryptographicHash_new(int method) {
    return new QCryptographicHash(static_cast<QCryptographicHash::Algorithm>(method));
}

void QCryptographicHash_Reset(QCryptographicHash* self) {
    self->reset();
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

int QCryptographicHash_HashLength(int method) {
    return QCryptographicHash::hashLength(static_cast<QCryptographicHash::Algorithm>(method));
}

void QCryptographicHash_Delete(QCryptographicHash* self) {
    delete self;
}
