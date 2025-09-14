#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKPROTOCOLINFO_H
#define SRC_EXTRAS_KIOC_LIBKPROTOCOLINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KProtocolInfo__ExtraField)
typedef KProtocolInfo::ExtraField KProtocolInfo__ExtraField;
#endif
#else
typedef struct KProtocolInfo KProtocolInfo;
typedef struct KProtocolInfo__ExtraField KProtocolInfo__ExtraField;
typedef struct QUrl QUrl;
#endif

libqt_list /* of libqt_string */ KProtocolInfo_Protocols();
bool KProtocolInfo_IsKnownProtocol(const QUrl* url);
bool KProtocolInfo_IsKnownProtocol2(const libqt_string protocol);
libqt_string KProtocolInfo_Exec(const libqt_string protocol);
libqt_list /* of KProtocolInfo__ExtraField* */ KProtocolInfo_ExtraFields(const QUrl* url);
bool KProtocolInfo_IsHelperProtocol(const QUrl* url);
bool KProtocolInfo_IsHelperProtocol2(const libqt_string protocol);
bool KProtocolInfo_IsFilterProtocol(const QUrl* url);
bool KProtocolInfo_IsFilterProtocol2(const libqt_string protocol);
libqt_string KProtocolInfo_Icon(const libqt_string protocol);
libqt_string KProtocolInfo_Config(const libqt_string protocol);
int KProtocolInfo_MaxWorkers(const libqt_string protocol);
int KProtocolInfo_MaxWorkersPerHost(const libqt_string protocol);
bool KProtocolInfo_DetermineMimetypeFromExtension(const libqt_string protocol);
libqt_string KProtocolInfo_DefaultMimetype(const libqt_string protocol);
libqt_string KProtocolInfo_DocPath(const libqt_string protocol);
libqt_string KProtocolInfo_ProtocolClass(const libqt_string protocol);
bool KProtocolInfo_ShowFilePreview(const libqt_string protocol);
libqt_list /* of libqt_string */ KProtocolInfo_Capabilities(const libqt_string protocol);
libqt_list /* of libqt_string */ KProtocolInfo_ArchiveMimetypes(const libqt_string protocol);
libqt_string KProtocolInfo_ProxiedBy(const libqt_string protocol);
bool KProtocolInfo_IsKnownProtocol22(const libqt_string protocol, bool updateCacheIfNotfound);
void KProtocolInfo_Delete(KProtocolInfo* self);

KProtocolInfo__ExtraField* KProtocolInfo__ExtraField_new();
KProtocolInfo__ExtraField* KProtocolInfo__ExtraField_new2(const libqt_string _name, int _type);
KProtocolInfo__ExtraField* KProtocolInfo__ExtraField_new3(const KProtocolInfo__ExtraField* param1);
libqt_string KProtocolInfo__ExtraField_Name(const KProtocolInfo__ExtraField* self);
void KProtocolInfo__ExtraField_SetName(KProtocolInfo__ExtraField* self, libqt_string name);
int KProtocolInfo__ExtraField_Type(const KProtocolInfo__ExtraField* self);
void KProtocolInfo__ExtraField_SetType(KProtocolInfo__ExtraField* self, int type);
void KProtocolInfo__ExtraField_OperatorAssign(KProtocolInfo__ExtraField* self, const KProtocolInfo__ExtraField* param1);
void KProtocolInfo__ExtraField_Delete(KProtocolInfo__ExtraField* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
