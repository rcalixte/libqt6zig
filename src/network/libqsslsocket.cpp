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
#include <QByteArray>
#include <cstring>
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
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSslSocket*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSslSocket_Tr(const char* s) {
    QString _ret = QSslSocket::tr(s);
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
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        self->resume();
    } else {
        ((VirtualQSslSocket*)self)->resume();
    }
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
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
    } else {
        return ((VirtualQSslSocket*)self)->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
    }
}

void QSslSocket_ConnectToHost(QSslSocket* self, const libqt_string hostName, uint16_t port, int openMode, int protocol) {
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        self->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    } else {
        ((VirtualQSslSocket*)self)->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    }
}

void QSslSocket_DisconnectFromHost(QSslSocket* self) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        self->disconnectFromHost();
    } else {
        ((VirtualQSslSocket*)self)->disconnectFromHost();
    }
}

void QSslSocket_SetSocketOption(QSslSocket* self, int option, const QVariant* value) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        self->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    } else {
        ((VirtualQSslSocket*)self)->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    }
}

QVariant* QSslSocket_SocketOption(QSslSocket* self, int option) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return new QVariant(self->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    } else {
        return new QVariant(((VirtualQSslSocket*)self)->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    }
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
    QString _ret = self->peerVerifyName();
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
    auto* vqsslsocket = dynamic_cast<const VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return static_cast<long long>(self->bytesAvailable());
    } else {
        return static_cast<long long>(((VirtualQSslSocket*)self)->bytesAvailable());
    }
}

long long QSslSocket_BytesToWrite(const QSslSocket* self) {
    auto* vqsslsocket = dynamic_cast<const VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return static_cast<long long>(self->bytesToWrite());
    } else {
        return static_cast<long long>(((VirtualQSslSocket*)self)->bytesToWrite());
    }
}

bool QSslSocket_CanReadLine(const QSslSocket* self) {
    auto* vqsslsocket = dynamic_cast<const VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return self->canReadLine();
    } else {
        return ((VirtualQSslSocket*)self)->canReadLine();
    }
}

void QSslSocket_Close(QSslSocket* self) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        self->close();
    } else {
        ((VirtualQSslSocket*)self)->close();
    }
}

bool QSslSocket_AtEnd(const QSslSocket* self) {
    auto* vqsslsocket = dynamic_cast<const VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return self->atEnd();
    } else {
        return ((VirtualQSslSocket*)self)->atEnd();
    }
}

void QSslSocket_SetReadBufferSize(QSslSocket* self, long long size) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        self->setReadBufferSize(static_cast<qint64>(size));
    } else {
        ((VirtualQSslSocket*)self)->setReadBufferSize(static_cast<qint64>(size));
    }
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
    QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * (_ret.size() + 1)));
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
    QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * (_ret.size() + 1)));
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
    QOcspResponse** _arr = static_cast<QOcspResponse**>(malloc(sizeof(QOcspResponse*) * (_ret.size() + 1)));
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
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return self->waitForConnected(static_cast<int>(msecs));
    } else {
        return ((VirtualQSslSocket*)self)->waitForConnected(static_cast<int>(msecs));
    }
}

bool QSslSocket_WaitForEncrypted(QSslSocket* self) {
    return self->waitForEncrypted();
}

bool QSslSocket_WaitForReadyRead(QSslSocket* self, int msecs) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return self->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return ((VirtualQSslSocket*)self)->waitForReadyRead(static_cast<int>(msecs));
    }
}

bool QSslSocket_WaitForBytesWritten(QSslSocket* self, int msecs) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return self->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return ((VirtualQSslSocket*)self)->waitForBytesWritten(static_cast<int>(msecs));
    }
}

bool QSslSocket_WaitForDisconnected(QSslSocket* self, int msecs) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return self->waitForDisconnected(static_cast<int>(msecs));
    } else {
        return ((VirtualQSslSocket*)self)->waitForDisconnected(static_cast<int>(msecs));
    }
}

libqt_list /* of QSslError* */ QSslSocket_SslHandshakeErrors(const QSslSocket* self) {
    QList<QSslError> _ret = self->sslHandshakeErrors();
    // Convert QList<> from C++ memory to manually-managed C memory
    QSslError** _arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * (_ret.size() + 1)));
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
    QString _ret = QSslSocket::sslLibraryVersionString();
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
    QString _ret = QSslSocket::sslLibraryBuildVersionString();
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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

