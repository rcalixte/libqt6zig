#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQuickWebEngineDownloadRequest>
#include <QQuickWebEngineProfile>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <QWebEngineClientCertificateStore>
#include <QWebEngineClientHints>
#include <QWebEngineCookieStore>
#include <QWebEngineNotification>
#include <QWebEnginePermission>
#include <QWebEngineUrlRequestInterceptor>
#include <QWebEngineUrlSchemeHandler>
#include <qquickwebengineprofile.h>
#include "libqquickwebengineprofile.h"
#include "libqquickwebengineprofile.hxx"

QQuickWebEngineProfile* QQuickWebEngineProfile_new() {
    return new VirtualQQuickWebEngineProfile();
}

QQuickWebEngineProfile* QQuickWebEngineProfile_new2(QObject* parent) {
    return new VirtualQQuickWebEngineProfile(parent);
}

QMetaObject* QQuickWebEngineProfile_MetaObject(const QQuickWebEngineProfile* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickWebEngineProfile_Metacast(QQuickWebEngineProfile* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickWebEngineProfile_Metacall(QQuickWebEngineProfile* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuickWebEngineProfile_Tr(const char* s) {
    auto _ret = QQuickWebEngineProfile::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuickWebEngineProfile_StorageName(const QQuickWebEngineProfile* self) {
    auto _ret = self->storageName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickWebEngineProfile_SetStorageName(QQuickWebEngineProfile* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setStorageName(name_QString);
}

bool QQuickWebEngineProfile_IsOffTheRecord(const QQuickWebEngineProfile* self) {
    return self->isOffTheRecord();
}

void QQuickWebEngineProfile_SetOffTheRecord(QQuickWebEngineProfile* self, bool offTheRecord) {
    self->setOffTheRecord(offTheRecord);
}

libqt_string QQuickWebEngineProfile_PersistentStoragePath(const QQuickWebEngineProfile* self) {
    auto _ret = self->persistentStoragePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickWebEngineProfile_SetPersistentStoragePath(QQuickWebEngineProfile* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setPersistentStoragePath(path_QString);
}

libqt_string QQuickWebEngineProfile_CachePath(const QQuickWebEngineProfile* self) {
    auto _ret = self->cachePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickWebEngineProfile_SetCachePath(QQuickWebEngineProfile* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setCachePath(path_QString);
}

libqt_string QQuickWebEngineProfile_HttpUserAgent(const QQuickWebEngineProfile* self) {
    auto _ret = self->httpUserAgent();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickWebEngineProfile_SetHttpUserAgent(QQuickWebEngineProfile* self, const libqt_string userAgent) {
    QString userAgent_QString = QString::fromUtf8(userAgent.data, userAgent.len);
    self->setHttpUserAgent(userAgent_QString);
}

int QQuickWebEngineProfile_HttpCacheType(const QQuickWebEngineProfile* self) {
    return static_cast<int>(self->httpCacheType());
}

void QQuickWebEngineProfile_SetHttpCacheType(QQuickWebEngineProfile* self, int httpCacheType) {
    self->setHttpCacheType(static_cast<QQuickWebEngineProfile::HttpCacheType>(httpCacheType));
}

int QQuickWebEngineProfile_PersistentCookiesPolicy(const QQuickWebEngineProfile* self) {
    return static_cast<int>(self->persistentCookiesPolicy());
}

void QQuickWebEngineProfile_SetPersistentCookiesPolicy(QQuickWebEngineProfile* self, int persistentCookiesPolicy) {
    self->setPersistentCookiesPolicy(static_cast<QQuickWebEngineProfile::PersistentCookiesPolicy>(persistentCookiesPolicy));
}

uint8_t QQuickWebEngineProfile_PersistentPermissionsPolicy(const QQuickWebEngineProfile* self) {
    return static_cast<uint8_t>(self->persistentPermissionsPolicy());
}

void QQuickWebEngineProfile_SetPersistentPermissionsPolicy(QQuickWebEngineProfile* self, uint8_t persistentPermissionsPolicy) {
    self->setPersistentPermissionsPolicy(static_cast<QQuickWebEngineProfile::PersistentPermissionsPolicy>(persistentPermissionsPolicy));
}

int QQuickWebEngineProfile_HttpCacheMaximumSize(const QQuickWebEngineProfile* self) {
    return self->httpCacheMaximumSize();
}

void QQuickWebEngineProfile_SetHttpCacheMaximumSize(QQuickWebEngineProfile* self, int maxSize) {
    self->setHttpCacheMaximumSize(static_cast<int>(maxSize));
}

libqt_string QQuickWebEngineProfile_HttpAcceptLanguage(const QQuickWebEngineProfile* self) {
    auto _ret = self->httpAcceptLanguage();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickWebEngineProfile_SetHttpAcceptLanguage(QQuickWebEngineProfile* self, const libqt_string httpAcceptLanguage) {
    QString httpAcceptLanguage_QString = QString::fromUtf8(httpAcceptLanguage.data, httpAcceptLanguage.len);
    self->setHttpAcceptLanguage(httpAcceptLanguage_QString);
}

QWebEngineCookieStore* QQuickWebEngineProfile_CookieStore(const QQuickWebEngineProfile* self) {
    return self->cookieStore();
}

void QQuickWebEngineProfile_SetUrlRequestInterceptor(QQuickWebEngineProfile* self, QWebEngineUrlRequestInterceptor* interceptor) {
    self->setUrlRequestInterceptor(interceptor);
}

QWebEngineUrlSchemeHandler* QQuickWebEngineProfile_UrlSchemeHandler(const QQuickWebEngineProfile* self, const libqt_string param1) {
    QByteArray param1_QByteArray(param1.data, param1.len);
    return (QWebEngineUrlSchemeHandler*)self->urlSchemeHandler(param1_QByteArray);
}

void QQuickWebEngineProfile_InstallUrlSchemeHandler(QQuickWebEngineProfile* self, const libqt_string scheme, QWebEngineUrlSchemeHandler* param2) {
    QByteArray scheme_QByteArray(scheme.data, scheme.len);
    self->installUrlSchemeHandler(scheme_QByteArray, param2);
}

void QQuickWebEngineProfile_RemoveUrlScheme(QQuickWebEngineProfile* self, const libqt_string scheme) {
    QByteArray scheme_QByteArray(scheme.data, scheme.len);
    self->removeUrlScheme(scheme_QByteArray);
}

void QQuickWebEngineProfile_RemoveUrlSchemeHandler(QQuickWebEngineProfile* self, QWebEngineUrlSchemeHandler* param1) {
    self->removeUrlSchemeHandler(param1);
}

void QQuickWebEngineProfile_RemoveAllUrlSchemeHandlers(QQuickWebEngineProfile* self) {
    self->removeAllUrlSchemeHandlers();
}

void QQuickWebEngineProfile_ClearHttpCache(QQuickWebEngineProfile* self) {
    self->clearHttpCache();
}

void QQuickWebEngineProfile_SetSpellCheckLanguages(QQuickWebEngineProfile* self, const libqt_list /* of libqt_string */ languages) {
    QList<QString> languages_QList;
    languages_QList.reserve(languages.len);
    libqt_string* languages_arr = static_cast<libqt_string*>(languages.data);
    for (size_t i = 0; i < languages.len; ++i) {
        QString languages_arr_i_QString = QString::fromUtf8(languages_arr[i].data, languages_arr[i].len);
        languages_QList.push_back(languages_arr_i_QString);
    }
    self->setSpellCheckLanguages(languages_QList);
}

libqt_list /* of libqt_string */ QQuickWebEngineProfile_SpellCheckLanguages(const QQuickWebEngineProfile* self) {
    QList<QString> _ret = self->spellCheckLanguages();
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

void QQuickWebEngineProfile_SetSpellCheckEnabled(QQuickWebEngineProfile* self, bool enabled) {
    self->setSpellCheckEnabled(enabled);
}

bool QQuickWebEngineProfile_IsSpellCheckEnabled(const QQuickWebEngineProfile* self) {
    return self->isSpellCheckEnabled();
}

libqt_string QQuickWebEngineProfile_DownloadPath(const QQuickWebEngineProfile* self) {
    auto _ret = self->downloadPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickWebEngineProfile_SetDownloadPath(QQuickWebEngineProfile* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setDownloadPath(path_QString);
}

bool QQuickWebEngineProfile_IsPushServiceEnabled(const QQuickWebEngineProfile* self) {
    return self->isPushServiceEnabled();
}

void QQuickWebEngineProfile_SetPushServiceEnabled(QQuickWebEngineProfile* self, bool enable) {
    self->setPushServiceEnabled(enable);
}

QWebEngineClientCertificateStore* QQuickWebEngineProfile_ClientCertificateStore(QQuickWebEngineProfile* self) {
    return self->clientCertificateStore();
}

QWebEngineClientHints* QQuickWebEngineProfile_ClientHints(const QQuickWebEngineProfile* self) {
    return self->clientHints();
}

QWebEnginePermission* QQuickWebEngineProfile_QueryPermission(const QQuickWebEngineProfile* self, const QUrl* securityOrigin, uint8_t permissionType) {
    return new QWebEnginePermission(self->queryPermission(*securityOrigin, static_cast<QWebEnginePermission::PermissionType>(permissionType)));
}

libqt_list /* of QWebEnginePermission* */ QQuickWebEngineProfile_ListAllPermissions(const QQuickWebEngineProfile* self) {
    QList<QWebEnginePermission> _ret = self->listAllPermissions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QWebEnginePermission** _arr = static_cast<QWebEnginePermission**>(malloc(sizeof(QWebEnginePermission*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QWebEnginePermission(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QWebEnginePermission* */ QQuickWebEngineProfile_ListPermissionsForOrigin(const QQuickWebEngineProfile* self, const QUrl* securityOrigin) {
    QList<QWebEnginePermission> _ret = self->listPermissionsForOrigin(*securityOrigin);
    // Convert QList<> from C++ memory to manually-managed C memory
    QWebEnginePermission** _arr = static_cast<QWebEnginePermission**>(malloc(sizeof(QWebEnginePermission*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QWebEnginePermission(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QWebEnginePermission* */ QQuickWebEngineProfile_ListPermissionsForPermissionType(const QQuickWebEngineProfile* self, uint8_t permissionType) {
    QList<QWebEnginePermission> _ret = self->listPermissionsForPermissionType(static_cast<QWebEnginePermission::PermissionType>(permissionType));
    // Convert QList<> from C++ memory to manually-managed C memory
    QWebEnginePermission** _arr = static_cast<QWebEnginePermission**>(malloc(sizeof(QWebEnginePermission*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QWebEnginePermission(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QQuickWebEngineProfile* QQuickWebEngineProfile_DefaultProfile() {
    return QQuickWebEngineProfile::defaultProfile();
}

void QQuickWebEngineProfile_StorageNameChanged(QQuickWebEngineProfile* self) {
    self->storageNameChanged();
}

void QQuickWebEngineProfile_Connect_StorageNameChanged(QQuickWebEngineProfile* self, intptr_t slot) {
    void (*slotFunc)(QQuickWebEngineProfile*) = reinterpret_cast<void (*)(QQuickWebEngineProfile*)>(slot);
    QQuickWebEngineProfile::connect(self,
                                    static_cast<void (QQuickWebEngineProfile::*)()>(&QQuickWebEngineProfile::storageNameChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void QQuickWebEngineProfile_OffTheRecordChanged(QQuickWebEngineProfile* self) {
    self->offTheRecordChanged();
}

void QQuickWebEngineProfile_Connect_OffTheRecordChanged(QQuickWebEngineProfile* self, intptr_t slot) {
    void (*slotFunc)(QQuickWebEngineProfile*) = reinterpret_cast<void (*)(QQuickWebEngineProfile*)>(slot);
    QQuickWebEngineProfile::connect(self,
                                    static_cast<void (QQuickWebEngineProfile::*)()>(&QQuickWebEngineProfile::offTheRecordChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void QQuickWebEngineProfile_PersistentStoragePathChanged(QQuickWebEngineProfile* self) {
    self->persistentStoragePathChanged();
}

void QQuickWebEngineProfile_Connect_PersistentStoragePathChanged(QQuickWebEngineProfile* self, intptr_t slot) {
    void (*slotFunc)(QQuickWebEngineProfile*) = reinterpret_cast<void (*)(QQuickWebEngineProfile*)>(slot);
    QQuickWebEngineProfile::connect(self,
                                    static_cast<void (QQuickWebEngineProfile::*)()>(&QQuickWebEngineProfile::persistentStoragePathChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void QQuickWebEngineProfile_CachePathChanged(QQuickWebEngineProfile* self) {
    self->cachePathChanged();
}

void QQuickWebEngineProfile_Connect_CachePathChanged(QQuickWebEngineProfile* self, intptr_t slot) {
    void (*slotFunc)(QQuickWebEngineProfile*) = reinterpret_cast<void (*)(QQuickWebEngineProfile*)>(slot);
    QQuickWebEngineProfile::connect(self,
                                    static_cast<void (QQuickWebEngineProfile::*)()>(&QQuickWebEngineProfile::cachePathChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void QQuickWebEngineProfile_HttpUserAgentChanged(QQuickWebEngineProfile* self) {
    self->httpUserAgentChanged();
}

void QQuickWebEngineProfile_Connect_HttpUserAgentChanged(QQuickWebEngineProfile* self, intptr_t slot) {
    void (*slotFunc)(QQuickWebEngineProfile*) = reinterpret_cast<void (*)(QQuickWebEngineProfile*)>(slot);
    QQuickWebEngineProfile::connect(self,
                                    static_cast<void (QQuickWebEngineProfile::*)()>(&QQuickWebEngineProfile::httpUserAgentChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void QQuickWebEngineProfile_HttpCacheTypeChanged(QQuickWebEngineProfile* self) {
    self->httpCacheTypeChanged();
}

void QQuickWebEngineProfile_Connect_HttpCacheTypeChanged(QQuickWebEngineProfile* self, intptr_t slot) {
    void (*slotFunc)(QQuickWebEngineProfile*) = reinterpret_cast<void (*)(QQuickWebEngineProfile*)>(slot);
    QQuickWebEngineProfile::connect(self,
                                    static_cast<void (QQuickWebEngineProfile::*)()>(&QQuickWebEngineProfile::httpCacheTypeChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void QQuickWebEngineProfile_PersistentCookiesPolicyChanged(QQuickWebEngineProfile* self) {
    self->persistentCookiesPolicyChanged();
}

void QQuickWebEngineProfile_Connect_PersistentCookiesPolicyChanged(QQuickWebEngineProfile* self, intptr_t slot) {
    void (*slotFunc)(QQuickWebEngineProfile*) = reinterpret_cast<void (*)(QQuickWebEngineProfile*)>(slot);
    QQuickWebEngineProfile::connect(self,
                                    static_cast<void (QQuickWebEngineProfile::*)()>(&QQuickWebEngineProfile::persistentCookiesPolicyChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void QQuickWebEngineProfile_HttpCacheMaximumSizeChanged(QQuickWebEngineProfile* self) {
    self->httpCacheMaximumSizeChanged();
}

void QQuickWebEngineProfile_Connect_HttpCacheMaximumSizeChanged(QQuickWebEngineProfile* self, intptr_t slot) {
    void (*slotFunc)(QQuickWebEngineProfile*) = reinterpret_cast<void (*)(QQuickWebEngineProfile*)>(slot);
    QQuickWebEngineProfile::connect(self,
                                    static_cast<void (QQuickWebEngineProfile::*)()>(&QQuickWebEngineProfile::httpCacheMaximumSizeChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void QQuickWebEngineProfile_HttpAcceptLanguageChanged(QQuickWebEngineProfile* self) {
    self->httpAcceptLanguageChanged();
}

void QQuickWebEngineProfile_Connect_HttpAcceptLanguageChanged(QQuickWebEngineProfile* self, intptr_t slot) {
    void (*slotFunc)(QQuickWebEngineProfile*) = reinterpret_cast<void (*)(QQuickWebEngineProfile*)>(slot);
    QQuickWebEngineProfile::connect(self,
                                    static_cast<void (QQuickWebEngineProfile::*)()>(&QQuickWebEngineProfile::httpAcceptLanguageChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void QQuickWebEngineProfile_SpellCheckLanguagesChanged(QQuickWebEngineProfile* self) {
    self->spellCheckLanguagesChanged();
}

void QQuickWebEngineProfile_Connect_SpellCheckLanguagesChanged(QQuickWebEngineProfile* self, intptr_t slot) {
    void (*slotFunc)(QQuickWebEngineProfile*) = reinterpret_cast<void (*)(QQuickWebEngineProfile*)>(slot);
    QQuickWebEngineProfile::connect(self,
                                    static_cast<void (QQuickWebEngineProfile::*)()>(&QQuickWebEngineProfile::spellCheckLanguagesChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void QQuickWebEngineProfile_SpellCheckEnabledChanged(QQuickWebEngineProfile* self) {
    self->spellCheckEnabledChanged();
}

void QQuickWebEngineProfile_Connect_SpellCheckEnabledChanged(QQuickWebEngineProfile* self, intptr_t slot) {
    void (*slotFunc)(QQuickWebEngineProfile*) = reinterpret_cast<void (*)(QQuickWebEngineProfile*)>(slot);
    QQuickWebEngineProfile::connect(self,
                                    static_cast<void (QQuickWebEngineProfile::*)()>(&QQuickWebEngineProfile::spellCheckEnabledChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void QQuickWebEngineProfile_DownloadPathChanged(QQuickWebEngineProfile* self) {
    self->downloadPathChanged();
}

void QQuickWebEngineProfile_Connect_DownloadPathChanged(QQuickWebEngineProfile* self, intptr_t slot) {
    void (*slotFunc)(QQuickWebEngineProfile*) = reinterpret_cast<void (*)(QQuickWebEngineProfile*)>(slot);
    QQuickWebEngineProfile::connect(self,
                                    static_cast<void (QQuickWebEngineProfile::*)()>(&QQuickWebEngineProfile::downloadPathChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void QQuickWebEngineProfile_PushServiceEnabledChanged(QQuickWebEngineProfile* self) {
    self->pushServiceEnabledChanged();
}

void QQuickWebEngineProfile_Connect_PushServiceEnabledChanged(QQuickWebEngineProfile* self, intptr_t slot) {
    void (*slotFunc)(QQuickWebEngineProfile*) = reinterpret_cast<void (*)(QQuickWebEngineProfile*)>(slot);
    QQuickWebEngineProfile::connect(self,
                                    static_cast<void (QQuickWebEngineProfile::*)()>(&QQuickWebEngineProfile::pushServiceEnabledChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void QQuickWebEngineProfile_ClearHttpCacheCompleted(QQuickWebEngineProfile* self) {
    self->clearHttpCacheCompleted();
}

void QQuickWebEngineProfile_Connect_ClearHttpCacheCompleted(QQuickWebEngineProfile* self, intptr_t slot) {
    void (*slotFunc)(QQuickWebEngineProfile*) = reinterpret_cast<void (*)(QQuickWebEngineProfile*)>(slot);
    QQuickWebEngineProfile::connect(self,
                                    static_cast<void (QQuickWebEngineProfile::*)()>(&QQuickWebEngineProfile::clearHttpCacheCompleted),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void QQuickWebEngineProfile_PersistentPermissionsPolicyChanged(QQuickWebEngineProfile* self) {
    self->persistentPermissionsPolicyChanged();
}

void QQuickWebEngineProfile_Connect_PersistentPermissionsPolicyChanged(QQuickWebEngineProfile* self, intptr_t slot) {
    void (*slotFunc)(QQuickWebEngineProfile*) = reinterpret_cast<void (*)(QQuickWebEngineProfile*)>(slot);
    QQuickWebEngineProfile::connect(self,
                                    static_cast<void (QQuickWebEngineProfile::*)()>(&QQuickWebEngineProfile::persistentPermissionsPolicyChanged),
                                    [self, slotFunc]() {
                                        slotFunc(self);
                                    });
}

void QQuickWebEngineProfile_DownloadRequested(QQuickWebEngineProfile* self, QQuickWebEngineDownloadRequest* download) {
    self->downloadRequested(download);
}

void QQuickWebEngineProfile_Connect_DownloadRequested(QQuickWebEngineProfile* self, intptr_t slot) {
    void (*slotFunc)(QQuickWebEngineProfile*, QQuickWebEngineDownloadRequest*) = reinterpret_cast<void (*)(QQuickWebEngineProfile*, QQuickWebEngineDownloadRequest*)>(slot);
    QQuickWebEngineProfile::connect(self,
                                    static_cast<void (QQuickWebEngineProfile::*)(QQuickWebEngineDownloadRequest*)>(&QQuickWebEngineProfile::downloadRequested),
                                    [self, slotFunc](QQuickWebEngineDownloadRequest* download) {
                                        QQuickWebEngineDownloadRequest* sigval1 = download;
                                        slotFunc(self, sigval1);
                                    });
}

void QQuickWebEngineProfile_DownloadFinished(QQuickWebEngineProfile* self, QQuickWebEngineDownloadRequest* download) {
    self->downloadFinished(download);
}

void QQuickWebEngineProfile_Connect_DownloadFinished(QQuickWebEngineProfile* self, intptr_t slot) {
    void (*slotFunc)(QQuickWebEngineProfile*, QQuickWebEngineDownloadRequest*) = reinterpret_cast<void (*)(QQuickWebEngineProfile*, QQuickWebEngineDownloadRequest*)>(slot);
    QQuickWebEngineProfile::connect(self,
                                    static_cast<void (QQuickWebEngineProfile::*)(QQuickWebEngineDownloadRequest*)>(&QQuickWebEngineProfile::downloadFinished),
                                    [self, slotFunc](QQuickWebEngineDownloadRequest* download) {
                                        QQuickWebEngineDownloadRequest* sigval1 = download;
                                        slotFunc(self, sigval1);
                                    });
}

void QQuickWebEngineProfile_PresentNotification(QQuickWebEngineProfile* self, QWebEngineNotification* notification) {
    self->presentNotification(notification);
}

void QQuickWebEngineProfile_Connect_PresentNotification(QQuickWebEngineProfile* self, intptr_t slot) {
    void (*slotFunc)(QQuickWebEngineProfile*, QWebEngineNotification*) = reinterpret_cast<void (*)(QQuickWebEngineProfile*, QWebEngineNotification*)>(slot);
    QQuickWebEngineProfile::connect(self,
                                    static_cast<void (QQuickWebEngineProfile::*)(QWebEngineNotification*)>(&QQuickWebEngineProfile::presentNotification),
                                    [self, slotFunc](QWebEngineNotification* notification) {
                                        QWebEngineNotification* sigval1 = notification;
                                        slotFunc(self, sigval1);
                                    });
}

libqt_string QQuickWebEngineProfile_Tr2(const char* s, const char* c) {
    auto _ret = QQuickWebEngineProfile::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuickWebEngineProfile_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuickWebEngineProfile::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QQuickWebEngineProfile_SuperMetaObject(const QQuickWebEngineProfile* self) {
    return (QMetaObject*)self->QQuickWebEngineProfile::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQuickWebEngineProfile_OnMetaObject(QQuickWebEngineProfile* self, intptr_t slot) {
    if (auto* vqquickwebengineprofile = const_cast<VirtualQQuickWebEngineProfile*>(dynamic_cast<const VirtualQQuickWebEngineProfile*>(self)))
        vqquickwebengineprofile->qquickwebengineprofile_metaobject_callback = reinterpret_cast<VirtualQQuickWebEngineProfile::QQuickWebEngineProfile_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQuickWebEngineProfile_SuperMetacast(QQuickWebEngineProfile* self, const char* param1) {
    return self->QQuickWebEngineProfile::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQuickWebEngineProfile_OnMetacast(QQuickWebEngineProfile* self, intptr_t slot) {
    if (auto* vqquickwebengineprofile = dynamic_cast<VirtualQQuickWebEngineProfile*>(self))
        vqquickwebengineprofile->qquickwebengineprofile_metacast_callback = reinterpret_cast<VirtualQQuickWebEngineProfile::QQuickWebEngineProfile_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQuickWebEngineProfile_SuperMetacall(QQuickWebEngineProfile* self, int param1, int param2, void** param3) {
    return self->QQuickWebEngineProfile::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQuickWebEngineProfile_OnMetacall(QQuickWebEngineProfile* self, intptr_t slot) {
    if (auto* vqquickwebengineprofile = dynamic_cast<VirtualQQuickWebEngineProfile*>(self))
        vqquickwebengineprofile->qquickwebengineprofile_metacall_callback = reinterpret_cast<VirtualQQuickWebEngineProfile::QQuickWebEngineProfile_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QQuickWebEngineProfile_Event(QQuickWebEngineProfile* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QQuickWebEngineProfile_SuperEvent(QQuickWebEngineProfile* self, QEvent* event) {
    return self->QQuickWebEngineProfile::event(event);
}

// Auxiliary method to allow providing re-implementation
void QQuickWebEngineProfile_OnEvent(QQuickWebEngineProfile* self, intptr_t slot) {
    if (auto* vqquickwebengineprofile = dynamic_cast<VirtualQQuickWebEngineProfile*>(self))
        vqquickwebengineprofile->qquickwebengineprofile_event_callback = reinterpret_cast<VirtualQQuickWebEngineProfile::QQuickWebEngineProfile_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQuickWebEngineProfile_EventFilter(QQuickWebEngineProfile* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQuickWebEngineProfile_SuperEventFilter(QQuickWebEngineProfile* self, QObject* watched, QEvent* event) {
    return self->QQuickWebEngineProfile::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQuickWebEngineProfile_OnEventFilter(QQuickWebEngineProfile* self, intptr_t slot) {
    if (auto* vqquickwebengineprofile = dynamic_cast<VirtualQQuickWebEngineProfile*>(self))
        vqquickwebengineprofile->qquickwebengineprofile_eventfilter_callback = reinterpret_cast<VirtualQQuickWebEngineProfile::QQuickWebEngineProfile_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuickWebEngineProfile_TimerEvent(QQuickWebEngineProfile* self, QTimerEvent* event) {
    auto* vqquickwebengineprofile = dynamic_cast<VirtualQQuickWebEngineProfile*>(self);
    if (vqquickwebengineprofile) {
        vqquickwebengineprofile->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickWebEngineProfile::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickWebEngineProfile_SuperTimerEvent(QQuickWebEngineProfile* self, QTimerEvent* event) {
    if (auto* vqquickwebengineprofile = dynamic_cast<VirtualQQuickWebEngineProfile*>(self)) {
        vqquickwebengineprofile->QQuickWebEngineProfile::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickWebEngineProfile::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWebEngineProfile_OnTimerEvent(QQuickWebEngineProfile* self, intptr_t slot) {
    if (auto* vqquickwebengineprofile = dynamic_cast<VirtualQQuickWebEngineProfile*>(self))
        vqquickwebengineprofile->qquickwebengineprofile_timerevent_callback = reinterpret_cast<VirtualQQuickWebEngineProfile::QQuickWebEngineProfile_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickWebEngineProfile_ChildEvent(QQuickWebEngineProfile* self, QChildEvent* event) {
    auto* vqquickwebengineprofile = dynamic_cast<VirtualQQuickWebEngineProfile*>(self);
    if (vqquickwebengineprofile) {
        vqquickwebengineprofile->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickWebEngineProfile::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickWebEngineProfile_SuperChildEvent(QQuickWebEngineProfile* self, QChildEvent* event) {
    if (auto* vqquickwebengineprofile = dynamic_cast<VirtualQQuickWebEngineProfile*>(self)) {
        vqquickwebengineprofile->QQuickWebEngineProfile::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickWebEngineProfile::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWebEngineProfile_OnChildEvent(QQuickWebEngineProfile* self, intptr_t slot) {
    if (auto* vqquickwebengineprofile = dynamic_cast<VirtualQQuickWebEngineProfile*>(self))
        vqquickwebengineprofile->qquickwebengineprofile_childevent_callback = reinterpret_cast<VirtualQQuickWebEngineProfile::QQuickWebEngineProfile_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickWebEngineProfile_CustomEvent(QQuickWebEngineProfile* self, QEvent* event) {
    auto* vqquickwebengineprofile = dynamic_cast<VirtualQQuickWebEngineProfile*>(self);
    if (vqquickwebengineprofile) {
        vqquickwebengineprofile->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickWebEngineProfile::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickWebEngineProfile_SuperCustomEvent(QQuickWebEngineProfile* self, QEvent* event) {
    if (auto* vqquickwebengineprofile = dynamic_cast<VirtualQQuickWebEngineProfile*>(self)) {
        vqquickwebengineprofile->QQuickWebEngineProfile::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickWebEngineProfile::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWebEngineProfile_OnCustomEvent(QQuickWebEngineProfile* self, intptr_t slot) {
    if (auto* vqquickwebengineprofile = dynamic_cast<VirtualQQuickWebEngineProfile*>(self))
        vqquickwebengineprofile->qquickwebengineprofile_customevent_callback = reinterpret_cast<VirtualQQuickWebEngineProfile::QQuickWebEngineProfile_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickWebEngineProfile_ConnectNotify(QQuickWebEngineProfile* self, const QMetaMethod* signal) {
    auto* vqquickwebengineprofile = dynamic_cast<VirtualQQuickWebEngineProfile*>(self);
    if (vqquickwebengineprofile) {
        vqquickwebengineprofile->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickWebEngineProfile::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickWebEngineProfile_SuperConnectNotify(QQuickWebEngineProfile* self, const QMetaMethod* signal) {
    if (auto* vqquickwebengineprofile = dynamic_cast<VirtualQQuickWebEngineProfile*>(self)) {
        vqquickwebengineprofile->QQuickWebEngineProfile::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickWebEngineProfile::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWebEngineProfile_OnConnectNotify(QQuickWebEngineProfile* self, intptr_t slot) {
    if (auto* vqquickwebengineprofile = dynamic_cast<VirtualQQuickWebEngineProfile*>(self))
        vqquickwebengineprofile->qquickwebengineprofile_connectnotify_callback = reinterpret_cast<VirtualQQuickWebEngineProfile::QQuickWebEngineProfile_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQuickWebEngineProfile_DisconnectNotify(QQuickWebEngineProfile* self, const QMetaMethod* signal) {
    auto* vqquickwebengineprofile = dynamic_cast<VirtualQQuickWebEngineProfile*>(self);
    if (vqquickwebengineprofile) {
        vqquickwebengineprofile->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickWebEngineProfile::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickWebEngineProfile_SuperDisconnectNotify(QQuickWebEngineProfile* self, const QMetaMethod* signal) {
    if (auto* vqquickwebengineprofile = dynamic_cast<VirtualQQuickWebEngineProfile*>(self)) {
        vqquickwebengineprofile->QQuickWebEngineProfile::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickWebEngineProfile::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWebEngineProfile_OnDisconnectNotify(QQuickWebEngineProfile* self, intptr_t slot) {
    if (auto* vqquickwebengineprofile = dynamic_cast<VirtualQQuickWebEngineProfile*>(self))
        vqquickwebengineprofile->qquickwebengineprofile_disconnectnotify_callback = reinterpret_cast<VirtualQQuickWebEngineProfile::QQuickWebEngineProfile_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QQuickWebEngineProfile_Sender(const QQuickWebEngineProfile* self) {
    if (auto* vqquickwebengineprofile = const_cast<VirtualQQuickWebEngineProfile*>(dynamic_cast<const VirtualQQuickWebEngineProfile*>(self))) {
        return vqquickwebengineprofile->VirtualQQuickWebEngineProfile::sender();
    } else
        qFatal("Error: Protected method QQuickWebEngineProfile::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickWebEngineProfile_SenderSignalIndex(const QQuickWebEngineProfile* self) {
    if (auto* vqquickwebengineprofile = const_cast<VirtualQQuickWebEngineProfile*>(dynamic_cast<const VirtualQQuickWebEngineProfile*>(self))) {
        return vqquickwebengineprofile->VirtualQQuickWebEngineProfile::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQuickWebEngineProfile::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickWebEngineProfile_Receivers(const QQuickWebEngineProfile* self, const char* signal) {
    if (auto* vqquickwebengineprofile = const_cast<VirtualQQuickWebEngineProfile*>(dynamic_cast<const VirtualQQuickWebEngineProfile*>(self))) {
        return vqquickwebengineprofile->VirtualQQuickWebEngineProfile::receivers(signal);
    } else
        qFatal("Error: Protected method QQuickWebEngineProfile::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickWebEngineProfile_IsSignalConnected(const QQuickWebEngineProfile* self, const QMetaMethod* signal) {
    if (auto* vqquickwebengineprofile = const_cast<VirtualQQuickWebEngineProfile*>(dynamic_cast<const VirtualQQuickWebEngineProfile*>(self))) {
        return vqquickwebengineprofile->VirtualQQuickWebEngineProfile::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQuickWebEngineProfile::isSignalConnected called without a directly constructed type");
}

void QQuickWebEngineProfile_Delete(QQuickWebEngineProfile* self) {
    delete self;
}
