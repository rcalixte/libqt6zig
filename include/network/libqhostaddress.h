#pragma once
#ifndef SRC_NETWORKC_LIBQHOSTADDRESS_H
#define SRC_NETWORKC_LIBQHOSTADDRESS_H

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
typedef struct QIPv6Address QIPv6Address;
#endif

#ifdef __cplusplus
typedef QHostAddress::ConversionMode ConversionMode;             // C++ QFlags
typedef QHostAddress::ConversionModeFlag ConversionModeFlag;     // C++ enum
typedef QHostAddress::NetworkLayerProtocol NetworkLayerProtocol; // C++ QFlags
typedef QHostAddress::QtGadgetHelper QtGadgetHelper;             // C++ QFlags
typedef QHostAddress::SpecialAddress SpecialAddress;             // C++ enum
#else
typedef int ConversionMode;       // C ABI QFlags
typedef int ConversionModeFlag;   // C ABI enum
typedef int NetworkLayerProtocol; // C ABI QFlags
typedef int SpecialAddress;       // C ABI enum
typedef void QtGadgetHelper;      // C ABI QFlags
#endif

unsigned char QIPv6Address_OperatorSubscript(const QIPv6Address* self, int index);
void QIPv6Address_Delete(QIPv6Address* self);

QHostAddress* QHostAddress_new();
QHostAddress* QHostAddress_new2(unsigned int ip4Addr);
QHostAddress* QHostAddress_new3(const unsigned char* ip6Addr);
QHostAddress* QHostAddress_new4(const QIPv6Address* ip6Addr);
QHostAddress* QHostAddress_new5(const libqt_string address);
QHostAddress* QHostAddress_new6(const QHostAddress* copyVal);
QHostAddress* QHostAddress_new7(int address);
void QHostAddress_OperatorAssign(QHostAddress* self, const QHostAddress* other);
void QHostAddress_OperatorAssignWithAddress(QHostAddress* self, int address);
void QHostAddress_Swap(QHostAddress* self, QHostAddress* other);
void QHostAddress_SetAddress(QHostAddress* self, unsigned int ip4Addr);
void QHostAddress_SetAddressWithIp6Addr(QHostAddress* self, const unsigned char* ip6Addr);
void QHostAddress_SetAddress2(QHostAddress* self, const QIPv6Address* ip6Addr);
bool QHostAddress_SetAddress3(QHostAddress* self, const libqt_string address);
void QHostAddress_SetAddress4(QHostAddress* self, int address);
int QHostAddress_Protocol(const QHostAddress* self);
unsigned int QHostAddress_ToIPv4Address(const QHostAddress* self);
QIPv6Address* QHostAddress_ToIPv6Address(const QHostAddress* self);
libqt_string QHostAddress_ToString(const QHostAddress* self);
libqt_string QHostAddress_ScopeId(const QHostAddress* self);
void QHostAddress_SetScopeId(QHostAddress* self, const libqt_string id);
bool QHostAddress_IsEqual(const QHostAddress* self, const QHostAddress* address);
bool QHostAddress_OperatorEqual(const QHostAddress* self, const QHostAddress* address);
bool QHostAddress_OperatorEqualWithAddress(const QHostAddress* self, int address);
bool QHostAddress_OperatorNotEqual(const QHostAddress* self, const QHostAddress* address);
bool QHostAddress_OperatorNotEqualWithAddress(const QHostAddress* self, int address);
bool QHostAddress_IsNull(const QHostAddress* self);
void QHostAddress_Clear(QHostAddress* self);
bool QHostAddress_IsInSubnet(const QHostAddress* self, const QHostAddress* subnet, int netmask);
bool QHostAddress_IsLoopback(const QHostAddress* self);
bool QHostAddress_IsGlobal(const QHostAddress* self);
bool QHostAddress_IsLinkLocal(const QHostAddress* self);
bool QHostAddress_IsSiteLocal(const QHostAddress* self);
bool QHostAddress_IsUniqueLocalUnicast(const QHostAddress* self);
bool QHostAddress_IsMulticast(const QHostAddress* self);
bool QHostAddress_IsBroadcast(const QHostAddress* self);
libqt_pair /* tuple of QHostAddress* and int */ QHostAddress_ParseSubnet(const libqt_string subnet);
unsigned int QHostAddress_ToIPv4Address1(const QHostAddress* self, bool* ok);
bool QHostAddress_IsEqual2(const QHostAddress* self, const QHostAddress* address, int mode);
void QHostAddress_Delete(QHostAddress* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
