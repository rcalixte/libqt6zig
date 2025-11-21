#define WORKAROUND_INNER_CLASS_DEFINITION_PackageKit__Bitfield
#include <PackageKit/Daemon>
#include <PackageKit/Offline>
#include <PackageKit/Transaction>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <daemon.h>
#include "libdaemon.h"
#include "libdaemon.hxx"

QMetaObject* PackageKit__Daemon_MetaObject(const PackageKit__Daemon* self) {
    return (QMetaObject*)self->metaObject();
}

void* PackageKit__Daemon_Metacast(PackageKit__Daemon* self, const char* param1) {
    return self->qt_metacast(param1);
}

int PackageKit__Daemon_Metacall(PackageKit__Daemon* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

PackageKit__Daemon* PackageKit__Daemon_Global() {
    return PackageKit::Daemon::global();
}

bool PackageKit__Daemon_IsRunning() {
    return PackageKit::Daemon::isRunning();
}

PackageKit__Bitfield* PackageKit__Daemon_Roles() {
    return new PackageKit::Bitfield(PackageKit::Daemon::roles());
}

libqt_string PackageKit__Daemon_BackendName() {
    QString _ret = PackageKit::Daemon::backendName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string PackageKit__Daemon_BackendDescription() {
    QString _ret = PackageKit::Daemon::backendDescription();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string PackageKit__Daemon_BackendAuthor() {
    QString _ret = PackageKit::Daemon::backendAuthor();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int PackageKit__Daemon_Filters() {
    return static_cast<int>(PackageKit::Daemon::filters());
}

PackageKit__Bitfield* PackageKit__Daemon_Groups() {
    return new PackageKit::Bitfield(PackageKit::Daemon::groups());
}

bool PackageKit__Daemon_Locked() {
    return PackageKit::Daemon::locked();
}

libqt_list /* of libqt_string */ PackageKit__Daemon_MimeTypes() {
    QList<QString> _ret = PackageKit::Daemon::mimeTypes();
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

int PackageKit__Daemon_NetworkState() {
    return static_cast<int>(PackageKit::Daemon::networkState());
}

libqt_string PackageKit__Daemon_DistroID() {
    QString _ret = PackageKit::Daemon::distroID();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned int PackageKit__Daemon_VersionMajor() {
    return static_cast<unsigned int>(PackageKit::Daemon::versionMajor());
}

unsigned int PackageKit__Daemon_VersionMinor() {
    return static_cast<unsigned int>(PackageKit::Daemon::versionMinor());
}

unsigned int PackageKit__Daemon_VersionMicro() {
    return static_cast<unsigned int>(PackageKit::Daemon::versionMicro());
}

void PackageKit__Daemon_SetHints(const libqt_list /* of libqt_string */ hints) {
    QList<QString> hints_QList;
    hints_QList.reserve(hints.len);
    libqt_string* hints_arr = static_cast<libqt_string*>(hints.data);
    for (size_t i = 0; i < hints.len; ++i) {
        QString hints_arr_i_QString = QString::fromUtf8(hints_arr[i].data, hints_arr[i].len);
        hints_QList.push_back(hints_arr_i_QString);
    }
    PackageKit::Daemon::setHints(hints_QList);
}

void PackageKit__Daemon_SetHints2(const libqt_string hints) {
    QString hints_QString = QString::fromUtf8(hints.data, hints.len);
    PackageKit::Daemon::setHints(hints_QString);
}

libqt_list /* of libqt_string */ PackageKit__Daemon_Hints() {
    QList<QString> _ret = PackageKit::Daemon::hints();
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

PackageKit__Offline* PackageKit__Daemon_Offline(const PackageKit__Daemon* self) {
    return self->offline();
}

libqt_string PackageKit__Daemon_PackageName(const libqt_string packageID) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    QString _ret = PackageKit::Daemon::packageName(packageID_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string PackageKit__Daemon_PackageVersion(const libqt_string packageID) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    QString _ret = PackageKit::Daemon::packageVersion(packageID_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string PackageKit__Daemon_PackageArch(const libqt_string packageID) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    QString _ret = PackageKit::Daemon::packageArch(packageID_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string PackageKit__Daemon_PackageData(const libqt_string packageID) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    QString _ret = PackageKit::Daemon::packageData(packageID_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string PackageKit__Daemon_EnumToString(const QMetaObject* metaObject, int value, const char* enumName) {
    QString _ret = PackageKit::Daemon::enumToString(*metaObject, static_cast<int>(value), enumName);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int PackageKit__Daemon_EnumFromString(const QMetaObject* metaObject, const libqt_string str, const char* enumName) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    return PackageKit::Daemon::enumFromString(*metaObject, str_QString, enumName);
}

PackageKit__Transaction* PackageKit__Daemon_AcceptEula(const libqt_string eulaID) {
    QString eulaID_QString = QString::fromUtf8(eulaID.data, eulaID.len);
    return PackageKit::Daemon::acceptEula(eulaID_QString);
}

PackageKit__Transaction* PackageKit__Daemon_DownloadPackages(const libqt_list /* of libqt_string */ packageIDs) {
    QList<QString> packageIDs_QList;
    packageIDs_QList.reserve(packageIDs.len);
    libqt_string* packageIDs_arr = static_cast<libqt_string*>(packageIDs.data);
    for (size_t i = 0; i < packageIDs.len; ++i) {
        QString packageIDs_arr_i_QString = QString::fromUtf8(packageIDs_arr[i].data, packageIDs_arr[i].len);
        packageIDs_QList.push_back(packageIDs_arr_i_QString);
    }
    return PackageKit::Daemon::downloadPackages(packageIDs_QList);
}

PackageKit__Transaction* PackageKit__Daemon_DownloadPackage(const libqt_string packageID) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    return PackageKit::Daemon::downloadPackage(packageID_QString);
}

PackageKit__Transaction* PackageKit__Daemon_GetCategories() {
    return PackageKit::Daemon::getCategories();
}

PackageKit__Transaction* PackageKit__Daemon_DependsOn(const libqt_list /* of libqt_string */ packageIDs) {
    QList<QString> packageIDs_QList;
    packageIDs_QList.reserve(packageIDs.len);
    libqt_string* packageIDs_arr = static_cast<libqt_string*>(packageIDs.data);
    for (size_t i = 0; i < packageIDs.len; ++i) {
        QString packageIDs_arr_i_QString = QString::fromUtf8(packageIDs_arr[i].data, packageIDs_arr[i].len);
        packageIDs_QList.push_back(packageIDs_arr_i_QString);
    }
    return PackageKit::Daemon::dependsOn(packageIDs_QList);
}

PackageKit__Transaction* PackageKit__Daemon_DependsOn2(const libqt_string packageID) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    return PackageKit::Daemon::dependsOn(packageID_QString);
}

PackageKit__Transaction* PackageKit__Daemon_GetDetails(const libqt_list /* of libqt_string */ packageIDs) {
    QList<QString> packageIDs_QList;
    packageIDs_QList.reserve(packageIDs.len);
    libqt_string* packageIDs_arr = static_cast<libqt_string*>(packageIDs.data);
    for (size_t i = 0; i < packageIDs.len; ++i) {
        QString packageIDs_arr_i_QString = QString::fromUtf8(packageIDs_arr[i].data, packageIDs_arr[i].len);
        packageIDs_QList.push_back(packageIDs_arr_i_QString);
    }
    return PackageKit::Daemon::getDetails(packageIDs_QList);
}

PackageKit__Transaction* PackageKit__Daemon_GetDetails2(const libqt_string packageID) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    return PackageKit::Daemon::getDetails(packageID_QString);
}

PackageKit__Transaction* PackageKit__Daemon_GetDetailsLocal(const libqt_list /* of libqt_string */ files) {
    QList<QString> files_QList;
    files_QList.reserve(files.len);
    libqt_string* files_arr = static_cast<libqt_string*>(files.data);
    for (size_t i = 0; i < files.len; ++i) {
        QString files_arr_i_QString = QString::fromUtf8(files_arr[i].data, files_arr[i].len);
        files_QList.push_back(files_arr_i_QString);
    }
    return PackageKit::Daemon::getDetailsLocal(files_QList);
}

PackageKit__Transaction* PackageKit__Daemon_GetDetailsLocal2(const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return PackageKit::Daemon::getDetailsLocal(file_QString);
}

PackageKit__Transaction* PackageKit__Daemon_GetFiles(const libqt_list /* of libqt_string */ packageIDs) {
    QList<QString> packageIDs_QList;
    packageIDs_QList.reserve(packageIDs.len);
    libqt_string* packageIDs_arr = static_cast<libqt_string*>(packageIDs.data);
    for (size_t i = 0; i < packageIDs.len; ++i) {
        QString packageIDs_arr_i_QString = QString::fromUtf8(packageIDs_arr[i].data, packageIDs_arr[i].len);
        packageIDs_QList.push_back(packageIDs_arr_i_QString);
    }
    return PackageKit::Daemon::getFiles(packageIDs_QList);
}

PackageKit__Transaction* PackageKit__Daemon_GetFiles2(const libqt_string packageIDs) {
    QString packageIDs_QString = QString::fromUtf8(packageIDs.data, packageIDs.len);
    return PackageKit::Daemon::getFiles(packageIDs_QString);
}

PackageKit__Transaction* PackageKit__Daemon_GetFilesLocal(const libqt_list /* of libqt_string */ files) {
    QList<QString> files_QList;
    files_QList.reserve(files.len);
    libqt_string* files_arr = static_cast<libqt_string*>(files.data);
    for (size_t i = 0; i < files.len; ++i) {
        QString files_arr_i_QString = QString::fromUtf8(files_arr[i].data, files_arr[i].len);
        files_QList.push_back(files_arr_i_QString);
    }
    return PackageKit::Daemon::getFilesLocal(files_QList);
}

PackageKit__Transaction* PackageKit__Daemon_GetFilesLocal2(const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return PackageKit::Daemon::getFilesLocal(file_QString);
}

PackageKit__Transaction* PackageKit__Daemon_GetOldTransactions(unsigned int number) {
    return PackageKit::Daemon::getOldTransactions(static_cast<uint>(number));
}

PackageKit__Transaction* PackageKit__Daemon_GetPackages() {
    return PackageKit::Daemon::getPackages();
}

PackageKit__Transaction* PackageKit__Daemon_GetRepoList() {
    return PackageKit::Daemon::getRepoList();
}

PackageKit__Transaction* PackageKit__Daemon_RequiredBy(const libqt_list /* of libqt_string */ packageIDs) {
    QList<QString> packageIDs_QList;
    packageIDs_QList.reserve(packageIDs.len);
    libqt_string* packageIDs_arr = static_cast<libqt_string*>(packageIDs.data);
    for (size_t i = 0; i < packageIDs.len; ++i) {
        QString packageIDs_arr_i_QString = QString::fromUtf8(packageIDs_arr[i].data, packageIDs_arr[i].len);
        packageIDs_QList.push_back(packageIDs_arr_i_QString);
    }
    return PackageKit::Daemon::requiredBy(packageIDs_QList);
}

PackageKit__Transaction* PackageKit__Daemon_RequiredBy2(const libqt_string packageID) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    return PackageKit::Daemon::requiredBy(packageID_QString);
}

PackageKit__Transaction* PackageKit__Daemon_GetUpdatesDetails(const libqt_list /* of libqt_string */ packageIDs) {
    QList<QString> packageIDs_QList;
    packageIDs_QList.reserve(packageIDs.len);
    libqt_string* packageIDs_arr = static_cast<libqt_string*>(packageIDs.data);
    for (size_t i = 0; i < packageIDs.len; ++i) {
        QString packageIDs_arr_i_QString = QString::fromUtf8(packageIDs_arr[i].data, packageIDs_arr[i].len);
        packageIDs_QList.push_back(packageIDs_arr_i_QString);
    }
    return PackageKit::Daemon::getUpdatesDetails(packageIDs_QList);
}

PackageKit__Transaction* PackageKit__Daemon_GetUpdateDetail(const libqt_string packageID) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    return PackageKit::Daemon::getUpdateDetail(packageID_QString);
}

PackageKit__Transaction* PackageKit__Daemon_GetUpdates() {
    return PackageKit::Daemon::getUpdates();
}

PackageKit__Transaction* PackageKit__Daemon_GetDistroUpgrades() {
    return PackageKit::Daemon::getDistroUpgrades();
}

PackageKit__Transaction* PackageKit__Daemon_UpgradeSystem(const libqt_string distroId, int kind) {
    QString distroId_QString = QString::fromUtf8(distroId.data, distroId.len);
    return PackageKit::Daemon::upgradeSystem(distroId_QString, static_cast<PackageKit::Transaction::UpgradeKind>(kind));
}

PackageKit__Transaction* PackageKit__Daemon_InstallFiles(const libqt_list /* of libqt_string */ files) {
    QList<QString> files_QList;
    files_QList.reserve(files.len);
    libqt_string* files_arr = static_cast<libqt_string*>(files.data);
    for (size_t i = 0; i < files.len; ++i) {
        QString files_arr_i_QString = QString::fromUtf8(files_arr[i].data, files_arr[i].len);
        files_QList.push_back(files_arr_i_QString);
    }
    return PackageKit::Daemon::installFiles(files_QList);
}

PackageKit__Transaction* PackageKit__Daemon_InstallFile(const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return PackageKit::Daemon::installFile(file_QString);
}

PackageKit__Transaction* PackageKit__Daemon_InstallPackages(const libqt_list /* of libqt_string */ packageIDs) {
    QList<QString> packageIDs_QList;
    packageIDs_QList.reserve(packageIDs.len);
    libqt_string* packageIDs_arr = static_cast<libqt_string*>(packageIDs.data);
    for (size_t i = 0; i < packageIDs.len; ++i) {
        QString packageIDs_arr_i_QString = QString::fromUtf8(packageIDs_arr[i].data, packageIDs_arr[i].len);
        packageIDs_QList.push_back(packageIDs_arr_i_QString);
    }
    return PackageKit::Daemon::installPackages(packageIDs_QList);
}

PackageKit__Transaction* PackageKit__Daemon_InstallPackage(const libqt_string packageID) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    return PackageKit::Daemon::installPackage(packageID_QString);
}

PackageKit__Transaction* PackageKit__Daemon_InstallSignature(int typeVal, const libqt_string keyID, const libqt_string packageID) {
    QString keyID_QString = QString::fromUtf8(keyID.data, keyID.len);
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    return PackageKit::Daemon::installSignature(static_cast<PackageKit::Transaction::SigType>(typeVal), keyID_QString, packageID_QString);
}

PackageKit__Transaction* PackageKit__Daemon_RefreshCache(bool force) {
    return PackageKit::Daemon::refreshCache(force);
}

PackageKit__Transaction* PackageKit__Daemon_RemovePackages(const libqt_list /* of libqt_string */ packageIDs) {
    QList<QString> packageIDs_QList;
    packageIDs_QList.reserve(packageIDs.len);
    libqt_string* packageIDs_arr = static_cast<libqt_string*>(packageIDs.data);
    for (size_t i = 0; i < packageIDs.len; ++i) {
        QString packageIDs_arr_i_QString = QString::fromUtf8(packageIDs_arr[i].data, packageIDs_arr[i].len);
        packageIDs_QList.push_back(packageIDs_arr_i_QString);
    }
    return PackageKit::Daemon::removePackages(packageIDs_QList);
}

PackageKit__Transaction* PackageKit__Daemon_RemovePackage(const libqt_string packageID) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    return PackageKit::Daemon::removePackage(packageID_QString);
}

PackageKit__Transaction* PackageKit__Daemon_RepairSystem() {
    return PackageKit::Daemon::repairSystem();
}

PackageKit__Transaction* PackageKit__Daemon_RepoEnable(const libqt_string repoId) {
    QString repoId_QString = QString::fromUtf8(repoId.data, repoId.len);
    return PackageKit::Daemon::repoEnable(repoId_QString);
}

PackageKit__Transaction* PackageKit__Daemon_RepoRemove(const libqt_string repoId, bool autoremove) {
    QString repoId_QString = QString::fromUtf8(repoId.data, repoId.len);
    return PackageKit::Daemon::repoRemove(repoId_QString, autoremove);
}

PackageKit__Transaction* PackageKit__Daemon_RepoSetData(const libqt_string repoId, const libqt_string parameter, const libqt_string value) {
    QString repoId_QString = QString::fromUtf8(repoId.data, repoId.len);
    QString parameter_QString = QString::fromUtf8(parameter.data, parameter.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return PackageKit::Daemon::repoSetData(repoId_QString, parameter_QString, value_QString);
}

PackageKit__Transaction* PackageKit__Daemon_Resolve(const libqt_list /* of libqt_string */ packageNames) {
    QList<QString> packageNames_QList;
    packageNames_QList.reserve(packageNames.len);
    libqt_string* packageNames_arr = static_cast<libqt_string*>(packageNames.data);
    for (size_t i = 0; i < packageNames.len; ++i) {
        QString packageNames_arr_i_QString = QString::fromUtf8(packageNames_arr[i].data, packageNames_arr[i].len);
        packageNames_QList.push_back(packageNames_arr_i_QString);
    }
    return PackageKit::Daemon::resolve(packageNames_QList);
}

PackageKit__Transaction* PackageKit__Daemon_Resolve2(const libqt_string packageName) {
    QString packageName_QString = QString::fromUtf8(packageName.data, packageName.len);
    return PackageKit::Daemon::resolve(packageName_QString);
}

PackageKit__Transaction* PackageKit__Daemon_SearchFiles(const libqt_list /* of libqt_string */ search) {
    QList<QString> search_QList;
    search_QList.reserve(search.len);
    libqt_string* search_arr = static_cast<libqt_string*>(search.data);
    for (size_t i = 0; i < search.len; ++i) {
        QString search_arr_i_QString = QString::fromUtf8(search_arr[i].data, search_arr[i].len);
        search_QList.push_back(search_arr_i_QString);
    }
    return PackageKit::Daemon::searchFiles(search_QList);
}

PackageKit__Transaction* PackageKit__Daemon_SearchFiles2(const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    return PackageKit::Daemon::searchFiles(search_QString);
}

PackageKit__Transaction* PackageKit__Daemon_SearchDetails(const libqt_list /* of libqt_string */ search) {
    QList<QString> search_QList;
    search_QList.reserve(search.len);
    libqt_string* search_arr = static_cast<libqt_string*>(search.data);
    for (size_t i = 0; i < search.len; ++i) {
        QString search_arr_i_QString = QString::fromUtf8(search_arr[i].data, search_arr[i].len);
        search_QList.push_back(search_arr_i_QString);
    }
    return PackageKit::Daemon::searchDetails(search_QList);
}

PackageKit__Transaction* PackageKit__Daemon_SearchDetails2(const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    return PackageKit::Daemon::searchDetails(search_QString);
}

PackageKit__Transaction* PackageKit__Daemon_SearchGroups(const libqt_list /* of libqt_string */ groups) {
    QList<QString> groups_QList;
    groups_QList.reserve(groups.len);
    libqt_string* groups_arr = static_cast<libqt_string*>(groups.data);
    for (size_t i = 0; i < groups.len; ++i) {
        QString groups_arr_i_QString = QString::fromUtf8(groups_arr[i].data, groups_arr[i].len);
        groups_QList.push_back(groups_arr_i_QString);
    }
    return PackageKit::Daemon::searchGroups(groups_QList);
}

PackageKit__Transaction* PackageKit__Daemon_SearchGroup(const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return PackageKit::Daemon::searchGroup(group_QString);
}

PackageKit__Transaction* PackageKit__Daemon_SearchGroup2(int group) {
    return PackageKit::Daemon::searchGroup(static_cast<PackageKit::Transaction::Group>(group));
}

PackageKit__Transaction* PackageKit__Daemon_SearchGroups2(PackageKit__Bitfield* group) {
    return PackageKit::Daemon::searchGroups(*group);
}

PackageKit__Transaction* PackageKit__Daemon_SearchNames(const libqt_list /* of libqt_string */ search) {
    QList<QString> search_QList;
    search_QList.reserve(search.len);
    libqt_string* search_arr = static_cast<libqt_string*>(search.data);
    for (size_t i = 0; i < search.len; ++i) {
        QString search_arr_i_QString = QString::fromUtf8(search_arr[i].data, search_arr[i].len);
        search_QList.push_back(search_arr_i_QString);
    }
    return PackageKit::Daemon::searchNames(search_QList);
}

PackageKit__Transaction* PackageKit__Daemon_SearchNames2(const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    return PackageKit::Daemon::searchNames(search_QString);
}

PackageKit__Transaction* PackageKit__Daemon_UpdatePackages(const libqt_list /* of libqt_string */ packageIDs) {
    QList<QString> packageIDs_QList;
    packageIDs_QList.reserve(packageIDs.len);
    libqt_string* packageIDs_arr = static_cast<libqt_string*>(packageIDs.data);
    for (size_t i = 0; i < packageIDs.len; ++i) {
        QString packageIDs_arr_i_QString = QString::fromUtf8(packageIDs_arr[i].data, packageIDs_arr[i].len);
        packageIDs_QList.push_back(packageIDs_arr_i_QString);
    }
    return PackageKit::Daemon::updatePackages(packageIDs_QList);
}

PackageKit__Transaction* PackageKit__Daemon_UpdatePackage(const libqt_string packageID) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    return PackageKit::Daemon::updatePackage(packageID_QString);
}

PackageKit__Transaction* PackageKit__Daemon_WhatProvides(const libqt_list /* of libqt_string */ search) {
    QList<QString> search_QList;
    search_QList.reserve(search.len);
    libqt_string* search_arr = static_cast<libqt_string*>(search.data);
    for (size_t i = 0; i < search.len; ++i) {
        QString search_arr_i_QString = QString::fromUtf8(search_arr[i].data, search_arr[i].len);
        search_QList.push_back(search_arr_i_QString);
    }
    return PackageKit::Daemon::whatProvides(search_QList);
}

PackageKit__Transaction* PackageKit__Daemon_WhatProvides2(const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    return PackageKit::Daemon::whatProvides(search_QString);
}

void PackageKit__Daemon_IsRunningChanged(PackageKit__Daemon* self) {
    self->isRunningChanged();
}

void PackageKit__Daemon_Connect_IsRunningChanged(PackageKit__Daemon* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Daemon*) = reinterpret_cast<void (*)(PackageKit__Daemon*)>(slot);
    PackageKit::Daemon::connect(self, &PackageKit::Daemon::isRunningChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Daemon_NetworkStateChanged(PackageKit__Daemon* self) {
    self->networkStateChanged();
}

void PackageKit__Daemon_Connect_NetworkStateChanged(PackageKit__Daemon* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Daemon*) = reinterpret_cast<void (*)(PackageKit__Daemon*)>(slot);
    PackageKit::Daemon::connect(self, &PackageKit::Daemon::networkStateChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Daemon_Changed(PackageKit__Daemon* self) {
    self->changed();
}

void PackageKit__Daemon_Connect_Changed(PackageKit__Daemon* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Daemon*) = reinterpret_cast<void (*)(PackageKit__Daemon*)>(slot);
    PackageKit::Daemon::connect(self, &PackageKit::Daemon::changed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Daemon_RepoListChanged(PackageKit__Daemon* self) {
    self->repoListChanged();
}

void PackageKit__Daemon_Connect_RepoListChanged(PackageKit__Daemon* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Daemon*) = reinterpret_cast<void (*)(PackageKit__Daemon*)>(slot);
    PackageKit::Daemon::connect(self, &PackageKit::Daemon::repoListChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Daemon_RestartScheduled(PackageKit__Daemon* self) {
    self->restartScheduled();
}

void PackageKit__Daemon_Connect_RestartScheduled(PackageKit__Daemon* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Daemon*) = reinterpret_cast<void (*)(PackageKit__Daemon*)>(slot);
    PackageKit::Daemon::connect(self, &PackageKit::Daemon::restartScheduled, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Daemon_TransactionListChanged(PackageKit__Daemon* self, const libqt_list /* of libqt_string */ tids) {
    QList<QString> tids_QList;
    tids_QList.reserve(tids.len);
    libqt_string* tids_arr = static_cast<libqt_string*>(tids.data);
    for (size_t i = 0; i < tids.len; ++i) {
        QString tids_arr_i_QString = QString::fromUtf8(tids_arr[i].data, tids_arr[i].len);
        tids_QList.push_back(tids_arr_i_QString);
    }
    self->transactionListChanged(tids_QList);
}

void PackageKit__Daemon_Connect_TransactionListChanged(PackageKit__Daemon* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Daemon*, const char**) = reinterpret_cast<void (*)(PackageKit__Daemon*, const char**)>(slot);
    PackageKit::Daemon::connect(self, &PackageKit::Daemon::transactionListChanged, [self, slotFunc](const QList<QString>& tids) {
        const QList<QString>& tids_ret = tids;
        // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
        const char** tids_arr = static_cast<const char**>(malloc(sizeof(const char*) * (tids_ret.size() + 1)));
        for (qsizetype i = 0; i < tids_ret.size(); ++i) {
            QByteArray tids_b = tids_ret[i].toUtf8();
            char* tids_str = static_cast<char*>(malloc(tids_b.length() + 1));
            memcpy(tids_str, tids_b.data(), tids_b.length());
            tids_str[tids_b.length()] = '\0';
            tids_arr[i] = tids_str;
        }
        // Append sentinel null terminator to the list
        tids_arr[tids_ret.size()] = nullptr;
        const char** sigval1 = tids_arr;
        slotFunc(self, sigval1);
        free(tids_arr);
    });
}

void PackageKit__Daemon_UpdatesChanged(PackageKit__Daemon* self) {
    self->updatesChanged();
}

void PackageKit__Daemon_Connect_UpdatesChanged(PackageKit__Daemon* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Daemon*) = reinterpret_cast<void (*)(PackageKit__Daemon*)>(slot);
    PackageKit::Daemon::connect(self, &PackageKit::Daemon::updatesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void PackageKit__Daemon_DaemonQuit(PackageKit__Daemon* self) {
    self->daemonQuit();
}

void PackageKit__Daemon_Connect_DaemonQuit(PackageKit__Daemon* self, intptr_t slot) {
    void (*slotFunc)(PackageKit__Daemon*) = reinterpret_cast<void (*)(PackageKit__Daemon*)>(slot);
    PackageKit::Daemon::connect(self, &PackageKit::Daemon::daemonQuit, [self, slotFunc]() {
        slotFunc(self);
    });
}

PackageKit__Transaction* PackageKit__Daemon_DownloadPackages2(const libqt_list /* of libqt_string */ packageIDs, bool storeInCache) {
    QList<QString> packageIDs_QList;
    packageIDs_QList.reserve(packageIDs.len);
    libqt_string* packageIDs_arr = static_cast<libqt_string*>(packageIDs.data);
    for (size_t i = 0; i < packageIDs.len; ++i) {
        QString packageIDs_arr_i_QString = QString::fromUtf8(packageIDs_arr[i].data, packageIDs_arr[i].len);
        packageIDs_QList.push_back(packageIDs_arr_i_QString);
    }
    return PackageKit::Daemon::downloadPackages(packageIDs_QList, storeInCache);
}

PackageKit__Transaction* PackageKit__Daemon_DownloadPackage2(const libqt_string packageID, bool storeInCache) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    return PackageKit::Daemon::downloadPackage(packageID_QString, storeInCache);
}

PackageKit__Transaction* PackageKit__Daemon_DependsOn22(const libqt_list /* of libqt_string */ packageIDs, int filters) {
    QList<QString> packageIDs_QList;
    packageIDs_QList.reserve(packageIDs.len);
    libqt_string* packageIDs_arr = static_cast<libqt_string*>(packageIDs.data);
    for (size_t i = 0; i < packageIDs.len; ++i) {
        QString packageIDs_arr_i_QString = QString::fromUtf8(packageIDs_arr[i].data, packageIDs_arr[i].len);
        packageIDs_QList.push_back(packageIDs_arr_i_QString);
    }
    return PackageKit::Daemon::dependsOn(packageIDs_QList, static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_DependsOn3(const libqt_list /* of libqt_string */ packageIDs, int filters, bool recursive) {
    QList<QString> packageIDs_QList;
    packageIDs_QList.reserve(packageIDs.len);
    libqt_string* packageIDs_arr = static_cast<libqt_string*>(packageIDs.data);
    for (size_t i = 0; i < packageIDs.len; ++i) {
        QString packageIDs_arr_i_QString = QString::fromUtf8(packageIDs_arr[i].data, packageIDs_arr[i].len);
        packageIDs_QList.push_back(packageIDs_arr_i_QString);
    }
    return PackageKit::Daemon::dependsOn(packageIDs_QList, static_cast<PackageKit::Transaction::Filters>(filters), recursive);
}

PackageKit__Transaction* PackageKit__Daemon_DependsOn23(const libqt_string packageID, int filters) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    return PackageKit::Daemon::dependsOn(packageID_QString, static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_DependsOn32(const libqt_string packageID, int filters, bool recursive) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    return PackageKit::Daemon::dependsOn(packageID_QString, static_cast<PackageKit::Transaction::Filters>(filters), recursive);
}

PackageKit__Transaction* PackageKit__Daemon_GetPackages1(int filters) {
    return PackageKit::Daemon::getPackages(static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_GetRepoList1(int filters) {
    return PackageKit::Daemon::getRepoList(static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_RequiredBy22(const libqt_list /* of libqt_string */ packageIDs, int filters) {
    QList<QString> packageIDs_QList;
    packageIDs_QList.reserve(packageIDs.len);
    libqt_string* packageIDs_arr = static_cast<libqt_string*>(packageIDs.data);
    for (size_t i = 0; i < packageIDs.len; ++i) {
        QString packageIDs_arr_i_QString = QString::fromUtf8(packageIDs_arr[i].data, packageIDs_arr[i].len);
        packageIDs_QList.push_back(packageIDs_arr_i_QString);
    }
    return PackageKit::Daemon::requiredBy(packageIDs_QList, static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_RequiredBy3(const libqt_list /* of libqt_string */ packageIDs, int filters, bool recursive) {
    QList<QString> packageIDs_QList;
    packageIDs_QList.reserve(packageIDs.len);
    libqt_string* packageIDs_arr = static_cast<libqt_string*>(packageIDs.data);
    for (size_t i = 0; i < packageIDs.len; ++i) {
        QString packageIDs_arr_i_QString = QString::fromUtf8(packageIDs_arr[i].data, packageIDs_arr[i].len);
        packageIDs_QList.push_back(packageIDs_arr_i_QString);
    }
    return PackageKit::Daemon::requiredBy(packageIDs_QList, static_cast<PackageKit::Transaction::Filters>(filters), recursive);
}

PackageKit__Transaction* PackageKit__Daemon_RequiredBy23(const libqt_string packageID, int filters) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    return PackageKit::Daemon::requiredBy(packageID_QString, static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_RequiredBy32(const libqt_string packageID, int filters, bool recursive) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    return PackageKit::Daemon::requiredBy(packageID_QString, static_cast<PackageKit::Transaction::Filters>(filters), recursive);
}

PackageKit__Transaction* PackageKit__Daemon_GetUpdates1(int filters) {
    return PackageKit::Daemon::getUpdates(static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_UpgradeSystem3(const libqt_string distroId, int kind, int flags) {
    QString distroId_QString = QString::fromUtf8(distroId.data, distroId.len);
    return PackageKit::Daemon::upgradeSystem(distroId_QString, static_cast<PackageKit::Transaction::UpgradeKind>(kind), static_cast<PackageKit::Transaction::TransactionFlag>(flags));
}

PackageKit__Transaction* PackageKit__Daemon_InstallFiles2(const libqt_list /* of libqt_string */ files, int flags) {
    QList<QString> files_QList;
    files_QList.reserve(files.len);
    libqt_string* files_arr = static_cast<libqt_string*>(files.data);
    for (size_t i = 0; i < files.len; ++i) {
        QString files_arr_i_QString = QString::fromUtf8(files_arr[i].data, files_arr[i].len);
        files_QList.push_back(files_arr_i_QString);
    }
    return PackageKit::Daemon::installFiles(files_QList, static_cast<PackageKit::Transaction::TransactionFlag>(flags));
}

PackageKit__Transaction* PackageKit__Daemon_InstallFile2(const libqt_string file, int flags) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return PackageKit::Daemon::installFile(file_QString, static_cast<PackageKit::Transaction::TransactionFlag>(flags));
}

PackageKit__Transaction* PackageKit__Daemon_InstallPackages2(const libqt_list /* of libqt_string */ packageIDs, int flags) {
    QList<QString> packageIDs_QList;
    packageIDs_QList.reserve(packageIDs.len);
    libqt_string* packageIDs_arr = static_cast<libqt_string*>(packageIDs.data);
    for (size_t i = 0; i < packageIDs.len; ++i) {
        QString packageIDs_arr_i_QString = QString::fromUtf8(packageIDs_arr[i].data, packageIDs_arr[i].len);
        packageIDs_QList.push_back(packageIDs_arr_i_QString);
    }
    return PackageKit::Daemon::installPackages(packageIDs_QList, static_cast<PackageKit::Transaction::TransactionFlag>(flags));
}

PackageKit__Transaction* PackageKit__Daemon_InstallPackage2(const libqt_string packageID, int flags) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    return PackageKit::Daemon::installPackage(packageID_QString, static_cast<PackageKit::Transaction::TransactionFlag>(flags));
}

PackageKit__Transaction* PackageKit__Daemon_RemovePackages2(const libqt_list /* of libqt_string */ packageIDs, bool allowDeps) {
    QList<QString> packageIDs_QList;
    packageIDs_QList.reserve(packageIDs.len);
    libqt_string* packageIDs_arr = static_cast<libqt_string*>(packageIDs.data);
    for (size_t i = 0; i < packageIDs.len; ++i) {
        QString packageIDs_arr_i_QString = QString::fromUtf8(packageIDs_arr[i].data, packageIDs_arr[i].len);
        packageIDs_QList.push_back(packageIDs_arr_i_QString);
    }
    return PackageKit::Daemon::removePackages(packageIDs_QList, allowDeps);
}

PackageKit__Transaction* PackageKit__Daemon_RemovePackages3(const libqt_list /* of libqt_string */ packageIDs, bool allowDeps, bool autoRemove) {
    QList<QString> packageIDs_QList;
    packageIDs_QList.reserve(packageIDs.len);
    libqt_string* packageIDs_arr = static_cast<libqt_string*>(packageIDs.data);
    for (size_t i = 0; i < packageIDs.len; ++i) {
        QString packageIDs_arr_i_QString = QString::fromUtf8(packageIDs_arr[i].data, packageIDs_arr[i].len);
        packageIDs_QList.push_back(packageIDs_arr_i_QString);
    }
    return PackageKit::Daemon::removePackages(packageIDs_QList, allowDeps, autoRemove);
}

PackageKit__Transaction* PackageKit__Daemon_RemovePackages4(const libqt_list /* of libqt_string */ packageIDs, bool allowDeps, bool autoRemove, int flags) {
    QList<QString> packageIDs_QList;
    packageIDs_QList.reserve(packageIDs.len);
    libqt_string* packageIDs_arr = static_cast<libqt_string*>(packageIDs.data);
    for (size_t i = 0; i < packageIDs.len; ++i) {
        QString packageIDs_arr_i_QString = QString::fromUtf8(packageIDs_arr[i].data, packageIDs_arr[i].len);
        packageIDs_QList.push_back(packageIDs_arr_i_QString);
    }
    return PackageKit::Daemon::removePackages(packageIDs_QList, allowDeps, autoRemove, static_cast<PackageKit::Transaction::TransactionFlag>(flags));
}

PackageKit__Transaction* PackageKit__Daemon_RemovePackage2(const libqt_string packageID, bool allowDeps) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    return PackageKit::Daemon::removePackage(packageID_QString, allowDeps);
}

PackageKit__Transaction* PackageKit__Daemon_RemovePackage3(const libqt_string packageID, bool allowDeps, bool autoRemove) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    return PackageKit::Daemon::removePackage(packageID_QString, allowDeps, autoRemove);
}

PackageKit__Transaction* PackageKit__Daemon_RemovePackage4(const libqt_string packageID, bool allowDeps, bool autoRemove, int flags) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    return PackageKit::Daemon::removePackage(packageID_QString, allowDeps, autoRemove, static_cast<PackageKit::Transaction::TransactionFlag>(flags));
}

PackageKit__Transaction* PackageKit__Daemon_RepairSystem1(int flags) {
    return PackageKit::Daemon::repairSystem(static_cast<PackageKit::Transaction::TransactionFlag>(flags));
}

PackageKit__Transaction* PackageKit__Daemon_RepoEnable2(const libqt_string repoId, bool enable) {
    QString repoId_QString = QString::fromUtf8(repoId.data, repoId.len);
    return PackageKit::Daemon::repoEnable(repoId_QString, enable);
}

PackageKit__Transaction* PackageKit__Daemon_RepoRemove3(const libqt_string repoId, bool autoremove, int flags) {
    QString repoId_QString = QString::fromUtf8(repoId.data, repoId.len);
    return PackageKit::Daemon::repoRemove(repoId_QString, autoremove, static_cast<PackageKit::Transaction::TransactionFlag>(flags));
}

PackageKit__Transaction* PackageKit__Daemon_Resolve22(const libqt_list /* of libqt_string */ packageNames, int filters) {
    QList<QString> packageNames_QList;
    packageNames_QList.reserve(packageNames.len);
    libqt_string* packageNames_arr = static_cast<libqt_string*>(packageNames.data);
    for (size_t i = 0; i < packageNames.len; ++i) {
        QString packageNames_arr_i_QString = QString::fromUtf8(packageNames_arr[i].data, packageNames_arr[i].len);
        packageNames_QList.push_back(packageNames_arr_i_QString);
    }
    return PackageKit::Daemon::resolve(packageNames_QList, static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_Resolve23(const libqt_string packageName, int filters) {
    QString packageName_QString = QString::fromUtf8(packageName.data, packageName.len);
    return PackageKit::Daemon::resolve(packageName_QString, static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_SearchFiles22(const libqt_list /* of libqt_string */ search, int filters) {
    QList<QString> search_QList;
    search_QList.reserve(search.len);
    libqt_string* search_arr = static_cast<libqt_string*>(search.data);
    for (size_t i = 0; i < search.len; ++i) {
        QString search_arr_i_QString = QString::fromUtf8(search_arr[i].data, search_arr[i].len);
        search_QList.push_back(search_arr_i_QString);
    }
    return PackageKit::Daemon::searchFiles(search_QList, static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_SearchFiles23(const libqt_string search, int filters) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    return PackageKit::Daemon::searchFiles(search_QString, static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_SearchDetails22(const libqt_list /* of libqt_string */ search, int filters) {
    QList<QString> search_QList;
    search_QList.reserve(search.len);
    libqt_string* search_arr = static_cast<libqt_string*>(search.data);
    for (size_t i = 0; i < search.len; ++i) {
        QString search_arr_i_QString = QString::fromUtf8(search_arr[i].data, search_arr[i].len);
        search_QList.push_back(search_arr_i_QString);
    }
    return PackageKit::Daemon::searchDetails(search_QList, static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_SearchDetails23(const libqt_string search, int filters) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    return PackageKit::Daemon::searchDetails(search_QString, static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_SearchGroups22(const libqt_list /* of libqt_string */ groups, int filters) {
    QList<QString> groups_QList;
    groups_QList.reserve(groups.len);
    libqt_string* groups_arr = static_cast<libqt_string*>(groups.data);
    for (size_t i = 0; i < groups.len; ++i) {
        QString groups_arr_i_QString = QString::fromUtf8(groups_arr[i].data, groups_arr[i].len);
        groups_QList.push_back(groups_arr_i_QString);
    }
    return PackageKit::Daemon::searchGroups(groups_QList, static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_SearchGroup22(const libqt_string group, int filters) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return PackageKit::Daemon::searchGroup(group_QString, static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_SearchGroup23(int group, int filters) {
    return PackageKit::Daemon::searchGroup(static_cast<PackageKit::Transaction::Group>(group), static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_SearchGroups23(PackageKit__Bitfield* group, int filters) {
    return PackageKit::Daemon::searchGroups(*group, static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_SearchNames22(const libqt_list /* of libqt_string */ search, int filters) {
    QList<QString> search_QList;
    search_QList.reserve(search.len);
    libqt_string* search_arr = static_cast<libqt_string*>(search.data);
    for (size_t i = 0; i < search.len; ++i) {
        QString search_arr_i_QString = QString::fromUtf8(search_arr[i].data, search_arr[i].len);
        search_QList.push_back(search_arr_i_QString);
    }
    return PackageKit::Daemon::searchNames(search_QList, static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_SearchNames23(const libqt_string search, int filters) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    return PackageKit::Daemon::searchNames(search_QString, static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_UpdatePackages2(const libqt_list /* of libqt_string */ packageIDs, int flags) {
    QList<QString> packageIDs_QList;
    packageIDs_QList.reserve(packageIDs.len);
    libqt_string* packageIDs_arr = static_cast<libqt_string*>(packageIDs.data);
    for (size_t i = 0; i < packageIDs.len; ++i) {
        QString packageIDs_arr_i_QString = QString::fromUtf8(packageIDs_arr[i].data, packageIDs_arr[i].len);
        packageIDs_QList.push_back(packageIDs_arr_i_QString);
    }
    return PackageKit::Daemon::updatePackages(packageIDs_QList, static_cast<PackageKit::Transaction::TransactionFlag>(flags));
}

PackageKit__Transaction* PackageKit__Daemon_UpdatePackage2(const libqt_string packageID, int flags) {
    QString packageID_QString = QString::fromUtf8(packageID.data, packageID.len);
    return PackageKit::Daemon::updatePackage(packageID_QString, static_cast<PackageKit::Transaction::TransactionFlag>(flags));
}

PackageKit__Transaction* PackageKit__Daemon_WhatProvides22(const libqt_list /* of libqt_string */ search, int filters) {
    QList<QString> search_QList;
    search_QList.reserve(search.len);
    libqt_string* search_arr = static_cast<libqt_string*>(search.data);
    for (size_t i = 0; i < search.len; ++i) {
        QString search_arr_i_QString = QString::fromUtf8(search_arr[i].data, search_arr[i].len);
        search_QList.push_back(search_arr_i_QString);
    }
    return PackageKit::Daemon::whatProvides(search_QList, static_cast<PackageKit::Transaction::Filters>(filters));
}

PackageKit__Transaction* PackageKit__Daemon_WhatProvides23(const libqt_string search, int filters) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    return PackageKit::Daemon::whatProvides(search_QString, static_cast<PackageKit::Transaction::Filters>(filters));
}

void PackageKit__Daemon_Delete(PackageKit__Daemon* self) {
    delete self;
}
