#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKPLUGINMETADATA_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKPLUGINMETADATA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KAboutPerson KAboutPerson;
typedef struct KPluginMetaData KPluginMetaData;
typedef struct QJsonObject QJsonObject;
typedef struct QPluginLoader QPluginLoader;
#endif

KPluginMetaData* KPluginMetaData_new();
KPluginMetaData* KPluginMetaData_new2(const QPluginLoader* loader);
KPluginMetaData* KPluginMetaData_new3(const libqt_string pluginFile);
KPluginMetaData* KPluginMetaData_new4(const QJsonObject* metaData, const libqt_string fileName);
KPluginMetaData* KPluginMetaData_new5(const KPluginMetaData* param1);
KPluginMetaData* KPluginMetaData_new6(const QPluginLoader* loader, int options);
KPluginMetaData* KPluginMetaData_new7(const libqt_string pluginFile, int options);
void KPluginMetaData_OperatorAssign(KPluginMetaData* self, const KPluginMetaData* param1);
KPluginMetaData* KPluginMetaData_FromJsonFile(const libqt_string jsonFile);
KPluginMetaData* KPluginMetaData_FindPluginById(const libqt_string directory, const libqt_string pluginId);
bool KPluginMetaData_IsValid(const KPluginMetaData* self);
bool KPluginMetaData_IsHidden(const KPluginMetaData* self);
libqt_string KPluginMetaData_FileName(const KPluginMetaData* self);
QJsonObject* KPluginMetaData_RawData(const KPluginMetaData* self);
libqt_string KPluginMetaData_Name(const KPluginMetaData* self);
libqt_string KPluginMetaData_Description(const KPluginMetaData* self);
libqt_list /* of KAboutPerson* */ KPluginMetaData_Authors(const KPluginMetaData* self);
libqt_list /* of KAboutPerson* */ KPluginMetaData_Translators(const KPluginMetaData* self);
libqt_list /* of KAboutPerson* */ KPluginMetaData_OtherContributors(const KPluginMetaData* self);
libqt_string KPluginMetaData_Category(const KPluginMetaData* self);
libqt_string KPluginMetaData_IconName(const KPluginMetaData* self);
libqt_string KPluginMetaData_License(const KPluginMetaData* self);
libqt_string KPluginMetaData_LicenseText(const KPluginMetaData* self);
libqt_string KPluginMetaData_CopyrightText(const KPluginMetaData* self);
libqt_string KPluginMetaData_PluginId(const KPluginMetaData* self);
libqt_string KPluginMetaData_Version(const KPluginMetaData* self);
libqt_string KPluginMetaData_Website(const KPluginMetaData* self);
libqt_string KPluginMetaData_BugReportUrl(const KPluginMetaData* self);
libqt_list /* of libqt_string */ KPluginMetaData_MimeTypes(const KPluginMetaData* self);
bool KPluginMetaData_SupportsMimeType(const KPluginMetaData* self, const libqt_string mimeType);
libqt_list /* of libqt_string */ KPluginMetaData_FormFactors(const KPluginMetaData* self);
bool KPluginMetaData_IsEnabledByDefault(const KPluginMetaData* self);
libqt_string KPluginMetaData_Value2(const KPluginMetaData* self, const libqt_string key);
bool KPluginMetaData_Value4(const KPluginMetaData* self, const libqt_string key, bool defaultValue);
int KPluginMetaData_Value6(const KPluginMetaData* self, const libqt_string key, int defaultValue);
libqt_list /* of libqt_string */ KPluginMetaData_Value8(const KPluginMetaData* self, const libqt_string key, const libqt_list /* of libqt_string */ defaultValue);
bool KPluginMetaData_OperatorEqual(const KPluginMetaData* self, const KPluginMetaData* other);
bool KPluginMetaData_OperatorNotEqual(const KPluginMetaData* self, const KPluginMetaData* other);
bool KPluginMetaData_IsStaticPlugin(const KPluginMetaData* self);
KPluginMetaData* KPluginMetaData_FindPluginById3(const libqt_string directory, const libqt_string pluginId, int options);
libqt_string KPluginMetaData_Value23(const KPluginMetaData* self, const libqt_string key, const libqt_string defaultValue);
void KPluginMetaData_Delete(KPluginMetaData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
