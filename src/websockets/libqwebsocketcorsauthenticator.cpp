#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWebSocketCorsAuthenticator>
#include <qwebsocketcorsauthenticator.h>
#include "libqwebsocketcorsauthenticator.h"
#include "libqwebsocketcorsauthenticator.hxx"

QWebSocketCorsAuthenticator* QWebSocketCorsAuthenticator_new(const libqt_string origin) {
    QString origin_QString = QString::fromUtf8(origin.data, origin.len);
    return new QWebSocketCorsAuthenticator(origin_QString);
}

QWebSocketCorsAuthenticator* QWebSocketCorsAuthenticator_new2(const QWebSocketCorsAuthenticator* other) {
    return new QWebSocketCorsAuthenticator(*other);
}

void QWebSocketCorsAuthenticator_Swap(QWebSocketCorsAuthenticator* self, QWebSocketCorsAuthenticator* other) {
    self->swap(*other);
}

void QWebSocketCorsAuthenticator_OperatorAssign(QWebSocketCorsAuthenticator* self, const QWebSocketCorsAuthenticator* other) {
    self->operator=(*other);
}

libqt_string QWebSocketCorsAuthenticator_Origin(const QWebSocketCorsAuthenticator* self) {
    QString _ret = self->origin();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWebSocketCorsAuthenticator_SetAllowed(QWebSocketCorsAuthenticator* self, bool allowed) {
    self->setAllowed(allowed);
}

bool QWebSocketCorsAuthenticator_Allowed(const QWebSocketCorsAuthenticator* self) {
    return self->allowed();
}

void QWebSocketCorsAuthenticator_Delete(QWebSocketCorsAuthenticator* self) {
    delete self;
}