libqt_string QSslSocket_ActiveBackend() {
    QString _ret = QSslSocket::activeBackend();
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
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
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
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
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
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
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
    QSslSocket::connect(self, &QSslSocket::encrypted, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSslSocket_PeerVerifyError(QSslSocket* self, const QSslError* errorVal) {
    self->peerVerifyError(*errorVal);
}

void QSslSocket_Connect_PeerVerifyError(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, QSslError*) = reinterpret_cast<void (*)(QSslSocket*, QSslError*)>(slot);
    QSslSocket::connect(self, &QSslSocket::peerVerifyError, [self, slotFunc](const QSslError& errorVal) {
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
    void (*slotFunc)(QSslSocket*, QSslError**) = reinterpret_cast<void (*)(QSslSocket*, QSslError**)>(slot);
    QSslSocket::connect(self, &QSslSocket::sslErrors, [self, slotFunc](const QList<QSslError>& errors) {
        const QList<QSslError>& errors_ret = errors;
        // Convert QList<> from C++ memory to manually-managed C memory
        QSslError** errors_arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * (errors_ret.size() + 1)));
        for (qsizetype i = 0; i < errors_ret.size(); ++i) {
            errors_arr[i] = new QSslError(errors_ret[i]);
        }
        // Append sentinel value to the list
        errors_arr[errors_ret.size()] = nullptr;
        QSslError** sigval1 = errors_arr;
        slotFunc(self, sigval1);
        free(errors_arr);
    });
}

void QSslSocket_ModeChanged(QSslSocket* self, int newMode) {
    self->modeChanged(static_cast<QSslSocket::SslMode>(newMode));
}

void QSslSocket_Connect_ModeChanged(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, int) = reinterpret_cast<void (*)(QSslSocket*, int)>(slot);
    QSslSocket::connect(self, &QSslSocket::modeChanged, [self, slotFunc](QSslSocket::SslMode newMode) {
        int sigval1 = static_cast<int>(newMode);
        slotFunc(self, sigval1);
    });
}

void QSslSocket_EncryptedBytesWritten(QSslSocket* self, long long totalBytes) {
    self->encryptedBytesWritten(static_cast<qint64>(totalBytes));
}

void QSslSocket_Connect_EncryptedBytesWritten(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, long long) = reinterpret_cast<void (*)(QSslSocket*, long long)>(slot);
    QSslSocket::connect(self, &QSslSocket::encryptedBytesWritten, [self, slotFunc](qint64 totalBytes) {
        long long sigval1 = static_cast<long long>(totalBytes);
        slotFunc(self, sigval1);
    });
}

void QSslSocket_PreSharedKeyAuthenticationRequired(QSslSocket* self, QSslPreSharedKeyAuthenticator* authenticator) {
    self->preSharedKeyAuthenticationRequired(authenticator);
}

void QSslSocket_Connect_PreSharedKeyAuthenticationRequired(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, QSslPreSharedKeyAuthenticator*) = reinterpret_cast<void (*)(QSslSocket*, QSslPreSharedKeyAuthenticator*)>(slot);
    QSslSocket::connect(self, &QSslSocket::preSharedKeyAuthenticationRequired, [self, slotFunc](QSslPreSharedKeyAuthenticator* authenticator) {
        QSslPreSharedKeyAuthenticator* sigval1 = authenticator;
        slotFunc(self, sigval1);
    });
}

void QSslSocket_NewSessionTicketReceived(QSslSocket* self) {
    self->newSessionTicketReceived();
}

