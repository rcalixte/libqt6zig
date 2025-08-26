#include <KUrlMimeData>
#include <QList>
#include <QMap>
#include <QMimeData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <kurlmimedata.h>
#include "libkurlmimedata.h"
#include "libkurlmimedata.hxx"

void KUrlMimeData_SetUrls(const libqt_list /* of QUrl* */ param1, const libqt_list /* of QUrl* */ param2, QMimeData* param3) {
    QList<QUrl> param1_QList;
    param1_QList.reserve(param1.len);
    QUrl** param1_arr = static_cast<QUrl**>(param1.data);
    for (size_t i = 0; i < param1.len; ++i) {
        param1_QList.push_back(*(param1_arr[i]));
    }
    QList<QUrl> param2_QList;
    param2_QList.reserve(param2.len);
    QUrl** param2_arr = static_cast<QUrl**>(param2.data);
    for (size_t i = 0; i < param2.len; ++i) {
        param2_QList.push_back(*(param2_arr[i]));
    }
    KUrlMimeData::setUrls(param1_QList, param2_QList, param3);
}

bool KUrlMimeData_ExportUrlsToPortal(QMimeData* param1) {
    return KUrlMimeData::exportUrlsToPortal(param1);
}

void KUrlMimeData_SetMetaData(const libqt_map /* of libqt_string to libqt_string */ param1, QMimeData* param2) {
    QMap<QString, QString> param1_QMap;
    libqt_string* param1_karr = static_cast<libqt_string*>(param1.keys);
    libqt_string* param1_varr = static_cast<libqt_string*>(param1.values);
    for (size_t i = 0; i < param1.len; ++i) {
        QString param1_karr_i_QString = QString::fromUtf8(param1_karr[i].data, param1_karr[i].len);
        QString param1_varr_i_QString = QString::fromUtf8(param1_varr[i].data, param1_varr[i].len);
        param1_QMap[param1_karr_i_QString] = param1_varr_i_QString;
    }
    KUrlMimeData::setMetaData(param1_QMap, param2);
}

libqt_list /* of libqt_string */ KUrlMimeData_MimeDataTypes() {
    QList<QString> _ret = KUrlMimeData::mimeDataTypes();
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

libqt_list /* of QUrl* */ KUrlMimeData_UrlsFromMimeData(const QMimeData* param1, int param2, libqt_map* /* of libqt_string to libqt_string */ param3) {
    QMap<QString, QString>* param3_QMap;
    libqt_string* param3_karr = static_cast<libqt_string*>(param3->keys);
    libqt_string* param3_varr = static_cast<libqt_string*>(param3->values);
    for (size_t i = 0; i < param3->len; ++i) {
        QString param3_karr_i_QString = QString::fromUtf8(param3_karr[i].data, param3_karr[i].len);
        QString param3_varr_i_QString = QString::fromUtf8(param3_varr[i].data, param3_varr[i].len);
        (*param3_QMap)[param3_karr_i_QString] = param3_varr_i_QString;
    }
    QList<QUrl> _ret = KUrlMimeData::urlsFromMimeData(param1, static_cast<KUrlMimeData::DecodeOptions>(param2), param3_QMap);
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}
