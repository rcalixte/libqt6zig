#include <QByteArray>
#include <QList>
#include <QSslCertificate>
#include <QSslCipher>
#include <QSslConfiguration>
#include <QSslDiffieHellmanParameters>
#include <QSslEllipticCurve>
#include <QSslKey>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qsslconfiguration.h>
#include "libqsslconfiguration.h"
#include "libqsslconfiguration.hxx"

QSslConfiguration* QSslConfiguration_new() {
    return new QSslConfiguration();
}

QSslConfiguration* QSslConfiguration_new2(const QSslConfiguration* other) {
    return new QSslConfiguration(*other);
}

void QSslConfiguration_OperatorAssign(QSslConfiguration* self, const QSslConfiguration* other) {
    self->operator=(*other);
}

void QSslConfiguration_Swap(QSslConfiguration* self, QSslConfiguration* other) {
    self->swap(*other);
}

bool QSslConfiguration_OperatorEqual(const QSslConfiguration* self, const QSslConfiguration* other) {
    return (*self == *other);
}

bool QSslConfiguration_OperatorNotEqual(const QSslConfiguration* self, const QSslConfiguration* other) {
    return (*self != *other);
}

bool QSslConfiguration_IsNull(const QSslConfiguration* self) {
    return self->isNull();
}

int QSslConfiguration_Protocol(const QSslConfiguration* self) {
    return static_cast<int>(self->protocol());
}

void QSslConfiguration_SetProtocol(QSslConfiguration* self, int protocol) {
    self->setProtocol(static_cast<QSsl::SslProtocol>(protocol));
}

int QSslConfiguration_PeerVerifyMode(const QSslConfiguration* self) {
    return static_cast<int>(self->peerVerifyMode());
}

void QSslConfiguration_SetPeerVerifyMode(QSslConfiguration* self, int mode) {
    self->setPeerVerifyMode(static_cast<QSslSocket::PeerVerifyMode>(mode));
}

int QSslConfiguration_PeerVerifyDepth(const QSslConfiguration* self) {
    return self->peerVerifyDepth();
}

void QSslConfiguration_SetPeerVerifyDepth(QSslConfiguration* self, int depth) {
    self->setPeerVerifyDepth(static_cast<int>(depth));
}

