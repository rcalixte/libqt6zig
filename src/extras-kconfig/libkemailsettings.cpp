#include <KEMailSettings>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kemailsettings.h>
#include "libkemailsettings.h"
#include "libkemailsettings.hxx"

KEMailSettings* KEMailSettings_new() {
    return new KEMailSettings();
}

libqt_string KEMailSettings_Tr(const char* sourceText) {
    QString _ret = KEMailSettings::tr(sourceText);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KEMailSettings_Profiles(const KEMailSettings* self) {
    QList<QString> _ret = self->profiles();
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

void KEMailSettings_SetProfile(KEMailSettings* self, const libqt_string s) {
    QString s_QString = QString::fromUtf8(s.data, s.len);
    self->setProfile(s_QString);
}

libqt_string KEMailSettings_DefaultProfileName(const KEMailSettings* self) {
    QString _ret = self->defaultProfileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KEMailSettings_SetDefault(KEMailSettings* self, const libqt_string def) {
    QString def_QString = QString::fromUtf8(def.data, def.len);
    self->setDefault(def_QString);
}

libqt_string KEMailSettings_GetSetting(const KEMailSettings* self, int s) {
    QString _ret = self->getSetting(static_cast<KEMailSettings::Setting>(s));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KEMailSettings_SetSetting(KEMailSettings* self, int s, const libqt_string v) {
    QString v_QString = QString::fromUtf8(v.data, v.len);
    self->setSetting(static_cast<KEMailSettings::Setting>(s), v_QString);
}

libqt_string KEMailSettings_Tr2(const char* sourceText, const char* disambiguation) {
    QString _ret = KEMailSettings::tr(sourceText, disambiguation);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEMailSettings_Tr3(const char* sourceText, const char* disambiguation, int n) {
    QString _ret = KEMailSettings::tr(sourceText, disambiguation, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KEMailSettings_Delete(KEMailSettings* self) {
    delete self;
}
