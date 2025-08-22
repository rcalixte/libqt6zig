#pragma once
#ifndef SRC_EXTRAS_KI18NC_LIBKLOCALIZEDSTRING_H
#define SRC_EXTRAS_KI18NC_LIBKLOCALIZEDSTRING_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KLocalizedString KLocalizedString;
typedef struct QChar QChar;
#endif

KLocalizedString* KLocalizedString_new();
KLocalizedString* KLocalizedString_new2(const KLocalizedString* rhs);
void KLocalizedString_OperatorAssign(KLocalizedString* self, const KLocalizedString* rhs);
bool KLocalizedString_IsEmpty(const KLocalizedString* self);
libqt_string KLocalizedString_ToString(const KLocalizedString* self);
libqt_string KLocalizedString_ToString2(const KLocalizedString* self, const libqt_list /* of libqt_string */ languages);
libqt_string KLocalizedString_ToString3(const KLocalizedString* self, const char* domain);
libqt_string KLocalizedString_ToString4(const KLocalizedString* self, int format);
KLocalizedString* KLocalizedString_WithLanguages(const KLocalizedString* self, const libqt_list /* of libqt_string */ languages);
KLocalizedString* KLocalizedString_WithDomain(const KLocalizedString* self, const char* domain);
KLocalizedString* KLocalizedString_WithFormat(const KLocalizedString* self, int format);
KLocalizedString* KLocalizedString_Subs(const KLocalizedString* self, int a);
KLocalizedString* KLocalizedString_Subs2(const KLocalizedString* self, unsigned int a);
KLocalizedString* KLocalizedString_Subs3(const KLocalizedString* self, long a);
KLocalizedString* KLocalizedString_Subs4(const KLocalizedString* self, unsigned long a);
KLocalizedString* KLocalizedString_Subs5(const KLocalizedString* self, long long a);
KLocalizedString* KLocalizedString_Subs6(const KLocalizedString* self, unsigned long long a);
KLocalizedString* KLocalizedString_Subs7(const KLocalizedString* self, double a);
KLocalizedString* KLocalizedString_Subs8(const KLocalizedString* self, QChar* a);
KLocalizedString* KLocalizedString_Subs9(const KLocalizedString* self, const libqt_string a);
KLocalizedString* KLocalizedString_Subs10(const KLocalizedString* self, const KLocalizedString* a);
KLocalizedString* KLocalizedString_InContext(const KLocalizedString* self, const libqt_string key, const libqt_string value);
KLocalizedString* KLocalizedString_RelaxSubs(const KLocalizedString* self);
KLocalizedString* KLocalizedString_IgnoreMarkup(const KLocalizedString* self);
libqt_string KLocalizedString_UntranslatedText(const KLocalizedString* self);
void KLocalizedString_SetApplicationDomain(const libqt_string domain);
libqt_string KLocalizedString_ApplicationDomain();
libqt_list /* of libqt_string */ KLocalizedString_Languages();
void KLocalizedString_SetLanguages(const libqt_list /* of libqt_string */ languages);
void KLocalizedString_ClearLanguages();
bool KLocalizedString_IsApplicationTranslatedInto(const libqt_string language);
libqt_list /* set of libqt_string */ KLocalizedString_AvailableApplicationTranslations();
libqt_list /* set of libqt_string */ KLocalizedString_AvailableDomainTranslations(const libqt_string domain);
void KLocalizedString_AddDomainLocaleDir(const libqt_string domain, const libqt_string path);
libqt_string KLocalizedString_LocalizedFilePath(const libqt_string filePath);
libqt_string KLocalizedString_RemoveAcceleratorMarker(const libqt_string label);
KLocalizedString* KLocalizedString_Subs22(const KLocalizedString* self, int a, int fieldWidth);
KLocalizedString* KLocalizedString_Subs32(const KLocalizedString* self, int a, int fieldWidth, int base);
KLocalizedString* KLocalizedString_Subs42(const KLocalizedString* self, int a, int fieldWidth, int base, QChar* fillChar);
KLocalizedString* KLocalizedString_Subs23(const KLocalizedString* self, unsigned int a, int fieldWidth);
KLocalizedString* KLocalizedString_Subs33(const KLocalizedString* self, unsigned int a, int fieldWidth, int base);
KLocalizedString* KLocalizedString_Subs43(const KLocalizedString* self, unsigned int a, int fieldWidth, int base, QChar* fillChar);
KLocalizedString* KLocalizedString_Subs24(const KLocalizedString* self, long a, int fieldWidth);
KLocalizedString* KLocalizedString_Subs34(const KLocalizedString* self, long a, int fieldWidth, int base);
KLocalizedString* KLocalizedString_Subs44(const KLocalizedString* self, long a, int fieldWidth, int base, QChar* fillChar);
KLocalizedString* KLocalizedString_Subs25(const KLocalizedString* self, unsigned long a, int fieldWidth);
KLocalizedString* KLocalizedString_Subs35(const KLocalizedString* self, unsigned long a, int fieldWidth, int base);
KLocalizedString* KLocalizedString_Subs45(const KLocalizedString* self, unsigned long a, int fieldWidth, int base, QChar* fillChar);
KLocalizedString* KLocalizedString_Subs26(const KLocalizedString* self, long long a, int fieldWidth);
KLocalizedString* KLocalizedString_Subs36(const KLocalizedString* self, long long a, int fieldWidth, int base);
KLocalizedString* KLocalizedString_Subs46(const KLocalizedString* self, long long a, int fieldWidth, int base, QChar* fillChar);
KLocalizedString* KLocalizedString_Subs27(const KLocalizedString* self, unsigned long long a, int fieldWidth);
KLocalizedString* KLocalizedString_Subs37(const KLocalizedString* self, unsigned long long a, int fieldWidth, int base);
KLocalizedString* KLocalizedString_Subs47(const KLocalizedString* self, unsigned long long a, int fieldWidth, int base, QChar* fillChar);
KLocalizedString* KLocalizedString_Subs28(const KLocalizedString* self, double a, int fieldWidth);
KLocalizedString* KLocalizedString_Subs38(const KLocalizedString* self, double a, int fieldWidth, char format);
KLocalizedString* KLocalizedString_Subs48(const KLocalizedString* self, double a, int fieldWidth, char format, int precision);
KLocalizedString* KLocalizedString_Subs52(const KLocalizedString* self, double a, int fieldWidth, char format, int precision, QChar* fillChar);
KLocalizedString* KLocalizedString_Subs29(const KLocalizedString* self, QChar* a, int fieldWidth);
KLocalizedString* KLocalizedString_Subs39(const KLocalizedString* self, QChar* a, int fieldWidth, QChar* fillChar);
KLocalizedString* KLocalizedString_Subs210(const KLocalizedString* self, const libqt_string a, int fieldWidth);
KLocalizedString* KLocalizedString_Subs310(const KLocalizedString* self, const libqt_string a, int fieldWidth, QChar* fillChar);
KLocalizedString* KLocalizedString_Subs211(const KLocalizedString* self, const KLocalizedString* a, int fieldWidth);
KLocalizedString* KLocalizedString_Subs311(const KLocalizedString* self, const KLocalizedString* a, int fieldWidth, QChar* fillChar);
void KLocalizedString_Delete(KLocalizedString* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
