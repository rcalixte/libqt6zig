#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWebSocketHandshakeOptions>
#include <qwebsockethandshakeoptions.h>
#include "libqwebsockethandshakeoptions.h"
#include "libqwebsockethandshakeoptions.hxx"

QWebSocketHandshakeOptions* QWebSocketHandshakeOptions_new() {
    return new QWebSocketHandshakeOptions();
}

QWebSocketHandshakeOptions* QWebSocketHandshakeOptions_new2(const QWebSocketHandshakeOptions* other) {
    return new QWebSocketHandshakeOptions(*other);
}

void QWebSocketHandshakeOptions_OperatorAssign(QWebSocketHandshakeOptions* self, const QWebSocketHandshakeOptions* other) {
    self->operator=(*other);
}

void QWebSocketHandshakeOptions_Swap(QWebSocketHandshakeOptions* self, QWebSocketHandshakeOptions* other) {
    self->swap(*other);
}

libqt_list /* of libqt_string */ QWebSocketHandshakeOptions_Subprotocols(const QWebSocketHandshakeOptions* self) {
    QList<QString> _ret = self->subprotocols();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QWebSocketHandshakeOptions_SetSubprotocols(QWebSocketHandshakeOptions* self, const libqt_list /* of libqt_string */ protocols) {
    QList<QString> protocols_QList;
    protocols_QList.reserve(protocols.len);
    libqt_string* protocols_arr = static_cast<libqt_string*>(protocols.data);
    for (size_t i = 0; i < protocols.len; ++i) {
        QString protocols_arr_i_QString = QString::fromUtf8(protocols_arr[i].data, protocols_arr[i].len);
        protocols_QList.push_back(protocols_arr_i_QString);
    }
    self->setSubprotocols(protocols_QList);
}

void QWebSocketHandshakeOptions_Delete(QWebSocketHandshakeOptions* self) {
    delete self;
}
