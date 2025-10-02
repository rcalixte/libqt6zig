#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBFOLDINGREGION_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBFOLDINGREGION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KSyntaxHighlighting::FoldingRegion KSyntaxHighlighting__FoldingRegion;
#else
typedef struct KSyntaxHighlighting__FoldingRegion KSyntaxHighlighting__FoldingRegion;
#endif

KSyntaxHighlighting__FoldingRegion* KSyntaxHighlighting__FoldingRegion_new(const KSyntaxHighlighting__FoldingRegion* other);
KSyntaxHighlighting__FoldingRegion* KSyntaxHighlighting__FoldingRegion_new2(KSyntaxHighlighting__FoldingRegion* other);
KSyntaxHighlighting__FoldingRegion* KSyntaxHighlighting__FoldingRegion_new3();
KSyntaxHighlighting__FoldingRegion* KSyntaxHighlighting__FoldingRegion_new4(const KSyntaxHighlighting__FoldingRegion* param1);
void KSyntaxHighlighting__FoldingRegion_CopyAssign(KSyntaxHighlighting__FoldingRegion* self, KSyntaxHighlighting__FoldingRegion* other);
void KSyntaxHighlighting__FoldingRegion_MoveAssign(KSyntaxHighlighting__FoldingRegion* self, KSyntaxHighlighting__FoldingRegion* other);
bool KSyntaxHighlighting__FoldingRegion_OperatorEqual(const KSyntaxHighlighting__FoldingRegion* self, const KSyntaxHighlighting__FoldingRegion* other);
bool KSyntaxHighlighting__FoldingRegion_IsValid(const KSyntaxHighlighting__FoldingRegion* self);
int KSyntaxHighlighting__FoldingRegion_Id(const KSyntaxHighlighting__FoldingRegion* self);
int KSyntaxHighlighting__FoldingRegion_Type(const KSyntaxHighlighting__FoldingRegion* self);
KSyntaxHighlighting__FoldingRegion* KSyntaxHighlighting__FoldingRegion_Sibling(const KSyntaxHighlighting__FoldingRegion* self);
void KSyntaxHighlighting__FoldingRegion_Delete(KSyntaxHighlighting__FoldingRegion* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
