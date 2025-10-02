#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBDEFINITION_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBDEFINITION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
typedef KSyntaxHighlighting::Definition KSyntaxHighlighting__Definition;
typedef KSyntaxHighlighting::Format KSyntaxHighlighting__Format;
#else
typedef struct KSyntaxHighlighting__Definition KSyntaxHighlighting__Definition;
typedef struct KSyntaxHighlighting__Format KSyntaxHighlighting__Format;
typedef struct QChar QChar;
#endif

KSyntaxHighlighting__Definition* KSyntaxHighlighting__Definition_new();
KSyntaxHighlighting__Definition* KSyntaxHighlighting__Definition_new2(const KSyntaxHighlighting__Definition* other);
void KSyntaxHighlighting__Definition_OperatorAssign(KSyntaxHighlighting__Definition* self, const KSyntaxHighlighting__Definition* rhs);
bool KSyntaxHighlighting__Definition_OperatorEqual(const KSyntaxHighlighting__Definition* self, const KSyntaxHighlighting__Definition* other);
bool KSyntaxHighlighting__Definition_OperatorNotEqual(const KSyntaxHighlighting__Definition* self, const KSyntaxHighlighting__Definition* other);
bool KSyntaxHighlighting__Definition_IsValid(const KSyntaxHighlighting__Definition* self);
libqt_string KSyntaxHighlighting__Definition_FilePath(const KSyntaxHighlighting__Definition* self);
libqt_string KSyntaxHighlighting__Definition_Name(const KSyntaxHighlighting__Definition* self);
libqt_list /* of libqt_string */ KSyntaxHighlighting__Definition_AlternativeNames(const KSyntaxHighlighting__Definition* self);
libqt_string KSyntaxHighlighting__Definition_TranslatedName(const KSyntaxHighlighting__Definition* self);
libqt_string KSyntaxHighlighting__Definition_Section(const KSyntaxHighlighting__Definition* self);
libqt_string KSyntaxHighlighting__Definition_TranslatedSection(const KSyntaxHighlighting__Definition* self);
libqt_list /* of libqt_string */ KSyntaxHighlighting__Definition_MimeTypes(const KSyntaxHighlighting__Definition* self);
libqt_list /* of libqt_string */ KSyntaxHighlighting__Definition_Extensions(const KSyntaxHighlighting__Definition* self);
int KSyntaxHighlighting__Definition_Version(const KSyntaxHighlighting__Definition* self);
int KSyntaxHighlighting__Definition_Priority(const KSyntaxHighlighting__Definition* self);
bool KSyntaxHighlighting__Definition_IsHidden(const KSyntaxHighlighting__Definition* self);
libqt_string KSyntaxHighlighting__Definition_Style(const KSyntaxHighlighting__Definition* self);
libqt_string KSyntaxHighlighting__Definition_Indenter(const KSyntaxHighlighting__Definition* self);
libqt_string KSyntaxHighlighting__Definition_Author(const KSyntaxHighlighting__Definition* self);
libqt_string KSyntaxHighlighting__Definition_License(const KSyntaxHighlighting__Definition* self);
bool KSyntaxHighlighting__Definition_IsWordDelimiter(const KSyntaxHighlighting__Definition* self, QChar* c);
bool KSyntaxHighlighting__Definition_IsWordWrapDelimiter(const KSyntaxHighlighting__Definition* self, QChar* c);
bool KSyntaxHighlighting__Definition_FoldingEnabled(const KSyntaxHighlighting__Definition* self);
bool KSyntaxHighlighting__Definition_IndentationBasedFoldingEnabled(const KSyntaxHighlighting__Definition* self);
libqt_list /* of libqt_string */ KSyntaxHighlighting__Definition_FoldingIgnoreList(const KSyntaxHighlighting__Definition* self);
libqt_list /* of libqt_string */ KSyntaxHighlighting__Definition_KeywordLists(const KSyntaxHighlighting__Definition* self);
libqt_list /* of libqt_string */ KSyntaxHighlighting__Definition_KeywordList(const KSyntaxHighlighting__Definition* self, const libqt_string name);
bool KSyntaxHighlighting__Definition_SetKeywordList(KSyntaxHighlighting__Definition* self, const libqt_string name, const libqt_list /* of libqt_string */ content);
libqt_list /* of KSyntaxHighlighting__Format* */ KSyntaxHighlighting__Definition_Formats(const KSyntaxHighlighting__Definition* self);
libqt_list /* of KSyntaxHighlighting__Definition* */ KSyntaxHighlighting__Definition_IncludedDefinitions(const KSyntaxHighlighting__Definition* self);
libqt_string KSyntaxHighlighting__Definition_SingleLineCommentMarker(const KSyntaxHighlighting__Definition* self);
int KSyntaxHighlighting__Definition_SingleLineCommentPosition(const KSyntaxHighlighting__Definition* self);
libqt_pair /* tuple of libqt_string and libqt_string */ KSyntaxHighlighting__Definition_MultiLineCommentMarker(const KSyntaxHighlighting__Definition* self);
libqt_list /* of libqt_pair  tuple of QChar* and libqt_string  */ KSyntaxHighlighting__Definition_CharacterEncodings(const KSyntaxHighlighting__Definition* self);
void KSyntaxHighlighting__Definition_Delete(KSyntaxHighlighting__Definition* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
