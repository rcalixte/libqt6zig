#include <QByteArray>
#include <QIODevice>
#include <QMessageAuthenticationCode>
#include <qmessageauthenticationcode.h>
#include "libqmessageauthenticationcode.h"
#include "libqmessageauthenticationcode.hxx"

QMessageAuthenticationCode* QMessageAuthenticationCode_new(int method) {
    return new QMessageAuthenticationCode(static_cast<QCryptographicHash::Algorithm>(method));
}

QMessageAuthenticationCode* QMessageAuthenticationCode_new2(int method, const libqt_string key) {
    QByteArray key_QByteArray(key.data, key.len);
    return new QMessageAuthenticationCode(static_cast<QCryptographicHash::Algorithm>(method), key_QByteArray);
}

void QMessageAuthenticationCode_Reset(QMessageAuthenticationCode* self) {
    self->reset();
}

void QMessageAuthenticationCode_SetKey(QMessageAuthenticationCode* self, const libqt_string key) {
    QByteArray key_QByteArray(key.data, key.len);
    self->setKey(key_QByteArray);
}

void QMessageAuthenticationCode_AddData(QMessageAuthenticationCode* self, const char* data, ptrdiff_t length) {
    self->addData(data, (qsizetype)(length));
}

void QMessageAuthenticationCode_AddDataWithData(QMessageAuthenticationCode* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->addData(data_QByteArray);
}

bool QMessageAuthenticationCode_AddDataWithDevice(QMessageAuthenticationCode* self, QIODevice* device) {
    return self->addData(device);
}

libqt_string QMessageAuthenticationCode_Result(const QMessageAuthenticationCode* self) {
    QByteArray _qb = self->result();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QMessageAuthenticationCode_Hash(const libqt_string message, const libqt_string key, int method) {
    QByteArray message_QByteArray(message.data, message.len);
    QByteArray key_QByteArray(key.data, key.len);
    QByteArray _qb = QMessageAuthenticationCode::hash(message_QByteArray, key_QByteArray, static_cast<QCryptographicHash::Algorithm>(method));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QMessageAuthenticationCode_Delete(QMessageAuthenticationCode* self) {
    delete self;
}
