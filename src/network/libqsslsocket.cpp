#include <QAbstractSocket>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QIODevice>
#include <QIODeviceBase>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QOcspResponse>
#include <QSslCertificate>
#include <QSslCipher>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslKey>
#include <QSslPreSharedKeyAuthenticator>
#include <QSslSocket>
#include <QString>
#include <QTcpSocket>
#include <QTimerEvent>
#include <QVariant>
#include <qsslsocket.h>
#include "libqsslsocket.h"
#include "libqsslsocket.hxx"

QSslSocket* QSslSocket_new() {
    return new VirtualQSslSocket();
}

QSslSocket* QSslSocket_new2(QObject* parent) {
    return new VirtualQSslSocket(parent);
}

QMetaObject* QSslSocket_MetaObject(const QSslSocket* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSslSocket_Metacast(QSslSocket* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSslSocket_Metacall(QSslSocket* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSslSocket_Tr(const char* s) {
    auto _ret = QSslSocket::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSslSocket_Resume(QSslSocket* self) {
    self->resume();
}

void QSslSocket_ConnectToHostEncrypted(QSslSocket* self, const libqt_string hostName, uint16_t port) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port));
}

void QSslSocket_ConnectToHostEncrypted2(QSslSocket* self, const libqt_string hostName, uint16_t port, const libqt_string sslPeerName) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    QString sslPeerName_QString = QString::fromUtf8(sslPeerName.data, sslPeerName.len);
    self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), sslPeerName_QString);
}

