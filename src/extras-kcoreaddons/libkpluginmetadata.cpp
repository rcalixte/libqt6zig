#include <KAboutPerson>
#include <KPluginMetaData>
#include <QJsonObject>
#include <QList>
#include <QPluginLoader>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kpluginmetadata.h>
#include "libkpluginmetadata.h"
#include "libkpluginmetadata.hxx"

KPluginMetaData* KPluginMetaData_new() {
    return new KPluginMetaData();
}

KPluginMetaData* KPluginMetaData_new2(const QPluginLoader* loader) {
    return new KPluginMetaData(*loader);
}

KPluginMetaData* KPluginMetaData_new3(const libqt_string pluginFile) {
    QString pluginFile_QString = QString::fromUtf8(pluginFile.data, pluginFile.len);
    return new KPluginMetaData(pluginFile_QString);
}

KPluginMetaData* KPluginMetaData_new4(const QJsonObject* metaData, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new KPluginMetaData(*metaData, fileName_QString);
}

KPluginMetaData* KPluginMetaData_new5(const KPluginMetaData* param1) {
    return new KPluginMetaData(*param1);
}

KPluginMetaData* KPluginMetaData_new6(const QPluginLoader* loader, int options) {
    return new KPluginMetaData(*loader, static_cast<KPluginMetaData::KPluginMetaDataOptions>(options));
}

KPluginMetaData* KPluginMetaData_new7(const libqt_string pluginFile, int options) {
    QString pluginFile_QString = QString::fromUtf8(pluginFile.data, pluginFile.len);
    return new KPluginMetaData(pluginFile_QString, static_cast<KPluginMetaData::KPluginMetaDataOptions>(options));
}

void KPluginMetaData_OperatorAssign(KPluginMetaData* self, const KPluginMetaData* param1) {
    self->operator=(*param1);
}

KPluginMetaData* KPluginMetaData_FromJsonFile(const libqt_string jsonFile) {
    QString jsonFile_QString = QString::fromUtf8(jsonFile.data, jsonFile.len);
    return new KPluginMetaData(KPluginMetaData::fromJsonFile(jsonFile_QString));
}

KPluginMetaData* KPluginMetaData_FindPluginById(const libqt_string directory, const libqt_string pluginId) {
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    QString pluginId_QString = QString::fromUtf8(pluginId.data, pluginId.len);
    return new KPluginMetaData(KPluginMetaData::findPluginById(directory_QString, pluginId_QString));
}

bool KPluginMetaData_IsValid(const KPluginMetaData* self) {
    return self->isValid();
}

bool KPluginMetaData_IsHidden(const KPluginMetaData* self) {
    return self->isHidden();
}

