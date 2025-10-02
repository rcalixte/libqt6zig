#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBSTATE_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBSTATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__State)
typedef KSyntaxHighlighting::State KSyntaxHighlighting__State;
#endif
#else
typedef struct KSyntaxHighlighting KSyntaxHighlighting;
typedef struct KSyntaxHighlighting__State KSyntaxHighlighting__State;
#endif

KSyntaxHighlighting__State* KSyntaxHighlighting__State_new();
KSyntaxHighlighting__State* KSyntaxHighlighting__State_new2(const KSyntaxHighlighting__State* other);
void KSyntaxHighlighting__State_OperatorAssign(KSyntaxHighlighting__State* self, const KSyntaxHighlighting__State* rhs);
bool KSyntaxHighlighting__State_OperatorEqual(const KSyntaxHighlighting__State* self, const KSyntaxHighlighting__State* other);
bool KSyntaxHighlighting__State_OperatorNotEqual(const KSyntaxHighlighting__State* self, const KSyntaxHighlighting__State* other);
bool KSyntaxHighlighting__State_IndentationBasedFoldingEnabled(const KSyntaxHighlighting__State* self);
void KSyntaxHighlighting__State_Delete(KSyntaxHighlighting__State* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
