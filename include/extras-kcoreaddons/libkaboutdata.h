#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKABOUTDATA_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKABOUTDATA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KAboutComponent KAboutComponent;
typedef struct KAboutData KAboutData;
typedef struct KAboutLicense KAboutLicense;
typedef struct KAboutPerson KAboutPerson;
typedef struct KCrash KCrash;
typedef struct QCommandLineParser QCommandLineParser;
typedef struct QJsonObject QJsonObject;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

void KCrash_DefaultCrashHandler(int param1);

KAboutPerson* KAboutPerson_new();
KAboutPerson* KAboutPerson_new2(const KAboutPerson* other);
KAboutPerson* KAboutPerson_new3(const libqt_string name);
KAboutPerson* KAboutPerson_new4(const libqt_string name, const libqt_string task);
KAboutPerson* KAboutPerson_new5(const libqt_string name, const libqt_string task, const libqt_string emailAddress);
KAboutPerson* KAboutPerson_new6(const libqt_string name, const libqt_string task, const libqt_string emailAddress, const libqt_string webAddress);
KAboutPerson* KAboutPerson_new7(const libqt_string name, const libqt_string task, const libqt_string emailAddress, const libqt_string webAddress, const QUrl* avatarUrl);
void KAboutPerson_OperatorAssign(KAboutPerson* self, const KAboutPerson* other);
libqt_string KAboutPerson_Name(const KAboutPerson* self);
libqt_string KAboutPerson_Task(const KAboutPerson* self);
libqt_string KAboutPerson_EmailAddress(const KAboutPerson* self);
libqt_string KAboutPerson_WebAddress(const KAboutPerson* self);
QUrl* KAboutPerson_AvatarUrl(const KAboutPerson* self);
KAboutPerson* KAboutPerson_FromJSON(const QJsonObject* obj);
void KAboutPerson_Delete(KAboutPerson* self);

KAboutLicense* KAboutLicense_new();
KAboutLicense* KAboutLicense_new2(const KAboutLicense* other);
void KAboutLicense_OperatorAssign(KAboutLicense* self, const KAboutLicense* other);
libqt_string KAboutLicense_Text(const KAboutLicense* self);
libqt_string KAboutLicense_Name(const KAboutLicense* self);
int KAboutLicense_Key(const KAboutLicense* self);
libqt_string KAboutLicense_Spdx(const KAboutLicense* self);
KAboutLicense* KAboutLicense_ByKeyword(const libqt_string keyword);
libqt_string KAboutLicense_Name1(const KAboutLicense* self, int formatName);
void KAboutLicense_Delete(KAboutLicense* self);

KAboutComponent* KAboutComponent_new();
KAboutComponent* KAboutComponent_new2(const libqt_string name, const libqt_string description, const libqt_string version, const libqt_string webAddress, const libqt_string pathToLicenseFile);
KAboutComponent* KAboutComponent_new3(const KAboutComponent* other);
KAboutComponent* KAboutComponent_new4(const libqt_string name);
KAboutComponent* KAboutComponent_new5(const libqt_string name, const libqt_string description);
KAboutComponent* KAboutComponent_new6(const libqt_string name, const libqt_string description, const libqt_string version);
KAboutComponent* KAboutComponent_new7(const libqt_string name, const libqt_string description, const libqt_string version, const libqt_string webAddress);
KAboutComponent* KAboutComponent_new8(const libqt_string name, const libqt_string description, const libqt_string version, const libqt_string webAddress, int licenseType);
void KAboutComponent_OperatorAssign(KAboutComponent* self, const KAboutComponent* other);
libqt_string KAboutComponent_Name(const KAboutComponent* self);
libqt_string KAboutComponent_Description(const KAboutComponent* self);
libqt_string KAboutComponent_Version(const KAboutComponent* self);
libqt_string KAboutComponent_WebAddress(const KAboutComponent* self);
KAboutLicense* KAboutComponent_License(const KAboutComponent* self);
void KAboutComponent_Delete(KAboutComponent* self);

