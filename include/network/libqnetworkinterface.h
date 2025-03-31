#pragma once
#ifndef SRC_NETWORKC_LIBQNETWORKINTERFACE_H
#define SRC_NETWORKC_LIBQNETWORKINTERFACE_H

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
typedef struct QDeadlineTimer QDeadlineTimer;
typedef struct QHostAddress QHostAddress;
typedef struct QNetworkAddressEntry QNetworkAddressEntry;
typedef struct QNetworkInterface QNetworkInterface;
#endif

#ifdef __cplusplus
typedef QNetworkAddressEntry::DnsEligibilityStatus DnsEligibilityStatus; // C++ enum
typedef QNetworkInterface::InterfaceFlag InterfaceFlag;                  // C++ enum
typedef QNetworkInterface::InterfaceFlags InterfaceFlags;                // C++ QFlags
typedef QNetworkInterface::InterfaceType InterfaceType;                  // C++ enum
typedef QNetworkInterface::QtGadgetHelper QtGadgetHelper;                // C++ QFlags
#else
typedef int InterfaceFlag;                // C ABI enum
typedef int InterfaceFlags;               // C ABI QFlags
typedef int InterfaceType;                // C ABI enum
typedef signed char DnsEligibilityStatus; // C ABI enum
typedef void QtGadgetHelper;              // C ABI QFlags
#endif

QNetworkAddressEntry* QNetworkAddressEntry_new();
QNetworkAddressEntry* QNetworkAddressEntry_new2(QNetworkAddressEntry* other);
void QNetworkAddressEntry_OperatorAssign(QNetworkAddressEntry* self, QNetworkAddressEntry* other);
void QNetworkAddressEntry_Swap(QNetworkAddressEntry* self, QNetworkAddressEntry* other);
bool QNetworkAddressEntry_OperatorEqual(const QNetworkAddressEntry* self, QNetworkAddressEntry* other);
bool QNetworkAddressEntry_OperatorNotEqual(const QNetworkAddressEntry* self, QNetworkAddressEntry* other);
int8_t QNetworkAddressEntry_DnsEligibility(const QNetworkAddressEntry* self);
void QNetworkAddressEntry_SetDnsEligibility(QNetworkAddressEntry* self, int8_t status);
QHostAddress* QNetworkAddressEntry_Ip(const QNetworkAddressEntry* self);
void QNetworkAddressEntry_SetIp(QNetworkAddressEntry* self, QHostAddress* newIp);
QHostAddress* QNetworkAddressEntry_Netmask(const QNetworkAddressEntry* self);
void QNetworkAddressEntry_SetNetmask(QNetworkAddressEntry* self, QHostAddress* newNetmask);
int QNetworkAddressEntry_PrefixLength(const QNetworkAddressEntry* self);
void QNetworkAddressEntry_SetPrefixLength(QNetworkAddressEntry* self, int length);
QHostAddress* QNetworkAddressEntry_Broadcast(const QNetworkAddressEntry* self);
void QNetworkAddressEntry_SetBroadcast(QNetworkAddressEntry* self, QHostAddress* newBroadcast);
bool QNetworkAddressEntry_IsLifetimeKnown(const QNetworkAddressEntry* self);
QDeadlineTimer* QNetworkAddressEntry_PreferredLifetime(const QNetworkAddressEntry* self);
QDeadlineTimer* QNetworkAddressEntry_ValidityLifetime(const QNetworkAddressEntry* self);
void QNetworkAddressEntry_SetAddressLifetime(QNetworkAddressEntry* self, QDeadlineTimer* preferred, QDeadlineTimer* validity);
void QNetworkAddressEntry_ClearAddressLifetime(QNetworkAddressEntry* self);
bool QNetworkAddressEntry_IsPermanent(const QNetworkAddressEntry* self);
bool QNetworkAddressEntry_IsTemporary(const QNetworkAddressEntry* self);
void QNetworkAddressEntry_Delete(QNetworkAddressEntry* self);

QNetworkInterface* QNetworkInterface_new();
QNetworkInterface* QNetworkInterface_new2(QNetworkInterface* other);
void QNetworkInterface_OperatorAssign(QNetworkInterface* self, QNetworkInterface* other);
void QNetworkInterface_Swap(QNetworkInterface* self, QNetworkInterface* other);
bool QNetworkInterface_IsValid(const QNetworkInterface* self);
int QNetworkInterface_Index(const QNetworkInterface* self);
int QNetworkInterface_MaximumTransmissionUnit(const QNetworkInterface* self);
libqt_string QNetworkInterface_Name(const QNetworkInterface* self);
libqt_string QNetworkInterface_HumanReadableName(const QNetworkInterface* self);
int QNetworkInterface_Flags(const QNetworkInterface* self);
int QNetworkInterface_Type(const QNetworkInterface* self);
libqt_string QNetworkInterface_HardwareAddress(const QNetworkInterface* self);
libqt_list /* of QNetworkAddressEntry* */ QNetworkInterface_AddressEntries(const QNetworkInterface* self);
int QNetworkInterface_InterfaceIndexFromName(libqt_string name);
QNetworkInterface* QNetworkInterface_InterfaceFromName(libqt_string name);
QNetworkInterface* QNetworkInterface_InterfaceFromIndex(int index);
libqt_string QNetworkInterface_InterfaceNameFromIndex(int index);
libqt_list /* of QNetworkInterface* */ QNetworkInterface_AllInterfaces();
libqt_list /* of QHostAddress* */ QNetworkInterface_AllAddresses();
void QNetworkInterface_Delete(QNetworkInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
