#pragma once
#ifndef SRC_EXTRAS_KCOMPLETIONC_LIBKCOMPLETIONMATCHES_H
#define SRC_EXTRAS_KCOMPLETIONC_LIBKCOMPLETIONMATCHES_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCompletionMatches KCompletionMatches;
#endif

KCompletionMatches* KCompletionMatches_new(bool sort);
KCompletionMatches* KCompletionMatches_new2(const KCompletionMatches* param1);
void KCompletionMatches_OperatorAssign(KCompletionMatches* self, const KCompletionMatches* param1);
void KCompletionMatches_RemoveDuplicates(KCompletionMatches* self);
libqt_list /* of libqt_string */ KCompletionMatches_List(const KCompletionMatches* self);
bool KCompletionMatches_Sorting(const KCompletionMatches* self);
libqt_list /* of libqt_string */ KCompletionMatches_List1(const KCompletionMatches* self, bool sort);
void KCompletionMatches_Delete(KCompletionMatches* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