void QSslSocket_Connect_NewSessionTicketReceived(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*) = reinterpret_cast<void (*)(QSslSocket*)>(slot);
    QSslSocket::connect(self, &QSslSocket::newSessionTicketReceived, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QSslSocket_AlertSent(QSslSocket* self, int level, int typeVal, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->alertSent(static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(typeVal), description_QString);
}

void QSslSocket_Connect_AlertSent(QSslSocket* self, intptr_t slot) {
    void (*slotFunc)(QSslSocket*, int, int, const char*) = reinterpret_cast<void (*)(QSslSocket*, int, int, const char*)>(slot);
    QSslSocket::connect(self, &QSslSocket::alertSent, [self, slotFunc](QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
        int sigval1 = static_cast<int>(level);
        int sigval2 = static_cast<int>(typeVal);
        const QString description_ret = description;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray description_b = description_ret.toUtf8();
        const char* description_str = static_cast<const char*>(malloc(description_b.length() + 1));
        memcpy((void*)description_str, description_b.data(), description_b.length());
        ((char*)description_str)[description_b.length()] = '\0';
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
    QSslSocket::connect(self, &QSslSocket::alertReceived, [self, slotFunc](QSsl::AlertLevel level, QSsl::AlertType typeVal, const QString& description) {
        int sigval1 = static_cast<int>(level);
        int sigval2 = static_cast<int>(typeVal);
        const QString description_ret = description;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray description_b = description_ret.toUtf8();
        const char* description_str = static_cast<const char*>(malloc(description_b.length() + 1));
        memcpy((void*)description_str, description_b.data(), description_b.length());
        ((char*)description_str)[description_b.length()] = '\0';
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
    QSslSocket::connect(self, &QSslSocket::handshakeInterruptedOnError, [self, slotFunc](const QSslError& errorVal) {
        const QSslError& errorVal_ret = errorVal;
        // Cast returned reference into pointer
        QSslError* sigval1 = const_cast<QSslError*>(&errorVal_ret);
        slotFunc(self, sigval1);
    });
}

long long QSslSocket_ReadData(QSslSocket* self, char* data, long long maxlen) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return static_cast<long long>(vqsslsocket->readData(data, static_cast<qint64>(maxlen)));
    }
    return {};
}

long long QSslSocket_SkipData(QSslSocket* self, long long maxSize) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return static_cast<long long>(vqsslsocket->skipData(static_cast<qint64>(maxSize)));
    }
    return {};
}

long long QSslSocket_WriteData(QSslSocket* self, const char* data, long long lenVal) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return static_cast<long long>(vqsslsocket->writeData(data, static_cast<qint64>(lenVal)));
    }
    return {};
}

libqt_string QSslSocket_Tr2(const char* s, const char* c) {
    QString _ret = QSslSocket::tr(s, c);
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
    QString _ret = QSslSocket::tr(s, c, static_cast<int>(n));
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
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
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
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
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
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
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
int QSslSocket_QBaseMetacall(QSslSocket* self, int param1, int param2, void** param3) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Metacall_IsBase(true);
        return vqsslsocket->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QSslSocket::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnMetacall(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Metacall_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QSslSocket_QBaseResume(QSslSocket* self) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Resume_IsBase(true);
        vqsslsocket->resume();
    } else {
        self->QSslSocket::resume();
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnResume(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Resume_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_Resume_Callback>(slot));
    }
}

// Base class handler implementation
bool QSslSocket_QBaseSetSocketDescriptor(QSslSocket* self, intptr_t socketDescriptor, int state, int openMode) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetSocketDescriptor_IsBase(true);
        return vqsslsocket->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
    } else {
        return self->QSslSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSetSocketDescriptor(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetSocketDescriptor_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SetSocketDescriptor_Callback>(slot));
    }
}

// Base class handler implementation
void QSslSocket_QBaseConnectToHost(QSslSocket* self, const libqt_string hostName, uint16_t port, int openMode, int protocol) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_ConnectToHost_IsBase(true);
        vqsslsocket->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    } else {
        self->QSslSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(openMode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnConnectToHost(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_ConnectToHost_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_ConnectToHost_Callback>(slot));
    }
}

// Base class handler implementation
void QSslSocket_QBaseDisconnectFromHost(QSslSocket* self) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_DisconnectFromHost_IsBase(true);
        vqsslsocket->disconnectFromHost();
    } else {
        self->QSslSocket::disconnectFromHost();
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnDisconnectFromHost(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_DisconnectFromHost_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_DisconnectFromHost_Callback>(slot));
    }
}

