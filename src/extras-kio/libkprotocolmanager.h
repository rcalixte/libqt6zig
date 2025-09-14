#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKPROTOCOLMANAGER_H
#define SRC_EXTRAS_KIOC_LIBKPROTOCOLMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KProtocolManager KProtocolManager;
typedef struct QUrl QUrl;
#endif

KProtocolManager* KProtocolManager_new(const KProtocolManager* other);
KProtocolManager* KProtocolManager_new2(KProtocolManager* other);
void KProtocolManager_CopyAssign(KProtocolManager* self, KProtocolManager* other);
void KProtocolManager_MoveAssign(KProtocolManager* self, KProtocolManager* other);
int KProtocolManager_ReadTimeout();
int KProtocolManager_ConnectTimeout();
int KProtocolManager_ProxyConnectTimeout();
int KProtocolManager_ResponseTimeout();
bool KProtocolManager_AutoResume();
bool KProtocolManager_MarkPartial();
int KProtocolManager_MinimumKeepSize();
bool KProtocolManager_SupportsListing(const QUrl* url);
bool KProtocolManager_SupportsReading(const QUrl* url);
bool KProtocolManager_SupportsWriting(const QUrl* url);
bool KProtocolManager_SupportsMakeDir(const QUrl* url);
bool KProtocolManager_SupportsDeleting(const QUrl* url);
bool KProtocolManager_SupportsLinking(const QUrl* url);
bool KProtocolManager_SupportsMoving(const QUrl* url);
bool KProtocolManager_SupportsOpening(const QUrl* url);
bool KProtocolManager_SupportsTruncating(const QUrl* url);
bool KProtocolManager_CanCopyFromFile(const QUrl* url);
bool KProtocolManager_CanCopyToFile(const QUrl* url);
bool KProtocolManager_CanRenameFromFile(const QUrl* url);
bool KProtocolManager_CanRenameToFile(const QUrl* url);
bool KProtocolManager_CanDeleteRecursive(const QUrl* url);
libqt_string KProtocolManager_DefaultMimetype(const QUrl* url);
int KProtocolManager_InputType(const QUrl* url);
int KProtocolManager_OutputType(const QUrl* url);
libqt_list /* of libqt_string */ KProtocolManager_Listing(const QUrl* url);
bool KProtocolManager_IsSourceProtocol(const QUrl* url);
libqt_string KProtocolManager_ProtocolForArchiveMimetype(const libqt_string mimeType);
void KProtocolManager_ReparseConfiguration();
libqt_string KProtocolManager_CharsetFor(const QUrl* url);
bool KProtocolManager_SupportsPermissions(const QUrl* url);
void KProtocolManager_Delete(KProtocolManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
