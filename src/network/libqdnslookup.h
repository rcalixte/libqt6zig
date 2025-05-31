#pragma once
#ifndef SRC_NETWORKC_LIBQDNSLOOKUP_H
#define SRC_NETWORKC_LIBQDNSLOOKUP_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QDnsDomainNameRecord QDnsDomainNameRecord;
typedef struct QDnsHostAddressRecord QDnsHostAddressRecord;
typedef struct QDnsLookup QDnsLookup;
typedef struct QDnsMailExchangeRecord QDnsMailExchangeRecord;
typedef struct QDnsServiceRecord QDnsServiceRecord;
typedef struct QDnsTextRecord QDnsTextRecord;
typedef struct QEvent QEvent;
typedef struct QHostAddress QHostAddress;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

#ifdef __cplusplus
typedef QDnsLookup::Error Error; // C++ enum
typedef QDnsLookup::Type Type;   // C++ enum
#else
typedef int Error;          // C ABI enum
typedef unsigned char Type; // C ABI enum
#endif

QDnsDomainNameRecord* QDnsDomainNameRecord_new();
QDnsDomainNameRecord* QDnsDomainNameRecord_new2(const QDnsDomainNameRecord* other);
void QDnsDomainNameRecord_OperatorAssign(QDnsDomainNameRecord* self, const QDnsDomainNameRecord* other);
void QDnsDomainNameRecord_Swap(QDnsDomainNameRecord* self, QDnsDomainNameRecord* other);
libqt_string QDnsDomainNameRecord_Name(const QDnsDomainNameRecord* self);
unsigned int QDnsDomainNameRecord_TimeToLive(const QDnsDomainNameRecord* self);
libqt_string QDnsDomainNameRecord_Value(const QDnsDomainNameRecord* self);
void QDnsDomainNameRecord_Delete(QDnsDomainNameRecord* self);

QDnsHostAddressRecord* QDnsHostAddressRecord_new();
QDnsHostAddressRecord* QDnsHostAddressRecord_new2(const QDnsHostAddressRecord* other);
void QDnsHostAddressRecord_OperatorAssign(QDnsHostAddressRecord* self, const QDnsHostAddressRecord* other);
void QDnsHostAddressRecord_Swap(QDnsHostAddressRecord* self, QDnsHostAddressRecord* other);
libqt_string QDnsHostAddressRecord_Name(const QDnsHostAddressRecord* self);
unsigned int QDnsHostAddressRecord_TimeToLive(const QDnsHostAddressRecord* self);
QHostAddress* QDnsHostAddressRecord_Value(const QDnsHostAddressRecord* self);
void QDnsHostAddressRecord_Delete(QDnsHostAddressRecord* self);

QDnsMailExchangeRecord* QDnsMailExchangeRecord_new();
QDnsMailExchangeRecord* QDnsMailExchangeRecord_new2(const QDnsMailExchangeRecord* other);
void QDnsMailExchangeRecord_OperatorAssign(QDnsMailExchangeRecord* self, const QDnsMailExchangeRecord* other);
void QDnsMailExchangeRecord_Swap(QDnsMailExchangeRecord* self, QDnsMailExchangeRecord* other);
libqt_string QDnsMailExchangeRecord_Exchange(const QDnsMailExchangeRecord* self);
libqt_string QDnsMailExchangeRecord_Name(const QDnsMailExchangeRecord* self);
uint16_t QDnsMailExchangeRecord_Preference(const QDnsMailExchangeRecord* self);
unsigned int QDnsMailExchangeRecord_TimeToLive(const QDnsMailExchangeRecord* self);
void QDnsMailExchangeRecord_Delete(QDnsMailExchangeRecord* self);

