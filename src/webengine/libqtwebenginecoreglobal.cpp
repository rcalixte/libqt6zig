#include <QString>
#include <QUrl>
#include <qtwebenginecoreglobal.h>
#include "libqtwebenginecoreglobal.h"
#include "libqtwebenginecoreglobal.hxx"

const char* qtwebenginecoreglobal_h_QWebEngineVersion() {
    return (const char*)qWebEngineVersion();
}

const char* qtwebenginecoreglobal_h_QWebEngineProcessName() {
    return (const char*)qWebEngineProcessName();
}

const char* qtwebenginecoreglobal_h_QWebEngineChromiumVersion() {
    return (const char*)qWebEngineChromiumVersion();
}

const char* qtwebenginecoreglobal_h_QWebEngineChromiumSecurityPatchVersion() {
    return (const char*)qWebEngineChromiumSecurityPatchVersion();
}

libqt_string qtwebenginecoreglobal_h_QWebEngineGetDomainAndRegistry(const QUrl* url) {
    auto _ret = qWebEngineGetDomainAndRegistry(*url);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
