#pragma once
#ifndef SRC_EXTRAS_KSERVICEC_LIBKSERVICE_H
#define SRC_EXTRAS_KSERVICEC_LIBKSERVICE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KDesktopFile KDesktopFile;
typedef struct KService KService;
typedef struct KServiceAction KServiceAction;
typedef struct KSycocaEntry KSycocaEntry;
typedef struct QSharedData QSharedData;
#endif

KService* KService_new(const libqt_string name, const libqt_string exec, const libqt_string icon);
KService* KService_new2(const libqt_string fullpath);
KService* KService_new3(const KDesktopFile* config);
KService* KService_new4(const KService* other);
KService* KService_new5(const KDesktopFile* config, const libqt_string entryPath);
bool KService_IsApplication(const KService* self);
libqt_string KService_Exec(const KService* self);
libqt_string KService_Icon(const KService* self);
bool KService_Terminal(const KService* self);
libqt_string KService_TerminalOptions(const KService* self);
bool KService_RunOnDiscreteGpu(const KService* self);
bool KService_SubstituteUid(const KService* self);
libqt_string KService_Username(const KService* self);
libqt_string KService_DesktopEntryName(const KService* self);
libqt_string KService_MenuId(const KService* self);
libqt_string KService_StorageId(const KService* self);
libqt_string KService_WorkingDirectory(const KService* self);
libqt_string KService_Comment(const KService* self);
libqt_string KService_GenericName(const KService* self);
libqt_string KService_UntranslatedGenericName(const KService* self);
libqt_string KService_UntranslatedName(const KService* self);
libqt_list /* of libqt_string */ KService_Keywords(const KService* self);
libqt_list /* of libqt_string */ KService_Categories(const KService* self);
libqt_list /* of libqt_string */ KService_MimeTypes(const KService* self);
libqt_list /* of libqt_string */ KService_SchemeHandlers(const KService* self);
libqt_list /* of libqt_string */ KService_SupportedProtocols(const KService* self);
bool KService_HasMimeType(const KService* self, const libqt_string mimeType);
libqt_list /* of KServiceAction* */ KService_Actions(const KService* self);
bool KService_AllowMultipleFiles(const KService* self);
bool KService_NoDisplay(const KService* self);
bool KService_ShowInCurrentDesktop(const KService* self);
bool KService_ShowOnCurrentPlatform(const KService* self);
libqt_string KService_DocPath(const KService* self);
libqt_string KService_LocateLocal(const KService* self);
void KService_SetMenuId(KService* self, const libqt_string menuId);
void KService_SetTerminal(KService* self, bool b);
void KService_SetTerminalOptions(KService* self, const libqt_string options);
void KService_SetExec(KService* self, const libqt_string exec);
void KService_SetWorkingDirectory(KService* self, const libqt_string workingDir);
libqt_string KService_NewServicePath(bool showInMenu, const libqt_string suggestedName);
libqt_string KService_AliasFor(const KService* self);
void KService_Delete(KService* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
