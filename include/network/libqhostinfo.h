#pragma once
#ifndef SRC_NETWORKC_LIBQHOSTINFO_H
#define SRC_NETWORKC_LIBQHOSTINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QHostAddress QHostAddress;
typedef struct QHostInfo QHostInfo;
#endif

#ifdef __cplusplus
typedef QHostInfo::HostInfoError HostInfoError; // C++ enum
#else
typedef int HostInfoError; // C ABI enum
#endif

QHostInfo* QHostInfo_new();
QHostInfo* QHostInfo_new2(QHostInfo* d);
QHostInfo* QHostInfo_new3(int lookupId);
void QHostInfo_OperatorAssign(QHostInfo* self, QHostInfo* d);
void QHostInfo_Swap(QHostInfo* self, QHostInfo* other);
libqt_string QHostInfo_HostName(const QHostInfo* self);
void QHostInfo_SetHostName(QHostInfo* self, libqt_string name);
libqt_list /* of QHostAddress* */ QHostInfo_Addresses(const QHostInfo* self);
void QHostInfo_SetAddresses(QHostInfo* self, libqt_list /* of QHostAddress* */ addresses);
int QHostInfo_Error(const QHostInfo* self);
void QHostInfo_SetError(QHostInfo* self, int errorVal);
libqt_string QHostInfo_ErrorString(const QHostInfo* self);
void QHostInfo_SetErrorString(QHostInfo* self, libqt_string errorString);
void QHostInfo_SetLookupId(QHostInfo* self, int id);
int QHostInfo_LookupId(const QHostInfo* self);
void QHostInfo_AbortHostLookup(int lookupId);
QHostInfo* QHostInfo_FromName(libqt_string name);
libqt_string QHostInfo_LocalHostName();
libqt_string QHostInfo_LocalDomainName();
void QHostInfo_Delete(QHostInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