bool QSslSocket_SetSocketDescriptor(QSslSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

void QSslSocket_ConnectToHost(QSslSocket* self, const libqt_string hostName, uint16_t port, int openMode, int protocol) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QSslSocket_DisconnectFromHost(QSslSocket* self) {
    self->disconnectFromHost();
}

void QSslSocket_SetSocketOption(QSslSocket* self, int option, const QVariant* value) {
    self->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}

QVariant* QSslSocket_SocketOption(QSslSocket* self, int option) {
    return new QVariant(self->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}

int QSslSocket_Mode(const QSslSocket* self) {
    return static_cast<int>(self->mode());
}

bool QSslSocket_IsEncrypted(const QSslSocket* self) {
    return self->isEncrypted();
}

int QSslSocket_Protocol(const QSslSocket* self) {
    return static_cast<int>(self->protocol());
}

void QSslSocket_SetProtocol(QSslSocket* self, int protocol) {
    self->setProtocol(static_cast<QSsl::SslProtocol>(protocol));
}

int QSslSocket_PeerVerifyMode(const QSslSocket* self) {
    return static_cast<int>(self->peerVerifyMode());
}

void QSslSocket_SetPeerVerifyMode(QSslSocket* self, int mode) {
    self->setPeerVerifyMode(static_cast<QSslSocket::PeerVerifyMode>(mode));
}

int QSslSocket_PeerVerifyDepth(const QSslSocket* self) {
    return self->peerVerifyDepth();
}

void QSslSocket_SetPeerVerifyDepth(QSslSocket* self, int depth) {
    self->setPeerVerifyDepth(static_cast<int>(depth));
}

libqt_string QSslSocket_PeerVerifyName(const QSslSocket* self) {
    auto _ret = self->peerVerifyName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSslSocket_SetPeerVerifyName(QSslSocket* self, const libqt_string hostName) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->setPeerVerifyName(hostName_QString);
}

long long QSslSocket_BytesAvailable(const QSslSocket* self) {
    return static_cast<long long>(self->bytesAvailable());
}

long long QSslSocket_BytesToWrite(const QSslSocket* self) {
    return static_cast<long long>(self->bytesToWrite());
}

bool QSslSocket_CanReadLine(const QSslSocket* self) {
    return self->canReadLine();
}

void QSslSocket_Close(QSslSocket* self) {
    self->close();
}

bool QSslSocket_AtEnd(const QSslSocket* self) {
    return self->atEnd();
}

void QSslSocket_SetReadBufferSize(QSslSocket* self, long long size) {
    self->setReadBufferSize(static_cast<qint64>(size));
}

long long QSslSocket_EncryptedBytesAvailable(const QSslSocket* self) {
    return static_cast<long long>(self->encryptedBytesAvailable());
}

long long QSslSocket_EncryptedBytesToWrite(const QSslSocket* self) {
    return static_cast<long long>(self->encryptedBytesToWrite());
}

QSslConfiguration* QSslSocket_SslConfiguration(const QSslSocket* self) {
    return new QSslConfiguration(self->sslConfiguration());
}

void QSslSocket_SetSslConfiguration(QSslSocket* self, const QSslConfiguration* config) {
    self->setSslConfiguration(*config);
}

void QSslSocket_SetLocalCertificateChain(QSslSocket* self, const libqt_list /* of QSslCertificate* */ localChain) {
    QList<QSslCertificate> localChain_QList;
    localChain_QList.reserve(localChain.len);
    QSslCertificate** localChain_arr = static_cast<QSslCertificate**>(localChain.data);
    for (size_t i = 0; i < localChain.len; ++i) {
        localChain_QList.push_back(*(localChain_arr[i]));
    }
    self->setLocalCertificateChain(localChain_QList);
}

libqt_list /* of QSslCertificate* */ QSslSocket_LocalCertificateChain(const QSslSocket* self) {
    QList<QSslCertificate> _ret = self->localCertificateChain();
    // Convert QList<> from C++ memory to manually-managed C memory
    QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSslCertificate(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QSslSocket_SetLocalCertificate(QSslSocket* self, const QSslCertificate* certificate) {
    self->setLocalCertificate(*certificate);
}

void QSslSocket_SetLocalCertificate2(QSslSocket* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setLocalCertificate(fileName_QString);
}

QSslCertificate* QSslSocket_LocalCertificate(const QSslSocket* self) {
    return new QSslCertificate(self->localCertificate());
}

QSslCertificate* QSslSocket_PeerCertificate(const QSslSocket* self) {
    return new QSslCertificate(self->peerCertificate());
}

libqt_list /* of QSslCertificate* */ QSslSocket_PeerCertificateChain(const QSslSocket* self) {
    QList<QSslCertificate> _ret = self->peerCertificateChain();
    // Convert QList<> from C++ memory to manually-managed C memory
    QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSslCertificate(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QSslCipher* QSslSocket_SessionCipher(const QSslSocket* self) {
    return new QSslCipher(self->sessionCipher());
}

int QSslSocket_SessionProtocol(const QSslSocket* self) {
    return static_cast<int>(self->sessionProtocol());
}

libqt_list /* of QOcspResponse* */ QSslSocket_OcspResponses(const QSslSocket* self) {
    QList<QOcspResponse> _ret = self->ocspResponses();
    // Convert QList<> from C++ memory to manually-managed C memory
    QOcspResponse** _arr = static_cast<QOcspResponse**>(malloc(sizeof(QOcspResponse*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QOcspResponse(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QSslSocket_SetPrivateKey(QSslSocket* self, const QSslKey* key) {
    self->setPrivateKey(*key);
}

void QSslSocket_SetPrivateKey2(QSslSocket* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setPrivateKey(fileName_QString);
}

QSslKey* QSslSocket_PrivateKey(const QSslSocket* self) {
    return new QSslKey(self->privateKey());
}

bool QSslSocket_WaitForConnected(QSslSocket* self, int msecs) {
    return self->waitForConnected(static_cast<int>(msecs));
}

bool QSslSocket_WaitForEncrypted(QSslSocket* self) {
    return self->waitForEncrypted();
}

bool QSslSocket_WaitForReadyRead(QSslSocket* self, int msecs) {
    return self->waitForReadyRead(static_cast<int>(msecs));
}

bool QSslSocket_WaitForBytesWritten(QSslSocket* self, int msecs) {
    return self->waitForBytesWritten(static_cast<int>(msecs));
}

bool QSslSocket_WaitForDisconnected(QSslSocket* self, int msecs) {
    return self->waitForDisconnected(static_cast<int>(msecs));
}

libqt_list /* of QSslError* */ QSslSocket_SslHandshakeErrors(const QSslSocket* self) {
    QList<QSslError> _ret = self->sslHandshakeErrors();
    // Convert QList<> from C++ memory to manually-managed C memory
    QSslError** _arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSslError(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QSslSocket_SupportsSsl() {
    return QSslSocket::supportsSsl();
}

long QSslSocket_SslLibraryVersionNumber() {
    return QSslSocket::sslLibraryVersionNumber();
}

libqt_string QSslSocket_SslLibraryVersionString() {
    auto _ret = QSslSocket::sslLibraryVersionString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

long QSslSocket_SslLibraryBuildVersionNumber() {
    return QSslSocket::sslLibraryBuildVersionNumber();
}

libqt_string QSslSocket_SslLibraryBuildVersionString() {
    auto _ret = QSslSocket::sslLibraryBuildVersionString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QSslSocket_AvailableBackends() {
    QList<QString> _ret = QSslSocket::availableBackends();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

libqt_string QSslSocket_ActiveBackend() {
    auto _ret = QSslSocket::activeBackend();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QSslSocket_SetActiveBackend(const libqt_string backendName) {
    QString backendName_QString = QString::fromUtf8(backendName.data, backendName.len);
    return QSslSocket::setActiveBackend(backendName_QString);
}

libqt_list /* of int */ QSslSocket_SupportedProtocols() {
    QList<QSsl::SslProtocol> _ret = QSslSocket::supportedProtocols();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QSslSocket_IsProtocolSupported(int protocol) {
    return QSslSocket::isProtocolSupported(static_cast<QSsl::SslProtocol>(protocol));
}

libqt_list /* of int */ QSslSocket_ImplementedClasses() {
    QList<QSsl::ImplementedClass> _ret = QSslSocket::implementedClasses();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QSslSocket_IsClassImplemented(int cl) {
    return QSslSocket::isClassImplemented(static_cast<QSsl::ImplementedClass>(cl));
}

libqt_list /* of int */ QSslSocket_SupportedFeatures() {
    QList<QSsl::SupportedFeature> _ret = QSslSocket::supportedFeatures();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QSslSocket_IsFeatureSupported(int feat) {
    return QSslSocket::isFeatureSupported(static_cast<QSsl::SupportedFeature>(feat));
}

void QSslSocket_IgnoreSslErrors(QSslSocket* self, const libqt_list /* of QSslError* */ errors) {
    QList<QSslError> errors_QList;
    errors_QList.reserve(errors.len);
    QSslError** errors_arr = static_cast<QSslError**>(errors.data);
    for (size_t i = 0; i < errors.len; ++i) {
        errors_QList.push_back(*(errors_arr[i]));
    }
    self->ignoreSslErrors(errors_QList);
}

void QSslSocket_ContinueInterruptedHandshake(QSslSocket* self) {
    self->continueInterruptedHandshake();
}

void QSslSocket_StartClientEncryption(QSslSocket* self) {
    self->startClientEncryption();
}

void QSslSocket_StartServerEncryption(QSslSocket* self) {
    self->startServerEncryption();
}

void QSslSocket_IgnoreSslErrors2(QSslSocket* self) {
    self->ignoreSslErrors();
}

void QSslSocket_Encrypted(QSslSocket* self) {
    self->encrypted();
}

void QSslSocket_Connect_Encrypted(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*) = reinterpret_cast<void (*)(QSslSocket*)>(slot);
    QSslSocket::connect(self,
                        static_cast<void (QSslSocket::*)()>(&QSslSocket::encrypted),
                        [self, slotFunc]() {
                            slotFunc(self);
                        });
}

void QSslSocket_PeerVerifyError(QSslSocket* self, const QSslError* errorVal) {
    self->peerVerifyError(*errorVal);
}

void QSslSocket_Connect_PeerVerifyError(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, QSslError*) = reinterpret_cast<void (*)(QSslSocket*, QSslError*)>(slot);
    QSslSocket::connect(self,
                        static_cast<void (QSslSocket::*)(const QSslError&)>(&QSslSocket::peerVerifyError),
                        [self, slotFunc](const QSslError& errorVal) {
                            const QSslError& errorVal_ret = errorVal;
                            // Cast returned reference into pointer
                            QSslError* sigval1 = const_cast<QSslError*>(&errorVal_ret);
                            slotFunc(self, sigval1);
                        });
}

void QSslSocket_SslErrors(QSslSocket* self, const libqt_list /* of QSslError* */ errors) {
    QList<QSslError> errors_QList;
    errors_QList.reserve(errors.len);
    QSslError** errors_arr = static_cast<QSslError**>(errors.data);
    for (size_t i = 0; i < errors.len; ++i) {
        errors_QList.push_back(*(errors_arr[i]));
    }
    self->sslErrors(errors_QList);
}

void QSslSocket_Connect_SslErrors(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, libqt_list /* of QSslError* */) = reinterpret_cast<void (*)(QSslSocket*, libqt_list /* of QSslError* */)>(slot);
    QSslSocket::connect(self,
                        static_cast<void (QSslSocket::*)(const QList<QSslError>&)>(&QSslSocket::sslErrors),
                        [self, slotFunc](const QList<QSslError>& errors) {
                            const QList<QSslError>& errors_ret = errors;
                            // Convert QList<> from C++ memory to manually-managed C memory
                            QSslError** errors_arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * (errors_ret.size())));
                            for (qsizetype i = 0; i < errors_ret.size(); ++i) {
                                errors_arr[i] = new QSslError(errors_ret[i]);
                            }
                            libqt_list errors_out;
                            errors_out.len = errors_ret.size();
                            errors_out.data = static_cast<void*>(errors_arr);
                            libqt_list /* of QSslError* */ sigval1 = errors_out;
                            slotFunc(self, sigval1);
                            free(errors_arr);
                        });
}

void QSslSocket_ModeChanged(QSslSocket* self, int newMode) {
    self->modeChanged(static_cast<QSslSocket::SslMode>(newMode));
}

void QSslSocket_Connect_ModeChanged(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, int) = reinterpret_cast<void (*)(QSslSocket*, int)>(slot);
    QSslSocket::connect(self,
                        static_cast<void (QSslSocket::*)(QSslSocket::SslMode)>(&QSslSocket::modeChanged),
                        [self, slotFunc](QSslSocket::SslMode newMode) {
                            int sigval1 = static_cast<int>(newMode);
                            slotFunc(self, sigval1);
                        });
}

void QSslSocket_EncryptedBytesWritten(QSslSocket* self, long long totalBytes) {
    self->encryptedBytesWritten(static_cast<qint64>(totalBytes));
}

void QSslSocket_Connect_EncryptedBytesWritten(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, long long) = reinterpret_cast<void (*)(QSslSocket*, long long)>(slot);
    QSslSocket::connect(self,
                        static_cast<void (QSslSocket::*)(qint64)>(&QSslSocket::encryptedBytesWritten),
                        [self, slotFunc](qint64 totalBytes) {
                            long long sigval1 = static_cast<long long>(totalBytes);
                            slotFunc(self, sigval1);
                        });
}

void QSslSocket_PreSharedKeyAuthenticationRequired(QSslSocket* self, QSslPreSharedKeyAuthenticator* authenticator) {
    self->preSharedKeyAuthenticationRequired(authenticator);
}

void QSslSocket_Connect_PreSharedKeyAuthenticationRequired(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, QSslPreSharedKeyAuthenticator*) = reinterpret_cast<void (*)(QSslSocket*, QSslPreSharedKeyAuthenticator*)>(slot);
    QSslSocket::connect(self,
                        static_cast<void (QSslSocket::*)(QSslPreSharedKeyAuthenticator*)>(&QSslSocket::preSharedKeyAuthenticationRequired),
                        [self, slotFunc](QSslPreSharedKeyAuthenticator* authenticator) {
                            QSslPreSharedKeyAuthenticator* sigval1 = authenticator;
                            slotFunc(self, sigval1);
                        });
}

void QSslSocket_NewSessionTicketReceived(QSslSocket* self) {
    self->newSessionTicketReceived();
}

void QSslSocket_Connect_NewSessionTicketReceived(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*) = reinterpret_cast<void (*)(QSslSocket*)>(slot);
    QSslSocket::connect(self,
                        static_cast<void (QSslSocket::*)()>(&QSslSocket::newSessionTicketReceived),
                        [self, slotFunc]() {
                            slotFunc(self);
                        });
}

void QSslSocket_AlertSent(QSslSocket* self, int level, int typeVal, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->alertSent(static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(typeVal), description_QString);
}

void QSslSocket_Connect_AlertSent(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, int, int, const char*) = reinterpret_cast<void (*)(QSslSocket*, int, int, const char*)>(slot);
    QSslSocket::connect(self,
                        static_cast<void (QSslSocket::*)(QSsl::AlertLevel, QSsl::AlertType, const QString&)>(&QSslSocket::alertSent),
                        [self, slotFunc](QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
                            int sigval1 = static_cast<int>(level);
                            int sigval2 = static_cast<int>(typeVal);
                            const auto description_ret = description;
                            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                            QByteArray description_b = description_ret.toUtf8();
                            auto description_str_len = description_b.length();
                            const char* description_str = static_cast<const char*>(malloc(description_str_len + 1));
                            memcpy((void*)description_str, description_b.data(), description_str_len);
                            ((char*)description_str)[description_str_len] = '\0';
                            const char* sigval3 = description_str;
                            slotFunc(self, sigval1, sigval2, sigval3);
                            libqt_free(description_str);
                        });
}

void QSslSocket_AlertReceived(QSslSocket* self, int level, int typeVal, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->alertReceived(static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(typeVal), description_QString);
}

void QSslSocket_Connect_AlertReceived(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, int, int, const char*) = reinterpret_cast<void (*)(QSslSocket*, int, int, const char*)>(slot);
    QSslSocket::connect(self,
                        static_cast<void (QSslSocket::*)(QSsl::AlertLevel, QSsl::AlertType, const QString&)>(&QSslSocket::alertReceived),
                        [self, slotFunc](QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
                            int sigval1 = static_cast<int>(level);
                            int sigval2 = static_cast<int>(typeVal);
                            const auto description_ret = description;
                            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                            QByteArray description_b = description_ret.toUtf8();
                            auto description_str_len = description_b.length();
                            const char* description_str = static_cast<const char*>(malloc(description_str_len + 1));
                            memcpy((void*)description_str, description_b.data(), description_str_len);
                            ((char*)description_str)[description_str_len] = '\0';
                            const char* sigval3 = description_str;
                            slotFunc(self, sigval1, sigval2, sigval3);
                            libqt_free(description_str);
                        });
}

void QSslSocket_HandshakeInterruptedOnError(QSslSocket* self, const QSslError* errorVal) {
    self->handshakeInterruptedOnError(*errorVal);
}

void QSslSocket_Connect_HandshakeInterruptedOnError(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, QSslError*) = reinterpret_cast<void (*)(QSslSocket*, QSslError*)>(slot);
    QSslSocket::connect(self,
                        static_cast<void (QSslSocket::*)(const QSslError&)>(&QSslSocket::handshakeInterruptedOnError),
                        [self, slotFunc](const QSslError& errorVal) {
                            const QSslError& errorVal_ret = errorVal;
                            // Cast returned reference into pointer
                            QSslError* sigval1 = const_cast<QSslError*>(&errorVal_ret);
                            slotFunc(self, sigval1);
                        });
}

long long QSslSocket_ReadData(QSslSocket* self, char* data, long long maxlen) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket) {
        return static_cast<long long>(vqsslsocket->readData(data, static_cast<qint64>(maxlen)));
    }
    qFatal("Error: Protected method QSslSocket::readData called without a directly constructed type");
}

long long QSslSocket_SkipData(QSslSocket* self, long long maxSize) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket) {
        return static_cast<long long>(vqsslsocket->skipData(static_cast<qint64>(maxSize)));
    }
    qFatal("Error: Protected method QSslSocket::skipData called without a directly constructed type");
}

long long QSslSocket_WriteData(QSslSocket* self, const char* data, long long len) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket) {
        return static_cast<long long>(vqsslsocket->writeData(data, static_cast<qint64>(len)));
    }
    qFatal("Error: Protected method QSslSocket::writeData called without a directly constructed type");
}

libqt_string QSslSocket_Tr2(const char* s, const char* c) {
    auto _ret = QSslSocket::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSslSocket_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSslSocket::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSslSocket_ConnectToHostEncrypted3(QSslSocket* self, const libqt_string hostName, uint16_t port, int mode) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode));
}