// Base class handler implementation
void QSslSocket_QBaseSetSocketOption(QSslSocket* self, int option, const QVariant* value) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetSocketOption_IsBase(true);
        vqsslsocket->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    } else {
        self->QSslSocket::setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSetSocketOption(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetSocketOption_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SetSocketOption_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* QSslSocket_QBaseSocketOption(QSslSocket* self, int option) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SocketOption_IsBase(true);
        return new QVariant(vqsslsocket->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    } else {
        return new QVariant(((VirtualQSslSocket*)self)->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSocketOption(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SocketOption_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SocketOption_Callback>(slot));
    }
}

// Base class handler implementation
long long QSslSocket_QBaseBytesAvailable(const QSslSocket* self) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_BytesAvailable_IsBase(true);
        return static_cast<long long>(vqsslsocket->bytesAvailable());
    } else {
        return static_cast<long long>(self->QSslSocket::bytesAvailable());
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnBytesAvailable(const QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_BytesAvailable_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_BytesAvailable_Callback>(slot));
    }
}

// Base class handler implementation
long long QSslSocket_QBaseBytesToWrite(const QSslSocket* self) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_BytesToWrite_IsBase(true);
        return static_cast<long long>(vqsslsocket->bytesToWrite());
    } else {
        return static_cast<long long>(self->QSslSocket::bytesToWrite());
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnBytesToWrite(const QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_BytesToWrite_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_BytesToWrite_Callback>(slot));
    }
}

// Base class handler implementation
bool QSslSocket_QBaseCanReadLine(const QSslSocket* self) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_CanReadLine_IsBase(true);
        return vqsslsocket->canReadLine();
    } else {
        return self->QSslSocket::canReadLine();
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnCanReadLine(const QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_CanReadLine_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_CanReadLine_Callback>(slot));
    }
}

// Base class handler implementation
void QSslSocket_QBaseClose(QSslSocket* self) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Close_IsBase(true);
        vqsslsocket->close();
    } else {
        self->QSslSocket::close();
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnClose(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Close_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_Close_Callback>(slot));
    }
}

// Base class handler implementation
bool QSslSocket_QBaseAtEnd(const QSslSocket* self) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_AtEnd_IsBase(true);
        return vqsslsocket->atEnd();
    } else {
        return self->QSslSocket::atEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnAtEnd(const QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_AtEnd_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_AtEnd_Callback>(slot));
    }
}

// Base class handler implementation
void QSslSocket_QBaseSetReadBufferSize(QSslSocket* self, long long size) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetReadBufferSize_IsBase(true);
        vqsslsocket->setReadBufferSize(static_cast<qint64>(size));
    } else {
        self->QSslSocket::setReadBufferSize(static_cast<qint64>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSetReadBufferSize(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetReadBufferSize_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SetReadBufferSize_Callback>(slot));
    }
}

// Base class handler implementation
bool QSslSocket_QBaseWaitForConnected(QSslSocket* self, int msecs) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_WaitForConnected_IsBase(true);
        return vqsslsocket->waitForConnected(static_cast<int>(msecs));
    } else {
        return self->QSslSocket::waitForConnected(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnWaitForConnected(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_WaitForConnected_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_WaitForConnected_Callback>(slot));
    }
}

// Base class handler implementation
bool QSslSocket_QBaseWaitForReadyRead(QSslSocket* self, int msecs) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_WaitForReadyRead_IsBase(true);
        return vqsslsocket->waitForReadyRead(static_cast<int>(msecs));
    } else {
        return self->QSslSocket::waitForReadyRead(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnWaitForReadyRead(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_WaitForReadyRead_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_WaitForReadyRead_Callback>(slot));
    }
}

// Base class handler implementation
bool QSslSocket_QBaseWaitForBytesWritten(QSslSocket* self, int msecs) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_WaitForBytesWritten_IsBase(true);
        return vqsslsocket->waitForBytesWritten(static_cast<int>(msecs));
    } else {
        return self->QSslSocket::waitForBytesWritten(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnWaitForBytesWritten(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_WaitForBytesWritten_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_WaitForBytesWritten_Callback>(slot));
    }
}

// Base class handler implementation
bool QSslSocket_QBaseWaitForDisconnected(QSslSocket* self, int msecs) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_WaitForDisconnected_IsBase(true);
        return vqsslsocket->waitForDisconnected(static_cast<int>(msecs));
    } else {
        return self->QSslSocket::waitForDisconnected(static_cast<int>(msecs));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnWaitForDisconnected(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_WaitForDisconnected_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_WaitForDisconnected_Callback>(slot));
    }
}

