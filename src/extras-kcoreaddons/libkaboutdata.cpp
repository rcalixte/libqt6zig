#include <KAboutComponent>
#include <KAboutData>
#include <KAboutLicense>
#include <KAboutPerson>
#include <KCrash>
#include <QByteArray>
#include <QCommandLineParser>
#include <QJsonObject>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <kaboutdata.h>
#include "libkaboutdata.h"
#include "libkaboutdata.hxx"

void KCrash_DefaultCrashHandler(int param1) {
    KCrash::defaultCrashHandler(static_cast<int>(param1));
}

KAboutPerson* KAboutPerson_new() {
    return new KAboutPerson();
}

KAboutPerson* KAboutPerson_new2(const KAboutPerson* other) {
    return new KAboutPerson(*other);
}

KAboutPerson* KAboutPerson_new3(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new KAboutPerson(name_QString);
}

KAboutPerson* KAboutPerson_new4(const libqt_string name, const libqt_string task) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString task_QString = QString::fromUtf8(task.data, task.len);
    return new KAboutPerson(name_QString, task_QString);
}

KAboutPerson* KAboutPerson_new5(const libqt_string name, const libqt_string task, const libqt_string emailAddress) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString task_QString = QString::fromUtf8(task.data, task.len);
    QString emailAddress_QString = QString::fromUtf8(emailAddress.data, emailAddress.len);
    return new KAboutPerson(name_QString, task_QString, emailAddress_QString);
}

KAboutPerson* KAboutPerson_new6(const libqt_string name, const libqt_string task, const libqt_string emailAddress, const libqt_string webAddress) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString task_QString = QString::fromUtf8(task.data, task.len);
    QString emailAddress_QString = QString::fromUtf8(emailAddress.data, emailAddress.len);
    QString webAddress_QString = QString::fromUtf8(webAddress.data, webAddress.len);
    return new KAboutPerson(name_QString, task_QString, emailAddress_QString, webAddress_QString);
}

KAboutPerson* KAboutPerson_new7(const libqt_string name, const libqt_string task, const libqt_string emailAddress, const libqt_string webAddress, const QUrl* avatarUrl) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString task_QString = QString::fromUtf8(task.data, task.len);
    QString emailAddress_QString = QString::fromUtf8(emailAddress.data, emailAddress.len);
    QString webAddress_QString = QString::fromUtf8(webAddress.data, webAddress.len);
    return new KAboutPerson(name_QString, task_QString, emailAddress_QString, webAddress_QString, *avatarUrl);
}

void KAboutPerson_OperatorAssign(KAboutPerson* self, const KAboutPerson* other) {
    self->operator=(*other);
}