QDnsServiceRecord* QDnsServiceRecord_new();
QDnsServiceRecord* QDnsServiceRecord_new2(const QDnsServiceRecord* other);
void QDnsServiceRecord_OperatorAssign(QDnsServiceRecord* self, const QDnsServiceRecord* other);
void QDnsServiceRecord_Swap(QDnsServiceRecord* self, QDnsServiceRecord* other);
libqt_string QDnsServiceRecord_Name(const QDnsServiceRecord* self);
uint16_t QDnsServiceRecord_Port(const QDnsServiceRecord* self);
uint16_t QDnsServiceRecord_Priority(const QDnsServiceRecord* self);
libqt_string QDnsServiceRecord_Target(const QDnsServiceRecord* self);
unsigned int QDnsServiceRecord_TimeToLive(const QDnsServiceRecord* self);
uint16_t QDnsServiceRecord_Weight(const QDnsServiceRecord* self);
void QDnsServiceRecord_Delete(QDnsServiceRecord* self);

QDnsTextRecord* QDnsTextRecord_new();
QDnsTextRecord* QDnsTextRecord_new2(const QDnsTextRecord* other);
void QDnsTextRecord_OperatorAssign(QDnsTextRecord* self, const QDnsTextRecord* other);
void QDnsTextRecord_Swap(QDnsTextRecord* self, QDnsTextRecord* other);
libqt_string QDnsTextRecord_Name(const QDnsTextRecord* self);
unsigned int QDnsTextRecord_TimeToLive(const QDnsTextRecord* self);
libqt_list /* of libqt_string */ QDnsTextRecord_Values(const QDnsTextRecord* self);
void QDnsTextRecord_Delete(QDnsTextRecord* self);