libqt_string KPluginMetaData_FileName(const KPluginMetaData* self) {
    QString _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QJsonObject* KPluginMetaData_RawData(const KPluginMetaData* self) {
    return new QJsonObject(self->rawData());
}

libqt_string KPluginMetaData_Name(const KPluginMetaData* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPluginMetaData_Description(const KPluginMetaData* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of KAboutPerson* */ KPluginMetaData_Authors(const KPluginMetaData* self) {
    QList<KAboutPerson> _ret = self->authors();
    // Convert QList<> from C++ memory to manually-managed C memory
    KAboutPerson** _arr = static_cast<KAboutPerson**>(malloc(sizeof(KAboutPerson*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KAboutPerson(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of KAboutPerson* */ KPluginMetaData_Translators(const KPluginMetaData* self) {
    QList<KAboutPerson> _ret = self->translators();
    // Convert QList<> from C++ memory to manually-managed C memory
    KAboutPerson** _arr = static_cast<KAboutPerson**>(malloc(sizeof(KAboutPerson*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KAboutPerson(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of KAboutPerson* */ KPluginMetaData_OtherContributors(const KPluginMetaData* self) {
    QList<KAboutPerson> _ret = self->otherContributors();
    // Convert QList<> from C++ memory to manually-managed C memory
    KAboutPerson** _arr = static_cast<KAboutPerson**>(malloc(sizeof(KAboutPerson*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KAboutPerson(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string KPluginMetaData_Category(const KPluginMetaData* self) {
    QString _ret = self->category();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPluginMetaData_IconName(const KPluginMetaData* self) {
    QString _ret = self->iconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPluginMetaData_License(const KPluginMetaData* self) {
    QString _ret = self->license();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPluginMetaData_LicenseText(const KPluginMetaData* self) {
    QString _ret = self->licenseText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPluginMetaData_CopyrightText(const KPluginMetaData* self) {
    QString _ret = self->copyrightText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPluginMetaData_PluginId(const KPluginMetaData* self) {
    QString _ret = self->pluginId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPluginMetaData_Version(const KPluginMetaData* self) {
    QString _ret = self->version();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPluginMetaData_Website(const KPluginMetaData* self) {
    QString _ret = self->website();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPluginMetaData_BugReportUrl(const KPluginMetaData* self) {
    QString _ret = self->bugReportUrl();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KPluginMetaData_MimeTypes(const KPluginMetaData* self) {
    QList<QString> _ret = self->mimeTypes();
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

bool KPluginMetaData_SupportsMimeType(const KPluginMetaData* self, const libqt_string mimeType) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    return self->supportsMimeType(mimeType_QString);
}

libqt_list /* of libqt_string */ KPluginMetaData_FormFactors(const KPluginMetaData* self) {
    QList<QString> _ret = self->formFactors();
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

bool KPluginMetaData_IsEnabledByDefault(const KPluginMetaData* self) {
    return self->isEnabledByDefault();
}

libqt_string KPluginMetaData_Value2(const KPluginMetaData* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->value(key_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KPluginMetaData_Value4(const KPluginMetaData* self, const libqt_string key, bool defaultValue) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->value(key_QString, defaultValue);
}

int KPluginMetaData_Value6(const KPluginMetaData* self, const libqt_string key, int defaultValue) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->value(key_QString, static_cast<int>(defaultValue));
}

libqt_list /* of libqt_string */ KPluginMetaData_Value8(const KPluginMetaData* self, const libqt_string key, const libqt_list /* of libqt_string */ defaultValue) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QList<QString> defaultValue_QList;
    defaultValue_QList.reserve(defaultValue.len);
    libqt_string* defaultValue_arr = static_cast<libqt_string*>(defaultValue.data);
    for (size_t i = 0; i < defaultValue.len; ++i) {
        QString defaultValue_arr_i_QString = QString::fromUtf8(defaultValue_arr[i].data, defaultValue_arr[i].len);
        defaultValue_QList.push_back(defaultValue_arr_i_QString);
    }
    QList<QString> _ret = self->value(key_QString, defaultValue_QList);
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

bool KPluginMetaData_OperatorEqual(const KPluginMetaData* self, const KPluginMetaData* other) {
    return (*self == *other);
}

bool KPluginMetaData_OperatorNotEqual(const KPluginMetaData* self, const KPluginMetaData* other) {
    return (*self != *other);
}

bool KPluginMetaData_IsStaticPlugin(const KPluginMetaData* self) {
    return self->isStaticPlugin();
}

KPluginMetaData* KPluginMetaData_FindPluginById3(const libqt_string directory, const libqt_string pluginId, int options) {
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    QString pluginId_QString = QString::fromUtf8(pluginId.data, pluginId.len);
    return new KPluginMetaData(KPluginMetaData::findPluginById(directory_QString, pluginId_QString, static_cast<KPluginMetaData::KPluginMetaDataOptions>(options)));
}

libqt_string KPluginMetaData_Value23(const KPluginMetaData* self, const libqt_string key, const libqt_string defaultValue) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
    QString _ret = self->value(key_QString, defaultValue_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPluginMetaData_Delete(KPluginMetaData* self) {
    delete self;
}