void QSslSocket_ConnectToHostEncrypted4(QSslSocket* self, const libqt_string hostName, uint16_t port, int mode, int protocol) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QSslSocket_ConnectToHostEncrypted42(QSslSocket* self, const libqt_string hostName, uint16_t port, const libqt_string sslPeerName, int mode) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    QString sslPeerName_QString = QString::fromUtf8(sslPeerName.data, sslPeerName.len);
    self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), sslPeerName_QString, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode));
}

void QSslSocket_ConnectToHostEncrypted5(QSslSocket* self, const libqt_string hostName, uint16_t port, const libqt_string sslPeerName, int mode, int protocol) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    QString sslPeerName_QString = QString::fromUtf8(sslPeerName.data, sslPeerName.len);
    self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), sslPeerName_QString, static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QSslSocket_SetLocalCertificate22(QSslSocket* self, const libqt_string fileName, int format) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setLocalCertificate(fileName_QString, static_cast<QSsl::EncodingFormat>(format));
}

void QSslSocket_SetPrivateKey22(QSslSocket* self, const libqt_string fileName, int algorithm) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setPrivateKey(fileName_QString, static_cast<QSsl::KeyAlgorithm>(algorithm));
}

void QSslSocket_SetPrivateKey3(QSslSocket* self, const libqt_string fileName, int algorithm, int format) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setPrivateKey(fileName_QString, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format));
}

