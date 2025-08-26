#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKFUZZYMATCHER_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKFUZZYMATCHER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFuzzyMatcher__Range)
typedef KFuzzyMatcher::Range KFuzzyMatcher__Range;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KFuzzyMatcher__Result)
typedef KFuzzyMatcher::Result KFuzzyMatcher__Result;
#endif
#else
typedef struct KFuzzyMatcher KFuzzyMatcher;
typedef struct KFuzzyMatcher__Range KFuzzyMatcher__Range;
typedef struct KFuzzyMatcher__Result KFuzzyMatcher__Result;
#endif

KFuzzyMatcher__Result* KFuzzyMatcher__Result_new(const KFuzzyMatcher__Result* other);
KFuzzyMatcher__Result* KFuzzyMatcher__Result_new2(KFuzzyMatcher__Result* other);
void KFuzzyMatcher__Result_CopyAssign(KFuzzyMatcher__Result* self, KFuzzyMatcher__Result* other);
void KFuzzyMatcher__Result_MoveAssign(KFuzzyMatcher__Result* self, KFuzzyMatcher__Result* other);
int KFuzzyMatcher__Result_Score(const KFuzzyMatcher__Result* self);
void KFuzzyMatcher__Result_SetScore(KFuzzyMatcher__Result* self, int score);
bool KFuzzyMatcher__Result_Matched(const KFuzzyMatcher__Result* self);
void KFuzzyMatcher__Result_SetMatched(KFuzzyMatcher__Result* self, bool matched);
void KFuzzyMatcher__Result_Delete(KFuzzyMatcher__Result* self);

KFuzzyMatcher__Range* KFuzzyMatcher__Range_new();
KFuzzyMatcher__Range* KFuzzyMatcher__Range_new2(const KFuzzyMatcher__Range* param1);
int KFuzzyMatcher__Range_Start(const KFuzzyMatcher__Range* self);
void KFuzzyMatcher__Range_SetStart(KFuzzyMatcher__Range* self, int start);
int KFuzzyMatcher__Range_Length(const KFuzzyMatcher__Range* self);
void KFuzzyMatcher__Range_SetLength(KFuzzyMatcher__Range* self, int length);
void KFuzzyMatcher__Range_Delete(KFuzzyMatcher__Range* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
