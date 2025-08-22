#pragma once
#ifndef SRC_EXTRAS_KI18NC_LIBKLOCALIZEDCONTEXT_H
#define SRC_EXTRAS_KI18NC_LIBKLOCALIZEDCONTEXT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KLocalizedContext KLocalizedContext;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

KLocalizedContext* KLocalizedContext_new();
KLocalizedContext* KLocalizedContext_new2(QObject* parent);
QMetaObject* KLocalizedContext_MetaObject(const KLocalizedContext* self);
void* KLocalizedContext_Metacast(KLocalizedContext* self, const char* param1);
int KLocalizedContext_Metacall(KLocalizedContext* self, int param1, int param2, void** param3);
void KLocalizedContext_OnMetacall(KLocalizedContext* self, intptr_t slot);
int KLocalizedContext_QBaseMetacall(KLocalizedContext* self, int param1, int param2, void** param3);
libqt_string KLocalizedContext_Tr(const char* s);
libqt_string KLocalizedContext_TranslationDomain(const KLocalizedContext* self);
void KLocalizedContext_SetTranslationDomain(KLocalizedContext* self, const libqt_string domain);
libqt_string KLocalizedContext_I18n(const KLocalizedContext* self, const libqt_string message);
libqt_string KLocalizedContext_I18nc(const KLocalizedContext* self, const libqt_string context, const libqt_string message);
libqt_string KLocalizedContext_I18np(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural);
libqt_string KLocalizedContext_I18ncp(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural);
libqt_string KLocalizedContext_I18nd(const KLocalizedContext* self, const libqt_string domain, const libqt_string message);
libqt_string KLocalizedContext_I18ndc(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message);
libqt_string KLocalizedContext_I18ndp(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural);
libqt_string KLocalizedContext_I18ndcp(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural);
libqt_string KLocalizedContext_Xi18n(const KLocalizedContext* self, const libqt_string message);
libqt_string KLocalizedContext_Xi18nc(const KLocalizedContext* self, const libqt_string context, const libqt_string message);
libqt_string KLocalizedContext_Xi18np(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural);
libqt_string KLocalizedContext_Xi18ncp(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural);
libqt_string KLocalizedContext_Xi18nd(const KLocalizedContext* self, const libqt_string domain, const libqt_string message);
libqt_string KLocalizedContext_Xi18ndc(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message);
libqt_string KLocalizedContext_Xi18ndp(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural);
libqt_string KLocalizedContext_Xi18ndcp(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural);
void KLocalizedContext_TranslationDomainChanged(KLocalizedContext* self, const libqt_string translationDomain);
void KLocalizedContext_Connect_TranslationDomainChanged(KLocalizedContext* self, intptr_t slot);
libqt_string KLocalizedContext_Tr2(const char* s, const char* c);
libqt_string KLocalizedContext_Tr3(const char* s, const char* c, int n);
libqt_string KLocalizedContext_I18n2(const KLocalizedContext* self, const libqt_string message, const QVariant* param1);
libqt_string KLocalizedContext_I18n3(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2);
libqt_string KLocalizedContext_I18n4(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3);
libqt_string KLocalizedContext_I18n5(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4);
libqt_string KLocalizedContext_I18n6(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5);
libqt_string KLocalizedContext_I18n7(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6);
libqt_string KLocalizedContext_I18n8(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7);
libqt_string KLocalizedContext_I18n9(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8);
libqt_string KLocalizedContext_I18n10(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9);
libqt_string KLocalizedContext_I18n11(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10);
libqt_string KLocalizedContext_I18nc3(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1);
libqt_string KLocalizedContext_I18nc4(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2);
libqt_string KLocalizedContext_I18nc5(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3);
libqt_string KLocalizedContext_I18nc6(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4);
libqt_string KLocalizedContext_I18nc7(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5);
libqt_string KLocalizedContext_I18nc8(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6);
libqt_string KLocalizedContext_I18nc9(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7);
libqt_string KLocalizedContext_I18nc10(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8);
libqt_string KLocalizedContext_I18nc11(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9);
libqt_string KLocalizedContext_I18nc12(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10);
libqt_string KLocalizedContext_I18np3(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1);
libqt_string KLocalizedContext_I18np4(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2);
libqt_string KLocalizedContext_I18np5(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3);
libqt_string KLocalizedContext_I18np6(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4);
libqt_string KLocalizedContext_I18np7(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5);
libqt_string KLocalizedContext_I18np8(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6);
libqt_string KLocalizedContext_I18np9(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7);
libqt_string KLocalizedContext_I18np10(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8);
libqt_string KLocalizedContext_I18np11(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9);
libqt_string KLocalizedContext_I18np12(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10);
libqt_string KLocalizedContext_I18ncp4(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1);
libqt_string KLocalizedContext_I18ncp5(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2);
libqt_string KLocalizedContext_I18ncp6(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3);
libqt_string KLocalizedContext_I18ncp7(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4);
libqt_string KLocalizedContext_I18ncp8(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5);
libqt_string KLocalizedContext_I18ncp9(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6);
libqt_string KLocalizedContext_I18ncp10(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7);
libqt_string KLocalizedContext_I18ncp11(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8);
libqt_string KLocalizedContext_I18ncp12(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9);
libqt_string KLocalizedContext_I18ncp13(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10);
libqt_string KLocalizedContext_I18nd3(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1);
libqt_string KLocalizedContext_I18nd4(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2);
libqt_string KLocalizedContext_I18nd5(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3);
libqt_string KLocalizedContext_I18nd6(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4);
libqt_string KLocalizedContext_I18nd7(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5);
libqt_string KLocalizedContext_I18nd8(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6);
libqt_string KLocalizedContext_I18nd9(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7);
libqt_string KLocalizedContext_I18nd10(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8);
libqt_string KLocalizedContext_I18nd11(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9);
libqt_string KLocalizedContext_I18nd12(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10);
libqt_string KLocalizedContext_I18ndc4(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1);
libqt_string KLocalizedContext_I18ndc5(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2);
libqt_string KLocalizedContext_I18ndc6(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3);
libqt_string KLocalizedContext_I18ndc7(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4);
libqt_string KLocalizedContext_I18ndc8(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5);
libqt_string KLocalizedContext_I18ndc9(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6);
libqt_string KLocalizedContext_I18ndc10(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7);
libqt_string KLocalizedContext_I18ndc11(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8);
libqt_string KLocalizedContext_I18ndc12(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9);
libqt_string KLocalizedContext_I18ndc13(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10);
libqt_string KLocalizedContext_I18ndp4(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1);
libqt_string KLocalizedContext_I18ndp5(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2);
libqt_string KLocalizedContext_I18ndp6(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3);
libqt_string KLocalizedContext_I18ndp7(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4);
libqt_string KLocalizedContext_I18ndp8(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5);
libqt_string KLocalizedContext_I18ndp9(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6);
libqt_string KLocalizedContext_I18ndp10(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7);
libqt_string KLocalizedContext_I18ndp11(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8);
libqt_string KLocalizedContext_I18ndp12(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9);
libqt_string KLocalizedContext_I18ndp13(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10);
libqt_string KLocalizedContext_I18ndcp5(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1);
libqt_string KLocalizedContext_I18ndcp6(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2);
libqt_string KLocalizedContext_I18ndcp7(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3);
libqt_string KLocalizedContext_I18ndcp8(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4);
libqt_string KLocalizedContext_I18ndcp9(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5);
libqt_string KLocalizedContext_I18ndcp10(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6);
libqt_string KLocalizedContext_I18ndcp11(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7);
libqt_string KLocalizedContext_I18ndcp12(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8);
libqt_string KLocalizedContext_I18ndcp13(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9);
libqt_string KLocalizedContext_I18ndcp14(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10);
libqt_string KLocalizedContext_Xi18n2(const KLocalizedContext* self, const libqt_string message, const QVariant* param1);
libqt_string KLocalizedContext_Xi18n3(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2);
libqt_string KLocalizedContext_Xi18n4(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3);
libqt_string KLocalizedContext_Xi18n5(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4);
libqt_string KLocalizedContext_Xi18n6(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5);
libqt_string KLocalizedContext_Xi18n7(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6);
libqt_string KLocalizedContext_Xi18n8(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7);
libqt_string KLocalizedContext_Xi18n9(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8);
libqt_string KLocalizedContext_Xi18n10(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9);
libqt_string KLocalizedContext_Xi18n11(const KLocalizedContext* self, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10);
libqt_string KLocalizedContext_Xi18nc3(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1);
libqt_string KLocalizedContext_Xi18nc4(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2);
libqt_string KLocalizedContext_Xi18nc5(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3);
libqt_string KLocalizedContext_Xi18nc6(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4);
libqt_string KLocalizedContext_Xi18nc7(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5);
libqt_string KLocalizedContext_Xi18nc8(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6);
libqt_string KLocalizedContext_Xi18nc9(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7);
libqt_string KLocalizedContext_Xi18nc10(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8);
libqt_string KLocalizedContext_Xi18nc11(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9);
libqt_string KLocalizedContext_Xi18nc12(const KLocalizedContext* self, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10);
libqt_string KLocalizedContext_Xi18np3(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1);
libqt_string KLocalizedContext_Xi18np4(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2);
libqt_string KLocalizedContext_Xi18np5(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3);
libqt_string KLocalizedContext_Xi18np6(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4);
libqt_string KLocalizedContext_Xi18np7(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5);
libqt_string KLocalizedContext_Xi18np8(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6);
libqt_string KLocalizedContext_Xi18np9(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7);
libqt_string KLocalizedContext_Xi18np10(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8);
libqt_string KLocalizedContext_Xi18np11(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9);
libqt_string KLocalizedContext_Xi18np12(const KLocalizedContext* self, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10);
libqt_string KLocalizedContext_Xi18ncp4(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1);
libqt_string KLocalizedContext_Xi18ncp5(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2);
libqt_string KLocalizedContext_Xi18ncp6(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3);
libqt_string KLocalizedContext_Xi18ncp7(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4);
libqt_string KLocalizedContext_Xi18ncp8(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5);
libqt_string KLocalizedContext_Xi18ncp9(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6);
libqt_string KLocalizedContext_Xi18ncp10(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7);
libqt_string KLocalizedContext_Xi18ncp11(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8);
libqt_string KLocalizedContext_Xi18ncp12(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9);
libqt_string KLocalizedContext_Xi18ncp13(const KLocalizedContext* self, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10);
libqt_string KLocalizedContext_Xi18nd3(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1);
libqt_string KLocalizedContext_Xi18nd4(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2);
libqt_string KLocalizedContext_Xi18nd5(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3);
libqt_string KLocalizedContext_Xi18nd6(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4);
libqt_string KLocalizedContext_Xi18nd7(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5);
libqt_string KLocalizedContext_Xi18nd8(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6);
libqt_string KLocalizedContext_Xi18nd9(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7);
libqt_string KLocalizedContext_Xi18nd10(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8);
libqt_string KLocalizedContext_Xi18nd11(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9);
libqt_string KLocalizedContext_Xi18nd12(const KLocalizedContext* self, const libqt_string domain, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10);
libqt_string KLocalizedContext_Xi18ndc4(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1);
libqt_string KLocalizedContext_Xi18ndc5(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2);
libqt_string KLocalizedContext_Xi18ndc6(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3);
libqt_string KLocalizedContext_Xi18ndc7(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4);
libqt_string KLocalizedContext_Xi18ndc8(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5);
libqt_string KLocalizedContext_Xi18ndc9(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6);
libqt_string KLocalizedContext_Xi18ndc10(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7);
libqt_string KLocalizedContext_Xi18ndc11(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8);
libqt_string KLocalizedContext_Xi18ndc12(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9);
libqt_string KLocalizedContext_Xi18ndc13(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string message, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10);
libqt_string KLocalizedContext_Xi18ndp4(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1);
libqt_string KLocalizedContext_Xi18ndp5(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2);
libqt_string KLocalizedContext_Xi18ndp6(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3);
libqt_string KLocalizedContext_Xi18ndp7(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4);
libqt_string KLocalizedContext_Xi18ndp8(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5);
libqt_string KLocalizedContext_Xi18ndp9(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6);
libqt_string KLocalizedContext_Xi18ndp10(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7);
libqt_string KLocalizedContext_Xi18ndp11(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8);
libqt_string KLocalizedContext_Xi18ndp12(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9);
libqt_string KLocalizedContext_Xi18ndp13(const KLocalizedContext* self, const libqt_string domain, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10);
libqt_string KLocalizedContext_Xi18ndcp5(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1);
libqt_string KLocalizedContext_Xi18ndcp6(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2);
libqt_string KLocalizedContext_Xi18ndcp7(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3);
libqt_string KLocalizedContext_Xi18ndcp8(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4);
libqt_string KLocalizedContext_Xi18ndcp9(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5);
libqt_string KLocalizedContext_Xi18ndcp10(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6);
libqt_string KLocalizedContext_Xi18ndcp11(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7);
libqt_string KLocalizedContext_Xi18ndcp12(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8);
libqt_string KLocalizedContext_Xi18ndcp13(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9);
libqt_string KLocalizedContext_Xi18ndcp14(const KLocalizedContext* self, const libqt_string domain, const libqt_string context, const libqt_string singular, const libqt_string plural, const QVariant* param1, const QVariant* param2, const QVariant* param3, const QVariant* param4, const QVariant* param5, const QVariant* param6, const QVariant* param7, const QVariant* param8, const QVariant* param9, const QVariant* param10);
bool KLocalizedContext_Event(KLocalizedContext* self, QEvent* event);
void KLocalizedContext_OnEvent(KLocalizedContext* self, intptr_t slot);
bool KLocalizedContext_QBaseEvent(KLocalizedContext* self, QEvent* event);
bool KLocalizedContext_EventFilter(KLocalizedContext* self, QObject* watched, QEvent* event);
void KLocalizedContext_OnEventFilter(KLocalizedContext* self, intptr_t slot);
bool KLocalizedContext_QBaseEventFilter(KLocalizedContext* self, QObject* watched, QEvent* event);
void KLocalizedContext_TimerEvent(KLocalizedContext* self, QTimerEvent* event);
void KLocalizedContext_OnTimerEvent(KLocalizedContext* self, intptr_t slot);
void KLocalizedContext_QBaseTimerEvent(KLocalizedContext* self, QTimerEvent* event);
void KLocalizedContext_ChildEvent(KLocalizedContext* self, QChildEvent* event);
void KLocalizedContext_OnChildEvent(KLocalizedContext* self, intptr_t slot);
void KLocalizedContext_QBaseChildEvent(KLocalizedContext* self, QChildEvent* event);
void KLocalizedContext_CustomEvent(KLocalizedContext* self, QEvent* event);
void KLocalizedContext_OnCustomEvent(KLocalizedContext* self, intptr_t slot);
void KLocalizedContext_QBaseCustomEvent(KLocalizedContext* self, QEvent* event);
void KLocalizedContext_ConnectNotify(KLocalizedContext* self, const QMetaMethod* signal);
void KLocalizedContext_OnConnectNotify(KLocalizedContext* self, intptr_t slot);
void KLocalizedContext_QBaseConnectNotify(KLocalizedContext* self, const QMetaMethod* signal);
void KLocalizedContext_DisconnectNotify(KLocalizedContext* self, const QMetaMethod* signal);
void KLocalizedContext_OnDisconnectNotify(KLocalizedContext* self, intptr_t slot);
void KLocalizedContext_QBaseDisconnectNotify(KLocalizedContext* self, const QMetaMethod* signal);
QObject* KLocalizedContext_Sender(const KLocalizedContext* self);
void KLocalizedContext_OnSender(const KLocalizedContext* self, intptr_t slot);
QObject* KLocalizedContext_QBaseSender(const KLocalizedContext* self);
int KLocalizedContext_SenderSignalIndex(const KLocalizedContext* self);
void KLocalizedContext_OnSenderSignalIndex(const KLocalizedContext* self, intptr_t slot);
int KLocalizedContext_QBaseSenderSignalIndex(const KLocalizedContext* self);
int KLocalizedContext_Receivers(const KLocalizedContext* self, const char* signal);
void KLocalizedContext_OnReceivers(const KLocalizedContext* self, intptr_t slot);
int KLocalizedContext_QBaseReceivers(const KLocalizedContext* self, const char* signal);
bool KLocalizedContext_IsSignalConnected(const KLocalizedContext* self, const QMetaMethod* signal);
void KLocalizedContext_OnIsSignalConnected(const KLocalizedContext* self, intptr_t slot);
bool KLocalizedContext_QBaseIsSignalConnected(const KLocalizedContext* self, const QMetaMethod* signal);
void KLocalizedContext_Delete(KLocalizedContext* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