void QSslSocket_SetPrivateKey4(QSslSocket* self, const libqt_string fileName, int algorithm, int format, const libqt_string passPhrase) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QByteArray passPhrase_QByteArray(passPhrase.data, passPhrase.len);
    self->setPrivateKey(fileName_QString, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), passPhrase_QByteArray);
}

bool QSslSocket_WaitForEncrypted1(QSslSocket* self, int msecs) {
    return self->waitForEncrypted(static_cast<int>(msecs));
}

libqt_list /* of int */ QSslSocket_SupportedProtocols1(const libqt_string backendName) {
    QString backendName_QString = QString::fromUtf8(backendName.data, backendName.len);
    QList<QSsl::SslProtocol> _ret = QSslSocket::supportedProtocols(backendName_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QSslSocket_IsProtocolSupported2(int protocol, const libqt_string backendName) {
    QString backendName_QString = QString::fromUtf8(backendName.data, backendName.len);
    return QSslSocket::isProtocolSupported(static_cast<QSsl::SslProtocol>(protocol), backendName_QString);
}

libqt_list /* of int */ QSslSocket_ImplementedClasses1(const libqt_string backendName) {
    QString backendName_QString = QString::fromUtf8(backendName.data, backendName.len);
    QList<QSsl::ImplementedClass> _ret = QSslSocket::implementedClasses(backendName_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QSslSocket_IsClassImplemented2(int cl, const libqt_string backendName) {
    QString backendName_QString = QString::fromUtf8(backendName.data, backendName.len);
    return QSslSocket::isClassImplemented(static_cast<QSsl::ImplementedClass>(cl), backendName_QString);
}

libqt_list /* of int */ QSslSocket_SupportedFeatures1(const libqt_string backendName) {
    QString backendName_QString = QString::fromUtf8(backendName.data, backendName.len);
    QList<QSsl::SupportedFeature> _ret = QSslSocket::supportedFeatures(backendName_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QSslSocket_IsFeatureSupported2(int feat, const libqt_string backendName) {
    QString backendName_QString = QString::fromUtf8(backendName.data, backendName.len);
    return QSslSocket::isFeatureSupported(static_cast<QSsl::SupportedFeature>(feat), backendName_QString);
}

// Base class handler implementation
QMetaObject* QSslSocket_SuperMetaObject(const QSslSocket* self) {
    return (QMetaObject*)self->QSslSocket::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnMetaObject(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self)))
        vqsslsocket->qsslsocket_metaobject_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSslSocket_SuperMetacast(QSslSocket* self, const char* param1) {
    return self->QSslSocket::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnMetacast(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_metacast_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSslSocket_SuperMetacall(QSslSocket* self, int param1, int param2, void** param3) {
    return self->QSslSocket::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnMetacall(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_metacall_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_Metacall_Callback>(slot);
}

// Base class handler implementation
void QSslSocket_SuperResume(QSslSocket* self) {
    self->QSslSocket::resume();
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnResume(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_resume_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_Resume_Callback>(slot);
}

// Base class handler implementation
bool QSslSocket_SuperSetSocketDescriptor(QSslSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    return self->QSslSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSetSocketDescriptor(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_setsocketdescriptor_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_SetSocketDescriptor_Callback>(slot);
}

// Base class handler implementation
void QSslSocket_SuperConnectToHost(QSslSocket* self, const libqt_string hostName, uint16_t port, int openMode, int protocol) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    self->QSslSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnConnectToHost(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_connecttohost_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_ConnectToHost_Callback>(slot);
}

// Base class handler implementation
void QSslSocket_SuperDisconnectFromHost(QSslSocket* self) {
    self->QSslSocket::disconnectFromHost();
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnDisconnectFromHost(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_disconnectfromhost_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_DisconnectFromHost_Callback>(slot);
}

// Base class handler implementation
void QSslSocket_SuperSetSocketOption(QSslSocket* self, int option, const QVariant* value) {
    self->QSslSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSetSocketOption(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_setsocketoption_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_SetSocketOption_Callback>(slot);
}

// Base class handler implementation
QVariant* QSslSocket_SuperSocketOption(QSslSocket* self, int option) {
    return new QVariant(self->QSslSocket::socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSocketOption(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_socketoption_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_SocketOption_Callback>(slot);
}

// Base class handler implementation
long long QSslSocket_SuperBytesAvailable(const QSslSocket* self) {
    return static_cast<long long>(self->QSslSocket::bytesAvailable());
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnBytesAvailable(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self)))
        vqsslsocket->qsslsocket_bytesavailable_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_BytesAvailable_Callback>(slot);
}

// Base class handler implementation
long long QSslSocket_SuperBytesToWrite(const QSslSocket* self) {
    return static_cast<long long>(self->QSslSocket::bytesToWrite());
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnBytesToWrite(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self)))
        vqsslsocket->qsslsocket_bytestowrite_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_BytesToWrite_Callback>(slot);
}

// Base class handler implementation
bool QSslSocket_SuperCanReadLine(const QSslSocket* self) {
    return self->QSslSocket::canReadLine();
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnCanReadLine(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self)))
        vqsslsocket->qsslsocket_canreadline_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_CanReadLine_Callback>(slot);
}

// Base class handler implementation
void QSslSocket_SuperClose(QSslSocket* self) {
    self->QSslSocket::close();
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnClose(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_close_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_Close_Callback>(slot);
}

// Base class handler implementation
bool QSslSocket_SuperAtEnd(const QSslSocket* self) {
    return self->QSslSocket::atEnd();
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnAtEnd(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self)))
        vqsslsocket->qsslsocket_atend_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_AtEnd_Callback>(slot);
}

// Base class handler implementation
void QSslSocket_SuperSetReadBufferSize(QSslSocket* self, long long size) {
    self->QSslSocket::setReadBufferSize(static_cast<qint64>(size));
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSetReadBufferSize(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_setreadbuffersize_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_SetReadBufferSize_Callback>(slot);
}

// Base class handler implementation
bool QSslSocket_SuperWaitForConnected(QSslSocket* self, int msecs) {
    return self->QSslSocket::waitForConnected(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnWaitForConnected(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_waitforconnected_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_WaitForConnected_Callback>(slot);
}

// Base class handler implementation
bool QSslSocket_SuperWaitForReadyRead(QSslSocket* self, int msecs) {
    return self->QSslSocket::waitForReadyRead(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnWaitForReadyRead(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_waitforreadyread_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_WaitForReadyRead_Callback>(slot);
}

// Base class handler implementation
bool QSslSocket_SuperWaitForBytesWritten(QSslSocket* self, int msecs) {
    return self->QSslSocket::waitForBytesWritten(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnWaitForBytesWritten(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_waitforbyteswritten_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_WaitForBytesWritten_Callback>(slot);
}

// Base class handler implementation
bool QSslSocket_SuperWaitForDisconnected(QSslSocket* self, int msecs) {
    return self->QSslSocket::waitForDisconnected(static_cast<int>(msecs));
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnWaitForDisconnected(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_waitfordisconnected_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_WaitForDisconnected_Callback>(slot);
}

// Base class handler implementation
long long QSslSocket_SuperReadData(QSslSocket* self, char* data, long long maxlen) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self)) {
        return static_cast<long long>(vqsslsocket->QSslSocket::readData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QSslSocket::readData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnReadData(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_readdata_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_ReadData_Callback>(slot);
}

// Base class handler implementation
long long QSslSocket_SuperSkipData(QSslSocket* self, long long maxSize) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self)) {
        return static_cast<long long>(vqsslsocket->QSslSocket::skipData(static_cast<qint64>(maxSize)));
    } else
        qFatal("Error: Protected virtual method QSslSocket::skipData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSkipData(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_skipdata_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_SkipData_Callback>(slot);
}

// Base class handler implementation
long long QSslSocket_SuperWriteData(QSslSocket* self, const char* data, long long len) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self)) {
        return static_cast<long long>(vqsslsocket->QSslSocket::writeData(data, static_cast<qint64>(len)));
    } else
        qFatal("Error: Protected virtual method QSslSocket::writeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnWriteData(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_writedata_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_WriteData_Callback>(slot);
}

// Derived class handler implementation
bool QSslSocket_Bind(QSslSocket* self, const QHostAddress* address, uint16_t port, int mode) {
    return self->bind(*address, static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
}

// Base class handler implementation
bool QSslSocket_SuperBind(QSslSocket* self, const QHostAddress* address, uint16_t port, int mode) {
    return self->QSslSocket::bind(*address, static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnBind(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_bind_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_Bind_Callback>(slot);
}

// Derived class handler implementation
intptr_t QSslSocket_SocketDescriptor(const QSslSocket* self) {
    qintptr _ret = self->socketDescriptor();
    return (intptr_t)(_ret);
}

// Base class handler implementation
intptr_t QSslSocket_SuperSocketDescriptor(const QSslSocket* self) {
    qintptr _ret = self->QSslSocket::socketDescriptor();
    return (intptr_t)(_ret);
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSocketDescriptor(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self)))
        vqsslsocket->qsslsocket_socketdescriptor_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_SocketDescriptor_Callback>(slot);
}

// Derived class handler implementation
bool QSslSocket_IsSequential(const QSslSocket* self) {
    return self->isSequential();
}

// Base class handler implementation
bool QSslSocket_SuperIsSequential(const QSslSocket* self) {
    return self->QSslSocket::isSequential();
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnIsSequential(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self)))
        vqsslsocket->qsslsocket_issequential_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_IsSequential_Callback>(slot);
}

// Derived class handler implementation
long long QSslSocket_ReadLineData(QSslSocket* self, char* data, long long maxlen) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket) {
        return static_cast<long long>(vqsslsocket->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        qFatal("Error: Protected virtual method QSslSocket::readLineData called without a directly constructed type");
    }
}

// Base class handler implementation
long long QSslSocket_SuperReadLineData(QSslSocket* self, char* data, long long maxlen) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self)) {
        return static_cast<long long>(vqsslsocket->QSslSocket::readLineData(data, static_cast<qint64>(maxlen)));
    } else
        qFatal("Error: Protected virtual method QSslSocket::readLineData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnReadLineData(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_readlinedata_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_ReadLineData_Callback>(slot);
}

// Derived class handler implementation
bool QSslSocket_Open(QSslSocket* self, int mode) {
    return self->open(static_cast<QIODeviceBase::OpenMode>(mode));
}

// Base class handler implementation
bool QSslSocket_SuperOpen(QSslSocket* self, int mode) {
    return self->QSslSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnOpen(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_open_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_Open_Callback>(slot);
}

// Derived class handler implementation
long long QSslSocket_Pos(const QSslSocket* self) {
    return static_cast<long long>(self->pos());
}

// Base class handler implementation
long long QSslSocket_SuperPos(const QSslSocket* self) {
    return static_cast<long long>(self->QSslSocket::pos());
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnPos(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self)))
        vqsslsocket->qsslsocket_pos_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_Pos_Callback>(slot);
}

// Derived class handler implementation
long long QSslSocket_Size(const QSslSocket* self) {
    return static_cast<long long>(self->size());
}

// Base class handler implementation
long long QSslSocket_SuperSize(const QSslSocket* self) {
    return static_cast<long long>(self->QSslSocket::size());
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSize(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self)))
        vqsslsocket->qsslsocket_size_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_Size_Callback>(slot);
}

// Derived class handler implementation
bool QSslSocket_Seek(QSslSocket* self, long long pos) {
    return self->seek(static_cast<qint64>(pos));
}

// Base class handler implementation
bool QSslSocket_SuperSeek(QSslSocket* self, long long pos) {
    return self->QSslSocket::seek(static_cast<qint64>(pos));
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSeek(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_seek_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_Seek_Callback>(slot);
}

// Derived class handler implementation
bool QSslSocket_Reset(QSslSocket* self) {
    return self->reset();
}

// Base class handler implementation
bool QSslSocket_SuperReset(QSslSocket* self) {
    return self->QSslSocket::reset();
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnReset(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_reset_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_Reset_Callback>(slot);
}

// Derived class handler implementation
bool QSslSocket_Event(QSslSocket* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSslSocket_SuperEvent(QSslSocket* self, QEvent* event) {
    return self->QSslSocket::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnEvent(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_event_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSslSocket_EventFilter(QSslSocket* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSslSocket_SuperEventFilter(QSslSocket* self, QObject* watched, QEvent* event) {
    return self->QSslSocket::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnEventFilter(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_eventfilter_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSslSocket_TimerEvent(QSslSocket* self, QTimerEvent* event) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket) {
        vqsslsocket->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSslSocket::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSslSocket_SuperTimerEvent(QSslSocket* self, QTimerEvent* event) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self)) {
        vqsslsocket->QSslSocket::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSslSocket::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnTimerEvent(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_timerevent_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSslSocket_ChildEvent(QSslSocket* self, QChildEvent* event) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket) {
        vqsslsocket->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSslSocket::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSslSocket_SuperChildEvent(QSslSocket* self, QChildEvent* event) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self)) {
        vqsslsocket->QSslSocket::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSslSocket::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnChildEvent(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_childevent_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSslSocket_CustomEvent(QSslSocket* self, QEvent* event) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket) {
        vqsslsocket->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSslSocket::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSslSocket_SuperCustomEvent(QSslSocket* self, QEvent* event) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self)) {
        vqsslsocket->QSslSocket::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSslSocket::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnCustomEvent(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_customevent_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSslSocket_ConnectNotify(QSslSocket* self, const QMetaMethod* signal) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket) {
        vqsslsocket->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSslSocket::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSslSocket_SuperConnectNotify(QSslSocket* self, const QMetaMethod* signal) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self)) {
        vqsslsocket->QSslSocket::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSslSocket::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnConnectNotify(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_connectnotify_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSslSocket_DisconnectNotify(QSslSocket* self, const QMetaMethod* signal) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket) {
        vqsslsocket->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSslSocket::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSslSocket_SuperDisconnectNotify(QSslSocket* self, const QMetaMethod* signal) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self)) {
        vqsslsocket->QSslSocket::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSslSocket::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnDisconnectNotify(QSslSocket* self, intptr_t slot) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self))
        vqsslsocket->qsslsocket_disconnectnotify_callback = reinterpret_cast<VirtualQSslSocket::QSslSocket_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QSslSocket_SetSocketState(QSslSocket* self, int state) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self)) {
        vqsslsocket->VirtualQSslSocket::setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    } else
        qFatal("Error: Protected method QSslSocket::setSocketState called without a directly constructed type");
}

// Derived class protected handler implementation
void QSslSocket_SetSocketError(QSslSocket* self, int socketError) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self)) {
        vqsslsocket->VirtualQSslSocket::setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    } else
        qFatal("Error: Protected method QSslSocket::setSocketError called without a directly constructed type");
}

// Derived class protected handler implementation
void QSslSocket_SetLocalPort(QSslSocket* self, uint16_t port) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self)) {
        vqsslsocket->VirtualQSslSocket::setLocalPort(static_cast<quint16>(port));
    } else
        qFatal("Error: Protected method QSslSocket::setLocalPort called without a directly constructed type");
}