QDnsLookup* QDnsLookup_new();
QDnsLookup* QDnsLookup_new2(int typeVal, const libqt_string name);
QDnsLookup* QDnsLookup_new3(int typeVal, const libqt_string name, const QHostAddress* nameserver);
QDnsLookup* QDnsLookup_new4(QObject* parent);
QDnsLookup* QDnsLookup_new5(int typeVal, const libqt_string name, QObject* parent);
QDnsLookup* QDnsLookup_new6(int typeVal, const libqt_string name, const QHostAddress* nameserver, QObject* parent);
QMetaObject* QDnsLookup_MetaObject(const QDnsLookup* self);
void* QDnsLookup_Metacast(QDnsLookup* self, const char* param1);
int QDnsLookup_Metacall(QDnsLookup* self, int param1, int param2, void** param3);
void QDnsLookup_OnMetacall(QDnsLookup* self, intptr_t slot);
int QDnsLookup_QBaseMetacall(QDnsLookup* self, int param1, int param2, void** param3);
libqt_string QDnsLookup_Tr(const char* s);
int QDnsLookup_Error(const QDnsLookup* self);
libqt_string QDnsLookup_ErrorString(const QDnsLookup* self);
bool QDnsLookup_IsFinished(const QDnsLookup* self);
libqt_string QDnsLookup_Name(const QDnsLookup* self);
void QDnsLookup_SetName(QDnsLookup* self, const libqt_string name);
int QDnsLookup_Type(const QDnsLookup* self);
void QDnsLookup_SetType(QDnsLookup* self, int typeVal);
QHostAddress* QDnsLookup_Nameserver(const QDnsLookup* self);
void QDnsLookup_SetNameserver(QDnsLookup* self, const QHostAddress* nameserver);
libqt_list /* of QDnsDomainNameRecord* */ QDnsLookup_CanonicalNameRecords(const QDnsLookup* self);
libqt_list /* of QDnsHostAddressRecord* */ QDnsLookup_HostAddressRecords(const QDnsLookup* self);
libqt_list /* of QDnsMailExchangeRecord* */ QDnsLookup_MailExchangeRecords(const QDnsLookup* self);
libqt_list /* of QDnsDomainNameRecord* */ QDnsLookup_NameServerRecords(const QDnsLookup* self);
libqt_list /* of QDnsDomainNameRecord* */ QDnsLookup_PointerRecords(const QDnsLookup* self);
libqt_list /* of QDnsServiceRecord* */ QDnsLookup_ServiceRecords(const QDnsLookup* self);
libqt_list /* of QDnsTextRecord* */ QDnsLookup_TextRecords(const QDnsLookup* self);
void QDnsLookup_Abort(QDnsLookup* self);
void QDnsLookup_Lookup(QDnsLookup* self);
void QDnsLookup_Finished(QDnsLookup* self);
void QDnsLookup_Connect_Finished(QDnsLookup* self, intptr_t slot);
void QDnsLookup_NameChanged(QDnsLookup* self, const libqt_string name);
void QDnsLookup_Connect_NameChanged(QDnsLookup* self, intptr_t slot);
void QDnsLookup_TypeChanged(QDnsLookup* self, int typeVal);
void QDnsLookup_Connect_TypeChanged(QDnsLookup* self, intptr_t slot);
void QDnsLookup_NameserverChanged(QDnsLookup* self, const QHostAddress* nameserver);
void QDnsLookup_Connect_NameserverChanged(QDnsLookup* self, intptr_t slot);
libqt_string QDnsLookup_Tr2(const char* s, const char* c);
libqt_string QDnsLookup_Tr3(const char* s, const char* c, int n);
bool QDnsLookup_Event(QDnsLookup* self, QEvent* event);
void QDnsLookup_OnEvent(QDnsLookup* self, intptr_t slot);
bool QDnsLookup_QBaseEvent(QDnsLookup* self, QEvent* event);
bool QDnsLookup_EventFilter(QDnsLookup* self, QObject* watched, QEvent* event);
void QDnsLookup_OnEventFilter(QDnsLookup* self, intptr_t slot);
bool QDnsLookup_QBaseEventFilter(QDnsLookup* self, QObject* watched, QEvent* event);
void QDnsLookup_TimerEvent(QDnsLookup* self, QTimerEvent* event);
void QDnsLookup_OnTimerEvent(QDnsLookup* self, intptr_t slot);
void QDnsLookup_QBaseTimerEvent(QDnsLookup* self, QTimerEvent* event);
void QDnsLookup_ChildEvent(QDnsLookup* self, QChildEvent* event);
void QDnsLookup_OnChildEvent(QDnsLookup* self, intptr_t slot);
void QDnsLookup_QBaseChildEvent(QDnsLookup* self, QChildEvent* event);
void QDnsLookup_CustomEvent(QDnsLookup* self, QEvent* event);
void QDnsLookup_OnCustomEvent(QDnsLookup* self, intptr_t slot);
void QDnsLookup_QBaseCustomEvent(QDnsLookup* self, QEvent* event);
void QDnsLookup_ConnectNotify(QDnsLookup* self, const QMetaMethod* signal);
void QDnsLookup_OnConnectNotify(QDnsLookup* self, intptr_t slot);
void QDnsLookup_QBaseConnectNotify(QDnsLookup* self, const QMetaMethod* signal);
void QDnsLookup_DisconnectNotify(QDnsLookup* self, const QMetaMethod* signal);
void QDnsLookup_OnDisconnectNotify(QDnsLookup* self, intptr_t slot);
void QDnsLookup_QBaseDisconnectNotify(QDnsLookup* self, const QMetaMethod* signal);
QObject* QDnsLookup_Sender(const QDnsLookup* self);
void QDnsLookup_OnSender(const QDnsLookup* self, intptr_t slot);
QObject* QDnsLookup_QBaseSender(const QDnsLookup* self);
int QDnsLookup_SenderSignalIndex(const QDnsLookup* self);
void QDnsLookup_OnSenderSignalIndex(const QDnsLookup* self, intptr_t slot);
int QDnsLookup_QBaseSenderSignalIndex(const QDnsLookup* self);
int QDnsLookup_Receivers(const QDnsLookup* self, const char* signal);
void QDnsLookup_OnReceivers(const QDnsLookup* self, intptr_t slot);
int QDnsLookup_QBaseReceivers(const QDnsLookup* self, const char* signal);
bool QDnsLookup_IsSignalConnected(const QDnsLookup* self, const QMetaMethod* signal);
void QDnsLookup_OnIsSignalConnected(const QDnsLookup* self, intptr_t slot);
bool QDnsLookup_QBaseIsSignalConnected(const QDnsLookup* self, const QMetaMethod* signal);
void QDnsLookup_Delete(QDnsLookup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
