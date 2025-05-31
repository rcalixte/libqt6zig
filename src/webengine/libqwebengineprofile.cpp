#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QWebEngineClientCertificateStore>
#include <QWebEngineCookieStore>
#include <QWebEngineDownloadRequest>
#include <QWebEngineProfile>
#include <QWebEngineScriptCollection>
#include <QWebEngineSettings>
#include <QWebEngineUrlRequestInterceptor>
#include <QWebEngineUrlSchemeHandler>
#include <qwebengineprofile.h>
#include "libqwebengineprofile.h"
#include "libqwebengineprofile.hxx"

QWebEngineProfile* QWebEngineProfile_new() {
    return new VirtualQWebEngineProfile();
}

QWebEngineProfile* QWebEngineProfile_new2(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQWebEngineProfile(name_QString);
}

QWebEngineProfile* QWebEngineProfile_new3(QObject* parent) {
    return new VirtualQWebEngineProfile(parent);
}

QWebEngineProfile* QWebEngineProfile_new4(const libqt_string name, QObject* parent) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQWebEngineProfile(name_QString, parent);
}

QMetaObject* QWebEngineProfile_MetaObject(const QWebEngineProfile* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebEngineProfile_Metacast(QWebEngineProfile* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebEngineProfile_Metacall(QWebEngineProfile* self, int param1, int param2, void** param3) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWebEngineProfile*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QWebEngineProfile_OnMetacall(QWebEngineProfile* self, intptr_t slot) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_Metacall_Callback(reinterpret_cast<VirtualQWebEngineProfile::QWebEngineProfile_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QWebEngineProfile_QBaseMetacall(QWebEngineProfile* self, int param1, int param2, void** param3) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_Metacall_IsBase(true);
        return vqwebengineprofile->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWebEngineProfile*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QWebEngineProfile_Tr(const char* s) {
    QString _ret = QWebEngineProfile::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineProfile_StorageName(const QWebEngineProfile* self) {
    QString _ret = self->storageName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QWebEngineProfile_IsOffTheRecord(const QWebEngineProfile* self) {
    return self->isOffTheRecord();
}

libqt_string QWebEngineProfile_PersistentStoragePath(const QWebEngineProfile* self) {
    QString _ret = self->persistentStoragePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWebEngineProfile_SetPersistentStoragePath(QWebEngineProfile* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setPersistentStoragePath(path_QString);
}

libqt_string QWebEngineProfile_CachePath(const QWebEngineProfile* self) {
    QString _ret = self->cachePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWebEngineProfile_SetCachePath(QWebEngineProfile* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setCachePath(path_QString);
}

libqt_string QWebEngineProfile_HttpUserAgent(const QWebEngineProfile* self) {
    QString _ret = self->httpUserAgent();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWebEngineProfile_SetHttpUserAgent(QWebEngineProfile* self, const libqt_string userAgent) {
    QString userAgent_QString = QString::fromUtf8(userAgent.data, userAgent.len);
    self->setHttpUserAgent(userAgent_QString);
}

int QWebEngineProfile_HttpCacheType(const QWebEngineProfile* self) {
    return static_cast<int>(self->httpCacheType());
}

void QWebEngineProfile_SetHttpCacheType(QWebEngineProfile* self, int httpCacheType) {
    self->setHttpCacheType(static_cast<QWebEngineProfile::HttpCacheType>(httpCacheType));
}

void QWebEngineProfile_SetHttpAcceptLanguage(QWebEngineProfile* self, const libqt_string httpAcceptLanguage) {
    QString httpAcceptLanguage_QString = QString::fromUtf8(httpAcceptLanguage.data, httpAcceptLanguage.len);
    self->setHttpAcceptLanguage(httpAcceptLanguage_QString);
}

libqt_string QWebEngineProfile_HttpAcceptLanguage(const QWebEngineProfile* self) {
    QString _ret = self->httpAcceptLanguage();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QWebEngineProfile_PersistentCookiesPolicy(const QWebEngineProfile* self) {
    return static_cast<int>(self->persistentCookiesPolicy());
}

void QWebEngineProfile_SetPersistentCookiesPolicy(QWebEngineProfile* self, int persistentCookiesPolicy) {
    self->setPersistentCookiesPolicy(static_cast<QWebEngineProfile::PersistentCookiesPolicy>(persistentCookiesPolicy));
}

int QWebEngineProfile_HttpCacheMaximumSize(const QWebEngineProfile* self) {
    return self->httpCacheMaximumSize();
}

void QWebEngineProfile_SetHttpCacheMaximumSize(QWebEngineProfile* self, int maxSize) {
    self->setHttpCacheMaximumSize(static_cast<int>(maxSize));
}

QWebEngineCookieStore* QWebEngineProfile_CookieStore(QWebEngineProfile* self) {
    return self->cookieStore();
}

void QWebEngineProfile_SetUrlRequestInterceptor(QWebEngineProfile* self, QWebEngineUrlRequestInterceptor* interceptor) {
    self->setUrlRequestInterceptor(interceptor);
}

void QWebEngineProfile_ClearAllVisitedLinks(QWebEngineProfile* self) {
    self->clearAllVisitedLinks();
}

void QWebEngineProfile_ClearVisitedLinks(QWebEngineProfile* self, const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    self->clearVisitedLinks(urls_QList);
}

bool QWebEngineProfile_VisitedLinksContainsUrl(const QWebEngineProfile* self, const QUrl* url) {
    return self->visitedLinksContainsUrl(*url);
}

QWebEngineSettings* QWebEngineProfile_Settings(const QWebEngineProfile* self) {
    return self->settings();
}

QWebEngineScriptCollection* QWebEngineProfile_Scripts(const QWebEngineProfile* self) {
    return self->scripts();
}

QWebEngineUrlSchemeHandler* QWebEngineProfile_UrlSchemeHandler(const QWebEngineProfile* self, const libqt_string param1) {
    QByteArray param1_QByteArray(param1.data, param1.len);
    return (QWebEngineUrlSchemeHandler*)self->urlSchemeHandler(param1_QByteArray);
}

void QWebEngineProfile_InstallUrlSchemeHandler(QWebEngineProfile* self, const libqt_string scheme, QWebEngineUrlSchemeHandler* param2) {
    QByteArray scheme_QByteArray(scheme.data, scheme.len);
    self->installUrlSchemeHandler(scheme_QByteArray, param2);
}

void QWebEngineProfile_RemoveUrlScheme(QWebEngineProfile* self, const libqt_string scheme) {
    QByteArray scheme_QByteArray(scheme.data, scheme.len);
    self->removeUrlScheme(scheme_QByteArray);
}

void QWebEngineProfile_RemoveUrlSchemeHandler(QWebEngineProfile* self, QWebEngineUrlSchemeHandler* param1) {
    self->removeUrlSchemeHandler(param1);
}

void QWebEngineProfile_RemoveAllUrlSchemeHandlers(QWebEngineProfile* self) {
    self->removeAllUrlSchemeHandlers();
}

void QWebEngineProfile_ClearHttpCache(QWebEngineProfile* self) {
    self->clearHttpCache();
}

void QWebEngineProfile_SetSpellCheckLanguages(QWebEngineProfile* self, const libqt_list /* of libqt_string */ languages) {
    QStringList languages_QList;
    languages_QList.reserve(languages.len);
    libqt_string* languages_arr = static_cast<libqt_string*>(languages.data);
    for (size_t i = 0; i < languages.len; ++i) {
        QString languages_arr_i_QString = QString::fromUtf8(languages_arr[i].data, languages_arr[i].len);
        languages_QList.push_back(languages_arr_i_QString);
    }
    self->setSpellCheckLanguages(languages_QList);
}

libqt_list /* of libqt_string */ QWebEngineProfile_SpellCheckLanguages(const QWebEngineProfile* self) {
    QStringList _ret = self->spellCheckLanguages();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QWebEngineProfile_SetSpellCheckEnabled(QWebEngineProfile* self, bool enabled) {
    self->setSpellCheckEnabled(enabled);
}

bool QWebEngineProfile_IsSpellCheckEnabled(const QWebEngineProfile* self) {
    return self->isSpellCheckEnabled();
}

libqt_string QWebEngineProfile_DownloadPath(const QWebEngineProfile* self) {
    QString _ret = self->downloadPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWebEngineProfile_SetDownloadPath(QWebEngineProfile* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->setDownloadPath(path_QString);
}

QWebEngineClientCertificateStore* QWebEngineProfile_ClientCertificateStore(QWebEngineProfile* self) {
    return self->clientCertificateStore();
}

QWebEngineProfile* QWebEngineProfile_DefaultProfile() {
    return QWebEngineProfile::defaultProfile();
}

void QWebEngineProfile_DownloadRequested(QWebEngineProfile* self, QWebEngineDownloadRequest* download) {
    self->downloadRequested(download);
}

void QWebEngineProfile_Connect_DownloadRequested(QWebEngineProfile* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineProfile*, QWebEngineDownloadRequest*) = reinterpret_cast<void (*)(QWebEngineProfile*, QWebEngineDownloadRequest*)>(slot);
    QWebEngineProfile::connect(self, &QWebEngineProfile::downloadRequested, [self, slotFunc](QWebEngineDownloadRequest* download) {
        QWebEngineDownloadRequest* sigval1 = download;
        slotFunc(self, sigval1);
    });
}

libqt_string QWebEngineProfile_Tr2(const char* s, const char* c) {
    QString _ret = QWebEngineProfile::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineProfile_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWebEngineProfile::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QWebEngineProfile_Event(QWebEngineProfile* self, QEvent* event) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        return vqwebengineprofile->event(event);
    } else {
        return self->QWebEngineProfile::event(event);
    }
}

// Base class handler implementation
bool QWebEngineProfile_QBaseEvent(QWebEngineProfile* self, QEvent* event) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_Event_IsBase(true);
        return vqwebengineprofile->event(event);
    } else {
        return self->QWebEngineProfile::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineProfile_OnEvent(QWebEngineProfile* self, intptr_t slot) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_Event_Callback(reinterpret_cast<VirtualQWebEngineProfile::QWebEngineProfile_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEngineProfile_EventFilter(QWebEngineProfile* self, QObject* watched, QEvent* event) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        return vqwebengineprofile->eventFilter(watched, event);
    } else {
        return self->QWebEngineProfile::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QWebEngineProfile_QBaseEventFilter(QWebEngineProfile* self, QObject* watched, QEvent* event) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_EventFilter_IsBase(true);
        return vqwebengineprofile->eventFilter(watched, event);
    } else {
        return self->QWebEngineProfile::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineProfile_OnEventFilter(QWebEngineProfile* self, intptr_t slot) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_EventFilter_Callback(reinterpret_cast<VirtualQWebEngineProfile::QWebEngineProfile_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineProfile_TimerEvent(QWebEngineProfile* self, QTimerEvent* event) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->timerEvent(event);
    } else {
        ((VirtualQWebEngineProfile*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QWebEngineProfile_QBaseTimerEvent(QWebEngineProfile* self, QTimerEvent* event) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_TimerEvent_IsBase(true);
        vqwebengineprofile->timerEvent(event);
    } else {
        ((VirtualQWebEngineProfile*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineProfile_OnTimerEvent(QWebEngineProfile* self, intptr_t slot) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_TimerEvent_Callback(reinterpret_cast<VirtualQWebEngineProfile::QWebEngineProfile_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineProfile_ChildEvent(QWebEngineProfile* self, QChildEvent* event) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->childEvent(event);
    } else {
        ((VirtualQWebEngineProfile*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QWebEngineProfile_QBaseChildEvent(QWebEngineProfile* self, QChildEvent* event) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_ChildEvent_IsBase(true);
        vqwebengineprofile->childEvent(event);
    } else {
        ((VirtualQWebEngineProfile*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineProfile_OnChildEvent(QWebEngineProfile* self, intptr_t slot) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_ChildEvent_Callback(reinterpret_cast<VirtualQWebEngineProfile::QWebEngineProfile_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineProfile_CustomEvent(QWebEngineProfile* self, QEvent* event) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->customEvent(event);
    } else {
        ((VirtualQWebEngineProfile*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QWebEngineProfile_QBaseCustomEvent(QWebEngineProfile* self, QEvent* event) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_CustomEvent_IsBase(true);
        vqwebengineprofile->customEvent(event);
    } else {
        ((VirtualQWebEngineProfile*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineProfile_OnCustomEvent(QWebEngineProfile* self, intptr_t slot) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_CustomEvent_Callback(reinterpret_cast<VirtualQWebEngineProfile::QWebEngineProfile_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineProfile_ConnectNotify(QWebEngineProfile* self, const QMetaMethod* signal) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->connectNotify(*signal);
    } else {
        ((VirtualQWebEngineProfile*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWebEngineProfile_QBaseConnectNotify(QWebEngineProfile* self, const QMetaMethod* signal) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_ConnectNotify_IsBase(true);
        vqwebengineprofile->connectNotify(*signal);
    } else {
        ((VirtualQWebEngineProfile*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineProfile_OnConnectNotify(QWebEngineProfile* self, intptr_t slot) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_ConnectNotify_Callback(reinterpret_cast<VirtualQWebEngineProfile::QWebEngineProfile_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineProfile_DisconnectNotify(QWebEngineProfile* self, const QMetaMethod* signal) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->disconnectNotify(*signal);
    } else {
        ((VirtualQWebEngineProfile*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWebEngineProfile_QBaseDisconnectNotify(QWebEngineProfile* self, const QMetaMethod* signal) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_DisconnectNotify_IsBase(true);
        vqwebengineprofile->disconnectNotify(*signal);
    } else {
        ((VirtualQWebEngineProfile*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineProfile_OnDisconnectNotify(QWebEngineProfile* self, intptr_t slot) {
    auto* vqwebengineprofile = dynamic_cast<VirtualQWebEngineProfile*>(self);
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_DisconnectNotify_Callback(reinterpret_cast<VirtualQWebEngineProfile::QWebEngineProfile_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWebEngineProfile_Sender(const QWebEngineProfile* self) {
    auto* vqwebengineprofile = const_cast<VirtualQWebEngineProfile*>(dynamic_cast<const VirtualQWebEngineProfile*>(self));
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        return vqwebengineprofile->sender();
    } else {
        return ((VirtualQWebEngineProfile*)self)->sender();
    }
}

// Base class handler implementation
QObject* QWebEngineProfile_QBaseSender(const QWebEngineProfile* self) {
    auto* vqwebengineprofile = const_cast<VirtualQWebEngineProfile*>(dynamic_cast<const VirtualQWebEngineProfile*>(self));
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_Sender_IsBase(true);
        return vqwebengineprofile->sender();
    } else {
        return ((VirtualQWebEngineProfile*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineProfile_OnSender(const QWebEngineProfile* self, intptr_t slot) {
    auto* vqwebengineprofile = const_cast<VirtualQWebEngineProfile*>(dynamic_cast<const VirtualQWebEngineProfile*>(self));
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_Sender_Callback(reinterpret_cast<VirtualQWebEngineProfile::QWebEngineProfile_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebEngineProfile_SenderSignalIndex(const QWebEngineProfile* self) {
    auto* vqwebengineprofile = const_cast<VirtualQWebEngineProfile*>(dynamic_cast<const VirtualQWebEngineProfile*>(self));
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        return vqwebengineprofile->senderSignalIndex();
    } else {
        return ((VirtualQWebEngineProfile*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QWebEngineProfile_QBaseSenderSignalIndex(const QWebEngineProfile* self) {
    auto* vqwebengineprofile = const_cast<VirtualQWebEngineProfile*>(dynamic_cast<const VirtualQWebEngineProfile*>(self));
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_SenderSignalIndex_IsBase(true);
        return vqwebengineprofile->senderSignalIndex();
    } else {
        return ((VirtualQWebEngineProfile*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineProfile_OnSenderSignalIndex(const QWebEngineProfile* self, intptr_t slot) {
    auto* vqwebengineprofile = const_cast<VirtualQWebEngineProfile*>(dynamic_cast<const VirtualQWebEngineProfile*>(self));
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWebEngineProfile::QWebEngineProfile_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebEngineProfile_Receivers(const QWebEngineProfile* self, const char* signal) {
    auto* vqwebengineprofile = const_cast<VirtualQWebEngineProfile*>(dynamic_cast<const VirtualQWebEngineProfile*>(self));
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        return vqwebengineprofile->receivers(signal);
    } else {
        return ((VirtualQWebEngineProfile*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QWebEngineProfile_QBaseReceivers(const QWebEngineProfile* self, const char* signal) {
    auto* vqwebengineprofile = const_cast<VirtualQWebEngineProfile*>(dynamic_cast<const VirtualQWebEngineProfile*>(self));
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_Receivers_IsBase(true);
        return vqwebengineprofile->receivers(signal);
    } else {
        return ((VirtualQWebEngineProfile*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineProfile_OnReceivers(const QWebEngineProfile* self, intptr_t slot) {
    auto* vqwebengineprofile = const_cast<VirtualQWebEngineProfile*>(dynamic_cast<const VirtualQWebEngineProfile*>(self));
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_Receivers_Callback(reinterpret_cast<VirtualQWebEngineProfile::QWebEngineProfile_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEngineProfile_IsSignalConnected(const QWebEngineProfile* self, const QMetaMethod* signal) {
    auto* vqwebengineprofile = const_cast<VirtualQWebEngineProfile*>(dynamic_cast<const VirtualQWebEngineProfile*>(self));
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        return vqwebengineprofile->isSignalConnected(*signal);
    } else {
        return ((VirtualQWebEngineProfile*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWebEngineProfile_QBaseIsSignalConnected(const QWebEngineProfile* self, const QMetaMethod* signal) {
    auto* vqwebengineprofile = const_cast<VirtualQWebEngineProfile*>(dynamic_cast<const VirtualQWebEngineProfile*>(self));
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_IsSignalConnected_IsBase(true);
        return vqwebengineprofile->isSignalConnected(*signal);
    } else {
        return ((VirtualQWebEngineProfile*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineProfile_OnIsSignalConnected(const QWebEngineProfile* self, intptr_t slot) {
    auto* vqwebengineprofile = const_cast<VirtualQWebEngineProfile*>(dynamic_cast<const VirtualQWebEngineProfile*>(self));
    if (vqwebengineprofile && vqwebengineprofile->isVirtualQWebEngineProfile) {
        vqwebengineprofile->setQWebEngineProfile_IsSignalConnected_Callback(reinterpret_cast<VirtualQWebEngineProfile::QWebEngineProfile_IsSignalConnected_Callback>(slot));
    }
}

void QWebEngineProfile_Delete(QWebEngineProfile* self) {
    delete self;
}
