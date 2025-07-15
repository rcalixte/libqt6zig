#include <QByteArray>
#include <QDateTime>
#include <QIODevice>
#include <QList>
#include <QSslCertificate>
#include <QSslCertificateExtension>
#include <QSslError>
#include <QSslKey>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsslcertificate.h>
#include "libqsslcertificate.h"
#include "libqsslcertificate.hxx"

QSslCertificate* QSslCertificate_new(QIODevice* device) {
    return new QSslCertificate(device);
}

QSslCertificate* QSslCertificate_new2() {
    return new QSslCertificate();
}

QSslCertificate* QSslCertificate_new3(const QSslCertificate* other) {
    return new QSslCertificate(*other);
}

QSslCertificate* QSslCertificate_new4(QIODevice* device, int format) {
    return new QSslCertificate(device, static_cast<QSsl::EncodingFormat>(format));
}

QSslCertificate* QSslCertificate_new5(const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return new QSslCertificate(data_QByteArray);
}

QSslCertificate* QSslCertificate_new6(const libqt_string data, int format) {
    QByteArray data_QByteArray(data.data, data.len);
    return new QSslCertificate(data_QByteArray, static_cast<QSsl::EncodingFormat>(format));
}

void QSslCertificate_OperatorAssign(QSslCertificate* self, const QSslCertificate* other) {
    self->operator=(*other);
}

void QSslCertificate_Swap(QSslCertificate* self, QSslCertificate* other) {
    self->swap(*other);
}

bool QSslCertificate_OperatorEqual(const QSslCertificate* self, const QSslCertificate* other) {
    return (*self == *other);
}

bool QSslCertificate_OperatorNotEqual(const QSslCertificate* self, const QSslCertificate* other) {
    return (*self != *other);
}

bool QSslCertificate_IsNull(const QSslCertificate* self) {
    return self->isNull();
}

bool QSslCertificate_IsBlacklisted(const QSslCertificate* self) {
    return self->isBlacklisted();
}

bool QSslCertificate_IsSelfSigned(const QSslCertificate* self) {
    return self->isSelfSigned();
}

void QSslCertificate_Clear(QSslCertificate* self) {
    self->clear();
}