// Derived class protected handler implementation
void QSslSocket_SetLocalAddress(QSslSocket* self, const QHostAddress* address) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self)) {
        vqsslsocket->VirtualQSslSocket::setLocalAddress(*address);
    } else
        qFatal("Error: Protected method QSslSocket::setLocalAddress called without a directly constructed type");
}

// Derived class protected handler implementation
void QSslSocket_SetPeerPort(QSslSocket* self, uint16_t port) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self)) {
        vqsslsocket->VirtualQSslSocket::setPeerPort(static_cast<quint16>(port));
    } else
        qFatal("Error: Protected method QSslSocket::setPeerPort called without a directly constructed type");
}

// Derived class protected handler implementation
void QSslSocket_SetPeerAddress(QSslSocket* self, const QHostAddress* address) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self)) {
        vqsslsocket->VirtualQSslSocket::setPeerAddress(*address);
    } else
        qFatal("Error: Protected method QSslSocket::setPeerAddress called without a directly constructed type");
}

// Derived class protected handler implementation
void QSslSocket_SetPeerName(QSslSocket* self, const libqt_string name) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self)) {
        QString name_QString = QString::fromUtf8(name.data, name.len);
        vqsslsocket->VirtualQSslSocket::setPeerName(name_QString);
    } else
        qFatal("Error: Protected method QSslSocket::setPeerName called without a directly constructed type");
}

