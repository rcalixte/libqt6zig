#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWebEngineWebAuthPinRequest>
#include <QWebEngineWebAuthUxRequest>
#include <qwebenginewebauthuxrequest.h>
#include "libqwebenginewebauthuxrequest.h"
#include "libqwebenginewebauthuxrequest.hxx"

QMetaObject* QWebEngineWebAuthUxRequest_MetaObject(const QWebEngineWebAuthUxRequest* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebEngineWebAuthUxRequest_Metacast(QWebEngineWebAuthUxRequest* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebEngineWebAuthUxRequest_Metacall(QWebEngineWebAuthUxRequest* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWebEngineWebAuthUxRequest_Tr(const char* s) {
    QString _ret = QWebEngineWebAuthUxRequest::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QWebEngineWebAuthUxRequest_UserNames(const QWebEngineWebAuthUxRequest* self) {
    QList<QString> _ret = self->userNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QWebEngineWebAuthUxRequest_RelyingPartyId(const QWebEngineWebAuthUxRequest* self) {
    QString _ret = self->relyingPartyId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QWebEngineWebAuthPinRequest* QWebEngineWebAuthUxRequest_PinRequest(const QWebEngineWebAuthUxRequest* self) {
    return new QWebEngineWebAuthPinRequest(self->pinRequest());
}

int QWebEngineWebAuthUxRequest_State(const QWebEngineWebAuthUxRequest* self) {
    return static_cast<int>(self->state());
}

int QWebEngineWebAuthUxRequest_RequestFailureReason(const QWebEngineWebAuthUxRequest* self) {
    return static_cast<int>(self->requestFailureReason());
}

void QWebEngineWebAuthUxRequest_StateChanged(QWebEngineWebAuthUxRequest* self, int state) {
    self->stateChanged(static_cast<QWebEngineWebAuthUxRequest::WebAuthUxState>(state));
}

void QWebEngineWebAuthUxRequest_Connect_StateChanged(QWebEngineWebAuthUxRequest* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineWebAuthUxRequest*, int) = reinterpret_cast<void (*)(QWebEngineWebAuthUxRequest*, int)>(slot);
    QWebEngineWebAuthUxRequest::connect(self, &QWebEngineWebAuthUxRequest::stateChanged, [self, slotFunc](QWebEngineWebAuthUxRequest::WebAuthUxState state) {
        int sigval1 = static_cast<int>(state);
        slotFunc(self, sigval1);
    });
}

void QWebEngineWebAuthUxRequest_Cancel(QWebEngineWebAuthUxRequest* self) {
    self->cancel();
}

void QWebEngineWebAuthUxRequest_Retry(QWebEngineWebAuthUxRequest* self) {
    self->retry();
}

void QWebEngineWebAuthUxRequest_SetSelectedAccount(QWebEngineWebAuthUxRequest* self, const libqt_string selectedAccount) {
    QString selectedAccount_QString = QString::fromUtf8(selectedAccount.data, selectedAccount.len);
    self->setSelectedAccount(selectedAccount_QString);
}

void QWebEngineWebAuthUxRequest_SetPin(QWebEngineWebAuthUxRequest* self, const libqt_string pin) {
    QString pin_QString = QString::fromUtf8(pin.data, pin.len);
    self->setPin(pin_QString);
}

libqt_string QWebEngineWebAuthUxRequest_Tr2(const char* s, const char* c) {
    QString _ret = QWebEngineWebAuthUxRequest::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineWebAuthUxRequest_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWebEngineWebAuthUxRequest::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWebEngineWebAuthUxRequest_Delete(QWebEngineWebAuthUxRequest* self) {
    delete self;
}
