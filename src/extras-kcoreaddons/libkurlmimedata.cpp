#include <KUrlMimeData>
#include <QList>
#include <QMap>
#include <QMimeData>
#include <QString>
#include <QUrl>
#include <kurlmimedata.h>
#include "libkurlmimedata.h"
#include "libkurlmimedata.hxx"

void KUrlMimeData_SetUrls(const libqt_list /* of QUrl* */ urls, const libqt_list /* of QUrl* */ mostLocalUrls, QMimeData* mimeData) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    QList<QUrl> mostLocalUrls_QList;
    mostLocalUrls_QList.reserve(mostLocalUrls.len);
    QUrl** mostLocalUrls_arr = static_cast<QUrl**>(mostLocalUrls.data);
    for (size_t i = 0; i < mostLocalUrls.len; ++i) {
        mostLocalUrls_QList.push_back(*(mostLocalUrls_arr[i]));
    }
    KUrlMimeData::setUrls(urls_QList, mostLocalUrls_QList, mimeData);
}

bool KUrlMimeData_ExportUrlsToPortal(QMimeData* mimeData) {
    return KUrlMimeData::exportUrlsToPortal(mimeData);
}

void KUrlMimeData_SetMetaData(const libqt_map /* of libqt_string to libqt_string */ metaData, QMimeData* mimeData) {
    QMap<QString, QString> metaData_QMap;
    libqt_string* metaData_karr = static_cast<libqt_string*>(metaData.keys);
    libqt_string* metaData_varr = static_cast<libqt_string*>(metaData.values);
    for (size_t i = 0; i < metaData.len; ++i) {
        QString metaData_karr_i_QString = QString::fromUtf8(metaData_karr[i].data, metaData_karr[i].len);
        QString metaData_varr_i_QString = QString::fromUtf8(metaData_varr[i].data, metaData_varr[i].len);
        metaData_QMap[metaData_karr_i_QString] = metaData_varr_i_QString;
    }
    KUrlMimeData::setMetaData(metaData_QMap, mimeData);
}

libqt_list /* of libqt_string */ KUrlMimeData_MimeDataTypes() {
    QList<QString> _ret = KUrlMimeData::mimeDataTypes();
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

libqt_list /* of QUrl* */ KUrlMimeData_UrlsFromMimeData(const QMimeData* mimeData, int decodeOptions, libqt_map* /* of libqt_string to libqt_string */ metaData) {
    QMap<QString, QString>* metaData_QMap;
    libqt_string* metaData_karr = static_cast<libqt_string*>(metaData->keys);
    libqt_string* metaData_varr = static_cast<libqt_string*>(metaData->values);
    for (size_t i = 0; i < metaData->len; ++i) {
        QString metaData_karr_i_QString = QString::fromUtf8(metaData_karr[i].data, metaData_karr[i].len);
        QString metaData_varr_i_QString = QString::fromUtf8(metaData_varr[i].data, metaData_varr[i].len);
        (*metaData_QMap)[metaData_karr_i_QString] = metaData_varr_i_QString;
    }
    QList<QUrl> _ret = KUrlMimeData::urlsFromMimeData(mimeData, static_cast<KUrlMimeData::DecodeOptions>(decodeOptions), metaData_QMap);
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}