// Base class handler implementation
long long QSslSocket_QBaseReadData(QSslSocket* self, char* data, long long maxlen) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_ReadData_IsBase(true);
        return static_cast<long long>(vqsslsocket->readData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQSslSocket*)self)->readData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnReadData(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_ReadData_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_ReadData_Callback>(slot));
    }
}

// Base class handler implementation
long long QSslSocket_QBaseSkipData(QSslSocket* self, long long maxSize) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SkipData_IsBase(true);
        return static_cast<long long>(vqsslsocket->skipData(static_cast<qint64>(maxSize)));
    } else {
        return static_cast<long long>(((VirtualQSslSocket*)self)->skipData(static_cast<qint64>(maxSize)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSkipData(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SkipData_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SkipData_Callback>(slot));
    }
}

// Base class handler implementation
long long QSslSocket_QBaseWriteData(QSslSocket* self, const char* data, long long lenVal) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_WriteData_IsBase(true);
        return static_cast<long long>(vqsslsocket->writeData(data, static_cast<qint64>(lenVal)));
    } else {
        return static_cast<long long>(((VirtualQSslSocket*)self)->writeData(data, static_cast<qint64>(lenVal)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnWriteData(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_WriteData_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_WriteData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSslSocket_Bind(QSslSocket* self, const QHostAddress* address, uint16_t port, int mode) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return vqsslsocket->bind(*address, static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
    } else {
        return self->QSslSocket::bind(*address, static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
    }
}

// Base class handler implementation
bool QSslSocket_QBaseBind(QSslSocket* self, const QHostAddress* address, uint16_t port, int mode) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Bind_IsBase(true);
        return vqsslsocket->bind(*address, static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
    } else {
        return self->QSslSocket::bind(*address, static_cast<quint16>(port), static_cast<QFlags<QAbstractSocket::BindFlag>>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnBind(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Bind_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_Bind_Callback>(slot));
    }
}

// Derived class handler implementation
intptr_t QSslSocket_SocketDescriptor(const QSslSocket* self) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        qintptr _ret = vqsslsocket->socketDescriptor();
        return (intptr_t)(_ret);
    } else {
        qintptr _ret = self->QSslSocket::socketDescriptor();
        return (intptr_t)(_ret);
    }
}

// Base class handler implementation
intptr_t QSslSocket_QBaseSocketDescriptor(const QSslSocket* self) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SocketDescriptor_IsBase(true);
        qintptr _ret = vqsslsocket->socketDescriptor();
        return (intptr_t)(_ret);
    } else {
        qintptr _ret = self->QSslSocket::socketDescriptor();
        return (intptr_t)(_ret);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSocketDescriptor(const QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SocketDescriptor_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SocketDescriptor_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSslSocket_IsSequential(const QSslSocket* self) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return vqsslsocket->isSequential();
    } else {
        return self->QSslSocket::isSequential();
    }
}

// Base class handler implementation
bool QSslSocket_QBaseIsSequential(const QSslSocket* self) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_IsSequential_IsBase(true);
        return vqsslsocket->isSequential();
    } else {
        return self->QSslSocket::isSequential();
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnIsSequential(const QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_IsSequential_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_IsSequential_Callback>(slot));
    }
}

// Derived class handler implementation
long long QSslSocket_ReadLineData(QSslSocket* self, char* data, long long maxlen) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return static_cast<long long>(vqsslsocket->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQSslSocket*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Base class handler implementation
long long QSslSocket_QBaseReadLineData(QSslSocket* self, char* data, long long maxlen) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_ReadLineData_IsBase(true);
        return static_cast<long long>(vqsslsocket->readLineData(data, static_cast<qint64>(maxlen)));
    } else {
        return static_cast<long long>(((VirtualQSslSocket*)self)->readLineData(data, static_cast<qint64>(maxlen)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnReadLineData(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_ReadLineData_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_ReadLineData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSslSocket_Open(QSslSocket* self, int mode) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return vqsslsocket->open(static_cast<QIODeviceBase::OpenMode>(mode));
    } else {
        return self->QSslSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));
    }
}