libqt_string KAboutPerson_Name(const KAboutPerson* self) {
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

libqt_string KAboutPerson_Task(const KAboutPerson* self) {
    QString _ret = self->task();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAboutPerson_EmailAddress(const KAboutPerson* self) {
    QString _ret = self->emailAddress();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAboutPerson_WebAddress(const KAboutPerson* self) {
    QString _ret = self->webAddress();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KAboutPerson_AvatarUrl(const KAboutPerson* self) {
    return new QUrl(self->avatarUrl());
}

KAboutPerson* KAboutPerson_FromJSON(const QJsonObject* obj) {
    return new KAboutPerson(KAboutPerson::fromJSON(*obj));
}

void KAboutPerson_Delete(KAboutPerson* self) {
    delete self;
}

KAboutLicense* KAboutLicense_new() {
    return new KAboutLicense();
}

KAboutLicense* KAboutLicense_new2(const KAboutLicense* other) {
    return new KAboutLicense(*other);
}

void KAboutLicense_OperatorAssign(KAboutLicense* self, const KAboutLicense* other) {
    self->operator=(*other);
}

libqt_string KAboutLicense_Text(const KAboutLicense* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAboutLicense_Name(const KAboutLicense* self) {
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

int KAboutLicense_Key(const KAboutLicense* self) {
    return static_cast<int>(self->key());
}

libqt_string KAboutLicense_Spdx(const KAboutLicense* self) {
    QString _ret = self->spdx();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KAboutLicense* KAboutLicense_ByKeyword(const libqt_string keyword) {
    QString keyword_QString = QString::fromUtf8(keyword.data, keyword.len);
    return new KAboutLicense(KAboutLicense::byKeyword(keyword_QString));
}

libqt_string KAboutLicense_Name1(const KAboutLicense* self, int formatName) {
    QString _ret = self->name(static_cast<KAboutLicense::NameFormat>(formatName));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KAboutLicense_Delete(KAboutLicense* self) {
    delete self;
}

KAboutComponent* KAboutComponent_new() {
    return new KAboutComponent();
}

KAboutComponent* KAboutComponent_new2(const libqt_string name, const libqt_string description, const libqt_string version, const libqt_string webAddress, const libqt_string pathToLicenseFile) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString description_QString = QString::fromUtf8(description.data, description.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    QString webAddress_QString = QString::fromUtf8(webAddress.data, webAddress.len);
    QString pathToLicenseFile_QString = QString::fromUtf8(pathToLicenseFile.data, pathToLicenseFile.len);
    return new KAboutComponent(name_QString, description_QString, version_QString, webAddress_QString, pathToLicenseFile_QString);
}

KAboutComponent* KAboutComponent_new3(const KAboutComponent* other) {
    return new KAboutComponent(*other);
}

KAboutComponent* KAboutComponent_new4(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new KAboutComponent(name_QString);
}

KAboutComponent* KAboutComponent_new5(const libqt_string name, const libqt_string description) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString description_QString = QString::fromUtf8(description.data, description.len);
    return new KAboutComponent(name_QString, description_QString);
}

KAboutComponent* KAboutComponent_new6(const libqt_string name, const libqt_string description, const libqt_string version) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString description_QString = QString::fromUtf8(description.data, description.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    return new KAboutComponent(name_QString, description_QString, version_QString);
}

KAboutComponent* KAboutComponent_new7(const libqt_string name, const libqt_string description, const libqt_string version, const libqt_string webAddress) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString description_QString = QString::fromUtf8(description.data, description.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    QString webAddress_QString = QString::fromUtf8(webAddress.data, webAddress.len);
    return new KAboutComponent(name_QString, description_QString, version_QString, webAddress_QString);
}

KAboutComponent* KAboutComponent_new8(const libqt_string name, const libqt_string description, const libqt_string version, const libqt_string webAddress, int licenseType) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString description_QString = QString::fromUtf8(description.data, description.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    QString webAddress_QString = QString::fromUtf8(webAddress.data, webAddress.len);
    return new KAboutComponent(name_QString, description_QString, version_QString, webAddress_QString, static_cast<KAboutLicense::LicenseKey>(licenseType));
}

void KAboutComponent_OperatorAssign(KAboutComponent* self, const KAboutComponent* other) {
    self->operator=(*other);
}

libqt_string KAboutComponent_Name(const KAboutComponent* self) {
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

libqt_string KAboutComponent_Description(const KAboutComponent* self) {
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

libqt_string KAboutComponent_Version(const KAboutComponent* self) {
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

libqt_string KAboutComponent_WebAddress(const KAboutComponent* self) {
    QString _ret = self->webAddress();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KAboutLicense* KAboutComponent_License(const KAboutComponent* self) {
    return new KAboutLicense(self->license());
}

void KAboutComponent_Delete(KAboutComponent* self) {
    delete self;
}

KAboutData* KAboutData_new(const libqt_string componentName, const libqt_string displayName, const libqt_string version, const libqt_string shortDescription, int licenseType) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString displayName_QString = QString::fromUtf8(displayName.data, displayName.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    QString shortDescription_QString = QString::fromUtf8(shortDescription.data, shortDescription.len);
    return new KAboutData(componentName_QString, displayName_QString, version_QString, shortDescription_QString, static_cast<KAboutLicense::LicenseKey>(licenseType));
}

KAboutData* KAboutData_new2() {
    return new KAboutData();
}

KAboutData* KAboutData_new3(const KAboutData* other) {
    return new KAboutData(*other);
}

KAboutData* KAboutData_new4(const libqt_string componentName, const libqt_string displayName, const libqt_string version, const libqt_string shortDescription, int licenseType, const libqt_string copyrightStatement) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString displayName_QString = QString::fromUtf8(displayName.data, displayName.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    QString shortDescription_QString = QString::fromUtf8(shortDescription.data, shortDescription.len);
    QString copyrightStatement_QString = QString::fromUtf8(copyrightStatement.data, copyrightStatement.len);
    return new KAboutData(componentName_QString, displayName_QString, version_QString, shortDescription_QString, static_cast<KAboutLicense::LicenseKey>(licenseType), copyrightStatement_QString);
}

KAboutData* KAboutData_new5(const libqt_string componentName, const libqt_string displayName, const libqt_string version, const libqt_string shortDescription, int licenseType, const libqt_string copyrightStatement, const libqt_string otherText) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString displayName_QString = QString::fromUtf8(displayName.data, displayName.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    QString shortDescription_QString = QString::fromUtf8(shortDescription.data, shortDescription.len);
    QString copyrightStatement_QString = QString::fromUtf8(copyrightStatement.data, copyrightStatement.len);
    QString otherText_QString = QString::fromUtf8(otherText.data, otherText.len);
    return new KAboutData(componentName_QString, displayName_QString, version_QString, shortDescription_QString, static_cast<KAboutLicense::LicenseKey>(licenseType), copyrightStatement_QString, otherText_QString);
}

KAboutData* KAboutData_new6(const libqt_string componentName, const libqt_string displayName, const libqt_string version, const libqt_string shortDescription, int licenseType, const libqt_string copyrightStatement, const libqt_string otherText, const libqt_string homePageAddress) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString displayName_QString = QString::fromUtf8(displayName.data, displayName.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    QString shortDescription_QString = QString::fromUtf8(shortDescription.data, shortDescription.len);
    QString copyrightStatement_QString = QString::fromUtf8(copyrightStatement.data, copyrightStatement.len);
    QString otherText_QString = QString::fromUtf8(otherText.data, otherText.len);
    QString homePageAddress_QString = QString::fromUtf8(homePageAddress.data, homePageAddress.len);
    return new KAboutData(componentName_QString, displayName_QString, version_QString, shortDescription_QString, static_cast<KAboutLicense::LicenseKey>(licenseType), copyrightStatement_QString, otherText_QString, homePageAddress_QString);
}

KAboutData* KAboutData_new7(const libqt_string componentName, const libqt_string displayName, const libqt_string version, const libqt_string shortDescription, int licenseType, const libqt_string copyrightStatement, const libqt_string otherText, const libqt_string homePageAddress, const libqt_string bugAddress) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString displayName_QString = QString::fromUtf8(displayName.data, displayName.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    QString shortDescription_QString = QString::fromUtf8(shortDescription.data, shortDescription.len);
    QString copyrightStatement_QString = QString::fromUtf8(copyrightStatement.data, copyrightStatement.len);
    QString otherText_QString = QString::fromUtf8(otherText.data, otherText.len);
    QString homePageAddress_QString = QString::fromUtf8(homePageAddress.data, homePageAddress.len);
    QString bugAddress_QString = QString::fromUtf8(bugAddress.data, bugAddress.len);
    return new KAboutData(componentName_QString, displayName_QString, version_QString, shortDescription_QString, static_cast<KAboutLicense::LicenseKey>(licenseType), copyrightStatement_QString, otherText_QString, homePageAddress_QString, bugAddress_QString);
}

KAboutData* KAboutData_new8(const libqt_string componentName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    return new KAboutData(componentName_QString);
}

KAboutData* KAboutData_new9(const libqt_string componentName, const libqt_string displayName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString displayName_QString = QString::fromUtf8(displayName.data, displayName.len);
    return new KAboutData(componentName_QString, displayName_QString);
}

KAboutData* KAboutData_new10(const libqt_string componentName, const libqt_string displayName, const libqt_string version) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    QString displayName_QString = QString::fromUtf8(displayName.data, displayName.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    return new KAboutData(componentName_QString, displayName_QString, version_QString);
}

KAboutData* KAboutData_ApplicationData() {
    return new KAboutData(KAboutData::applicationData());
}

void KAboutData_SetApplicationData(const KAboutData* aboutData) {
    KAboutData::setApplicationData(*aboutData);
}

void KAboutData_OperatorAssign(KAboutData* self, const KAboutData* other) {
    self->operator=(*other);
}

KAboutData* KAboutData_AddAuthor(KAboutData* self, const KAboutPerson* author) {
    KAboutData& _ret = self->addAuthor(*author);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddAuthor2(KAboutData* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    KAboutData& _ret = self->addAuthor(name_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddAuthor3(KAboutData* self, const libqt_string name, const libqt_string task, const libqt_string emailAddress, const libqt_string webAddress, const libqt_string kdeStoreUsername) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString task_QString = QString::fromUtf8(task.data, task.len);
    QString emailAddress_QString = QString::fromUtf8(emailAddress.data, emailAddress.len);
    QString webAddress_QString = QString::fromUtf8(webAddress.data, webAddress.len);
    QString kdeStoreUsername_QString = QString::fromUtf8(kdeStoreUsername.data, kdeStoreUsername.len);
    KAboutData& _ret = self->addAuthor(name_QString, task_QString, emailAddress_QString, webAddress_QString, kdeStoreUsername_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddCredit(KAboutData* self, const KAboutPerson* person) {
    KAboutData& _ret = self->addCredit(*person);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddCredit2(KAboutData* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    KAboutData& _ret = self->addCredit(name_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddCredit3(KAboutData* self, const libqt_string name, const libqt_string task, const libqt_string emailAddress, const libqt_string webAddress, const libqt_string kdeStoreUsername) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString task_QString = QString::fromUtf8(task.data, task.len);
    QString emailAddress_QString = QString::fromUtf8(emailAddress.data, emailAddress.len);
    QString webAddress_QString = QString::fromUtf8(webAddress.data, webAddress.len);
    QString kdeStoreUsername_QString = QString::fromUtf8(kdeStoreUsername.data, kdeStoreUsername.len);
    KAboutData& _ret = self->addCredit(name_QString, task_QString, emailAddress_QString, webAddress_QString, kdeStoreUsername_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_SetTranslator(KAboutData* self, const libqt_string name, const libqt_string emailAddress) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString emailAddress_QString = QString::fromUtf8(emailAddress.data, emailAddress.len);
    KAboutData& _ret = self->setTranslator(name_QString, emailAddress_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddComponent(KAboutData* self, const KAboutComponent* component) {
    KAboutData& _ret = self->addComponent(*component);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddComponent2(KAboutData* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    KAboutData& _ret = self->addComponent(name_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddComponent3(KAboutData* self, const libqt_string name, const libqt_string description, const libqt_string version, const libqt_string webAddress, const libqt_string pathToLicenseFile) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString description_QString = QString::fromUtf8(description.data, description.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    QString webAddress_QString = QString::fromUtf8(webAddress.data, webAddress.len);
    QString pathToLicenseFile_QString = QString::fromUtf8(pathToLicenseFile.data, pathToLicenseFile.len);
    KAboutData& _ret = self->addComponent(name_QString, description_QString, version_QString, webAddress_QString, pathToLicenseFile_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_SetLicenseText(KAboutData* self, const libqt_string license) {
    QString license_QString = QString::fromUtf8(license.data, license.len);
    KAboutData& _ret = self->setLicenseText(license_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddLicenseText(KAboutData* self, const libqt_string license) {
    QString license_QString = QString::fromUtf8(license.data, license.len);
    KAboutData& _ret = self->addLicenseText(license_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_SetLicenseTextFile(KAboutData* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    KAboutData& _ret = self->setLicenseTextFile(file_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddLicenseTextFile(KAboutData* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    KAboutData& _ret = self->addLicenseTextFile(file_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_SetComponentName(KAboutData* self, const libqt_string componentName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    KAboutData& _ret = self->setComponentName(componentName_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_SetDisplayName(KAboutData* self, const libqt_string displayName) {
    QString displayName_QString = QString::fromUtf8(displayName.data, displayName.len);
    KAboutData& _ret = self->setDisplayName(displayName_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_SetProgramLogo(KAboutData* self, const QVariant* image) {
    KAboutData& _ret = self->setProgramLogo(*image);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_SetVersion(KAboutData* self, const libqt_string version) {
    QByteArray version_QByteArray(version.data, version.len);
    KAboutData& _ret = self->setVersion(version_QByteArray);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_SetShortDescription(KAboutData* self, const libqt_string shortDescription) {
    QString shortDescription_QString = QString::fromUtf8(shortDescription.data, shortDescription.len);
    KAboutData& _ret = self->setShortDescription(shortDescription_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_SetLicense(KAboutData* self, int licenseKey) {
    KAboutData& _ret = self->setLicense(static_cast<KAboutLicense::LicenseKey>(licenseKey));
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_SetLicense2(KAboutData* self, int licenseKey, int versionRestriction) {
    KAboutData& _ret = self->setLicense(static_cast<KAboutLicense::LicenseKey>(licenseKey), static_cast<KAboutLicense::VersionRestriction>(versionRestriction));
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddLicense(KAboutData* self, int licenseKey) {
    KAboutData& _ret = self->addLicense(static_cast<KAboutLicense::LicenseKey>(licenseKey));
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddLicense2(KAboutData* self, int licenseKey, int versionRestriction) {
    KAboutData& _ret = self->addLicense(static_cast<KAboutLicense::LicenseKey>(licenseKey), static_cast<KAboutLicense::VersionRestriction>(versionRestriction));
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_SetCopyrightStatement(KAboutData* self, const libqt_string copyrightStatement) {
    QString copyrightStatement_QString = QString::fromUtf8(copyrightStatement.data, copyrightStatement.len);
    KAboutData& _ret = self->setCopyrightStatement(copyrightStatement_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_SetOtherText(KAboutData* self, const libqt_string otherText) {
    QString otherText_QString = QString::fromUtf8(otherText.data, otherText.len);
    KAboutData& _ret = self->setOtherText(otherText_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_SetHomepage(KAboutData* self, const libqt_string homepage) {
    QString homepage_QString = QString::fromUtf8(homepage.data, homepage.len);
    KAboutData& _ret = self->setHomepage(homepage_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_SetBugAddress(KAboutData* self, const libqt_string bugAddress) {
    QByteArray bugAddress_QByteArray(bugAddress.data, bugAddress.len);
    KAboutData& _ret = self->setBugAddress(bugAddress_QByteArray);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_SetOrganizationDomain(KAboutData* self, const libqt_string domain) {
    QByteArray domain_QByteArray(domain.data, domain.len);
    KAboutData& _ret = self->setOrganizationDomain(domain_QByteArray);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_SetProductName(KAboutData* self, const libqt_string name) {
    QByteArray name_QByteArray(name.data, name.len);
    KAboutData& _ret = self->setProductName(name_QByteArray);
    // Cast returned reference into pointer
    return &_ret;
}

libqt_string KAboutData_ComponentName(const KAboutData* self) {
    QString _ret = self->componentName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAboutData_ProductName(const KAboutData* self) {
    QString _ret = self->productName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* KAboutData_InternalProductName(const KAboutData* self) {
    return (const char*)self->internalProductName();
}

libqt_string KAboutData_DisplayName(const KAboutData* self) {
    QString _ret = self->displayName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAboutData_OrganizationDomain(const KAboutData* self) {
    QString _ret = self->organizationDomain();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* KAboutData_InternalProgramName(const KAboutData* self) {
    return (const char*)self->internalProgramName();
}

QVariant* KAboutData_ProgramLogo(const KAboutData* self) {
    return new QVariant(self->programLogo());
}

libqt_string KAboutData_Version(const KAboutData* self) {
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

const char* KAboutData_InternalVersion(const KAboutData* self) {
    return (const char*)self->internalVersion();
}

libqt_string KAboutData_ShortDescription(const KAboutData* self) {
    QString _ret = self->shortDescription();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAboutData_Homepage(const KAboutData* self) {
    QString _ret = self->homepage();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAboutData_BugAddress(const KAboutData* self) {
    QString _ret = self->bugAddress();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* KAboutData_InternalBugAddress(const KAboutData* self) {
    return (const char*)self->internalBugAddress();
}

libqt_list /* of KAboutPerson* */ KAboutData_Authors(const KAboutData* self) {
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

libqt_list /* of KAboutPerson* */ KAboutData_Credits(const KAboutData* self) {
    QList<KAboutPerson> _ret = self->credits();
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

libqt_list /* of KAboutPerson* */ KAboutData_Translators(const KAboutData* self) {
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

libqt_string KAboutData_AboutTranslationTeam() {
    QString _ret = KAboutData::aboutTranslationTeam();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of KAboutComponent* */ KAboutData_Components(const KAboutData* self) {
    QList<KAboutComponent> _ret = self->components();
    // Convert QList<> from C++ memory to manually-managed C memory
    KAboutComponent** _arr = static_cast<KAboutComponent**>(malloc(sizeof(KAboutComponent*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KAboutComponent(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string KAboutData_OtherText(const KAboutData* self) {
    QString _ret = self->otherText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of KAboutLicense* */ KAboutData_Licenses(const KAboutData* self) {
    QList<KAboutLicense> _ret = self->licenses();
    // Convert QList<> from C++ memory to manually-managed C memory
    KAboutLicense** _arr = static_cast<KAboutLicense**>(malloc(sizeof(KAboutLicense*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KAboutLicense(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string KAboutData_CopyrightStatement(const KAboutData* self) {
    QString _ret = self->copyrightStatement();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAboutData_CustomAuthorPlainText(const KAboutData* self) {
    QString _ret = self->customAuthorPlainText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAboutData_CustomAuthorRichText(const KAboutData* self) {
    QString _ret = self->customAuthorRichText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KAboutData_CustomAuthorTextEnabled(const KAboutData* self) {
    return self->customAuthorTextEnabled();
}

KAboutData* KAboutData_SetCustomAuthorText(KAboutData* self, const libqt_string plainText, const libqt_string richText) {
    QString plainText_QString = QString::fromUtf8(plainText.data, plainText.len);
    QString richText_QString = QString::fromUtf8(richText.data, richText.len);
    KAboutData& _ret = self->setCustomAuthorText(plainText_QString, richText_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_UnsetCustomAuthorText(KAboutData* self) {
    KAboutData& _ret = self->unsetCustomAuthorText();
    // Cast returned reference into pointer
    return &_ret;
}

bool KAboutData_SetupCommandLine(KAboutData* self, QCommandLineParser* parser) {
    return self->setupCommandLine(parser);
}

void KAboutData_ProcessCommandLine(KAboutData* self, QCommandLineParser* parser) {
    self->processCommandLine(parser);
}

KAboutData* KAboutData_SetDesktopFileName(KAboutData* self, const libqt_string desktopFileName) {
    QString desktopFileName_QString = QString::fromUtf8(desktopFileName.data, desktopFileName.len);
    KAboutData& _ret = self->setDesktopFileName(desktopFileName_QString);
    // Cast returned reference into pointer
    return &_ret;
}

libqt_string KAboutData_DesktopFileName(const KAboutData* self) {
    QString _ret = self->desktopFileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KAboutData* KAboutData_AddAuthor22(KAboutData* self, const libqt_string name, const libqt_string task) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString task_QString = QString::fromUtf8(task.data, task.len);
    KAboutData& _ret = self->addAuthor(name_QString, task_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddAuthor32(KAboutData* self, const libqt_string name, const libqt_string task, const libqt_string emailAddress) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString task_QString = QString::fromUtf8(task.data, task.len);
    QString emailAddress_QString = QString::fromUtf8(emailAddress.data, emailAddress.len);
    KAboutData& _ret = self->addAuthor(name_QString, task_QString, emailAddress_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddAuthor4(KAboutData* self, const libqt_string name, const libqt_string task, const libqt_string emailAddress, const libqt_string webAddress) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString task_QString = QString::fromUtf8(task.data, task.len);
    QString emailAddress_QString = QString::fromUtf8(emailAddress.data, emailAddress.len);
    QString webAddress_QString = QString::fromUtf8(webAddress.data, webAddress.len);
    KAboutData& _ret = self->addAuthor(name_QString, task_QString, emailAddress_QString, webAddress_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddAuthor5(KAboutData* self, const libqt_string name, const libqt_string task, const libqt_string emailAddress, const libqt_string webAddress, const QUrl* avatarUrl) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString task_QString = QString::fromUtf8(task.data, task.len);
    QString emailAddress_QString = QString::fromUtf8(emailAddress.data, emailAddress.len);
    QString webAddress_QString = QString::fromUtf8(webAddress.data, webAddress.len);
    KAboutData& _ret = self->addAuthor(name_QString, task_QString, emailAddress_QString, webAddress_QString, *avatarUrl);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddCredit22(KAboutData* self, const libqt_string name, const libqt_string task) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString task_QString = QString::fromUtf8(task.data, task.len);
    KAboutData& _ret = self->addCredit(name_QString, task_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddCredit32(KAboutData* self, const libqt_string name, const libqt_string task, const libqt_string emailAddress) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString task_QString = QString::fromUtf8(task.data, task.len);
    QString emailAddress_QString = QString::fromUtf8(emailAddress.data, emailAddress.len);
    KAboutData& _ret = self->addCredit(name_QString, task_QString, emailAddress_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddCredit4(KAboutData* self, const libqt_string name, const libqt_string task, const libqt_string emailAddress, const libqt_string webAddress) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString task_QString = QString::fromUtf8(task.data, task.len);
    QString emailAddress_QString = QString::fromUtf8(emailAddress.data, emailAddress.len);
    QString webAddress_QString = QString::fromUtf8(webAddress.data, webAddress.len);
    KAboutData& _ret = self->addCredit(name_QString, task_QString, emailAddress_QString, webAddress_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddCredit5(KAboutData* self, const libqt_string name, const libqt_string task, const libqt_string emailAddress, const libqt_string webAddress, const QUrl* avatarUrl) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString task_QString = QString::fromUtf8(task.data, task.len);
    QString emailAddress_QString = QString::fromUtf8(emailAddress.data, emailAddress.len);
    QString webAddress_QString = QString::fromUtf8(webAddress.data, webAddress.len);
    KAboutData& _ret = self->addCredit(name_QString, task_QString, emailAddress_QString, webAddress_QString, *avatarUrl);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddComponent22(KAboutData* self, const libqt_string name, const libqt_string description) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString description_QString = QString::fromUtf8(description.data, description.len);
    KAboutData& _ret = self->addComponent(name_QString, description_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddComponent32(KAboutData* self, const libqt_string name, const libqt_string description, const libqt_string version) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString description_QString = QString::fromUtf8(description.data, description.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    KAboutData& _ret = self->addComponent(name_QString, description_QString, version_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddComponent4(KAboutData* self, const libqt_string name, const libqt_string description, const libqt_string version, const libqt_string webAddress) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString description_QString = QString::fromUtf8(description.data, description.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    QString webAddress_QString = QString::fromUtf8(webAddress.data, webAddress.len);
    KAboutData& _ret = self->addComponent(name_QString, description_QString, version_QString, webAddress_QString);
    // Cast returned reference into pointer
    return &_ret;
}

KAboutData* KAboutData_AddComponent5(KAboutData* self, const libqt_string name, const libqt_string description, const libqt_string version, const libqt_string webAddress, int licenseKey) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString description_QString = QString::fromUtf8(description.data, description.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    QString webAddress_QString = QString::fromUtf8(webAddress.data, webAddress.len);
    KAboutData& _ret = self->addComponent(name_QString, description_QString, version_QString, webAddress_QString, static_cast<KAboutLicense::LicenseKey>(licenseKey));
    // Cast returned reference into pointer
    return &_ret;
}

void KAboutData_Delete(KAboutData* self) {
    delete self;
}
