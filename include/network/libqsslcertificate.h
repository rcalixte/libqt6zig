#pragma once
#ifndef SRC_NETWORKC_LIBQSSLCERTIFICATE_H
#define SRC_NETWORKC_LIBQSSLCERTIFICATE_H

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
typedef struct QDateTime QDateTime;
typedef struct QIODevice QIODevice;
typedef struct QSslCertificate QSslCertificate;
typedef struct QSslCertificateExtension QSslCertificateExtension;
typedef struct QSslError QSslError;
typedef struct QSslKey QSslKey;
#endif

#ifdef __cplusplus
typedef QSslCertificate::PatternSyntax PatternSyntax; // C++ enum
typedef QSslCertificate::SubjectInfo SubjectInfo;     // C++ enum
#else
typedef int PatternSyntax; // C ABI enum
typedef int SubjectInfo;   // C ABI enum
#endif

QSslCertificate* QSslCertificate_new(QIODevice* device);
QSslCertificate* QSslCertificate_new2();
QSslCertificate* QSslCertificate_new3(QSslCertificate* other);
QSslCertificate* QSslCertificate_new4(QIODevice* device, int format);
QSslCertificate* QSslCertificate_new5(libqt_string data);
QSslCertificate* QSslCertificate_new6(libqt_string data, int format);
void QSslCertificate_OperatorAssign(QSslCertificate* self, QSslCertificate* other);
void QSslCertificate_Swap(QSslCertificate* self, QSslCertificate* other);
bool QSslCertificate_OperatorEqual(const QSslCertificate* self, QSslCertificate* other);
bool QSslCertificate_OperatorNotEqual(const QSslCertificate* self, QSslCertificate* other);
bool QSslCertificate_IsNull(const QSslCertificate* self);
bool QSslCertificate_IsBlacklisted(const QSslCertificate* self);
bool QSslCertificate_IsSelfSigned(const QSslCertificate* self);
void QSslCertificate_Clear(QSslCertificate* self);
libqt_string QSslCertificate_Version(const QSslCertificate* self);
libqt_string QSslCertificate_SerialNumber(const QSslCertificate* self);
libqt_string QSslCertificate_Digest(const QSslCertificate* self);
libqt_list /* of libqt_string */ QSslCertificate_IssuerInfo(const QSslCertificate* self, int info);
libqt_list /* of libqt_string */ QSslCertificate_IssuerInfoWithAttribute(const QSslCertificate* self, libqt_string attribute);
libqt_list /* of libqt_string */ QSslCertificate_SubjectInfo(const QSslCertificate* self, int info);
libqt_list /* of libqt_string */ QSslCertificate_SubjectInfoWithAttribute(const QSslCertificate* self, libqt_string attribute);
libqt_string QSslCertificate_IssuerDisplayName(const QSslCertificate* self);
libqt_string QSslCertificate_SubjectDisplayName(const QSslCertificate* self);
libqt_list /* of libqt_string */ QSslCertificate_SubjectInfoAttributes(const QSslCertificate* self);
libqt_list /* of libqt_string */ QSslCertificate_IssuerInfoAttributes(const QSslCertificate* self);
QDateTime* QSslCertificate_EffectiveDate(const QSslCertificate* self);
QDateTime* QSslCertificate_ExpiryDate(const QSslCertificate* self);
QSslKey* QSslCertificate_PublicKey(const QSslCertificate* self);
libqt_list /* of QSslCertificateExtension* */ QSslCertificate_Extensions(const QSslCertificate* self);
libqt_string QSslCertificate_ToPem(const QSslCertificate* self);
libqt_string QSslCertificate_ToDer(const QSslCertificate* self);
libqt_string QSslCertificate_ToText(const QSslCertificate* self);
libqt_list /* of QSslCertificate* */ QSslCertificate_FromPath(libqt_string path);
libqt_list /* of QSslCertificate* */ QSslCertificate_FromDevice(QIODevice* device);
libqt_list /* of QSslCertificate* */ QSslCertificate_FromData(libqt_string data);
libqt_list /* of QSslError* */ QSslCertificate_Verify(libqt_list /* of QSslCertificate* */ certificateChain);
bool QSslCertificate_ImportPkcs12(QIODevice* device, QSslKey* key, QSslCertificate* cert);
void* QSslCertificate_Handle(const QSslCertificate* self);
libqt_string QSslCertificate_Digest1(const QSslCertificate* self, int algorithm);
libqt_list /* of QSslCertificate* */ QSslCertificate_FromPath2(libqt_string path, int format);
libqt_list /* of QSslCertificate* */ QSslCertificate_FromPath3(libqt_string path, int format, int syntax);
libqt_list /* of QSslCertificate* */ QSslCertificate_FromDevice2(QIODevice* device, int format);
libqt_list /* of QSslCertificate* */ QSslCertificate_FromData2(libqt_string data, int format);
libqt_list /* of QSslError* */ QSslCertificate_Verify2(libqt_list /* of QSslCertificate* */ certificateChain, libqt_string hostName);
bool QSslCertificate_ImportPkcs124(QIODevice* device, QSslKey* key, QSslCertificate* cert, libqt_list /* of QSslCertificate* */ caCertificates);
bool QSslCertificate_ImportPkcs125(QIODevice* device, QSslKey* key, QSslCertificate* cert, libqt_list /* of QSslCertificate* */ caCertificates, libqt_string passPhrase);
void QSslCertificate_Delete(QSslCertificate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