libqt_string QSslCertificate_Version(const QSslCertificate* self) {
    QByteArray _qb = self->version();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSslCertificate_SerialNumber(const QSslCertificate* self) {
    QByteArray _qb = self->serialNumber();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSslCertificate_Digest(const QSslCertificate* self) {
    QByteArray _qb = self->digest();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QSslCertificate_IssuerInfo(const QSslCertificate* self, int info) {
    QList<QString> _ret = self->issuerInfo(static_cast<QSslCertificate::SubjectInfo>(info));
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

libqt_list /* of libqt_string */ QSslCertificate_IssuerInfo2(const QSslCertificate* self, const libqt_string attribute) {
    QByteArray attribute_QByteArray(attribute.data, attribute.len);
    QList<QString> _ret = self->issuerInfo(attribute_QByteArray);
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

libqt_list /* of libqt_string */ QSslCertificate_SubjectInfo(const QSslCertificate* self, int info) {
    QList<QString> _ret = self->subjectInfo(static_cast<QSslCertificate::SubjectInfo>(info));
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

libqt_list /* of libqt_string */ QSslCertificate_SubjectInfo2(const QSslCertificate* self, const libqt_string attribute) {
    QByteArray attribute_QByteArray(attribute.data, attribute.len);
    QList<QString> _ret = self->subjectInfo(attribute_QByteArray);
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

libqt_string QSslCertificate_IssuerDisplayName(const QSslCertificate* self) {
    QString _ret = self->issuerDisplayName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSslCertificate_SubjectDisplayName(const QSslCertificate* self) {
    QString _ret = self->subjectDisplayName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QSslCertificate_SubjectInfoAttributes(const QSslCertificate* self) {
    QList<QByteArray> _ret = self->subjectInfoAttributes();
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

libqt_list /* of libqt_string */ QSslCertificate_IssuerInfoAttributes(const QSslCertificate* self) {
    QList<QByteArray> _ret = self->issuerInfoAttributes();
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

QDateTime* QSslCertificate_EffectiveDate(const QSslCertificate* self) {
    return new QDateTime(self->effectiveDate());
}

QDateTime* QSslCertificate_ExpiryDate(const QSslCertificate* self) {
    return new QDateTime(self->expiryDate());
}

QSslKey* QSslCertificate_PublicKey(const QSslCertificate* self) {
    return new QSslKey(self->publicKey());
}

libqt_list /* of QSslCertificateExtension* */ QSslCertificate_Extensions(const QSslCertificate* self) {
    QList<QSslCertificateExtension> _ret = self->extensions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QSslCertificateExtension** _arr = static_cast<QSslCertificateExtension**>(malloc(sizeof(QSslCertificateExtension*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSslCertificateExtension(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QSslCertificate_ToPem(const QSslCertificate* self) {
    QByteArray _qb = self->toPem();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSslCertificate_ToDer(const QSslCertificate* self) {
    QByteArray _qb = self->toDer();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSslCertificate_ToText(const QSslCertificate* self) {
    QString _ret = self->toText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QSslCertificate* */ QSslCertificate_FromPath(const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QList<QSslCertificate> _ret = QSslCertificate::fromPath(path_QString);
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

libqt_list /* of QSslCertificate* */ QSslCertificate_FromDevice(QIODevice* device) {
    QList<QSslCertificate> _ret = QSslCertificate::fromDevice(device);
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

libqt_list /* of QSslCertificate* */ QSslCertificate_FromData(const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    QList<QSslCertificate> _ret = QSslCertificate::fromData(data_QByteArray);
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

libqt_list /* of QSslError* */ QSslCertificate_Verify(const libqt_list /* of QSslCertificate* */ certificateChain) {
    QList<QSslCertificate> certificateChain_QList;
    certificateChain_QList.reserve(certificateChain.len);
    QSslCertificate** certificateChain_arr = static_cast<QSslCertificate**>(certificateChain.data);
    for (size_t i = 0; i < certificateChain.len; ++i) {
        certificateChain_QList.push_back(*(certificateChain_arr[i]));
    }
    QList<QSslError> _ret = QSslCertificate::verify(certificateChain_QList);
    // Convert QList<> from C++ memory to manually-managed C memory
    QSslError** _arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSslError(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QSslCertificate_ImportPkcs12(QIODevice* device, QSslKey* key, QSslCertificate* cert) {
    return QSslCertificate::importPkcs12(device, key, cert);
}

void* QSslCertificate_Handle(const QSslCertificate* self) {
    return static_cast<void*>(self->handle());
}

libqt_string QSslCertificate_Digest1(const QSslCertificate* self, int algorithm) {
    QByteArray _qb = self->digest(static_cast<QCryptographicHash::Algorithm>(algorithm));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QSslCertificate* */ QSslCertificate_FromPath2(const libqt_string path, int format) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QList<QSslCertificate> _ret = QSslCertificate::fromPath(path_QString, static_cast<QSsl::EncodingFormat>(format));
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

libqt_list /* of QSslCertificate* */ QSslCertificate_FromPath3(const libqt_string path, int format, int syntax) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QList<QSslCertificate> _ret = QSslCertificate::fromPath(path_QString, static_cast<QSsl::EncodingFormat>(format), static_cast<QSslCertificate::PatternSyntax>(syntax));
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

libqt_list /* of QSslCertificate* */ QSslCertificate_FromDevice2(QIODevice* device, int format) {
    QList<QSslCertificate> _ret = QSslCertificate::fromDevice(device, static_cast<QSsl::EncodingFormat>(format));
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

libqt_list /* of QSslCertificate* */ QSslCertificate_FromData2(const libqt_string data, int format) {
    QByteArray data_QByteArray(data.data, data.len);
    QList<QSslCertificate> _ret = QSslCertificate::fromData(data_QByteArray, static_cast<QSsl::EncodingFormat>(format));
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

libqt_list /* of QSslError* */ QSslCertificate_Verify2(const libqt_list /* of QSslCertificate* */ certificateChain, const libqt_string hostName) {
    QList<QSslCertificate> certificateChain_QList;
    certificateChain_QList.reserve(certificateChain.len);
    QSslCertificate** certificateChain_arr = static_cast<QSslCertificate**>(certificateChain.data);
    for (size_t i = 0; i < certificateChain.len; ++i) {
        certificateChain_QList.push_back(*(certificateChain_arr[i]));
    }
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    QList<QSslError> _ret = QSslCertificate::verify(certificateChain_QList, hostName_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    QSslError** _arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSslError(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QSslCertificate_ImportPkcs124(QIODevice* device, QSslKey* key, QSslCertificate* cert, libqt_list /* of QSslCertificate* */ caCertificates) {
    QList<QSslCertificate> caCertificates_QList;
    caCertificates_QList.reserve(caCertificates.len);
    QSslCertificate** caCertificates_arr = static_cast<QSslCertificate**>(caCertificates.data);
    for (size_t i = 0; i < caCertificates.len; ++i) {
        caCertificates_QList.push_back(*(caCertificates_arr[i]));
    }
    return QSslCertificate::importPkcs12(device, key, cert, &caCertificates_QList);
}

bool QSslCertificate_ImportPkcs125(QIODevice* device, QSslKey* key, QSslCertificate* cert, libqt_list /* of QSslCertificate* */ caCertificates, const libqt_string passPhrase) {
    QList<QSslCertificate> caCertificates_QList;
    caCertificates_QList.reserve(caCertificates.len);
    QSslCertificate** caCertificates_arr = static_cast<QSslCertificate**>(caCertificates.data);
    for (size_t i = 0; i < caCertificates.len; ++i) {
        caCertificates_QList.push_back(*(caCertificates_arr[i]));
    }
    QByteArray passPhrase_QByteArray(passPhrase.data, passPhrase.len);
    return QSslCertificate::importPkcs12(device, key, cert, &caCertificates_QList, passPhrase_QByteArray);
}

void QSslCertificate_Delete(QSslCertificate* self) {
    delete self;
}