libqt_list /* of QSslCertificate* */ QSslConfiguration_LocalCertificateChain(const QSslConfiguration* self) {
    QList<QSslCertificate> _ret = self->localCertificateChain();
    // Convert QList<> from C++ memory to manually-managed C memory
    QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSslCertificate(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QSslConfiguration_SetLocalCertificateChain(QSslConfiguration* self, const libqt_list /* of QSslCertificate* */ localChain) {
    QList<QSslCertificate> localChain_QList;
    localChain_QList.reserve(localChain.len);
    QSslCertificate** localChain_arr = static_cast<QSslCertificate**>(localChain.data);
    for (size_t i = 0; i < localChain.len; ++i) {
        localChain_QList.push_back(*(localChain_arr[i]));
    }
    self->setLocalCertificateChain(localChain_QList);
}

QSslCertificate* QSslConfiguration_LocalCertificate(const QSslConfiguration* self) {
    return new QSslCertificate(self->localCertificate());
}

void QSslConfiguration_SetLocalCertificate(QSslConfiguration* self, const QSslCertificate* certificate) {
    self->setLocalCertificate(*certificate);
}

QSslCertificate* QSslConfiguration_PeerCertificate(const QSslConfiguration* self) {
    return new QSslCertificate(self->peerCertificate());
}

libqt_list /* of QSslCertificate* */ QSslConfiguration_PeerCertificateChain(const QSslConfiguration* self) {
    QList<QSslCertificate> _ret = self->peerCertificateChain();
    // Convert QList<> from C++ memory to manually-managed C memory
    QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSslCertificate(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QSslCipher* QSslConfiguration_SessionCipher(const QSslConfiguration* self) {
    return new QSslCipher(self->sessionCipher());
}

int QSslConfiguration_SessionProtocol(const QSslConfiguration* self) {
    return static_cast<int>(self->sessionProtocol());
}

QSslKey* QSslConfiguration_PrivateKey(const QSslConfiguration* self) {
    return new QSslKey(self->privateKey());
}

void QSslConfiguration_SetPrivateKey(QSslConfiguration* self, const QSslKey* key) {
    self->setPrivateKey(*key);
}

libqt_list /* of QSslCipher* */ QSslConfiguration_Ciphers(const QSslConfiguration* self) {
    QList<QSslCipher> _ret = self->ciphers();
    // Convert QList<> from C++ memory to manually-managed C memory
    QSslCipher** _arr = static_cast<QSslCipher**>(malloc(sizeof(QSslCipher*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSslCipher(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QSslConfiguration_SetCiphers(QSslConfiguration* self, const libqt_list /* of QSslCipher* */ ciphers) {
    QList<QSslCipher> ciphers_QList;
    ciphers_QList.reserve(ciphers.len);
    QSslCipher** ciphers_arr = static_cast<QSslCipher**>(ciphers.data);
    for (size_t i = 0; i < ciphers.len; ++i) {
        ciphers_QList.push_back(*(ciphers_arr[i]));
    }
    self->setCiphers(ciphers_QList);
}

void QSslConfiguration_SetCiphersWithCiphers(QSslConfiguration* self, const libqt_string ciphers) {
    QString ciphers_QString = QString::fromUtf8(ciphers.data, ciphers.len);
    self->setCiphers(ciphers_QString);
}

libqt_list /* of QSslCipher* */ QSslConfiguration_SupportedCiphers() {
    QList<QSslCipher> _ret = QSslConfiguration::supportedCiphers();
    // Convert QList<> from C++ memory to manually-managed C memory
    QSslCipher** _arr = static_cast<QSslCipher**>(malloc(sizeof(QSslCipher*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSslCipher(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QSslCertificate* */ QSslConfiguration_CaCertificates(const QSslConfiguration* self) {
    QList<QSslCertificate> _ret = self->caCertificates();
    // Convert QList<> from C++ memory to manually-managed C memory
    QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSslCertificate(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QSslConfiguration_SetCaCertificates(QSslConfiguration* self, const libqt_list /* of QSslCertificate* */ certificates) {
    QList<QSslCertificate> certificates_QList;
    certificates_QList.reserve(certificates.len);
    QSslCertificate** certificates_arr = static_cast<QSslCertificate**>(certificates.data);
    for (size_t i = 0; i < certificates.len; ++i) {
        certificates_QList.push_back(*(certificates_arr[i]));
    }
    self->setCaCertificates(certificates_QList);
}

bool QSslConfiguration_AddCaCertificates(QSslConfiguration* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return self->addCaCertificates(path_QString);
}

void QSslConfiguration_AddCaCertificate(QSslConfiguration* self, const QSslCertificate* certificate) {
    self->addCaCertificate(*certificate);
}

void QSslConfiguration_AddCaCertificatesWithCertificates(QSslConfiguration* self, const libqt_list /* of QSslCertificate* */ certificates) {
    QList<QSslCertificate> certificates_QList;
    certificates_QList.reserve(certificates.len);
    QSslCertificate** certificates_arr = static_cast<QSslCertificate**>(certificates.data);
    for (size_t i = 0; i < certificates.len; ++i) {
        certificates_QList.push_back(*(certificates_arr[i]));
    }
    self->addCaCertificates(certificates_QList);
}

libqt_list /* of QSslCertificate* */ QSslConfiguration_SystemCaCertificates() {
    QList<QSslCertificate> _ret = QSslConfiguration::systemCaCertificates();
    // Convert QList<> from C++ memory to manually-managed C memory
    QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSslCertificate(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QSslConfiguration_SetSslOption(QSslConfiguration* self, int option, bool on) {
    self->setSslOption(static_cast<QSsl::SslOption>(option), on);
}

bool QSslConfiguration_TestSslOption(const QSslConfiguration* self, int option) {
    return self->testSslOption(static_cast<QSsl::SslOption>(option));
}

libqt_string QSslConfiguration_SessionTicket(const QSslConfiguration* self) {
    QByteArray _qb = self->sessionTicket();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSslConfiguration_SetSessionTicket(QSslConfiguration* self, const libqt_string sessionTicket) {
    QByteArray sessionTicket_QByteArray(sessionTicket.data, sessionTicket.len);
    self->setSessionTicket(sessionTicket_QByteArray);
}

int QSslConfiguration_SessionTicketLifeTimeHint(const QSslConfiguration* self) {
    return self->sessionTicketLifeTimeHint();
}

QSslKey* QSslConfiguration_EphemeralServerKey(const QSslConfiguration* self) {
    return new QSslKey(self->ephemeralServerKey());
}

libqt_list /* of QSslEllipticCurve* */ QSslConfiguration_EllipticCurves(const QSslConfiguration* self) {
    QList<QSslEllipticCurve> _ret = self->ellipticCurves();
    // Convert QList<> from C++ memory to manually-managed C memory
    QSslEllipticCurve** _arr = static_cast<QSslEllipticCurve**>(malloc(sizeof(QSslEllipticCurve*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSslEllipticCurve(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QSslConfiguration_SetEllipticCurves(QSslConfiguration* self, const libqt_list /* of QSslEllipticCurve* */ curves) {
    QList<QSslEllipticCurve> curves_QList;
    curves_QList.reserve(curves.len);
    QSslEllipticCurve** curves_arr = static_cast<QSslEllipticCurve**>(curves.data);
    for (size_t i = 0; i < curves.len; ++i) {
        curves_QList.push_back(*(curves_arr[i]));
    }
    self->setEllipticCurves(curves_QList);
}

libqt_list /* of QSslEllipticCurve* */ QSslConfiguration_SupportedEllipticCurves() {
    QList<QSslEllipticCurve> _ret = QSslConfiguration::supportedEllipticCurves();
    // Convert QList<> from C++ memory to manually-managed C memory
    QSslEllipticCurve** _arr = static_cast<QSslEllipticCurve**>(malloc(sizeof(QSslEllipticCurve*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSslEllipticCurve(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QSslConfiguration_PreSharedKeyIdentityHint(const QSslConfiguration* self) {
    QByteArray _qb = self->preSharedKeyIdentityHint();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSslConfiguration_SetPreSharedKeyIdentityHint(QSslConfiguration* self, const libqt_string hint) {
    QByteArray hint_QByteArray(hint.data, hint.len);
    self->setPreSharedKeyIdentityHint(hint_QByteArray);
}

QSslDiffieHellmanParameters* QSslConfiguration_DiffieHellmanParameters(const QSslConfiguration* self) {
    return new QSslDiffieHellmanParameters(self->diffieHellmanParameters());
}

void QSslConfiguration_SetDiffieHellmanParameters(QSslConfiguration* self, const QSslDiffieHellmanParameters* dhparams) {
    self->setDiffieHellmanParameters(*dhparams);
}

void QSslConfiguration_SetBackendConfigurationOption(QSslConfiguration* self, const libqt_string name, const QVariant* value) {
    QByteArray name_QByteArray(name.data, name.len);
    self->setBackendConfigurationOption(name_QByteArray, *value);
}

void QSslConfiguration_SetBackendConfiguration(QSslConfiguration* self) {
    self->setBackendConfiguration();
}

QSslConfiguration* QSslConfiguration_DefaultConfiguration() {
    return new QSslConfiguration(QSslConfiguration::defaultConfiguration());
}

void QSslConfiguration_SetDefaultConfiguration(const QSslConfiguration* configuration) {
    QSslConfiguration::setDefaultConfiguration(*configuration);
}

bool QSslConfiguration_DtlsCookieVerificationEnabled(const QSslConfiguration* self) {
    return self->dtlsCookieVerificationEnabled();
}

void QSslConfiguration_SetDtlsCookieVerificationEnabled(QSslConfiguration* self, bool enable) {
    self->setDtlsCookieVerificationEnabled(enable);
}

QSslConfiguration* QSslConfiguration_DefaultDtlsConfiguration() {
    return new QSslConfiguration(QSslConfiguration::defaultDtlsConfiguration());
}

void QSslConfiguration_SetDefaultDtlsConfiguration(const QSslConfiguration* configuration) {
    QSslConfiguration::setDefaultDtlsConfiguration(*configuration);
}

bool QSslConfiguration_HandshakeMustInterruptOnError(const QSslConfiguration* self) {
    return self->handshakeMustInterruptOnError();
}

void QSslConfiguration_SetHandshakeMustInterruptOnError(QSslConfiguration* self, bool interrupt) {
    self->setHandshakeMustInterruptOnError(interrupt);
}

bool QSslConfiguration_MissingCertificateIsFatal(const QSslConfiguration* self) {
    return self->missingCertificateIsFatal();
}

void QSslConfiguration_SetMissingCertificateIsFatal(QSslConfiguration* self, bool cannotRecover) {
    self->setMissingCertificateIsFatal(cannotRecover);
}

void QSslConfiguration_SetOcspStaplingEnabled(QSslConfiguration* self, bool enable) {
    self->setOcspStaplingEnabled(enable);
}

bool QSslConfiguration_OcspStaplingEnabled(const QSslConfiguration* self) {
    return self->ocspStaplingEnabled();
}

void QSslConfiguration_SetAllowedNextProtocols(QSslConfiguration* self, const libqt_list /* of libqt_string */ protocols) {
    QList<QByteArray> protocols_QList;
    protocols_QList.reserve(protocols.len);
    libqt_string* protocols_arr = static_cast<libqt_string*>(protocols.data);
    for (size_t i = 0; i < protocols.len; ++i) {
        QByteArray protocols_arr_i_QByteArray(protocols_arr[i].data, protocols_arr[i].len);
        protocols_QList.push_back(protocols_arr_i_QByteArray);
    }
    self->setAllowedNextProtocols(protocols_QList);
}

libqt_list /* of libqt_string */ QSslConfiguration_AllowedNextProtocols(const QSslConfiguration* self) {
    QList<QByteArray> _ret = self->allowedNextProtocols();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QSslConfiguration_NextNegotiatedProtocol(const QSslConfiguration* self) {
    QByteArray _qb = self->nextNegotiatedProtocol();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QSslConfiguration_NextProtocolNegotiationStatus(const QSslConfiguration* self) {
    return static_cast<int>(self->nextProtocolNegotiationStatus());
}

bool QSslConfiguration_AddCaCertificates2(QSslConfiguration* self, const libqt_string path, int format) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return self->addCaCertificates(path_QString, static_cast<QSsl::EncodingFormat>(format));
}

bool QSslConfiguration_AddCaCertificates3(QSslConfiguration* self, const libqt_string path, int format, int syntax) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return self->addCaCertificates(path_QString, static_cast<QSsl::EncodingFormat>(format), static_cast<QSslCertificate::PatternSyntax>(syntax));
}

void QSslConfiguration_Delete(QSslConfiguration* self) {
    delete self;
}