// Base class handler implementation
bool QSslSocket_QBaseOpen(QSslSocket* self, int mode) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Open_IsBase(true);
        return vqsslsocket->open(static_cast<QIODeviceBase::OpenMode>(mode));
    } else {
        return self->QSslSocket::open(static_cast<QIODeviceBase::OpenMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnOpen(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Open_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_Open_Callback>(slot));
    }
}

// Derived class handler implementation
long long QSslSocket_Pos(const QSslSocket* self) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return static_cast<long long>(vqsslsocket->pos());
    } else {
        return static_cast<long long>(self->QSslSocket::pos());
    }
}

// Base class handler implementation
long long QSslSocket_QBasePos(const QSslSocket* self) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Pos_IsBase(true);
        return static_cast<long long>(vqsslsocket->pos());
    } else {
        return static_cast<long long>(self->QSslSocket::pos());
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnPos(const QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Pos_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_Pos_Callback>(slot));
    }
}

// Derived class handler implementation
long long QSslSocket_Size(const QSslSocket* self) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return static_cast<long long>(vqsslsocket->size());
    } else {
        return static_cast<long long>(self->QSslSocket::size());
    }
}

// Base class handler implementation
long long QSslSocket_QBaseSize(const QSslSocket* self) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Size_IsBase(true);
        return static_cast<long long>(vqsslsocket->size());
    } else {
        return static_cast<long long>(self->QSslSocket::size());
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSize(const QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Size_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSslSocket_Seek(QSslSocket* self, long long pos) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return vqsslsocket->seek(static_cast<qint64>(pos));
    } else {
        return self->QSslSocket::seek(static_cast<qint64>(pos));
    }
}

// Base class handler implementation
bool QSslSocket_QBaseSeek(QSslSocket* self, long long pos) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Seek_IsBase(true);
        return vqsslsocket->seek(static_cast<qint64>(pos));
    } else {
        return self->QSslSocket::seek(static_cast<qint64>(pos));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSeek(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Seek_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_Seek_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSslSocket_Reset(QSslSocket* self) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return vqsslsocket->reset();
    } else {
        return self->QSslSocket::reset();
    }
}

// Base class handler implementation
bool QSslSocket_QBaseReset(QSslSocket* self) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Reset_IsBase(true);
        return vqsslsocket->reset();
    } else {
        return self->QSslSocket::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnReset(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Reset_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSslSocket_Event(QSslSocket* self, QEvent* event) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return vqsslsocket->event(event);
    } else {
        return self->QSslSocket::event(event);
    }
}

