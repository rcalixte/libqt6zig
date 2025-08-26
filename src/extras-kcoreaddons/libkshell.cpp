#include <KShell>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kshell.h>
#include "libkshell.h"
#include "libkshell.hxx"

libqt_list /* of libqt_string */ KShell_SplitArgs(const libqt_string param1, int param2, int* param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QList<QString> _ret = KShell::splitArgs(param1_QString, static_cast<KShell::Options>(param2), reinterpret_cast<KShell::Errors*>(param3));
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

libqt_string KShell_JoinArgs(const libqt_list /* of libqt_string */ param1) {
    QList<QString> param1_QList;
    param1_QList.reserve(param1.len);
    libqt_string* param1_arr = static_cast<libqt_string*>(param1.data);
    for (size_t i = 0; i < param1.len; ++i) {
        QString param1_arr_i_QString = QString::fromUtf8(param1_arr[i].data, param1_arr[i].len);
        param1_QList.push_back(param1_arr_i_QString);
    }
    QString _ret = KShell::joinArgs(param1_QList);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KShell_QuoteArg(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString _ret = KShell::quoteArg(param1_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KShell_TildeExpand(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString _ret = KShell::tildeExpand(param1_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KShell_TildeCollapse(const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString _ret = KShell::tildeCollapse(param1_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
