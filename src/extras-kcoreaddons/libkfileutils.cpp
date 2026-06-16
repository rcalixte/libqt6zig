#include <KFileUtils>
#include <QList>
#include <QString>
#include <QUrl>
#include <kfileutils.h>
#include "libkfileutils.h"
#include "libkfileutils.hxx"

libqt_string KFileUtils_SuggestName(const QUrl* baseURL, const libqt_string oldName) {
    QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
    auto _ret = KFileUtils::suggestName(*baseURL, oldName_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFileUtils_MakeSuggestedName(const libqt_string oldName) {
    QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
    auto _ret = KFileUtils::makeSuggestedName(oldName_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KFileUtils_FindAllUniqueFiles(const libqt_list /* of libqt_string */ dirs, const libqt_list /* of libqt_string */ nameFilters) {
    QList<QString> dirs_QList;
    dirs_QList.reserve(dirs.len);
    libqt_string* dirs_arr = static_cast<libqt_string*>(dirs.data);
    for (size_t i = 0; i < dirs.len; ++i) {
        QString dirs_arr_i_QString = QString::fromUtf8(dirs_arr[i].data, dirs_arr[i].len);
        dirs_QList.push_back(dirs_arr_i_QString);
    }
    QList<QString> nameFilters_QList;
    nameFilters_QList.reserve(nameFilters.len);
    libqt_string* nameFilters_arr = static_cast<libqt_string*>(nameFilters.data);
    for (size_t i = 0; i < nameFilters.len; ++i) {
        QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
        nameFilters_QList.push_back(nameFilters_arr_i_QString);
    }
    QList<QString> _ret = KFileUtils::findAllUniqueFiles(dirs_QList, nameFilters_QList);
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
