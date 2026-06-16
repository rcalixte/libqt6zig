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

libqt_list /* of libqt_string */ KEmailAddress_SplitAddressList(const libqt_string aStr);
int KEmailAddress_SplitAddress(const libqt_string address, libqt_string displayName, libqt_string addrSpec, libqt_string comment);
int KEmailAddress_SplitAddress2(const libqt_string address, libqt_string displayName, libqt_string addrSpec, libqt_string comment);
int KEmailAddress_IsValidAddress(const libqt_string aStr);
int KEmailAddress_IsValidAddressList(const libqt_string aStr, libqt_string badAddr);
libqt_string KEmailAddress_EmailParseResultToString(int errorCode);
bool KEmailAddress_IsValidSimpleAddress(const libqt_string aStr);
libqt_string KEmailAddress_SimpleEmailAddressErrorMsg();
libqt_string KEmailAddress_ExtractEmailAddress(const libqt_string address);
libqt_string KEmailAddress_ExtractEmailAddress2(const libqt_string address, libqt_string errorMessage);
libqt_string KEmailAddress_ExtractEmailAddress3(const libqt_string address);
libqt_string KEmailAddress_ExtractEmailAddress4(const libqt_string address, libqt_string errorMessage);
libqt_string KEmailAddress_FirstEmailAddress(const libqt_string addresses);
libqt_string KEmailAddress_FirstEmailAddress2(const libqt_string addresses, libqt_string errorMessage);
libqt_string KEmailAddress_FirstEmailAddress3(const libqt_string addresses);
libqt_string KEmailAddress_FirstEmailAddress4(const libqt_string addresses, libqt_string errorMessage);
bool KEmailAddress_ExtractEmailAddressAndName(const libqt_string aStr, libqt_string mail, libqt_string name);
bool KEmailAddress_CompareEmail(const libqt_string email1, const libqt_string email2, bool matchName);
libqt_string KEmailAddress_NormalizedAddress(const libqt_string displayName, const libqt_string addrSpec, const libqt_string comment);
libqt_string KEmailAddress_FromIdn(const libqt_string addrSpec);
libqt_string KEmailAddress_ToIdn(const libqt_string addrSpec);
libqt_string KEmailAddress_NormalizeAddressesAndDecodeIdn(const libqt_string addresses);
libqt_string KEmailAddress_NormalizeAddressesAndEncodeIdn(const libqt_string str);
libqt_string KEmailAddress_QuoteNameIfNecessary(const libqt_string str);
QUrl* KEmailAddress_EncodeMailtoUrl(const libqt_string mailbox);
libqt_string KEmailAddress_DecodeMailtoUrl(const QUrl* mailtoUrl);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
