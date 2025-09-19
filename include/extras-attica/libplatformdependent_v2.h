#pragma once
#ifndef SRC_EXTRAS_ATTICAC_LIBPLATFORMDEPENDENT_V2_H
#define SRC_EXTRAS_ATTICAC_LIBPLATFORMDEPENDENT_V2_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Attica__PlatformDependentV2)
typedef Attica::PlatformDependentV2 Attica__PlatformDependentV2;
#endif
#else
typedef struct Attica__PlatformDependent Attica__PlatformDependent;
typedef struct Attica__PlatformDependentV2 Attica__PlatformDependentV2;
typedef struct QIODevice QIODevice;
typedef struct QNetworkReply QNetworkReply;
typedef struct QNetworkRequest QNetworkRequest;
#endif

QNetworkReply* Attica__PlatformDependentV2_DeleteResource(Attica__PlatformDependentV2* self, const QNetworkRequest* request);
QNetworkReply* Attica__PlatformDependentV2_Put(Attica__PlatformDependentV2* self, const QNetworkRequest* request, QIODevice* data);
QNetworkReply* Attica__PlatformDependentV2_Put2(Attica__PlatformDependentV2* self, const QNetworkRequest* request, const libqt_string data);
void Attica__PlatformDependentV2_OperatorAssign(Attica__PlatformDependentV2* self, const Attica__PlatformDependentV2* param1);
void Attica__PlatformDependentV2_Delete(Attica__PlatformDependentV2* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
