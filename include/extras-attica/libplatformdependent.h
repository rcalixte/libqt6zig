#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBPLATFORMDEPENDENT_H
#define SRC_EXTRAS_ATTICAC_LIBPLATFORMDEPENDENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__PlatformDependent)
typedef Attica::PlatformDependent Attica__PlatformDependent;
#endif
#else
typedef struct Attica__PlatformDependent Attica__PlatformDependent;
typedef struct QIODevice QIODevice;
typedef struct QNetworkAccessManager QNetworkAccessManager;
typedef struct QNetworkReply QNetworkReply;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QUrl QUrl;
#endif

libqt_list /* of QUrl* */ Attica__PlatformDependent_GetDefaultProviderFiles(const Attica__PlatformDependent* self);
void Attica__PlatformDependent_AddDefaultProviderFile(Attica__PlatformDependent* self, const QUrl* url);
void Attica__PlatformDependent_RemoveDefaultProviderFile(Attica__PlatformDependent* self, const QUrl* url);
void Attica__PlatformDependent_EnableProvider(const Attica__PlatformDependent* self, const QUrl* baseUrl, bool enabled);
bool Attica__PlatformDependent_IsEnabled(const Attica__PlatformDependent* self, const QUrl* baseUrl);
bool Attica__PlatformDependent_HasCredentials(const Attica__PlatformDependent* self, const QUrl* baseUrl);
bool Attica__PlatformDependent_LoadCredentials(Attica__PlatformDependent* self, const QUrl* baseUrl, libqt_string user, libqt_string password);
bool Attica__PlatformDependent_AskForCredentials(Attica__PlatformDependent* self, const QUrl* baseUrl, libqt_string user, libqt_string password);
bool Attica__PlatformDependent_SaveCredentials(Attica__PlatformDependent* self, const QUrl* baseUrl, const libqt_string user, const libqt_string password);
QNetworkReply* Attica__PlatformDependent_Get(Attica__PlatformDependent* self, const QNetworkRequest* request);
QNetworkReply* Attica__PlatformDependent_Post(Attica__PlatformDependent* self, const QNetworkRequest* request, QIODevice* data);
QNetworkReply* Attica__PlatformDependent_Post2(Attica__PlatformDependent* self, const QNetworkRequest* request, const libqt_string data);
void Attica__PlatformDependent_SetNam(Attica__PlatformDependent* self, QNetworkAccessManager* nam);
QNetworkAccessManager* Attica__PlatformDependent_Nam(Attica__PlatformDependent* self);
void Attica__PlatformDependent_OperatorAssign(Attica__PlatformDependent* self, const Attica__PlatformDependent* param1);
void Attica__PlatformDependent_Delete(Attica__PlatformDependent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