// Base class handler implementation
bool QSslSocket_QBaseEvent(QSslSocket* self, QEvent* event) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Event_IsBase(true);
        return vqsslsocket->event(event);
    } else {
        return self->QSslSocket::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnEvent(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Event_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSslSocket_EventFilter(QSslSocket* self, QObject* watched, QEvent* event) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return vqsslsocket->eventFilter(watched, event);
    } else {
        return self->QSslSocket::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSslSocket_QBaseEventFilter(QSslSocket* self, QObject* watched, QEvent* event) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_EventFilter_IsBase(true);
        return vqsslsocket->eventFilter(watched, event);
    } else {
        return self->QSslSocket::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnEventFilter(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_EventFilter_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslSocket_TimerEvent(QSslSocket* self, QTimerEvent* event) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->timerEvent(event);
    } else {
        ((VirtualQSslSocket*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSslSocket_QBaseTimerEvent(QSslSocket* self, QTimerEvent* event) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_TimerEvent_IsBase(true);
        vqsslsocket->timerEvent(event);
    } else {
        ((VirtualQSslSocket*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnTimerEvent(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_TimerEvent_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslSocket_ChildEvent(QSslSocket* self, QChildEvent* event) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->childEvent(event);
    } else {
        ((VirtualQSslSocket*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSslSocket_QBaseChildEvent(QSslSocket* self, QChildEvent* event) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_ChildEvent_IsBase(true);
        vqsslsocket->childEvent(event);
    } else {
        ((VirtualQSslSocket*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnChildEvent(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_ChildEvent_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslSocket_CustomEvent(QSslSocket* self, QEvent* event) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->customEvent(event);
    } else {
        ((VirtualQSslSocket*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSslSocket_QBaseCustomEvent(QSslSocket* self, QEvent* event) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_CustomEvent_IsBase(true);
        vqsslsocket->customEvent(event);
    } else {
        ((VirtualQSslSocket*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnCustomEvent(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_CustomEvent_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslSocket_ConnectNotify(QSslSocket* self, const QMetaMethod* signal) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->connectNotify(*signal);
    } else {
        ((VirtualQSslSocket*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSslSocket_QBaseConnectNotify(QSslSocket* self, const QMetaMethod* signal) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_ConnectNotify_IsBase(true);
        vqsslsocket->connectNotify(*signal);
    } else {
        ((VirtualQSslSocket*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnConnectNotify(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_ConnectNotify_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslSocket_DisconnectNotify(QSslSocket* self, const QMetaMethod* signal) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->disconnectNotify(*signal);
    } else {
        ((VirtualQSslSocket*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSslSocket_QBaseDisconnectNotify(QSslSocket* self, const QMetaMethod* signal) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_DisconnectNotify_IsBase(true);
        vqsslsocket->disconnectNotify(*signal);
    } else {
        ((VirtualQSslSocket*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnDisconnectNotify(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_DisconnectNotify_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslSocket_SetSocketState(QSslSocket* self, int state) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    } else {
        ((VirtualQSslSocket*)self)->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    }
}

// Base class handler implementation
void QSslSocket_QBaseSetSocketState(QSslSocket* self, int state) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetSocketState_IsBase(true);
        vqsslsocket->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    } else {
        ((VirtualQSslSocket*)self)->setSocketState(static_cast<QAbstractSocket::SocketState>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSetSocketState(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetSocketState_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SetSocketState_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslSocket_SetSocketError(QSslSocket* self, int socketError) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    } else {
        ((VirtualQSslSocket*)self)->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    }
}

// Base class handler implementation
void QSslSocket_QBaseSetSocketError(QSslSocket* self, int socketError) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetSocketError_IsBase(true);
        vqsslsocket->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    } else {
        ((VirtualQSslSocket*)self)->setSocketError(static_cast<QAbstractSocket::SocketError>(socketError));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSetSocketError(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetSocketError_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SetSocketError_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslSocket_SetLocalPort(QSslSocket* self, uint16_t port) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setLocalPort(static_cast<quint16>(port));
    } else {
        ((VirtualQSslSocket*)self)->setLocalPort(static_cast<quint16>(port));
    }
}

// Base class handler implementation
void QSslSocket_QBaseSetLocalPort(QSslSocket* self, uint16_t port) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetLocalPort_IsBase(true);
        vqsslsocket->setLocalPort(static_cast<quint16>(port));
    } else {
        ((VirtualQSslSocket*)self)->setLocalPort(static_cast<quint16>(port));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSetLocalPort(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetLocalPort_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SetLocalPort_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslSocket_SetLocalAddress(QSslSocket* self, const QHostAddress* address) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setLocalAddress(*address);
    } else {
        ((VirtualQSslSocket*)self)->setLocalAddress(*address);
    }
}

// Base class handler implementation
void QSslSocket_QBaseSetLocalAddress(QSslSocket* self, const QHostAddress* address) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetLocalAddress_IsBase(true);
        vqsslsocket->setLocalAddress(*address);
    } else {
        ((VirtualQSslSocket*)self)->setLocalAddress(*address);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSetLocalAddress(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetLocalAddress_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SetLocalAddress_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslSocket_SetPeerPort(QSslSocket* self, uint16_t port) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setPeerPort(static_cast<quint16>(port));
    } else {
        ((VirtualQSslSocket*)self)->setPeerPort(static_cast<quint16>(port));
    }
}

// Base class handler implementation
void QSslSocket_QBaseSetPeerPort(QSslSocket* self, uint16_t port) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetPeerPort_IsBase(true);
        vqsslsocket->setPeerPort(static_cast<quint16>(port));
    } else {
        ((VirtualQSslSocket*)self)->setPeerPort(static_cast<quint16>(port));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSetPeerPort(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetPeerPort_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SetPeerPort_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslSocket_SetPeerAddress(QSslSocket* self, const QHostAddress* address) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setPeerAddress(*address);
    } else {
        ((VirtualQSslSocket*)self)->setPeerAddress(*address);
    }
}

// Base class handler implementation
void QSslSocket_QBaseSetPeerAddress(QSslSocket* self, const QHostAddress* address) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetPeerAddress_IsBase(true);
        vqsslsocket->setPeerAddress(*address);
    } else {
        ((VirtualQSslSocket*)self)->setPeerAddress(*address);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSetPeerAddress(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetPeerAddress_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SetPeerAddress_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslSocket_SetPeerName(QSslSocket* self, const libqt_string name) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setPeerName(name_QString);
    } else {
        ((VirtualQSslSocket*)self)->setPeerName(name_QString);
    }
}

// Base class handler implementation
void QSslSocket_QBaseSetPeerName(QSslSocket* self, const libqt_string name) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetPeerName_IsBase(true);
        vqsslsocket->setPeerName(name_QString);
    } else {
        ((VirtualQSslSocket*)self)->setPeerName(name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSetPeerName(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetPeerName_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SetPeerName_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslSocket_SetOpenMode(QSslSocket* self, int openMode) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQSslSocket*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Base class handler implementation
void QSslSocket_QBaseSetOpenMode(QSslSocket* self, int openMode) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetOpenMode_IsBase(true);
        vqsslsocket->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    } else {
        ((VirtualQSslSocket*)self)->setOpenMode(static_cast<QIODeviceBase::OpenMode>(openMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSetOpenMode(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetOpenMode_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SetOpenMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QSslSocket_SetErrorString(QSslSocket* self, const libqt_string errorString) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setErrorString(errorString_QString);
    } else {
        ((VirtualQSslSocket*)self)->setErrorString(errorString_QString);
    }
}

// Base class handler implementation
void QSslSocket_QBaseSetErrorString(QSslSocket* self, const libqt_string errorString) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetErrorString_IsBase(true);
        vqsslsocket->setErrorString(errorString_QString);
    } else {
        ((VirtualQSslSocket*)self)->setErrorString(errorString_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSetErrorString(QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = dynamic_cast<VirtualQSslSocket*>(self);
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SetErrorString_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SetErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSslSocket_Sender(const QSslSocket* self) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return vqsslsocket->sender();
    } else {
        return ((VirtualQSslSocket*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSslSocket_QBaseSender(const QSslSocket* self) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Sender_IsBase(true);
        return vqsslsocket->sender();
    } else {
        return ((VirtualQSslSocket*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSender(const QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Sender_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSslSocket_SenderSignalIndex(const QSslSocket* self) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return vqsslsocket->senderSignalIndex();
    } else {
        return ((VirtualQSslSocket*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSslSocket_QBaseSenderSignalIndex(const QSslSocket* self) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SenderSignalIndex_IsBase(true);
        return vqsslsocket->senderSignalIndex();
    } else {
        return ((VirtualQSslSocket*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnSenderSignalIndex(const QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSslSocket_Receivers(const QSslSocket* self, const char* signal) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return vqsslsocket->receivers(signal);
    } else {
        return ((VirtualQSslSocket*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSslSocket_QBaseReceivers(const QSslSocket* self, const char* signal) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Receivers_IsBase(true);
        return vqsslsocket->receivers(signal);
    } else {
        return ((VirtualQSslSocket*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnReceivers(const QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_Receivers_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSslSocket_IsSignalConnected(const QSslSocket* self, const QMetaMethod* signal) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        return vqsslsocket->isSignalConnected(*signal);
    } else {
        return ((VirtualQSslSocket*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSslSocket_QBaseIsSignalConnected(const QSslSocket* self, const QMetaMethod* signal) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_IsSignalConnected_IsBase(true);
        return vqsslsocket->isSignalConnected(*signal);
    } else {
        return ((VirtualQSslSocket*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSslSocket_OnIsSignalConnected(const QSslSocket* self, intptr_t slot) {
    auto* vqsslsocket = const_cast<VirtualQSslSocket*>(dynamic_cast<const VirtualQSslSocket*>(self));
    if (vqsslsocket && vqsslsocket->isVirtualQSslSocket) {
        vqsslsocket->setQSslSocket_IsSignalConnected_Callback(reinterpret_cast<VirtualQSslSocket::QSslSocket_IsSignalConnected_Callback>(slot));
    }
}

void QSslSocket_Delete(QSslSocket* self) {
    delete self;
}
