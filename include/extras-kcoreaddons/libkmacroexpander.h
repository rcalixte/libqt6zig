#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKMACROEXPANDER_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKMACROEXPANDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCharMacroExpander KCharMacroExpander;
typedef struct KMacroExpander KMacroExpander;
typedef struct KMacroExpanderBase KMacroExpanderBase;
typedef struct KWordMacroExpander KWordMacroExpander;
typedef struct QChar QChar;
#endif

KMacroExpanderBase* KMacroExpanderBase_new();
KMacroExpanderBase* KMacroExpanderBase_new2(QChar* c);
void KMacroExpanderBase_ExpandMacros(KMacroExpanderBase* self, libqt_string str);
bool KMacroExpanderBase_ExpandMacrosShellQuote(KMacroExpanderBase* self, libqt_string str, int* pos);
bool KMacroExpanderBase_ExpandMacrosShellQuote2(KMacroExpanderBase* self, libqt_string str);
void KMacroExpanderBase_SetEscapeChar(KMacroExpanderBase* self, QChar* c);
QChar* KMacroExpanderBase_EscapeChar(const KMacroExpanderBase* self);
int KMacroExpanderBase_ExpandPlainMacro(KMacroExpanderBase* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
void KMacroExpanderBase_OnExpandPlainMacro(KMacroExpanderBase* self, intptr_t slot);
int KMacroExpanderBase_QBaseExpandPlainMacro(KMacroExpanderBase* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
int KMacroExpanderBase_ExpandEscapedMacro(KMacroExpanderBase* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
void KMacroExpanderBase_OnExpandEscapedMacro(KMacroExpanderBase* self, intptr_t slot);
int KMacroExpanderBase_QBaseExpandEscapedMacro(KMacroExpanderBase* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
void KMacroExpanderBase_Delete(KMacroExpanderBase* self);

KWordMacroExpander* KWordMacroExpander_new();
KWordMacroExpander* KWordMacroExpander_new2(QChar* c);
int KWordMacroExpander_ExpandPlainMacro(KWordMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
void KWordMacroExpander_OnExpandPlainMacro(KWordMacroExpander* self, intptr_t slot);
int KWordMacroExpander_QBaseExpandPlainMacro(KWordMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
int KWordMacroExpander_ExpandEscapedMacro(KWordMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
void KWordMacroExpander_OnExpandEscapedMacro(KWordMacroExpander* self, intptr_t slot);
int KWordMacroExpander_QBaseExpandEscapedMacro(KWordMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
bool KWordMacroExpander_ExpandMacro(KWordMacroExpander* self, const libqt_string str, libqt_list /* of libqt_string */ retVal);
void KWordMacroExpander_OnExpandMacro(KWordMacroExpander* self, intptr_t slot);
bool KWordMacroExpander_QBaseExpandMacro(KWordMacroExpander* self, const libqt_string str, libqt_list /* of libqt_string */ retVal);
void KWordMacroExpander_Delete(KWordMacroExpander* self);

KCharMacroExpander* KCharMacroExpander_new();
KCharMacroExpander* KCharMacroExpander_new2(QChar* c);
int KCharMacroExpander_ExpandPlainMacro(KCharMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
void KCharMacroExpander_OnExpandPlainMacro(KCharMacroExpander* self, intptr_t slot);
int KCharMacroExpander_QBaseExpandPlainMacro(KCharMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
int KCharMacroExpander_ExpandEscapedMacro(KCharMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
void KCharMacroExpander_OnExpandEscapedMacro(KCharMacroExpander* self, intptr_t slot);
int KCharMacroExpander_QBaseExpandEscapedMacro(KCharMacroExpander* self, const libqt_string str, int pos, libqt_list /* of libqt_string */ retVal);
bool KCharMacroExpander_ExpandMacro(KCharMacroExpander* self, QChar* chr, libqt_list /* of libqt_string */ retVal);
void KCharMacroExpander_OnExpandMacro(KCharMacroExpander* self, intptr_t slot);
bool KCharMacroExpander_QBaseExpandMacro(KCharMacroExpander* self, QChar* chr, libqt_list /* of libqt_string */ retVal);
void KCharMacroExpander_Delete(KCharMacroExpander* self);

libqt_string KMacroExpander_ExpandMacros(const libqt_string param1, const libqt_map /* of QChar* to libqt_string */ param2, QChar* param3);
libqt_string KMacroExpander_ExpandMacrosShellQuote(const libqt_string param1, const libqt_map /* of QChar* to libqt_string */ param2, QChar* param3);
libqt_string KMacroExpander_ExpandMacros2(const libqt_string param1, const libqt_map /* of libqt_string to libqt_string */ param2, QChar* param3);
libqt_string KMacroExpander_ExpandMacrosShellQuote2(const libqt_string param1, const libqt_map /* of libqt_string to libqt_string */ param2, QChar* param3);
libqt_string KMacroExpander_ExpandMacros3(const libqt_string param1, const libqt_map /* of QChar* to libqt_list  of libqt_string  */ param2, QChar* param3);
libqt_string KMacroExpander_ExpandMacros4(const libqt_string param1, const libqt_map /* of libqt_string to libqt_list  of libqt_string  */ param2, QChar* param3);
libqt_string KMacroExpander_ExpandMacrosShellQuote3(const libqt_string param1, const libqt_map /* of QChar* to libqt_list  of libqt_string  */ param2, QChar* param3);
libqt_string KMacroExpander_ExpandMacrosShellQuote4(const libqt_string param1, const libqt_map /* of libqt_string to libqt_list  of libqt_string  */ param2, QChar* param3);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
