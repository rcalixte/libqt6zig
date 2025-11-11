#include <QByteArray>
#include <QByteArrayView>
#include <QIODevice>
#include <QMessageAuthenticationCode>
#include <QSpan>
#include <qmessageauthenticationcode.h>
#include "libqmessageauthenticationcode.h"
#include "libqmessageauthenticationcode.hxx"

QMessageAuthenticationCode* QMessageAuthenticationCode_new(int method) {
    return new QMessageAuthenticationCode(static_cast<QCryptographicHash::Algorithm>(method));
}

QMessageAuthenticationCode* QMessageAuthenticationCode_new2(int method, libqt_string key) {
    QByteArrayView key_QByteArrayView(key.data, key.len);
    return new QMessageAuthenticationCode(static_cast<QCryptographicHash::Algorithm>(method), key_QByteArrayView);
}

void QMessageAuthenticationCode_Swap(QMessageAuthenticationCode* self, QMessageAuthenticationCode* other) {
    self->swap(*other);
}

void QMessageAuthenticationCode_Reset(QMessageAuthenticationCode* self) {
    self->reset();
}

void QMessageAuthenticationCode_SetKey(QMessageAuthenticationCode* self, libqt_string key) {
    QByteArrayView key_QByteArrayView(key.data, key.len);
    self->setKey(key_QByteArrayView);
}

void QMessageAuthenticationCode_AddData(QMessageAuthenticationCode* self, const char* data, ptrdiff_t length) {
    self->addData(data, (qsizetype)(length));
}

void QMessageAuthenticationCode_AddData2(QMessageAuthenticationCode* self, libqt_string data) {
    QByteArrayView data_QByteArrayView(data.data, data.len);
    self->addData(data_QByteArrayView);
}

bool QMessageAuthenticationCode_AddData3(QMessageAuthenticationCode* self, QIODevice* device) {
    return self->addData(device);
}

libqt_string QMessageAuthenticationCode_ResultView(const QMessageAuthenticationCode* self) {
    QByteArrayView _qb = self->resultView();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMessageAuthenticationCode_Result(const QMessageAuthenticationCode* self) {
    QByteArray _qb = self->result();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMessageAuthenticationCode_Hash(libqt_string message, libqt_string key, int method) {
    QByteArrayView message_QByteArrayView(message.data, message.len);
    QByteArrayView key_QByteArrayView(key.data, key.len);
    QByteArray _qb = QMessageAuthenticationCode::hash(message_QByteArrayView, key_QByteArrayView, static_cast<QCryptographicHash::Algorithm>(method));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMessageAuthenticationCode_HashInto(libqt_list /* of char */ buffer, libqt_string message, libqt_string key, int method) {
    QList<char> buffer_QSpan;
    buffer_QSpan.reserve(buffer.len);
    char* buffer_arr = static_cast<char*>(buffer.data);
    for (size_t i = 0; i < buffer.len; ++i) {
        buffer_QSpan.push_back(static_cast<char>(buffer_arr[i]));
    }
    QByteArrayView message_QByteArrayView(message.data, message.len);
    QByteArrayView key_QByteArrayView(key.data, key.len);
    QByteArrayView _qb = QMessageAuthenticationCode::hashInto(buffer_QSpan, message_QByteArrayView, key_QByteArrayView, static_cast<QCryptographicHash::Algorithm>(method));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMessageAuthenticationCode_HashInto2(libqt_list /* of unsigned char */ buffer, libqt_string message, libqt_string key, int method) {
    QList<unsigned char> buffer_QSpan;
    buffer_QSpan.reserve(buffer.len);
    unsigned char* buffer_arr = static_cast<unsigned char*>(buffer.data);
    for (size_t i = 0; i < buffer.len; ++i) {
        buffer_QSpan.push_back(static_cast<unsigned char>(buffer_arr[i]));
    }
    QByteArrayView message_QByteArrayView(message.data, message.len);
    QByteArrayView key_QByteArrayView(key.data, key.len);
    QByteArrayView _qb = QMessageAuthenticationCode::hashInto(buffer_QSpan, message_QByteArrayView, key_QByteArrayView, static_cast<QCryptographicHash::Algorithm>(method));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMessageAuthenticationCode_HashInto4(libqt_list /* of char */ buffer, libqt_list /* of libqt_string */ messageParts, libqt_string key, int method) {
    QList<char> buffer_QSpan;
    buffer_QSpan.reserve(buffer.len);
    char* buffer_arr = static_cast<char*>(buffer.data);
    for (size_t i = 0; i < buffer.len; ++i) {
        buffer_QSpan.push_back(static_cast<char>(buffer_arr[i]));
    }
    QList<QByteArrayView> messageParts_QSpan;
    messageParts_QSpan.reserve(messageParts.len);
    libqt_string* messageParts_arr = static_cast<libqt_string*>(messageParts.data);
    for (size_t i = 0; i < messageParts.len; ++i) {
        QByteArrayView messageParts_arr_i_QByteArrayView(messageParts_arr[i].data, messageParts_arr[i].len);
        messageParts_QSpan.push_back(messageParts_arr_i_QByteArrayView);
    }
    QByteArrayView key_QByteArrayView(key.data, key.len);
    QByteArrayView _qb = QMessageAuthenticationCode::hashInto(buffer_QSpan, messageParts_QSpan, key_QByteArrayView, static_cast<QCryptographicHash::Algorithm>(method));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMessageAuthenticationCode_HashInto5(libqt_list /* of unsigned char */ buffer, libqt_list /* of libqt_string */ messageParts, libqt_string key, int method) {
    QList<unsigned char> buffer_QSpan;
    buffer_QSpan.reserve(buffer.len);
    unsigned char* buffer_arr = static_cast<unsigned char*>(buffer.data);
    for (size_t i = 0; i < buffer.len; ++i) {
        buffer_QSpan.push_back(static_cast<unsigned char>(buffer_arr[i]));
    }
    QList<QByteArrayView> messageParts_QSpan;
    messageParts_QSpan.reserve(messageParts.len);
    libqt_string* messageParts_arr = static_cast<libqt_string*>(messageParts.data);
    for (size_t i = 0; i < messageParts.len; ++i) {
        QByteArrayView messageParts_arr_i_QByteArrayView(messageParts_arr[i].data, messageParts_arr[i].len);
        messageParts_QSpan.push_back(messageParts_arr_i_QByteArrayView);
    }
    QByteArrayView key_QByteArrayView(key.data, key.len);
    QByteArrayView _qb = QMessageAuthenticationCode::hashInto(buffer_QSpan, messageParts_QSpan, key_QByteArrayView, static_cast<QCryptographicHash::Algorithm>(method));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QMessageAuthenticationCode_Delete(QMessageAuthenticationCode* self) {
    delete self;
}
