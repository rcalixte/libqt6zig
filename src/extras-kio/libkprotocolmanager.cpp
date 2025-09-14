#include <KProtocolManager>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <kprotocolmanager.h>
#include "libkprotocolmanager.h"
#include "libkprotocolmanager.hxx"

KProtocolManager* KProtocolManager_new(const KProtocolManager* other) {
    return new KProtocolManager(*other);
}

KProtocolManager* KProtocolManager_new2(KProtocolManager* other) {
    return new KProtocolManager(std::move(*other));
}

void KProtocolManager_CopyAssign(KProtocolManager* self, KProtocolManager* other) {
    *self = *other;
}

void KProtocolManager_MoveAssign(KProtocolManager* self, KProtocolManager* other) {
    *self = std::move(*other);
}

int KProtocolManager_ReadTimeout() {
    return KProtocolManager::readTimeout();
}

int KProtocolManager_ConnectTimeout() {
    return KProtocolManager::connectTimeout();
}

int KProtocolManager_ProxyConnectTimeout() {
    return KProtocolManager::proxyConnectTimeout();
}

int KProtocolManager_ResponseTimeout() {
    return KProtocolManager::responseTimeout();
}

bool KProtocolManager_AutoResume() {
    return KProtocolManager::autoResume();
}

bool KProtocolManager_MarkPartial() {
    return KProtocolManager::markPartial();
}

int KProtocolManager_MinimumKeepSize() {
    return KProtocolManager::minimumKeepSize();
}

bool KProtocolManager_SupportsListing(const QUrl* url) {
    return KProtocolManager::supportsListing(*url);
}

bool KProtocolManager_SupportsReading(const QUrl* url) {
    return KProtocolManager::supportsReading(*url);
}

bool KProtocolManager_SupportsWriting(const QUrl* url) {
    return KProtocolManager::supportsWriting(*url);
}

bool KProtocolManager_SupportsMakeDir(const QUrl* url) {
    return KProtocolManager::supportsMakeDir(*url);
}

bool KProtocolManager_SupportsDeleting(const QUrl* url) {
    return KProtocolManager::supportsDeleting(*url);
}

bool KProtocolManager_SupportsLinking(const QUrl* url) {
    return KProtocolManager::supportsLinking(*url);
}

bool KProtocolManager_SupportsMoving(const QUrl* url) {
    return KProtocolManager::supportsMoving(*url);
}

bool KProtocolManager_SupportsOpening(const QUrl* url) {
    return KProtocolManager::supportsOpening(*url);
}

bool KProtocolManager_SupportsTruncating(const QUrl* url) {
    return KProtocolManager::supportsTruncating(*url);
}

bool KProtocolManager_CanCopyFromFile(const QUrl* url) {
    return KProtocolManager::canCopyFromFile(*url);
}

bool KProtocolManager_CanCopyToFile(const QUrl* url) {
    return KProtocolManager::canCopyToFile(*url);
}

bool KProtocolManager_CanRenameFromFile(const QUrl* url) {
    return KProtocolManager::canRenameFromFile(*url);
}

bool KProtocolManager_CanRenameToFile(const QUrl* url) {
    return KProtocolManager::canRenameToFile(*url);
}

bool KProtocolManager_CanDeleteRecursive(const QUrl* url) {
    return KProtocolManager::canDeleteRecursive(*url);
}

libqt_string KProtocolManager_DefaultMimetype(const QUrl* url) {
    QString _ret = KProtocolManager::defaultMimetype(*url);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KProtocolManager_InputType(const QUrl* url) {
    return static_cast<int>(KProtocolManager::inputType(*url));
}

int KProtocolManager_OutputType(const QUrl* url) {
    return static_cast<int>(KProtocolManager::outputType(*url));
}

libqt_list /* of libqt_string */ KProtocolManager_Listing(const QUrl* url) {
    QList<QString> _ret = KProtocolManager::listing(*url);
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

bool KProtocolManager_IsSourceProtocol(const QUrl* url) {
    return KProtocolManager::isSourceProtocol(*url);
}

libqt_string KProtocolManager_ProtocolForArchiveMimetype(const libqt_string mimeType) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    QString _ret = KProtocolManager::protocolForArchiveMimetype(mimeType_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KProtocolManager_ReparseConfiguration() {
    KProtocolManager::reparseConfiguration();
}

libqt_string KProtocolManager_CharsetFor(const QUrl* url) {
    QString _ret = KProtocolManager::charsetFor(*url);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KProtocolManager_SupportsPermissions(const QUrl* url) {
    return KProtocolManager::supportsPermissions(*url);
}

void KProtocolManager_Delete(KProtocolManager* self) {
    delete self;
}
