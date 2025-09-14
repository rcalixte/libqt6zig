#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__DesktopExecParser
#include <KService>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <desktopexecparser.h>
#include "libdesktopexecparser.h"
#include "libdesktopexecparser.hxx"

KIO__DesktopExecParser* KIO__DesktopExecParser_new(const KService* service, const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    return new KIO::DesktopExecParser(*service, urls_QList);
}

void KIO__DesktopExecParser_SetUrlsAreTempFiles(KIO__DesktopExecParser* self, bool tempFiles) {
    self->setUrlsAreTempFiles(tempFiles);
}

void KIO__DesktopExecParser_SetSuggestedFileName(KIO__DesktopExecParser* self, const libqt_string suggestedFileName) {
    QString suggestedFileName_QString = QString::fromUtf8(suggestedFileName.data, suggestedFileName.len);
    self->setSuggestedFileName(suggestedFileName_QString);
}

libqt_list /* of libqt_string */ KIO__DesktopExecParser_ResultingArguments(const KIO__DesktopExecParser* self) {
    QList<QString> _ret = self->resultingArguments();
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

libqt_string KIO__DesktopExecParser_ErrorMessage(const KIO__DesktopExecParser* self) {
    QString _ret = self->errorMessage();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KIO__DesktopExecParser_SupportedProtocols(const KService* service) {
    QList<QString> _ret = KIO::DesktopExecParser::supportedProtocols(*service);
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

bool KIO__DesktopExecParser_IsProtocolInSupportedList(const QUrl* url, const libqt_list /* of libqt_string */ supportedProtocols) {
    QList<QString> supportedProtocols_QList;
    supportedProtocols_QList.reserve(supportedProtocols.len);
    libqt_string* supportedProtocols_arr = static_cast<libqt_string*>(supportedProtocols.data);
    for (size_t i = 0; i < supportedProtocols.len; ++i) {
        QString supportedProtocols_arr_i_QString = QString::fromUtf8(supportedProtocols_arr[i].data, supportedProtocols_arr[i].len);
        supportedProtocols_QList.push_back(supportedProtocols_arr_i_QString);
    }
    return KIO::DesktopExecParser::isProtocolInSupportedList(*url, supportedProtocols_QList);
}

bool KIO__DesktopExecParser_HasSchemeHandler(const QUrl* url) {
    return KIO::DesktopExecParser::hasSchemeHandler(*url);
}

libqt_string KIO__DesktopExecParser_ExecutableName(const libqt_string execLine) {
    QString execLine_QString = QString::fromUtf8(execLine.data, execLine.len);
    QString _ret = KIO::DesktopExecParser::executableName(execLine_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__DesktopExecParser_ExecutablePath(const libqt_string execLine) {
    QString execLine_QString = QString::fromUtf8(execLine.data, execLine.len);
    QString _ret = KIO::DesktopExecParser::executablePath(execLine_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__DesktopExecParser_Delete(KIO__DesktopExecParser* self) {
    delete self;
}
