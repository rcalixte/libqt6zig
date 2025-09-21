#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBTRANSACTION_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBTRANSACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KNSCore::EngineBase KNSCore__EngineBase;
typedef KNSCore::Entry KNSCore__Entry;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Transaction)
typedef KNSCore::Transaction KNSCore__Transaction;
#endif
#else
typedef struct KNSCore__EngineBase KNSCore__EngineBase;
typedef struct KNSCore__Entry KNSCore__Entry;
typedef struct KNSCore__Transaction KNSCore__Transaction;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

QMetaObject* KNSCore__Transaction_MetaObject(const KNSCore__Transaction* self);
void* KNSCore__Transaction_Metacast(KNSCore__Transaction* self, const char* param1);
int KNSCore__Transaction_Metacall(KNSCore__Transaction* self, int param1, int param2, void** param3);
libqt_string KNSCore__Transaction_Tr(const char* s);
KNSCore__Transaction* KNSCore__Transaction_Install(KNSCore__EngineBase* engine, const KNSCore__Entry* entry);
KNSCore__Transaction* KNSCore__Transaction_InstallLinkId(KNSCore__EngineBase* engine, const KNSCore__Entry* entry, unsigned char linkId);
KNSCore__Transaction* KNSCore__Transaction_InstallLatest(KNSCore__EngineBase* engine, const KNSCore__Entry* entry);
KNSCore__Transaction* KNSCore__Transaction_Uninstall(KNSCore__EngineBase* engine, const KNSCore__Entry* entry);
KNSCore__Transaction* KNSCore__Transaction_Adopt(KNSCore__EngineBase* engine, const KNSCore__Entry* entry);
bool KNSCore__Transaction_IsFinished(const KNSCore__Transaction* self);
void KNSCore__Transaction_Finished(KNSCore__Transaction* self);
void KNSCore__Transaction_Connect_Finished(KNSCore__Transaction* self, intptr_t slot);
void KNSCore__Transaction_SignalMessage(KNSCore__Transaction* self, const libqt_string message);
void KNSCore__Transaction_Connect_SignalMessage(KNSCore__Transaction* self, intptr_t slot);
void KNSCore__Transaction_SignalEntryEvent(KNSCore__Transaction* self, const KNSCore__Entry* entry, int event);
void KNSCore__Transaction_Connect_SignalEntryEvent(KNSCore__Transaction* self, intptr_t slot);
void KNSCore__Transaction_SignalErrorCode(KNSCore__Transaction* self, int errorCode, const libqt_string message, const QVariant* metadata);
void KNSCore__Transaction_Connect_SignalErrorCode(KNSCore__Transaction* self, intptr_t slot);
libqt_string KNSCore__Transaction_Tr2(const char* s, const char* c);
libqt_string KNSCore__Transaction_Tr3(const char* s, const char* c, int n);
KNSCore__Transaction* KNSCore__Transaction_Install3(KNSCore__EngineBase* engine, const KNSCore__Entry* entry, int linkId);
void KNSCore__Transaction_Delete(KNSCore__Transaction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