// Derived class protected handler implementation
void QSslSocket_SetOpenMode(QSslSocket* self, int openMode) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self)) {
        vqsslsocket->VirtualQSslSocket::setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else
        qFatal("Error: Protected method QSslSocket::setOpenMode called without a directly constructed type");
}

// Derived class protected handler implementation
void QSslSocket_SetErrorString(QSslSocket* self, const libqt_string errorString) {
    if (auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self)) {
        QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
        vqsslsocket->VirtualQSslSocket::setErrorString(errorString_QString);
    } else
        qFatal("Error: Protected method QSslSocket::setErrorString called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QSslSocket_Sender(const QSslSocket* self) {
    if (auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self))) {
        return vqsslsocket->VirtualQSslSocket::sender();
    } else
        qFatal("Error: Protected method QSslSocket::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSslSocket_SenderSignalIndex(const QSslSocket* self) {
    if (auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self))) {
        return vqsslsocket->VirtualQSslSocket::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSslSocket::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSslSocket_Receivers(const QSslSocket* self, const char* signal) {
    if (auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self))) {
        return vqsslsocket->VirtualQSslSocket::receivers(signal);
    } else
        qFatal("Error: Protected method QSslSocket::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSslSocket_IsSignalConnected(const QSslSocket* self, const QMetaMethod* signal) {
    if (auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self))) {
        return vqsslsocket->VirtualQSslSocket::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSslSocket::isSignalConnected called without a directly constructed type");
}

void QSslSocket_Delete(QSslSocket* self) {
    delete self;
}