KAboutData* KAboutData_new(const libqt_string componentName, const libqt_string displayName, const libqt_string version, const libqt_string shortDescription, int licenseType);
KAboutData* KAboutData_new2();
KAboutData* KAboutData_new3(const KAboutData* other);
KAboutData* KAboutData_new4(const libqt_string componentName, const libqt_string displayName, const libqt_string version, const libqt_string shortDescription, int licenseType, const libqt_string copyrightStatement);
KAboutData* KAboutData_new5(const libqt_string componentName, const libqt_string displayName, const libqt_string version, const libqt_string shortDescription, int licenseType, const libqt_string copyrightStatement, const libqt_string otherText);
KAboutData* KAboutData_new6(const libqt_string componentName, const libqt_string displayName, const libqt_string version, const libqt_string shortDescription, int licenseType, const libqt_string copyrightStatement, const libqt_string otherText, const libqt_string homePageAddress);
KAboutData* KAboutData_new7(const libqt_string componentName, const libqt_string displayName, const libqt_string version, const libqt_string shortDescription, int licenseType, const libqt_string copyrightStatement, const libqt_string otherText, const libqt_string homePageAddress, const libqt_string bugAddress);
KAboutData* KAboutData_new8(const libqt_string componentName);
KAboutData* KAboutData_new9(const libqt_string componentName, const libqt_string displayName);
KAboutData* KAboutData_new10(const libqt_string componentName, const libqt_string displayName, const libqt_string version);
KAboutData* KAboutData_ApplicationData();
void KAboutData_SetApplicationData(const KAboutData* aboutData);
void KAboutData_OperatorAssign(KAboutData* self, const KAboutData* other);
KAboutData* KAboutData_AddAuthor(KAboutData* self, const KAboutPerson* author);
KAboutData* KAboutData_AddAuthor2(KAboutData* self, const libqt_string name);
KAboutData* KAboutData_AddAuthor3(KAboutData* self, const libqt_string name, const libqt_string task, const libqt_string emailAddress, const libqt_string webAddress, const libqt_string kdeStoreUsername);
KAboutData* KAboutData_AddCredit(KAboutData* self, const KAboutPerson* person);
KAboutData* KAboutData_AddCredit2(KAboutData* self, const libqt_string name);
KAboutData* KAboutData_AddCredit3(KAboutData* self, const libqt_string name, const libqt_string task, const libqt_string emailAddress, const libqt_string webAddress, const libqt_string kdeStoreUsername);
KAboutData* KAboutData_SetTranslator(KAboutData* self, const libqt_string name, const libqt_string emailAddress);
KAboutData* KAboutData_AddComponent(KAboutData* self, const KAboutComponent* component);
KAboutData* KAboutData_AddComponent2(KAboutData* self, const libqt_string name);
KAboutData* KAboutData_AddComponent3(KAboutData* self, const libqt_string name, const libqt_string description, const libqt_string version, const libqt_string webAddress, const libqt_string pathToLicenseFile);
KAboutData* KAboutData_SetLicenseText(KAboutData* self, const libqt_string license);
KAboutData* KAboutData_AddLicenseText(KAboutData* self, const libqt_string license);
KAboutData* KAboutData_SetLicenseTextFile(KAboutData* self, const libqt_string file);
KAboutData* KAboutData_AddLicenseTextFile(KAboutData* self, const libqt_string file);
KAboutData* KAboutData_SetComponentName(KAboutData* self, const libqt_string componentName);
KAboutData* KAboutData_SetDisplayName(KAboutData* self, const libqt_string displayName);
KAboutData* KAboutData_SetProgramLogo(KAboutData* self, const QVariant* image);
KAboutData* KAboutData_SetVersion(KAboutData* self, const libqt_string version);
KAboutData* KAboutData_SetShortDescription(KAboutData* self, const libqt_string shortDescription);
KAboutData* KAboutData_SetLicense(KAboutData* self, int licenseKey);
KAboutData* KAboutData_SetLicense2(KAboutData* self, int licenseKey, int versionRestriction);
KAboutData* KAboutData_AddLicense(KAboutData* self, int licenseKey);
KAboutData* KAboutData_AddLicense2(KAboutData* self, int licenseKey, int versionRestriction);
KAboutData* KAboutData_SetCopyrightStatement(KAboutData* self, const libqt_string copyrightStatement);
KAboutData* KAboutData_SetOtherText(KAboutData* self, const libqt_string otherText);
KAboutData* KAboutData_SetHomepage(KAboutData* self, const libqt_string homepage);
KAboutData* KAboutData_SetBugAddress(KAboutData* self, const libqt_string bugAddress);
KAboutData* KAboutData_SetOrganizationDomain(KAboutData* self, const libqt_string domain);
KAboutData* KAboutData_SetProductName(KAboutData* self, const libqt_string name);
libqt_string KAboutData_ComponentName(const KAboutData* self);
libqt_string KAboutData_ProductName(const KAboutData* self);
const char* KAboutData_InternalProductName(const KAboutData* self);
libqt_string KAboutData_DisplayName(const KAboutData* self);
libqt_string KAboutData_OrganizationDomain(const KAboutData* self);
const char* KAboutData_InternalProgramName(const KAboutData* self);
QVariant* KAboutData_ProgramLogo(const KAboutData* self);
libqt_string KAboutData_Version(const KAboutData* self);
const char* KAboutData_InternalVersion(const KAboutData* self);
libqt_string KAboutData_ShortDescription(const KAboutData* self);
libqt_string KAboutData_Homepage(const KAboutData* self);
libqt_string KAboutData_BugAddress(const KAboutData* self);
const char* KAboutData_InternalBugAddress(const KAboutData* self);
libqt_list /* of KAboutPerson* */ KAboutData_Authors(const KAboutData* self);
libqt_list /* of KAboutPerson* */ KAboutData_Credits(const KAboutData* self);
libqt_list /* of KAboutPerson* */ KAboutData_Translators(const KAboutData* self);
libqt_string KAboutData_AboutTranslationTeam();
libqt_list /* of KAboutComponent* */ KAboutData_Components(const KAboutData* self);
libqt_string KAboutData_OtherText(const KAboutData* self);
libqt_list /* of KAboutLicense* */ KAboutData_Licenses(const KAboutData* self);
libqt_string KAboutData_CopyrightStatement(const KAboutData* self);
libqt_string KAboutData_CustomAuthorPlainText(const KAboutData* self);
libqt_string KAboutData_CustomAuthorRichText(const KAboutData* self);
bool KAboutData_CustomAuthorTextEnabled(const KAboutData* self);
KAboutData* KAboutData_SetCustomAuthorText(KAboutData* self, const libqt_string plainText, const libqt_string richText);
KAboutData* KAboutData_UnsetCustomAuthorText(KAboutData* self);
bool KAboutData_SetupCommandLine(KAboutData* self, QCommandLineParser* parser);
void KAboutData_ProcessCommandLine(KAboutData* self, QCommandLineParser* parser);
KAboutData* KAboutData_SetDesktopFileName(KAboutData* self, const libqt_string desktopFileName);
libqt_string KAboutData_DesktopFileName(const KAboutData* self);
KAboutData* KAboutData_AddAuthor22(KAboutData* self, const libqt_string name, const libqt_string task);
KAboutData* KAboutData_AddAuthor32(KAboutData* self, const libqt_string name, const libqt_string task, const libqt_string emailAddress);
KAboutData* KAboutData_AddAuthor4(KAboutData* self, const libqt_string name, const libqt_string task, const libqt_string emailAddress, const libqt_string webAddress);
KAboutData* KAboutData_AddAuthor5(KAboutData* self, const libqt_string name, const libqt_string task, const libqt_string emailAddress, const libqt_string webAddress, const QUrl* avatarUrl);
KAboutData* KAboutData_AddCredit22(KAboutData* self, const libqt_string name, const libqt_string task);
KAboutData* KAboutData_AddCredit32(KAboutData* self, const libqt_string name, const libqt_string task, const libqt_string emailAddress);
KAboutData* KAboutData_AddCredit4(KAboutData* self, const libqt_string name, const libqt_string task, const libqt_string emailAddress, const libqt_string webAddress);
KAboutData* KAboutData_AddCredit5(KAboutData* self, const libqt_string name, const libqt_string task, const libqt_string emailAddress, const libqt_string webAddress, const QUrl* avatarUrl);
KAboutData* KAboutData_AddComponent22(KAboutData* self, const libqt_string name, const libqt_string description);
KAboutData* KAboutData_AddComponent32(KAboutData* self, const libqt_string name, const libqt_string description, const libqt_string version);
KAboutData* KAboutData_AddComponent4(KAboutData* self, const libqt_string name, const libqt_string description, const libqt_string version, const libqt_string webAddress);
KAboutData* KAboutData_AddComponent5(KAboutData* self, const libqt_string name, const libqt_string description, const libqt_string version, const libqt_string webAddress, int licenseKey);
void KAboutData_Delete(KAboutData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
