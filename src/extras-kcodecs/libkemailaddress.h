#pragma once
#ifndef SRC_EXTRAS_KCODECSC_LIBKEMAILADDRESS_H
#define SRC_EXTRAS_KCODECSC_LIBKEMAILADDRESS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KEmailAddress KEmailAddress;
typedef struct QUrl QUrl;
#endif

libqt_list /* of libqt_string */ KEmailAddress_SplitAddressList(const libqt_string param1);
int KEmailAddress_SplitAddress(const libqt_string param1, libqt_string param2, libqt_string param3, libqt_string param4);
int KEmailAddress_SplitAddress2(const libqt_string param1, libqt_string param2, libqt_string param3, libqt_string param4);
int KEmailAddress_IsValidAddress(const libqt_string param1);
int KEmailAddress_IsValidAddressList(const libqt_string param1, libqt_string param2);
libqt_string KEmailAddress_EmailParseResultToString(int param1);
bool KEmailAddress_IsValidSimpleAddress(const libqt_string param1);
libqt_string KEmailAddress_SimpleEmailAddressErrorMsg();
libqt_string KEmailAddress_ExtractEmailAddress(const libqt_string param1);
libqt_string KEmailAddress_ExtractEmailAddress2(const libqt_string param1, libqt_string param2);
libqt_string KEmailAddress_ExtractEmailAddress3(const libqt_string param1);
libqt_string KEmailAddress_ExtractEmailAddress4(const libqt_string param1, libqt_string param2);
libqt_string KEmailAddress_FirstEmailAddress(const libqt_string param1);
libqt_string KEmailAddress_FirstEmailAddress2(const libqt_string param1, libqt_string param2);
libqt_string KEmailAddress_FirstEmailAddress3(const libqt_string param1);
libqt_string KEmailAddress_FirstEmailAddress4(const libqt_string param1, libqt_string param2);
bool KEmailAddress_ExtractEmailAddressAndName(const libqt_string param1, libqt_string param2, libqt_string param3);
bool KEmailAddress_CompareEmail(const libqt_string param1, const libqt_string param2, bool param3);
libqt_string KEmailAddress_NormalizedAddress(const libqt_string param1, const libqt_string param2, const libqt_string param3);
libqt_string KEmailAddress_FromIdn(const libqt_string param1);
libqt_string KEmailAddress_ToIdn(const libqt_string param1);
libqt_string KEmailAddress_NormalizeAddressesAndDecodeIdn(const libqt_string param1);
libqt_string KEmailAddress_NormalizeAddressesAndEncodeIdn(const libqt_string param1);
libqt_string KEmailAddress_QuoteNameIfNecessary(const libqt_string param1);
QUrl* KEmailAddress_EncodeMailtoUrl(const libqt_string param1);
libqt_string KEmailAddress_DecodeMailtoUrl(const QUrl* param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
