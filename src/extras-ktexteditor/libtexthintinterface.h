#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBTEXTHINTINTERFACE_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBTEXTHINTINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KTextEditor::Cursor KTextEditor__Cursor;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__TextHintProvider)
typedef KTextEditor::TextHintProvider KTextEditor__TextHintProvider;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__View)
typedef KTextEditor::View KTextEditor__View;
#endif
#else
typedef struct KTextEditor__Cursor KTextEditor__Cursor;
typedef struct KTextEditor__TextHintProvider KTextEditor__TextHintProvider;
typedef struct KTextEditor__View KTextEditor__View;
#endif

KTextEditor__TextHintProvider* KTextEditor__TextHintProvider_new();
libqt_string KTextEditor__TextHintProvider_TextHint(KTextEditor__TextHintProvider* self, KTextEditor__View* view, const KTextEditor__Cursor* position);
void KTextEditor__TextHintProvider_OnTextHint(KTextEditor__TextHintProvider* self, intptr_t slot);
libqt_string KTextEditor__TextHintProvider_QBaseTextHint(KTextEditor__TextHintProvider* self, KTextEditor__View* view, const KTextEditor__Cursor* position);
void KTextEditor__TextHintProvider_Delete(KTextEditor__TextHintProvider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
