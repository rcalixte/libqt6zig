#pragma once
#ifndef SRC_EXTRAS_KI18NC_LIBKLAZYLOCALIZEDSTRING_H
#define SRC_EXTRAS_KI18NC_LIBKLAZYLOCALIZEDSTRING_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KLazyLocalizedString KLazyLocalizedString;
typedef struct KLocalizedString KLocalizedString;
typedef struct QChar QChar;
#endif

KLazyLocalizedString* KLazyLocalizedString_new(const KLazyLocalizedString* other);
KLazyLocalizedString* KLazyLocalizedString_new2(KLazyLocalizedString* other);
KLazyLocalizedString* KLazyLocalizedString_new3();
void KLazyLocalizedString_CopyAssign(KLazyLocalizedString* self, KLazyLocalizedString* other);
void KLazyLocalizedString_MoveAssign(KLazyLocalizedString* self, KLazyLocalizedString* other);
KLocalizedString* KLazyLocalizedString_ToKLocalizedString(const KLazyLocalizedString* self);
bool KLazyLocalizedString_IsEmpty(const KLazyLocalizedString* self);
const char* KLazyLocalizedString_UntranslatedText(const KLazyLocalizedString* self);
libqt_string KLazyLocalizedString_ToString(const KLazyLocalizedString* self);
libqt_string KLazyLocalizedString_ToString2(const KLazyLocalizedString* self, const libqt_list /* of libqt_string */ languages);
libqt_string KLazyLocalizedString_ToString3(const KLazyLocalizedString* self, const char* domain);
libqt_string KLazyLocalizedString_ToString4(const KLazyLocalizedString* self, int format);
KLocalizedString* KLazyLocalizedString_WithLanguages(const KLazyLocalizedString* self, const libqt_list /* of libqt_string */ languages);
KLocalizedString* KLazyLocalizedString_WithDomain(const KLazyLocalizedString* self, const char* domain);
KLocalizedString* KLazyLocalizedString_WithFormat(const KLazyLocalizedString* self, int format);
KLocalizedString* KLazyLocalizedString_Subs(const KLazyLocalizedString* self, int a);
KLocalizedString* KLazyLocalizedString_Subs2(const KLazyLocalizedString* self, unsigned int a);
KLocalizedString* KLazyLocalizedString_Subs3(const KLazyLocalizedString* self, long a);
KLocalizedString* KLazyLocalizedString_Subs4(const KLazyLocalizedString* self, unsigned long a);
KLocalizedString* KLazyLocalizedString_Subs5(const KLazyLocalizedString* self, long long a);
KLocalizedString* KLazyLocalizedString_Subs6(const KLazyLocalizedString* self, unsigned long long a);
KLocalizedString* KLazyLocalizedString_Subs7(const KLazyLocalizedString* self, double a);
KLocalizedString* KLazyLocalizedString_Subs8(const KLazyLocalizedString* self, QChar* a);
KLocalizedString* KLazyLocalizedString_Subs9(const KLazyLocalizedString* self, const libqt_string a);
KLocalizedString* KLazyLocalizedString_Subs10(const KLazyLocalizedString* self, const KLocalizedString* a);
KLocalizedString* KLazyLocalizedString_InContext(const KLazyLocalizedString* self, const libqt_string key, const libqt_string value);
KLocalizedString* KLazyLocalizedString_RelaxSubs(const KLazyLocalizedString* self);
KLocalizedString* KLazyLocalizedString_IgnoreMarkup(const KLazyLocalizedString* self);
KLocalizedString* KLazyLocalizedString_Subs22(const KLazyLocalizedString* self, int a, int fieldWidth);
KLocalizedString* KLazyLocalizedString_Subs32(const KLazyLocalizedString* self, int a, int fieldWidth, int base);
KLocalizedString* KLazyLocalizedString_Subs42(const KLazyLocalizedString* self, int a, int fieldWidth, int base, QChar* fillChar);
KLocalizedString* KLazyLocalizedString_Subs23(const KLazyLocalizedString* self, unsigned int a, int fieldWidth);
KLocalizedString* KLazyLocalizedString_Subs33(const KLazyLocalizedString* self, unsigned int a, int fieldWidth, int base);
KLocalizedString* KLazyLocalizedString_Subs43(const KLazyLocalizedString* self, unsigned int a, int fieldWidth, int base, QChar* fillChar);
KLocalizedString* KLazyLocalizedString_Subs24(const KLazyLocalizedString* self, long a, int fieldWidth);
KLocalizedString* KLazyLocalizedString_Subs34(const KLazyLocalizedString* self, long a, int fieldWidth, int base);
KLocalizedString* KLazyLocalizedString_Subs44(const KLazyLocalizedString* self, long a, int fieldWidth, int base, QChar* fillChar);
KLocalizedString* KLazyLocalizedString_Subs25(const KLazyLocalizedString* self, unsigned long a, int fieldWidth);
KLocalizedString* KLazyLocalizedString_Subs35(const KLazyLocalizedString* self, unsigned long a, int fieldWidth, int base);
KLocalizedString* KLazyLocalizedString_Subs45(const KLazyLocalizedString* self, unsigned long a, int fieldWidth, int base, QChar* fillChar);
KLocalizedString* KLazyLocalizedString_Subs26(const KLazyLocalizedString* self, long long a, int fieldWidth);
KLocalizedString* KLazyLocalizedString_Subs36(const KLazyLocalizedString* self, long long a, int fieldWidth, int base);
KLocalizedString* KLazyLocalizedString_Subs46(const KLazyLocalizedString* self, long long a, int fieldWidth, int base, QChar* fillChar);
KLocalizedString* KLazyLocalizedString_Subs27(const KLazyLocalizedString* self, unsigned long long a, int fieldWidth);
KLocalizedString* KLazyLocalizedString_Subs37(const KLazyLocalizedString* self, unsigned long long a, int fieldWidth, int base);
KLocalizedString* KLazyLocalizedString_Subs47(const KLazyLocalizedString* self, unsigned long long a, int fieldWidth, int base, QChar* fillChar);
KLocalizedString* KLazyLocalizedString_Subs28(const KLazyLocalizedString* self, double a, int fieldWidth);
KLocalizedString* KLazyLocalizedString_Subs38(const KLazyLocalizedString* self, double a, int fieldWidth, char format);
KLocalizedString* KLazyLocalizedString_Subs48(const KLazyLocalizedString* self, double a, int fieldWidth, char format, int precision);
KLocalizedString* KLazyLocalizedString_Subs52(const KLazyLocalizedString* self, double a, int fieldWidth, char format, int precision, QChar* fillChar);
KLocalizedString* KLazyLocalizedString_Subs29(const KLazyLocalizedString* self, QChar* a, int fieldWidth);
KLocalizedString* KLazyLocalizedString_Subs39(const KLazyLocalizedString* self, QChar* a, int fieldWidth, QChar* fillChar);
KLocalizedString* KLazyLocalizedString_Subs210(const KLazyLocalizedString* self, const libqt_string a, int fieldWidth);
KLocalizedString* KLazyLocalizedString_Subs310(const KLazyLocalizedString* self, const libqt_string a, int fieldWidth, QChar* fillChar);
KLocalizedString* KLazyLocalizedString_Subs211(const KLazyLocalizedString* self, const KLocalizedString* a, int fieldWidth);
KLocalizedString* KLazyLocalizedString_Subs311(const KLazyLocalizedString* self, const KLocalizedString* a, int fieldWidth, QChar* fillChar);
void KLazyLocalizedString_Delete(KLazyLocalizedString* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
